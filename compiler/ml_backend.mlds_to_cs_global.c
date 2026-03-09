/*
** Automatically generated from `mlds_to_cs_global.m'
** by the Mercury compiler,
** version rotd-2026-03-09
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
#include "uint.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.proc_requests.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
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
#include "parse_tree.d_file_deps.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0;

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0;

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_array_assignments_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Unsigned Indent_12,
  MR_String GlobalVarNameStr_13,
  MR_Word ElementInit_14,
  MR_Integer Index_15,
  MR_Integer * HeadVar__7_7);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_scc_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_scc_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word SccDefns_10);

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
  MR_Unsigned Indent_9,
  MR_Word GlobalVarDefn_10);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_decl_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Map_11,
  MR_Word Scalar_12);

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Unsigned Indent_14,
  MR_Word TypeNum_15,
  MR_Word CellGroup_16,
  MR_Word STATE_VARIABLE_InitMap_0_32,
  MR_Word * STATE_VARIABLE_InitMap_33,
  MR_Word STATE_VARIABLE_DepGraph_0_34,
  MR_Word * STATE_VARIABLE_DepGraph_35);

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
  MR_Unsigned Indent_3,
  MR_Word HeadVar__4_4);


static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_1[1][3];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_2[2][2];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_3[1][1];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_4[1][14];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_5[2][10];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_6[2][9];

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_7[1][12];




static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_2[2][2] = {
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

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_3[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_4[1][14] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 11)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0)),
    ((MR_Box) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
    ((MR_Box) (&ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ml_backend__mlds_to_cs_global_scalar_common_7[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&ml_backend__mlds_to_cs_util__ml_backend__mlds_to_cs_util__type_ctor_info_csharp_out_info_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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


static const MR_FA_PseudoTypeInfo_Struct2 ml_backend__mlds_to_cs_global__tree234__pti_tree234_2__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0__plain_ml_backend__mlds__type_ctor_info_mlds_initializer_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0),
    (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__digraph__pti_digraph_1__plain_ml_backend__mlds__type_ctor_info_mlds_scalar_common_0 = {
  &mercury__digraph__digraph__type_ctor_info_digraph_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 ml_backend__mlds_to_cs_global__list__pti_list_1__plain_ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0) }
};

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_array_assignments_for_csharp_9_p_0(
  MR_Word Info_10,
  MR_Word Stream_11,
  MR_Unsigned Indent_12,
  MR_String GlobalVarNameStr_13,
  MR_Word ElementInit_14,
  MR_Integer Index_15,
  MR_Integer * HeadVar__7_7)
{
  MR_String IndentStr_17;
  MR_Unsigned Var_31;
  MR_String Var_41;

  *HeadVar__7_7 = (MR_Integer) ((MR_Unsigned) Index_15 + (MR_Unsigned) 1);
  IndentStr_17 = libs__indent__indent2_string_1_f_0(Indent_12);
  mercury__io__write_string_4_p_0(Stream_11, IndentStr_17);
  mercury__io__write_string_4_p_0(Stream_11, GlobalVarNameStr_13);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), Index_15, &Var_41);
  mercury__io__write_string_4_p_0(Stream_11, Var_41);
  mercury__io__write_string_4_p_0(Stream_11, (MR_String) "] =\n");
  Var_31 = (Indent_12 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_10, Stream_11, (MR_Integer) 1, Var_31, ElementInit_14, (MR_Word) ((MR_Unsigned) 0U), (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_scc_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_scc_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word SccDefns_10)
{
  MR_bool succeeded;
  MR_String IndentStr_12;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_9);
  if ((SccDefns_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_global.output_rtti_defn_scc_assignments_for_csharp\'/6", (MR_String) "SccDefns = []");
      return;
    }
  else
  {
    MR_Word HeadSccDefn_13 = ((MR_Word) ((MR_hl_field(1, SccDefns_10, 0))));
    MR_Word TailSccDefns_14 = ((MR_Word) ((MR_hl_field(1, SccDefns_10, 1))));

    ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0(Info_7, Stream_8, Indent_9, HeadSccDefn_13);
    if (!((TailSccDefns_14 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Integer NumSccDefns_17;
      MR_Word Var_31;
      MR_Box conv0_STATE_VARIABLE_IO_19;

      mercury__list__length_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), SccDefns_10, &NumSccDefns_17);
      succeeded = (NumSccDefns_17 > (MR_Integer) 1);
      if (succeeded)
      {
        MR_String Var_41;

        mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "// scc size ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), NumSccDefns_17, &Var_41);
        mercury__io__write_string_4_p_0(Stream_8, Var_41);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
      }
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_6[1]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_rtti_defn_scc_assignments_for_csharp_6_p_0_1));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 3));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (Info_7));
        MR_hl_field(0, Var_31, 4) = ((MR_Box) (Stream_8));
        MR_hl_field(0, Var_31, 5) = ((MR_Box) (Indent_9));
      }
      mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_global_var_defn_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, TailSccDefns_14, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_19);
    }
  }
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

  ml_backend__mlds_to_cs_global__output_rtti_array_assignments_for_csharp_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word GlobalVarDefn_10)
{
  MR_Word GlobalVarName_12 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_10, 0))));
  MR_Word Initializer_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_10, 4))));
  MR_String GlobalVarNameStr_18;

  GlobalVarNameStr_18 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(GlobalVarName_12);
  switch (MR_tag((MR_Word) Initializer_16)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String IndentStr_19;

        IndentStr_19 = libs__indent__indent2_string_1_f_0(Indent_9);
        mercury__io__write_string_4_p_0(Stream_8, IndentStr_19);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "// no initializer for ");
        mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_18);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "\n");
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
        MR_Word StructType_21 = ((MR_Word) ((MR_hl_field(2, Initializer_16, 0))));
        MR_Word FieldInits_22 = ((MR_Word) ((MR_hl_field(2, Initializer_16, 1))));
        MR_Word ArrayDims_24;
        MR_String _BaseTypeName_23;

        ml_backend__mlds_to_cs_type__type_to_string_and_dims_for_csharp_4_p_0(Info_7, StructType_21, &_BaseTypeName_23, &ArrayDims_24);
        if ((ArrayDims_24 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Unsigned Var_47;
          MR_String IndentStr_61;

          IndentStr_61 = libs__indent__indent2_string_1_f_0(Indent_9);
          mercury__io__write_string_4_p_0(Stream_8, IndentStr_61);
          mercury__io__write_string_4_p_0(Stream_8, GlobalVarNameStr_18);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ".init(\n");
          Var_47 = (Indent_9 + (MR_Unsigned) 1U);
          ml_backend__mlds_to_cs_data__output_nonempty_initializer_body_list_for_csharp_7_p_0(Info_7, Stream_8, Var_47, FieldInits_22, (MR_String) "");
          mercury__io__write_string_4_p_0(Stream_8, IndentStr_61);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ");\n");
        }
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140ml_backend.mlds_to_cs_global.output_rtti_defn_assignments_for_csharp\'/6", (MR_String) "is_array");
            return;
          }
      }
      break;
    case (MR_Integer) 3:
      {
        MR_Word ElementInits_27 = ((MR_Word) ((MR_hl_field(3, Initializer_16, 0))));
        MR_Word Var_58;
        MR_Box conv2__Index_28;
        MR_Box conv1_STATE_VARIABLE_IO_30;

        {
          Var_58 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_58, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_7[0]));
          MR_hl_field(0, Var_58, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_rtti_defn_assignments_for_csharp_6_p_0_1));
          MR_hl_field(0, Var_58, 2) = ((MR_Box) ((MR_Integer) 4));
          MR_hl_field(0, Var_58, 3) = ((MR_Box) (Info_7));
          MR_hl_field(0, Var_58, 4) = ((MR_Box) (Stream_8));
          MR_hl_field(0, Var_58, 5) = ((MR_Box) (Indent_9));
          MR_hl_field(0, Var_58, 6) = ((MR_Box) (GlobalVarNameStr_18));
        }
        mercury__list__foldl2_6_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_58, ElementInits_27, ((MR_Box) ((MR_Integer) 0)), &conv2__Index_28, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_30);
      }
      break;
  }
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12)
{
  MR_Unsigned Indent1_14 = (Indent_10 + (MR_Unsigned) 1U);
  MR_String IndentStr_15;
  MR_String Indent1Str_16;
  MR_Integer TypeRawNum_17;
  MR_Word Type_18;
  MR_Word RowInits_22;
  MR_String TypeStr_23;
  MR_Unsigned Var_41;
  MR_Word Var_42;
  MR_String Var_56;

  IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_10);
  Indent1Str_16 = libs__indent__indent2_string_1_f_0(Indent1_14);
  TypeRawNum_17 = (MR_Integer) (TypeNum_11);
  Type_18 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, 0))));
  RowInits_22 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, 4))));
  TypeStr_23 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_8, Type_18);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_15);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_vector_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_17, &Var_56);
  mercury__io__write_string_4_p_0(Stream_9, Var_56);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " = new ");
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_23);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[]\n");
  mercury__io__write_string_4_p_0(Stream_9, Indent1Str_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "{\n");
  Var_41 = (Indent_10 + (MR_Unsigned) 2U);
  Var_42 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInits_22);
  ml_backend__mlds_to_cs_data__output_nonempty_initializer_body_list_for_csharp_7_p_0(Info_8, Stream_9, Var_41, Var_42, (MR_String) "");
  mercury__io__write_string_4_p_0(Stream_9, Indent1Str_16);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "};\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_cell_decl_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word TypeNum_11,
  MR_Word CellGroup_12)
{
  MR_Integer TypeRawNum_14 = (MR_Integer) (TypeNum_11);
  MR_Word Type_15 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, 0))));
  MR_Word StructDefn_16 = ((MR_Word) ((MR_hl_field(0, CellGroup_12, 1))));
  MR_String IndentStr_20;
  MR_String TypeStr_21;
  MR_String Var_41;

  ml_backend__mlds_to_cs_class__output_struct_defn_for_csharp_6_p_0(Info_8, Stream_9, Indent_10, StructDefn_16);
  IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_10);
  TypeStr_21 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_8, Type_15);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "private static /* readonly */ ");
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[] MR_vector_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_14, &Var_41);
  mercury__io__write_string_4_p_0(Stream_9, Var_41);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) ";\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_init_for_csharp_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Unsigned Indent_10,
  MR_Word Map_11,
  MR_Word Scalar_12)
{
  MR_String IndentStr_14;
  MR_Word Initializer_15;
  MR_Word Type_17;
  MR_Word TypeNum_18;
  MR_Integer RowNum_19;
  MR_Integer TypeRawNum_20;
  MR_Unsigned Var_33;
  MR_Word Var_34;
  MR_String Var_44;
  MR_String Var_54;
  MR_Box conv0_Initializer_15;

  IndentStr_14 = libs__indent__indent2_string_1_f_0(Indent_10);
  mercury__map__lookup_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), Map_11, ((MR_Box) (Scalar_12)), &conv0_Initializer_15);
  Initializer_15 = ((MR_Word) (conv0_Initializer_15));
  Type_17 = ((MR_Word) ((MR_hl_field(0, Scalar_12, 1))));
  TypeNum_18 = ((MR_Word) ((MR_hl_field(0, Scalar_12, 2))));
  RowNum_19 = ((MR_Integer) ((MR_hl_field(0, Scalar_12, 3))));
  TypeRawNum_20 = (MR_Integer) (TypeNum_18);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_14);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "MR_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_20, &Var_44);
  mercury__io__write_string_4_p_0(Stream_9, Var_44);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "[");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), RowNum_19, &Var_54);
  mercury__io__write_string_4_p_0(Stream_9, Var_54);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) "] =\n");
  Var_33 = (Indent_10 + (MR_Unsigned) 1U);
  {
    Var_34 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_34, 0) = ((MR_Box) (Type_17));
  }
  ml_backend__mlds_to_cs_data__output_initializer_body_for_csharp_9_p_0(Info_8, Stream_9, (MR_Integer) 1, Var_33, Initializer_15, Var_34, (MR_String) ";");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Unsigned Indent_14,
  MR_Word TypeNum_15,
  MR_Word CellGroup_16,
  MR_Word STATE_VARIABLE_InitMap_0_32,
  MR_Word * STATE_VARIABLE_InitMap_33,
  MR_Word STATE_VARIABLE_DepGraph_0_34,
  MR_Word * STATE_VARIABLE_DepGraph_35)
{
  MR_Integer TypeRawNum_20 = (MR_Integer) (TypeNum_15);
  MR_Word Type_21 = ((MR_Word) ((MR_hl_field(0, CellGroup_16, 0))));
  MR_Word RowInitsCord_25 = ((MR_Word) ((MR_hl_field(0, CellGroup_16, 4))));
  MR_Word ArrayType_26;
  MR_Word RowInits_27;
  MR_String IndentStr_28;
  MR_String TypeStr_29;
  MR_Word MLDS_ModuleName_30;
  MR_Word Var_47;
  MR_Word Var_48;
  MR_String Var_69;
  MR_Integer Var_31;

  {
    ArrayType_26 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, ArrayType_26, 0) = ((MR_Box) ((MR_Unsigned) 8U));
    MR_hl_field(3, ArrayType_26, 1) = ((MR_Box) (Type_21));
  }
  RowInits_27 = mercury__cord__list_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0), RowInitsCord_25);
  IndentStr_28 = libs__indent__indent2_string_1_f_0(Indent_14);
  TypeStr_29 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_12, Type_21);
  mercury__io__write_string_4_p_0(Stream_13, IndentStr_28);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "private static readonly ");
  mercury__io__write_string_4_p_0(Stream_13, TypeStr_29);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) "[] MR_scalar_common_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_3[0]), TypeRawNum_20, &Var_69);
  mercury__io__write_string_4_p_0(Stream_13, Var_69);
  mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
  {
    Var_47 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(3, Var_47, 0) = ((MR_Box) (RowInits_27));
  }
  {
    Var_48 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_48, 0) = ((MR_Box) (ArrayType_26));
  }
  ml_backend__mlds_to_cs_data__output_initializer_alloc_only_for_csharp_7_p_0(Info_12, Stream_13, Var_47, Var_48, (MR_String) ";");
  MLDS_ModuleName_30 = ((MR_Word) ((MR_hl_field(0, Info_12, 2))));
  ml_backend__mlds_to_target_util__record_scalar_inits_build_dep_graph_10_p_0(MLDS_ModuleName_30, Type_21, TypeNum_15, RowInits_27, (MR_Integer) 0, &Var_31, STATE_VARIABLE_InitMap_0_32, STATE_VARIABLE_InitMap_33, STATE_VARIABLE_DepGraph_0_34, STATE_VARIABLE_DepGraph_35);
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;

  ml_backend__mlds_to_cs_global__output_rtti_defn_scc_assignments_for_csharp_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)));
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word Defns_10)
{
  MR_String IndentStr_12;
  MR_Word OrderedDefnSccs_13;
  MR_Word Var_21;
  MR_Unsigned Var_23;
  MR_Box conv0_STATE_VARIABLE_IO_2_22;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "static void MR_init_rtti() {\n");
  OrderedDefnSccs_13 = ml_backend__rtti_to_mlds__order_mlds_rtti_defns_into_sccs_1_f_0(Defns_10);
  Var_23 = (Indent_9 + (MR_Unsigned) 1U);
  {
    Var_21 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_21, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_6[0]));
    MR_hl_field(0, Var_21, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_rtti_assignments_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_21, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_21, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_21, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_21, 5) = ((MR_Box) (Var_23));
  }
  mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_2[1]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_21, OrderedDefnSccs_13, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_2_22);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
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

  ml_backend__mlds_to_cs_global__output_vector_cell_init_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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

  ml_backend__mlds_to_cs_global__output_vector_cell_decl_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word VectorCellGroupMap_10)
{
  MR_String IndentStr_12;
  MR_Word Var_15;
  MR_Word Var_22;
  MR_Unsigned Var_24;
  MR_Box conv0_STATE_VARIABLE_IO_1_16;
  MR_Box conv1_STATE_VARIABLE_IO_3_23;

  {
    Var_15 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_15, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_5[1]));
    MR_hl_field(0, Var_15, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_15, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_15, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_15, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_15, 5) = ((MR_Box) (Indent_9));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_15, VectorCellGroupMap_10, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_1_16);
  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static void MR_init_vector_common_data() {\n");
  Var_24 = (Indent_9 + (MR_Unsigned) 1U);
  {
    Var_22 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_22, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_5[1]));
    MR_hl_field(0, Var_22, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_vector_common_data_for_csharp_6_p_0_2));
    MR_hl_field(0, Var_22, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_22, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_22, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_22, 5) = ((MR_Box) (Var_24));
  }
  mercury__map__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_vector_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_vector_cell_group_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_22, VectorCellGroupMap_10, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_3_23);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
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

  ml_backend__mlds_to_cs_global__output_scalar_init_for_csharp_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) ((MR_hl_field(0, closure, 6)))), ((MR_Word) (wrapper_arg_1)));
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
  MR_Word conv1_STATE_VARIABLE_InitMap_33;
  MR_Word conv0_STATE_VARIABLE_DepGraph_35;

  ml_backend__mlds_to_cs_global__output_scalar_defns_for_csharp_11_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Unsigned) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_STATE_VARIABLE_InitMap_33, ((MR_Word) (wrapper_arg_5)), &conv0_STATE_VARIABLE_DepGraph_35);
  *wrapper_arg_4 = ((MR_Box) (conv1_STATE_VARIABLE_InitMap_33));
  *wrapper_arg_6 = ((MR_Box) (conv0_STATE_VARIABLE_DepGraph_35));
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word ScalarCellGroupMap_10)
{
  MR_bool succeeded;
  MR_Word InitMap_12;
  MR_Word DepGraph_13;
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Box conv4_InitMap_12;
  MR_Box conv3_DepGraph_13;
  MR_Box conv2_STATE_VARIABLE_IO_1_21;
  MR_Word ToFromScalars_14;

  {
    Var_18 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_18, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_4[0]));
    MR_hl_field(0, Var_18, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_1));
    MR_hl_field(0, Var_18, 2) = ((MR_Box) ((MR_Integer) 3));
    MR_hl_field(0, Var_18, 3) = ((MR_Box) (Info_7));
    MR_hl_field(0, Var_18, 4) = ((MR_Box) (Stream_8));
    MR_hl_field(0, Var_18, 5) = ((MR_Box) (Indent_9));
  }
  Var_19 = mercury__map__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_initializer_0));
  Var_20 = mercury__digraph__init_0_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0));
  mercury__map__foldl3_8_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_ml_scalar_common_type_num_0), (MR_Word) (&ml_backend__ml_global_data__ml_backend__ml_global_data__type_ctor_info_ml_scalar_cell_group_0), (MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_1[0]), (MR_Word) (&ml_backend__mlds_to_cs_global_scalar_common_2[0]), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_18, ScalarCellGroupMap_10, ((MR_Box) (Var_19)), &conv4_InitMap_12, ((MR_Box) (Var_20)), &conv3_DepGraph_13, ((MR_Box) ((MR_Integer) 0)), &conv2_STATE_VARIABLE_IO_1_21);
  InitMap_12 = ((MR_Word) (conv4_InitMap_12));
  DepGraph_13 = ((MR_Word) (conv3_DepGraph_13));
  succeeded = mercury__digraph__return_vertices_in_to_from_order_2_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), DepGraph_13, &ToFromScalars_14);
  if (succeeded)
  {
    MR_String IndentStr_15;
    MR_Word Var_27;
    MR_Unsigned Var_29;
    MR_Box conv5_STATE_VARIABLE_IO_3_28;

    IndentStr_15 = libs__indent__indent2_string_1_f_0(Indent_9);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static void MR_init_scalar_common_data() {\n");
    Var_29 = (Indent_9 + (MR_Unsigned) 1U);
    {
      Var_27 = (MR_Word) MR_new_object(MR_Word, (7 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_27, 0) = ((MR_Box) (&ml_backend__mlds_to_cs_global_scalar_common_5[0]));
      MR_hl_field(0, Var_27, 1) = ((MR_Box) (ml_backend__mlds_to_cs_global__output_scalar_common_data_for_csharp_6_p_0_2));
      MR_hl_field(0, Var_27, 2) = ((MR_Box) ((MR_Integer) 4));
      MR_hl_field(0, Var_27, 3) = ((MR_Box) (Info_7));
      MR_hl_field(0, Var_27, 4) = ((MR_Box) (Stream_8));
      MR_hl_field(0, Var_27, 5) = ((MR_Box) (Var_29));
      MR_hl_field(0, Var_27, 6) = ((MR_Box) (InitMap_12));
    }
    mercury__list__foldl_4_p_2((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_scalar_common_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_27, ToFromScalars_14, ((MR_Box) ((MR_Integer) 0)), &conv5_STATE_VARIABLE_IO_3_28);
    mercury__io__write_string_4_p_0(Stream_8, IndentStr_15);
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
  MR_Unsigned Indent_10,
  MR_Word OutputAux_11,
  MR_Word GlobalVarDefn_12)
{
  MR_Word GlobalVarName_14 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, 0))));
  MR_Word Flags_16 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, 2))));
  MR_Word Type_17 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, 3))));
  MR_Word Initializer_18 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_12, 4))));
  MR_String IndentStr_20;
  MR_String FlagsStr_21;
  MR_String TypeStr_22;
  MR_String GlobalVarNameStr_23;
  MR_Unsigned Var_37;
  MR_Word Access_48;
  MR_Word Constness_49;

  IndentStr_20 = libs__indent__indent2_string_1_f_0(Indent_10);
  Access_48 = ((((MR_Unsigned) ((MR_hl_field(0, Flags_16, 0))) >> 1)) & (MR_Integer) 1);
  Constness_49 = ((MR_Unsigned) ((MR_hl_field(0, Flags_16, 0))) & (MR_Integer) 1);
  switch (Access_48) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Constness_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          FlagsStr_21 = (MR_String) "private static readonly";
          break;
        case (MR_Integer) 0:
          FlagsStr_21 = (MR_String) "private static";
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (Constness_49) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          FlagsStr_21 = (MR_String) "public static readonly";
          break;
        case (MR_Integer) 0:
          FlagsStr_21 = (MR_String) "public static";
          break;
      }
      break;
  }
  TypeStr_22 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_8, Type_17);
  GlobalVarNameStr_23 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(GlobalVarName_14);
  mercury__io__write_string_4_p_0(Stream_9, IndentStr_20);
  mercury__io__write_string_4_p_0(Stream_9, FlagsStr_21);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, TypeStr_22);
  mercury__io__write_string_4_p_0(Stream_9, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_9, GlobalVarNameStr_23);
  Var_37 = (Indent_10 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_8, Stream_9, OutputAux_11, Var_37, Type_17, Initializer_18, (MR_String) ";");
}

void MR_CALL 
ml_backend__mlds_to_cs_global__output_init_global_var_method_for_csharp_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Unsigned Indent_9,
  MR_Word GlobalVarDefns_10)
{
  MR_String IndentStr_12;
  MR_Unsigned Var_20;

  IndentStr_12 = libs__indent__indent2_string_1_f_0(Indent_9);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "private static void MR_init_data() {\n");
  Var_20 = (Indent_9 + (MR_Unsigned) 1U);
  ml_backend__mlds_to_cs_global__output_init_global_var_statements_for_csharp_6_p_0(Info_7, Stream_8, Var_20, GlobalVarDefns_10);
  mercury__io__write_string_4_p_0(Stream_8, IndentStr_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "}\n");
}

static void MR_CALL 
ml_backend__mlds_to_cs_global__output_init_global_var_statements_for_csharp_6_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Unsigned Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word GlobalVarDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word GlobalVarName_19 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, 0))));
      MR_Word Type_22 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, 3))));
      MR_Word Initializer_23 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, 4))));
      MR_String IndentStr_25;
      MR_String GlobalVarNameStr_26;
      MR_Unsigned Var_37;
      MR_Word next_value_of_HeadVar__4_4;

      IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_3);
      GlobalVarNameStr_26 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(GlobalVarName_19);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_25);
      mercury__io__write_string_4_p_0(Stream_2, GlobalVarNameStr_26);
      Var_37 = (Indent_3 + (MR_Unsigned) 1U);
      ml_backend__mlds_to_cs_data__output_initializer_for_csharp_9_p_0(Info_1, Stream_2, (MR_Word) ((MR_Unsigned) 0U), Var_37, Type_22, Initializer_23, (MR_String) ";");
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
  MR_Unsigned Indent_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__4_4 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word GlobalVarDefn_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 0))));
      MR_Word GlobalVarDefns_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__4_4, 1))));
      MR_Word GlobalVarName_19 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, 0))));
      MR_Word Flags0_21 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, 2))));
      MR_Word Type_22 = ((MR_Word) ((MR_hl_field(0, GlobalVarDefn_16, 3))));
      MR_String IndentStr_25;
      MR_String FlagsStr_29;
      MR_String TypeStr_30;
      MR_String GlobalVarNameStr_31;
      MR_Word Access_55;
      MR_Word next_value_of_HeadVar__4_4;

      IndentStr_25 = libs__indent__indent2_string_1_f_0(Indent_3);
      Access_55 = ((((MR_Unsigned) ((MR_hl_field(0, Flags0_21, 0))) >> 1)) & (MR_Integer) 1);
      switch (Access_55) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          FlagsStr_29 = (MR_String) "private static";
          break;
        case (MR_Integer) 1:
          FlagsStr_29 = (MR_String) "public static";
          break;
      }
      TypeStr_30 = ml_backend__mlds_to_cs_type__type_to_string_for_csharp_2_f_0(Info_1, Type_22);
      GlobalVarNameStr_31 = ml_backend__mlds_to_cs_name__global_var_name_to_ll_string_for_csharp_1_f_0(GlobalVarName_19);
      mercury__io__write_string_4_p_0(Stream_2, IndentStr_25);
      mercury__io__write_string_4_p_0(Stream_2, FlagsStr_29);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_2, TypeStr_30);
      mercury__io__write_string_4_p_0(Stream_2, (MR_String) " ");
      mercury__io__write_string_4_p_0(Stream_2, GlobalVarNameStr_31);
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
