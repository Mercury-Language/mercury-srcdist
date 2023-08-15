/*
** Automatically generated from `mlds_to_java_global.m'
** by the Mercury compiler,
** version rotd-2023-08-15
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
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_java_class.mih"
#include "ml_backend.mlds_to_java_data.mih"
#include "ml_backend.mlds_to_java_name.mih"
#include "ml_backend.mlds_to_java_type.mih"
#include "ml_backend.mlds_to_java_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_array_assignments_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word GlobalVarName_13,
  MR_Word ElementInit_14,
  MR_Integer Index_15,
  MR_Integer * HeadVar__7_7);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefns_10);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_cell_group_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_scalar_init_method_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Integer ChunkNum_8);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalar_12);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word Map_13,
  MR_Word Scalars_14,
  MR_Integer ChunkNum_15,
  MR_Integer * HeadVar__7_7);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word TypeNum_15,
  MR_Word CellGroup_16,
  MR_Word STATE_VARIABLE_Graph_0_32,
  MR_Word * STATE_VARIABLE_Graph_33,
  MR_Word STATE_VARIABLE_Map_0_34,
  MR_Word * STATE_VARIABLE_Map_35);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_init_global_var_method_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Integer I_8);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_method_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Defns_12,
  MR_Integer Chunk_13,
  MR_Integer * HeadVar__6_6);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_statements_for_java_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_common_data_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_1(
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
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);


static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_1[3][2];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_2[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_4[1][11];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_5[1][8];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_6[1][14];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_7[2][12];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_8[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_9[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_10[1][13];




static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_4[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_5[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_6[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_7[2][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_8[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_9[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_java_util__ml_backend__mlds_to_java_util__type_ctor_info_java_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_java_global_scalar_common_10[1][13] = {
  /* row   0 */
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



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_java_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0) }
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
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0) }
};

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_array_assignments_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word GlobalVarName_13,
  MR_Word ElementInit_14,
  MR_Integer Index_15,
  MR_Integer * HeadVar__7_7)
{
  MR_String IndentStr_17;
  MR_String GlobalVarNameStr_18;
  MR_Integer Var_32;
  MR_String Var_42;

  *HeadVar__7_7 = (MR_Integer) ((MR_Unsigned) Index_15 + (MR_Unsigned) 1);
  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_12);
  GlobalVarNameStr_18 = ml_backend__mlds_to_java_name__global_var_name_to_string_for_java_1_f_0(GlobalVarName_13);
  mercury__io__write_string_4_p_0(Stream_11, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_11, GlobalVarNameStr_18);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), Index_15, &Var_42);
  mercury__io__write_string_4_p_0(Stream_11, Var_42);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "] =\n");
  Var_32 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_10, Stream_11, (MR_Integer) 1, Var_32, ElementInit_14, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__7_7;

  ml_backend__mlds_to_java_global__output_rtti_array_assignments_for_java_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefn_10)
{
  MR_Word GlobalVarName_12 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_10, (MR_Integer) 0))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_10, (MR_Integer) 4))));

  switch (MR_tag((MR_Word) Initializer_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_global.output_rtti_defn_assignments_for_java\'/6", (MR_String) "init_obj");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_19 = ((MR_Word) ((MR_hl_field(2, Initializer_16, (MR_Integer) 0))));
        MR_Word FieldInits_20 = ((MR_Word) ((MR_hl_field(2, Initializer_16, (MR_Integer) 1))));
        MR_Word ArrayDims_22;
        MR_String _BaseType_21;

        ml_backend__mlds_to_java_type__type_to_string_and_dims_for_java_4_p_0(Info_7, StructType_19, &_BaseType_21, &ArrayDims_22);
        if ((ArrayDims_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String IndentStr_23;
          MR_String GlobalVarNameStr_24;
          MR_Integer Var_40;

          IndentStr_23 = libs__indent__indent2_string_1_f_0(Indent_9);
          GlobalVarNameStr_24 = ml_backend__mlds_to_java_name__global_var_name_to_string_for_java_1_f_0(GlobalVarName_12);
          mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
          mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_24);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".init(\n");
          Var_40 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
          ml_backend__mlds_to_java_data__output_nonempty_initializer_body_list_for_java_7_p_0(Info_7, Stream_8, Var_40, FieldInits_20, (MR_String) "");
          mercury__io__write_string_4_p_0(Stream_8, IndentStr_23);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_global.output_rtti_defn_assignments_for_java\'/6", (MR_String) "is_array");
            return;
          }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_27 = ((MR_Word) ((MR_hl_field(3, Initializer_16, (MR_Integer) 0))));
        MR_Word Var_51;
        MR_Box conv2__Index_28;
        MR_Box conv1_STATE_VARIABLE_IO_30;

        {
          Var_51 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_51, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_7[1]));
          MR_hl_field(0, Var_51, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_6_p_0_1));
          MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_51, 3) = ((MR_Box) (Info_7));
          MR_hl_field(0, Var_51, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_51, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(0, Var_51, 6) = ((MR_Box) (GlobalVarName_12));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_51, ElementInits_27, ((MR_Box) ((MR_Integer) 0)), &conv2__Index_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_rtti_defn_assignments_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefns_10)
{
  MR_String IndentStr_12;
  MR_Word Var_20;
  MR_Box conv0_STATE_VARIABLE_IO_14;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "//\n");
  {
    Var_20 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_20, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_9[1]));
    MR_hl_field(0, Var_20, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_6_p_0_1));
    MR_hl_field(0, Var_20, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_20, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_20, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_20, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_20, GlobalVarDefns_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_14);
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_cell_group_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12)
{
  MR_Integer TypeRawNum_14 = (MR_Integer) (TypeNum_11);
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 0))));
  MR_Word StructDefn_16 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 1))));
  MR_Word RowInits_19 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 4))));
  MR_String IndentStr_20;
  MR_String Indent1Str_21;
  MR_String TypeStr_22;
  MR_Integer Var_26;
  MR_Integer Var_42;
  MR_Word Var_43;
  MR_String Var_60;

  ml_backend__mlds_to_java_class__output_struct_defn_for_java_6_p_0(Info_8, Stream_9, Indent_10, StructDefn_16);
  IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_10);
  Var_26 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  Indent1Str_21 = libs__indent__indent2_string_1_f_0(Var_26);
  TypeStr_22 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_8, Type_15);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private static final ");
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_22);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " MR_vector_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), TypeRawNum_14, &Var_60);
  mercury__io__write_string_4_p_0(Stream_9, Var_60);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[] =\n");
  mercury__io__write_string_4_p_0(Stream_9, Indent1Str_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
  Var_42 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 2);
  Var_43 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInits_19);
  ml_backend__mlds_to_java_data__output_nonempty_initializer_body_list_for_java_7_p_0(Info_8, Stream_9, Var_42, Var_43, (MR_String) "");
  mercury__io__write_string_4_p_0(Stream_9, Indent1Str_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_scalar_init_method_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Integer ChunkNum_8)
{
  MR_String IndentStr_10;
  MR_String Var_24;

  IndentStr_10 = libs__indent__indent2_string_1_f_0(Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "MR_init_scalars_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), ChunkNum_8, &Var_24);
  mercury__io__write_string_4_p_0(Stream_6, Var_24);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "();\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalar_12)
{
  MR_String IndentStr_14;
  MR_Word Initializer_15;
  MR_Word Type_17;
  MR_Word TypeNum_18;
  MR_Integer RowNum_19;
  MR_Integer TypeRawNum_20;
  MR_Integer Var_33;
  MR_Word Var_34;
  MR_String Var_44;
  MR_String Var_54;
  MR_Box conv0_Initializer_15;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Map_11, ((MR_Box) (Scalar_12)), &conv0_Initializer_15);
  Initializer_15 = ((MR_Word) (conv0_Initializer_15));
  Type_17 = ((MR_Word) ((MR_hl_field(0, Scalar_12, (MR_Integer) 1))));
  TypeNum_18 = ((MR_Word) ((MR_hl_field(0, Scalar_12, (MR_Integer) 2))));
  RowNum_19 = ((MR_Integer) ((MR_hl_field(0, Scalar_12, (MR_Integer) 3))));
  TypeRawNum_20 = (MR_Integer) (TypeNum_18);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), TypeRawNum_20, &Var_44);
  mercury__io__write_string_4_p_0(Stream_9, Var_44);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), RowNum_19, &Var_54);
  mercury__io__write_string_4_p_0(Stream_9, Var_54);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] =\n");
  Var_33 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Type_17));
  }
  ml_backend__mlds_to_java_data__output_initializer_body_for_java_9_p_0(Info_8, Stream_9, (MR_Integer) 1, Var_33, Initializer_15, Var_34, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_scalar_init_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word Map_13,
  MR_Word Scalars_14,
  MR_Integer ChunkNum_15,
  MR_Integer * HeadVar__7_7)
{
  MR_String IndentStr_17;
  MR_Word Var_28;
  MR_Integer Var_30;
  MR_String Var_46;
  MR_Box conv0_STATE_VARIABLE_IO_29_29;

  *HeadVar__7_7 = (MR_Integer) ((MR_Unsigned) ChunkNum_15 + (MR_Unsigned) 1);
  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_12);
  mercury__io__write_string_4_p_0(Stream_11, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "private static void MR_init_scalars_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), ChunkNum_15, &Var_46);
  mercury__io__write_string_4_p_0(Stream_11, Var_46);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "() {\n");
  Var_30 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
  {
    Var_28 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_28, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_8[1]));
    MR_hl_field(0, Var_28, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_9_p_0_1));
    MR_hl_field(0, Var_28, 2) = ((MR_Box) ((MR_Integer) 4));
    MR_hl_field(0, Var_28, 3) = ((MR_Box) (Info_10));
    MR_hl_field(0, Var_28, 4) = ((MR_Box) (Stream_11));
    MR_hl_field(0, Var_28, 5) = ((MR_Box) (Var_30));
    MR_hl_field(0, Var_28, 6) = ((MR_Box) (Map_13));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_28, Scalars_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_29_29);
  mercury__io__write_string_4_p_0(Stream_11, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7)
{
  MR_Box closure = closure_arg;
  MR_Integer conv2_HeadVar__6_6;
  MR_Word conv1_HeadVar__8_8;
  MR_Word conv0_HeadVar__10_10;

  ml_backend__mlds_to_target_util__add_scalar_inits_10_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv2_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv1_HeadVar__8_8, ((MR_Word) (wrapper_arg_6)), &conv0_HeadVar__10_10);
  *wrapper_arg_3 = ((MR_Box) (conv2_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv1_HeadVar__8_8));
  *wrapper_arg_7 = ((MR_Box) (conv0_HeadVar__10_10));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_defns_for_java_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word TypeNum_15,
  MR_Word CellGroup_16,
  MR_Word STATE_VARIABLE_Graph_0_32,
  MR_Word * STATE_VARIABLE_Graph_33,
  MR_Word STATE_VARIABLE_Map_0_34,
  MR_Word * STATE_VARIABLE_Map_35)
{
  MR_Integer TypeRawNum_20 = (MR_Integer) (TypeNum_15);
  MR_Word Type_21 = ((MR_Word) ((MR_hl_field(0, CellGroup_16, (MR_Integer) 0))));
  MR_Word RowInitsCord_25 = ((MR_Word) ((MR_hl_field(0, CellGroup_16, (MR_Integer) 4))));
  MR_Word ArrayType_26;
  MR_Word RowInits_27;
  MR_String IndentStr_28;
  MR_String TypeStr_29;
  MR_Word MLDS_ModuleName_30;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_Word Var_51;
  MR_String Var_80;
  MR_Box conv5_Var_31;
  MR_Box conv4_STATE_VARIABLE_Graph_33;
  MR_Box conv3_STATE_VARIABLE_Map_35;

  {
    ArrayType_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ArrayType_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, ArrayType_26, 1) = ((MR_Box) (Type_21));
  }
  RowInits_27 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitsCord_25);
  IndentStr_28 = libs__indent__indent2_string_1_f_0(Indent_14);
  TypeStr_29 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_12, Type_21);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "private static final ");
  mercury__io__write_string_4_p_0(Stream_13, TypeStr_29);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "[] MR_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), TypeRawNum_20, &Var_80);
  mercury__io__write_string_4_p_0(Stream_13, Var_80);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) (RowInits_27));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (ArrayType_26));
  }
  ml_backend__mlds_to_java_data__output_initializer_alloc_only_for_java_7_p_0(Info_12, Stream_13, Var_47, Var_48, (MR_String) ";");
  MLDS_ModuleName_30 = ((MR_Word) ((MR_hl_field(0, Info_12, (MR_Integer) 2))));
  {
    Var_51 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_51, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_10[0]));
    MR_hl_field(0, Var_51, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_defns_for_java_11_p_0_1));
    MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_51, 3) = ((MR_Box) (MLDS_ModuleName_30));
    MR_hl_field(0, Var_51, 4) = ((MR_Box) (Type_21));
    MR_hl_field(0, Var_51, 5) = ((MR_Box) (TypeNum_15));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_2[0]), Var_51, RowInits_27, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_31, ((MR_Box) (STATE_VARIABLE_Graph_0_32)), &conv4_STATE_VARIABLE_Graph_33, ((MR_Box) (STATE_VARIABLE_Map_0_34)), &conv3_STATE_VARIABLE_Map_35);
  *STATE_VARIABLE_Graph_33 = ((MR_Word) (conv4_STATE_VARIABLE_Graph_33));
  *STATE_VARIABLE_Map_35 = ((MR_Word) (conv3_STATE_VARIABLE_Map_35));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_call_init_global_var_method_for_java_5_p_0(
  MR_Word Stream_6,
  MR_Integer Indent_7,
  MR_Integer I_8)
{
  MR_String IndentStr_10;
  MR_String Var_24;

  IndentStr_10 = libs__indent__indent2_string_1_f_0(Indent_7);
  mercury__io__write_string_4_p_0(Stream_6, IndentStr_10);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "MR_init_data_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), I_8, &Var_24);
  mercury__io__write_string_4_p_0(Stream_6, Var_24);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "();\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_method_for_java_8_p_0(
  MR_Word Info_9,
  MR_Word Stream_10,
  MR_Integer Indent_11,
  MR_Word Defns_12,
  MR_Integer Chunk_13,
  MR_Integer * HeadVar__6_6)
{
  MR_String IndentStr_15;
  MR_Integer Var_26;
  MR_String Var_38;

  *HeadVar__6_6 = (MR_Integer) ((MR_Unsigned) Chunk_13 + (MR_Unsigned) 1);
  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_11);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "private static void MR_init_data_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_3[0]), Chunk_13, &Var_38);
  mercury__io__write_string_4_p_0(Stream_10, Var_38);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "() {\n");
  Var_26 = (MR_Integer) ((MR_Unsigned) Indent_11 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_global__output_init_global_var_statements_for_java_6_p_0(Info_9, Stream_10, Var_26, Defns_12);
  mercury__io__write_string_4_p_0(Stream_10, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_init_global_var_statements_for_java_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word GlobalVarName_19 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 0))));
      MR_Word Type_22 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 3))));
      MR_Word Initializer_23 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 4))));
      MR_String IndentStr_25;
      MR_String GlobalVarNameStr_26;
      MR_Integer Var_37;
      MR_Word next_value_of_HeadVar__4_4;

      IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_3);
      GlobalVarNameStr_26 = ml_backend__mlds_to_java_name__global_var_name_to_string_for_java_1_f_0(GlobalVarName_19);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_25);
      mercury__io__write_string_4_p_0(Stream_2, GlobalVarNameStr_26);
      Var_37 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
      ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(Info_1, Stream_2, (MR_Word) ((MR_Unsigned) 0U), Var_37, Type_22, Initializer_23, (MR_String) ";");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = GlobalVarDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_rtti_defns_assignments_for_java_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefns_10)
{
  if (!((GlobalVarDefns_10 == (MR_Word) ((MR_Unsigned) 0U))))
  {
    MR_Word OrderedDefns_14;
    MR_String IndentStr_15;
    MR_Word Var_23;
    MR_Integer Var_25;
    MR_Box conv0_STATE_VARIABLE_IO_24_24;

    OrderedDefns_14 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(GlobalVarDefns_10);
    IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static {\n");
    Var_25 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_23 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_23, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_9[0]));
      MR_hl_field(0, Var_23, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_rtti_assignments_for_java_6_p_0_1));
      MR_hl_field(0, Var_23, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_23, 3) = ((MR_Box) (Info_7));
      MR_hl_field(0, Var_23, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(0, Var_23, 5) = ((MR_Box) (Var_25));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_23, OrderedDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_24_24);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
  }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_common_data_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_vector_cell_group_for_java_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_vector_common_data_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word VectorCellGroupMap_10)
{
  MR_Word Var_14;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_8[0]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_vector_common_data_for_java_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, VectorCellGroupMap_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_call_scalar_init_method_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv5_HeadVar__7_7;

  ml_backend__mlds_to_java_global__output_scalar_init_method_for_java_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv5_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv5_HeadVar__7_7));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_1(
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
  MR_Box closure = closure_arg;
  MR_Word conv1_STATE_VARIABLE_Graph_33;
  MR_Word conv0_STATE_VARIABLE_Map_35;

  ml_backend__mlds_to_java_global__output_scalar_defns_for_java_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Graph_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Map_35);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Graph_33));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Map_35));
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ScalarCellGroupMap_10)
{
  MR_bool succeeded;
  MR_Word Graph_12;
  MR_Word Map_13;
  MR_Word Var_21;
  MR_Word Var_22;
  MR_Word Var_23;
  MR_Box conv4_Graph_12;
  MR_Box conv3_Map_13;
  MR_Box conv2_STATE_VARIABLE_IO_24_24;
  MR_Word SortedScalars0_14;

  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_6[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (Indent_9));
  }
  Var_22 = mercury__digraph__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0));
  Var_23 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  mercury__map__foldl3_8_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[1]), (MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, ScalarCellGroupMap_10, ((MR_Box) (Var_22)), &conv4_Graph_12, ((MR_Box) (Var_23)), &conv3_Map_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_24_24);
  Graph_12 = ((MR_Word) (conv4_Graph_12));
  Map_13 = ((MR_Word) (conv3_Map_13));
  succeeded = mercury__digraph__return_vertices_in_from_to_order_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), Graph_12, &SortedScalars0_14);
  if (succeeded)
  {
    MR_Word SortedScalars_15;
    MR_Word ScalarChunks_16;
    MR_Integer NumChunks_17;
    MR_String IndentStr_18;
    MR_Word Var_26;
    MR_Word Var_34;
    MR_Integer Var_36;
    MR_Integer Var_38;
    MR_Box conv7_NumChunks_17;
    MR_Box conv6_STATE_VARIABLE_IO_28_28;
    MR_Box conv8_STATE_VARIABLE_IO_37_37;

    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), SortedScalars0_14, &SortedScalars_15);
    mercury__list__chunk_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), SortedScalars_15, (MR_Integer) 1000, &ScalarChunks_16);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_7[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_2));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (Info_7));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(0, Var_26, 5) = ((MR_Box) (Indent_9));
      MR_hl_field(0, Var_26, 6) = ((MR_Box) (Map_13));
    }
    mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[2]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, ScalarChunks_16, ((MR_Box) ((MR_Integer) 0)), &conv7_NumChunks_17, ((MR_Box) ((MR_Integer) 0)), &conv6_STATE_VARIABLE_IO_28_28);
    NumChunks_17 = ((MR_Integer) (conv7_NumChunks_17));
    IndentStr_18 = libs__indent__indent2_string_1_f_0(Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static {\n");
    Var_38 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_34 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_34, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_5[0]));
      MR_hl_field(0, Var_34, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_scalar_common_data_for_java_6_p_0_3));
      MR_hl_field(0, Var_34, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_34, 3) = ((MR_Box) (Stream_8));
      MR_hl_field(0, Var_34, 4) = ((MR_Box) (Var_38));
    }
    Var_36 = (MR_Integer) ((MR_Unsigned) NumChunks_17 - (MR_Unsigned) 1);
    mercury__int__fold_up_5_p_2((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_34, (MR_Integer) 0, Var_36, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_37_37);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_18);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_java_global.output_scalar_common_data_for_java\'/6", (MR_String) "digraph.tsort failed");
      return;
    }
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_java_global__output_call_init_global_var_method_for_java_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__6_6;

  ml_backend__mlds_to_java_global__output_init_global_var_method_for_java_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__6_6));
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefns_10)
{
  MR_Word DefnChunks_12;
  MR_Integer NumChunks_13;
  MR_String IndentStr_14;
  MR_Word Var_18;
  MR_Word Var_26;
  MR_Integer Var_28;
  MR_Integer Var_30;
  MR_Box conv2_NumChunks_13;
  MR_Box conv1_STATE_VARIABLE_IO_20_20;
  MR_Box conv3_STATE_VARIABLE_IO_29_29;

  mercury__list__chunk_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), GlobalVarDefns_10, (MR_Integer) 1000, &DefnChunks_12);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_4[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds_to_java_global_scalar_common_1[0]), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, DefnChunks_12, ((MR_Box) ((MR_Integer) 0)), &conv2_NumChunks_13, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
  NumChunks_13 = ((MR_Integer) (conv2_NumChunks_13));
  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static {\n");
  Var_30 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_26 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_26, 0) = ((MR_Box) (&ml_backend__mlds_to_java_global_scalar_common_5[0]));
    MR_hl_field(0, Var_26, 1) = ((MR_Box) (ml_backend__mlds_to_java_global__output_global_var_assignments_for_java_6_p_0_2));
    MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 2));
    MR_hl_field(0, Var_26, 3) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_26, 4) = ((MR_Box) (Var_30));
  }
  Var_28 = (MR_Integer) ((MR_Unsigned) NumChunks_13 - (MR_Unsigned) 1);
  mercury__int__fold_up_5_p_2((MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_26, (MR_Integer) 0, Var_28, ((MR_Box) ((MR_Integer) 0)), &conv3_STATE_VARIABLE_IO_29_29);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_defn_for_java_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word OutputAux_11,
  MR_Word GlobalVarDefn_12)
{
  MR_Word GlobalVarName_14 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 0))));
  MR_Word Context_15 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 1))));
  MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 2))));
  MR_Word Type_17 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 3))));
  MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 4))));
  MR_Word Var_22 = ((((MR_Unsigned) ((MR_hl_field(0, Info_8, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
  MR_Integer Var_27;
  MR_Word Access_40;
  MR_Word Constness_41;
  MR_String TypeStr_48;
  MR_String GlobalVarNameStr_49;

  ml_backend__mlds_to_java_util__indent_line_after_context_7_p_0(Stream_9, Var_22, (MR_Integer) 2, Context_15, Indent_10);
  Access_40 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_41 = ((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Access_40) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public ");
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static ");
  switch (Constness_41) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "final ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  TypeStr_48 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_8, Type_17);
  GlobalVarNameStr_49 = ml_backend__mlds_to_java_name__global_var_name_to_string_for_java_1_f_0(GlobalVarName_14);
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_48);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, GlobalVarNameStr_49);
  Var_27 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_java_data__output_initializer_for_java_9_p_0(Info_8, Stream_9, OutputAux_11, Var_27, Type_17, Initializer_18, (MR_String) ";");
}

void MR_CALL 
ml_backend__mlds_to_java_global__output_global_var_decls_for_java_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 0))));
      MR_Word GlobalVarDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, (MR_Integer) 1))));
      MR_Word Name_19 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 0))));
      MR_Word Flags_21 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 2))));
      MR_Word Type_22 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 3))));
      MR_Word Access_32;
      MR_Word Constness_33;
      MR_String TypeStr_40;
      MR_String GlobalVarNameStr_41;
      MR_Word next_value_of_HeadVar__4_4;

      libs__indent__write_indent2_4_p_0(Stream_2, Indent_3);
      Access_32 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_21, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      Constness_33 = ((MR_Unsigned) ((MR_hl_field(0, Flags_21, (MR_Integer) 0))) & (MR_Integer) 1);
      switch (Access_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "private ");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "public ");
          break;
      }
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "static ");
      switch (Constness_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "final ");
          break;
        case (MR_Integer) 0:
          {
          }
          break;
      }
      TypeStr_40 = ml_backend__mlds_to_java_type__type_to_string_for_java_2_f_0(Info_1, Type_22);
      GlobalVarNameStr_41 = ml_backend__mlds_to_java_name__global_var_name_to_string_for_java_1_f_0(Name_19);
      mercury__io__write_string_4_p_0(Stream_2, TypeStr_40);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_2, GlobalVarNameStr_41);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) ";\n");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = GlobalVarDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
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
