/*
** Automatically generated from `llds_out_data.m'
** by the Mercury compiler,
** version rotd-2019-11-19
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


// :- module ll_backend.llds_out.llds_out_data.
// :- implementation.

/*
INIT mercury__ll_backend__llds_out__llds_out_data__init
ENDINIT
*/

#include "ll_backend.llds_out.llds_out_data.mih"


#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "parse_tree.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.layout_out.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.rtti_out.mih"
#include "mdbcomp.builtin_modules.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1410__1_2_f_0(
  MR_String LambdaHeadVar__1_60,
  MR_Integer LambdaHeadVar__2_61);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(
  MR_Word Test_6,
  MR_Word * Rval_7,
  MR_Word * Ptag_8,
  MR_Unsigned * Stag_9,
  MR_Word * Negated_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word Rval_6,
  MR_Word Ptag_7,
  MR_Unsigned * Stag_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word Test_5,
  MR_Word * Rval_6,
  MR_Word * Ptag_7,
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
  MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_64,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66,
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
ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(
  uint64_t UInt64_3,
  MR_String * UInt64Name_4);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(
  int64_t Int64_3,
  MR_String * Int64Name_4);

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
ll_backend__llds_out__llds_out_data__output_uint64_rval_as_word_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_uint64_rval_as_data_ptr_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_int64_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word IsPtr_8);

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
  uint16_t Arity_8);

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

/* sealed */ struct ll_backend__llds_out__llds_out_data__vector_common_type_6_0_s {
  const MR_Word ll_backend__llds_out__llds_out_data__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_6_0_s ll_backend__llds_out__llds_out_data_vector_common_6[10];



static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_2[3][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 2 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
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
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};


static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_1_0_s ll_backend__llds_out__llds_out_data_vector_common_1[64] = {
  /* row 0 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 1 */
  {
    (MR_String) "string",
    (MR_String) "MR_STRING_CTOR_ADDR"
  },
  /* row 2 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    (MR_String) ((MR_Integer) 0)
  },
  /* row 6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
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
    (MR_String) ((MR_Integer) 0)
  },
  /* row 10 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 11 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 13 */
  {
    (MR_String) "uint8",
    (MR_String) "MR_UINT8_CTOR_ADDR"
  },
  /* row 14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 15 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 16 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 17 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 18 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 19 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 20 */
  {
    (MR_String) "uint",
    (MR_String) "MR_UINT_CTOR_ADDR"
  },
  /* row 21 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 22 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 23 */
  {
    (MR_String) "int8",
    (MR_String) "MR_INT8_CTOR_ADDR"
  },
  /* row 24 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 25 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 26 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 27 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 28 */
  {
    (MR_String) "uint64",
    (MR_String) "MR_UINT64_CTOR_ADDR"
  },
  /* row 29 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 30 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 31 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 32 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 33 */
  {
    (MR_String) "uint16",
    (MR_String) "MR_UINT16_CTOR_ADDR"
  },
  /* row 34 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 35 */
  {
    (MR_String) "float",
    (MR_String) "MR_FLOAT_CTOR_ADDR"
  },
  /* row 36 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 37 */
  {
    (MR_String) "int32",
    (MR_String) "MR_INT32_CTOR_ADDR"
  },
  /* row 38 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 39 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 40 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 41 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 42 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 43 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 44 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 45 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 46 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 47 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 48 */
  {
    (MR_String) "int64",
    (MR_String) "MR_INT64_CTOR_ADDR"
  },
  /* row 49 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 50 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 51 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 52 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 53 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 54 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 55 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 56 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 57 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 58 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 59 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 60 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 61 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 62 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row 63 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_6_0_s ll_backend__llds_out__llds_out_data_vector_common_6[10] = {
  /* row 0 */   {     (MR_Integer) 1 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 1 },
  /* row 8 */   {     (MR_Integer) 0 },
  /* row 9 */   {     (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1410__1_2_f_0(
  MR_String LambdaHeadVar__1_60,
  MR_Integer LambdaHeadVar__2_61)
{
  {
    MR_Integer LambdaHeadVar__3_62;
    MR_Integer Var_63;
    MR_Integer Var_64;

    Var_64 = mercury__string__count_utf8_code_units_1_f_0(LambdaHeadVar__1_60);
    Var_63 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__2_61 + (MR_Unsigned) Var_64);
    LambdaHeadVar__3_62 = (MR_Integer) ((MR_Unsigned) Var_63 + (MR_Unsigned) 1);
    return LambdaHeadVar__3_62;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer TypeNum_4 = (MR_Integer) (HeadVar__1_1);
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

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__int64_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
    int64_t Int64_5;
    MR_Word Var_6;
    MR_String Int64Name0_9;
    MR_String Var_10;
    MR_String Var_11;

    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
      if (succeeded)
      {
        Int64_5 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 1)));
        Int64Name0_9 = mercury__string__int64_to_string_1_f_0(Int64_5);
        Var_10 = (MR_String) "-";
        Var_11 = (MR_String) "neg";
        mercury__string__replace_all_4_p_0(Int64Name0_9, Var_10, Var_11, Name_4);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(
  MR_Word LLDSType_3)
{
  {
    MR_Word DirectFieldIntConstant_4;

    switch (MR_tag((MR_Word) LLDSType_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        DirectFieldIntConstant_4 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        DirectFieldIntConstant_4 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word IntType_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), LLDSType_3, (MR_Integer) 0))) & (MR_Integer) 15);

          DirectFieldIntConstant_4 = ((&ll_backend__llds_out__llds_out_data_vector_common_6[0 + IntType_6]))->ll_backend__llds_out__llds_out_data__vector_common_type_6_0__vct_6_f_0;
        }
        break;
    }
    return DirectFieldIntConstant_4;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_ptag_3_p_0(
  MR_Word Ptag_4)
{
  {
    uint8_t PtagUint8_17;

    mercury__io__write_string_3_p_0((MR_String) "MR_mktag(");
    PtagUint8_17 = (uint8_t) (Ptag_4);
    mercury__io__write_uint8_3_p_0(PtagUint8_17);
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

      succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
        InnerTest_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
        succeeded = (Var_31 == (MR_Word) ((MR_Unsigned) 16U));
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
        MR_Word Ptag_16;
        MR_Word Negated_17;

        succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Test_6, &Rval_15, &Ptag_16, &Negated_17);
        if (succeeded)
        {
          switch (Negated_17) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TEST(");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TESTR(");
              break;
          }
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_15);
          mercury__io__write_string_3_p_0((MR_String) ",");
          ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_16);
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
        else
        {
          MR_Word Rval_148;
          MR_Word Ptag_149;
          MR_Word Negated_150;
          MR_Word Var_51;
          MR_Word InnerTest_118;

          succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
            InnerTest_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
            succeeded = (Var_51 == (MR_Word) ((MR_Unsigned) 16U));
            if (succeeded)
              succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(InnerTest_118, &Rval_148, &Ptag_149, &Negated_150);
          }
          if (succeeded)
          {
            switch (Negated_150) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TESTR(");
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TEST(");
                break;
            }
            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_148);
            mercury__io__write_string_3_p_0((MR_String) ",");
            ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_149);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Unsigned Stag_19;
            MR_Word Rval_143;
            MR_Word Ptag_144;
            MR_Word Right_18;
            MR_Word Var_62;
            MR_Word Var_63;
            MR_Word Left_119;
            MR_Word Var_155;

            succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
              Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
              Left_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
              Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 3))));
              succeeded = (Var_62 == (MR_Word) ((MR_Unsigned) 0U));
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
              ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_144);
              mercury__io__write_string_3_p_0((MR_String) ",");
              mercury__io__write_uint_3_p_0(Stag_19);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              MR_Word Rval_136;
              MR_Word Ptag_137;
              MR_Unsigned Stag_140;
              MR_Word Var_75;
              MR_Word Var_76;
              MR_Word Var_77;
              MR_Word Left_120;
              MR_Word InnerTest_121;
              MR_Word Right_122;
              MR_Word Var_156;

              succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
              if (succeeded)
              {
                Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
                InnerTest_121 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
                succeeded = (Var_75 == (MR_Word) ((MR_Unsigned) 16U));
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) InnerTest_121)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 0)))) == (MR_Integer) 4)));
                  if (succeeded)
                  {
                    Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 1))));
                    Left_120 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 2))));
                    Right_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), InnerTest_121, (MR_Integer) 3))));
                    succeeded = (Var_76 == (MR_Word) ((MR_Unsigned) 0U));
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
                ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_137);
                mercury__io__write_string_3_p_0((MR_String) ",");
                mercury__io__write_uint_3_p_0(Stag_140);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_Word Rval_130;
                MR_Word Ptag_131;
                MR_Word Negated_132;
                MR_Unsigned Stag_133;

                succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(Test_6, &Rval_130, &Ptag_131, &Stag_133, &Negated_132);
                if (succeeded)
                {
                  switch (Negated_132) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TEST(");
                      break;
                    case (MR_Integer) 1:
                      mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TESTR(");
                      break;
                  }
                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_130);
                  mercury__io__write_string_3_p_0((MR_String) ",");
                  ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_131);
                  mercury__io__write_string_3_p_0((MR_String) ",");
                  mercury__io__write_uint_3_p_0(Stag_133);
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
                else
                {
                  MR_Word Rval_125;
                  MR_Word Ptag_126;
                  MR_Word Negated_127;
                  MR_Unsigned Stag_128;
                  MR_Word Var_102;
                  MR_Word InnerTest_123;

                  succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (succeeded)
                  {
                    Var_102 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
                    InnerTest_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
                    succeeded = (Var_102 == (MR_Word) ((MR_Unsigned) 16U));
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(InnerTest_123, &Rval_125, &Ptag_126, &Stag_128, &Negated_127);
                  }
                  if (succeeded)
                  {
                    switch (Negated_127) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TESTR(");
                        break;
                      case (MR_Integer) 1:
                        mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TEST(");
                        break;
                    }
                    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_125);
                    mercury__io__write_string_3_p_0((MR_String) ",");
                    ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_126);
                    mercury__io__write_string_3_p_0((MR_String) ",");
                    mercury__io__write_uint_3_p_0(Stag_128);
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, Test_6, (MR_Word) ((MR_Unsigned) 0U));
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
  MR_Word * Ptag_8,
  MR_Unsigned * Stag_9,
  MR_Word * Negated_10)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word Op_11;
    MR_Word Right_12;
    MR_Integer StagInt_13;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Word Var_18;
    MR_Word Var_19;

    if (succeeded)
    {
      Op_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
      *Rval_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
      Right_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 3))));
      succeeded = ((MR_tag((MR_Word) Right_12)) == (MR_Integer) 2);
      if (succeeded)
      {
        *Ptag_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Right_12, (MR_Integer) 0))));
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Right_12, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 1))));
          Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_16, (MR_Integer) 2))));
          succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 8U));
          if (succeeded)
          {
            succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_18, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
              if (succeeded)
              {
                StagInt_13 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                succeeded = mercury__uint__from_int_2_p_0(StagInt_13, Stag_9);
                if (succeeded)
                {
                  if (((((MR_tag((MR_Word) Op_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
                  {
                    *Negated_10 = (MR_Integer) 0;
                    succeeded = MR_TRUE;
                  }
                  else
                  if (((((MR_tag((MR_Word) Op_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
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
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word Rval_6,
  MR_Word Ptag_7,
  MR_Unsigned * Stag_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word Left_9;
    MR_Word Right_10;
    MR_Word Zero_11;
    MR_Integer StagInt_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_Word Var_21;
    uint8_t Var_24;
    uint8_t Var_25;

    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 1))));
      Left_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 2))));
      Right_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 3))));
      succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
      if (succeeded)
      {
        Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Var_13, (MR_Integer) 1))) & (MR_Integer) 15);
        succeeded = (Var_14 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Left_9)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Left_9, (MR_Integer) 0))));
            succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1))));
              Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 2))));
              Zero_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 3))));
              succeeded = ll_backend__llds____Unify____rval_0_0(Rval_6, Var_20);
              if (succeeded)
              {
                succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_16, (MR_Integer) 0))));
                  Var_24 = (uint8_t) (Ptag_7);
                  Var_25 = (uint8_t) (Var_21);
                  succeeded = (Var_24 == Var_25);
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Zero_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Zero_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Zero_11, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Var_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
                        succeeded = (Var_18 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Right_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Right_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Right_10, (MR_Integer) 1))));
                            succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              StagInt_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 0))));
                              succeeded = mercury__uint__from_int_2_p_0(StagInt_12, Stag_8);
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word Test_5,
  MR_Word * Rval_6,
  MR_Word * Ptag_7,
  MR_Word * Negated_8)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word Op_9;
    MR_Word Left_10;
    MR_Word Right_11;
    MR_Integer PtagInt_12;
    uint8_t PtagUint8_13;
    MR_Word Var_16;
    MR_Word Var_17;

    if (succeeded)
    {
      Op_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 1))));
      Left_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 2))));
      Right_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_5, (MR_Integer) 3))));
      succeeded = ((((MR_tag((MR_Word) Left_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Left_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Left_10, (MR_Integer) 1))));
        *Rval_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Left_10, (MR_Integer) 2))));
        succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Right_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Right_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Right_11, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
            if (succeeded)
            {
              PtagInt_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_17, (MR_Integer) 0))));
              succeeded = mercury__uint8__from_int_2_p_0(PtagInt_12, &PtagUint8_13);
              if (succeeded)
              {
                *Ptag_7 = (MR_Word) (PtagUint8_13);
                if (((((MR_tag((MR_Word) Op_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_9, (MR_Integer) 0)))) == (MR_Integer) 8))))
                {
                  *Negated_8 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                if (((((MR_tag((MR_Word) Op_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_9, (MR_Integer) 0)))) == (MR_Integer) 9))))
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
    MR_bool succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
    MR_Word Op_11;
    MR_Word Right_12;
    MR_Word Var_13;

    if (succeeded)
    {
      Op_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 1))));
      *Left_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 2))));
      Right_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Test_6, (MR_Integer) 3))));
      succeeded = ((((MR_tag((MR_Word) Right_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Right_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Right_12, (MR_Integer) 1))));
        succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
        if (succeeded)
        {
          *RightConst_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
          switch (MR_tag((MR_Word) Op_11)) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0))))) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 8:
                  {
                    MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
                    MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
                    MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
                    MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
                    MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
                    MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
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
      ;
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
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DeclSet_10 = STATE_VARIABLE_DeclSet_0_9;
      *STATE_VARIABLE_N_8 = STATE_VARIABLE_N_0_7;
    }
    else
    {
      MR_Word Rval_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Rvals_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

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
        Var_46 = (MR_Integer) ((MR_Unsigned) Count_4 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
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
          MR_Word RegType_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer RegNum_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

          *HeadVar__2_2 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_3, RegNum_4);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
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
              MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
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
              MR_Integer N_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
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
              MR_Word Type_20 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
              MR_String Macro_23;
              MR_Integer Var_31;
              MR_String Var_35;
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
              Var_31 = (MR_Integer) ((MR_Unsigned) N_21 + (MR_Unsigned) 1);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_2[0]), Var_31, &Var_35);
              Var_42 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) ")");
              Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_42);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_2[0]), N_21, &Var_45);
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
    if ((ActualType_8 == (MR_Word) ((MR_Unsigned) 0U)))
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) ActualType_8)) == (MR_Integer) 2))
    {
      MR_Word Var_28 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_8, (MR_Integer) 0))) & (MR_Integer) 15);

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
      succeeded = ll_backend__llds____Unify____llds_type_0_0(ActualType_8, (MR_Word) ((MR_Unsigned) 20U));
    if (succeeded)
      ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_6);
    else
    {
      succeeded = (ActualType_8 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
        {
          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_as_word\'/4", (MR_String) "float");
          return;
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
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_succip_word");
            }
            break;
          case (MR_Integer) 1:
            {
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_maxfr_word");
            }
            break;
          case (MR_Integer) 2:
            {
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_curfr_word");
            }
            break;
          case (MR_Integer) 3:
            {
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_hp_word");
            }
            break;
          case (MR_Integer) 4:
            {
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_sp_word");
            }
            break;
          case (MR_Integer) 5:
            {
              *Type_8 = (MR_Word) ((MR_Unsigned) 12U);
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sp");
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RegType_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Num_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Lval_7, (MR_Integer) 1))));

          switch (RegType_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *Type_8 = (MR_Word) ((MR_Unsigned) 4U);
              break;
            case (MR_Integer) 0:
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              break;
          }
          ll_backend__llds_out__llds_out_data__output_reg_4_p_0(RegType_10, Num_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word RegType_127 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Num_128 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Lval_7, (MR_Integer) 1))));

          switch (RegType_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *Type_8 = (MR_Word) ((MR_Unsigned) 4U);
                mercury__io__write_string_3_p_0((MR_String) "MR_tempf");
                mercury__io__write_int_3_p_0(Num_128);
              }
              break;
            case (MR_Integer) 0:
              {
                *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
                mercury__io__write_string_3_p_0((MR_String) "MR_tempr");
                mercury__io__write_int_3_p_0(Num_128);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = (N_12 < (MR_Integer) 0);
              if (succeeded)
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "stack var out of range");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "MR_sv(");
              mercury__io__write_int_3_p_0(N_12);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer N_120 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = (N_120 < (MR_Integer) 0);
              if (succeeded)
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "parent stack var out of range");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sv(");
              mercury__io__write_int_3_p_0(N_120);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer N_121 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              succeeded = (N_121 <= (MR_Integer) 0);
              if (succeeded)
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "frame var out of range");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "MR_fv(");
              mercury__io__write_int_3_p_0(N_121);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word StackType_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer SlotNum_14 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 2))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 4U);
              mercury__io__write_string_3_p_0((MR_String) "* (MR_Float *) ");
              ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(Info_6, StackType_13, SlotNum_14);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_succip_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_125);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_succfr_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_15);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_124 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_redoip_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_124);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_123 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_redofr_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_123);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_3_p_0((MR_String) "MR_prevfr_slot_word(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_122);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word MaybePtag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
              MR_Word FieldNumRval_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 3))));
              MR_Word Rval_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 2))));
              MR_Integer FieldNum_19;
              MR_Word Var_47;

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              if ((MaybePtag_16 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__io__write_string_3_p_0((MR_String) "MR_mask_field(");
              else
              {
                MR_Word Ptag_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_16, (MR_Integer) 0))));

                mercury__io__write_string_3_p_0((MR_String) "MR_tfield(");
                ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_18);
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_126);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              succeeded = ((((MR_tag((MR_Word) FieldNumRval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldNumRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldNumRval_17, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
                if (succeeded)
                  FieldNum_19 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0))));
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
              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_6, Lval_7);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word GlobalVar_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_7, (MR_Integer) 1))));
              MR_String Var_25;

              *Type_8 = (MR_Word) ((MR_Unsigned) 20U);
              Var_25 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_22);
              mercury__io__write_string_3_p_0(Var_25);
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "lvar");
              return;
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
    MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
    MR_Word tscc_proc_3_input_1_Info_11;
    MR_Word tscc_proc_3_input_2_MemRef_12;
    MR_String tscc_proc_3_input_3_FirstIndent_13;
    MR_String tscc_proc_3_input_4_LaterIndent_14;
    MR_Integer tscc_proc_3_input_5_STATE_VARIABLE_N_0_22;
    MR_Word tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24;
    MR_Integer tscc_output_1_STATE_VARIABLE_N_33;
    MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_35;

    // The code for TSCC PROC 1: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0
    ;
    // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0
    ;
    // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0
    ;
    ;
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 0))))) {
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
                MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_56;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_55;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_53;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_52;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 2))));
                MR_Word FieldNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_N_45_45;
                MR_Word STATE_VARIABLE_DeclSet_46_46;
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, Rval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_32, &STATE_VARIABLE_N_45_45, STATE_VARIABLE_DeclSet_0_34, &STATE_VARIABLE_DeclSet_46_46);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                next_value_of_tscc_proc_2_input_2_Rval_12 = FieldNum_20;
                next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_45_45;
                next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_46_46;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_51;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word CGlobalVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CGlobalVar_31));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_38, STATE_VARIABLE_DeclSet_0_34);
                if (!(succeeded))
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
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
      MR_Integer STATE_VARIABLE_N_0_64 = tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
      MR_Integer STATE_VARIABLE_N_65;
      MR_Word STATE_VARIABLE_DeclSet_0_66 = tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
      MR_Word STATE_VARIABLE_DeclSet_67;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_12 = Lval_18;
            MR_String next_value_of_tscc_proc_1_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_1_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = STATE_VARIABLE_DeclSet_0_66;

            // direct tailcall eliminated
            ;
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
            mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/10", (MR_String) "var");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_364 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_364;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Const_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Const_21)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          int64_t Int64Val_31 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedInt64s_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                          MR_Word StaticGroundInt64s_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);

                          succeeded = (UnboxedInt64s_32 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundInt64s_33 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word Int64Label_34;

                            {
                              Int64Label_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Int64Label_34, 0) = MR_box_int64(Int64Val_31);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Int64Label_34, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String Int64Name_35;
                              MR_String Int64String_36;
                              MR_Word Var_126;
                              MR_Word Var_129;
                              MR_Word Var_131;
                              MR_Word Var_132;
                              MR_Word Var_134;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Int64Label_34, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_31, &Int64Name_35);
                              Int64String_36 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_31);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Int64String_36));
                                MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
                              }
                              {
                                Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Int64Name_35));
                                MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
                              }
                              {
                                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_String) "mercury_int64_const_"));
                                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
                              }
                              {
                                Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) "static const int64_t "));
                                MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                              }
                              mercury__io__write_strings_3_p_0(Var_126);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          uint64_t UInt64Val_37 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedInt64s_166 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                          MR_Word StaticGroundInt64s_167 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);

                          succeeded = (UnboxedInt64s_166 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundInt64s_167 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word UInt64Label_38;

                            {
                              UInt64Label_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), UInt64Label_38, 0) = MR_box_uint64(UInt64Val_37);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(UInt64Label_38, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String UInt64Name_39;
                              MR_String UInt64String_40;
                              MR_Word Var_110;
                              MR_Word Var_113;
                              MR_Word Var_115;
                              MR_Word Var_116;
                              MR_Word Var_118;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_38, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_37, &UInt64Name_39);
                              UInt64String_40 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_37);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (UInt64String_40));
                                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
                              }
                              {
                                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (UInt64Name_39));
                                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                              }
                              {
                                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) ((MR_String) "mercury_uint64_const_"));
                                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
                              }
                              {
                                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) "static const uint64_t "));
                                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
                              }
                              mercury__io__write_strings_3_p_0(Var_110);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Float FloatVal_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedFloat_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
                          MR_Word StaticGroundFloats_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);

                          succeeded = (UnboxedFloat_26 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundFloats_27 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_String FloatName_28;
                            MR_Word FloatLabel_29;

                            ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_25, &FloatName_28);
                            {
                              FloatLabel_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), FloatLabel_29, 0) = ((MR_Box) (FloatName_28));
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_29, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String FloatString_30;
                              MR_Word Var_142;
                              MR_Word Var_145;
                              MR_Word Var_147;
                              MR_Word Var_148;
                              MR_Word Var_150;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_29, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              FloatString_30 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_25);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (FloatString_30));
                                MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
                              }
                              {
                                Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (FloatName_28));
                                MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
                              }
                              {
                                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_147));
                              }
                              {
                                Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                                MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_145));
                              }
                              mercury__io__write_strings_3_p_0(Var_142);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word CodeAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1))));

                          ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_11, CodeAddress_22, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_65, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          MR_Word DataId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1))));

                          ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, DataId_23, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_65, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubRval_365 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_365;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Op_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                MR_Word SubRvalA_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word SubRvalB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 3))));
                MR_Word Category_60;
                MR_String OpStr_61;
                MR_Integer STATE_VARIABLE_N_73_73;
                MR_Word STATE_VARIABLE_DeclSet_74_74;
                MR_Integer STATE_VARIABLE_N_76_76;
                MR_Word STATE_VARIABLE_DeclSet_77_77;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalA_58, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_73_73, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_74_74);
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalB_59, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_73_73, &STATE_VARIABLE_N_76_76, STATE_VARIABLE_DeclSet_74_74, &STATE_VARIABLE_DeclSet_77_77);
                backend_libs__c_util__binop_category_string_3_p_0(Op_57, &Category_60, &OpStr_61);
                succeeded = (Category_60 == (MR_Word) ((MR_Unsigned) 32U));
                if (succeeded)
                {
                  MR_Word UnboxFloat_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
                  MR_Word StaticGroundFloats_171 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
                  MR_String FloatName_169;

                  succeeded = (UnboxFloat_62 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (StaticGroundFloats_171 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_57, SubRvalA_58, SubRvalB_59, &FloatName_169);
                  }
                  if (succeeded)
                  {
                    MR_Word FloatLabel_168;

                    {
                      FloatLabel_168 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FloatLabel_168, 0) = ((MR_Box) (FloatName_169));
                    }
                    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_168, STATE_VARIABLE_DeclSet_77_77);
                    if (succeeded)
                    {
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_168, STATE_VARIABLE_DeclSet_77_77, &STATE_VARIABLE_DeclSet_67);
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_76_76);
                      STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_76_76 + (MR_Unsigned) 1);
                      mercury__io__write_string_3_p_0((MR_String) "static const ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                      mercury__io__write_string_3_p_0(FloatName_169);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalA_58, (MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      mercury__io__write_string_3_p_0(OpStr_61);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalB_59, (MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                    STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                  }
                }
                else
                {
                  STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                  STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_3_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_3_input_2_MemRef_12 = MemRef_63;
                MR_String next_value_of_tscc_proc_3_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_3_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
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
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_65;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_67;
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
            MR_Word Rval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_37;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_18;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseRval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 0))));
            MR_Word OffsetRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_N_28_28;
            MR_Word STATE_VARIABLE_DeclSet_29_29;
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, BaseRval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_22, &STATE_VARIABLE_N_28_28, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_29_29);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            next_value_of_tscc_proc_2_input_2_Rval_12 = OffsetRval_21;
            next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_28_28;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_29_29;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
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
  MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_64,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_33,
  MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66,
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
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0
    ;
    // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0
    ;
    // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0
    ;
    ;
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 0))))) {
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
                MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_56;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_55;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_53;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_52;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 2))));
                MR_Word FieldNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_N_45_45;
                MR_Word STATE_VARIABLE_DeclSet_46_46;
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, Rval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_32, &STATE_VARIABLE_N_45_45, STATE_VARIABLE_DeclSet_0_34, &STATE_VARIABLE_DeclSet_46_46);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                next_value_of_tscc_proc_2_input_2_Rval_12 = FieldNum_20;
                next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_45_45;
                next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_46_46;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_51;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word CGlobalVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CGlobalVar_31));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_38, STATE_VARIABLE_DeclSet_0_34);
                if (!(succeeded))
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
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
      MR_Integer STATE_VARIABLE_N_0_64 = tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
      MR_Integer STATE_VARIABLE_N_65;
      MR_Word STATE_VARIABLE_DeclSet_0_66 = tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
      MR_Word STATE_VARIABLE_DeclSet_67;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_12 = Lval_18;
            MR_String next_value_of_tscc_proc_1_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_1_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = STATE_VARIABLE_DeclSet_0_66;

            // direct tailcall eliminated
            ;
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
            mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/10", (MR_String) "var");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_364 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_364;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Const_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Const_21)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          int64_t Int64Val_31 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedInt64s_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                          MR_Word StaticGroundInt64s_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);

                          succeeded = (UnboxedInt64s_32 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundInt64s_33 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word Int64Label_34;

                            {
                              Int64Label_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Int64Label_34, 0) = MR_box_int64(Int64Val_31);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Int64Label_34, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String Int64Name_35;
                              MR_String Int64String_36;
                              MR_Word Var_126;
                              MR_Word Var_129;
                              MR_Word Var_131;
                              MR_Word Var_132;
                              MR_Word Var_134;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Int64Label_34, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_31, &Int64Name_35);
                              Int64String_36 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_31);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Int64String_36));
                                MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
                              }
                              {
                                Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Int64Name_35));
                                MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
                              }
                              {
                                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_String) "mercury_int64_const_"));
                                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
                              }
                              {
                                Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) "static const int64_t "));
                                MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                              }
                              mercury__io__write_strings_3_p_0(Var_126);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          uint64_t UInt64Val_37 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedInt64s_166 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                          MR_Word StaticGroundInt64s_167 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);

                          succeeded = (UnboxedInt64s_166 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundInt64s_167 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word UInt64Label_38;

                            {
                              UInt64Label_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), UInt64Label_38, 0) = MR_box_uint64(UInt64Val_37);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(UInt64Label_38, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String UInt64Name_39;
                              MR_String UInt64String_40;
                              MR_Word Var_110;
                              MR_Word Var_113;
                              MR_Word Var_115;
                              MR_Word Var_116;
                              MR_Word Var_118;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_38, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_37, &UInt64Name_39);
                              UInt64String_40 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_37);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (UInt64String_40));
                                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
                              }
                              {
                                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (UInt64Name_39));
                                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                              }
                              {
                                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) ((MR_String) "mercury_uint64_const_"));
                                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
                              }
                              {
                                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) "static const uint64_t "));
                                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
                              }
                              mercury__io__write_strings_3_p_0(Var_110);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Float FloatVal_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedFloat_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
                          MR_Word StaticGroundFloats_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);

                          succeeded = (UnboxedFloat_26 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundFloats_27 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_String FloatName_28;
                            MR_Word FloatLabel_29;

                            ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_25, &FloatName_28);
                            {
                              FloatLabel_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), FloatLabel_29, 0) = ((MR_Box) (FloatName_28));
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_29, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String FloatString_30;
                              MR_Word Var_142;
                              MR_Word Var_145;
                              MR_Word Var_147;
                              MR_Word Var_148;
                              MR_Word Var_150;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_29, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              FloatString_30 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_25);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (FloatString_30));
                                MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
                              }
                              {
                                Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (FloatName_28));
                                MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
                              }
                              {
                                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_147));
                              }
                              {
                                Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                                MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_145));
                              }
                              mercury__io__write_strings_3_p_0(Var_142);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word CodeAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1))));

                          ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_11, CodeAddress_22, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_65, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          MR_Word DataId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1))));

                          ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, DataId_23, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_65, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubRval_365 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_365;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Op_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                MR_Word SubRvalA_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word SubRvalB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 3))));
                MR_Word Category_60;
                MR_String OpStr_61;
                MR_Integer STATE_VARIABLE_N_73_73;
                MR_Word STATE_VARIABLE_DeclSet_74_74;
                MR_Integer STATE_VARIABLE_N_76_76;
                MR_Word STATE_VARIABLE_DeclSet_77_77;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalA_58, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_73_73, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_74_74);
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalB_59, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_73_73, &STATE_VARIABLE_N_76_76, STATE_VARIABLE_DeclSet_74_74, &STATE_VARIABLE_DeclSet_77_77);
                backend_libs__c_util__binop_category_string_3_p_0(Op_57, &Category_60, &OpStr_61);
                succeeded = (Category_60 == (MR_Word) ((MR_Unsigned) 32U));
                if (succeeded)
                {
                  MR_Word UnboxFloat_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
                  MR_Word StaticGroundFloats_171 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
                  MR_String FloatName_169;

                  succeeded = (UnboxFloat_62 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (StaticGroundFloats_171 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_57, SubRvalA_58, SubRvalB_59, &FloatName_169);
                  }
                  if (succeeded)
                  {
                    MR_Word FloatLabel_168;

                    {
                      FloatLabel_168 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FloatLabel_168, 0) = ((MR_Box) (FloatName_169));
                    }
                    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_168, STATE_VARIABLE_DeclSet_77_77);
                    if (succeeded)
                    {
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_168, STATE_VARIABLE_DeclSet_77_77, &STATE_VARIABLE_DeclSet_67);
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_76_76);
                      STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_76_76 + (MR_Unsigned) 1);
                      mercury__io__write_string_3_p_0((MR_String) "static const ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                      mercury__io__write_string_3_p_0(FloatName_169);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalA_58, (MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      mercury__io__write_string_3_p_0(OpStr_61);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalB_59, (MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                    STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                  }
                }
                else
                {
                  STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                  STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_3_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_3_input_2_MemRef_12 = MemRef_63;
                MR_String next_value_of_tscc_proc_3_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_3_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
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
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_65;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_67;
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
            MR_Word Rval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_37;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_18;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseRval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 0))));
            MR_Word OffsetRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_N_28_28;
            MR_Word STATE_VARIABLE_DeclSet_29_29;
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, BaseRval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_22, &STATE_VARIABLE_N_28_28, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_29_29);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            next_value_of_tscc_proc_2_input_2_Rval_12 = OffsetRval_21;
            next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_28_28;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_29_29;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
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
    MR_Integer tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
    MR_Word tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
    MR_Integer tscc_output_1_STATE_VARIABLE_N_33;
    MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_35;

    // The code for TSCC PROC 3: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/10-0
    ;
    // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/10-0
    ;
    // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/10-0
    ;
    ;
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 0))))) {
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
                MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_56;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_55;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 7:
              {
                MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_53;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 8:
              {
                MR_Word Rval_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_52;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 9:
              {
                MR_Word Rval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 2))));
                MR_Word FieldNum_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 3))));
                MR_Integer STATE_VARIABLE_N_45_45;
                MR_Word STATE_VARIABLE_DeclSet_46_46;
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, Rval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_32, &STATE_VARIABLE_N_45_45, STATE_VARIABLE_DeclSet_0_34, &STATE_VARIABLE_DeclSet_46_46);
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                next_value_of_tscc_proc_2_input_2_Rval_12 = FieldNum_20;
                next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_45_45;
                next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_46_46;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 10:
              {
                MR_Word Rval_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_51;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_32;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_34;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 11:
              {
                MR_Word CGlobalVar_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_12, (MR_Integer) 1))));
                MR_Word Var_38;

                {
                  Var_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_38, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                  MR_hl_field(MR_mktag(3), Var_38, 1) = ((MR_Box) (CGlobalVar_31));
                }
                succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_38, STATE_VARIABLE_DeclSet_0_34);
                if (!(succeeded))
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
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
      MR_Integer STATE_VARIABLE_N_0_64 = tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
      MR_Integer STATE_VARIABLE_N_65;
      MR_Word STATE_VARIABLE_DeclSet_0_66 = tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
      MR_Word STATE_VARIABLE_DeclSet_67;
      MR_bool succeeded;

      switch (MR_tag((MR_Word) Rval_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Lval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_1_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_1_input_2_Lval_12 = Lval_18;
            MR_String next_value_of_tscc_proc_1_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_1_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_N_0_32 = STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_DeclSet_0_34 = STATE_VARIABLE_DeclSet_0_66;

            // direct tailcall eliminated
            ;
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
            mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/10", (MR_String) "var");
            return;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word SubRval_364 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_12, (MR_Integer) 1))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_364;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Const_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) Const_21)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(Const_21)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                    }
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 3:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 5:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          int64_t Int64Val_31 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedInt64s_32 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                          MR_Word StaticGroundInt64s_33 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);

                          succeeded = (UnboxedInt64s_32 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundInt64s_33 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word Int64Label_34;

                            {
                              Int64Label_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Int64Label_34, 0) = MR_box_int64(Int64Val_31);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Int64Label_34, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String Int64Name_35;
                              MR_String Int64String_36;
                              MR_Word Var_126;
                              MR_Word Var_129;
                              MR_Word Var_131;
                              MR_Word Var_132;
                              MR_Word Var_134;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(Int64Label_34, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_31, &Int64Name_35);
                              Int64String_36 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_31);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_134 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_134, 0) = ((MR_Box) (Int64String_36));
                                MR_hl_field(MR_mktag(1), Var_134, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_132 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_132, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_132, 1) = ((MR_Box) (Var_134));
                              }
                              {
                                Var_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_131, 0) = ((MR_Box) (Int64Name_35));
                                MR_hl_field(MR_mktag(1), Var_131, 1) = ((MR_Box) (Var_132));
                              }
                              {
                                Var_129 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_129, 0) = ((MR_Box) ((MR_String) "mercury_int64_const_"));
                                MR_hl_field(MR_mktag(1), Var_129, 1) = ((MR_Box) (Var_131));
                              }
                              {
                                Var_126 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_126, 0) = ((MR_Box) ((MR_String) "static const int64_t "));
                                MR_hl_field(MR_mktag(1), Var_126, 1) = ((MR_Box) (Var_129));
                              }
                              mercury__io__write_strings_3_p_0(Var_126);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 7:
                        {
                          uint64_t UInt64Val_37 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedInt64s_166 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                          MR_Word StaticGroundInt64s_167 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);

                          succeeded = (UnboxedInt64s_166 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundInt64s_167 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word UInt64Label_38;

                            {
                              UInt64Label_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(2), UInt64Label_38, 0) = MR_box_uint64(UInt64Val_37);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(UInt64Label_38, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String UInt64Name_39;
                              MR_String UInt64String_40;
                              MR_Word Var_110;
                              MR_Word Var_113;
                              MR_Word Var_115;
                              MR_Word Var_116;
                              MR_Word Var_118;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_38, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_37, &UInt64Name_39);
                              UInt64String_40 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_37);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_118 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_118, 0) = ((MR_Box) (UInt64String_40));
                                MR_hl_field(MR_mktag(1), Var_118, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_116, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_116, 1) = ((MR_Box) (Var_118));
                              }
                              {
                                Var_115 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_115, 0) = ((MR_Box) (UInt64Name_39));
                                MR_hl_field(MR_mktag(1), Var_115, 1) = ((MR_Box) (Var_116));
                              }
                              {
                                Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) ((MR_String) "mercury_uint64_const_"));
                                MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_115));
                              }
                              {
                                Var_110 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_110, 0) = ((MR_Box) ((MR_String) "static const uint64_t "));
                                MR_hl_field(MR_mktag(1), Var_110, 1) = ((MR_Box) (Var_113));
                              }
                              mercury__io__write_strings_3_p_0(Var_110);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 9:
                        {
                          MR_Float FloatVal_25 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1)));
                          MR_Word UnboxedFloat_26 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
                          MR_Word StaticGroundFloats_27 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);

                          succeeded = (UnboxedFloat_26 == (MR_Integer) 0);
                          if (succeeded)
                            succeeded = (StaticGroundFloats_27 == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_String FloatName_28;
                            MR_Word FloatLabel_29;

                            ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_25, &FloatName_28);
                            {
                              FloatLabel_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(MR_mktag(0), FloatLabel_29, 0) = ((MR_Box) (FloatName_28));
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_29, STATE_VARIABLE_DeclSet_0_66);
                            if (succeeded)
                            {
                              STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                              STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                            }
                            else
                            {
                              MR_String FloatString_30;
                              MR_Word Var_142;
                              MR_Word Var_145;
                              MR_Word Var_147;
                              MR_Word Var_148;
                              MR_Word Var_150;

                              ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_29, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                              FloatString_30 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_25);
                              ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64);
                              STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_64 + (MR_Unsigned) 1);
                              {
                                Var_150 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_150, 0) = ((MR_Box) (FloatString_30));
                                MR_hl_field(MR_mktag(1), Var_150, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_5[0])));
                              }
                              {
                                Var_148 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_148, 0) = ((MR_Box) ((MR_String) " = "));
                                MR_hl_field(MR_mktag(1), Var_148, 1) = ((MR_Box) (Var_150));
                              }
                              {
                                Var_147 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_147, 0) = ((MR_Box) (FloatName_28));
                                MR_hl_field(MR_mktag(1), Var_147, 1) = ((MR_Box) (Var_148));
                              }
                              {
                                Var_145 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_145, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                                MR_hl_field(MR_mktag(1), Var_145, 1) = ((MR_Box) (Var_147));
                              }
                              {
                                Var_142 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), Var_142, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                                MR_hl_field(MR_mktag(1), Var_142, 1) = ((MR_Box) (Var_145));
                              }
                              mercury__io__write_strings_3_p_0(Var_142);
                            }
                          }
                          else
                          {
                            STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                            STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          }
                        }
                        break;
                      case (MR_Integer) 10:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 11:
                        {
                          STATE_VARIABLE_N_65 = STATE_VARIABLE_N_0_64;
                          STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_0_66;
                        }
                        break;
                      case (MR_Integer) 12:
                        {
                          MR_Word CodeAddress_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1))));

                          ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(Info_11, CodeAddress_22, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_65, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          MR_Word DataId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_21, (MR_Integer) 1))));

                          ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(Info_11, DataId_23, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_65, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_67);
                        }
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubRval_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_54;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubRval_365 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = SubRval_365;
                MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
                tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
                tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
                tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
                tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
                tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
                tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
                goto top_of_proc_2;
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Op_57 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                MR_Word SubRvalA_58 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 2))));
                MR_Word SubRvalB_59 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 3))));
                MR_Word Category_60;
                MR_String OpStr_61;
                MR_Integer STATE_VARIABLE_N_73_73;
                MR_Word STATE_VARIABLE_DeclSet_74_74;
                MR_Integer STATE_VARIABLE_N_76_76;
                MR_Word STATE_VARIABLE_DeclSet_77_77;

                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalA_58, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_64, &STATE_VARIABLE_N_73_73, STATE_VARIABLE_DeclSet_0_66, &STATE_VARIABLE_DeclSet_74_74);
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, SubRvalB_59, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_73_73, &STATE_VARIABLE_N_76_76, STATE_VARIABLE_DeclSet_74_74, &STATE_VARIABLE_DeclSet_77_77);
                backend_libs__c_util__binop_category_string_3_p_0(Op_57, &Category_60, &OpStr_61);
                succeeded = (Category_60 == (MR_Word) ((MR_Unsigned) 32U));
                if (succeeded)
                {
                  MR_Word UnboxFloat_62 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
                  MR_Word StaticGroundFloats_171 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_11, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
                  MR_String FloatName_169;

                  succeeded = (UnboxFloat_62 == (MR_Integer) 0);
                  if (succeeded)
                  {
                    succeeded = (StaticGroundFloats_171 == (MR_Integer) 1);
                    if (succeeded)
                      succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_57, SubRvalA_58, SubRvalB_59, &FloatName_169);
                  }
                  if (succeeded)
                  {
                    MR_Word FloatLabel_168;

                    {
                      FloatLabel_168 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), FloatLabel_168, 0) = ((MR_Box) (FloatName_169));
                    }
                    succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(FloatLabel_168, STATE_VARIABLE_DeclSet_77_77);
                    if (succeeded)
                    {
                      STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                      STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                    }
                    else
                    {
                      ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(FloatLabel_168, STATE_VARIABLE_DeclSet_77_77, &STATE_VARIABLE_DeclSet_67);
                      ll_backend__llds_out__llds_out_util__output_indent_5_p_0(FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_76_76);
                      STATE_VARIABLE_N_65 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_76_76 + (MR_Unsigned) 1);
                      mercury__io__write_string_3_p_0((MR_String) "static const ");
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                      mercury__io__write_string_3_p_0(FloatName_169);
                      mercury__io__write_string_3_p_0((MR_String) " = ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalA_58, (MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      mercury__io__write_string_3_p_0(OpStr_61);
                      mercury__io__write_string_3_p_0((MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_11, SubRvalB_59, (MR_Word) ((MR_Unsigned) 4U));
                      mercury__io__write_string_3_p_0((MR_String) ";\n");
                    }
                  }
                  else
                  {
                    STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                    STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                  }
                }
                else
                {
                  STATE_VARIABLE_DeclSet_67 = STATE_VARIABLE_DeclSet_77_77;
                  STATE_VARIABLE_N_65 = STATE_VARIABLE_N_76_76;
                }
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word MemRef_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_12, (MR_Integer) 1))));
                MR_Word next_value_of_tscc_proc_3_input_1_Info_11 = Info_11;
                MR_Word next_value_of_tscc_proc_3_input_2_MemRef_12 = MemRef_63;
                MR_String next_value_of_tscc_proc_3_input_3_FirstIndent_13 = FirstIndent_13;
                MR_String next_value_of_tscc_proc_3_input_4_LaterIndent_14 = LaterIndent_14;
                MR_Integer next_value_of_tscc_proc_3_input_5_STATE_VARIABLE_N_0_22 = STATE_VARIABLE_N_0_64;
                MR_Word next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_DeclSet_0_24 = STATE_VARIABLE_DeclSet_0_66;

                // direct tailcall eliminated
                ;
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
      tscc_output_1_STATE_VARIABLE_N_33 = STATE_VARIABLE_N_65;
      tscc_output_2_STATE_VARIABLE_DeclSet_35 = STATE_VARIABLE_DeclSet_67;
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
            MR_Word Rval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_37;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Rval_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_12, (MR_Integer) 0))));
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12 = Rval_18;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_0_22;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_0_24;

            // direct tailcall eliminated
            ;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
            goto top_of_proc_2;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word BaseRval_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 0))));
            MR_Word OffsetRval_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_12, (MR_Integer) 2))));
            MR_Integer STATE_VARIABLE_N_28_28;
            MR_Word STATE_VARIABLE_DeclSet_29_29;
            MR_Word next_value_of_tscc_proc_2_input_1_Info_11;
            MR_Word next_value_of_tscc_proc_2_input_2_Rval_12;
            MR_String next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            MR_String next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            MR_Integer next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            MR_Word next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;

            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(Info_11, BaseRval_19, FirstIndent_13, LaterIndent_14, STATE_VARIABLE_N_0_22, &STATE_VARIABLE_N_28_28, STATE_VARIABLE_DeclSet_0_24, &STATE_VARIABLE_DeclSet_29_29);
            // direct tailcall eliminated
            ;
            next_value_of_tscc_proc_2_input_1_Info_11 = Info_11;
            next_value_of_tscc_proc_2_input_2_Rval_12 = OffsetRval_21;
            next_value_of_tscc_proc_2_input_3_FirstIndent_13 = FirstIndent_13;
            next_value_of_tscc_proc_2_input_4_LaterIndent_14 = LaterIndent_14;
            next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = STATE_VARIABLE_N_28_28;
            next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = STATE_VARIABLE_DeclSet_29_29;
            tscc_proc_2_input_1_Info_11 = next_value_of_tscc_proc_2_input_1_Info_11;
            tscc_proc_2_input_2_Rval_12 = next_value_of_tscc_proc_2_input_2_Rval_12;
            tscc_proc_2_input_3_FirstIndent_13 = next_value_of_tscc_proc_2_input_3_FirstIndent_13;
            tscc_proc_2_input_4_LaterIndent_14 = next_value_of_tscc_proc_2_input_4_LaterIndent_14;
            tscc_proc_2_input_5_STATE_VARIABLE_N_0_64 = next_value_of_tscc_proc_2_input_5_STATE_VARIABLE_N_0_64;
            tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_DeclSet_0_66;
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
ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(
  uint64_t UInt64_3,
  MR_String * UInt64Name_4)
{
  *UInt64Name_4 = mercury__string__uint64_to_string_1_f_0(UInt64_3);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(
  int64_t Int64_3,
  MR_String * Int64Name_4)
{
  {
    MR_String Int64Name0_5;

    Int64Name0_5 = mercury__string__int64_to_string_1_f_0(Int64_3);
    mercury__string__replace_all_4_p_0(Int64Name0_5, (MR_String) "-", (MR_String) "neg", Int64Name_4);
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
      succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_23)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_23, (MR_Integer) 0)))) == (MR_Integer) 9)));
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

        succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Op_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 1))));
          Arg1_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 2))));
          Arg2_22 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg1_6, (MR_Integer) 3))));
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
        succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_53)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_53, (MR_Integer) 0)))) == (MR_Integer) 9)));
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

          succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            Op_50 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 1))));
            Arg1_51 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 2))));
            Arg2_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Arg2_7, (MR_Integer) 3))));
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
          MR_Word RttiId_26 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataId_12, (MR_Integer) 0))));
          MR_Word DeclId_27;

          {
            DeclId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), DeclId_27, 0) = ((MR_Box) ((MR_Unsigned) 2U));
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
            *STATE_VARIABLE_N_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_29 + (MR_Unsigned) 1);
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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DataId_12, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *STATE_VARIABLE_N_30 = STATE_VARIABLE_N_0_29;
              *STATE_VARIABLE_DeclSet_32 = STATE_VARIABLE_DeclSet_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word LayoutName_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DataId_12, (MR_Integer) 1))));
              MR_Word DeclId_51;

              {
                DeclId_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), DeclId_51, 0) = ((MR_Box) ((MR_Unsigned) 3U));
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
                *STATE_VARIABLE_N_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_29 + (MR_Unsigned) 1);
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
            if ((ActualType_10 == (MR_Word) ((MR_Unsigned) 20U)))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) ActualType_10)) == (MR_Integer) 2))
            {
              MR_Word Var_64 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_10, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (Var_64) {
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
          case (MR_Integer) 5:
            if ((ActualType_10 == (MR_Word) ((MR_Unsigned) 0U)))
              succeeded = MR_TRUE;
            else
            if (((MR_tag((MR_Word) ActualType_10)) == (MR_Integer) 2))
            {
              MR_Word Var_65 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_10, (MR_Integer) 0))) & (MR_Integer) 15);

              switch (Var_65) {
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
      case (MR_Integer) 2:
        {
          MR_Word Var_63;

          succeeded = (ActualType_10 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_63 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), DesiredType_8, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (Var_63 == (MR_Integer) 0);
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
      succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        mercury__io__write_string_3_p_0((MR_String) "MR_word_to_float(");
        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
        mercury__io__write_string_3_p_0((MR_String) ")");
      }
      else
      {
        succeeded = (ActualType_10 == (MR_Word) ((MR_Unsigned) 4U));
        if (succeeded)
        {
          succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 20U));
          if (succeeded)
            ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(Info_6, Rval_7, (MR_Integer) 0);
          else
          {
            succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 12U));
            if (succeeded)
              ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(Info_6, Rval_7, (MR_Integer) 1);
            else
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/5", (MR_String) "type error");
                return;
              }
          }
        }
        else
        {
          MR_Word Var_25;

          succeeded = ((MR_tag((MR_Word) DesiredType_8)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_25 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), DesiredType_8, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (Var_25 == (MR_Integer) 8);
          }
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_word_to_int64(");
            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Word Var_31;

            succeeded = ((MR_tag((MR_Word) ActualType_10)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_31 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_10, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (Var_31 == (MR_Integer) 8);
            }
            if (succeeded)
            {
              succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 20U));
              if (succeeded)
                ll_backend__llds_out__llds_out_data__output_int64_rval_5_p_0(Info_6, Rval_7, (MR_Integer) 0);
              else
              {
                succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 12U));
                if (succeeded)
                  ll_backend__llds_out__llds_out_data__output_int64_rval_5_p_0(Info_6, Rval_7, (MR_Integer) 1);
                else
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/5", (MR_String) "type error");
                    return;
                  }
              }
            }
            else
            {
              MR_Word Var_37;

              succeeded = ((MR_tag((MR_Word) DesiredType_8)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_37 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), DesiredType_8, (MR_Integer) 0))) & (MR_Integer) 15);
                succeeded = (Var_37 == (MR_Integer) 9);
              }
              if (succeeded)
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_word_to_uint64(");
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
              else
              {
                MR_Word Var_43;

                succeeded = ((MR_tag((MR_Word) ActualType_10)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_43 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), ActualType_10, (MR_Integer) 0))) & (MR_Integer) 15);
                  succeeded = (Var_43 == (MR_Integer) 9);
                }
                if (succeeded)
                {
                  succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 20U));
                  if (succeeded)
                    ll_backend__llds_out__llds_out_data__output_uint64_rval_as_word_4_p_0(Info_6, Rval_7);
                  else
                  {
                    succeeded = (DesiredType_8 == (MR_Word) ((MR_Unsigned) 12U));
                    if (succeeded)
                      ll_backend__llds_out__llds_out_data__output_uint64_rval_as_data_ptr_4_p_0(Info_6, Rval_7);
                    else
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/5", (MR_String) "type error");
                        return;
                      }
                  }
                }
                else
                {
                  MR_Integer N_11;
                  MR_Word Var_49;

                  succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      N_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0))));
                      if (((MR_tag((MR_Word) DesiredType_8)) == (MR_Integer) 2))
                      {
                        MR_Word IntType_98 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), DesiredType_8, (MR_Integer) 0))) & (MR_Integer) 15);

                        switch (IntType_98) {
                          default:
                            succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 0:
                          case (MR_Integer) 4:
                          case (MR_Integer) 6:
                          case (MR_Integer) 2:
                          case (MR_Integer) 1:
                          case (MR_Integer) 5:
                          case (MR_Integer) 7:
                          case (MR_Integer) 3:
                            succeeded = MR_TRUE;
                            break;
                        }
                      }
                      else
                      if (((MR_tag((MR_Word) DesiredType_8)) == (MR_Integer) 1))
                        succeeded = MR_TRUE;
                      else
                        succeeded = MR_FALSE;
                    }
                  }
                  if (succeeded)
                    mercury__io__write_int_3_p_0(N_11);
                  else
                  {
                    mercury__io__write_string_3_p_0((MR_String) "(");
                    ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(DesiredType_8);
                    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
                    mercury__io__write_string_3_p_0((MR_String) ")");
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
          MR_Word Lval_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Rval_6, (MR_Integer) 0))));
          MR_Word MaybePtag_36;
          MR_Word FieldNumRval_37;
          MR_Word Var_413;

          succeeded = ((((MR_tag((MR_Word) Lval_35)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_35, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            MaybePtag_36 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_35, (MR_Integer) 1))));
            Var_413 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_35, (MR_Integer) 2))));
            FieldNumRval_37 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_35, (MR_Integer) 3))));
            succeeded = ll_backend__llds____Unify____rval_0_0(Rval_6, Var_413);
          }
          if (succeeded)
          {
            MR_Integer FieldNum_38;
            MR_Word Var_92;

            if ((MaybePtag_36 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_3_p_0((MR_String) "MR_const_mask_field(");
            else
            {
              MR_Word Ptag_386 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_36, (MR_Integer) 0))));

              mercury__io__write_string_3_p_0((MR_String) "MR_ctfield(");
              ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_386);
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_6);
            mercury__io__write_string_3_p_0((MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) FieldNumRval_37)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldNumRval_37, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_92 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldNumRval_37, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_92)) == (MR_Integer) 1);
              if (succeeded)
                FieldNum_38 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_92, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_3_p_0(FieldNum_38);
            else
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, FieldNumRval_37);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
            ll_backend__llds_out__llds_out_data__output_lval_4_p_0(Info_5, Lval_35);
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval\'/4", (MR_String) "cannot output a var(_) expression in code");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Ptag_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 0))));
          MR_Word SubRval_384 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Rval_6, (MR_Integer) 1))));
          MR_Integer TypeNum_32;
          MR_Integer CellNum_33;
          MR_Word DataId_31;
          MR_Word Var_103;
          MR_Word Var_104;
          MR_Word Var_105;

          succeeded = ((((MR_tag((MR_Word) SubRval_384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRval_384, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_103 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRval_384, (MR_Integer) 1))));
            succeeded = ((((MR_tag((MR_Word) Var_103)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 0)))) == (MR_Integer) 13)));
            if (succeeded)
            {
              DataId_31 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 1))));
              Var_104 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_103, (MR_Integer) 2))));
              succeeded = (Var_104 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) DataId_31)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_105 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DataId_31, (MR_Integer) 0))));
                  CellNum_33 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DataId_31, (MR_Integer) 1))));
                  TypeNum_32 = (MR_Integer) (Var_105);
                  succeeded = MR_TRUE;
                }
              }
            }
          }
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_TAG_COMMON(");
            ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_30);
            mercury__io__write_string_3_p_0((MR_String) ",");
            mercury__io__write_int_3_p_0(TypeNum_32);
            mercury__io__write_string_3_p_0((MR_String) ",");
            mercury__io__write_int_3_p_0(CellNum_33);
            mercury__io__write_string_3_p_0((MR_String) ")");
          }
          else
          {
            MR_Integer Body_34;
            MR_Word Var_117;
            MR_Word Var_118;
            MR_Word Var_119;

            succeeded = ((((MR_tag((MR_Word) SubRval_384)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRval_384, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_117 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRval_384, (MR_Integer) 1))));
              Var_118 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRval_384, (MR_Integer) 2))));
              succeeded = (Var_117 == (MR_Word) ((MR_Unsigned) 8U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) Var_118)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_118, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_118, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_Integer) 1);
                  if (succeeded)
                    Body_34 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_119, (MR_Integer) 0))));
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_tbmkword(");
              ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_30);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              mercury__io__write_int_3_p_0(Body_34);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            else
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_tmkword(");
              ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_30);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_384, (MR_Word) ((MR_Unsigned) 12U));
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Ptag_385 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_tmkword(");
              ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_385);
              mercury__io__write_string_3_p_0((MR_String) ", 0)");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

              ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Const_8);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Type_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
              MR_Word SubRval_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "((");
              ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(Type_9);
              mercury__io__write_string_3_p_0((MR_String) ") ");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRval_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word UnaryOp_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
              MR_String OpString_12;
              MR_Word ArgType_13;
              MR_Word SubRval_375 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));

              backend_libs__c_util__unary_prefix_op_2_p_0(UnaryOp_11, &OpString_12);
              mercury__io__write_string_3_p_0(OpString_12);
              mercury__io__write_string_3_p_0((MR_String) "(");
              ll_backend__llds__unop_arg_type_2_p_0(UnaryOp_11, &ArgType_13);
              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_375, ArgType_13);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));
              MR_Word SubRvalA_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 2))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 3))));

              switch (MR_tag((MR_Word) Op_14)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_14)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_203;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        Var_203 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_203);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "&&");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_203);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_1783;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        Var_1783 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1783);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "||");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1783);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_154;

                        mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                        Var_154 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1]));
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_154);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_154);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_nth_code_unit(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_302;
                        MR_Word Var_311;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_302 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_302)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_302, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_302);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_311 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_311)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_311, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_311);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
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
                        MR_Word Var_2076;
                        MR_Word Var_2087;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_2076 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_2076)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_2076, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_2076);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_2087 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_2087)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_2087, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_2087);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
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
                        MR_Word Var_2027;
                        MR_Word Var_2038;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_2027 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_2027)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_2027, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_2027);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_2038 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_2038)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_2038, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_2038);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
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
                        MR_Word Var_1929;
                        MR_Word Var_1940;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1929 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_1929)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1929, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1929);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1940 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_1940)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1940, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1940);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
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
                        MR_Word Var_1978;
                        MR_Word Var_1989;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1978 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_1978)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1978, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1978);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1989 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_1989)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1989, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1989);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
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
                        MR_Word Var_1880;
                        MR_Word Var_1891;

                        mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        succeeded = ((((MR_tag((MR_Word) SubRvalA_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1880 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalA_15, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_1880)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1880, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1880);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        }
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_1891 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRvalB_16, (MR_Integer) 1))));
                          succeeded = ((((MR_tag((MR_Word) Var_1891)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_1891, (MR_Integer) 0)))) == (MR_Integer) 10)));
                          if (succeeded)
                          {
                          }
                        }
                        if (succeeded)
                          ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(Info_5, Var_1891);
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
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
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Word Var_277;

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        Var_277 = (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[2]));
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_277);
                        mercury__io__write_string_3_p_0((MR_String) " <= ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_277);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "+");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "-");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "*");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "/");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "==");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "!=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 4U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 22:
                      {
                        MR_Word MemRef_29;

                        mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword");
                        succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_15, SubRvalB_16, &MemRef_29);
                        if (succeeded)
                        {
                          MR_Word Var_140;

                          mercury__io__write_string_3_p_0((MR_String) "_ptr(MR_dword_ptr(");
                          {
                            Var_140 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_140, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), Var_140, 1) = ((MR_Box) (MemRef_29));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Var_140);
                          mercury__io__write_string_3_p_0((MR_String) "))");
                        }
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_15);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_16);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        MR_Word MemRef_795;

                        mercury__io__write_string_3_p_0((MR_String) "MR_int64_from_dword");
                        succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_15, SubRvalB_16, &MemRef_795);
                        if (succeeded)
                        {
                          MR_Word Var_785;

                          mercury__io__write_string_3_p_0((MR_String) "_ptr(MR_dword_ptr(");
                          {
                            Var_785 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_785, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), Var_785, 1) = ((MR_Box) (MemRef_795));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Var_785);
                          mercury__io__write_string_3_p_0((MR_String) "))");
                        }
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_15);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_16);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        MR_Word MemRef_2137;

                        mercury__io__write_string_3_p_0((MR_String) "MR_uint64_from_dword");
                        succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_15, SubRvalB_16, &MemRef_2137);
                        if (succeeded)
                        {
                          MR_Word Var_2127;

                          mercury__io__write_string_3_p_0((MR_String) "_ptr(MR_dword_ptr(");
                          {
                            Var_2127 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(3), Var_2127, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                            MR_hl_field(MR_mktag(3), Var_2127, 1) = ((MR_Box) (MemRef_2137));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Var_2127);
                          mercury__io__write_string_3_p_0((MR_String) "))");
                        }
                        else
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_15);
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_16);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(((MR_Word) ");
                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_15);
                        mercury__io__write_string_3_p_0((MR_String) ") == ((MR_Word) ");
                        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_16);
                        mercury__io__write_string_3_p_0((MR_String) "))");
                      }
                      break;
                    case (MR_Integer) 26:
                    case (MR_Integer) 27:
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval\'/4", (MR_String) "compound_compare_binop");
                        return;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word IntType_21 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Op_14, (MR_Integer) 0))) & (MR_Integer) 15);

                    switch (IntType_21) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_262;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_262 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_262, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_262);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "+");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_262);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Var_832;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int16_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_832 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_832, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_832);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "+");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_832);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Var_853;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int32_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_853 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_853, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_853);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "+");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_853);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word Var_874;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int64_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_874 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_874, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_874);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "+");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_874);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_895;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int8_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_895 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_895, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_895);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "+");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_895);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                      case (MR_Integer) 9:
                      case (MR_Integer) 3:
                        {
                          MR_Word Var_244;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          {
                            Var_244 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_244, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_244);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "+");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_244);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IntType_1746 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Op_14, (MR_Integer) 0))) & (MR_Integer) 15);

                    switch (IntType_1746) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_Word Var_1605;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_1605 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1605, 0) = (MR_Box) ((MR_Unsigned) (IntType_1746));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1605);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "-");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1605);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 4:
                        {
                          MR_Word Var_1626;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int16_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_1626 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1626, 0) = (MR_Box) ((MR_Unsigned) (IntType_1746));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1626);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "-");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1626);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 6:
                        {
                          MR_Word Var_1647;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int32_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_1647 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1647, 0) = (MR_Box) ((MR_Unsigned) (IntType_1746));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1647);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "-");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1647);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 8:
                        {
                          MR_Word Var_1668;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int64_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_1668 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1668, 0) = (MR_Box) ((MR_Unsigned) (IntType_1746));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1668);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "-");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1668);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word Var_1689;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          mercury__io__write_string_3_p_0((MR_String) "int8_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ((");
                          mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          {
                            Var_1689 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1689, 0) = (MR_Box) ((MR_Unsigned) (IntType_1746));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1689);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "-");
                          mercury__io__write_string_3_p_0((MR_String) " (");
                          mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                          mercury__io__write_string_3_p_0((MR_String) ") ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1689);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                      case (MR_Integer) 1:
                      case (MR_Integer) 5:
                      case (MR_Integer) 7:
                      case (MR_Integer) 9:
                      case (MR_Integer) 3:
                        {
                          MR_Word Var_1703;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          {
                            Var_1703 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1703, 0) = (MR_Box) ((MR_Unsigned) (IntType_1746));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1703);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "-");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1703);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word IntType_1561 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        switch (IntType_1561) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word Var_1420;

                              mercury__io__write_string_3_p_0((MR_String) "(");
                              mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
                              mercury__io__write_string_3_p_0((MR_String) ") ((");
                              mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              {
                                Var_1420 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1420, 0) = (MR_Box) ((MR_Unsigned) (IntType_1561));
                              }
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1420);
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              mercury__io__write_string_3_p_0((MR_String) "*");
                              mercury__io__write_string_3_p_0((MR_String) " (");
                              mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1420);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Word Var_1441;

                              mercury__io__write_string_3_p_0((MR_String) "(");
                              mercury__io__write_string_3_p_0((MR_String) "int16_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ((");
                              mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              {
                                Var_1441 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1441, 0) = (MR_Box) ((MR_Unsigned) (IntType_1561));
                              }
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1441);
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              mercury__io__write_string_3_p_0((MR_String) "*");
                              mercury__io__write_string_3_p_0((MR_String) " (");
                              mercury__io__write_string_3_p_0((MR_String) "uint16_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1441);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 6:
                            {
                              MR_Word Var_1462;

                              mercury__io__write_string_3_p_0((MR_String) "(");
                              mercury__io__write_string_3_p_0((MR_String) "int32_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ((");
                              mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              {
                                Var_1462 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1462, 0) = (MR_Box) ((MR_Unsigned) (IntType_1561));
                              }
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1462);
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              mercury__io__write_string_3_p_0((MR_String) "*");
                              mercury__io__write_string_3_p_0((MR_String) " (");
                              mercury__io__write_string_3_p_0((MR_String) "uint32_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1462);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 8:
                            {
                              MR_Word Var_1483;

                              mercury__io__write_string_3_p_0((MR_String) "(");
                              mercury__io__write_string_3_p_0((MR_String) "int64_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ((");
                              mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              {
                                Var_1483 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1483, 0) = (MR_Box) ((MR_Unsigned) (IntType_1561));
                              }
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1483);
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              mercury__io__write_string_3_p_0((MR_String) "*");
                              mercury__io__write_string_3_p_0((MR_String) " (");
                              mercury__io__write_string_3_p_0((MR_String) "uint64_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1483);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Word Var_1504;

                              mercury__io__write_string_3_p_0((MR_String) "(");
                              mercury__io__write_string_3_p_0((MR_String) "int8_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ((");
                              mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              {
                                Var_1504 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1504, 0) = (MR_Box) ((MR_Unsigned) (IntType_1561));
                              }
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1504);
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              mercury__io__write_string_3_p_0((MR_String) "*");
                              mercury__io__write_string_3_p_0((MR_String) " (");
                              mercury__io__write_string_3_p_0((MR_String) "uint8_t");
                              mercury__io__write_string_3_p_0((MR_String) ") ");
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1504);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                          case (MR_Integer) 1:
                          case (MR_Integer) 5:
                          case (MR_Integer) 7:
                          case (MR_Integer) 9:
                          case (MR_Integer) 3:
                            {
                              MR_Word Var_1518;

                              mercury__io__write_string_3_p_0((MR_String) "(");
                              {
                                Var_1518 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(2), Var_1518, 0) = (MR_Box) ((MR_Unsigned) (IntType_1561));
                              }
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1518);
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              mercury__io__write_string_3_p_0((MR_String) "*");
                              mercury__io__write_string_3_p_0((MR_String) " ");
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1518);
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                            break;
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word Var_927;
                        MR_Word IntType_990 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_927 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_927, 0) = (MR_Box) ((MR_Unsigned) (IntType_990));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_927);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "/");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_927);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_1347;
                        MR_Word IntType_1410 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1347 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_1347, 0) = (MR_Box) ((MR_Unsigned) (IntType_1410));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1347);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "%");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1347);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_189;
                        MR_Word IntType_382 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_189 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_189, 0) = (MR_Box) ((MR_Unsigned) (IntType_382));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_189);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_2167;
                        MR_Word IntType_2179 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_2167 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_2167, 0) = (MR_Box) ((MR_Unsigned) (IntType_2179));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_2167);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">>");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        MR_Word Var_231;
                        MR_Word IntType_379 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_231 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_231, 0) = (MR_Box) ((MR_Unsigned) (IntType_379));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_231);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "&");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_231);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_434;
                        MR_Word IntType_497 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_434 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_434, 0) = (MR_Box) ((MR_Unsigned) (IntType_497));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_434);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "|");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_434);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        MR_Word Var_518;
                        MR_Word IntType_581 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_518 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_518, 0) = (MR_Box) ((MR_Unsigned) (IntType_581));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_518);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "^");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_518);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word IntType_665 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);
                        MR_Word SubRvalAType_586;
                        MR_Word SubRvalBType_587;

                        switch (IntType_665) {
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
                        if (succeeded)
                        {
                          ll_backend__llds__rval_type_2_p_0(SubRvalA_15, &SubRvalAType_586);
                          if ((SubRvalAType_586 == (MR_Word) ((MR_Unsigned) 20U)))
                            succeeded = MR_TRUE;
                          else
                          if (((MR_tag((MR_Word) SubRvalAType_586)) == (MR_Integer) 2))
                          {
                            MR_Word Var_582 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SubRvalAType_586, (MR_Integer) 0))) & (MR_Integer) 15);

                            succeeded = (Var_582 == (MR_Integer) 1);
                          }
                          else
                            succeeded = MR_FALSE;
                          if (succeeded)
                          {
                            ll_backend__llds__rval_type_2_p_0(SubRvalB_16, &SubRvalBType_587);
                            if ((SubRvalBType_587 == (MR_Word) ((MR_Unsigned) 20U)))
                              succeeded = MR_TRUE;
                            else
                            if (((MR_tag((MR_Word) SubRvalBType_587)) == (MR_Integer) 2))
                            {
                              MR_Word Var_584 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SubRvalBType_587, (MR_Integer) 0))) & (MR_Integer) 15);

                              succeeded = (Var_584 == (MR_Integer) 1);
                            }
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                        if (succeeded)
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_15);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "==");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_16);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        else
                        {
                          MR_Word Var_602;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          {
                            Var_602 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_602, 0) = (MR_Box) ((MR_Unsigned) (IntType_665));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_602);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "==");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_602);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word IntType_1879 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);
                        MR_Word SubRvalAType_1800;
                        MR_Word SubRvalBType_1801;

                        switch (IntType_1879) {
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
                        if (succeeded)
                        {
                          ll_backend__llds__rval_type_2_p_0(SubRvalA_15, &SubRvalAType_1800);
                          if ((SubRvalAType_1800 == (MR_Word) ((MR_Unsigned) 20U)))
                            succeeded = MR_TRUE;
                          else
                          if (((MR_tag((MR_Word) SubRvalAType_1800)) == (MR_Integer) 2))
                          {
                            MR_Word Var_1796 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SubRvalAType_1800, (MR_Integer) 0))) & (MR_Integer) 15);

                            succeeded = (Var_1796 == (MR_Integer) 1);
                          }
                          else
                            succeeded = MR_FALSE;
                          if (succeeded)
                          {
                            ll_backend__llds__rval_type_2_p_0(SubRvalB_16, &SubRvalBType_1801);
                            if ((SubRvalBType_1801 == (MR_Word) ((MR_Unsigned) 20U)))
                              succeeded = MR_TRUE;
                            else
                            if (((MR_tag((MR_Word) SubRvalBType_1801)) == (MR_Integer) 2))
                            {
                              MR_Word Var_1798 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), SubRvalBType_1801, (MR_Integer) 0))) & (MR_Integer) 15);

                              succeeded = (Var_1798 == (MR_Integer) 1);
                            }
                            else
                              succeeded = MR_FALSE;
                          }
                        }
                        if (succeeded)
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalA_15);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "!=");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, SubRvalB_16);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        else
                        {
                          MR_Word Var_1816;

                          mercury__io__write_string_3_p_0((MR_String) "(");
                          {
                            Var_1816 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(2), Var_1816, 0) = (MR_Box) ((MR_Unsigned) (IntType_1879));
                          }
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1816);
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          mercury__io__write_string_3_p_0((MR_String) "!=");
                          mercury__io__write_string_3_p_0((MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1816);
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        mercury__io__write_string_3_p_0((MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        mercury__io__write_string_3_p_0((MR_String) ")[");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
                        mercury__io__write_string_3_p_0((MR_String) "]");
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        MR_Integer N_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))));

                        mercury__io__write_string_3_p_0((MR_String) "MR_offset_streq(");
                        mercury__io__write_int_3_p_0(N_28);
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, (MR_Word) ((MR_Unsigned) 12U));
                        mercury__io__write_string_3_p_0((MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, (MR_Word) ((MR_Unsigned) 12U));
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word Var_1263;
                        MR_Word IntType_1326 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1263 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_1263, 0) = (MR_Box) ((MR_Unsigned) (IntType_1326));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1263);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1263);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word Var_1095;
                        MR_Word IntType_1158 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1095 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_1095, 0) = (MR_Box) ((MR_Unsigned) (IntType_1158));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1095);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1095);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word Var_1179;
                        MR_Word IntType_1242 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1179 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_1179, 0) = (MR_Box) ((MR_Unsigned) (IntType_1242));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1179);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) "<=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1179);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word Var_1011;
                        MR_Word IntType_1074 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Op_14, (MR_Integer) 1))) & (MR_Integer) 15);

                        mercury__io__write_string_3_p_0((MR_String) "(");
                        {
                          Var_1011 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(2), Var_1011, 0) = (MR_Box) ((MR_Unsigned) (IntType_1074));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalA_15, Var_1011);
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        mercury__io__write_string_3_p_0((MR_String) ">=");
                        mercury__io__write_string_3_p_0((MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRvalB_16, Var_1011);
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_408 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_6, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) MemRef_408)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word SubRval_391 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MemRef_408, (MR_Integer) 0))));
                    MR_Integer SlotNum_40;
                    MR_Word Var_72;

                    mercury__io__write_string_3_p_0((MR_String) "&MR_sv(");
                    succeeded = ((((MR_tag((MR_Word) SubRval_391)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRval_391, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_72 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRval_391, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_72)) == (MR_Integer) 1);
                      if (succeeded)
                        SlotNum_40 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_72, (MR_Integer) 0))));
                    }
                    if (succeeded)
                      mercury__io__write_int_3_p_0(SlotNum_40);
                    else
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_391, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word SubRval_393 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MemRef_408, (MR_Integer) 0))));
                    MR_Integer SlotNum_392;
                    MR_Word Var_63;

                    mercury__io__write_string_3_p_0((MR_String) "&MR_fv(");
                    succeeded = ((((MR_tag((MR_Word) SubRval_393)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), SubRval_393, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), SubRval_393, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_63)) == (MR_Integer) 1);
                      if (succeeded)
                        SlotNum_392 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));
                    }
                    if (succeeded)
                      mercury__io__write_int_3_p_0(SlotNum_392);
                    else
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, SubRval_393, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word BaseRval_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_408, (MR_Integer) 0))));
                    MR_Word MaybePtag_399 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_408, (MR_Integer) 1))));
                    MR_Word FieldNumRval_400 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MemRef_408, (MR_Integer) 2))));
                    MR_Integer FieldNum_397;
                    MR_Word Var_54;

                    if ((MaybePtag_399 == (MR_Word) ((MR_Unsigned) 0U)))
                      mercury__io__write_string_3_p_0((MR_String) "&MR_mask_field(");
                    else
                    {
                      MR_Word Ptag_395 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_399, (MR_Integer) 0))));

                      mercury__io__write_string_3_p_0((MR_String) "&MR_tfield(");
                      ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_395);
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, BaseRval_41);
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                    succeeded = ((((MR_tag((MR_Word) FieldNumRval_400)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldNumRval_400, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldNumRval_400, (MR_Integer) 1))));
                      succeeded = ((MR_tag((MR_Word) Var_54)) == (MR_Integer) 1);
                      if (succeeded)
                        FieldNum_397 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_54, (MR_Integer) 0))));
                    }
                    if (succeeded)
                      mercury__io__write_int_3_p_0(FieldNum_397);
                    else
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(Info_5, FieldNumRval_400, (MR_Word) (MR_mkword(MR_mktag(2), &ll_backend__llds_out__llds_out_data_scalar_common_2[1])));
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
ll_backend__llds_out__llds_out_data__output_uint64_rval_as_word_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded;
    MR_Word UnboxInt64s_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word StaticGroundInt64s_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_String UInt64Name_20;

    succeeded = (UnboxInt64s_18 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (StaticGroundInt64s_19 == (MR_Integer) 1);
      if (succeeded)
        succeeded = ll_backend__llds_out__llds_out_data__uint64_const_expr_name_2_p_0(Rval_6, &UInt64Name_20);
    }
    if (succeeded)
    {
      ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 20U));
      mercury__io__write_string_3_p_0((MR_String) "&mercury_uint64_const_");
      mercury__io__write_string_3_p_0(UInt64Name_20);
    }
    else
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_uint64_to_word(");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_6);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_uint64_rval_as_data_ptr_4_p_0(
  MR_Word Info_5,
  MR_Word Rval_6)
{
  {
    MR_bool succeeded;
    MR_Word UnboxInt64s_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word StaticGroundInt64s_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_String UInt64Name_20;

    succeeded = (UnboxInt64s_18 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (StaticGroundInt64s_19 == (MR_Integer) 1);
      if (succeeded)
        succeeded = ll_backend__llds_out__llds_out_data__uint64_const_expr_name_2_p_0(Rval_6, &UInt64Name_20);
    }
    if (succeeded)
    {
      ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 12U));
      mercury__io__write_string_3_p_0((MR_String) "&mercury_uint64_const_");
      mercury__io__write_string_3_p_0(UInt64Name_20);
    }
    else
    {
      ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 12U));
      mercury__io__write_string_3_p_0((MR_String) "MR_uint64_to_word(");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_6);
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_int64_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word IsPtr_8)
{
  {
    MR_bool succeeded;
    MR_Word UnboxInt64s_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
    MR_Word StaticGroundInt64s_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
    MR_String Int64Name_12;
    int64_t Int64_75;
    MR_Word Var_76;
    MR_String Int64Name0_79;
    MR_String Var_80;
    MR_String Var_81;

    succeeded = (UnboxInt64s_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (StaticGroundInt64s_11 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Rval_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_76 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Rval_7, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_76)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_76, (MR_Integer) 0)))) == (MR_Integer) 6)));
          if (succeeded)
          {
            Int64_75 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Var_76, (MR_Integer) 1)));
            Int64Name0_79 = mercury__string__int64_to_string_1_f_0(Int64_75);
            Var_80 = (MR_String) "-";
            Var_81 = (MR_String) "neg";
            mercury__string__replace_all_4_p_0(Int64Name0_79, Var_80, Var_81, &Int64Name_12);
            succeeded = MR_TRUE;
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
          Cast_13 = (MR_Word) ((MR_Unsigned) 20U);
          break;
        case (MR_Integer) 1:
          Cast_13 = (MR_Word) ((MR_Unsigned) 12U);
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "(");
      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(Cast_13);
      mercury__io__write_string_3_p_0((MR_String) ") ");
      mercury__io__write_string_3_p_0((MR_String) "&mercury_int64_const_");
      mercury__io__write_string_3_p_0(Int64Name_12);
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
          ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 12U));
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "MR_int64_to_word(");
      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_6, Rval_7);
      mercury__io__write_string_3_p_0((MR_String) ")");
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
    MR_Word UnboxFloat_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 8)) & (MR_Integer) 1);
    MR_Word StaticGroundFloats_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Info_6, (MR_Integer) 7))) >> 6)) & (MR_Integer) 1);
    MR_String FloatName_12;

    succeeded = (UnboxFloat_10 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (StaticGroundFloats_11 == (MR_Integer) 1);
      if (succeeded)
        succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Rval_7, &FloatName_12);
    }
    if (succeeded)
    {
      MR_Word Cast_13;

      switch (IsPtr_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Cast_13 = (MR_Word) ((MR_Unsigned) 20U);
          break;
        case (MR_Integer) 1:
          Cast_13 = (MR_Word) ((MR_Unsigned) 12U);
          break;
      }
      mercury__io__write_string_3_p_0((MR_String) "(");
      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(Cast_13);
      mercury__io__write_string_3_p_0((MR_String) ") ");
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
            mercury__io__write_string_3_p_0((MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Word) ((MR_Unsigned) 12U));
            mercury__io__write_string_3_p_0((MR_String) ") ");
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
          MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) SlotNum_8 + (MR_Unsigned) 1);

          {
            Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 1U));
            MR_hl_field(MR_mktag(3), Lval_10, 1) = ((MR_Box) (Var_13));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) SlotNum_8 + (MR_Unsigned) 1);

          {
            Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Lval_10, 0) = ((MR_Box) ((MR_Unsigned) 0U));
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
            mercury__io__write_string_3_p_0((MR_String) "MR_succip");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "MR_maxfr");
            break;
          case (MR_Integer) 2:
            mercury__io__write_string_3_p_0((MR_String) "MR_curfr");
            break;
          case (MR_Integer) 3:
            mercury__io__write_string_3_p_0((MR_String) "MR_hp");
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_3_p_0((MR_String) "MR_sp");
            break;
          case (MR_Integer) 5:
            mercury__io__write_string_3_p_0((MR_String) "MR_parent_sp");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Num_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Lval_6, (MR_Integer) 1))));

          ll_backend__llds_out__llds_out_data__output_reg_4_p_0(Type_8, Num_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Type_130 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 0))) & (MR_Integer) 1);
          MR_Integer Num_131 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Lval_6, (MR_Integer) 1))));

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
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              succeeded = (N_10 <= (MR_Integer) 0);
              if (succeeded)
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "stack var out of range");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "MR_sv(");
              mercury__io__write_int_3_p_0(N_10);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer N_123 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              succeeded = (N_123 <= (MR_Integer) 0);
              if (succeeded)
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "parent stack var out of range");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "MR_parent_sv(");
              mercury__io__write_int_3_p_0(N_123);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer N_124 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              succeeded = (N_124 <= (MR_Integer) 0);
              if (succeeded)
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "frame var out of range");
                  return;
                }
              mercury__io__write_string_3_p_0((MR_String) "MR_fv(");
              mercury__io__write_int_3_p_0(N_124);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word StackType_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))) & (MR_Integer) 1);
              MR_Integer SlotNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));

              mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword_ptr(");
              ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(Info_5, StackType_11, SlotNum_12);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_128 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_succip_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_128);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_succfr_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_13);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_127 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_redoip_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_127);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_126 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_redofr_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_126);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "MR_prevfr_slot(");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_125);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word MaybePtag_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
              MR_Word FieldNumRval_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 3))));
              MR_Word Rval_129 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 2))));
              MR_Integer FieldNum_17;
              MR_Word Var_48;

              if ((MaybePtag_14 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__io__write_string_3_p_0((MR_String) "MR_mask_field(");
              else
              {
                MR_Word Ptag_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybePtag_14, (MR_Integer) 0))));

                mercury__io__write_string_3_p_0((MR_String) "MR_tfield(");
                ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(Ptag_16);
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_129);
              mercury__io__write_string_3_p_0((MR_String) ", ");
              succeeded = ((((MR_tag((MR_Word) FieldNumRval_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), FieldNumRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_48 = ((MR_Word) ((MR_hl_field(MR_mktag(3), FieldNumRval_15, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_48)) == (MR_Integer) 1);
                if (succeeded)
                  FieldNum_17 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_48, (MR_Integer) 0))));
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
              MR_Word Rval_132 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));

              mercury__io__write_string_3_p_0((MR_String) "* (MR_Word *) (");
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(Info_5, Rval_132);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word GlobalVar_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Lval_6, (MR_Integer) 1))));
              MR_String Var_22;

              Var_22 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_19);
              mercury__io__write_string_3_p_0(Var_22);
            }
            break;
          case (MR_Integer) 12:
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "lvar");
              return;
            }
            break;
        }
        break;
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__uint64_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
    uint64_t UInt64_5;
    MR_Word Var_6;

    if (succeeded)
    {
      Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
      if (succeeded)
      {
        UInt64_5 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Var_6, (MR_Integer) 1)));
        *Name_4 = mercury__string__uint64_to_string_1_f_0(UInt64_5);
        succeeded = MR_TRUE;
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  {
    MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Float Float_5;
    MR_Word Var_9;

    if (succeeded)
    {
      Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
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

      succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Op_6 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 1))));
        Arg1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 2))));
        Arg2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Expr_3, (MR_Integer) 3))));
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * MemRef_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0);
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
      LvalA_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        LvalB_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = ((((MR_tag((MR_Word) LvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          N_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalA_4, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) LvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
          if (succeeded)
          {
            Var_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), LvalB_5, (MR_Integer) 1))));
            Var_12 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) N_7);
            succeeded = (Var_12 == (MR_Integer) 1);
            if (succeeded)
            {
              Var_16 = (MR_Integer) 1;
              Var_15 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) Var_16);
              {
                Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (Var_15));
              }
              {
                Var_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_13, 1) = ((MR_Box) (Var_14));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
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

    conv0_LambdaHeadVar__3_62 = ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1410__1_2_f_0(((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
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
            mercury__io__write_string_3_p_0((MR_String) "MR_TRUE");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "MR_FALSE");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer N_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Const_6, (MR_Integer) 0))));

          backend_libs__c_util__output_int_expr_cur_stream_3_p_0(N_8);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned N_102 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), Const_6, (MR_Integer) 0))));

          backend_libs__c_util__output_uint_expr_cur_stream_3_p_0(N_102);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int8_t N_103 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int8_expr_cur_stream_3_p_0(N_103);
            }
            break;
          case (MR_Integer) 1:
            {
              uint8_t N_104 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint8_expr_cur_stream_3_p_0(N_104);
            }
            break;
          case (MR_Integer) 2:
            {
              int16_t N_105 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int16_expr_cur_stream_3_p_0(N_105);
            }
            break;
          case (MR_Integer) 3:
            {
              uint16_t N_106 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint16_expr_cur_stream_3_p_0(N_106);
            }
            break;
          case (MR_Integer) 4:
            {
              int32_t N_107 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int32_expr_cur_stream_3_p_0(N_107);
            }
            break;
          case (MR_Integer) 5:
            {
              uint32_t N_108 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint32_expr_cur_stream_3_p_0(N_108);
            }
            break;
          case (MR_Integer) 6:
            {
              int64_t N_109 = MR_unbox_int64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_int64_expr_cur_stream_3_p_0(N_109);
            }
            break;
          case (MR_Integer) 7:
            {
              uint64_t N_110 = MR_unbox_uint64((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              backend_libs__c_util__output_uint64_expr_cur_stream_3_p_0(N_110);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Value_9 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word Type_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));

              mercury__io__write_char_3_p_0((MR_Char) 40);
              ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(Type_10);
              mercury__io__write_string_3_p_0(Value_9);
              mercury__io__write_char_3_p_0((MR_Char) 41);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Float FloatVal_11 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 4U));
              backend_libs__c_util__output_float_literal_cur_stream_3_p_0(FloatVal_11);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String String_12 = ((MR_String) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Integer Var_75;

              mercury__io__write_string_3_p_0((MR_String) "MR_string_const(\"");
              backend_libs__c_util__output_quoted_string_cur_stream_3_p_0(String_12);
              mercury__io__write_string_3_p_0((MR_String) "\", ");
              Var_75 = mercury__string__count_utf8_code_units_1_f_0(String_12);
              mercury__io__write_int_3_p_0(Var_75);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word Strings_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Integer Length_17;
              MR_Box conv1_Length_17;

              mercury__io__write_string_3_p_0((MR_String) "MR_string_const(\"");
              backend_libs__c_util__output_quoted_multi_string_cur_stream_3_p_0(Strings_13);
              mercury__io__write_string_3_p_0((MR_String) "\", ");
              conv1_Length_17 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_4[0]), Strings_13, ((MR_Box) ((MR_Integer) 0)));
              Length_17 = ((MR_Integer) (conv1_Length_17));
              mercury__io__write_int_3_p_0(Length_17);
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word CodeAddress_18 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));

              ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(CodeAddress_18);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word DataId_19 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 1))));
              MR_Word MaybeOffset_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Const_6, (MR_Integer) 2))));

              if ((MaybeOffset_20 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Integer TypeNum_21;
                MR_Integer CellNum_22;
                MR_Word Var_41;

                succeeded = ((MR_tag((MR_Word) DataId_19)) == (MR_Integer) 2);
                if (succeeded)
                {
                  Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DataId_19, (MR_Integer) 0))));
                  CellNum_22 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DataId_19, (MR_Integer) 1))));
                  TypeNum_21 = (MR_Integer) (Var_41);
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
                  uint16_t Arity_27;
                  MR_Word RttiId_23;
                  MR_Word Ctor_24;

                  succeeded = ((MR_tag((MR_Word) DataId_19)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    RttiId_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataId_19, (MR_Integer) 0))));
                    succeeded = backend_libs__rtti__rtti_id_emits_type_ctor_info_2_p_0(RttiId_23, &Ctor_24);
                    if (succeeded)
                    {
                      Module_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 0))));
                      Name_26 = ((MR_String) ((MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 1))));
                      Arity_27 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(0), Ctor_24, (MR_Integer) 2)));
                      succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(Module_25);
                      if (succeeded)
                        succeeded = backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(Name_26);
                    }
                  }
                  if (succeeded)
                    ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(Module_25, Name_26, Arity_27);
                  else
                  {
                    ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 12U));
                    ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(Info_5, DataId_19);
                  }
                }
              }
              else
              {
                MR_Integer Offset_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), MaybeOffset_20, (MR_Integer) 0))));

                mercury__io__write_string_3_p_0((MR_String) "((");
                ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Word) ((MR_Unsigned) 12U));
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
  uint16_t Arity_8)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) Module0_6)) == (MR_Integer) 0);
    MR_Word Module_10;
    MR_String ModuleStr_11;
    MR_String Var_15;

    if (succeeded)
    {
      Var_15 = ((MR_String) ((MR_hl_field(MR_mktag(0), Module0_6, (MR_Integer) 0))));
      succeeded = (strcmp(Var_15, (MR_String) "") == 0);
    }
    if (succeeded)
      Module_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
    else
      Module_10 = Module0_6;
    ModuleStr_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_10);
    succeeded = (Arity_8 == UINT16_C(0));
    if (succeeded)
    {
      MR_String Macro_12;
      MR_Integer slot_0;
      MR_String str_1;

      succeeded = (strcmp(ModuleStr_11, (MR_String) "builtin") == 0);
      if (succeeded)
      {
        // hashed string simple lookup switch
        ;
        // compute the hash value of the input string
        ;
        slot_0 = ((MR_hash_string6(Name_7)) & (MR_Integer) 63);
        // no collisions; no hash chain loop
        ;
        // lookup the string for this hash slot
        ;
        str_1 = ((&ll_backend__llds_out__llds_out_data_vector_common_1[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_1_0__vct_1_f_0;
        // did we find a match?
        ;
        if ((((str_1 != NULL)) && ((strcmp(str_1, Name_7) == 0))))
        {
          // we found a match; look up the results
          ;
          Macro_12 = ((&ll_backend__llds_out__llds_out_data_vector_common_1[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_1_0__vct_1_f_1;
          succeeded = MR_TRUE;
          // jump out of search loop
          ;
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
          mercury__io__write_string_3_p_0((MR_String) "MR_IO_CTOR_ADDR");
        else
        {
          succeeded = (strcmp(ModuleStr_11, (MR_String) "bool") == 0);
          if (succeeded)
            succeeded = (strcmp(Name_7, (MR_String) "bool") == 0);
          if (succeeded)
            mercury__io__write_string_3_p_0((MR_String) "MR_BOOL_CTOR_ADDR");
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
      succeeded = (Arity_8 == UINT16_C(1));
      if (succeeded)
      {
        succeeded = (strcmp(Name_7, (MR_String) "list") == 0);
        if (succeeded)
          succeeded = (strcmp(ModuleStr_11, (MR_String) "list") == 0);
        if (succeeded)
          mercury__io__write_string_3_p_0((MR_String) "MR_LIST_CTOR_ADDR");
        else
        {
          succeeded = (strcmp(Name_7, (MR_String) "private_builtin") == 0);
          if (succeeded)
            succeeded = (strcmp(ModuleStr_11, (MR_String) "type_info") == 0);
          if (succeeded)
            mercury__io__write_string_3_p_0((MR_String) "MR_TYPE_INFO_CTOR_ADDR");
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
        MR_Integer Var_47;
        MR_String Var_72;

        Var_47 = mercury__uint16__to_int_1_f_0(Arity_8);
        mercury__io__write_string_3_p_0((MR_String) "MR_CTOR_ADDR(");
        mercury__io__write_string_3_p_0(ModuleStr_11);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__io__write_string_3_p_0(Name_7);
        mercury__io__write_string_3_p_0((MR_String) ", ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_2[0]), Var_47, &Var_72);
        mercury__io__write_string_3_p_0(Var_72);
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
        MR_Word RttiId_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), DataId_6, (MR_Integer) 0))));

        ll_backend__rtti_out__output_rtti_id_3_p_0(RttiId_8);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DataId_6, (MR_Integer) 0))));
        MR_Word TablingId_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), DataId_6, (MR_Integer) 1))));
        MR_String Var_31;

        Var_31 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_9, TablingId_10);
        mercury__io__write_string_3_p_0(Var_31);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeNum_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), DataId_6, (MR_Integer) 0))));
        MR_Integer CellNum_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), DataId_6, (MR_Integer) 1))));
        MR_Integer TypeNum_86 = (MR_Integer) (TypeNum_11);
        MR_String Var_88;

        Var_88 = backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0();
        mercury__io__write_string_3_p_0(Var_88);
        mercury__io__write_int_3_p_0(TypeNum_86);
        mercury__io__write_string_3_p_0((MR_String) "[");
        mercury__io__write_int_3_p_0(CellNum_12);
        mercury__io__write_string_3_p_0((MR_String) "]");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeNum_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 1))));
            MR_Integer CellNum_35 = ((MR_Integer) ((MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 2))));

            ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(TypeNum_34, CellNum_35);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 1))));

            ll_backend__layout_out__output_layout_name_3_p_0(LayoutName_13);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredProcId_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), DataId_6, (MR_Integer) 2))));
            MR_Word TableIoEntryMap_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 5))));
            MR_Word LayoutSlotName_17;
            MR_String MangledModuleName_18;
            MR_Box conv0_LayoutSlotName_17;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), TableIoEntryMap_16, ((MR_Box) (PredProcId_15)), &conv0_LayoutSlotName_17);
            LayoutSlotName_17 = ((MR_Word) (conv0_LayoutSlotName_17));
            MangledModuleName_18 = ((MR_String) ((MR_hl_field(MR_mktag(0), Info_5, (MR_Integer) 1))));
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
    MR_Integer TypeNum_5 = (MR_Integer) (HeadVar__1_1);
    MR_String Var_10;

    Var_10 = backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0();
    mercury__io__write_string_3_p_0(Var_10);
    mercury__io__write_int_3_p_0(TypeNum_5);
    mercury__io__write_string_3_p_0((MR_String) "_");
    mercury__io__write_int_3_p_0(CellNum_6);
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

            conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_String) "llds_out_data.m", (MR_String) "function \140ll_backend.llds_out.llds_out_data.reg_to_string\'/2", (MR_String) "register number too large");
            HeadVar__3_3 = ((MR_String) (conv0_HeadVar__3_3));
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

              conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_String) "llds_out_data.m", (MR_String) "function \140ll_backend.llds_out.llds_out_data.reg_to_string\'/2", (MR_String) "register number too large");
              HeadVar__3_3 = ((MR_String) (conv1_HeadVar__3_3));
            }
          }
        }
        break;
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__write_ptag_3_p_0(
  MR_Word Ptag_4)
{
  {
    uint8_t PtagUint8_6 = (uint8_t) (Ptag_4);

    mercury__io__write_uint8_3_p_0(PtagUint8_6);
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_String EnvVarName_3 = (MR_String) (HeadVar__1_1);

    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", EnvVarName_3);
    return HeadVar__2_2;
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
          mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_3_p_0((MR_String) "MR_Float");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_3_p_0((MR_String) "MR_String");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_3_p_0((MR_String) "MR_Word *");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_3_p_0((MR_String) "MR_Code *");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_131 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

        switch (Var_131) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least16_t");
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least32_t");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least8_t");
            break;
          case (MR_Integer) 3:
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least16_t");
            break;
          case (MR_Integer) 5:
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least32_t");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least8_t");
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_130 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (Var_130) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_3_p_0((MR_String) "int16_t");
            break;
          case (MR_Integer) 6:
            mercury__io__write_string_3_p_0((MR_String) "int32_t");
            break;
          case (MR_Integer) 8:
            mercury__io__write_string_3_p_0((MR_String) "int64_t");
            break;
          case (MR_Integer) 2:
            mercury__io__write_string_3_p_0((MR_String) "int8_t");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
            break;
          case (MR_Integer) 5:
            mercury__io__write_string_3_p_0((MR_String) "uint16_t");
            break;
          case (MR_Integer) 7:
            mercury__io__write_string_3_p_0((MR_String) "uint32_t");
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_3_p_0((MR_String) "uint64_t");
            break;
          case (MR_Integer) 3:
            mercury__io__write_string_3_p_0((MR_String) "uint8_t");
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
