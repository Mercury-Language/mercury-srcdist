/*
** Automatically generated from `mlds_to_cs_global.m'
** by the Mercury compiler,
** version rotd-2023-01-31
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


// :- module ml_backend.mlds_to_cs_global.
// :- implementation.

/*
INIT mercury__ml_backend__mlds_to_cs_global__init
ENDINIT
*/

#include "ml_backend.mlds_to_cs_global.mih"


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
#include "hlds.hlds_rtti.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.globals.mih"
#include "libs.timestamp.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_cs_class.mih"
#include "ml_backend.mlds_to_cs_data.mih"
#include "ml_backend.mlds_to_cs_name.mih"
#include "ml_backend.mlds_to_cs_type.mih"
#include "ml_backend.mlds_to_cs_util.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "parse_tree.file_names.mih"
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




static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_array_assignments_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word GlobalVarName_13,
  MR_Word ElementInit_14,
  MR_Integer Index_15,
  MR_Integer * HeadVar__7_7);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defns_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defns_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Defns_10);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_decl_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalar_12);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5,
  MR_Box wrapper_arg_6,
  MR_Box * wrapper_arg_7);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word TypeNum_15,
  MR_Word CellGroup_16,
  MR_Word STATE_VARIABLE_Graph_0_30,
  MR_Word * STATE_VARIABLE_Graph_31,
  MR_Word STATE_VARIABLE_Map_0_32,
  MR_Word * STATE_VARIABLE_Map_33);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_1(
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
ml_backend__mlds_to_cs_global__output_init_global_var_statements_for_csharp_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Integer Indent_3,
  MR_Word HeadVar__4_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_1[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_2[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_4[1][14];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_5[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_6[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_7[1][13];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_8[1][12];




static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__digraph__digraph__type_ctor_info_digraph_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_3[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_5[2][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_6[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_7[1][13] = {
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
    ((MR_Box) (&ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_8[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_name_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)
  }
};

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_array_assignments_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Integer Indent_12,
  MR_Word GlobalVarName_13,
  MR_Word ElementInit_14,
  MR_Integer Index_15,
  MR_Integer * HeadVar__7_7)
{
  MR_Integer Var_28;

  *HeadVar__7_7 = (MR_Integer) ((MR_Unsigned) Index_15 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_11, Indent_12);
  ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(Stream_11, GlobalVarName_13);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "[");
  mercury__io__write_int_4_p_0(Stream_11, Index_15);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "] =\n");
  Var_28 = (MR_Integer) ((MR_Unsigned) Indent_12 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_10, Stream_11, (MR_Integer) 1, Var_28, ElementInit_14, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Integer conv0_HeadVar__7_7;

  ml_backend__mlds_to_cs_global__output_rtti_array_assignments_for_csharp_9_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0(
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
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_global.output_rtti_defn_assignments_for_csharp\'/6", (MR_String) "init_obj");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word StructType_19 = ((MR_Word) ((MR_hl_field(2, Initializer_16, (MR_Integer) 0))));
        MR_Word FieldInits_20 = ((MR_Word) ((MR_hl_field(2, Initializer_16, (MR_Integer) 1))));
        MR_Word IsArray_21;

        IsArray_21 = ml_backend__mlds_to_cs_type__type_is_array_for_csharp_1_f_0(StructType_19);
        switch (IsArray_21) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_global.output_rtti_defn_assignments_for_csharp\'/6", (MR_String) "is_array");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer Var_32;

              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
              ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(Stream_8, GlobalVarName_12);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".init(\n");
              Var_32 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
              ml_backend__mlds_to_cs_data__output_nonempty_initializer_body_list_for_csharp_7_p_0(Info_7, Stream_8, Var_32, FieldInits_20, (MR_String) "");
              ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_22 = ((MR_Word) ((MR_hl_field(3, Initializer_16, (MR_Integer) 0))));
        MR_Word Var_41;
        MR_Box conv2__Index_23;
        MR_Box conv1_STATE_VARIABLE_IO_25;

        {
          Var_41 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_41, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_8[0]));
          MR_hl_field(0, Var_41, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0_1));
          MR_hl_field(0, Var_41, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_41, 3) = ((MR_Box) (Info_7));
          MR_hl_field(0, Var_41, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_41, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(0, Var_41, 6) = ((MR_Box) (GlobalVarName_12));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_41, ElementInits_22, ((MR_Box) ((MR_Integer) 0)), &conv2__Index_23, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_25);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defns_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defns_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Defns_10)
{
  MR_Word Var_17;
  MR_Box conv0_STATE_VARIABLE_IO_13;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "//\n");
  {
    Var_17 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_17, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_6[1]));
    MR_hl_field(0, Var_17, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_rtti_defns_assignments_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_17, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_17, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_17, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_17, 5) = ((MR_Box) (Indent_9));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_17, Defns_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_13);
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12)
{
  MR_Integer TypeRawNum_14 = (MR_Integer) (TypeNum_11);
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 0))));
  MR_Word RowInits_19 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 4))));
  MR_Integer Var_31;
  MR_Integer Var_36;
  MR_Word Var_37;
  MR_Integer Var_41;
  MR_String Var_49;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_vector_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_14, &Var_49);
  mercury__io__write_string_4_p_0(Stream_9, Var_49);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = new ");
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_8, Type_15, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[]\n");
  Var_31 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_31);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
  Var_36 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 2);
  Var_37 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInits_19);
  ml_backend__mlds_to_cs_data__output_nonempty_initializer_body_list_for_csharp_7_p_0(Info_8, Stream_9, Var_36, Var_37, (MR_String) "");
  Var_41 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Var_41);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_decl_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12)
{
  MR_Integer TypeRawNum_14 = (MR_Integer) (TypeNum_11);
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 0))));
  MR_Word ClassDefn_16 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, (MR_Integer) 1))));
  MR_String Var_35;

  ml_backend__mlds_to_cs_class__output_class_defn_for_csharp_6_p_0(Info_8, Stream_9, Indent_10, ClassDefn_16);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private static /* readonly */ ");
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_8, Type_15, Stream_9);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[] MR_vector_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_14, &Var_35);
  mercury__io__write_string_4_p_0(Stream_9, Var_35);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word Map_11,
  MR_Word Scalar_12)
{
  MR_Word Initializer_14;
  MR_Word Type_16;
  MR_Word TypeNum_17;
  MR_Integer RowNum_18;
  MR_Integer TypeRawNum_19;
  MR_Integer Var_31;
  MR_Word Var_32;
  MR_String Var_41;
  MR_String Var_51;
  MR_Box conv0_Initializer_14;

  mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Map_11, ((MR_Box) (Scalar_12)), &conv0_Initializer_14);
  Initializer_14 = ((MR_Word) (conv0_Initializer_14));
  Type_16 = ((MR_Word) ((MR_hl_field(0, Scalar_12, (MR_Integer) 1))));
  TypeNum_17 = ((MR_Word) ((MR_hl_field(0, Scalar_12, (MR_Integer) 2))));
  RowNum_18 = ((MR_Integer) ((MR_hl_field(0, Scalar_12, (MR_Integer) 3))));
  TypeRawNum_19 = (MR_Integer) (TypeNum_17);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_19, &Var_41);
  mercury__io__write_string_4_p_0(Stream_9, Var_41);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), RowNum_18, &Var_51);
  mercury__io__write_string_4_p_0(Stream_9, Var_51);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] =\n");
  Var_31 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  {
    Var_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_32, 0) = ((MR_Box) (Type_16));
  }
  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_8, Stream_9, (MR_Integer) 1, Var_31, Initializer_14, Var_32, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0_1(
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
ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Integer Indent_14,
  MR_Word TypeNum_15,
  MR_Word CellGroup_16,
  MR_Word STATE_VARIABLE_Graph_0_30,
  MR_Word * STATE_VARIABLE_Graph_31,
  MR_Word STATE_VARIABLE_Map_0_32,
  MR_Word * STATE_VARIABLE_Map_33)
{
  MR_Integer TypeRawNum_20 = (MR_Integer) (TypeNum_15);
  MR_Word Type_21 = ((MR_Word) ((MR_hl_field(0, CellGroup_16, (MR_Integer) 0))));
  MR_Word RowInitsCord_25 = ((MR_Word) ((MR_hl_field(0, CellGroup_16, (MR_Integer) 4))));
  MR_Word ArrayType_26;
  MR_Word RowInits_27;
  MR_Word MLDS_ModuleName_28;
  MR_Word Var_45;
  MR_Word Var_46;
  MR_Word Var_49;
  MR_String Var_74;
  MR_Box conv5_Var_29;
  MR_Box conv4_STATE_VARIABLE_Graph_31;
  MR_Box conv3_STATE_VARIABLE_Map_33;

  {
    ArrayType_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ArrayType_26, 0) = ((MR_Box) ((MR_Unsigned) 5U));
    MR_hl_field(3, ArrayType_26, 1) = ((MR_Box) (Type_21));
  }
  RowInits_27 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitsCord_25);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_13, Indent_14);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "private static readonly ");
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_12, Type_21, Stream_13);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "[] MR_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_20, &Var_74);
  mercury__io__write_string_4_p_0(Stream_13, Var_74);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
  {
    Var_45 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_45, 0) = ((MR_Box) (RowInits_27));
  }
  {
    Var_46 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_46, 0) = ((MR_Box) (ArrayType_26));
  }
  ml_backend__mlds_to_cs_data__output_initializer_alloc_only_for_csharp_7_p_0(Info_12, Stream_13, Var_45, Var_46, (MR_String) ";");
  MLDS_ModuleName_28 = ((MR_Word) ((MR_hl_field(0, Info_12, (MR_Integer) 2))));
  {
    Var_49 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_49, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_7[0]));
    MR_hl_field(0, Var_49, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0_1));
    MR_hl_field(0, Var_49, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_49, 3) = ((MR_Box) (MLDS_ModuleName_28));
    MR_hl_field(0, Var_49, 4) = ((MR_Box) (Type_21));
    MR_hl_field(0, Var_49, 5) = ((MR_Box) (TypeNum_15));
  }
  mercury__list__foldl3_8_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_2[0]), Var_49, RowInits_27, ((MR_Box) ((MR_Integer) 0)), &conv5_Var_29, ((MR_Box) (STATE_VARIABLE_Graph_0_30)), &conv4_STATE_VARIABLE_Graph_31, ((MR_Box) (STATE_VARIABLE_Map_0_32)), &conv3_STATE_VARIABLE_Map_33);
  *STATE_VARIABLE_Graph_31 = ((MR_Word) (conv4_STATE_VARIABLE_Graph_31));
  *STATE_VARIABLE_Map_33 = ((MR_Word) (conv3_STATE_VARIABLE_Map_33));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_rtti_defns_assignments_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word Defns_10)
{
  MR_Word OrderedDefns_12;
  MR_Word Var_18;
  MR_Integer Var_20;
  MR_Box conv0_STATE_VARIABLE_IO_19_19;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static void MR_init_rtti() {\n");
  OrderedDefns_12 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_1_f_0(Defns_10);
  Var_20 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_6[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (Var_20));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_1[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, OrderedDefns_12, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19_19);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_vector_cell_init_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_vector_cell_decl_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word VectorCellGroupMap_10)
{
  MR_Word Var_14;
  MR_Word Var_19;
  MR_Integer Var_21;
  MR_Box conv0_STATE_VARIABLE_IO_15_15;
  MR_Box conv1_STATE_VARIABLE_IO_20_20;

  {
    Var_14 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_14, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_5[1]));
    MR_hl_field(0, Var_14, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_14, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_14, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_14, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_14, 5) = ((MR_Box) (Indent_9));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_14, VectorCellGroupMap_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_15_15);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static void MR_init_vector_common_data() {\n");
  Var_21 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  {
    Var_19 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_19, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_5[1]));
    MR_hl_field(0, Var_19, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_2));
    MR_hl_field(0, Var_19, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_19, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_19, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_19, 5) = ((MR_Box) (Var_21));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_19, VectorCellGroupMap_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_20_20);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_scalar_init_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 6)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_1(
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
  MR_Word conv1_STATE_VARIABLE_Graph_31;
  MR_Word conv0_STATE_VARIABLE_Map_33;

  ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_Graph_31, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_Map_33);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_Graph_31));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_Map_33));
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word ScalarCellGroupMap_10)
{
  MR_bool succeeded;
  MR_Word Graph_12;
  MR_Word Map_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box conv4_Graph_12;
  MR_Box conv3_Map_13;
  MR_Box conv2_STATE_VARIABLE_IO_21_21;
  MR_Word SortedScalars0_14;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_4[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (Indent_9));
  }
  Var_19 = mercury__digraph__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0));
  Var_20 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  mercury__map__foldl3_8_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, ScalarCellGroupMap_10, ((MR_Box) (Var_19)), &conv4_Graph_12, ((MR_Box) (Var_20)), &conv3_Map_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_21_21);
  Graph_12 = ((MR_Word) (conv4_Graph_12));
  Map_13 = ((MR_Word) (conv3_Map_13));
  succeeded = mercury__digraph__tsort_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), Graph_12, &SortedScalars0_14);
  if (succeeded)
  {
    MR_Word SortedScalars_15;
    MR_Word Var_25;
    MR_Integer Var_27;
    MR_Box conv5_STATE_VARIABLE_IO_26_26;

    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static void MR_init_scalar_common_data() {\n");
    mercury__list__reverse_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), SortedScalars0_14, &SortedScalars_15);
    Var_27 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_5[0]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_2));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (Info_7));
      MR_hl_field(0, Var_25, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(0, Var_25, 5) = ((MR_Box) (Var_27));
      MR_hl_field(0, Var_25, 6) = ((MR_Box) (Map_13));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_25, SortedScalars_15, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_26_26);
    ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
  }
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_global.output_scalar_common_data_for_csharp\'/6", (MR_String) "digraph.tsort failed");
      return;
    }
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_global_var_defn_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Integer Indent_10,
  MR_Word OutputAux_11,
  MR_Word GlobalVarDefn_12)
{
  MR_Word GlobalVarName_14;
  MR_Word Flags_16;
  MR_Word Type_17;
  MR_Word Initializer_18;
  MR_Integer Var_25;
  MR_Word Access_29;
  MR_Word Constness_30;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_9, Indent_10);
  GlobalVarName_14 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 0))));
  Flags_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 2))));
  Type_17 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 3))));
  Initializer_18 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, (MR_Integer) 4))));
  Access_29 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  Constness_30 = ((MR_Unsigned) ((MR_hl_field(0, Flags_16, (MR_Integer) 0))) & (MR_Integer) 1);
  switch (Access_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private ");
      break;
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "public ");
      break;
  }
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "static ");
  switch (Constness_30) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      mercury__io__write_string_4_p_0(Stream_9, (MR_String) "readonly ");
      break;
    case (MR_Integer) 0:
      {
      }
      break;
  }
  ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_8, Type_17, Stream_9);
  mercury__io__write_char_4_p_0(Stream_9, (MR_Char) 32);
  ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(Stream_9, GlobalVarName_14);
  Var_25 = (MR_Integer) ((MR_Unsigned) Indent_10 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_8, Stream_9, OutputAux_11, Var_25, Type_17, Initializer_18, (MR_String) ";");
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_init_global_var_method_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Integer Indent_9,
  MR_Word GlobalVarDefns_10)
{
  MR_Integer Var_17;

  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static void MR_init_data() {\n");
  Var_17 = (MR_Integer) ((MR_Unsigned) Indent_9 + (MR_Unsigned) 1);
  ml_backend__mlds_to_cs_global__output_init_global_var_statements_for_csharp_6_p_0(Info_7, Stream_8, Var_17, GlobalVarDefns_10);
  ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_8, Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_init_global_var_statements_for_csharp_6_p_0(
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
      MR_Integer Var_30;
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_2, Indent_3);
      ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(Stream_2, GlobalVarName_19);
      Var_30 = (MR_Integer) ((MR_Unsigned) Indent_3 + (MR_Unsigned) 1);
      ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_1, Stream_2, (MR_Word) ((MR_Unsigned) 0U), Var_30, Type_22, Initializer_23, (MR_String) ";");
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__4_4 = GlobalVarDefns_17;
      HeadVar__4_4 = next_value_of_HeadVar__4_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_global_var_decls_for_csharp_6_p_0(
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
      MR_Word Flags_21 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 2))));
      MR_Word Type_22 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, (MR_Integer) 3))));
      MR_Word Access_36;
      MR_Word next_value_of_HeadVar__4_4;

      ml_backend__mlds_to_target_util__output_n_indents_4_p_0(Stream_2, Indent_3);
      Access_36 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_21, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
      switch (Access_36) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "private ");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_2, (MR_String) "public ");
          break;
      }
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) "static ");
      ml_backend__mlds_to_cs_type__output_type_for_csharp_5_p_0(Info_1, Type_22, Stream_2);
      mercury__io__write_char_4_p_0(Stream_2, (MR_Char) 32);
      ml_backend__mlds_to_cs_name__output_global_var_name_for_csharp_4_p_0(Stream_2, GlobalVarName_19);
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

void mercury__ml_backend__mlds_to_cs_global__init(void)
{
}

void mercury__ml_backend__mlds_to_cs_global__init_type_tables(void)
{
}

void mercury__ml_backend__mlds_to_cs_global__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ml_backend__mlds_to_cs_global__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ml_backend.mlds_to_cs_global.
