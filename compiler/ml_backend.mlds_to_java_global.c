/*
** Automatically generated from `mlds_to_java_global.m'
** by the Mercury compiler,
** version rotd-2018-10-15
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


// :- module ml_backend.mlds_to_java_global.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_java_global__init
ENDINIT
*/

#include "ml_backend.mlds_to_java_global.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "transform_hlds.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_class.mih"
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_array_assignments_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word GlobalVarName_11,
  MR_Word ElementInit_12,
  MR_Integer Index_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefn_8);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_cell_group_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_scalar_init_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer ChunkNum_6);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Map_9,
  MR_Word Scalar_10);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalars_12,
  MR_Integer ChunkNum_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_10_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_10_p_0(
  MR_Word Info_11,
  MR_Integer Indent_12,
  MR_Word TypeNum_13,
  MR_Word CellGroup_14,
  MR_Word STATE_VARIABLE_Graph_0_28,
  MR_Word * STATE_VARIABLE_Graph_29,
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_init_global_var_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer I_6);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_method_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Defns_10,
  MR_Integer Chunk_11,
  MR_Integer * HeadVar__5_5);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_statements_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_common_data_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_1(
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
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_2[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_3[1][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_4[1][7];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_5[2][13];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_6[2][11];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_7[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_8[2][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_9[1][1];




static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_3[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_4[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_5[2][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_module_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_type_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_6[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_7[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_8[2][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_9[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_array_assignments_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word GlobalVarName_11,
  MR_Word ElementInit_12,
  MR_Integer Index_13,
  MR_Integer * HeadVar__6_6)
{
  {
    *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Index_13 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(GlobalVarName_11);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__io__write_int_3_p_0(Index_13);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(Info_9, ElementInit_12, (MR_Word) ((MR_Unsigned) 0U));
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__6_6;

    ml_backend__mlds_to_java_global__output_rtti_array_assignments_for_java_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefn_8)
{
  {
    MR_Word GlobalVarName_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 0))));
    MR_Word Initializer_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_8, (MR_Integer) 4))));

    switch (MR_tag((MR_Word) Initializer_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_global.output_rtti_defn_assignments_for_java\'/5", (MR_String) "init_obj");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word StructType_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_14, (MR_Integer) 0))));
          MR_Word FieldInits_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Initializer_14, (MR_Integer) 1))));
          MR_Word IsArray_19;

          IsArray_19 = ml_backend__mlds_to_java_type__type_is_array_for_java_1_f_0(StructType_17);
          switch (IsArray_19) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_global.output_rtti_defn_assignments_for_java\'/5", (MR_String) "is_array");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
                ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(GlobalVarName_10);
                mercury__io__write_string_3_p_0((MR_String) ".init(");
                ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_4_p_0(Info_6, FieldInits_18);
                mercury__io__write_string_3_p_0((MR_String) ");\n");
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word ElementInits_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Initializer_14, (MR_Integer) 0))));
          MR_Word Var_24;
          MR_Box conv2__Index_21;
          MR_Box conv1_STATE_VARIABLE_IO_23;

          {
            Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_6[1]));
            MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_5_p_0_1));
            MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_6));
            MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Indent_7));
            MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (GlobalVarName_10));
          }
          mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, ElementInits_20, ((MR_Box) ((MR_Integer) 0)), &conv2__Index_21, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_23);
        }
        break;
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  {
    MR_Word Var_15;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "//\n");
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_8[1]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, GlobalVarDefns_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_cell_group_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word TypeNum_9,
  MR_Word CellGroup_10)
{
  {
    MR_Integer TypeRawNum_12 = (MR_Integer) (TypeNum_9);
    MR_Word Type_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 0))));
    MR_Word ClassDefn_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 1))));
    MR_Word RowInits_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_10, (MR_Integer) 4))));
    MR_Integer Var_30;
    MR_Word Var_33;
    MR_String Var_43;

    ml_backend__mlds_to_java_class__output_class_defn_for_java_5_p_0(Info_7, Indent_8, ClassDefn_14);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "private static final ");
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, Type_13);
    mercury__io__write_string_3_p_0((MR_String) " MR_vector_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), TypeRawNum_12, &Var_43);
    mercury__io__write_string_3_p_0(Var_43);
    mercury__io__write_string_3_p_0((MR_String) "[] = {\n");
    Var_30 = (MR_Integer) ((MR_Unsigned) Indent_8 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Var_30);
    Var_33 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInits_17);
    ml_backend__mlds_to_java_data__output_initializer_body_list_for_java_4_p_0(Info_7, Var_33);
    mercury__io__nl_2_p_0();
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "};\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_scalar_init_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer ChunkNum_6)
{
  {
    MR_String Var_19;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "MR_init_scalars_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), ChunkNum_6, &Var_19);
    mercury__io__write_string_3_p_0(Var_19);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word Map_9,
  MR_Word Scalar_10)
{
  {
    MR_Word Initializer_12;
    MR_Word Type_14;
    MR_Word TypeNum_15;
    MR_Integer RowNum_16;
    MR_Integer TypeRawNum_17;
    MR_Word Var_28;
    MR_String Var_37;
    MR_String Var_47;
    MR_Box conv0_Initializer_12;

    mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Map_9, ((MR_Box) (Scalar_10)), &conv0_Initializer_12);
    Initializer_12 = ((MR_Word) (conv0_Initializer_12));
    Type_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 1))));
    TypeNum_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 2))));
    RowNum_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Scalar_10, (MR_Integer) 3))));
    TypeRawNum_17 = (MR_Integer) (TypeNum_15);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_8);
    mercury__io__write_string_3_p_0((MR_String) "MR_scalar_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), TypeRawNum_17, &Var_37);
    mercury__io__write_string_3_p_0(Var_37);
    mercury__io__write_string_3_p_0((MR_String) "[");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), RowNum_16, &Var_47);
    mercury__io__write_string_3_p_0(Var_47);
    mercury__io__write_string_3_p_0((MR_String) "] = ");
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Type_14));
    }
    ml_backend__mlds_to_java_data__output_initializer_body_for_java_5_p_0(Info_7, Initializer_12, Var_28);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_scalar_init_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_8_p_0(
  MR_Word Info_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalars_12,
  MR_Integer ChunkNum_13,
  MR_Integer * HeadVar__6_6)
{
  {
    MR_Word Var_24;
    MR_Integer Var_26;
    MR_String Var_39;
    MR_Box conv0_STATE_VARIABLE_IO_25_25;

    *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) ChunkNum_13 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_scalars_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), ChunkNum_13, &Var_39);
    mercury__io__write_string_3_p_0(Var_39);
    mercury__io__write_string_3_p_0((MR_String) "() {\n");
    Var_26 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_24 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (Info_9));
      MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (Var_26));
      MR_hl_field(MR_mktag(0), Var_24, 5) = ((MR_Box) (Map_11));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_24, Scalars_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_25_25);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_10);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_10_p_0_1(
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
    MR_Integer conv2_HeadVar__6_6;
    MR_Word conv1_HeadVar__8_8;
    MR_Word conv0_HeadVar__10_10;

    ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__10_10);
    *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
    *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__8_8));
    *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__10_10));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_10_p_0(
  MR_Word Info_11,
  MR_Integer Indent_12,
  MR_Word TypeNum_13,
  MR_Word CellGroup_14,
  MR_Word STATE_VARIABLE_Graph_0_28,
  MR_Word * STATE_VARIABLE_Graph_29,
  MR_Word STATE_VARIABLE_Map_0_30,
  MR_Word * STATE_VARIABLE_Map_31)
{
  {
    MR_Integer TypeRawNum_18 = (MR_Integer) (TypeNum_13);
    MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 0))));
    MR_Word RowInitsCord_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), CellGroup_14, (MR_Integer) 4))));
    MR_Word ArrayType_24;
    MR_Word RowInits_25;
    MR_Word MLDS_ModuleName_26;
    MR_Word Var_43;
    MR_Word Var_44;
    MR_Word Var_48;
    MR_String Var_75;
    MR_Box conv5_Var_27;
    MR_Box conv4_STATE_VARIABLE_Graph_29;
    MR_Box conv3_STATE_VARIABLE_Map_31;

    {
      ArrayType_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), ArrayType_24, 0) = ((MR_Box) ((MR_Unsigned) 5U));
      MR_hl_field(MR_mktag(3), ArrayType_24, 1) = ((MR_Box) (Type_19));
    }
    RowInits_25 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitsCord_23);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_12);
    mercury__io__write_string_3_p_0((MR_String) "private static final ");
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_11, Type_19);
    mercury__io__write_string_3_p_0((MR_String) "[] MR_scalar_common_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), TypeRawNum_18, &Var_75);
    mercury__io__write_string_3_p_0(Var_75);
    mercury__io__write_string_3_p_0((MR_String) " = ");
    {
      Var_43 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_43, 0) = ((MR_Box) (RowInits_25));
    }
    {
      Var_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_44, 0) = ((MR_Box) (ArrayType_24));
    }
    ml_backend__mlds_to_java_data__output_initializer_alloc_only_for_java_5_p_0(Info_11, Var_43, Var_44);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
    MLDS_ModuleName_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2))));
    {
      Var_48 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_48, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_5[1]));
      MR_hl_field(MR_mktag(0), Var_48, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_defns_for_java_10_p_0_1));
      MR_hl_field(MR_mktag(0), Var_48, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(MR_mktag(0), Var_48, 3) = ((MR_Box) (MLDS_ModuleName_26));
      MR_hl_field(MR_mktag(0), Var_48, 4) = ((MR_Box) (Type_19));
      MR_hl_field(MR_mktag(0), Var_48, 5) = ((MR_Box) (TypeNum_13));
    }
    mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_2[0]), Var_48, RowInits_25, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_27, ((MR_Box) (STATE_VARIABLE_Graph_0_28)), &conv4_STATE_VARIABLE_Graph_29, ((MR_Box) (STATE_VARIABLE_Map_0_30)), &conv3_STATE_VARIABLE_Map_31);
    *STATE_VARIABLE_Graph_29 = ((MR_Word) (conv4_STATE_VARIABLE_Graph_29));
    *STATE_VARIABLE_Map_31 = ((MR_Word) (conv3_STATE_VARIABLE_Map_31));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_init_global_var_method_for_java_4_p_0(
  MR_Integer Indent_5,
  MR_Integer I_6)
{
  {
    MR_String Var_19;

    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_5);
    mercury__io__write_string_3_p_0((MR_String) "MR_init_data_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), I_6, &Var_19);
    mercury__io__write_string_3_p_0(Var_19);
    mercury__io__write_string_3_p_0((MR_String) "();\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_method_for_java_7_p_0(
  MR_Word Info_8,
  MR_Integer Indent_9,
  MR_Word Defns_10,
  MR_Integer Chunk_11,
  MR_Integer * HeadVar__5_5)
{
  {
    MR_Integer Var_22;
    MR_String Var_31;

    *HeadVar__5_5 = (MR_Integer) ((MR_Unsigned) Chunk_11 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "private static void MR_init_data_");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_9[0]), Chunk_11, &Var_31);
    mercury__io__write_string_3_p_0(Var_31);
    mercury__io__write_string_3_p_0((MR_String) "() {\n");
    Var_22 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) (MR_Integer) 1);
    ml_backend__mlds_to_java_global__output_init_global_var_statements_for_java_5_p_0(Info_8, Var_22, Defns_10);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_9);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_statements_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word GlobalVarName_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 0))));
      MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 3))));
      MR_Word Initializer_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 4))));
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_2);
      ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(GlobalVarName_16);
      ml_backend__mlds_to_java_data__output_initializer_for_java_6_p_0(Info_1, (MR_Word) ((MR_Unsigned) 0U), Type_19, Initializer_20);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  if (!((GlobalVarDefns_8 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word OrderedDefns_12;
    MR_Word Var_18;
    MR_Integer Var_20;
    MR_Box conv0_STATE_VARIABLE_IO_19_19;

    OrderedDefns_12 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(GlobalVarDefns_8);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_20 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_8[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Var_20));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, OrderedDefns_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19_19);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_common_data_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_vector_cell_group_for_java_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_common_data_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word VectorCellGroupMap_8)
{
  {
    MR_Word Var_12;
    MR_Box conv0_STATE_VARIABLE_IO_11;

    {
      Var_12 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_vector_common_data_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_12, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_12, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_12, 4) = ((MR_Box) (Indent_7));
    }
    mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_12, VectorCellGroupMap_8, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_11);
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_call_scalar_init_method_for_java_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv5_HeadVar__6_6;

    ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_8_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__6_6));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_1(
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
    MR_Word conv1_STATE_VARIABLE_Graph_29;
    MR_Word conv0_STATE_VARIABLE_Map_31;

    ml_backend__mlds_to_java_global__output_scalar_defns_for_java_10_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Graph_29, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Map_31);
    *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Graph_29));
    *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Map_31));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word ScalarCellGroupMap_8)
{
  {
    MR_bool succeeded;
    MR_Word Graph_10;
    MR_Word Map_11;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Box conv4_Graph_10;
    MR_Box conv3_Map_11;
    MR_Box conv2_STATE_VARIABLE_IO_21_21;
    MR_Word SortedScalars0_12;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_5[0]));
      MR_hl_field(MR_mktag(0), Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_18, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_18, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_18, 4) = ((MR_Box) (Indent_7));
    }
    Var_19 = mercury__digraph__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0));
    Var_20 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
    mercury__map__foldl3_8_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, ScalarCellGroupMap_8, ((MR_Box) (Var_19)), &conv4_Graph_10, ((MR_Box) (Var_20)), &conv3_Map_11, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21_21);
    Graph_10 = ((MR_Word) (conv4_Graph_10));
    Map_11 = ((MR_Word) (conv3_Map_11));
    succeeded = mercury__digraph__tsort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), Graph_10, &SortedScalars0_12);
    if (succeeded)
    {
      MR_Word SortedScalars_13;
      MR_Word ScalarChunks_14;
      MR_Integer NumChunks_15;
      MR_Word Var_23;
      MR_Word Var_29;
      MR_Integer Var_31;
      MR_Integer Var_33;
      MR_Box conv7_NumChunks_15;
      MR_Box conv6_STATE_VARIABLE_IO_25_25;
      MR_Box conv8_STATE_VARIABLE_IO_32_32;

      mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), SortedScalars0_12, &SortedScalars_13);
      mercury__list__chunk_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), SortedScalars_13, (MR_Integer) 1000, &ScalarChunks_14);
      {
        Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_6[0]));
        MR_hl_field(MR_mktag(0), Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_2));
        MR_hl_field(MR_mktag(0), Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(MR_mktag(0), Var_23, 3) = ((MR_Box) (Info_6));
        MR_hl_field(MR_mktag(0), Var_23, 4) = ((MR_Box) (Indent_7));
        MR_hl_field(MR_mktag(0), Var_23, 5) = ((MR_Box) (Map_11));
      }
      mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, ScalarChunks_14, ((MR_Box) ((MR_Integer) 0)), &conv7_NumChunks_15, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_25_25);
      NumChunks_15 = ((MR_Integer) (conv7_NumChunks_15));
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "static {\n");
      Var_33 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
      {
        Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_4[0]));
        MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_5_p_0_3));
        MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Var_33));
      }
      Var_31 = (MR_Integer) ((MR_Unsigned) NumChunks_15 - (MR_Unsigned) (MR_Integer) 1);
      mercury__int__fold_up_5_p_2((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, (MR_Integer) 0, Var_31, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_32_32);
      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
      mercury__io__write_string_3_p_0((MR_String) "}\n");
    }
    else
    {
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_global.output_scalar_common_data_for_java\'/5", (MR_String) "digraph.tsort failed");
        return;
      }
    }
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ml_backend__mlds_to_java_global__output_call_init_global_var_method_for_java_4_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) (wrapper_arg_1)));
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv0_HeadVar__5_5;

    ml_backend__mlds_to_java_global__output_init_global_var_method_for_java_7_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0(
  MR_Word Info_6,
  MR_Integer Indent_7,
  MR_Word GlobalVarDefns_8)
{
  {
    MR_Word DefnChunks_10;
    MR_Integer NumChunks_11;
    MR_Word Var_15;
    MR_Word Var_21;
    MR_Integer Var_23;
    MR_Integer Var_25;
    MR_Box conv2_NumChunks_11;
    MR_Box conv1_STATE_VARIABLE_IO_17_17;
    MR_Box conv3_STATE_VARIABLE_IO_24_24;

    mercury__list__chunk_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), GlobalVarDefns_8, (MR_Integer) 1000, &DefnChunks_10);
    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_3[0]));
      MR_hl_field(MR_mktag(0), Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0_1));
      MR_hl_field(MR_mktag(0), Var_15, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_15, 3) = ((MR_Box) (Info_6));
      MR_hl_field(MR_mktag(0), Var_15, 4) = ((MR_Box) (Indent_7));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, DefnChunks_10, ((MR_Box) ((MR_Integer) 0)), &conv2_NumChunks_11, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_17_17);
    NumChunks_11 = ((MR_Integer) (conv2_NumChunks_11));
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "static {\n");
    Var_25 = (MR_Integer) ((MR_Unsigned) Indent_7 + (MR_Unsigned) (MR_Integer) 1);
    {
      Var_21 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_4[0]));
      MR_hl_field(MR_mktag(0), Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_5_p_0_2));
      MR_hl_field(MR_mktag(0), Var_21, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_21, 3) = ((MR_Box) (Var_25));
    }
    Var_23 = (MR_Integer) ((MR_Unsigned) NumChunks_11 - (MR_Unsigned) (MR_Integer) 1);
    mercury__int__fold_up_5_p_2((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, (MR_Integer) 0, Var_23, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_24_24);
    ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_7);
    mercury__io__write_string_3_p_0((MR_String) "}\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_defn_for_java_6_p_0(
  MR_Word Info_7,
  MR_Integer Indent_8,
  MR_Word OutputAux_9,
  MR_Word GlobalVarDefn_10)
{
  {
    MR_Word GlobalVarName_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 0))));
    MR_Word Context_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 1))));
    MR_Word Flags_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 2))));
    MR_Word Type_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 3))));
    MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_10, (MR_Integer) 4))));
    MR_Word Var_20 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_7, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
    MR_Word Access_41;
    MR_Word Constness_42;

    ml_backend__mlds_to_java_util__indent_line_after_context_6_p_0(Var_20, (MR_Integer) 2, Context_13, Indent_8);
    Access_41 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    Constness_42 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_14, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (Access_41) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__io__write_string_3_p_0((MR_String) "private ");
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "public ");
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "static ");
    switch (Constness_42) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "final ");
        }
        break;
      case (MR_Integer) 0:
        {
        }
        break;
    }
    ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_7, Type_15);
    mercury__io__write_char_3_p_0((MR_Char) 32);
    ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(GlobalVarName_12);
    ml_backend__mlds_to_java_data__output_initializer_for_java_6_p_0(Info_7, OutputAux_9, Type_15, Initializer_16);
    mercury__io__write_string_3_p_0((MR_String) ";\n");
  }
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_decls_for_java_5_p_0(
  MR_Word Info_1,
  MR_Integer Indent_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word Name_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 0))));
      MR_Word Flags_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 2))));
      MR_Word Type_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), GlobalVarDefn_13, (MR_Integer) 3))));
      MR_Word Access_34;
      MR_Word Constness_35;
      MR_Word next_value_of_HeadVar__3_3;

      ml_backend__mlds_to_target_util__output_n_indents_3_p_0(Indent_2);
      Access_34 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      Constness_35 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Flags_18, (MR_Integer) 0))) & (MR_Integer) 1);
      switch (Access_34) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "private ");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "public ");
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "static ");
      switch (Constness_35) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "final ");
          }
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      ml_backend__mlds_to_java_type__output_type_for_java_4_p_0(Info_1, Type_19);
      mercury__io__write_char_3_p_0((MR_Char) 32);
      ml_backend__mlds_to_java_name__output_global_var_name_for_java_3_p_0(Name_16);
      mercury__io__write_string_3_p_0((MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = GlobalVarDefns_14;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

void mercury__ml_backend__mlds_to_java_global__init(void)
{
}

void mercury__ml_backend__mlds_to_java_global__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_java_global__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_java_global__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_java_global.
