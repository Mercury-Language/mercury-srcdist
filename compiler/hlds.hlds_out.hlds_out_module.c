/*
** Automatically generated from `hlds_out_module.m'
** by the Mercury compiler,
** version rotd-2023-01-08
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
#include "check_hlds.mode_errors.mih"
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
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
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
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
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



struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s {
  MR_bool hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded;
  MR_Word hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18;
  jmp_buf hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0;
  MR_String hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36;
  MR_Integer hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37;
  MR_Box hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36;
};


static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static const MR_VA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module____vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0;

static const MR_FA_TypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__tree234__pti_tree234_2__plain___vti_tuple_2parse_tree__prog_data__type_ctor_info_type_ctor_0mdbcomp__prim_data__type_ctor_info_special_pred_id_0__plain_pair__ti_pair_2hlds__hlds_pred__type_ctor_info_pred_id_0hlds__hlds_pred__type_ctor_info_pred_info_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0;

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0;

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0;

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word SCC_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word _ParentProc_9,
  MR_Word ChildProc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word ChildProc_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word Proc_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(
  MR_Word Stream_7,
  MR_String Prefix_8,
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word ModuleInfo_11,
  MR_Word HeadVar__5_5);

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
hlds__hlds_out__hlds_out_module__write_space_and_table_trie_step_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word StepDesc_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_5_p_0(
  MR_Word Stream_1,
  MR_String Prefix_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadConstArg_7,
  MR_Word TailConstArgs_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word Entry_8);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word DependencyInfo_10);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word DumpSpecPreds_11,
  MR_Word DumpSpecPredTypeNames_12,
  MR_Word Lang_13,
  MR_Word ModuleInfo_14);

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
  MR_Word Stream_5,
  MR_Word Module_6);


static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_1[2][2];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[5][3];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[1][4];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[1][1];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][6];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[2][7];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[1][10];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[5][8];

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[2][9];


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

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_2[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0])),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]))
  },
  /* row   4 */
  {
    ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_5[0])),
    ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_type_ctor_0)),
    ((MR_Box) (&mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_special_pred_id_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_4[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_5[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_comparison_result_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_6[2][7] = {
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_7[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_util__hlds__hlds_out__hlds_out_util__type_ctor_info_hlds_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&parse_tree__parse_tree_out_info__parse_tree__parse_tree_out_info__type_ctor_info_output_lang_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_8[5][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__set_ordlist__pti_set_ordlist_1__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   3 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   4 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box hlds__hlds_out__hlds_out_module_scalar_common_9[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
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



static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_id_0__plain_hlds__hlds_pred__type_ctor_info_pred_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
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
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_hlds__hlds_pred__type_ctor_info_pred_proc_id_0__plain_hlds__hlds_module__type_ctor_info_table_struct_info_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0),
    (MR_PseudoTypeInfo) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 hlds__hlds_out__hlds_out_module__pair__pti_pair_2__plain_builtin__type_ctor_info_int_0__plain_hlds__const_struct__type_ctor_info_const_struct_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
    (MR_PseudoTypeInfo) (&hlds__const_struct__hlds__const_struct__type_ctor_info_const_struct_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 hlds__hlds_out__hlds_out_module__varset__pti_varset_1__plain_parse_tree__prog_data__type_ctor_info_tvar_type_0 = {
  &mercury__varset__varset__type_ctor_info_varset_1,
  {
    (MR_PseudoTypeInfo) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0)
  }
};

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word SCC_8)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_11;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% SCC\n");
  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) ((MR_String) "  "));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (ModuleInfo_7));
  }
  mercury__set__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, SCC_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word _ParentProc_9,
  MR_Word ChildProc_10)
{
  hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(Stream_7, ModuleInfo_8, ChildProc_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_95_103_114_97_112_104_95_101_100_103_101_95_95_91_51_93_95_48_6_p_0(
  MR_Word Stream_7,
  MR_Word ModuleInfo_8,
  MR_Word ChildProc_10)
{
  hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(Stream_7, (MR_String) "  to ", ModuleInfo_8, ChildProc_10);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word Proc_8)
{
  hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(Stream_6, (MR_String) "calls from ", ModuleInfo_7, Proc_8);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_dependency_proc_6_p_0(
  MR_Word Stream_7,
  MR_String Prefix_8,
  MR_Word ModuleInfo_9,
  MR_Word PredProcId_10)
{
  MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, PredProcId_10, (MR_Integer) 0))));
  MR_Integer ProcId_13 = ((MR_Integer) ((MR_hl_field(0, PredProcId_10, (MR_Integer) 1))));
  MR_Word Pieces_14;
  MR_String Desc_15;
  MR_Integer Var_25;
  MR_Integer Var_28;
  MR_String Var_38;
  MR_String Var_48;

  Pieces_14 = hlds__hlds_error_util__describe_one_proc_name_3_f_0(ModuleInfo_9, (MR_Integer) 1, PredProcId_10);
  Desc_15 = parse_tree__write_error_spec__error_pieces_to_string_1_f_0(Pieces_14);
  Var_25 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_12);
  Var_28 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_13);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "% ");
  mercury__io__write_string_4_p_0(Stream_7, Prefix_8);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "pred ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), Var_25, &Var_38);
  mercury__io__write_string_4_p_0(Stream_7, Var_38);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) " proc ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), Var_28, &Var_48);
  mercury__io__write_string_4_p_0(Stream_7, Var_48);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
  mercury__io__write_string_4_p_0(Stream_7, Desc_15);
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n");
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0, 1);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36 = ((MR_String) ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36));
  hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(env_ptr);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_2(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) (env_ptr_arg);

  (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__to_int_2_p_0((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStr_36, &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
  if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
  {
    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18 == (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredId_37);
    if ((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_1(env_ptr);
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(
  void * env_ptr_arg)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s * env_ptr = (struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__commit_0) == 0)
    {
      mercury__list__member_2_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), &(env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__conv0_DumpPredIdStr_36, (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_3, env_ptr);
      (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = MR_TRUE;
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Lang_10,
  MR_Word ModuleInfo_11,
  MR_Word HeadVar__5_5)
{
  struct hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0_s env;

  {
    MR_Word PredId_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 0))));
    MR_Word PredInfo_13 = ((MR_Word) ((MR_hl_field(0, HeadVar__5_5, (MR_Integer) 1))));
    MR_String DumpOptions_15 = ((MR_String) ((MR_hl_field(0, Info_8, (MR_Integer) 0))));
    MR_Word DumpPredNames_17;
    MR_String Var_38 = ((MR_String) ((MR_hl_field(0, Info_8, (MR_Integer) 1))));
    MR_Word Var_41;

    (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 2))));
    DumpPredNames_17 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 3))));
    Var_41 = ((MR_Word) ((MR_hl_field(0, Info_8, (MR_Integer) 4))));
    hlds__hlds_pred__pred_id_to_int_2_p_0(PredId_12, &(env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__PredIdInt_18);
    {
      MR_String Var_19;
      MR_Word Var_20;

      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
      {
        Var_19 = ((MR_String) ((MR_hl_field(1, (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 0))));
        Var_20 = ((MR_Word) ((MR_hl_field(1, (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__DumpPredIdStrs_16, (MR_Integer) 1))));
      }
    }
    if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
    {
      MR_String Var_21;
      MR_Word Var_22;

      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (DumpPredNames_17 != (MR_Word) ((MR_Unsigned) 0U));
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
      {
        Var_21 = ((MR_String) ((MR_hl_field(1, DumpPredNames_17, (MR_Integer) 0))));
        Var_22 = ((MR_Word) ((MR_hl_field(1, DumpPredNames_17, (MR_Integer) 1))));
      }
    }
    if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
    {
      hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_4(&env);
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
      {
        MR_String PredName_25;

        PredName_25 = hlds__hlds_pred__pred_info_name_1_f_0(PredInfo_13);
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) (PredName_25)), DumpPredNames_17);
      }
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
        hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(Info_8, Stream_9, Lang_10, ModuleInfo_11, PredId_12, PredInfo_13);
      else
      {
      }
    }
    else
    {
      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_15, (MR_Char) 73);
      (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
      if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
        (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_imported_1_p_0(PredInfo_13);
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
      {
        {
          MR_Word ProcIds_26;
          MR_Integer ProcId_27;
          MR_Word Var_33;
          MR_Integer Var_52;

          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_15, (MR_Char) 73);
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
          if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
          {
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__pred_info_is_pseudo_imported_1_p_0(PredInfo_13);
            if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            {
              ProcIds_26 = hlds__hlds_pred__pred_info_all_procids_1_f_0(PredInfo_13);
              hlds__hlds_pred__in_in_unification_proc_id_1_p_0(&ProcId_27);
              (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (ProcIds_26 != (MR_Word) ((MR_Unsigned) 0U));
              if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
              {
                Var_52 = ((MR_Integer) ((MR_hl_field(1, ProcIds_26, (MR_Integer) 0))));
                Var_33 = ((MR_Word) ((MR_hl_field(1, ProcIds_26, (MR_Integer) 1))));
                (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (ProcId_27 == Var_52);
                if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
                  (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 0U));
              }
            }
          }
        }
        if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
        {
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = mercury__string__contains_char_2_p_0(DumpOptions_15, (MR_Char) 85);
          (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = !((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded);
          if ((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded)
            (env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded = hlds__hlds_pred__is_unify_index_or_compare_pred_1_p_0(PredInfo_13);
        }
      }
      if (!((env).hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0_env_0__succeeded))
        hlds__hlds_out__hlds_out_pred__write_pred_8_p_0(Info_8, Stream_9, Lang_10, ModuleInfo_11, PredId_12, PredInfo_13);
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
      mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), ((MR_Box) (Var_21)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
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
        mercury__map__det_insert_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), ((MR_Box) (Var_23)), ((MR_Box) (PredIdInfo_6)), STATE_VARIABLE_SpecPredMap_0_18, STATE_VARIABLE_SpecPredMap_19);
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
hlds__hlds_out__hlds_out_module__write_space_and_table_trie_step_5_p_0(
  MR_Word Stream_6,
  MR_Word TVarSet_7,
  MR_Word StepDesc_8)
{
  MR_String VarName_10 = ((MR_String) ((MR_hl_field(0, StepDesc_8, (MR_Integer) 0))));
  MR_Word TrieStep_11 = ((MR_Word) ((MR_hl_field(0, StepDesc_8, (MR_Integer) 1))));
  MR_String StepDescStr_12;

  switch (MR_tag((MR_Word) TrieStep_11)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(TrieStep_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          StepDescStr_12 = (MR_String) "dummy";
          break;
        case (MR_Integer) 1:
          StepDescStr_12 = (MR_String) "char";
          break;
        case (MR_Integer) 2:
          StepDescStr_12 = (MR_String) "string";
          break;
        case (MR_Integer) 3:
          StepDescStr_12 = (MR_String) "float";
          break;
        case (MR_Integer) 4:
          StepDescStr_12 = (MR_String) "foreign_enum";
          break;
        case (MR_Integer) 5:
          StepDescStr_12 = (MR_String) "typeinfo";
          break;
        case (MR_Integer) 6:
          StepDescStr_12 = (MR_String) "typeclassinfo";
          break;
        case (MR_Integer) 7:
          StepDescStr_12 = (MR_String) "promise_implied";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_57 = ((MR_Unsigned) ((MR_hl_field(1, TrieStep_11, (MR_Integer) 0))) & (MR_Integer) 15);

        StepDescStr_12 = ((&hlds__hlds_out__hlds_out_module_vector_common_10[0 + Var_57]))->hlds__hlds_out__hlds_out_module__vector_common_type_10_0__vct_10_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_27 = ((MR_Integer) ((MR_hl_field(2, TrieStep_11, (MR_Integer) 0))));
        MR_String Var_68;
        MR_String Var_75;

        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), N_27, &Var_68);
        Var_75 = mercury__string__f_43_43_2_f_0(Var_68, (MR_String) ")");
        StepDescStr_12 = mercury__string__f_43_43_2_f_0((MR_String) "enum(", Var_75);
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word Type_28 = ((MR_Word) ((MR_hl_field(3, TrieStep_11, (MR_Integer) 0))));
        MR_Word IsPoly_29 = ((((MR_Unsigned) ((MR_hl_field(3, TrieStep_11, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
        MR_Word IsAddr_30 = ((MR_Unsigned) ((MR_hl_field(3, TrieStep_11, (MR_Integer) 1))) & (MR_Integer) 1);
        MR_String TypeStr_31;
        MR_String IsPolyStr_32;
        MR_String IsAddrStr_33;
        MR_String Var_59;
        MR_String Var_61;
        MR_String Var_62;
        MR_String Var_64;
        MR_String Var_65;

        TypeStr_31 = parse_tree__mercury_to_mercury__mercury_type_to_string_3_f_0(TVarSet_7, (MR_Integer) 1, Type_28);
        switch (IsPoly_29) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            IsPolyStr_32 = (MR_String) "mono";
            break;
          case (MR_Integer) 1:
            IsPolyStr_32 = (MR_String) "poly";
            break;
        }
        switch (IsAddr_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            IsAddrStr_33 = (MR_String) "addr";
            break;
          case (MR_Integer) 0:
            IsAddrStr_33 = (MR_String) "value";
            break;
        }
        Var_59 = mercury__string__f_43_43_2_f_0(IsAddrStr_33, (MR_String) ")");
        Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_59);
        Var_62 = mercury__string__f_43_43_2_f_0(IsPolyStr_32, Var_61);
        Var_64 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_62);
        Var_65 = mercury__string__f_43_43_2_f_0(TypeStr_31, Var_64);
        StepDescStr_12 = mercury__string__f_43_43_2_f_0((MR_String) "general(", Var_65);
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, VarName_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ": ");
  mercury__io__write_string_4_p_0(Stream_6, StepDescStr_12);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_space_and_table_trie_step_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleInfo_7,
  MR_Word HeadVar__3_3)
{
  MR_Word PredProcId_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Word TableStructInfo_9 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String PredProcIdStr_11;
  MR_Word ProcTableStructInfo_12;
  MR_Word Attributes_13;
  MR_Word TVarSet_15;
  MR_Integer NumInputs_17;
  MR_Integer NumOutputs_18;
  MR_Word InputSteps_19;
  MR_Word MaybeOutputSteps_20;
  MR_Word ArgInfos_21;
  MR_Word Strictness_24;
  MR_Word SizeLimit_25;
  MR_Word Stats_26;
  MR_Word AllowReset_27;
  MR_Word BackendWarning_28;
  MR_Word Var_48;
  MR_String Var_106;
  MR_String Var_116;
  MR_Box conv0_STATE_VARIABLE_IO_49_49;

  PredProcIdStr_11 = hlds__hlds_out__hlds_out_util__pred_proc_id_to_dev_string_2_f_0(ModuleInfo_7, PredProcId_8);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n% table struct info for ");
  mercury__io__write_string_4_p_0(Stream_6, PredProcIdStr_11);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  ProcTableStructInfo_12 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_9, (MR_Integer) 0))));
  Attributes_13 = ((MR_Word) ((MR_hl_field(0, TableStructInfo_9, (MR_Integer) 1))));
  TVarSet_15 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_12, (MR_Integer) 1))));
  NumInputs_17 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_12, (MR_Integer) 3))));
  NumOutputs_18 = ((MR_Integer) ((MR_hl_field(0, ProcTableStructInfo_12, (MR_Integer) 4))));
  InputSteps_19 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_12, (MR_Integer) 5))));
  MaybeOutputSteps_20 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_12, (MR_Integer) 6))));
  ArgInfos_21 = ((MR_Word) ((MR_hl_field(0, ProcTableStructInfo_12, (MR_Integer) 7))));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% #inputs: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), NumInputs_17, &Var_106);
  mercury__io__write_string_4_p_0(Stream_6, Var_106);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", #outputs: ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), NumOutputs_18, &Var_116);
  mercury__io__write_string_4_p_0(Stream_6, Var_116);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% input steps:");
  {
    Var_48 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_48, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[4]));
    MR_hl_field(0, Var_48, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0_1));
    MR_hl_field(0, Var_48, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_48, 3) = ((MR_Box) (Stream_6));
    MR_hl_field(0, Var_48, 4) = ((MR_Box) (TVarSet_15));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, InputSteps_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_49_49);
  mercury__io__nl_3_p_0(Stream_6);
  if ((MaybeOutputSteps_20 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% no output steps");
  else
  {
    MR_Word OutputSteps_23 = ((MR_Word) ((MR_hl_field(1, MaybeOutputSteps_20, (MR_Integer) 0))));
    MR_Box conv1_STATE_VARIABLE_IO_54_54;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% output steps:");
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_table_step_desc_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_48, OutputSteps_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_54_54);
    mercury__io__nl_3_p_0(Stream_6);
  }
  hlds__hlds_out__hlds_out_pred__write_table_arg_infos_5_p_0(Stream_6, TVarSet_15, ArgInfos_21);
  Strictness_24 = ((MR_Word) ((MR_hl_field(0, Attributes_13, (MR_Integer) 0))));
  SizeLimit_25 = ((MR_Word) ((MR_hl_field(0, Attributes_13, (MR_Integer) 1))));
  Stats_26 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_13, (MR_Integer) 2))) >> 2)) & (MR_Integer) 1);
  AllowReset_27 = ((((MR_Unsigned) ((MR_hl_field(0, Attributes_13, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
  BackendWarning_28 = ((MR_Unsigned) ((MR_hl_field(0, Attributes_13, (MR_Integer) 2))) & (MR_Integer) 1);
  switch (MR_tag((MR_Word) Strictness_24)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Strictness_24)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% all strict\n");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% all fast_loose\n");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArgMethods_29 = ((MR_Word) ((MR_hl_field(1, Strictness_24, (MR_Integer) 0))));
        MR_Word HiddenArgMethod_30 = ((MR_Unsigned) ((MR_hl_field(1, Strictness_24, (MR_Integer) 1))) & (MR_Integer) 1);

        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% specified [");
        hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_5_p_0(Stream_6, (MR_String) "", ArgMethods_29);
        mercury__io__write_string_4_p_0(Stream_6, (MR_String) "]");
        switch (HiddenArgMethod_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", hidden args by addr\n");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", hidden args by value\n");
            break;
        }
      }
      break;
  }
  if ((SizeLimit_25 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% no size limit\n");
  else
  {
    MR_Integer Limit_31 = ((MR_Integer) ((MR_hl_field(1, SizeLimit_25, (MR_Integer) 0))));
    MR_String Var_127;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% size limit ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), Limit_31, &Var_127);
    mercury__io__write_string_4_p_0(Stream_6, Var_127);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
  switch (Stats_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% do not gather statistics\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% gather statistics\n");
      break;
  }
  switch (AllowReset_27) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% allow reset\n");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% do not allow reset\n");
      break;
  }
  switch (BackendWarning_28) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ignore only with warning\n");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% may ignore without warning\n");
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_arg_tabling_methods_5_p_0(
  MR_Word Stream_1,
  MR_String Prefix_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word MaybeMethod_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word MaybeMethods_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__3_3;

      mercury__io__write_string_4_p_0(Stream_1, Prefix_2);
      if ((MaybeMethod_13 == (MR_Word) ((MR_Unsigned) 0U)))
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "output");
      else
      {
        MR_Word Var_31 = ((MR_Word) ((MR_hl_field(1, MaybeMethod_13, (MR_Integer) 0))));

        switch (Var_31) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "addr");
            break;
          case (MR_Integer) 2:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "promise_implied");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "value");
            break;
        }
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = MaybeMethods_14;
      Prefix_2 = (MR_String) ", ";
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Integer N_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
  MR_Word ConstStruct_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
  MR_Word ConsId_9;
  MR_Word ConstArgs_10;
  MR_Word Type_11;
  MR_Word Inst_12;
  MR_Word DefinedWhere_13;
  MR_Word Var_34;
  MR_Word Var_41;
  MR_String Var_53;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "\nconst_struct ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), N_6, &Var_53);
  mercury__io__write_string_4_p_0(Stream_5, Var_53);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":\n");
  ConsId_9 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 0))));
  ConstArgs_10 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 1))));
  Type_11 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 2))));
  Inst_12 = ((MR_Word) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 3))));
  DefinedWhere_13 = ((MR_Unsigned) ((MR_hl_field(0, ConstStruct_7, (MR_Integer) 4))) & (MR_Integer) 1);
  parse_tree__mercury_to_mercury__mercury_output_cons_id_6_p_0((MR_Integer) 1, (MR_Integer) 1, ConsId_9, Stream_5);
  if ((ConstArgs_10 == (MR_Word) ((MR_Unsigned) 0U)))
    mercury__io__nl_3_p_0(Stream_5);
  else
  {
    MR_Word HeadConstArg_14 = ((MR_Word) ((MR_hl_field(1, ConstArgs_10, (MR_Integer) 0))));
    MR_Word TailConstArgs_15 = ((MR_Word) ((MR_hl_field(1, ConstArgs_10, (MR_Integer) 1))));

    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(\n");
    hlds__hlds_out__hlds_out_module__write_const_struct_args_5_p_0(Stream_5, HeadConstArg_14, TailConstArgs_15);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")\n");
  }
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "type: ");
  Var_34 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
  parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(Var_34, (MR_Integer) 0, Type_11, Stream_5);
  mercury__io__nl_3_p_0(Stream_5);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "inst: ");
  Var_41 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_inst_var_type_0));
  hlds__hlds_out__hlds_out_mode__mercury_output_structured_inst_8_p_0(Stream_5, (MR_Integer) 1, Var_41, (MR_Integer) 0, (MR_Integer) 0, Inst_12);
  switch (DefinedWhere_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "defined_in_other_module\n");
      break;
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "defined_in_this_module\n");
      break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_const_struct_args_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadConstArg_7,
  MR_Word TailConstArgs_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "    ");
    if (((MR_tag((MR_Word) HeadConstArg_7)) == (MR_Integer) 0))
    {
      MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(0, HeadConstArg_7, (MR_Integer) 0))));
      MR_String Var_40;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "cs(");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_4[0]), N_10, &Var_40);
      mercury__io__write_string_4_p_0(Stream_6, Var_40);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ")");
    }
    else
    {
      MR_Word ConsId_11 = ((MR_Word) ((MR_hl_field(1, HeadConstArg_7, (MR_Integer) 0))));
      MR_Word Type_12 = ((MR_Word) ((MR_hl_field(1, HeadConstArg_7, (MR_Integer) 1))));
      MR_Word Var_29;

      parse_tree__mercury_to_mercury__mercury_output_cons_id_6_p_0((MR_Integer) 1, (MR_Integer) 1, ConsId_11, Stream_6);
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n        with type ");
      Var_29 = mercury__varset__init_0_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_tvar_type_0));
      parse_tree__mercury_to_mercury__mercury_output_type_6_p_0(Var_29, (MR_Integer) 0, Type_12, Stream_6);
    }
    if ((TailConstArgs_8 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
    else
    {
      MR_Word HeadTailConstArg_13 = ((MR_Word) ((MR_hl_field(1, TailConstArgs_8, (MR_Integer) 0))));
      MR_Word TailTailConstArgs_14 = ((MR_Word) ((MR_hl_field(1, TailConstArgs_8, (MR_Integer) 1))));
      MR_Word next_value_of_HeadConstArg_7;
      MR_Word next_value_of_TailConstArgs_8;

      mercury__io__write_string_4_p_0(Stream_6, (MR_String) ",\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadConstArg_7 = HeadTailConstArg_13;
      next_value_of_TailConstArgs_8 = TailTailConstArgs_14;
      HeadConstArg_7 = next_value_of_HeadConstArg_7;
      TailConstArgs_8 = next_value_of_TailConstArgs_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(
  MR_Word Stream_6,
  MR_Word ModuleName_7,
  MR_Word Entry_8)
{
  MR_Word Section_10 = ((((MR_Unsigned) ((MR_hl_field(0, Entry_8, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  MR_Word ImportOrUse_11 = ((MR_Unsigned) ((MR_hl_field(0, Entry_8, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Word Avails_12 = ((MR_Word) ((MR_hl_field(0, Entry_8, (MR_Integer) 1))));
  MR_String ImportOrUseDecl_13;
  MR_String Var_22;

  switch (ImportOrUse_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      ImportOrUseDecl_13 = (MR_String) "import_module";
      break;
    case (MR_Integer) 1:
      ImportOrUseDecl_13 = (MR_String) "use_module";
      break;
  }
  Var_22 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ":- ");
  mercury__io__write_string_4_p_0(Stream_6, ImportOrUseDecl_13);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, Var_22);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ".\n");
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "% ");
  mercury__io__write_4_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_module_section_0), Stream_6, ((MR_Box) (Section_10)));
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) ", ");
  mercury__io__write_line_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[0]), Stream_6, ((MR_Box) (Avails_12)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_const_struct_4_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_table_struct_info_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_avail_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
hlds__hlds_out__hlds_out_module__write_hlds_4_p_0(
  MR_Word Stream_5,
  MR_Word ModuleInfo_6)
{
  MR_bool succeeded;
  MR_Word Globals_8;
  MR_Word DumpPredIdStrs_9;
  MR_Word DumpPredNames_10;
  MR_Word DumpSpecPreds0_11;
  MR_Word DumpSpecPredTypeNames_12;
  MR_Word Info_13;
  MR_String DumpOptions0_15;
  MR_Word DumpSpecPreds_16;
  MR_String DumpOptions_19;
  MR_Word ModuleName_77;
  MR_String Var_83;

  hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_6, &Globals_8);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 192, &DumpPredIdStrs_9);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 193, &DumpPredNames_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 195, &DumpSpecPreds0_11);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_8, (MR_Integer) 196, &DumpSpecPredTypeNames_12);
  hlds__hlds_module__module_info_get_name_2_p_0(ModuleInfo_6, &ModuleName_77);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% vim: ts=2 sw=2 ft=mercury\n\n");
  Var_83 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_77);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- module ");
  mercury__io__write_string_4_p_0(Stream_5, Var_83);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ".\n\n");
  Info_13 = hlds__hlds_out__hlds_out_util__init_hlds_out_info_2_f_0(Globals_8, (MR_Integer) 1);
  DumpOptions0_15 = ((MR_String) ((MR_hl_field(0, Info_13, (MR_Integer) 0))));
  if ((DumpSpecPredTypeNames_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    DumpSpecPreds_16 = DumpSpecPreds0_11;
    switch (DumpSpecPreds_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DumpOptions_19 = DumpOptions0_15;
        break;
      case (MR_Integer) 1:
        DumpOptions_19 = mercury__string__f_43_43_2_f_0(DumpOptions0_15, (MR_String) "U");
        break;
    }
  }
  else
  {
    DumpSpecPreds_16 = (MR_Integer) 1;
    DumpOptions_19 = mercury__string__f_43_43_2_f_0(DumpOptions0_15, (MR_String) "U");
  }
  succeeded = (DumpPredIdStrs_9 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
  }
  if (!(succeeded))
  {
    succeeded = (DumpPredNames_10 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
    }
    if (!(succeeded))
      succeeded = (DumpSpecPreds_16 == (MR_Integer) 1);
  }
  if (!(succeeded))
  {
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 73);
    if (succeeded)
    {
      MR_Word AvailModuleMap_24;
      MR_Word Var_46;
      MR_Box conv0_STATE_VARIABLE_IO_47_47;

      hlds__hlds_module__module_info_get_avail_module_map_2_p_0(ModuleInfo_6, &AvailModuleMap_24);
      {
        Var_46 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_46, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[2]));
        MR_hl_field(0, Var_46, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_1));
        MR_hl_field(0, Var_46, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_46, 3) = ((MR_Box) (Stream_5));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_avail_module_entry_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_46, AvailModuleMap_24, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_47_47);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 84);
    if (succeeded)
    {
      MR_Word LocalOnly_25;
      MR_Word TypeTable_26;
      MR_Word InstanceTable_27;
      MR_Word ClassTable_28;

      succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 76);
      if (succeeded)
        LocalOnly_25 = (MR_Integer) 1;
      else
        LocalOnly_25 = (MR_Integer) 0;
      hlds__hlds_module__module_info_get_type_table_2_p_0(ModuleInfo_6, &TypeTable_26);
      hlds__hlds_module__module_info_get_instance_table_2_p_0(ModuleInfo_6, &InstanceTable_27);
      hlds__hlds_module__module_info_get_class_table_2_p_0(ModuleInfo_6, &ClassTable_28);
      hlds__hlds_out__hlds_out_type_table__write_type_table_6_p_0(Info_13, Stream_5, LocalOnly_25, TypeTable_26);
      hlds__hlds_out__hlds_out_typeclass_table__write_classes_5_p_0(Info_13, Stream_5, ClassTable_28);
      hlds__hlds_out__hlds_out_typeclass_table__write_instances_5_p_0(Info_13, Stream_5, InstanceTable_27);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 77);
    if (succeeded)
    {
      MR_Word InstTable_29;
      MR_Word ModeTable_30;
      MR_Integer InstLimit_31;

      hlds__hlds_module__module_info_get_inst_table_2_p_0(ModuleInfo_6, &InstTable_29);
      hlds__hlds_module__module_info_get_mode_table_2_p_0(ModuleInfo_6, &ModeTable_30);
      libs__globals__lookup_int_option_3_p_0(Globals_8, (MR_Integer) 199, &InstLimit_31);
      hlds__hlds_out__hlds_out_inst_table__write_inst_table_6_p_0(Stream_5, (MR_Integer) 1, InstLimit_31, InstTable_29);
      hlds__hlds_out__hlds_out_inst_table__write_mode_table_4_p_0(Stream_5, ModeTable_30);
    }
    succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 90);
    if (succeeded)
    {
      MR_Word TableStructMap_32;
      MR_Word TableStructs_89;
      MR_Word Var_92;
      MR_Box conv1_STATE_VARIABLE_IO_16_93;

      hlds__hlds_module__module_info_get_table_struct_map_2_p_0(ModuleInfo_6, &TableStructMap_32);
      mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_table_struct_info_0), TableStructMap_32, &TableStructs_89);
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "%-------- Table structs --------\n");
      {
        Var_92 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_92, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[3]));
        MR_hl_field(0, Var_92, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_2));
        MR_hl_field(0, Var_92, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(0, Var_92, 3) = ((MR_Box) (Stream_5));
        MR_hl_field(0, Var_92, 4) = ((MR_Box) (ModuleInfo_6));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_92, TableStructs_89, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_16_93);
      mercury__io__nl_3_p_0(Stream_5);
    }
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 88);
  if (succeeded)
  {
    MR_Word ConstStructDb_33;
    MR_Word ConstStructs_98;
    MR_Word Var_101;
    MR_Box conv2_STATE_VARIABLE_IO_14_102;

    hlds__hlds_module__module_info_get_const_struct_db_2_p_0(ModuleInfo_6, &ConstStructDb_33);
    hlds__const_struct__const_struct_db_get_structs_2_p_0(ConstStructDb_33, &ConstStructs_98);
    mercury__io__write_string_4_p_0(Stream_5, (MR_String) "%-------- Const structs --------\n\n");
    {
      Var_101 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_101, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[1]));
      MR_hl_field(0, Var_101, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_hlds_4_p_0_3));
      MR_hl_field(0, Var_101, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_101, 3) = ((MR_Box) (Stream_5));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_101, ConstStructs_98, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_14_102);
    mercury__io__nl_3_p_0(Stream_5);
  }
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 120);
  if (!(succeeded))
    succeeded = (DumpSpecPreds_16 == (MR_Integer) 1);
  if (succeeded)
    hlds__hlds_out__hlds_out_module__write_preds_8_p_0(Info_13, Stream_5, DumpSpecPreds_16, DumpSpecPredTypeNames_12, (MR_Integer) 1, ModuleInfo_6);
  succeeded = mercury__string__contains_char_2_p_0(DumpOptions_19, (MR_Char) 79);
  if (succeeded)
  {
    MR_Word MaybeDependencyInfo_34;

    hlds__hlds_module__module_info_get_maybe_dependency_info_2_p_0(ModuleInfo_6, &MaybeDependencyInfo_34);
    if ((MaybeDependencyInfo_34 == (MR_Word) ((MR_Unsigned) 0U)))
      mercury__io__write_string_4_p_0(Stream_5, (MR_String) "% No dependency info\n\n");
    else
    {
      MR_Word DependencyInfo_35 = ((MR_Word) ((MR_hl_field(1, MaybeDependencyInfo_34, (MR_Integer) 0))));

      hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(Stream_5, ModuleInfo_6, DependencyInfo_35);
    }
  }
  hlds__hlds_out__hlds_out_module__write_footer_4_p_0(Stream_5, ModuleInfo_6);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_dependency_scc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_dep_graph_edge_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__write_dep_graph_node_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0(
  MR_Word Stream_8,
  MR_Word ModuleInfo_9,
  MR_Word DependencyInfo_10)
{
  MR_Word Graph_12;
  MR_Word Ordering_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_23;
  MR_Box conv0_STATE_VARIABLE_IO_20_20;
  MR_Box conv1_STATE_VARIABLE_IO_15;

  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "% Dependency graph\n\n");
  Graph_12 = libs__dependency_graph__dependency_info_get_graph_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_10);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (ModuleInfo_9));
  }
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_9[0]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_2));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__digraph__traverse_5_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Graph_12, Var_18, Var_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_20_20);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n% Bottom up dependency sccs\n\n");
  Ordering_13 = libs__dependency_graph__dependency_info_get_bottom_up_sccs_1_f_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), DependencyInfo_10);
  {
    Var_23 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_23, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_8[1]));
    MR_hl_field(0, Var_23, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_119_114_105_116_101_95_100_101_112_101_110_100_101_110_99_121_95_105_110_102_111_95_95_91_49_93_95_48_6_p_0_3));
    MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_23, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_23, 4) = ((MR_Box) (ModuleInfo_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, Ordering_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_15);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  hlds__hlds_out__hlds_out_module__maybe_write_pred_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_2(
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
hlds__hlds_out__hlds_out_module__write_preds_8_p_0_1(
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
hlds__hlds_out__hlds_out_module__write_preds_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Word DumpSpecPreds_11,
  MR_Word DumpSpecPredTypeNames_12,
  MR_Word Lang_13,
  MR_Word ModuleInfo_14)
{
  MR_Word PredIdTable_16;
  MR_Word PredIdsInfos_17;
  MR_Word PrintPredIdsInfos_20;
  MR_Word Var_30;
  MR_Box conv3_STATE_VARIABLE_IO_24;

  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "%-------- Predicates --------\n\n");
  hlds__hlds_module__module_info_get_pred_id_table_2_p_0(ModuleInfo_14, &PredIdTable_16);
  mercury__map__to_assoc_list_2_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_id_0), (MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0), PredIdTable_16, &PredIdsInfos_17);
  switch (DumpSpecPreds_11) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Globals_18;
        MR_Word NameOrder_19;

        hlds__hlds_module__module_info_get_globals_2_p_0(ModuleInfo_14, &Globals_18);
        libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 194, &NameOrder_19);
        switch (NameOrder_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            PrintPredIdsInfos_20 = PredIdsInfos_17;
            break;
          case (MR_Integer) 1:
            mercury__list__sort_3_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[4]), PredIdsInfos_17, &PrintPredIdsInfos_20);
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word SpecPredMap0_21;
        MR_Word SpecPredMap_22;
        MR_Word Var_29;
        MR_Box conv2_SpecPredMap_22;

        mercury__map__init_1_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), &SpecPredMap0_21);
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_29, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_6[0]));
          MR_hl_field(0, Var_29, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_8_p_0_2));
          MR_hl_field(0, Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_29, 3) = ((MR_Box) (DumpSpecPredTypeNames_12));
        }
        mercury__list__foldl_4_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[3]), Var_29, PredIdsInfos_17, ((MR_Box) (SpecPredMap0_21)), &conv2_SpecPredMap_22);
        SpecPredMap_22 = ((MR_Word) (conv2_SpecPredMap_22));
        mercury__map__values_2_p_0((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_3[0]), (MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), SpecPredMap_22, &PrintPredIdsInfos_20);
      }
      break;
  }
  {
    Var_30 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_30, 0) = ((MR_Box) (&hlds__hlds_out__hlds_out_module_scalar_common_7[0]));
    MR_hl_field(0, Var_30, 1) = ((MR_Box) (hlds__hlds_out__hlds_out_module__write_preds_8_p_0_3));
    MR_hl_field(0, Var_30, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_30, 3) = ((MR_Box) (Info_9));
    MR_hl_field(0, Var_30, 4) = ((MR_Box) (Stream_10));
    MR_hl_field(0, Var_30, 5) = ((MR_Box) (Lang_13));
    MR_hl_field(0, Var_30, 6) = ((MR_Box) (ModuleInfo_14));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&hlds__hlds_out__hlds_out_module_scalar_common_2[2]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_30, PrintPredIdsInfos_20, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_24);
}

static void MR_CALL 
hlds__hlds_out__hlds_out_module__write_footer_4_p_0(
  MR_Word Stream_5,
  MR_Word Module_6)
{
  MR_Word ModuleName_8;
  MR_String Var_15;

  hlds__hlds_module__module_info_get_name_2_p_0(Module_6, &ModuleName_8);
  Var_15 = parse_tree__prog_out__sym_name_to_escaped_string_1_f_0(ModuleName_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ":- end_module ");
  mercury__io__write_string_4_p_0(Stream_5, Var_15);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ".\n");
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
