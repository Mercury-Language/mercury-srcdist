/*
** Automatically generated from `llds_out_data.m'
** by the Mercury compiler,
** version rotd-2017-11-16
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module ll_backend.llds_out.llds_out_data.
// :- implementation.

/*
INIT mercury__ll_backend__llds_out__llds_out_data__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_data.mih"


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
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
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
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
#include "mdbcomp.builtin_modules.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1264__1_2_f_0(
  MR_String LambdaHeadVar__1_60,
  MR_Integer LambdaHeadVar__2_61);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(
  MR_Word Test_6,
  MR_Word * Rval_7,
  MR_Integer * Ptag_8,
  MR_Integer * Stag_9,
  MR_Word * Negated_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word Rval_6,
  MR_Integer Ptag_7,
  MR_Integer * Stag_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word Test_5,
  MR_Word * Rval_6,
  MR_Integer * Ptag_7,
  MR_Word * Negated_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(
  MR_Word Test_6,
  MR_Word * Left_7,
  MR_Integer * RightConst_8,
  MR_String * OpStr_9,
  MR_String * NegOpStr_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_10_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_String FirstIndent_3,
  MR_String LaterIndent_4,
  MR_Integer STATE_VARIABLE_N_0_5,
  MR_Integer * STATE_VARIABLE_N_6,
  MR_Word STATE_VARIABLE_DeclSet_0_7,
  MR_Word * STATE_VARIABLE_DeclSet_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_12_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer Count_4,
  MR_String FirstIndent_5,
  MR_String LaterIndent_6,
  MR_Integer STATE_VARIABLE_N_0_7,
  MR_Integer * STATE_VARIABLE_N_8,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(
  MR_Word tscc_proc_1_input_1_Info_11,
  MR_Word tscc_proc_1_input_2_Lval_12,
  MR_String tscc_proc_1_input_3_FirstIndent_13,
  MR_String tscc_proc_1_input_4_LaterIndent_14,
  MR_Integer tscc_proc_1_input_5_STATE_VARIABLE_N_0_32,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(
  MR_Word tscc_proc_2_input_1_Info_11,
  MR_Word tscc_proc_2_input_2_Rval_12,
  MR_String tscc_proc_2_input_3_FirstIndent_13,
  MR_String tscc_proc_2_input_4_LaterIndent_14,
  MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_41,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_10_p_0(
  MR_Word tscc_proc_3_input_1_Info_11,
  MR_Word tscc_proc_3_input_2_MemRef_12,
  MR_String tscc_proc_3_input_3_FirstIndent_13,
  MR_String tscc_proc_3_input_4_LaterIndent_14,
  MR_Integer tscc_proc_3_input_5_STATE_VARIABLE_N_0_22,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(
  MR_Float Float_3,
  MR_String * FloatName_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(
  MR_Word Op_5,
  MR_Word Arg1_6,
  MR_Word Arg2_7,
  MR_String * Name_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word IsPtr_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(
  MR_Word Info_6,
  MR_Word StackType_7,
  MR_Integer SlotNum_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * MemRef_6);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(
  MR_Word Info_5,
  MR_Word Const_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(
  MR_Word Module0_6,
  MR_String Name_7,
  MR_Integer Arity_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_4_p_0(
  MR_Word RegType_5,
  MR_Integer N_6);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_2[3][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][3];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][2];


/* sealed */ struct ll_backend__llds_out__llds_out_data__vector_common_type_1_0_s {
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_1_0__vct_1_f_0;
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_1_0__vct_1_f_1;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_1_0_s ll_backend__llds_out__llds_out_data_vector_common_1[64];



static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_data_scalar_common_3[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};


static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_1_0_s ll_backend__llds_out__llds_out_data_vector_common_1[64] = {
  /* row 0 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 1 */
  {
    (MR_String) "string",
    (MR_String) "MR_STRING_CTOR_ADDR"
  },
  /* row 2 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 3 */
  {
    (MR_String) "uint32",
    (MR_String) "MR_UINT32_CTOR_ADDR"
  },
  /* row 4 */
  {
    (MR_String) "character",
    (MR_String) "MR_CHAR_CTOR_ADDR"
  },
  /* row 5 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 6 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 7 */
  {
    (MR_String) "int16",
    (MR_String) "MR_INT16_CTOR_ADDR"
  },
  /* row 8 */
  {
    (MR_String) "int",
    (MR_String) "MR_INT_CTOR_ADDR"
  },
  /* row 9 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 10 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 11 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 12 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 13 */
  {
    (MR_String) "uint8",
    (MR_String) "MR_UINT8_CTOR_ADDR"
  },
  /* row 14 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 15 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 16 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 17 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 18 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 19 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 20 */
  {
    (MR_String) "uint",
    (MR_String) "MR_UINT_CTOR_ADDR"
  },
  /* row 21 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 22 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 23 */
  {
    (MR_String) "int8",
    (MR_String) "MR_INT8_CTOR_ADDR"
  },
  /* row 24 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 25 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 26 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 27 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 28 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 29 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 30 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 31 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 32 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 33 */
  {
    (MR_String) "uint16",
    (MR_String) "MR_UINT16_CTOR_ADDR"
  },
  /* row 34 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 35 */
  {
    (MR_String) "float",
    (MR_String) "MR_FLOAT_CTOR_ADDR"
  },
  /* row 36 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 37 */
  {
    (MR_String) "int32",
    (MR_String) "MR_INT32_CTOR_ADDR"
  },
  /* row 38 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 39 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 40 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 41 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 42 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 43 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 44 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 45 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 46 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 47 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 48 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 49 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 50 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 51 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 52 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 53 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 54 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 55 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 56 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 57 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 58 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 59 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 60 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 61 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 62 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
  /* row 63 */
  {
    NULL,
    (MR_String) (MR_Integer) 0
  },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1264__1_2_f_0(
  MR_String LambdaHeadVar__1_60,
  MR_Integer LambdaHeadVar__2_61)
{
  {
    MR_Integer LambdaHeadVar__3_62;
    MR_Integer Var_63;
    MR_Integer Var_64;

    Var_64 = mercury__string__count_utf8_code_units_1_f_0(LambdaHeadVar__1_60);
    Var_63 = (LambdaHeadVar__2_61 + Var_64);
    LambdaHeadVar__3_62 = (Var_63 + (MR_Integer) 1);
    return LambdaHeadVar__3_62;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer TypeNum_4 = (MR_Integer) HeadVar__1_1;
    MR_String Var_8;

    Var_8 = backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_8);
    mercury__io__write_int_3_p_0(TypeNum_4);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_data_id_decls_6_p_0(
  MR_Word Info_7,
  MR_Word DataId_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_7, DataId_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_tag_3_p_0(
  MR_Integer Tag_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "MR_mktag(");
    mercury__io__write_int_3_p_0(Tag_4);
    mercury__io__write_string_3_p_0((MR_String) ")");
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(
  MR_Word Info_5,
  MR_Word Test_6)
{
  {
    MR_bool succeeded;
    MR_Word Left_8;
    MR_Integer RightConst_9;
    MR_String OpStr_10;
    MR_String Var_11;

    succeeded = ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(Test_6, &Left_8, &RightConst_9, &OpStr_10, &Var_11);
    if (succeeded)
    {
      mercury__io__write_string_3_p_0(OpStr_10);
      mercury__io__write_string_3_p_0((MR_String) "(");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Left_8);
      mercury__io__write_string_3_p_0((MR_String) ",");
      mercury__io__write_int_3_p_0(RightConst_9);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
    else
    {
      MR_String NegOpStr_14;
      MR_Word Left_153;
      MR_Integer RightConst_154;
      MR_Word InnerTest_12;
      MR_Word Var_31;
      MR_String Var_13;

      succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
        InnerTest_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
        succeeded = (Var_31 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        if (succeeded)
          succeeded = ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(InnerTest_12, &Left_153, &RightConst_154, &Var_13, &NegOpStr_14);
      }
      if (succeeded)
      {
        mercury__io__write_string_3_p_0(NegOpStr_14);
        mercury__io__write_string_3_p_0((MR_String) "(");
        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Left_153);
        mercury__io__write_string_3_p_0((MR_String) ",");
        mercury__io__write_int_3_p_0(RightConst_154);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        MR_Word Rval_15;
        MR_Integer Ptag_16;
        MR_Word Negated_17;

        succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Test_6, &Rval_15, &Ptag_16, &Negated_17);
        if (succeeded)
        {
          switch (Negated_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TEST(");
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TESTR(");
              }
              break;
          }
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_15);
          mercury__io__write_string_3_p_0((MR_String) ",");
          mercury__io__write_int_3_p_0(Ptag_16);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_Word Rval_148;
          MR_Integer Ptag_149;
          MR_Word Negated_150;
          MR_Word Var_51;
          MR_Word InnerTest_118;

          succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
            InnerTest_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
            succeeded = (Var_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            if (succeeded)
              succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(InnerTest_118, &Rval_148, &Ptag_149, &Negated_150);
          }
          if (succeeded)
          {
            switch (Negated_150) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TESTR(");
                }
                break;
              case (MR_Integer) 1:
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TEST(");
                }
                break;
            }
            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_148);
            mercury__io__write_string_3_p_0((MR_String) ",");
            mercury__io__write_int_3_p_0(Ptag_149);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Integer Stag_19;
            MR_Word Rval_143;
            MR_Integer Ptag_144;
            MR_Word Right_18;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Left_119;
            MR_Word Var_155;

            succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
              Left_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
              Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 3)));
              succeeded = (Var_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                Var_63 = (MR_Integer) 0;
                succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Left_119, &Rval_143, &Ptag_144, &Var_155);
                if (succeeded)
                {
                  succeeded = (Var_63 == Var_155);
                  if (succeeded)
                    succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(Right_18, Rval_143, Ptag_144, &Stag_19);
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_RTAGS_TEST(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_143);
              mercury__io__write_string_3_p_0((MR_String) ",");
              mercury__io__write_int_3_p_0(Ptag_144);
              mercury__io__write_string_3_p_0((MR_String) ",");
              mercury__io__write_int_3_p_0(Stag_19);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              MR_Word Rval_136;
              MR_Integer Ptag_137;
              MR_Integer Stag_140;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Left_120;
              MR_Word InnerTest_121;
              MR_Word Right_122;
              MR_Word Var_156;

              succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (succeeded)
              {
                Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
                InnerTest_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
                succeeded = (Var_75 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) InnerTest_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 1)));
                    Left_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 2)));
                    Right_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 3)));
                    succeeded = (Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (succeeded)
                    {
                      Var_77 = (MR_Integer) 0;
                      succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Left_120, &Rval_136, &Ptag_137, &Var_156);
                      if (succeeded)
                      {
                        succeeded = (Var_77 == Var_156);
                        if (succeeded)
                          succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(Right_122, Rval_136, Ptag_137, &Stag_140);
                      }
                    }
                  }
                }
              }
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_RTAGS_TESTR(");
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_136);
                mercury__io__write_string_3_p_0((MR_String) ",");
                mercury__io__write_int_3_p_0(Ptag_137);
                mercury__io__write_string_3_p_0((MR_String) ",");
                mercury__io__write_int_3_p_0(Stag_140);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_Word Rval_130;
                MR_Integer Ptag_131;
                MR_Word Negated_132;
                MR_Integer Stag_133;

                succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(Test_6, &Rval_130, &Ptag_131, &Stag_133, &Negated_132);
                if (succeeded)
                {
                  switch (Negated_132) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TEST(");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TESTR(");
                      }
                      break;
                  }
                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_130);
                  mercury__io__write_string_3_p_0((MR_String) ",");
                  mercury__io__write_int_3_p_0(Ptag_131);
                  mercury__io__write_string_3_p_0((MR_String) ",");
                  mercury__io__write_int_3_p_0(Stag_133);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                else
                {
                  MR_Word Rval_125;
                  MR_Integer Ptag_126;
                  MR_Word Negated_127;
                  MR_Integer Stag_128;
                  MR_Word Var_102;
                  MR_Word InnerTest_123;

                  succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                  if (succeeded)
                  {
                    Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
                    InnerTest_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
                    succeeded = (Var_102 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(InnerTest_123, &Rval_125, &Ptag_126, &Stag_128, &Negated_127);
                  }
                  if (succeeded)
                  {
                    switch (Negated_127) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TESTR(");
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TEST(");
                        }
                        break;
                    }
                    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_125);
                    mercury__io__write_string_3_p_0((MR_String) ",");
                    mercury__io__write_int_3_p_0(Ptag_126);
                    mercury__io__write_string_3_p_0((MR_String) ",");
                    mercury__io__write_int_3_p_0(Stag_128);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  else
                  {
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Test_6, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
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
ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(
  MR_Word Test_6,
  MR_Word * Rval_7,
  MR_Integer * Ptag_8,
  MR_Integer * Stag_9,
  MR_Word * Negated_10)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word Op_11;
    MR_Word Right_12;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;

    if (succeeded)
    {
      Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
      *Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
      Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 3)));
      succeeded = ((MR_tag((MR_Word) Right_12)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        *Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Right_12, (MR_Integer) 0)));
        Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), Right_12, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (succeeded)
        {
          Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1)));
          Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 2)));
          succeeded = (Var_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_17, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                *Stag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
                if (((((MR_tag((MR_Word) Op_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
                {
                  *Negated_10 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                if (((((MR_tag((MR_Word) Op_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
                {
                  *Negated_10 = (MR_Integer) 1;
                  succeeded = MR_TRUE;
                }
                else
                  succeeded = MR_FALSE;
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
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word Rval_6,
  MR_Integer Ptag_7,
  MR_Integer * Stag_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word Left_9;
    MR_Word Right_10;
    MR_Word Zero_11;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Integer Var_17;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Integer Var_20;

    if (succeeded)
    {
      Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 1)));
      Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 2)));
      Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 3)));
      succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1)));
        succeeded = (Var_13 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Left_9)) == (MR_mktag((MR_Integer) 0)));
          if (succeeded)
          {
            Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Left_9, (MR_Integer) 0)));
            succeeded = ((((MR_tag((MR_Word) Var_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 1)));
              Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 2)));
              Zero_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_14, (MR_Integer) 3)));
              succeeded = ll_backend__llds____Unify____rval_0_0(Rval_6, Var_19);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0)));
                  succeeded = (Ptag_7 == Var_20);
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Zero_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Zero_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Zero_11, (MR_Integer) 1)));
                      succeeded = ((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0)));
                        succeeded = (Var_17 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Right_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Right_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Right_10, (MR_Integer) 1)));
                            succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_mktag((MR_Integer) 1)));
                            if (succeeded)
                              *Stag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_18, (MR_Integer) 0)));
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word Test_5,
  MR_Word * Rval_6,
  MR_Integer * Ptag_7,
  MR_Word * Negated_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word Op_9;
    MR_Word Left_10;
    MR_Word Right_11;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 1)));
      Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 2)));
      Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 3)));
      succeeded = ((((MR_tag((MR_Word) Left_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Left_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Left_10, (MR_Integer) 1)));
        *Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Left_10, (MR_Integer) 2)));
        succeeded = (Var_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Right_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Right_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
          if (succeeded)
          {
            Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Right_11, (MR_Integer) 1)));
            Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Right_11, (MR_Integer) 2)));
            succeeded = (Var_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  *Ptag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0)));
                  if (((((MR_tag((MR_Word) Op_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_9, (MR_Integer) 0)))) == (MR_Integer) 8))))
                  {
                    *Negated_8 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) Op_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_9, (MR_Integer) 0)))) == (MR_Integer) 9))))
                  {
                    *Negated_8 = (MR_Integer) 1;
                    succeeded = MR_TRUE;
                  }
                  else
                    succeeded = MR_FALSE;
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
ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(
  MR_Word Test_6,
  MR_Word * Left_7,
  MR_Integer * RightConst_8,
  MR_String * OpStr_9,
  MR_String * NegOpStr_10)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word Op_11;
    MR_Word Right_12;
    MR_Word Var_13;

    if (succeeded)
    {
      Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1)));
      *Left_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2)));
      Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 3)));
      succeeded = ((((MR_tag((MR_Word) Right_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Right_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Right_12, (MR_Integer) 1)));
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          *RightConst_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0)));
          switch (MR_tag((MR_Word) Op_11)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0)))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                    succeeded = (Var_19 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *OpStr_9 = (MR_String) "MR_INT_EQ";
                      *NegOpStr_10 = (MR_String) "MR_INT_NE";
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 9:
                  {
                    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                    succeeded = (Var_18 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *OpStr_9 = (MR_String) "MR_INT_NE";
                      *NegOpStr_10 = (MR_String) "MR_INT_EQ";
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 12:
                  {
                    MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                    succeeded = (Var_17 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *OpStr_9 = (MR_String) "MR_INT_LT";
                      *NegOpStr_10 = (MR_String) "MR_INT_GE";
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 13:
                  {
                    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                    succeeded = (Var_16 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *OpStr_9 = (MR_String) "MR_INT_GT";
                      *NegOpStr_10 = (MR_String) "MR_INT_LT";
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 14:
                  {
                    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                    succeeded = (Var_15 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *OpStr_9 = (MR_String) "MR_INT_LE";
                      *NegOpStr_10 = (MR_String) "MR_INT_GT";
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
                case (MR_Integer) 15:
                  {
                    MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                    succeeded = (Var_14 == (MR_Integer) 0);
                    if (succeeded)
                    {
                      *OpStr_9 = (MR_String) "MR_INT_GE";
                      *NegOpStr_10 = (MR_String) "MR_INT_LT";
                      succeeded = MR_TRUE;
                    }
                  }
                  break;
              }
              break;
          }
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Rvals_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_10_p_0(Info_7, Rvals_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_10_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_String FirstIndent_3,
  MR_String LaterIndent_4,
  MR_Integer STATE_VARIABLE_N_0_5,
  MR_Integer * STATE_VARIABLE_N_6,
  MR_Word STATE_VARIABLE_DeclSet_0_7,
  MR_Word * STATE_VARIABLE_DeclSet_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_DeclSet_8 = STATE_VARIABLE_DeclSet_0_7;
      *STATE_VARIABLE_N_6 = STATE_VARIABLE_N_0_5;
    }
    else
    {
      MR_Word LeftOverRvals_32;
      MR_Integer STATE_VARIABLE_N_40_40;
      MR_Word STATE_VARIABLE_DeclSet_41_41;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_5;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_7;

      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_12_p_0(Info_1, HeadVar__2_2, &LeftOverRvals_32, (MR_Integer) 1000, FirstIndent_3, LaterIndent_4, STATE_VARIABLE_N_0_5, &STATE_VARIABLE_N_40_40, STATE_VARIABLE_DeclSet_0_7, &STATE_VARIABLE_DeclSet_41_41);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = LeftOverRvals_32;
      next_value_of_STATE_VARIABLE_N_0_5 = STATE_VARIABLE_N_40_40;
      next_value_of_STATE_VARIABLE_DeclSet_0_7 = STATE_VARIABLE_DeclSet_41_41;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      STATE_VARIABLE_N_0_5 = next_value_of_STATE_VARIABLE_N_0_5;
      STATE_VARIABLE_DeclSet_0_7 = next_value_of_STATE_VARIABLE_DeclSet_0_7;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_12_p_0(
  MR_Word Info_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer Count_4,
  MR_String FirstIndent_5,
  MR_String LaterIndent_6,
  MR_Integer STATE_VARIABLE_N_0_7,
  MR_Integer * STATE_VARIABLE_N_8,
  MR_Word STATE_VARIABLE_DeclSet_0_9,
  MR_Word * STATE_VARIABLE_DeclSet_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *STATE_VARIABLE_DeclSet_10 = STATE_VARIABLE_DeclSet_0_9;
      *STATE_VARIABLE_N_8 = STATE_VARIABLE_N_0_7;
    }
    else
    {
      MR_Word Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Rvals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (Count_4 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_N_43_43;
        MR_Word STATE_VARIABLE_DeclSet_44_44;
        MR_Integer Var_46;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Integer next_value_of_Count_4;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_7;
        MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_9;

        ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_1, Rval_27, FirstIndent_5, LaterIndent_6, STATE_VARIABLE_N_0_7, &STATE_VARIABLE_N_43_43, STATE_VARIABLE_DeclSet_0_9, &STATE_VARIABLE_DeclSet_44_44);
        Var_46 = (Count_4 - (MR_Integer) 1);
        // direct tailcall eliminated
        next_value_of_HeadVar__2_2 = Rvals_28;
        next_value_of_Count_4 = Var_46;
        next_value_of_STATE_VARIABLE_N_0_7 = STATE_VARIABLE_N_43_43;
        next_value_of_STATE_VARIABLE_DeclSet_0_9 = STATE_VARIABLE_DeclSet_44_44;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        Count_4 = next_value_of_Count_4;
        STATE_VARIABLE_N_0_7 = next_value_of_STATE_VARIABLE_N_0_7;
        STATE_VARIABLE_DeclSet_0_9 = next_value_of_STATE_VARIABLE_DeclSet_0_9;
        continue;
      }
      else
      {
        *HeadVar__3_3 = HeadVar__2_2;
        *STATE_VARIABLE_DeclSet_10 = STATE_VARIABLE_DeclSet_0_9;
        *STATE_VARIABLE_N_8 = STATE_VARIABLE_N_0_7;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_p_0(
  MR_Word Info_7,
  MR_Word Rval_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_7, Rval_8, (MR_String) "", (MR_String) "\t", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Rval_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_7, Rval_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word RegType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer RegNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

          *HeadVar__2_2 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_3, RegNum_4);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_String Var_12;
              MR_String Var_13;

              Var_13 = mercury__string__int_to_string_1_f_0(N_10);
              Var_12 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) ")");
              *HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", Var_12);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_String Var_17;
              MR_String Var_18;

              Var_18 = mercury__string__int_to_string_1_f_0(N_15);
              Var_17 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
              *HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "MR_parent_sv(", Var_17);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_String Var_7;
              MR_String Var_8;

              Var_8 = mercury__string__int_to_string_1_f_0(N_5);
              Var_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) ")");
              *HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", Var_7);
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_String Macro_23;
              MR_Integer Var_31;
              MR_String Var_35;
              MR_Word Var_41;
              MR_String Var_42;
              MR_String Var_44;
              MR_String Var_45;
              MR_String Var_52;
              MR_String Var_54;

              switch (Type_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Macro_23 = (MR_String) "MR_parent_sv";
                  break;
                case (MR_Integer) 0:
                  Macro_23 = (MR_String) "MR_sv";
                  break;
              }
              Var_31 = (N_21 + (MR_Integer) 1);
              Var_41 = (MR_Word) &ll_backend__llds_out__llds_out_data_scalar_common_2[0];
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, Var_31, &Var_35);
              Var_42 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) ")");
              Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_42);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_41, N_21, &Var_45);
              Var_52 = mercury__string__f_43_43_2_f_0(Var_45, Var_44);
              Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_52);
              *HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Macro_23, Var_54);
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(
  MR_Word Info_5,
  MR_Word Lval_6)
{
  {
    MR_bool succeeded;
    MR_Word ActualType_8;

    ll_backend__llds__lval_type_2_p_0(Lval_6, &ActualType_8);
    if ((ActualType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ActualType_8)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActualType_8, (MR_Integer) 0)));

      switch (Var_28) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          succeeded = MR_TRUE;
          break;
        case (MR_Integer) 1:
          succeeded = MR_TRUE;
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    if (!(succeeded))
      succeeded = ll_backend__llds____Unify____llds_type_0_0(ActualType_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)));
    if (succeeded)
      ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_6);
    else
    {
      succeeded = (ActualType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      if (succeeded)
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_as_word\'/4", (MR_String) "float");
          return;
        }
      }
      else
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_LVALUE_CAST(MR_Word,");
        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_6);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(
  MR_Word Info_6,
  MR_Word Lval_7,
  MR_Word * Type_8)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_succip_word");
            }
            break;
          case (MR_Integer) 1:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_maxfr_word");
            }
            break;
          case (MR_Integer) 2:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_curfr_word");
            }
            break;
          case (MR_Integer) 3:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_hp_word");
            }
            break;
          case (MR_Integer) 4:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_sp_word");
            }
            break;
          case (MR_Integer) 5:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sp");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RegType_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 0)));
          MR_Integer Num_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 1)));

          switch (RegType_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              break;
            case (MR_Integer) 0:
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              break;
          }
          ll_backend__llds_out__llds_out_data__output_reg_4_p_0(RegType_10, Num_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RegType_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 0)));
          MR_Integer Num_128 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 1)));

          switch (RegType_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                mercury__io__write_string_3_p_0((MR_String) "MR_tempf");
                mercury__io__write_int_3_p_0(Num_128);
              }
              break;
            case (MR_Integer) 0:
              {
                *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
                mercury__io__write_string_3_p_0((MR_String) "MR_tempr");
                mercury__io__write_int_3_p_0(Num_128);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              succeeded = (N_12 < (MR_Integer) 0);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "stack var out of range");
                  return;
                }
              }
              else
              {
              }
              mercury__io__write_string_3_p_0((MR_String) "MR_sv(");
              mercury__io__write_int_3_p_0(N_12);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer N_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              succeeded = (N_120 < (MR_Integer) 0);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "parent stack var out of range");
                  return;
                }
              }
              else
              {
              }
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sv(");
              mercury__io__write_int_3_p_0(N_120);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer N_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              succeeded = (N_121 <= (MR_Integer) 0);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "frame var out of range");
                  return;
                }
              }
              else
              {
              }
              mercury__io__write_string_3_p_0((MR_String) "MR_fv(");
              mercury__io__write_int_3_p_0(N_121);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word StackType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));
              MR_Integer SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 2)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
              mercury__io__write_string_3_p_0((MR_String) "* (MR_Float *) ");
              ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(Info_6, StackType_13, SlotNum_14);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_succip_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_125);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_succfr_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_15);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_redoip_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_124);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_redofr_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_123);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              mercury__io__write_string_3_p_0((MR_String) "MR_prevfr_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_122);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word MaybeTag_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));
              MR_Word FieldNumRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 3)));
              MR_Word Rval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 2)));
              MR_Integer FieldNum_19;
              MR_Word Var_47;

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              if ((MaybeTag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_mask_field(");
              }
              else
              {
                MR_Integer Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_16, (MR_Integer) 0)));

                mercury__io__write_string_3_p_0((MR_String) "MR_tfield(");
                mercury__io__write_int_3_p_0(Tag_18);
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_126);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              succeeded = ((((MR_tag((MR_Word) FieldNumRval_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_17, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  FieldNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));
              }
              if (succeeded)
                mercury__io__write_int_3_p_0(FieldNum_19);
              else
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, FieldNumRval_17);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 10:
            {
              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_7);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word GlobalVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1)));
              MR_String Var_25;

              *Type_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
              Var_25 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_22);
              mercury__io__write_string_3_p_0(Var_25);
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_p_0(
  MR_Word Info_7,
  MR_Word Lval_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(Info_7, Lval_8, (MR_String) "\t", (MR_String) "\t", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(
  MR_Word Info_7,
  MR_Word Lval_8,
  MR_Word STATE_VARIABLE_DeclSet_0_12,
  MR_Word * STATE_VARIABLE_DeclSet_13)
{
  {
    MR_Integer Var_11;

    ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(Info_7, Lval_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_11, STATE_VARIABLE_DeclSet_0_12, STATE_VARIABLE_DeclSet_13);
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(
  MR_Word tscc_proc_1_input_1_Info_11,
  MR_Word tscc_proc_1_input_2_Lval_12,
  MR_String tscc_proc_1_input_3_FirstIndent_13,
  MR_String tscc_proc_1_input_4_LaterIndent_14,
  MR_Integer tscc_proc_1_input_5_STATE_VARIABLE_N_0_32,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35)
{
  {
    MR_Word tscc_proc_2_input_1_Info_11;
    MR_Word tscc_proc_2_input_2_Rval_12;
    MR_String tscc_proc_2_input_3_FirstIndent_13;
    MR_String tscc_proc_2_input_4_LaterIndent_14;
    MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
    MR_Word tscc_proc_3_input_1_Info_11;
    MR_Word tscc_proc_3_input_2_MemRef_12;
    MR_String tscc_proc_3_input_3_FirstIndent_13;
    MR_String tscc_proc_3_input_4_LaterIndent_14;
    MR_Integer tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
    MR_Word tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
    MR_Integer tscc_output_1_STATE_VARIABLE_N_33;
    MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_35;

    // The code for TSCC PROC 1: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0
    // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0
    // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word Info_11 = tscc_proc_1_input_1_Info_11;
      MR_Word Lval_12 = tscc_proc_1_input_2_Lval_12;
      MR_String FirstIndent_13 = tscc_proc_1_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_1_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_32 = tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
      MR_Integer STATE_VARIABLE_N_33;
      MR_Word STATE_VARIABLE_DeclSet_0_34 = tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
      MR_Word STATE_VARIABLE_DeclSet_35;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Lval_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
            STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
            STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_56;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_55;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_53;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_52;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 2)));
                MR_Word FieldNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 3)));
                MR_Integer STATE_VARIABLE_N_45_45;
                MR_Word STATE_VARIABLE_DeclSet_46_46;
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, Rval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_32, &STATE_VARIABLE_N_45_45, STATE_VARIABLE_DeclSet_0_34, &STATE_VARIABLE_DeclSet_46_46);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                next_value_of_tscc_proc_2_input_2_Rval_12 = FieldNum_20;
                next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_45_45;
                next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_46_46;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_51;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word CGlobalVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CGlobalVar_31));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_38, STATE_VARIABLE_DeclSet_0_34);
                if (!(succeeded))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
                  }
                }
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_33;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_35;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_11 = tscc_proc_2_input_1_Info_11;
      MR_Word Rval_12 = tscc_proc_2_input_2_Rval_12;
      MR_String FirstIndent_13 = tscc_proc_2_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_2_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_41 = tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
      MR_Integer STATE_VARIABLE_N_42;
      MR_Word STATE_VARIABLE_DeclSet_0_43 = tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
      MR_Word STATE_VARIABLE_DeclSet_44;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_12 = Lval_18;
            MR_String next_value_of_tscc_proc_1_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_1_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = STATE_VARIABLE_DeclSet_0_43;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_11 = next_value_of_tscc_proc_1_input_1_Info_11;
            tscc_proc_1_input_2_Lval_12 = next_value_of_tscc_proc_1_input_2_Lval_12;
            tscc_proc_1_input_3_FirstIndent_13 = next_value_of_tscc_proc_1_input_3_FirstIndent_13;
            tscc_proc_1_input_4_LaterIndent_14 = next_value_of_tscc_proc_1_input_4_LaterIndent_14;
            tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
            tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/10", (MR_String) "var");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 1)));
            MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_21;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_43;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word CodeAddress_24;

                succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  CodeAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_11, CodeAddress_24, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_42, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                }
                else
                {
                  MR_Word DataId_25;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    DataId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 2)));
                    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, DataId_25, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_42, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                  }
                  else
                  {
                    MR_Float FloatVal_27;

                    succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      FloatVal_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                      {
                        MR_Word UnboxedFloat_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                        MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
                        MR_String Var_128 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
                        MR_String Var_129 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
                        MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
                        MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
                        MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
                        MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
                        MR_Word Var_134 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                        MR_Word Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word Var_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word Var_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        MR_Word Var_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        MR_Word Var_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        MR_Word Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        MR_Word Var_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                        MR_Word Var_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                        MR_Word Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                        MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));

                        succeeded = (UnboxedFloat_28 == (MR_Integer) 0);
                        if (succeeded)
                          succeeded = (StaticGroundFloats_29 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_String FloatName_30;
                          MR_Word FloatLabel_31;

                          ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_27, &FloatName_30);
                          {
                            FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), FloatLabel_31, 0) = ((MR_Box) (FloatName_30));
                          }
                          succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_43);
                          if (succeeded)
                          {
                            STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                            STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                          }
                          else
                          {
                            MR_String FloatString_32;
                            MR_Word Var_93;
                            MR_Word Var_96;
                            MR_Word Var_98;
                            MR_Word Var_99;
                            MR_Word Var_101;

                            ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                            FloatString_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                            ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41);
                            STATE_VARIABLE_N_42 = (STATE_VARIABLE_N_0_41 + (MR_Integer) 1);
                            {
                              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (FloatString_32));
                              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                            }
                            {
                              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) ((MR_String) " = "));
                              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
                            }
                            {
                              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (FloatName_30));
                              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
                            }
                            {
                              Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                              MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
                            }
                            {
                              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
                            }
                            mercury__io__write_strings_3_p_0(Var_93);
                          }
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                          STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                        }
                      }
                    }
                    else
                    {
                      STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                      STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRvalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));
                MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRvalA_34;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_43;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Op_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word SubRvalB_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 3)));
                MR_Word Category_37;
                MR_String OpStr_38;
                MR_Integer STATE_VARIABLE_N_50_50;
                MR_Word STATE_VARIABLE_DeclSet_51_51;
                MR_Integer STATE_VARIABLE_N_53_53;
                MR_Word STATE_VARIABLE_DeclSet_54_54;
                MR_Word SubRvalA_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalA_126, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_50_50, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_51_51);
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalB_36, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_50_50, &STATE_VARIABLE_N_53_53, STATE_VARIABLE_DeclSet_51_51, &STATE_VARIABLE_DeclSet_54_54);
                backend_libs__c_util__binop_category_string_3_p_0(Op_35, &Category_37, &OpStr_38);
                succeeded = (Category_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                if (succeeded)
                {
                  MR_Word UnboxFloat_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word StaticGroundFloats_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
                  MR_String Var_170 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
                  MR_String Var_171 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
                  MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
                  MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
                  MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
                  MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
                  MR_Word Var_176 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                  MR_Word Var_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word Var_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word Var_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word Var_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word Var_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word Var_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word Var_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word Var_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word Var_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word Var_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word Var_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));
                  MR_String FloatName_115;

                  succeeded = (UnboxFloat_39 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (StaticGroundFloats_117 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_35, SubRvalA_126, SubRvalB_36, &FloatName_115);
                  }
                  if (succeeded)
                  {
                    MR_Word FloatLabel_114;

                    {
                      FloatLabel_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FloatLabel_114, 0) = ((MR_Box) (FloatName_115));
                    }
                    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_114, STATE_VARIABLE_DeclSet_54_54);
                    if (succeeded)
                    {
                      STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                      STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_114, STATE_VARIABLE_DeclSet_54_54, &STATE_VARIABLE_DeclSet_44);
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_53_53);
                      STATE_VARIABLE_N_42 = (STATE_VARIABLE_N_53_53 + (MR_Integer) 1);
                      mercury__io__write_string_3_p_0((MR_String) "static const ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                      mercury__io__write_string_3_p_0(FloatName_115);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalA_126, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      mercury__io__write_string_3_p_0(OpStr_38);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalB_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                    STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                  }
                }
                else
                {
                  STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                  STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word MemRef_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_3_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_3_input_2_MemRef_12 = MemRef_40;
                MR_String next_value_of_tscc_proc_3_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_3_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = STATE_VARIABLE_DeclSet_0_43;

                // direct tailcall eliminated
                tscc_proc_3_input_1_Info_11 = next_value_of_tscc_proc_3_input_1_Info_11;
                tscc_proc_3_input_2_MemRef_12 = next_value_of_tscc_proc_3_input_2_MemRef_12;
                tscc_proc_3_input_3_FirstIndent_13 = next_value_of_tscc_proc_3_input_3_FirstIndent_13;
                tscc_proc_3_input_4_LaterIndent_14 = next_value_of_tscc_proc_3_input_4_LaterIndent_14;
                tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
                tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
                goto top_of_proc_3;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_42;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_44;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_11 = tscc_proc_3_input_1_Info_11;
      MR_Word MemRef_12 = tscc_proc_3_input_2_MemRef_12;
      MR_String FirstIndent_13 = tscc_proc_3_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_3_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_22 = tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
      MR_Integer STATE_VARIABLE_N_23;
      MR_Word STATE_VARIABLE_DeclSet_0_24 = tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
      MR_Word STATE_VARIABLE_DeclSet_25;

      switch (MR_tag((MR_Word) MemRef_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_37;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_18;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 0)));
            MR_Word OffsetRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 2)));
            MR_Integer STATE_VARIABLE_N_28_28;
            MR_Word STATE_VARIABLE_DeclSet_29_29;
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, BaseRval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_22, &STATE_VARIABLE_N_28_28, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_29_29);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            next_value_of_tscc_proc_2_input_2_Rval_12 = OffsetRval_21;
            next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_28_28;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_29_29;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_23;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_25;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_N_33 = tscc_output_1_STATE_VARIABLE_N_33;
    *tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35 = tscc_output_2_STATE_VARIABLE_DeclSet_35;
    return;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(
  MR_Word tscc_proc_2_input_1_Info_11,
  MR_Word tscc_proc_2_input_2_Rval_12,
  MR_String tscc_proc_2_input_3_FirstIndent_13,
  MR_String tscc_proc_2_input_4_LaterIndent_14,
  MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_41,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35)
{
  {
    MR_Word tscc_proc_1_input_1_Info_11;
    MR_Word tscc_proc_1_input_2_Lval_12;
    MR_String tscc_proc_1_input_3_FirstIndent_13;
    MR_String tscc_proc_1_input_4_LaterIndent_14;
    MR_Integer tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
    MR_Word tscc_proc_3_input_1_Info_11;
    MR_Word tscc_proc_3_input_2_MemRef_12;
    MR_String tscc_proc_3_input_3_FirstIndent_13;
    MR_String tscc_proc_3_input_4_LaterIndent_14;
    MR_Integer tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
    MR_Word tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
    MR_Integer tscc_output_1_STATE_VARIABLE_N_33;
    MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_35;

    // The code for TSCC PROC 2: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0
    // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0
    // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word Info_11 = tscc_proc_1_input_1_Info_11;
      MR_Word Lval_12 = tscc_proc_1_input_2_Lval_12;
      MR_String FirstIndent_13 = tscc_proc_1_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_1_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_32 = tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
      MR_Integer STATE_VARIABLE_N_33;
      MR_Word STATE_VARIABLE_DeclSet_0_34 = tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
      MR_Word STATE_VARIABLE_DeclSet_35;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Lval_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
            STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
            STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_56;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_55;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_53;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_52;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 2)));
                MR_Word FieldNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 3)));
                MR_Integer STATE_VARIABLE_N_45_45;
                MR_Word STATE_VARIABLE_DeclSet_46_46;
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, Rval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_32, &STATE_VARIABLE_N_45_45, STATE_VARIABLE_DeclSet_0_34, &STATE_VARIABLE_DeclSet_46_46);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                next_value_of_tscc_proc_2_input_2_Rval_12 = FieldNum_20;
                next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_45_45;
                next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_46_46;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_51;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word CGlobalVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CGlobalVar_31));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_38, STATE_VARIABLE_DeclSet_0_34);
                if (!(succeeded))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
                  }
                }
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_33;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_35;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_11 = tscc_proc_2_input_1_Info_11;
      MR_Word Rval_12 = tscc_proc_2_input_2_Rval_12;
      MR_String FirstIndent_13 = tscc_proc_2_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_2_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_41 = tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
      MR_Integer STATE_VARIABLE_N_42;
      MR_Word STATE_VARIABLE_DeclSet_0_43 = tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
      MR_Word STATE_VARIABLE_DeclSet_44;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_12 = Lval_18;
            MR_String next_value_of_tscc_proc_1_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_1_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = STATE_VARIABLE_DeclSet_0_43;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_11 = next_value_of_tscc_proc_1_input_1_Info_11;
            tscc_proc_1_input_2_Lval_12 = next_value_of_tscc_proc_1_input_2_Lval_12;
            tscc_proc_1_input_3_FirstIndent_13 = next_value_of_tscc_proc_1_input_3_FirstIndent_13;
            tscc_proc_1_input_4_LaterIndent_14 = next_value_of_tscc_proc_1_input_4_LaterIndent_14;
            tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
            tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/10", (MR_String) "var");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 1)));
            MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_21;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_43;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word CodeAddress_24;

                succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  CodeAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_11, CodeAddress_24, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_42, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                }
                else
                {
                  MR_Word DataId_25;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    DataId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 2)));
                    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, DataId_25, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_42, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                  }
                  else
                  {
                    MR_Float FloatVal_27;

                    succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      FloatVal_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                      {
                        MR_Word UnboxedFloat_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                        MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
                        MR_String Var_128 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
                        MR_String Var_129 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
                        MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
                        MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
                        MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
                        MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
                        MR_Word Var_134 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                        MR_Word Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word Var_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word Var_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        MR_Word Var_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        MR_Word Var_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        MR_Word Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        MR_Word Var_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                        MR_Word Var_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                        MR_Word Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                        MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));

                        succeeded = (UnboxedFloat_28 == (MR_Integer) 0);
                        if (succeeded)
                          succeeded = (StaticGroundFloats_29 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_String FloatName_30;
                          MR_Word FloatLabel_31;

                          ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_27, &FloatName_30);
                          {
                            FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), FloatLabel_31, 0) = ((MR_Box) (FloatName_30));
                          }
                          succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_43);
                          if (succeeded)
                          {
                            STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                            STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                          }
                          else
                          {
                            MR_String FloatString_32;
                            MR_Word Var_93;
                            MR_Word Var_96;
                            MR_Word Var_98;
                            MR_Word Var_99;
                            MR_Word Var_101;

                            ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                            FloatString_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                            ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41);
                            STATE_VARIABLE_N_42 = (STATE_VARIABLE_N_0_41 + (MR_Integer) 1);
                            {
                              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (FloatString_32));
                              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                            }
                            {
                              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) ((MR_String) " = "));
                              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
                            }
                            {
                              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (FloatName_30));
                              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
                            }
                            {
                              Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                              MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
                            }
                            {
                              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
                            }
                            mercury__io__write_strings_3_p_0(Var_93);
                          }
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                          STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                        }
                      }
                    }
                    else
                    {
                      STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                      STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRvalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));
                MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRvalA_34;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_43;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Op_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word SubRvalB_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 3)));
                MR_Word Category_37;
                MR_String OpStr_38;
                MR_Integer STATE_VARIABLE_N_50_50;
                MR_Word STATE_VARIABLE_DeclSet_51_51;
                MR_Integer STATE_VARIABLE_N_53_53;
                MR_Word STATE_VARIABLE_DeclSet_54_54;
                MR_Word SubRvalA_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalA_126, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_50_50, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_51_51);
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalB_36, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_50_50, &STATE_VARIABLE_N_53_53, STATE_VARIABLE_DeclSet_51_51, &STATE_VARIABLE_DeclSet_54_54);
                backend_libs__c_util__binop_category_string_3_p_0(Op_35, &Category_37, &OpStr_38);
                succeeded = (Category_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                if (succeeded)
                {
                  MR_Word UnboxFloat_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word StaticGroundFloats_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
                  MR_String Var_170 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
                  MR_String Var_171 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
                  MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
                  MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
                  MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
                  MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
                  MR_Word Var_176 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                  MR_Word Var_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word Var_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word Var_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word Var_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word Var_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word Var_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word Var_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word Var_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word Var_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word Var_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word Var_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));
                  MR_String FloatName_115;

                  succeeded = (UnboxFloat_39 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (StaticGroundFloats_117 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_35, SubRvalA_126, SubRvalB_36, &FloatName_115);
                  }
                  if (succeeded)
                  {
                    MR_Word FloatLabel_114;

                    {
                      FloatLabel_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FloatLabel_114, 0) = ((MR_Box) (FloatName_115));
                    }
                    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_114, STATE_VARIABLE_DeclSet_54_54);
                    if (succeeded)
                    {
                      STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                      STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_114, STATE_VARIABLE_DeclSet_54_54, &STATE_VARIABLE_DeclSet_44);
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_53_53);
                      STATE_VARIABLE_N_42 = (STATE_VARIABLE_N_53_53 + (MR_Integer) 1);
                      mercury__io__write_string_3_p_0((MR_String) "static const ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                      mercury__io__write_string_3_p_0(FloatName_115);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalA_126, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      mercury__io__write_string_3_p_0(OpStr_38);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalB_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                    STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                  }
                }
                else
                {
                  STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                  STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word MemRef_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_3_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_3_input_2_MemRef_12 = MemRef_40;
                MR_String next_value_of_tscc_proc_3_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_3_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = STATE_VARIABLE_DeclSet_0_43;

                // direct tailcall eliminated
                tscc_proc_3_input_1_Info_11 = next_value_of_tscc_proc_3_input_1_Info_11;
                tscc_proc_3_input_2_MemRef_12 = next_value_of_tscc_proc_3_input_2_MemRef_12;
                tscc_proc_3_input_3_FirstIndent_13 = next_value_of_tscc_proc_3_input_3_FirstIndent_13;
                tscc_proc_3_input_4_LaterIndent_14 = next_value_of_tscc_proc_3_input_4_LaterIndent_14;
                tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
                tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
                goto top_of_proc_3;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_42;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_44;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_11 = tscc_proc_3_input_1_Info_11;
      MR_Word MemRef_12 = tscc_proc_3_input_2_MemRef_12;
      MR_String FirstIndent_13 = tscc_proc_3_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_3_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_22 = tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
      MR_Integer STATE_VARIABLE_N_23;
      MR_Word STATE_VARIABLE_DeclSet_0_24 = tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
      MR_Word STATE_VARIABLE_DeclSet_25;

      switch (MR_tag((MR_Word) MemRef_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_37;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_18;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 0)));
            MR_Word OffsetRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 2)));
            MR_Integer STATE_VARIABLE_N_28_28;
            MR_Word STATE_VARIABLE_DeclSet_29_29;
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, BaseRval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_22, &STATE_VARIABLE_N_28_28, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_29_29);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            next_value_of_tscc_proc_2_input_2_Rval_12 = OffsetRval_21;
            next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_28_28;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_29_29;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_23;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_25;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_N_33 = tscc_output_1_STATE_VARIABLE_N_33;
    *tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35 = tscc_output_2_STATE_VARIABLE_DeclSet_35;
    return;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_10_p_0(
  MR_Word tscc_proc_3_input_1_Info_11,
  MR_Word tscc_proc_3_input_2_MemRef_12,
  MR_String tscc_proc_3_input_3_FirstIndent_13,
  MR_String tscc_proc_3_input_4_LaterIndent_14,
  MR_Integer tscc_proc_3_input_5_STATE_VARIABLE_N_0_22,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35)
{
  {
    MR_Word tscc_proc_1_input_1_Info_11;
    MR_Word tscc_proc_1_input_2_Lval_12;
    MR_String tscc_proc_1_input_3_FirstIndent_13;
    MR_String tscc_proc_1_input_4_LaterIndent_14;
    MR_Integer tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
    MR_Word tscc_proc_2_input_1_Info_11;
    MR_Word tscc_proc_2_input_2_Rval_12;
    MR_String tscc_proc_2_input_3_FirstIndent_13;
    MR_String tscc_proc_2_input_4_LaterIndent_14;
    MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
    MR_Integer tscc_output_1_STATE_VARIABLE_N_33;
    MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_35;

    // The code for TSCC PROC 3: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0
    // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0
    // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0

    goto top_of_proc_3;
  top_of_proc_1:;
    {
      MR_Word Info_11 = tscc_proc_1_input_1_Info_11;
      MR_Word Lval_12 = tscc_proc_1_input_2_Lval_12;
      MR_String FirstIndent_13 = tscc_proc_1_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_1_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_32 = tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
      MR_Integer STATE_VARIABLE_N_33;
      MR_Word STATE_VARIABLE_DeclSet_0_34 = tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
      MR_Word STATE_VARIABLE_DeclSet_35;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Lval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Lval_12)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 5:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
            STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          }
          break;
        case (MR_Integer) 2:
          {
            STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
            STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 1:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 2:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 3:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_56;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_55;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_53;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_52;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 2)));
                MR_Word FieldNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 3)));
                MR_Integer STATE_VARIABLE_N_45_45;
                MR_Word STATE_VARIABLE_DeclSet_46_46;
                MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, Rval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_32, &STATE_VARIABLE_N_45_45, STATE_VARIABLE_DeclSet_0_34, &STATE_VARIABLE_DeclSet_46_46);
                // direct tailcall eliminated
                next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                next_value_of_tscc_proc_2_input_2_Rval_12 = FieldNum_20;
                next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_45_45;
                next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_46_46;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_51;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word CGlobalVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1)));
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CGlobalVar_31));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_38, STATE_VARIABLE_DeclSet_0_34);
                if (!(succeeded))
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
                  }
                }
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
            case (MR_Integer) 12:
              {
                STATE_VARIABLE_N_33 = STATE_VARIABLE_N_0_32;
                STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_0_34;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_33;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_35;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word Info_11 = tscc_proc_2_input_1_Info_11;
      MR_Word Rval_12 = tscc_proc_2_input_2_Rval_12;
      MR_String FirstIndent_13 = tscc_proc_2_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_2_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_41 = tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
      MR_Integer STATE_VARIABLE_N_42;
      MR_Word STATE_VARIABLE_DeclSet_0_43 = tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
      MR_Word STATE_VARIABLE_DeclSet_44;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_12 = Lval_18;
            MR_String next_value_of_tscc_proc_1_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_1_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = STATE_VARIABLE_DeclSet_0_43;

            // direct tailcall eliminated
            tscc_proc_1_input_1_Info_11 = next_value_of_tscc_proc_1_input_1_Info_11;
            tscc_proc_1_input_2_Lval_12 = next_value_of_tscc_proc_1_input_2_Lval_12;
            tscc_proc_1_input_3_FirstIndent_13 = next_value_of_tscc_proc_1_input_3_FirstIndent_13;
            tscc_proc_1_input_4_LaterIndent_14 = next_value_of_tscc_proc_1_input_4_LaterIndent_14;
            tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32;
            tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34;
            goto top_of_proc_1;
          }
          break;
        case (MR_Integer) 1:
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/10", (MR_String) "var");
              return;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 1)));
            MR_Integer Var_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_21;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_43;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word CodeAddress_24;

                succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 10)));
                if (succeeded)
                {
                  CodeAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_11, CodeAddress_24, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_42, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                }
                else
                {
                  MR_Word DataId_25;
                  MR_Word Var_26;

                  succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 11)));
                  if (succeeded)
                  {
                    DataId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 2)));
                    ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, DataId_25, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_42, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                  }
                  else
                  {
                    MR_Float FloatVal_27;

                    succeeded = ((((MR_tag((MR_Word) Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 0)))) == (MR_Integer) 7)));
                    if (succeeded)
                    {
                      FloatVal_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_23, (MR_Integer) 1)));
                      {
                        MR_Word UnboxedFloat_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                        MR_Word Var_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
                        MR_String Var_128 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
                        MR_String Var_129 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
                        MR_Word Var_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
                        MR_Word Var_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
                        MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
                        MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
                        MR_Word Var_134 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                        MR_Word Var_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                        MR_Word Var_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                        MR_Word Var_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                        MR_Word Var_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                        MR_Word Var_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                        MR_Word Var_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                        MR_Word Var_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                        MR_Word Var_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                        MR_Word Var_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                        MR_Word Var_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                        MR_Word Var_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                        MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));

                        succeeded = (UnboxedFloat_28 == (MR_Integer) 0);
                        if (succeeded)
                          succeeded = (StaticGroundFloats_29 == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_String FloatName_30;
                          MR_Word FloatLabel_31;

                          ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_27, &FloatName_30);
                          {
                            FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), FloatLabel_31, 0) = ((MR_Box) (FloatName_30));
                          }
                          succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_43);
                          if (succeeded)
                          {
                            STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                            STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                          }
                          else
                          {
                            MR_String FloatString_32;
                            MR_Word Var_93;
                            MR_Word Var_96;
                            MR_Word Var_98;
                            MR_Word Var_99;
                            MR_Word Var_101;

                            ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_44);
                            FloatString_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                            ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41);
                            STATE_VARIABLE_N_42 = (STATE_VARIABLE_N_0_41 + (MR_Integer) 1);
                            {
                              Var_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_101, 0) = ((MR_Box) (FloatString_32));
                              MR_hl_field(MR_mktag(1), Var_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                            }
                            {
                              Var_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_99, 0) = ((MR_Box) ((MR_String) " = "));
                              MR_hl_field(MR_mktag(1), Var_99, 1) = ((MR_Box) (Var_101));
                            }
                            {
                              Var_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_98, 0) = ((MR_Box) (FloatName_30));
                              MR_hl_field(MR_mktag(1), Var_98, 1) = ((MR_Box) (Var_99));
                            }
                            {
                              Var_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_96, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                              MR_hl_field(MR_mktag(1), Var_96, 1) = ((MR_Box) (Var_98));
                            }
                            {
                              Var_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_93, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                              MR_hl_field(MR_mktag(1), Var_93, 1) = ((MR_Box) (Var_96));
                            }
                            mercury__io__write_strings_3_p_0(Var_93);
                          }
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                          STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                        }
                      }
                    }
                    else
                    {
                      STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_0_43;
                      STATE_VARIABLE_N_42 = STATE_VARIABLE_N_0_41;
                    }
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRvalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));
                MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRvalA_34;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_43;

                // direct tailcall eliminated
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Op_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word SubRvalB_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 3)));
                MR_Word Category_37;
                MR_String OpStr_38;
                MR_Integer STATE_VARIABLE_N_50_50;
                MR_Word STATE_VARIABLE_DeclSet_51_51;
                MR_Integer STATE_VARIABLE_N_53_53;
                MR_Word STATE_VARIABLE_DeclSet_54_54;
                MR_Word SubRvalA_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2)));

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalA_126, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_41, &STATE_VARIABLE_N_50_50, STATE_VARIABLE_DeclSet_0_43, &STATE_VARIABLE_DeclSet_51_51);
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalB_36, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_50_50, &STATE_VARIABLE_N_53_53, STATE_VARIABLE_DeclSet_51_51, &STATE_VARIABLE_DeclSet_54_54);
                backend_libs__c_util__binop_category_string_3_p_0(Op_35, &Category_37, &OpStr_38);
                succeeded = (Category_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                if (succeeded)
                {
                  MR_Word UnboxFloat_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                  MR_Word StaticGroundFloats_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                  MR_Word Var_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 0)));
                  MR_String Var_170 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 1)));
                  MR_String Var_171 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 2)));
                  MR_Word Var_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 3)));
                  MR_Word Var_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 4)));
                  MR_Word Var_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 5)));
                  MR_Word Var_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 6)));
                  MR_Word Var_176 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                  MR_Word Var_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                  MR_Word Var_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                  MR_Word Var_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                  MR_Word Var_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                  MR_Word Var_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                  MR_Word Var_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                  MR_Word Var_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                  MR_Word Var_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                  MR_Word Var_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                  MR_Word Var_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                  MR_Word Var_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                  MR_Word Var_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 8)));
                  MR_String FloatName_115;

                  succeeded = (UnboxFloat_39 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (StaticGroundFloats_117 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_35, SubRvalA_126, SubRvalB_36, &FloatName_115);
                  }
                  if (succeeded)
                  {
                    MR_Word FloatLabel_114;

                    {
                      FloatLabel_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FloatLabel_114, 0) = ((MR_Box) (FloatName_115));
                    }
                    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_114, STATE_VARIABLE_DeclSet_54_54);
                    if (succeeded)
                    {
                      STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                      STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_114, STATE_VARIABLE_DeclSet_54_54, &STATE_VARIABLE_DeclSet_44);
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_53_53);
                      STATE_VARIABLE_N_42 = (STATE_VARIABLE_N_53_53 + (MR_Integer) 1);
                      mercury__io__write_string_3_p_0((MR_String) "static const ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                      mercury__io__write_string_3_p_0(FloatName_115);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalA_126, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      mercury__io__write_string_3_p_0(OpStr_38);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalB_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                    STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                  }
                }
                else
                {
                  STATE_VARIABLE_DeclSet_44 = STATE_VARIABLE_DeclSet_54_54;
                  STATE_VARIABLE_N_42 = STATE_VARIABLE_N_53_53;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word MemRef_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1)));
                MR_Word next_value_of_tscc_proc_3_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_3_input_2_MemRef_12 = MemRef_40;
                MR_String next_value_of_tscc_proc_3_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_3_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = STATE_VARIABLE_N_0_41;
                MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = STATE_VARIABLE_DeclSet_0_43;

                // direct tailcall eliminated
                tscc_proc_3_input_1_Info_11 = next_value_of_tscc_proc_3_input_1_Info_11;
                tscc_proc_3_input_2_MemRef_12 = next_value_of_tscc_proc_3_input_2_MemRef_12;
                tscc_proc_3_input_3_FirstIndent_13 = next_value_of_tscc_proc_3_input_3_FirstIndent_13;
                tscc_proc_3_input_4_LaterIndent_14 = next_value_of_tscc_proc_3_input_4_LaterIndent_14;
                tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
                tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
                goto top_of_proc_3;
              }
              break;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_42;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_44;
      goto tscc_end;
    }
  top_of_proc_3:;
    {
      MR_Word Info_11 = tscc_proc_3_input_1_Info_11;
      MR_Word MemRef_12 = tscc_proc_3_input_2_MemRef_12;
      MR_String FirstIndent_13 = tscc_proc_3_input_3_FirstIndent_13;
      MR_String LaterIndent_14 = tscc_proc_3_input_4_LaterIndent_14;
      MR_Integer STATE_VARIABLE_N_0_22 = tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
      MR_Integer STATE_VARIABLE_N_23;
      MR_Word STATE_VARIABLE_DeclSet_0_24 = tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
      MR_Word STATE_VARIABLE_DeclSet_25;

      switch (MR_tag((MR_Word) MemRef_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Rval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_37;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_12, (MR_Integer) 0)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_18;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 0)));
            MR_Word OffsetRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 2)));
            MR_Integer STATE_VARIABLE_N_28_28;
            MR_Word STATE_VARIABLE_DeclSet_29_29;
            MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 1)));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, BaseRval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_22, &STATE_VARIABLE_N_28_28, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_29_29);
            // direct tailcall eliminated
            next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            next_value_of_tscc_proc_2_input_2_Rval_12 = OffsetRval_21;
            next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = STATE_VARIABLE_N_28_28;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = STATE_VARIABLE_DeclSet_29_29;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_41 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_41;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_43;
            goto top_of_proc_2;
          }
          break;
      }
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_23;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_25;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_STATE_VARIABLE_N_33 = tscc_output_1_STATE_VARIABLE_N_33;
    *tscc_output_ptr_2_STATE_VARIABLE_DeclSet_35 = tscc_output_2_STATE_VARIABLE_DeclSet_35;
    return;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(
  MR_Float Float_3,
  MR_String * FloatName_4)
{
  {
    MR_String FloatName0_5;
    MR_String FloatName1_6;
    MR_String FloatName2_7;

    FloatName0_5 = backend_libs__c_util__make_float_literal_1_f_0(Float_3);
    mercury__string__replace_all_4_p_0(FloatName0_5, (MR_String) ".", (MR_String) "pt", &FloatName1_6);
    mercury__string__replace_all_4_p_0(FloatName1_6, (MR_String) "+", (MR_String) "plus", &FloatName2_7);
    mercury__string__replace_all_4_p_0(FloatName2_7, (MR_String) "-", (MR_String) "neg", FloatName_4);
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(
  MR_Word Op_5,
  MR_Word Arg1_6,
  MR_Word Arg2_7,
  MR_String * Name_8)
{
  {
    MR_bool succeeded;
    MR_String OpName_9;
    MR_String Arg1Name_10;
    MR_String Arg2Name_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_16;
    MR_Float Float_19;
    MR_Word Var_23;
    MR_Float Float_49;
    MR_Word Var_53;

    switch (MR_tag((MR_Word) Op_5)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(Op_5)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 12:
            {
              OpName_9 = (MR_String) "plus";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              OpName_9 = (MR_String) "minus";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 14:
            {
              OpName_9 = (MR_String) "times";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              OpName_9 = (MR_String) "divide";
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 1)));
        succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (succeeded)
          Float_19 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 1)));
      }
      if (succeeded)
      {
        MR_String FloatName0_26;
        MR_String FloatName1_27;
        MR_String FloatName2_28;

        FloatName0_26 = backend_libs__c_util__make_float_literal_1_f_0(Float_19);
        mercury__string__replace_all_4_p_0(FloatName0_26, (MR_String) ".", (MR_String) "pt", &FloatName1_27);
        mercury__string__replace_all_4_p_0(FloatName1_27, (MR_String) "+", (MR_String) "plus", &FloatName2_28);
        mercury__string__replace_all_4_p_0(FloatName2_28, (MR_String) "-", (MR_String) "neg", &Arg1Name_10);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Op_20;
        MR_Word Arg1_21;
        MR_Word Arg2_22;
        MR_String OpName_39;
        MR_String Arg1Name_40;
        MR_String Arg2Name_41;
        MR_String Var_42;
        MR_String Var_43;
        MR_String Var_44;
        MR_String Var_45;
        MR_String Var_46;

        succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Op_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 1)));
          Arg1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 2)));
          Arg2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 3)));
          succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_20, &OpName_39);
          if (succeeded)
          {
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_21, &Arg1Name_40);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_22, &Arg2Name_41);
              if (succeeded)
              {
                Var_43 = (MR_String) "_";
                Var_46 = (MR_String) "_";
                Var_45 = mercury__string__f_43_43_2_f_0(Var_46, Arg2Name_41);
                Var_44 = mercury__string__f_43_43_2_f_0(Arg1Name_40, Var_45);
                Var_42 = mercury__string__f_43_43_2_f_0(Var_43, Var_44);
                Arg1Name_10 = mercury__string__f_43_43_2_f_0(OpName_39, Var_42);
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 1)));
          succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
            Float_49 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 1)));
        }
        if (succeeded)
        {
          MR_String FloatName0_56;
          MR_String FloatName1_57;
          MR_String FloatName2_58;

          FloatName0_56 = backend_libs__c_util__make_float_literal_1_f_0(Float_49);
          mercury__string__replace_all_4_p_0(FloatName0_56, (MR_String) ".", (MR_String) "pt", &FloatName1_57);
          mercury__string__replace_all_4_p_0(FloatName1_57, (MR_String) "+", (MR_String) "plus", &FloatName2_58);
          mercury__string__replace_all_4_p_0(FloatName2_58, (MR_String) "-", (MR_String) "neg", &Arg2Name_11);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Op_50;
          MR_Word Arg1_51;
          MR_Word Arg2_52;
          MR_String OpName_69;
          MR_String Arg1Name_70;
          MR_String Arg2Name_71;
          MR_String Var_72;
          MR_String Var_73;
          MR_String Var_74;
          MR_String Var_75;
          MR_String Var_76;

          succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Op_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 1)));
            Arg1_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 2)));
            Arg2_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 3)));
            succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_50, &OpName_69);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_51, &Arg1Name_70);
              if (succeeded)
              {
                succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_52, &Arg2Name_71);
                if (succeeded)
                {
                  Var_73 = (MR_String) "_";
                  Var_76 = (MR_String) "_";
                  Var_75 = mercury__string__f_43_43_2_f_0(Var_76, Arg2Name_71);
                  Var_74 = mercury__string__f_43_43_2_f_0(Arg1Name_70, Var_75);
                  Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_74);
                  Arg2Name_11 = mercury__string__f_43_43_2_f_0(OpName_69, Var_72);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
        if (succeeded)
        {
          Var_13 = (MR_String) "_";
          Var_16 = (MR_String) "_";
          Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Arg2Name_11);
          Var_14 = mercury__string__f_43_43_2_f_0(Arg1Name_10, Var_15);
          Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
          *Name_8 = mercury__string__f_43_43_2_f_0(OpName_9, Var_12);
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(
  MR_Word Info_11,
  MR_Word DataId_12,
  MR_String FirstIndent_13,
  MR_String LaterIndent_14,
  MR_Integer STATE_VARIABLE_N_0_29,
  MR_Integer * STATE_VARIABLE_N_30,
  MR_Word STATE_VARIABLE_DeclSet_0_31,
  MR_Word * STATE_VARIABLE_DeclSet_32)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) DataId_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataId_12, (MR_Integer) 0)));
          MR_Word DeclId_27;

          {
            DeclId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeclId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), DeclId_27, 1) = ((MR_Box) (RttiId_26));
          }
          succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(DeclId_27, STATE_VARIABLE_DeclSet_0_31);
          if (succeeded)
          {
            *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
            *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
          }
          else
          {
            ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_27, STATE_VARIABLE_DeclSet_0_31, STATE_VARIABLE_DeclSet_32);
            ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_29);
            *STATE_VARIABLE_N_30 = (STATE_VARIABLE_N_0_29 + (MR_Integer) 1);
            ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_5_p_0(Info_11, RttiId_26, (MR_Integer) 0);
            mercury__io__write_string_3_p_0((MR_String) ";\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
          *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
        }
        break;
      case (MR_Integer) 2:
        {
          *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
          *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DataId_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
              *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word LayoutName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_12, (MR_Integer) 1)));
              MR_Word DeclId_51;

              {
                DeclId_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DeclId_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), DeclId_51, 1) = ((MR_Box) (LayoutName_28));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(DeclId_51, STATE_VARIABLE_DeclSet_0_31);
              if (succeeded)
              {
                *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
                *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
              }
              else
              {
                ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(DeclId_51, STATE_VARIABLE_DeclSet_0_31, STATE_VARIABLE_DeclSet_32);
                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_29);
                *STATE_VARIABLE_N_30 = (STATE_VARIABLE_N_0_29 + (MR_Integer) 1);
                ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(LayoutName_28, (MR_Integer) 0);
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
              *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word DesiredType_8)
{
  {
    MR_bool succeeded;
    MR_Word ActualType_10;

    ll_backend__llds__rval_type_2_p_0(Rval_7, &ActualType_10);
    switch (MR_tag((MR_Word) DesiredType_8)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(DesiredType_8)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            if ((ActualType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) ActualType_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActualType_10, (MR_Integer) 0)));

              switch (Var_36) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            else
              succeeded = MR_FALSE;
            break;
          case (MR_Integer) 11:
            if ((ActualType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) ActualType_10)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), ActualType_10, (MR_Integer) 0)));

              switch (Var_37) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  succeeded = MR_TRUE;
                  break;
                case (MR_Integer) 1:
                  succeeded = MR_TRUE;
                  break;
              }
            }
            else
              succeeded = MR_FALSE;
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_35;

          succeeded = (ActualType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
          {
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), DesiredType_8, (MR_Integer) 0)));
            succeeded = (Var_35 == (MR_Integer) 0);
          }
        }
        break;
    }
    if (!(succeeded))
      succeeded = ll_backend__llds____Unify____llds_type_0_0(ActualType_10, DesiredType_8);
    if (succeeded)
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
    else
    {
      succeeded = (DesiredType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_word_to_float(");
        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        succeeded = (ActualType_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7))));
        if (succeeded)
        {
          succeeded = (DesiredType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11))));
          if (succeeded)
          {
            ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(Info_6, Rval_7, (MR_Integer) 0);
          }
          else
          {
            succeeded = (DesiredType_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9))));
            if (succeeded)
            {
              ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(Info_6, Rval_7, (MR_Integer) 1);
            }
            else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/5", (MR_String) "type error");
                return;
              }
            }
          }
        }
        else
        {
          MR_Integer N_11;
          MR_Word Var_25;
          MR_Word Var_26;

          succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0)));
              Var_26 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(DesiredType_8);
              succeeded = (Var_26 == (MR_Integer) 1);
            }
          }
          if (succeeded)
            mercury__io__write_int_3_p_0(N_11);
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(DesiredType_8);
            mercury__io__write_string_3_p_0((MR_String) ") ");
            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
          }
        }
      }
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_6, (MR_Integer) 0)));
          MR_Word MaybeTag_33;
          MR_Word FieldNumRval_34;
          MR_Word Var_375;

          succeeded = ((((MR_tag((MR_Word) Lval_32)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_32, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            MaybeTag_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_32, (MR_Integer) 1)));
            Var_375 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_32, (MR_Integer) 2)));
            FieldNumRval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_32, (MR_Integer) 3)));
            succeeded = ll_backend__llds____Unify____rval_0_0(Rval_6, Var_375);
          }
          if (succeeded)
          {
            MR_Integer FieldNum_35;
            MR_Word Var_89;

            if ((MaybeTag_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_const_mask_field(");
            }
            else
            {
              MR_Integer Tag_348 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_33, (MR_Integer) 0)));

              mercury__io__write_string_3_p_0((MR_String) "MR_ctfield(");
              mercury__io__write_int_3_p_0(Tag_348);
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_6);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) FieldNumRval_34)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_34, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_34, (MR_Integer) 1)));
              succeeded = ((MR_tag((MR_Word) Var_89)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                FieldNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 0)));
            }
            if (succeeded)
              mercury__io__write_int_3_p_0(FieldNum_35);
            else
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, FieldNumRval_34);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
            ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_32);
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval\'/4", (MR_String) "cannot output a var(_) expression in code");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Tag_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0)));
          MR_Word SubRval_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 1)));
          MR_Integer TypeNum_29;
          MR_Integer CellNum_30;
          MR_Word DataId_28;
          MR_Word Var_100;
          MR_Word Var_101;
          MR_Word Var_102;

          succeeded = ((((MR_tag((MR_Word) SubRval_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRval_27, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRval_27, (MR_Integer) 1)));
            succeeded = ((((MR_tag((MR_Word) Var_100)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_100, (MR_Integer) 0)))) == (MR_Integer) 11)));
            if (succeeded)
            {
              DataId_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_100, (MR_Integer) 1)));
              Var_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_100, (MR_Integer) 2)));
              succeeded = (Var_101 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) DataId_28)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_102 = ((MR_Word) (MR_hl_field(MR_mktag(2), DataId_28, (MR_Integer) 0)));
                  CellNum_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), DataId_28, (MR_Integer) 1)));
                  TypeNum_29 = (MR_Integer) Var_102;
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_TAG_COMMON(");
            mercury__io__write_int_3_p_0(Tag_26);
            mercury__io__write_string_3_p_0((MR_String) ",");
            mercury__io__write_int_3_p_0(TypeNum_29);
            mercury__io__write_string_3_p_0((MR_String) ",");
            mercury__io__write_int_3_p_0(CellNum_30);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Integer Body_31;
            MR_Word Var_114;
            MR_Word Var_115;
            MR_Word Var_116;

            succeeded = ((((MR_tag((MR_Word) SubRval_27)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRval_27, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (succeeded)
            {
              Var_114 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRval_27, (MR_Integer) 1)));
              Var_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRval_27, (MR_Integer) 2)));
              succeeded = (Var_114 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Var_115)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_115, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_116)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                    Body_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_116, (MR_Integer) 0)));
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_tbmkword(");
              mercury__io__write_int_3_p_0(Tag_26);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__io__write_int_3_p_0(Body_31);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_tmkword(");
              mercury__io__write_int_3_p_0(Tag_26);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_27, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer Tag_347 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "MR_tmkword(");
              mercury__io__write_int_3_p_0(Tag_347);
              mercury__io__write_string_3_p_0((MR_String) ", 0)");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Const_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word UnaryOp_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              MR_Word SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));
              MR_String OpString_11;
              MR_Word ArgType_12;

              backend_libs__c_util__unary_prefix_op_2_p_0(UnaryOp_9, &OpString_11);
              mercury__io__write_string_3_p_0(OpString_11);
              mercury__io__write_string_3_p_0((MR_String) "(");
              ll_backend__llds__unop_arg_type_2_p_0(UnaryOp_9, &ArgType_12);
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_10, ArgType_12);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Op_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));
              MR_Word SubRvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3)));
              MR_Word SubRvalA_346 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) Op_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_210;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        Var_210 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]);
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_210);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "&&");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_210);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_1503;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        Var_1503 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]);
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1503);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "||");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1503);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_161;

                        mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                        Var_161 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]);
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_161);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_161);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_nth_code_unit(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_276;
                        MR_String SubRvalAConst_17;
                        MR_Word Var_285;
                        MR_String SubRvalBConst_18;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_276 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_276)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_276, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalAConst_17 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_276, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_276);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_285 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_285)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_285, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalBConst_18 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_285, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_285);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ")");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "==");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "0)");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Var_1796;
                        MR_String SubRvalAConst_1801;
                        MR_Word Var_1807;
                        MR_String SubRvalBConst_1812;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1796 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1796)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1796, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalAConst_1801 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1796, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1796);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1807 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1807)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1807, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalBConst_1812 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1807, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1807);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ")");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "!=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "0)");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_1747;
                        MR_String SubRvalAConst_1752;
                        MR_Word Var_1758;
                        MR_String SubRvalBConst_1763;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1747 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1747)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1747, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalAConst_1752 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1747, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1747);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1758 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1758)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1758, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalBConst_1763 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1758, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1758);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ")");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "0)");
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word Var_1649;
                        MR_String SubRvalAConst_1654;
                        MR_Word Var_1660;
                        MR_String SubRvalBConst_1665;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1649 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1649)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1649, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalAConst_1654 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1649, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1649);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1660 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1660)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1660, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalBConst_1665 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1660, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1660);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ")");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "0)");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word Var_1698;
                        MR_String SubRvalAConst_1703;
                        MR_Word Var_1709;
                        MR_String SubRvalBConst_1714;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1698 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1698)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1698, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalAConst_1703 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1698, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1698);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1709 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1709)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1709, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalBConst_1714 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1709, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1709);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ")");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "0)");
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word Var_1600;
                        MR_String SubRvalAConst_1605;
                        MR_Word Var_1611;
                        MR_String SubRvalBConst_1616;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_346)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1600 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalA_346, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1600)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1600, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalAConst_1605 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1600, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1600);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1611 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRvalB_14, (MR_Integer) 1)));
                          succeeded = ((((MR_tag((MR_Word) Var_1611)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_1611, (MR_Integer) 0)))) == (MR_Integer) 8)));
                          if (succeeded)
                            SubRvalBConst_1616 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_1611, (MR_Integer) 1)));
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1611);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ")");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "0)");
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_strcmp(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Word Var_251;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        Var_251 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[2]);
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_251);
                        mercury__io__write_string_3_p_0((MR_String) " <= ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_251);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "+");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "-");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "*");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "/");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "==");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "!=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 22:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_float_word_bits(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        MR_Word MemRef_25;

                        succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_346, SubRvalB_14, &MemRef_25);
                        if (succeeded)
                        {
                          MR_Word Var_136;

                          mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword_ptr(MR_dword_ptr(");
                          {
                            Var_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_136, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                            MR_hl_field(MR_mktag(3), Var_136, 1) = ((MR_Box) (MemRef_25));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Var_136);
                          mercury__io__write_string_3_p_0((MR_String) "))");
                        }
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_346);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_14);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(((MR_Word) ");
                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_346);
                        mercury__io__write_string_3_p_0((MR_String) ") == ((MR_Word) ");
                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_14);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                    case (MR_Integer) 25:
                    case (MR_Integer) 26:
                      {
                        {
                          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval\'/4", (MR_String) "compound_compare_binop");
                          return;
                        }
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_765;
                    MR_Word IntType_801 = ((MR_Word) (MR_hl_field(MR_mktag(1), Op_13, (MR_Integer) 0)));

                    mercury__io__write_string_3_p_0((MR_String) "(");
                    {
                      Var_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_765, 0) = ((MR_Box) (IntType_801));
                    }
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_765);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "+");
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_765);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_1437;
                    MR_Word IntType_1473 = ((MR_Word) (MR_hl_field(MR_mktag(2), Op_13, (MR_Integer) 0)));

                    mercury__io__write_string_3_p_0((MR_String) "(");
                    {
                      Var_1437 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_1437, 0) = ((MR_Box) (IntType_1473));
                    }
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1437);
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    mercury__io__write_string_3_p_0((MR_String) "-");
                    mercury__io__write_string_3_p_0((MR_String) " ");
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1437);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_1353;
                        MR_Word IntType_1389 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1353 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_1353, 0) = ((MR_Box) (IntType_1389));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1353);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "*");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1353);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_849;
                        MR_Word IntType_885 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_849 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_849, 0) = ((MR_Box) (IntType_885));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_849);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "/");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_849);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_1269;
                        MR_Word IntType_1305 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1269 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_1269, 0) = ((MR_Box) (IntType_1305));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1269);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "%");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1269);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_196;
                        MR_Word IntType_345 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_196 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_196, 0) = ((MR_Box) (IntType_345));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_196);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_1847;
                        MR_Word IntType_1859 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1847 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_1847, 0) = ((MR_Box) (IntType_1859));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1847);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">>");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word IntType_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));
                        MR_Word Var_238;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_238 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_238, 0) = ((MR_Box) (IntType_19));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_238);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "&");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_238);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_396;
                        MR_Word IntType_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_396 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_396, 0) = ((MR_Box) (IntType_432));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_396);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "|");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_396);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word Var_480;
                        MR_Word IntType_516 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_480 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_480, 0) = ((MR_Box) (IntType_516));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_480);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "^");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_480);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word IntType_600 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));
                        MR_Word SubRvalAType_548;
                        MR_Word SubRvalBType_549;

                        ll_backend__llds__rval_type_2_p_0(SubRvalA_346, &SubRvalAType_548);
                        if ((SubRvalAType_548 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
                          succeeded = MR_TRUE;
                        else
                        if (((MR_tag((MR_Word) SubRvalAType_548)) == (MR_mktag((MR_Integer) 1))))
                        {
                          MR_Word Var_544 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubRvalAType_548, (MR_Integer) 0)));

                          succeeded = (Var_544 == (MR_Integer) 1);
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          ll_backend__llds__rval_type_2_p_0(SubRvalB_14, &SubRvalBType_549);
                          if ((SubRvalBType_549 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
                            succeeded = MR_TRUE;
                          else
                          if (((MR_tag((MR_Word) SubRvalBType_549)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word Var_546 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubRvalBType_549, (MR_Integer) 0)));

                            succeeded = (Var_546 == (MR_Integer) 1);
                          }
                          else
                            succeeded = MR_FALSE;
                        }
                        if (succeeded)
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_346);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "==");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_14);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        else
                        {
                          MR_Word Var_564;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          {
                            Var_564 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_564, 0) = ((MR_Box) (IntType_600));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_564);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "==");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_564);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word IntType_1572 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));
                        MR_Word SubRvalAType_1520;
                        MR_Word SubRvalBType_1521;

                        ll_backend__llds__rval_type_2_p_0(SubRvalA_346, &SubRvalAType_1520);
                        if ((SubRvalAType_1520 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
                          succeeded = MR_TRUE;
                        else
                        if (((MR_tag((MR_Word) SubRvalAType_1520)) == (MR_mktag((MR_Integer) 1))))
                        {
                          MR_Word Var_1516 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubRvalAType_1520, (MR_Integer) 0)));

                          succeeded = (Var_1516 == (MR_Integer) 1);
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          ll_backend__llds__rval_type_2_p_0(SubRvalB_14, &SubRvalBType_1521);
                          if ((SubRvalBType_1521 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
                            succeeded = MR_TRUE;
                          else
                          if (((MR_tag((MR_Word) SubRvalBType_1521)) == (MR_mktag((MR_Integer) 1))))
                          {
                            MR_Word Var_1518 = ((MR_Word) (MR_hl_field(MR_mktag(1), SubRvalBType_1521, (MR_Integer) 0)));

                            succeeded = (Var_1518 == (MR_Integer) 1);
                          }
                          else
                            succeeded = MR_FALSE;
                        }
                        if (succeeded)
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_346);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "!=");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_14);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        else
                        {
                          MR_Word Var_1536;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          {
                            Var_1536 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), Var_1536, 0) = ((MR_Box) (IntType_1572));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1536);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "!=");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1536);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        mercury__io__write_string_3_p_0((MR_String) ")[");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        mercury__io__write_string_3_p_0((MR_String) "]");
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Integer N_24 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "MR_offset_streq(");
                        mercury__io__write_int_3_p_0(N_24);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word Var_1185;
                        MR_Word IntType_1221 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_1185, 0) = ((MR_Box) (IntType_1221));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1185);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1185);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word Var_1017;
                        MR_Word IntType_1053 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1017 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_1017, 0) = ((MR_Box) (IntType_1053));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1017);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1017);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word Var_1101;
                        MR_Word IntType_1137 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_1101, 0) = ((MR_Box) (IntType_1137));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_1101);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_1101);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word Var_933;
                        MR_Word IntType_969 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_13, (MR_Integer) 1)));

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_933 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Var_933, 0) = ((MR_Box) (IntType_969));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_346, Var_933);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_14, Var_933);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word MemRef_369 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) MemRef_369)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubRval_353 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_369, (MR_Integer) 0)));
                    MR_Integer SlotNum_37;
                    MR_Word Var_69;

                    mercury__io__write_string_3_p_0((MR_String) "&MR_sv(");
                    succeeded = ((((MR_tag((MR_Word) SubRval_353)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRval_353, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRval_353, (MR_Integer) 1)));
                      succeeded = ((MR_tag((MR_Word) Var_69)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                        SlotNum_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_69, (MR_Integer) 0)));
                    }
                    if (succeeded)
                      mercury__io__write_int_3_p_0(SlotNum_37);
                    else
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_353, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                    }
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubRval_355 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_369, (MR_Integer) 0)));
                    MR_Integer SlotNum_354;
                    MR_Word Var_60;

                    mercury__io__write_string_3_p_0((MR_String) "&MR_fv(");
                    succeeded = ((((MR_tag((MR_Word) SubRval_355)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), SubRval_355, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), SubRval_355, (MR_Integer) 1)));
                      succeeded = ((MR_tag((MR_Word) Var_60)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                        SlotNum_354 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_60, (MR_Integer) 0)));
                    }
                    if (succeeded)
                      mercury__io__write_int_3_p_0(SlotNum_354);
                    else
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_355, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                    }
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BaseRval_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_369, (MR_Integer) 0)));
                    MR_Word MaybeTag_361 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_369, (MR_Integer) 1)));
                    MR_Word FieldNumRval_362 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_369, (MR_Integer) 2)));
                    MR_Integer FieldNum_359;
                    MR_Word Var_51;

                    if ((MaybeTag_361 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      mercury__io__write_string_3_p_0((MR_String) "&MR_mask_field(");
                    }
                    else
                    {
                      MR_Integer Tag_357 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_361, (MR_Integer) 0)));

                      mercury__io__write_string_3_p_0((MR_String) "&MR_tfield(");
                      mercury__io__write_int_3_p_0(Tag_357);
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, BaseRval_38);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    succeeded = ((((MR_tag((MR_Word) FieldNumRval_362)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_362, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_362, (MR_Integer) 1)));
                      succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_mktag((MR_Integer) 1)));
                      if (succeeded)
                        FieldNum_359 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_51, (MR_Integer) 0)));
                    }
                    if (succeeded)
                      mercury__io__write_int_3_p_0(FieldNum_359);
                    else
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, FieldNumRval_362, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                    }
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word IsPtr_8)
{
  {
    MR_bool succeeded;
    MR_Word UnboxFloat_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word StaticGroundFloats_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 0)));
    MR_String Var_28 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 1)));
    MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 2)));
    MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 3)));
    MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 4)));
    MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 5)));
    MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 6)));
    MR_Word Var_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word Var_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word Var_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word Var_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word Var_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word Var_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 8)));
    MR_String FloatName_12;
    MR_Float Float_71;
    MR_Word Var_75;

    succeeded = (UnboxFloat_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (StaticGroundFloats_11 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1)));
          succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_75, (MR_Integer) 0)))) == (MR_Integer) 7)));
          if (succeeded)
            Float_71 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_75, (MR_Integer) 1)));
        }
        if (succeeded)
        {
          MR_String FloatName0_78;
          MR_String FloatName1_79;
          MR_String FloatName2_80;

          FloatName0_78 = backend_libs__c_util__make_float_literal_1_f_0(Float_71);
          mercury__string__replace_all_4_p_0(FloatName0_78, (MR_String) ".", (MR_String) "pt", &FloatName1_79);
          mercury__string__replace_all_4_p_0(FloatName1_79, (MR_String) "+", (MR_String) "plus", &FloatName2_80);
          mercury__string__replace_all_4_p_0(FloatName2_80, (MR_String) "-", (MR_String) "neg", &FloatName_12);
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Op_72;
          MR_Word Arg1_73;
          MR_Word Arg2_74;
          MR_String OpName_91;
          MR_String Arg1Name_92;
          MR_String Arg2Name_93;
          MR_String Var_94;
          MR_String Var_95;
          MR_String Var_96;
          MR_String Var_97;
          MR_String Var_98;

          succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Op_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1)));
            Arg1_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 2)));
            Arg2_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 3)));
            succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_72, &OpName_91);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_73, &Arg1Name_92);
              if (succeeded)
              {
                succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_74, &Arg2Name_93);
                if (succeeded)
                {
                  Var_95 = (MR_String) "_";
                  Var_98 = (MR_String) "_";
                  Var_97 = mercury__string__f_43_43_2_f_0(Var_98, Arg2Name_93);
                  Var_96 = mercury__string__f_43_43_2_f_0(Arg1Name_92, Var_97);
                  Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Var_96);
                  FloatName_12 = mercury__string__f_43_43_2_f_0(OpName_91, Var_94);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
        }
      }
    }
    if (succeeded)
    {
      MR_Word Cast_13;

      switch (IsPtr_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cast_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11));
          break;
        case (MR_Integer) 1:
          Cast_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
          break;
      }
      ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(Cast_13);
      mercury__io__write_string_3_p_0((MR_String) "&mercury_float_const_");
      mercury__io__write_string_3_p_0(FloatName_12);
    }
    else
    {
      switch (IsPtr_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
          }
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "MR_float_to_word(");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(
  MR_Word Info_6,
  MR_Word StackType_7,
  MR_Integer SlotNum_8)
{
  {
    MR_Word Lval_10;

    switch (StackType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer Var_13 = (SlotNum_8 + (MR_Integer) 1);

          {
            Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Var_13));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer Var_15 = (SlotNum_8 + (MR_Integer) 1);

          {
            Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Var_15));
          }
        }
        break;
    }
    mercury__io__write_string_3_p_0((MR_String) "MR_dword_ptr(&(");
    ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_10);
    mercury__io__write_string_3_p_0((MR_String) "))");
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_4_p_0(
  MR_Word Info_5,
  MR_Word Lval_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_succip");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_maxfr");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_curfr");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_hp");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_sp");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sp");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0)));
          MR_Integer Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1)));

          ll_backend__llds_out__llds_out_data__output_reg_4_p_0(Type_8, Num_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0)));
          MR_Integer Num_131 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 1)));

          switch (Type_130) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_tempf");
                mercury__io__write_int_3_p_0(Num_131);
              }
              break;
            case (MR_Integer) 0:
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_tempr");
                mercury__io__write_int_3_p_0(Num_131);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              succeeded = (N_10 <= (MR_Integer) 0);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "stack var out of range");
                  return;
                }
              }
              else
              {
              }
              mercury__io__write_string_3_p_0((MR_String) "MR_sv(");
              mercury__io__write_int_3_p_0(N_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer N_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              succeeded = (N_123 <= (MR_Integer) 0);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "parent stack var out of range");
                  return;
                }
              }
              else
              {
              }
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sv(");
              mercury__io__write_int_3_p_0(N_123);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer N_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              succeeded = (N_124 <= (MR_Integer) 0);
              if (succeeded)
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "frame var out of range");
                  return;
                }
              }
              else
              {
              }
              mercury__io__write_string_3_p_0((MR_String) "MR_fv(");
              mercury__io__write_int_3_p_0(N_124);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word StackType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
              MR_Integer SlotNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));

              mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword_ptr(");
              ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(Info_5, StackType_11, SlotNum_12);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "MR_succip_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_128);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "MR_succfr_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_13);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "MR_redoip_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_127);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "MR_redofr_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_126);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "MR_prevfr_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_125);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word MaybeTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
              MR_Word FieldNumRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 3)));
              MR_Word Rval_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2)));
              MR_Integer FieldNum_17;
              MR_Word Var_48;

              if ((MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_mask_field(");
              }
              else
              {
                MR_Integer Tag_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_14, (MR_Integer) 0)));

                mercury__io__write_string_3_p_0((MR_String) "MR_tfield(");
                mercury__io__write_int_3_p_0(Tag_16);
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_129);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              succeeded = ((((MR_tag((MR_Word) FieldNumRval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), FieldNumRval_15, (MR_Integer) 1)));
                succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                  FieldNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0)));
              }
              if (succeeded)
                mercury__io__write_int_3_p_0(FieldNum_17);
              else
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, FieldNumRval_15);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));

              mercury__io__write_string_3_p_0((MR_String) "* (MR_Word *) (");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_132);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word GlobalVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1)));
              MR_String Var_22;

              Var_22 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_19);
              mercury__io__write_string_3_p_0(Var_22);
            }
            break;
          case (MR_Integer) 12:
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "lvar");
                return;
              }
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Float Float_5;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1)));
      succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if (succeeded)
        Float_5 = MR_unbox_float((MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      MR_String FloatName0_12;
      MR_String FloatName1_13;
      MR_String FloatName2_14;

      FloatName0_12 = backend_libs__c_util__make_float_literal_1_f_0(Float_5);
      mercury__string__replace_all_4_p_0(FloatName0_12, (MR_String) ".", (MR_String) "pt", &FloatName1_13);
      mercury__string__replace_all_4_p_0(FloatName1_13, (MR_String) "+", (MR_String) "plus", &FloatName2_14);
      mercury__string__replace_all_4_p_0(FloatName2_14, (MR_String) "-", (MR_String) "neg", Name_4);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Op_6;
      MR_Word Arg1_7;
      MR_Word Arg2_8;
      MR_String OpName_25;
      MR_String Arg1Name_26;
      MR_String Arg2Name_27;
      MR_String Var_28;
      MR_String Var_29;
      MR_String Var_30;
      MR_String Var_31;
      MR_String Var_32;

      succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Op_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1)));
        Arg1_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2)));
        Arg2_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 3)));
        succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_6, &OpName_25);
        if (succeeded)
        {
          succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_7, &Arg1Name_26);
          if (succeeded)
          {
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_8, &Arg2Name_27);
            if (succeeded)
            {
              Var_29 = (MR_String) "_";
              Var_32 = (MR_String) "_";
              Var_31 = mercury__string__f_43_43_2_f_0(Var_32, Arg2Name_27);
              Var_30 = mercury__string__f_43_43_2_f_0(Arg1Name_26, Var_31);
              Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
              *Name_4 = mercury__string__f_43_43_2_f_0(OpName_25, Var_28);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 12:
            {
              *HeadVar__2_2 = (MR_String) "plus";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 13:
            {
              *HeadVar__2_2 = (MR_String) "minus";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 14:
            {
              *HeadVar__2_2 = (MR_String) "times";
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 15:
            {
              *HeadVar__2_2 = (MR_String) "divide";
              succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_Integer) 1;
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Integer) 0;
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Integer) 1;
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * MemRef_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word LvalA_4;
    MR_Word LvalB_5;
    MR_Integer N_7;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Integer Var_15;
    MR_Integer Var_16;

    if (succeeded)
    {
      LvalA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        LvalB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = ((((MR_tag((MR_Word) LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 1)));
          succeeded = ((((MR_tag((MR_Word) LvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 1)));
            Var_12 = (Var_11 - N_7);
            succeeded = (Var_12 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_16 = (MR_Integer) 1;
              Var_15 = (N_7 + Var_16);
              {
                Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
              }
              {
                Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *MemRef_6 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_13));
              }
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_Box wrapper_arg_3;
    MR_Box closure = closure_arg;
    MR_Integer conv0_LambdaHeadVar__3_62;

    conv0_LambdaHeadVar__3_62 = ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1264__1_2_f_0(((MR_String) wrapper_arg_1), ((MR_Integer) wrapper_arg_2));
    wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_62));
    return wrapper_arg_3;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(
  MR_Word Info_5,
  MR_Word Const_6)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_TRUE");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_FALSE");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Const_6, (MR_Integer) 0)));

          backend_libs__c_util__output_int_expr_cur_stream_3_p_0(N_8);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned N_100 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0)));

          backend_libs__c_util__output_uint_expr_cur_stream_3_p_0(N_100);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int8_t N_101 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int8_expr_cur_stream_3_p_0(N_101);
            }
            break;
          case (MR_Integer) 1:
            {
              uint8_t N_102 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint8_expr_cur_stream_3_p_0(N_102);
            }
            break;
          case (MR_Integer) 2:
            {
              int16_t N_103 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int16_expr_cur_stream_3_p_0(N_103);
            }
            break;
          case (MR_Integer) 3:
            {
              uint16_t N_104 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint16_expr_cur_stream_3_p_0(N_104);
            }
            break;
          case (MR_Integer) 4:
            {
              int32_t N_105 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int32_expr_cur_stream_3_p_0(N_105);
            }
            break;
          case (MR_Integer) 5:
            {
              uint32_t N_106 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint32_expr_cur_stream_3_p_0(N_106);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String Value_9 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Word Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));

              mercury__io__write_char_3_p_0((MR_Char) 40);
              ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(Type_10);
              mercury__io__write_string_3_p_0(Value_9);
              mercury__io__write_char_3_p_0((MR_Char) 41);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float FloatVal_11 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)));
              backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_11);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String String_12 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Integer Var_75;

              mercury__io__write_string_3_p_0((MR_String) "MR_string_const(\"");
              backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(String_12);
              mercury__io__write_string_3_p_0((MR_String) "\", ");
              Var_75 = mercury__string__count_utf8_code_units_1_f_0(String_12);
              mercury__io__write_int_3_p_0(Var_75);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Strings_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Integer Length_17;
              MR_Box conv1_Length_17;

              mercury__io__write_string_3_p_0((MR_String) "MR_string_const(\"");
              backend_libs__c_util__output_quoted_multi_string_cur_stream_3_p_0(Strings_13);
              mercury__io__write_string_3_p_0((MR_String) "\", ");
              conv1_Length_17 = mercury__list__foldl_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds_out__llds_out_data_scalar_common_4[0], Strings_13, ((MR_Box) ((MR_Integer) 0)));
              Length_17 = ((MR_Integer) conv1_Length_17);
              mercury__io__write_int_3_p_0(Length_17);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word CodeAddress_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(CodeAddress_18);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word DataId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));
              MR_Word MaybeOffset_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2)));

              if ((MaybeOffset_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Integer TypeNum_21;
                MR_Integer CellNum_22;
                MR_Word Var_41;

                succeeded = ((MR_tag((MR_Word) DataId_19)) == (MR_mktag((MR_Integer) 2)));
                if (succeeded)
                {
                  Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), DataId_19, (MR_Integer) 0)));
                  CellNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), DataId_19, (MR_Integer) 1)));
                  TypeNum_21 = (MR_Integer) Var_41;
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_COMMON(");
                  mercury__io__write_int_3_p_0(TypeNum_21);
                  mercury__io__write_string_3_p_0((MR_String) ",");
                  mercury__io__write_int_3_p_0(CellNum_22);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                else
                {
                  MR_Word Module_25;
                  MR_String Name_26;
                  MR_Integer Arity_27;
                  MR_Word RttiId_23;
                  MR_Word Ctor_24;

                  succeeded = ((MR_tag((MR_Word) DataId_19)) == (MR_mktag((MR_Integer) 0)));
                  if (succeeded)
                  {
                    RttiId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataId_19, (MR_Integer) 0)));
                    succeeded = backend_libs__rtti__rtti_id_emits_type_ctor_info_2_p_0(RttiId_23, &Ctor_24);
                    if (succeeded)
                    {
                      Module_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 0)));
                      Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 1)));
                      Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 2)));
                      succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(Module_25);
                      if (succeeded)
                        succeeded = backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(Name_26);
                    }
                  }
                  if (succeeded)
                    ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(Module_25, Name_26, Arity_27);
                  else
                  {
                    ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                    ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(Info_5, DataId_19);
                  }
                }
              }
              else
              {
                MR_Integer Offset_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeOffset_20, (MR_Integer) 0)));

                mercury__io__write_string_3_p_0((MR_String) "((");
                ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)));
                ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(Info_5, DataId_19);
                mercury__io__write_string_3_p_0((MR_String) ") + ");
                mercury__io__write_int_3_p_0(Offset_28);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(
  MR_Word Module0_6,
  MR_String Name_7,
  MR_Integer Arity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Module0_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word Module_10;
    MR_String ModuleStr_11;
    MR_String Var_15;

    if (succeeded)
    {
      Var_15 = ((MR_String) (MR_hl_field(MR_mktag(0), Module0_6, (MR_Integer) 0)));
      succeeded = (strcmp(Var_15, (MR_String) "") == 0);
    }
    if (succeeded)
      Module_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    else
      Module_10 = Module0_6;
    ModuleStr_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_10);
    succeeded = (Arity_8 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String Macro_12;
      MR_Integer slot_0;
      MR_String str_1;

      succeeded = (strcmp(ModuleStr_11, (MR_String) "builtin") == 0);
      if (succeeded)
      {
        // hashed string simple lookup switch
        // compute the hash value of the input string
        slot_0 = ((MR_hash_string6(Name_7)) & (MR_Integer) 63);
        // no collisions; no hash chain loop
        // lookup the string for this hash slot
        str_1 = ((&ll_backend__llds_out__llds_out_data_vector_common_1[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_1_0__vct_1_f_0;
        // did we find a match?
        if ((((str_1 != NULL)) && ((strcmp(str_1, Name_7) == 0))))
        {
          // we found a match; look up the results
          Macro_12 = ((&ll_backend__llds_out__llds_out_data_vector_common_1[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_1_0__vct_1_f_1;
          succeeded = MR_TRUE;
          // jump out of search loop
          goto label_0;
        }
        succeeded = MR_FALSE;
      label_0:;
      }
      if (succeeded)
        mercury__io__write_string_3_p_0(Macro_12);
      else
      {
        succeeded = (strcmp(ModuleStr_11, (MR_String) "io") == 0);
        if (succeeded)
          succeeded = (strcmp(Name_7, (MR_String) "state") == 0);
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_IO_CTOR_ADDR");
        }
        else
        {
          succeeded = (strcmp(ModuleStr_11, (MR_String) "bool") == 0);
          if (succeeded)
            succeeded = (strcmp(Name_7, (MR_String) "bool") == 0);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_BOOL_CTOR_ADDR");
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_CTOR0_ADDR(");
            mercury__io__write_string_3_p_0(ModuleStr_11);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__io__write_string_3_p_0(Name_7);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
      }
    }
    else
    {
      succeeded = (Arity_8 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (strcmp(Name_7, (MR_String) "list") == 0);
        if (succeeded)
          succeeded = (strcmp(ModuleStr_11, (MR_String) "list") == 0);
        if (succeeded)
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_LIST_CTOR_ADDR");
        }
        else
        {
          succeeded = (strcmp(Name_7, (MR_String) "private_builtin") == 0);
          if (succeeded)
            succeeded = (strcmp(ModuleStr_11, (MR_String) "type_info") == 0);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_TYPE_INFO_CTOR_ADDR");
          }
          else
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_CTOR1_ADDR(");
            mercury__io__write_string_3_p_0(ModuleStr_11);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            mercury__io__write_string_3_p_0(Name_7);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
        }
      }
      else
      {
        MR_String Var_71;

        mercury__io__write_string_3_p_0((MR_String) "MR_CTOR_ADDR(");
        mercury__io__write_string_3_p_0(ModuleStr_11);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__io__write_string_3_p_0(Name_7);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_data_scalar_common_2[0], Arity_8, &Var_71);
        mercury__io__write_string_3_p_0(Var_71);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(
  MR_Word Info_5,
  MR_Word DataId_6)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "&");
    ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(Info_5, DataId_6);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(
  MR_Word Info_5,
  MR_Word DataId_6)
{
  switch (MR_tag((MR_Word) DataId_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataId_6, (MR_Integer) 0)));

        ll_backend__rtti_out__output_rtti_id_3_p_0(RttiId_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), DataId_6, (MR_Integer) 0)));
        MR_Word TablingId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), DataId_6, (MR_Integer) 1)));
        MR_String Var_31;

        Var_31 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_9, TablingId_10);
        mercury__io__write_string_3_p_0(Var_31);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeNum_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), DataId_6, (MR_Integer) 0)));
        MR_Integer CellNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), DataId_6, (MR_Integer) 1)));
        MR_Integer TypeNum_82 = (MR_Integer) TypeNum_11;
        MR_String Var_84;

        Var_84 = backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_84);
        mercury__io__write_int_3_p_0(TypeNum_82);
        mercury__io__write_string_3_p_0((MR_String) "[");
        mercury__io__write_int_3_p_0(CellNum_12);
        mercury__io__write_string_3_p_0((MR_String) "]");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeNum_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 1)));
            MR_Integer CellNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 2)));

            ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(TypeNum_34, CellNum_35);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 1)));

            ll_backend__layout_out__output_layout_name_3_p_0(LayoutName_13);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 2)));
            MR_Word TableIoEntryMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            MR_Word LayoutSlotName_17;
            MR_String MangledModuleName_18;
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
            MR_String Var_37 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            MR_String Var_38 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
            MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
            MR_Word Var_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
            MR_Word Var_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            MR_Word Var_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            MR_Word Var_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            MR_Word Var_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            MR_Word Var_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            MR_Word Var_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            MR_Word Var_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
            MR_Word Var_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
            MR_Word Var_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
            MR_Word Var_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
            MR_Word Var_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
            MR_Word Var_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
            MR_Word Var_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
            MR_Word Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
            MR_Box conv0_LayoutSlotName_17;
            MR_Word Var_57;
            MR_String Var_58;
            MR_Word Var_59;
            MR_Word Var_60;
            MR_Word Var_61;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_65;
            MR_Word Var_66;
            MR_Word Var_67;
            MR_Word Var_68;
            MR_Word Var_69;
            MR_Word Var_70;
            MR_Word Var_71;
            MR_Word Var_72;
            MR_Word Var_73;
            MR_Word Var_74;
            MR_Word Var_75;
            MR_Word Var_76;
            MR_Word Var_77;

            mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, TableIoEntryMap_16, ((MR_Box) (PredProcId_15)), &conv0_LayoutSlotName_17);
            LayoutSlotName_17 = ((MR_Word) conv0_LayoutSlotName_17);
            Var_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 0)));
            MangledModuleName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1)));
            Var_58 = ((MR_String) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 2)));
            Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 3)));
            Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 4)));
            Var_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5)));
            Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 6)));
            Var_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
            Var_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
            Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
            Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
            Var_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
            Var_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
            Var_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
            Var_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
            Var_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
            Var_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
            Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
            Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
            Var_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
            Var_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
            Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 8)));
            ll_backend__layout_out__output_layout_slot_id_5_p_0((MR_Integer) 1, MangledModuleName_18, LayoutSlotName_17);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer CellNum_6)
{
  {
    MR_Integer TypeNum_5 = (MR_Integer) HeadVar__1_1;
    MR_String Var_10;

    Var_10 = backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_10);
    mercury__io__write_int_3_p_0(TypeNum_5);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__io__write_int_3_p_0(CellNum_6);
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(
  MR_Word LLDSType_4)
{
  {
    mercury__io__write_string_3_p_0((MR_String) "(");
    ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(LLDSType_4);
    mercury__io__write_string_3_p_0((MR_String) ") ");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_4_p_0(
  MR_Word RegType_5,
  MR_Integer N_6)
{
  {
    MR_String Var_10;

    Var_10 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_5, N_6);
    mercury__io__write_string_3_p_0(Var_10);
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__3_3;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          succeeded = (N_2 <= (MR_Integer) 1024);
          if (succeeded)
          {
            MR_String Var_19;
            MR_String Var_20;

            Var_20 = mercury__string__int_to_string_1_f_0(N_2);
            Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) ")");
            HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", Var_19);
          }
          else
          {
            MR_Box conv0_HeadVar__3_3;

            conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "llds_out_data.m", (MR_String) "function \140ll_backend.llds_out.llds_out_data.reg_to_string\'/2", (MR_String) "register number too large");
            HeadVar__3_3 = ((MR_String) conv0_HeadVar__3_3);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          succeeded = (N_2 <= (MR_Integer) 32);
          if (succeeded)
          {
            MR_String Var_7;

            Var_7 = mercury__string__int_to_string_1_f_0(N_2);
            HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", Var_7);
          }
          else
          {
            succeeded = (N_2 <= (MR_Integer) 1024);
            if (succeeded)
            {
              MR_String Var_10;
              MR_String Var_11;

              Var_11 = mercury__string__int_to_string_1_f_0(N_2);
              Var_10 = mercury__string__f_43_43_2_f_0(Var_11, (MR_String) ")");
              HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", Var_10);
            }
            else
            {
              MR_Box conv1_HeadVar__3_3;

              conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "llds_out_data.m", (MR_String) "function \140ll_backend.llds_out.llds_out_data.reg_to_string\'/2", (MR_String) "register number too large");
              HeadVar__3_3 = ((MR_String) conv1_HeadVar__3_3);
            }
          }
        }
        break;
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_String EnvVarName_3 = (MR_String) HeadVar__1_1;

    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", EnvVarName_3);
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(
  MR_Word HeadVar__1_1)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least8_t");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least8_t");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least16_t");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least16_t");
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least32_t");
          }
          break;
        case (MR_Integer) 6:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least32_t");
          }
          break;
        case (MR_Integer) 7:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Float");
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_String");
          }
          break;
        case (MR_Integer) 9:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word *");
          }
          break;
        case (MR_Integer) 10:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Code *");
          }
          break;
        case (MR_Integer) 11:
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

        switch (Var_112) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
            }
            break;
          case (MR_Integer) 4:
            {
              mercury__io__write_string_3_p_0((MR_String) "int16_t");
            }
            break;
          case (MR_Integer) 6:
            {
              mercury__io__write_string_3_p_0((MR_String) "int32_t");
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__io__write_string_3_p_0((MR_String) "int8_t");
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
            }
            break;
          case (MR_Integer) 5:
            {
              mercury__io__write_string_3_p_0((MR_String) "uint16_t");
            }
            break;
          case (MR_Integer) 7:
            {
              mercury__io__write_string_3_p_0((MR_String) "uint32_t");
            }
            break;
          case (MR_Integer) 3:
            {
              mercury__io__write_string_3_p_0((MR_String) "uint8_t");
            }
            break;
        }
      }
      break;
  }
}

void mercury__ll_backend__llds_out__llds_out_data__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_data__init_type_tables(void)
{
}

void mercury__ll_backend__llds_out__llds_out_data__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__llds_out__llds_out_data__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.llds_out.llds_out_data.
