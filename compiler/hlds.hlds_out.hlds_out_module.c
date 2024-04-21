/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2024-04-21
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


// :- module hlds.hlds_out.hlds_out_module.
// :- implementation.

/*
INIT mercury__hlds__hlds_out__hlds_out_module__init
ENDINIT
*/

#include "hlds.hlds_out.hlds_out_module.mih"


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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
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
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "parse_tree.error_spec.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out_cons_id.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.hlds_out.hlds_out_inst_table.mih"
#include "hlds.hlds_out.hlds_out_mode.mih"
#include "hlds.hlds_out.hlds_out_pred.mih"
#include "hlds.hlds_out.hlds_out_type_table.mih"
#include "hlds.hlds_out.hlds_out_typeclass_table.mih"
#include "hlds.hlds_out.hlds_out_util.mih"



struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s {
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded;
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStrs_14;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__PredIdInt_16;
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__commit_0;
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStr_34;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredId_35;
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__conv0_DumpPredIdStr_34;
};


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dependency_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dependency_scc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dep_graph_edge_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word _ParentProc_7,
  MR_Word ChildProc_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ChildProc_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dep_graph_node_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Proc_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dependency_proc_5_p_0(
  MR_String Prefix_6,
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0(
  MR_Word Info_7,
  MR_Word Lang_8,
  MR_Word ModuleInfo_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(
  MR_Word DumpSpecPredTypeNames_5,
  MR_Word PredIdInfo_6,
  MR_Word STATE_VARIABLE_SpecPredMap_0_18,
  MR_Word * STATE_VARIABLE_SpecPredMap_19);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_space_and_table_trie_step_4_p_0(
  MR_Word TVarSet_5,
  MR_Word StepDesc_6,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_table_struct_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_table_struct_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_30,
  MR_Word * STATE_VARIABLE_State_31);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_arg_tabling_methods_4_p_0(
  MR_String Prefix_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_3,
  MR_Word * STATE_VARIABLE_State_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_args_4_p_0(
  MR_Word HeadConstArg_5,
  MR_Word TailConstArgs_6,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_avail_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0(
  MR_Word ModuleInfo_7,
  MR_Word DependencyInfo_8,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0(
  MR_Word Info_8,
  MR_Word DumpSpecPreds_9,
  MR_Word DumpSpecPredTypeNames_10,
  MR_Word Lang_11,
  MR_Word ModuleInfo_12,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_db_3_p_0(
  MR_Word ConstStructDb_4,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_footer_3_p_0(
  MR_Word Module_4,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[8][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[3][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[1][5];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[2][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[6][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][9];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[2][8];


struct hlds__hlds_out__hlds_out_module__vector_common_type_10_0_s {
  const MR_String hlds__hlds_out__hlds_out_module__vector_common_type_10_0__vct_10_f_0;
};

static /* final */ const struct hlds__hlds_out__hlds_out_module__vector_common_type_10_0_s hlds__hlds_out__hlds_out_module_vector_common_10[10];



static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[8][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   4 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2])),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]))
  },
  /* row   5 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__format_const_struct_db_3_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   6 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[1])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__format_preds_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   7 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[3])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[3][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[1])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[2][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[6][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   5 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[1][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[2][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};


static /* final */ const struct hlds__hlds_out__hlds_out_module__vector_common_type_10_0_s hlds__hlds_out__hlds_out_module_vector_common_10[10] = {
  /* row   0 */   { (MR_String) "int" },
  /* row   1 */   { (MR_String) "uint" },
  /* row   2 */   { (MR_String) "int8" },
  /* row   3 */   { (MR_String) "uint8" },
  /* row   4 */   { (MR_String) "int16" },
  /* row   5 */   { (MR_String) "uint16" },
  /* row   6 */   { (MR_String) "int32" },
  /* row   7 */   { (MR_String) "uint32" },
  /* row   8 */   { (MR_String) "int64" },
  /* row   9 */   { (MR_String) "uint64" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

static const MR_VA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_TypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0),
    (MR_TypeInfo) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0)
  }
};

static const MR_FA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_TypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  { (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  { (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0) }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dependency_scc_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_15;

  hlds__hlds_out__hlds_out_module__format_dependency_proc_5_p_0(((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_15));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dependency_scc_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word SCC_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  MR_Word STATE_VARIABLE_State_11_11;
  MR_Word Var_12;
  MR_Box conv1_STATE_VARIABLE_State_9;

  mercury__string__builder__append_string_3_p_0((MR_String) "% SCC\n", STATE_VARIABLE_State_0_8, &STATE_VARIABLE_State_11_11);
  {
    Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_12, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[1]));
    MR_hl_field(0, Var_12, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__format_dependency_scc_4_p_0_1));
    MR_hl_field(0, Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_12, 3) = ((MR_Box) ((MR_String) "  "));
    MR_hl_field(0, Var_12, 4) = ((MR_Box) (ModuleInfo_5));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_12, SCC_6, ((MR_Box) (STATE_VARIABLE_State_11_11)), &conv1_STATE_VARIABLE_State_9);
  *STATE_VARIABLE_State_9 = ((MR_Word) (conv1_STATE_VARIABLE_State_9));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dep_graph_edge_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word _ParentProc_7,
  MR_Word ChildProc_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_50_93_95_48_5_p_0(ModuleInfo_6, ChildProc_8, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_50_93_95_48_5_p_0(
  MR_Word ModuleInfo_6,
  MR_Word ChildProc_8,
  MR_Word STATE_VARIABLE_State_0_10,
  MR_Word * STATE_VARIABLE_State_11)
{
  hlds__hlds_out__hlds_out_module__format_dependency_proc_5_p_0((MR_String) "  to ", ModuleInfo_6, ChildProc_8, STATE_VARIABLE_State_0_10, STATE_VARIABLE_State_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dep_graph_node_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word Proc_6,
  MR_Word STATE_VARIABLE_State_0_8,
  MR_Word * STATE_VARIABLE_State_9)
{
  hlds__hlds_out__hlds_out_module__format_dependency_proc_5_p_0((MR_String) "calls from ", ModuleInfo_5, Proc_6, STATE_VARIABLE_State_0_8, STATE_VARIABLE_State_9);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_dependency_proc_5_p_0(
  MR_String Prefix_6,
  MR_Word ModuleInfo_7,
  MR_Word PredProcId_8,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 0))));
  MR_Integer ProcId_11 = ((MR_Integer) ((MR_hl_field(0, PredProcId_8, (MR_Integer) 1))));
  MR_Word Pieces_12;
  MR_String Desc_13;
  MR_Integer Var_23;
  MR_Integer Var_26;
  MR_Word Var_30;
  MR_Word Var_32;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_String Var_36;
  MR_Word Var_43;
  MR_Word Var_45;
  MR_String Var_46;
  MR_Word Var_53;
  MR_Word Var_55;

  Pieces_12 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_7, (MR_Integer) 1, PredProcId_8);
  Desc_13 = parse_tree__write_error_spec__error_pieces_to_one_line_string_1_f_0(Pieces_12);
  Var_23 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_10);
  Var_26 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_11);
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_0_14, &Var_30);
  mercury__string__builder__append_string_3_p_0(Prefix_6, Var_30, &Var_32);
  mercury__string__builder__append_string_3_p_0((MR_String) "pred ", Var_32, &Var_33);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Var_23, &Var_36);
  mercury__string__builder__append_string_3_p_0(Var_36, Var_33, &Var_35);
  mercury__string__builder__append_string_3_p_0((MR_String) " proc ", Var_35, &Var_43);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Var_26, &Var_46);
  mercury__string__builder__append_string_3_p_0(Var_46, Var_43, &Var_45);
  mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_45, &Var_53);
  mercury__string__builder__append_string_3_p_0(Desc_13, Var_53, &Var_55);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_55, STATE_VARIABLE_State_15);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStr_34 = ((MR_String) ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__conv0_DumpPredIdStr_34));
  hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStr_34, &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredId_35);
  if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
  {
    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__PredIdInt_16 == (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredId_35);
    if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
      hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__conv0_DumpPredIdStr_34, (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStrs_14, hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_3, env_ptr);
      (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0(
  MR_Word Info_7,
  MR_Word Lang_8,
  MR_Word ModuleInfo_9,
  MR_Word HeadVar__4_4,
  MR_Word STATE_VARIABLE_State_0_26,
  MR_Word * STATE_VARIABLE_State_27)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0_s env;

  {
    MR_Word PredId_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 0))));
    MR_Word PredInfo_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__4_4, (MR_Integer) 1))));
    MR_String DumpOptions_13 = ((MR_String) ((MR_hl_field(0, Info_7, (MR_Integer) 0))));
    MR_Word DumpPredNames_15;
    MR_String Var_36 = ((MR_String) ((MR_hl_field(0, Info_7, (MR_Integer) 1))));
    MR_Word Var_39;

    (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStrs_14 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 2))));
    DumpPredNames_15 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 3))));
    Var_39 = ((MR_Word) ((MR_hl_field(0, Info_7, (MR_Integer) 4))));
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_10, &(env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__PredIdInt_16);
    {
      MR_String Var_17;
      MR_Word Var_18;

      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStrs_14 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
      {
        Var_17 = ((MR_String) ((MR_hl_field(1, (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStrs_14, (MR_Integer) 0))));
        Var_18 = ((MR_Word) ((MR_hl_field(1, (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__DumpPredIdStrs_14, (MR_Integer) 1))));
      }
    }
    if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded))
    {
      MR_String Var_19;
      MR_Word Var_20;

      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = (DumpPredNames_15 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(1, DumpPredNames_15, (MR_Integer) 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(1, DumpPredNames_15, (MR_Integer) 1))));
      }
    }
    if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
    {
      hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_4(&env);
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded))
      {
        MR_String PredName_23;

        PredName_23 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_11);
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_23)), DumpPredNames_15);
      }
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
        hlds__hlds_out__hlds_out_pred__format_pred_7_p_0(Info_7, Lang_8, ModuleInfo_9, PredId_10, PredInfo_11, STATE_VARIABLE_State_0_26, STATE_VARIABLE_State_27);
      else
        *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
    }
    else
    {
      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_13, (MR_Char) 73);
      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded);
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_11);
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded))
      {
        {
          MR_Word ProcIds_24;
          MR_Integer ProcId_25;
          MR_Word Var_31;
          MR_Integer Var_50;

          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_13, (MR_Char) 73);
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded);
          if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
          {
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_11);
            if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
            {
              ProcIds_24 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_11);
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&ProcId_25);
              (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = (ProcIds_24 != (MR_Word) ((MR_Unsigned) 0U));
              if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
              {
                Var_50 = ((MR_Integer) ((MR_hl_field(1, ProcIds_24, (MR_Integer) 0))));
                Var_31 = ((MR_Word) ((MR_hl_field(1, ProcIds_24, (MR_Integer) 1))));
                (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = (ProcId_25 == Var_50);
                if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
                  (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded))
        {
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_13, (MR_Char) 85);
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded);
          if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_11);
        }
      }
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0_env_0__succeeded)
        *STATE_VARIABLE_State_27 = STATE_VARIABLE_State_0_26;
      else
        hlds__hlds_out__hlds_out_pred__format_pred_7_p_0(Info_7, Lang_8, ModuleInfo_9, PredId_10, PredInfo_11, STATE_VARIABLE_State_0_26, STATE_VARIABLE_State_27);
    }
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(
  MR_Word DumpSpecPredTypeNames_5,
  MR_Word PredIdInfo_6,
  MR_Word STATE_VARIABLE_SpecPredMap_0_18,
  MR_Word * STATE_VARIABLE_SpecPredMap_19)
{
  MR_bool succeeded;
  MR_Word PredInfo_9 = ((MR_Word) ((MR_hl_field(0, PredIdInfo_6, (MR_Integer) 1))));
  MR_Word Origin_10;
  MR_Word SpecialPredId_11;
  MR_Word TypeCtor_12;
  MR_Word Var_20;

  hlds__hlds_pred__pred_info_get_origin_2_p_0(PredInfo_9, &Origin_10);
  succeeded = ((MR_tag((MR_Word) Origin_10)) == (MR_Integer) 1);
  if (succeeded)
  {
    Var_20 = ((MR_Word) ((MR_hl_field(1, Origin_10, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0);
    if (succeeded)
    {
      SpecialPredId_11 = ((MR_Unsigned) ((MR_hl_field(0, Var_20, (MR_Integer) 0))) & (MR_Integer) 3);
      TypeCtor_12 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
    }
  }
  if (succeeded)
    if ((DumpSpecPredTypeNames_5 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Tuple Var_21;

      {
        Var_21 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_21, 0) = ((MR_Box) (TypeCtor_12));
        MR_hl_field(0, Var_21, 1) = ((MR_Box) (SpecialPredId_11));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), ((MR_Box) (Var_21)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
    }
    else
    {
      MR_Word TypeCtorSymName_15 = ((MR_Word) ((MR_hl_field(0, TypeCtor_12, (MR_Integer) 0))));
      MR_String TypeCtorName_17;

      TypeCtorName_17 = mdbcomp__sym_name__unqualify_name_1_f_0(TypeCtorSymName_15);
      succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (TypeCtorName_17)), DumpSpecPredTypeNames_5);
      if (succeeded)
      {
        MR_Tuple Var_23;

        {
          Var_23 = (MR_Tuple) MR_new_object(MR_Tuple, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_23, 0) = ((MR_Box) (TypeCtor_12));
          MR_hl_field(0, Var_23, 1) = ((MR_Box) (SpecialPredId_11));
        }
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), ((MR_Box) (Var_23)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
      }
      else
        *STATE_VARIABLE_SpecPredMap_19 = STATE_VARIABLE_SpecPredMap_0_18;
    }
  else
    *STATE_VARIABLE_SpecPredMap_19 = STATE_VARIABLE_SpecPredMap_0_18;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Result_8)
{
  MR_Word PredIdA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word PredInfoA_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word PredIdB_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word PredInfoB_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String PredNameA_9;
  MR_String PredNameB_10;
  MR_Word NameResult_11;

  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfoA_5, &PredNameA_9);
  hlds__hlds_pred__pred_info_get_name_2_p_0(PredInfoB_7, &PredNameB_10);
  mercury__private_builtin__builtin_compare_string_3_p_0(&NameResult_11, PredNameA_9, PredNameB_10);
  switch (NameResult_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
    case (MR_Integer) 2:
      *Result_8 = NameResult_11;
      break;
    case (MR_Integer) 0:
      hlds__hlds_pred____Compare____pred_id_0_0(Result_8, PredIdA_4, PredIdB_6);
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_space_and_table_trie_step_4_p_0(
  MR_Word TVarSet_5,
  MR_Word StepDesc_6,
  MR_Word STATE_VARIABLE_State_0_11,
  MR_Word * STATE_VARIABLE_State_12)
{
  MR_String VarName_8 = ((MR_String) ((MR_hl_field(0, StepDesc_6, (MR_Integer) 0))));
  MR_Word TrieStep_9 = ((MR_Word) ((MR_hl_field(0, StepDesc_6, (MR_Integer) 1))));
  MR_String StepDescStr_10;
  MR_Word Var_20;
  MR_Word Var_22;
  MR_Word Var_23;

  switch (MR_tag((MR_Word) TrieStep_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TrieStep_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          StepDescStr_10 = (MR_String) "dummy";
          break;
        case (MR_Integer) 1:
          StepDescStr_10 = (MR_String) "char";
          break;
        case (MR_Integer) 2:
          StepDescStr_10 = (MR_String) "string";
          break;
        case (MR_Integer) 3:
          StepDescStr_10 = (MR_String) "float";
          break;
        case (MR_Integer) 4:
          StepDescStr_10 = (MR_String) "foreign_enum";
          break;
        case (MR_Integer) 5:
          StepDescStr_10 = (MR_String) "typeinfo";
          break;
        case (MR_Integer) 6:
          StepDescStr_10 = (MR_String) "typeclassinfo";
          break;
        case (MR_Integer) 7:
          StepDescStr_10 = (MR_String) "promise_implied";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_55 = ((MR_Unsigned) ((MR_hl_field(1, TrieStep_9, (MR_Integer) 0))) & (MR_Integer) 15);

        StepDescStr_10 = ((&hlds__hlds_out__hlds_out_module_vector_common_10[0 + Var_55]))->hlds__hlds_out__hlds_out_module__vector_common_type_10_0__vct_10_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_25 = ((MR_Integer) ((MR_hl_field(2, TrieStep_9, (MR_Integer) 0))));
        MR_String Var_66;
        MR_String Var_73;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), N_25, &Var_66);
        Var_73 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) ")");
        StepDescStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_73);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Type_26 = ((MR_Word) ((MR_hl_field(3, TrieStep_9, (MR_Integer) 0))));
        MR_Word IsPoly_27 = ((((MR_Unsigned) ((MR_hl_field(3, TrieStep_9, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Word IsAddr_28 = ((MR_Unsigned) ((MR_hl_field(3, TrieStep_9, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String TypeStr_29;
        MR_String IsPolyStr_30;
        MR_String IsAddrStr_31;
        MR_String Var_57;
        MR_String Var_59;
        MR_String Var_60;
        MR_String Var_62;
        MR_String Var_63;

        TypeStr_29 = parse_tree__parse_tree_out_type__mercury_type_to_string_3_f_0(TVarSet_5, (MR_Integer) 1, Type_26);
        switch (IsPoly_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsPolyStr_30 = (MR_String) "mono";
            break;
          case (MR_Integer) 1:
            IsPolyStr_30 = (MR_String) "poly";
            break;
        }
        switch (IsAddr_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            IsAddrStr_31 = (MR_String) "addr";
            break;
          case (MR_Integer) 0:
            IsAddrStr_31 = (MR_String) "value";
            break;
        }
        Var_57 = mercury__string__f_43_43_2_f_0(IsAddrStr_31, (MR_String) ")");
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_57);
        Var_60 = mercury__string__f_43_43_2_f_0(IsPolyStr_30, Var_59);
        Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_60);
        Var_63 = mercury__string__f_43_43_2_f_0(TypeStr_29, Var_62);
        StepDescStr_10 = mercury__string__f_43_43_2_f_0((MR_String) "general(", Var_63);
      }
      break;
  }
  mercury__string__builder__append_string_3_p_0((MR_String) " ", STATE_VARIABLE_State_0_11, &Var_20);
  mercury__string__builder__append_string_3_p_0(VarName_8, Var_20, &Var_22);
  mercury__string__builder__append_string_3_p_0((MR_String) ": ", Var_22, &Var_23);
  mercury__string__builder__append_string_3_p_0(StepDescStr_10, Var_23, STATE_VARIABLE_State_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_table_struct_info_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_12;

  hlds__hlds_out__hlds_out_module__format_space_and_table_trie_step_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_12);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_12));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_table_struct_info_4_p_0(
  MR_Word ModuleInfo_5,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_30,
  MR_Word * STATE_VARIABLE_State_31)
{
  MR_Word PredProcId_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word TableStructInfo_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_String PredProcIdStr_9;
  MR_Word ProcTableStructInfo_10;
  MR_Word Attributes_11;
  MR_Word TVarSet_13;
  MR_Integer NumInputs_15;
  MR_Integer NumOutputs_16;
  MR_Word InputSteps_17;
  MR_Word MaybeOutputSteps_18;
  MR_Word ArgInfos_19;
  MR_Word Strictness_22;
  MR_Word SizeLimit_23;
  MR_Word Stats_24;
  MR_Word AllowReset_25;
  MR_Word BackendWarning_26;
  MR_Word STATE_VARIABLE_State_34_34;
  MR_Word STATE_VARIABLE_State_39_39;
  MR_Word STATE_VARIABLE_State_45_45;
  MR_Word Var_46;
  MR_Word STATE_VARIABLE_State_47_47;
  MR_Word STATE_VARIABLE_State_49_49;
  MR_Word STATE_VARIABLE_State_55_55;
  MR_Word STATE_VARIABLE_State_58_58;
  MR_Word STATE_VARIABLE_State_60_60;
  MR_Word STATE_VARIABLE_State_74_74;
  MR_Word STATE_VARIABLE_State_81_81;
  MR_Word STATE_VARIABLE_State_85_85;
  MR_Word Var_99;
  MR_Word Var_101;
  MR_Word Var_103;
  MR_Word Var_105;
  MR_String Var_106;
  MR_Word Var_113;
  MR_Word Var_115;
  MR_String Var_116;
  MR_Box conv1_STATE_VARIABLE_State_47_47;

  PredProcIdStr_9 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_5, PredProcId_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n% table struct info for ", STATE_VARIABLE_State_0_30, &Var_99);
  mercury__string__builder__append_string_3_p_0(PredProcIdStr_9, Var_99, &Var_101);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_101, &STATE_VARIABLE_State_34_34);
  ProcTableStructInfo_10 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_7, (MR_Integer) 0))));
  Attributes_11 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_7, (MR_Integer) 1))));
  TVarSet_13 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_10, (MR_Integer) 1))));
  NumInputs_15 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_10, (MR_Integer) 3))));
  NumOutputs_16 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_10, (MR_Integer) 4))));
  InputSteps_17 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_10, (MR_Integer) 5))));
  MaybeOutputSteps_18 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_10, (MR_Integer) 6))));
  ArgInfos_19 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_10, (MR_Integer) 7))));
  mercury__string__builder__append_string_3_p_0((MR_String) "% #inputs: ", STATE_VARIABLE_State_34_34, &Var_103);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumInputs_15, &Var_106);
  mercury__string__builder__append_string_3_p_0(Var_106, Var_103, &Var_105);
  mercury__string__builder__append_string_3_p_0((MR_String) ", #outputs: ", Var_105, &Var_113);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), NumOutputs_16, &Var_116);
  mercury__string__builder__append_string_3_p_0(Var_116, Var_113, &Var_115);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_115, &STATE_VARIABLE_State_39_39);
  mercury__string__builder__append_string_3_p_0((MR_String) "% input steps:", STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_45_45);
  {
    Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_46, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[5]));
    MR_hl_field(0, Var_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__format_table_struct_info_4_p_0_1));
    MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_46, 3) = ((MR_Box) (TVarSet_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_46, InputSteps_17, ((MR_Box) (STATE_VARIABLE_State_45_45)), &conv1_STATE_VARIABLE_State_47_47);
  STATE_VARIABLE_State_47_47 = ((MR_Word) (conv1_STATE_VARIABLE_State_47_47));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_47_47, &STATE_VARIABLE_State_49_49);
  if ((MaybeOutputSteps_18 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__builder__append_string_3_p_0((MR_String) "% no output steps", STATE_VARIABLE_State_49_49, &STATE_VARIABLE_State_55_55);
  else
  {
    MR_Word OutputSteps_21 = ((MR_Word) ((MR_hl_field(1, MaybeOutputSteps_18, (MR_Integer) 0))));
    MR_Word STATE_VARIABLE_State_51_51;
    MR_Word STATE_VARIABLE_State_53_53;
    MR_Box conv2_STATE_VARIABLE_State_53_53;

    mercury__string__builder__append_string_3_p_0((MR_String) "% output steps:", STATE_VARIABLE_State_49_49, &STATE_VARIABLE_State_51_51);
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_46, OutputSteps_21, ((MR_Box) (STATE_VARIABLE_State_51_51)), &conv2_STATE_VARIABLE_State_53_53);
    STATE_VARIABLE_State_53_53 = ((MR_Word) (conv2_STATE_VARIABLE_State_53_53));
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_53_53, &STATE_VARIABLE_State_55_55);
  }
  hlds__hlds_out__hlds_out_pred__format_table_arg_infos_4_p_0(TVarSet_13, ArgInfos_19, STATE_VARIABLE_State_55_55, &STATE_VARIABLE_State_58_58);
  Strictness_22 = ((MR_Word) ((MR_hl_field(0, Attributes_11, (MR_Integer) 0))));
  SizeLimit_23 = ((MR_Word) ((MR_hl_field(0, Attributes_11, (MR_Integer) 1))));
  Stats_24 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_11, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
  AllowReset_25 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_11, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
  BackendWarning_26 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_11, (MR_Integer) 2))) & (MR_Integer) 1);
  switch (MR_tag((MR_Word) Strictness_22)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Strictness_22)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__string__builder__append_string_3_p_0((MR_String) "% all strict\n", STATE_VARIABLE_State_58_58, &STATE_VARIABLE_State_60_60);
          break;
        case (MR_Integer) 1:
          mercury__string__builder__append_string_3_p_0((MR_String) "% all fast_loose\n", STATE_VARIABLE_State_58_58, &STATE_VARIABLE_State_60_60);
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgMethods_27 = ((MR_Word) ((MR_hl_field(1, Strictness_22, (MR_Integer) 0))));
        MR_Word HiddenArgMethod_28 = ((MR_Unsigned) ((MR_hl_field(1, Strictness_22, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_Word STATE_VARIABLE_State_64_64;
        MR_Word STATE_VARIABLE_State_66_66;
        MR_Word STATE_VARIABLE_State_68_68;

        mercury__string__builder__append_string_3_p_0((MR_String) "% specified [", STATE_VARIABLE_State_58_58, &STATE_VARIABLE_State_64_64);
        hlds__hlds_out__hlds_out_module__format_arg_tabling_methods_4_p_0((MR_String) "", ArgMethods_27, STATE_VARIABLE_State_64_64, &STATE_VARIABLE_State_66_66);
        mercury__string__builder__append_string_3_p_0((MR_String) "]", STATE_VARIABLE_State_66_66, &STATE_VARIABLE_State_68_68);
        switch (HiddenArgMethod_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__string__builder__append_string_3_p_0((MR_String) ", hidden args by addr\n", STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_60_60);
            break;
          case (MR_Integer) 0:
            mercury__string__builder__append_string_3_p_0((MR_String) ", hidden args by value\n", STATE_VARIABLE_State_68_68, &STATE_VARIABLE_State_60_60);
            break;
        }
      }
      break;
  }
  if ((SizeLimit_23 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__builder__append_string_3_p_0((MR_String) "% no size limit\n", STATE_VARIABLE_State_60_60, &STATE_VARIABLE_State_74_74);
  else
  {
    MR_Integer Limit_29 = ((MR_Integer) ((MR_hl_field(1, SizeLimit_23, (MR_Integer) 0))));
    MR_Word Var_124;
    MR_Word Var_126;
    MR_String Var_127;

    mercury__string__builder__append_string_3_p_0((MR_String) "% size limit ", STATE_VARIABLE_State_60_60, &Var_124);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), Limit_29, &Var_127);
    mercury__string__builder__append_string_3_p_0(Var_127, Var_124, &Var_126);
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_126, &STATE_VARIABLE_State_74_74);
  }
  switch (Stats_24) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "% do not gather statistics\n", STATE_VARIABLE_State_74_74, &STATE_VARIABLE_State_81_81);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% gather statistics\n", STATE_VARIABLE_State_74_74, &STATE_VARIABLE_State_81_81);
      break;
  }
  switch (AllowReset_25) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% allow reset\n", STATE_VARIABLE_State_81_81, &STATE_VARIABLE_State_85_85);
      break;
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "% do not allow reset\n", STATE_VARIABLE_State_81_81, &STATE_VARIABLE_State_85_85);
      break;
  }
  switch (BackendWarning_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "% ignore only with warning\n", STATE_VARIABLE_State_85_85, STATE_VARIABLE_State_31);
      break;
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "% may ignore without warning\n", STATE_VARIABLE_State_85_85, STATE_VARIABLE_State_31);
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_arg_tabling_methods_4_p_0(
  MR_String Prefix_1,
  MR_Word HeadVar__2_2,
  MR_Word STATE_VARIABLE_State_0_3,
  MR_Word * STATE_VARIABLE_State_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_State_4 = STATE_VARIABLE_State_0_3;
    else
    {
      MR_Word MaybeMethod_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word MaybeMethods_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_15_15;
      MR_Word STATE_VARIABLE_State_17_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_STATE_VARIABLE_State_0_3;

      mercury__string__builder__append_string_3_p_0(Prefix_1, STATE_VARIABLE_State_0_3, &STATE_VARIABLE_State_15_15);
      if ((MaybeMethod_10 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__string__builder__append_string_3_p_0((MR_String) "output", STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_17_17);
      else
      {
        MR_Word Var_28 = ((MR_Word) ((MR_hl_field(1, MaybeMethod_10, (MR_Integer) 0))));

        switch (Var_28) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__string__builder__append_string_3_p_0((MR_String) "addr", STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_17_17);
            break;
          case (MR_Integer) 2:
            mercury__string__builder__append_string_3_p_0((MR_String) "promise_implied", STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_17_17);
            break;
          case (MR_Integer) 0:
            mercury__string__builder__append_string_3_p_0((MR_String) "value", STATE_VARIABLE_State_15_15, &STATE_VARIABLE_State_17_17);
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = MaybeMethods_11;
      next_value_of_STATE_VARIABLE_State_0_3 = STATE_VARIABLE_State_17_17;
      Prefix_1 = (MR_String) ", ";
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_State_0_3 = next_value_of_STATE_VARIABLE_State_0_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_State_0_14,
  MR_Word * STATE_VARIABLE_State_15)
{
  MR_Integer N_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Word ConstStruct_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Word ConsId_7;
  MR_Word ConstArgs_8;
  MR_Word Type_9;
  MR_Word Inst_10;
  MR_Word DefinedWhere_11;
  MR_Word STATE_VARIABLE_State_18_18;
  MR_Word STATE_VARIABLE_State_24_24;
  MR_Word STATE_VARIABLE_State_26_26;
  MR_Word STATE_VARIABLE_State_33_33;
  MR_Word Var_34;
  MR_Word STATE_VARIABLE_State_37_37;
  MR_Word STATE_VARIABLE_State_39_39;
  MR_Word STATE_VARIABLE_State_41_41;
  MR_Word Var_43;
  MR_Word STATE_VARIABLE_State_48_48;
  MR_Word Var_56;
  MR_Word Var_58;
  MR_String Var_59;
  MR_Box conv0_STATE_VARIABLE_State_48_48;

  mercury__string__builder__append_string_3_p_0((MR_String) "\nconst_struct ", STATE_VARIABLE_State_0_14, &Var_56);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), N_4, &Var_59);
  mercury__string__builder__append_string_3_p_0(Var_59, Var_56, &Var_58);
  mercury__string__builder__append_string_3_p_0((MR_String) ":\n", Var_58, &STATE_VARIABLE_State_18_18);
  ConsId_7 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 0))));
  ConstArgs_8 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 1))));
  Type_9 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 2))));
  Inst_10 = ((MR_Word) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 3))));
  DefinedWhere_11 = ((MR_Unsigned) ((MR_hl_field(0, ConstStruct_5, (MR_Integer) 4))) & (MR_Integer) 1);
  parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1]), (MR_Integer) 1, (MR_Integer) 1, ConsId_7, STATE_VARIABLE_State_18_18, &STATE_VARIABLE_State_24_24);
  if ((ConstArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_24_24, &STATE_VARIABLE_State_26_26);
  else
  {
    MR_Word HeadConstArg_12 = ((MR_Word) ((MR_hl_field(1, ConstArgs_8, (MR_Integer) 0))));
    MR_Word TailConstArgs_13 = ((MR_Word) ((MR_hl_field(1, ConstArgs_8, (MR_Integer) 1))));
    MR_Word STATE_VARIABLE_State_28_28;
    MR_Word STATE_VARIABLE_State_29_29;

    mercury__string__builder__append_string_3_p_0((MR_String) "(\n", STATE_VARIABLE_State_24_24, &STATE_VARIABLE_State_28_28);
    hlds__hlds_out__hlds_out_module__format_const_struct_args_4_p_0(HeadConstArg_12, TailConstArgs_13, STATE_VARIABLE_State_28_28, &STATE_VARIABLE_State_29_29);
    mercury__string__builder__append_string_3_p_0((MR_String) ")\n", STATE_VARIABLE_State_29_29, &STATE_VARIABLE_State_26_26);
  }
  mercury__string__builder__append_string_3_p_0((MR_String) "type: ", STATE_VARIABLE_State_26_26, &STATE_VARIABLE_State_33_33);
  Var_34 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1]), Var_34, (MR_Integer) 0, Type_9, STATE_VARIABLE_State_33_33, &STATE_VARIABLE_State_37_37);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_37_37, &STATE_VARIABLE_State_39_39);
  mercury__string__builder__append_string_3_p_0((MR_String) "inst: ", STATE_VARIABLE_State_39_39, &STATE_VARIABLE_State_41_41);
  Var_43 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  hlds__hlds_out__hlds_out_mode__mercury_format_structured_inst_9_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1]), (MR_Integer) 1, Var_43, (MR_Integer) 0, (MR_Unsigned) 0U, (MR_String) "\n", Inst_10, ((MR_Box) ((MR_Integer) 0)), ((MR_Box) (STATE_VARIABLE_State_41_41)), &conv0_STATE_VARIABLE_State_48_48);
  STATE_VARIABLE_State_48_48 = ((MR_Word) (conv0_STATE_VARIABLE_State_48_48));
  switch (DefinedWhere_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__string__builder__append_string_3_p_0((MR_String) "defined_in_other_module\n", STATE_VARIABLE_State_48_48, STATE_VARIABLE_State_15);
      break;
    case (MR_Integer) 0:
      mercury__string__builder__append_string_3_p_0((MR_String) "defined_in_this_module\n", STATE_VARIABLE_State_48_48, STATE_VARIABLE_State_15);
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_args_4_p_0(
  MR_Word HeadConstArg_5,
  MR_Word TailConstArgs_6,
  MR_Word STATE_VARIABLE_State_0_13,
  MR_Word * STATE_VARIABLE_State_14)
{
  while (MR_TRUE)
  {
    MR_Word STATE_VARIABLE_State_16_16;
    MR_Word STATE_VARIABLE_State_19_19;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__string__builder__append_string_3_p_0((MR_String) "    ", STATE_VARIABLE_State_0_13, &STATE_VARIABLE_State_16_16);
    if (((MR_tag((MR_Word) HeadConstArg_5)) == (MR_Integer) 0))
    {
      MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(0, HeadConstArg_5, (MR_Integer) 0))));
      MR_Word Var_38;
      MR_Word Var_40;
      MR_String Var_41;

      mercury__string__builder__append_string_3_p_0((MR_String) "cs(", STATE_VARIABLE_State_16_16, &Var_38);
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0]), N_8, &Var_41);
      mercury__string__builder__append_string_3_p_0(Var_41, Var_38, &Var_40);
      mercury__string__builder__append_string_3_p_0((MR_String) ")", Var_40, &STATE_VARIABLE_State_19_19);
    }
    else
    {
      MR_Word ConsId_9 = ((MR_Word) ((MR_hl_field(1, HeadConstArg_5, (MR_Integer) 0))));
      MR_Word Type_10 = ((MR_Word) ((MR_hl_field(1, HeadConstArg_5, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_25_25;
      MR_Word STATE_VARIABLE_State_27_27;
      MR_Word Var_28;

      parse_tree__parse_tree_out_cons_id__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_99_111_110_115_95_105_100_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1]), (MR_Integer) 1, (MR_Integer) 1, ConsId_9, STATE_VARIABLE_State_16_16, &STATE_VARIABLE_State_25_25);
      mercury__string__builder__append_string_3_p_0((MR_String) "\n        with type ", STATE_VARIABLE_State_25_25, &STATE_VARIABLE_State_27_27);
      Var_28 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
      parse_tree__parse_tree_out_type__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_116_121_112_101_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_6_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[1]), Var_28, (MR_Integer) 0, Type_10, STATE_VARIABLE_State_27_27, &STATE_VARIABLE_State_19_19);
    }
    if ((TailConstArgs_6 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_19_19, STATE_VARIABLE_State_14);
    else
    {
      MR_Word HeadTailConstArg_11 = ((MR_Word) ((MR_hl_field(1, TailConstArgs_6, (MR_Integer) 0))));
      MR_Word TailTailConstArgs_12 = ((MR_Word) ((MR_hl_field(1, TailConstArgs_6, (MR_Integer) 1))));
      MR_Word STATE_VARIABLE_State_35_35;
      MR_Word next_value_of_HeadConstArg_5;
      MR_Word next_value_of_TailConstArgs_6;
      MR_Word next_value_of_STATE_VARIABLE_State_0_13;

      mercury__string__builder__append_string_3_p_0((MR_String) ",\n", STATE_VARIABLE_State_19_19, &STATE_VARIABLE_State_35_35);
      // direct tailcall eliminated
      ;
      next_value_of_HeadConstArg_5 = HeadTailConstArg_11;
      next_value_of_TailConstArgs_6 = TailTailConstArgs_12;
      next_value_of_STATE_VARIABLE_State_0_13 = STATE_VARIABLE_State_35_35;
      HeadConstArg_5 = next_value_of_HeadConstArg_5;
      TailConstArgs_6 = next_value_of_TailConstArgs_6;
      STATE_VARIABLE_State_0_13 = next_value_of_STATE_VARIABLE_State_0_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_avail_entry_4_p_0(
  MR_Word ModuleName_5,
  MR_Word Entry_6,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word Section_8 = ((((MR_Unsigned) ((MR_hl_field(0, Entry_6, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUse_9 = ((MR_Unsigned) ((MR_hl_field(0, Entry_6, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Avails_10 = ((MR_Word) ((MR_hl_field(0, Entry_6, (MR_Integer) 1))));
  MR_String ImportOrUseDecl_11;
  MR_Word STATE_VARIABLE_State_16_16;
  MR_String Var_20;
  MR_String Var_26;
  MR_String Var_29;
  MR_Word Var_33;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_38;
  MR_Word Var_40;
  MR_Word Var_42;
  MR_Word Var_43;
  MR_Word Var_45;

  switch (ImportOrUse_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ImportOrUseDecl_11 = (MR_String) "import_module";
      break;
    case (MR_Integer) 1:
      ImportOrUseDecl_11 = (MR_String) "use_module";
      break;
  }
  Var_20 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_5);
  mercury__string__builder__append_string_3_p_0((MR_String) ":- ", STATE_VARIABLE_State_0_12, &Var_33);
  mercury__string__builder__append_string_3_p_0(ImportOrUseDecl_11, Var_33, &Var_35);
  mercury__string__builder__append_string_3_p_0((MR_String) " ", Var_35, &Var_36);
  mercury__string__builder__append_string_3_p_0(Var_20, Var_36, &Var_38);
  mercury__string__builder__append_string_3_p_0((MR_String) ".\n", Var_38, &STATE_VARIABLE_State_16_16);
  Var_26 = mercury__string__string_1_f_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), ((MR_Box) (Section_8)));
  Var_29 = mercury__string__string_1_f_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[0]), ((MR_Box) (Avails_10)));
  mercury__string__builder__append_string_3_p_0((MR_String) "% ", STATE_VARIABLE_State_16_16, &Var_40);
  mercury__string__builder__append_string_3_p_0(Var_26, Var_40, &Var_42);
  mercury__string__builder__append_string_3_p_0((MR_String) ", ", Var_42, &Var_43);
  mercury__string__builder__append_string_3_p_0(Var_29, Var_43, &Var_45);
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", Var_45, STATE_VARIABLE_State_13);
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleInfo_6)
{
  MR_String Str_8;

  Str_8 = hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0(ModuleInfo_6);
  mercury__io__write_string_4_p_0(Stream_5, Str_8);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_STATE_VARIABLE_State_31;

  hlds__hlds_out__hlds_out_module__format_table_struct_info_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv2_STATE_VARIABLE_State_31);
  *wrapper_arg_3 = ((MR_Box) (conv2_STATE_VARIABLE_State_31));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_13;

  hlds__hlds_out__hlds_out_module__format_avail_entry_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_STATE_VARIABLE_State_13);
  *wrapper_arg_4 = ((MR_Box) (conv0_STATE_VARIABLE_State_13));
}

MR_String MR_CALL 
hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0(
  MR_Word ModuleInfo_3)
{
  MR_bool succeeded;
  MR_String Str_4;
  MR_Word State0_5;
  MR_Word State_6;
  MR_Word Globals_7;
  MR_Word DumpPredIdStrs_8;
  MR_Word DumpPredNames_9;
  MR_Word DumpSpecPreds0_10;
  MR_Word DumpSpecPredTypeNames_11;
  MR_Word Info_12;
  MR_String DumpOptions0_14;
  MR_Word DumpSpecPreds_15;
  MR_String DumpOptions_16;
  MR_Word STATE_VARIABLE_State_42_39;
  MR_Word STATE_VARIABLE_State_60_57;
  MR_Word STATE_VARIABLE_State_62_59;
  MR_Word STATE_VARIABLE_State_64_61;
  MR_Word STATE_VARIABLE_State_67_64;
  MR_Word ModuleName_72;
  MR_Word STATE_VARIABLE_State_10_74;
  MR_String Var_78;
  MR_Word Var_80;
  MR_Word Var_82;

  State0_5 = mercury__string__builder__init_0_f_0();
  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_3, &Globals_7);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 196, &DumpPredIdStrs_8);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 197, &DumpPredNames_9);
  libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 199, &DumpSpecPreds0_10);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 200, &DumpSpecPredTypeNames_11);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_3, &ModuleName_72);
  mercury__string__builder__append_string_3_p_0((MR_String) "% vim: ts=2 sw=2 ft=mercury\n\n", State0_5, &STATE_VARIABLE_State_10_74);
  Var_78 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_72);
  mercury__string__builder__append_string_3_p_0((MR_String) ":- module ", STATE_VARIABLE_State_10_74, &Var_80);
  mercury__string__builder__append_string_3_p_0(Var_78, Var_80, &Var_82);
  mercury__string__builder__append_string_3_p_0((MR_String) ".\n\n", Var_82, &STATE_VARIABLE_State_42_39);
  Info_12 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_7, (MR_Integer) 1);
  DumpOptions0_14 = ((MR_String) ((MR_hl_field(0, Info_12, (MR_Integer) 0))));
  if ((DumpSpecPredTypeNames_11 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    DumpSpecPreds_15 = DumpSpecPreds0_10;
    switch (DumpSpecPreds_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DumpOptions_16 = DumpOptions0_14;
        break;
      case (MR_Integer) 1:
        DumpOptions_16 = mercury__string__f_43_43_2_f_0(DumpOptions0_14, (MR_String) "U");
        break;
    }
  }
  else
  {
    DumpSpecPreds_15 = (MR_Integer) 1;
    DumpOptions_16 = mercury__string__f_43_43_2_f_0(DumpOptions0_14, (MR_String) "U");
  }
  succeeded = (DumpPredIdStrs_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (DumpPredNames_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
      succeeded = (DumpSpecPreds_15 == (MR_Integer) 1);
  }
  if (succeeded)
    STATE_VARIABLE_State_60_57 = STATE_VARIABLE_State_42_39;
  else
  {
    MR_Word STATE_VARIABLE_State_47_44;
    MR_Word STATE_VARIABLE_State_52_49;
    MR_Word STATE_VARIABLE_State_58_55;

    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 73);
    if (succeeded)
    {
      MR_Word AvailModuleMap_21;
      MR_Box conv1_STATE_VARIABLE_State_47_44;

      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_3, &AvailModuleMap_21);
      mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[7]), AvailModuleMap_21, ((MR_Box) (STATE_VARIABLE_State_42_39)), &conv1_STATE_VARIABLE_State_47_44);
      STATE_VARIABLE_State_47_44 = ((MR_Word) (conv1_STATE_VARIABLE_State_47_44));
    }
    else
      STATE_VARIABLE_State_47_44 = STATE_VARIABLE_State_42_39;
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 84);
    if (succeeded)
    {
      MR_Word LocalOnly_22;
      MR_Word TypeTable_23;
      MR_Word InstanceTable_24;
      MR_Word ClassTable_25;
      MR_Word STATE_VARIABLE_State_50_47;
      MR_Word STATE_VARIABLE_State_51_48;

      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 76);
      if (succeeded)
        LocalOnly_22 = (MR_Integer) 1;
      else
        LocalOnly_22 = (MR_Integer) 0;
      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_3, &TypeTable_23);
      hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_3, &InstanceTable_24);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_3, &ClassTable_25);
      hlds__hlds_out__hlds_out_type_table__format_type_table_5_p_0(Info_12, LocalOnly_22, TypeTable_23, STATE_VARIABLE_State_47_44, &STATE_VARIABLE_State_50_47);
      hlds__hlds_out__hlds_out_typeclass_table__format_classes_4_p_0(Info_12, ClassTable_25, STATE_VARIABLE_State_50_47, &STATE_VARIABLE_State_51_48);
      hlds__hlds_out__hlds_out_typeclass_table__format_instances_4_p_0(Info_12, InstanceTable_24, STATE_VARIABLE_State_51_48, &STATE_VARIABLE_State_52_49);
    }
    else
      STATE_VARIABLE_State_52_49 = STATE_VARIABLE_State_47_44;
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 77);
    if (succeeded)
    {
      MR_Word InstTable_26;
      MR_Word ModeTable_27;
      MR_Word MaybeUseErrorMsgInst_28;
      MR_Integer InstNumLimit_29;
      MR_Integer InstSizeLimit_30;
      MR_Word STATE_VARIABLE_State_57_54;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_3, &InstTable_26);
      hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_3, &ModeTable_27);
      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 89);
      if (succeeded)
        {
          MaybeUseErrorMsgInst_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, MaybeUseErrorMsgInst_28, 0) = ((MR_Box) (ModuleInfo_3));
        }
      else
        MaybeUseErrorMsgInst_28 = (MR_Word) ((MR_Unsigned) 0U);
      libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 203, &InstNumLimit_29);
      libs__globals__lookup_int_option_3_p_0(Globals_7, (MR_Integer) 204, &InstSizeLimit_30);
      hlds__hlds_out__hlds_out_inst_table__format_inst_table_7_p_0((MR_Integer) 1, MaybeUseErrorMsgInst_28, InstNumLimit_29, InstSizeLimit_30, InstTable_26, STATE_VARIABLE_State_52_49, &STATE_VARIABLE_State_57_54);
      hlds__hlds_out__hlds_out_inst_table__format_mode_table_3_p_0(ModeTable_27, STATE_VARIABLE_State_57_54, &STATE_VARIABLE_State_58_55);
    }
    else
      STATE_VARIABLE_State_58_55 = STATE_VARIABLE_State_52_49;
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 90);
    if (succeeded)
    {
      MR_Word TableStructMap_31;
      MR_Word TableStructs_84;
      MR_Word STATE_VARIABLE_State_12_86;
      MR_Word Var_87;
      MR_Word STATE_VARIABLE_State_14_88;
      MR_Box conv3_STATE_VARIABLE_State_14_88;

      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ModuleInfo_3, &TableStructMap_31);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_31, &TableStructs_84);
      mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Table structs --------\n", STATE_VARIABLE_State_58_55, &STATE_VARIABLE_State_12_86);
      {
        Var_87 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_87, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[4]));
        MR_hl_field(0, Var_87, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__hlds_to_string_1_f_0_2));
        MR_hl_field(0, Var_87, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_87, 3) = ((MR_Box) (ModuleInfo_3));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_87, TableStructs_84, ((MR_Box) (STATE_VARIABLE_State_12_86)), &conv3_STATE_VARIABLE_State_14_88);
      STATE_VARIABLE_State_14_88 = ((MR_Word) (conv3_STATE_VARIABLE_State_14_88));
      mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_14_88, &STATE_VARIABLE_State_60_57);
    }
    else
      STATE_VARIABLE_State_60_57 = STATE_VARIABLE_State_58_55;
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 88);
  if (succeeded)
  {
    MR_Word ConstStructDb_32;

    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_3, &ConstStructDb_32);
    hlds__hlds_out__hlds_out_module__format_const_struct_db_3_p_0(ConstStructDb_32, STATE_VARIABLE_State_60_57, &STATE_VARIABLE_State_62_59);
  }
  else
    STATE_VARIABLE_State_62_59 = STATE_VARIABLE_State_60_57;
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 120);
  if (!(succeeded))
    succeeded = (DumpSpecPreds_15 == (MR_Integer) 1);
  if (succeeded)
    hlds__hlds_out__hlds_out_module__format_preds_7_p_0(Info_12, DumpSpecPreds_15, DumpSpecPredTypeNames_11, (MR_Integer) 1, ModuleInfo_3, STATE_VARIABLE_State_62_59, &STATE_VARIABLE_State_64_61);
  else
    STATE_VARIABLE_State_64_61 = STATE_VARIABLE_State_62_59;
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_16, (MR_Char) 79);
  if (succeeded)
  {
    MR_Word MaybeDependencyInfo_33;

    hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(ModuleInfo_3, &MaybeDependencyInfo_33);
    if ((MaybeDependencyInfo_33 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__string__builder__append_string_3_p_0((MR_String) "% No dependency info\n\n", STATE_VARIABLE_State_64_61, &STATE_VARIABLE_State_67_64);
    else
    {
      MR_Word DependencyInfo_34 = ((MR_Word) ((MR_hl_field(1, MaybeDependencyInfo_33, (MR_Integer) 0))));

      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0(ModuleInfo_3, DependencyInfo_34, STATE_VARIABLE_State_64_61, &STATE_VARIABLE_State_67_64);
    }
  }
  else
    STATE_VARIABLE_State_67_64 = STATE_VARIABLE_State_64_61;
  hlds__hlds_out__hlds_out_module__format_footer_3_p_0(ModuleInfo_3, STATE_VARIABLE_State_67_64, &State_6);
  Str_4 = mercury__string__builder__to_string_1_f_0(State_6);
  return Str_4;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_State_9;

  hlds__hlds_out__hlds_out_module__format_dependency_scc_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_State_9);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_State_9));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_State_11;

  hlds__hlds_out__hlds_out_module__format_dep_graph_edge_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_State_11);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_State_11));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_9;

  hlds__hlds_out__hlds_out_module__format_dep_graph_node_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_9);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_9));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0(
  MR_Word ModuleInfo_7,
  MR_Word DependencyInfo_8,
  MR_Word STATE_VARIABLE_State_0_12,
  MR_Word * STATE_VARIABLE_State_13)
{
  MR_Word Graph_10;
  MR_Word Ordering_11;
  MR_Word STATE_VARIABLE_State_15_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word STATE_VARIABLE_State_18_18;
  MR_Word STATE_VARIABLE_State_20_20;
  MR_Word Var_21;
  MR_Box conv2_STATE_VARIABLE_State_18_18;
  MR_Box conv4_STATE_VARIABLE_State_13;

  mercury__string__builder__append_string_3_p_0((MR_String) "% Dependency graph\n\n", STATE_VARIABLE_State_0_12, &STATE_VARIABLE_State_15_15);
  Graph_10 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_8);
  {
    Var_16 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_16, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[1]));
    MR_hl_field(0, Var_16, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_1));
    MR_hl_field(0, Var_16, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_16, 3) = ((MR_Box) (ModuleInfo_7));
  }
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[0]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_2));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__digraph__traverse_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Graph_10, Var_16, Var_17, ((MR_Box) (STATE_VARIABLE_State_15_15)), &conv2_STATE_VARIABLE_State_18_18);
  STATE_VARIABLE_State_18_18 = ((MR_Word) (conv2_STATE_VARIABLE_State_18_18));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n% Bottom up dependency sccs\n\n", STATE_VARIABLE_State_18_18, &STATE_VARIABLE_State_20_20);
  Ordering_11 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_8);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[2]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_114_109_97_116_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_5_p_0_3));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[1]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_21, Ordering_11, ((MR_Box) (STATE_VARIABLE_State_20_20)), &conv4_STATE_VARIABLE_State_13);
  *STATE_VARIABLE_State_13 = ((MR_Word) (conv4_STATE_VARIABLE_State_13));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv3_STATE_VARIABLE_State_27;

  hlds__hlds_out__hlds_out_module__maybe_write_pred_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv3_STATE_VARIABLE_State_27);
  *wrapper_arg_3 = ((MR_Box) (conv3_STATE_VARIABLE_State_27));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_SpecPredMap_19;

  hlds__hlds_out__hlds_out_module__add_spec_preds_to_map_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_STATE_VARIABLE_SpecPredMap_19);
  *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_SpecPredMap_19));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_Result_8;

  hlds__hlds_out__hlds_out_module__compare_in_name_order_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_Result_8);
  *wrapper_arg_3 = ((MR_Box) (conv0_Result_8));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_preds_7_p_0(
  MR_Word Info_8,
  MR_Word DumpSpecPreds_9,
  MR_Word DumpSpecPredTypeNames_10,
  MR_Word Lang_11,
  MR_Word ModuleInfo_12,
  MR_Word STATE_VARIABLE_State_0_21,
  MR_Word * STATE_VARIABLE_State_22)
{
  MR_Word PredIdTable_14;
  MR_Word PredIdsInfos_15;
  MR_Word PrintPredIdsInfos_18;
  MR_Word STATE_VARIABLE_State_24_24;
  MR_Word Var_28;
  MR_Box conv4_STATE_VARIABLE_State_22;

  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Predicates --------\n\n", STATE_VARIABLE_State_0_21, &STATE_VARIABLE_State_24_24);
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_12, &PredIdTable_14);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_14, &PredIdsInfos_15);
  switch (DumpSpecPreds_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Globals_16;
        MR_Word NameOrder_17;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_12, &Globals_16);
        libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 198, &NameOrder_17);
        switch (NameOrder_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrintPredIdsInfos_18 = PredIdsInfos_15;
            break;
          case (MR_Integer) 1:
            mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[6]), PredIdsInfos_15, &PrintPredIdsInfos_18);
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SpecPredMap0_19;
        MR_Word SpecPredMap_20;
        MR_Word Var_27;
        MR_Box conv2_SpecPredMap_20;

        mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), &SpecPredMap0_19);
        {
          Var_27 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_27, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[0]));
          MR_hl_field(0, Var_27, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__format_preds_7_p_0_2));
          MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_27, 3) = ((MR_Box) (DumpSpecPredTypeNames_10));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[4]), Var_27, PredIdsInfos_15, ((MR_Box) (SpecPredMap0_19)), &conv2_SpecPredMap_20);
        SpecPredMap_20 = ((MR_Word) (conv2_SpecPredMap_20));
        mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[2]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), SpecPredMap_20, &PrintPredIdsInfos_18);
      }
      break;
  }
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__format_preds_7_p_0_3));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (Info_8));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (Lang_11));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (ModuleInfo_12));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), Var_28, PrintPredIdsInfos_18, ((MR_Box) (STATE_VARIABLE_State_24_24)), &conv4_STATE_VARIABLE_State_22);
  *STATE_VARIABLE_State_22 = ((MR_Word) (conv4_STATE_VARIABLE_State_22));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_db_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_STATE_VARIABLE_State_15;

  hlds__hlds_out__hlds_out_module__format_const_struct_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_STATE_VARIABLE_State_15);
  *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_State_15));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_const_struct_db_3_p_0(
  MR_Word ConstStructDb_4,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8)
{
  MR_Word ConstStructs_6;
  MR_Word STATE_VARIABLE_State_10_10;
  MR_Word STATE_VARIABLE_State_12_12;
  MR_Box conv1_STATE_VARIABLE_State_12_12;

  hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_4, &ConstStructs_6);
  mercury__string__builder__append_string_3_p_0((MR_String) "%-------- Const structs --------\n\n", STATE_VARIABLE_State_0_7, &STATE_VARIABLE_State_10_10);
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[0]), (MR_Word) (&mercury__string__builder__string__builder__type_ctor_info_state_0), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[5]), ConstStructs_6, ((MR_Box) (STATE_VARIABLE_State_10_10)), &conv1_STATE_VARIABLE_State_12_12);
  STATE_VARIABLE_State_12_12 = ((MR_Word) (conv1_STATE_VARIABLE_State_12_12));
  mercury__string__builder__append_string_3_p_0((MR_String) "\n", STATE_VARIABLE_State_12_12, STATE_VARIABLE_State_8);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__format_footer_3_p_0(
  MR_Word Module_4,
  MR_Word STATE_VARIABLE_State_0_7,
  MR_Word * STATE_VARIABLE_State_8)
{
  MR_Word ModuleName_6;
  MR_String Var_13;
  MR_Word Var_15;
  MR_Word Var_17;

  hlds__hlds_module__module_info_get_name_2_p_0(Module_4, &ModuleName_6);
  Var_13 = parse_tree__parse_tree_out_sym_name__escaped_sym_name_to_string_1_f_0(ModuleName_6);
  mercury__string__builder__append_string_3_p_0((MR_String) ":- end_module ", STATE_VARIABLE_State_0_7, &Var_15);
  mercury__string__builder__append_string_3_p_0(Var_13, Var_15, &Var_17);
  mercury__string__builder__append_string_3_p_0((MR_String) ".\n", Var_17, STATE_VARIABLE_State_8);
}

void mercury__hlds__hlds_out__hlds_out_module__init(void)
{
}

void mercury__hlds__hlds_out__hlds_out_module__init_type_tables(void)
{
}

void mercury__hlds__hlds_out__hlds_out_module__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__hlds__hlds_out__hlds_out_module__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module hlds.hlds_out.hlds_out_module.
