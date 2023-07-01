/*
** Automatically generated from `llds_out_data.m'
** by the Mercury compiler,
** version rotd-2023-07-01
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


#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.rtti.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.globals.mih"
#include "libs.optimization_options.mih"
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
#include "parse_tree.file_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1461__1_2_f_0(
  MR_String LambdaHeadVar__1_70,
  MR_Integer LambdaHeadVar__2_71);

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
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_11_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_String FirstIndent_4,
  MR_String LaterIndent_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7,
  MR_Word STATE_VARIABLE_DeclSet_0_8,
  MR_Word * STATE_VARIABLE_DeclSet_9);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_13_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer Count_5,
  MR_String FirstIndent_6,
  MR_String LaterIndent_7,
  MR_Integer STATE_VARIABLE_N_0_8,
  MR_Integer * STATE_VARIABLE_N_9,
  MR_Word STATE_VARIABLE_DeclSet_0_10,
  MR_Word * STATE_VARIABLE_DeclSet_11);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_11_p_0(
  MR_Word tscc_proc_1_input_1_Info_12,
  MR_Word tscc_proc_1_input_2_Stream_13,
  MR_Word tscc_proc_1_input_3_Lval_14,
  MR_String tscc_proc_1_input_4_FirstIndent_15,
  MR_String tscc_proc_1_input_5_LaterIndent_16,
  MR_Integer tscc_proc_1_input_6_STATE_VARIABLE_N_0_34,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(
  MR_Word tscc_proc_2_input_1_Info_12,
  MR_Word tscc_proc_2_input_2_Stream_13,
  MR_Word tscc_proc_2_input_3_Rval_14,
  MR_String tscc_proc_2_input_4_FirstIndent_15,
  MR_String tscc_proc_2_input_5_LaterIndent_16,
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_85,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_11_p_0(
  MR_Word tscc_proc_3_input_1_Info_12,
  MR_Word tscc_proc_3_input_2_Stream_13,
  MR_Word tscc_proc_3_input_3_MemRef_14,
  MR_String tscc_proc_3_input_4_FirstIndent_15,
  MR_String tscc_proc_3_input_5_LaterIndent_16,
  MR_Integer tscc_proc_3_input_6_STATE_VARIABLE_N_0_24,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37);

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
ll_backend__llds_out__llds_out_data__output_uint64_rval_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Rval_9,
  MR_Word IsPtr_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_int64_rval_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Rval_9,
  MR_Word IsPtr_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Rval_9,
  MR_Word IsPtr_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word StackType_9,
  MR_Integer SlotNum_10);

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
ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(
  MR_Word Info_6,
  MR_Word Const_7,
  MR_Word Stream_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_type_ctor_addr_6_p_0(
  MR_Word Stream_7,
  MR_Word Module0_8,
  MR_String Name_9,
  uint16_t Arity_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_5_p_0(
  MR_Word Stream_6,
  MR_Word RegType_7,
  MR_Integer N_8);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_1[3][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][3];


struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s {
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_1;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s ll_backend__llds_out__llds_out_data_vector_common_2[64];

struct ll_backend__llds_out__llds_out_data__vector_common_type_5_0_s {
  const MR_Word ll_backend__llds_out__llds_out_data__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_5_0_s ll_backend__llds_out__llds_out_data_vector_common_5[10];



static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_1[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][6] = {
  /* row   0 */
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
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_data_scalar_common_3[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s ll_backend__llds_out__llds_out_data_vector_common_2[64] = {
  /* row   0 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   1 */
  {
    (MR_String) "string",
    (MR_String) "MR_STRING_CTOR_ADDR"
  },
  /* row   2 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   3 */
  {
    (MR_String) "uint32",
    (MR_String) "MR_UINT32_CTOR_ADDR"
  },
  /* row   4 */
  {
    (MR_String) "character",
    (MR_String) "MR_CHAR_CTOR_ADDR"
  },
  /* row   5 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   6 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row   7 */
  {
    (MR_String) "int16",
    (MR_String) "MR_INT16_CTOR_ADDR"
  },
  /* row   8 */
  {
    (MR_String) "int",
    (MR_String) "MR_INT_CTOR_ADDR"
  },
  /* row   9 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  11 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    (MR_String) "uint8",
    (MR_String) "MR_UINT8_CTOR_ADDR"
  },
  /* row  14 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  16 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  19 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    (MR_String) "uint",
    (MR_String) "MR_UINT_CTOR_ADDR"
  },
  /* row  21 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  22 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    (MR_String) "int8",
    (MR_String) "MR_INT8_CTOR_ADDR"
  },
  /* row  24 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  25 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  27 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    (MR_String) "uint64",
    (MR_String) "MR_UINT64_CTOR_ADDR"
  },
  /* row  29 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  30 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  31 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  32 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  33 */
  {
    (MR_String) "uint16",
    (MR_String) "MR_UINT16_CTOR_ADDR"
  },
  /* row  34 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  35 */
  {
    (MR_String) "float",
    (MR_String) "MR_FLOAT_CTOR_ADDR"
  },
  /* row  36 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  37 */
  {
    (MR_String) "int32",
    (MR_String) "MR_INT32_CTOR_ADDR"
  },
  /* row  38 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  39 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  40 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  41 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  42 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  43 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  44 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  45 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  46 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  47 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  48 */
  {
    (MR_String) "int64",
    (MR_String) "MR_INT64_CTOR_ADDR"
  },
  /* row  49 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  50 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  51 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  52 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  53 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  54 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  55 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  56 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  57 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  58 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  59 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  60 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  61 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  62 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  63 */
  {
    NULL,
    (MR_String) ((MR_Integer) 0)
  },
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_5_0_s ll_backend__llds_out__llds_out_data_vector_common_5[10] = {
  /* row   0 */   { (MR_Integer) 1 },
  /* row   1 */   { (MR_Integer) 1 },
  /* row   2 */   { (MR_Integer) 1 },
  /* row   3 */   { (MR_Integer) 1 },
  /* row   4 */   { (MR_Integer) 1 },
  /* row   5 */   { (MR_Integer) 1 },
  /* row   6 */   { (MR_Integer) 1 },
  /* row   7 */   { (MR_Integer) 1 },
  /* row   8 */   { (MR_Integer) 0 },
  /* row   9 */   { (MR_Integer) 0 },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1461__1_2_f_0(
  MR_String LambdaHeadVar__1_70,
  MR_Integer LambdaHeadVar__2_71)
{
  MR_Integer LambdaHeadVar__3_72;
  MR_Integer Var_73;
  MR_Integer Var_74;

  Var_74 = mercury__string__count_utf8_code_units_1_f_0(LambdaHeadVar__1_70);
  Var_73 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__2_71 + (MR_Unsigned) Var_74);
  LambdaHeadVar__3_72 = (MR_Integer) ((MR_Unsigned) Var_73 + (MR_Unsigned) 1);
  return LambdaHeadVar__3_72;
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_data_id_addr_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DataId_8)
{
  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "&");
  ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_6, Stream_7, DataId_8);
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_data_id_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word DataId_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Integer Var_13;

  ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_8, Stream_9, DataId_10, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_14, STATE_VARIABLE_DeclSet_15);
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__uint64_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
  uint64_t UInt64_5;
  MR_Word Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(3, Expr_3, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_6, (MR_Integer) 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      UInt64_5 = MR_unbox_uint64((MR_hl_field(3, Var_6, (MR_Integer) 1)));
      *Name_4 = mercury__string__uint64_to_string_1_f_0(UInt64_5);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__int64_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
  int64_t Int64_5;
  MR_Word Var_6;
  MR_String Int64Name0_7;
  MR_String Var_8;
  MR_String Var_9;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(3, Expr_3, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_6, (MR_Integer) 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      Int64_5 = MR_unbox_int64((MR_hl_field(3, Var_6, (MR_Integer) 1)));
      Int64Name0_7 = mercury__string__int64_to_string_1_f_0(Int64_5);
      Var_8 = (MR_String) "-";
      Var_9 = (MR_String) "neg";
      mercury__string__replace_all_4_p_0(Int64Name0_7, Var_8, Var_9, Name_4);
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(
  MR_Word LLDSType_3)
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
        MR_Word IntType_6 = ((MR_Unsigned) ((MR_hl_field(2, LLDSType_3, (MR_Integer) 0))) & (MR_Integer) 15);

        DirectFieldIntConstant_4 = ((&ll_backend__llds_out__llds_out_data_vector_common_5[0 + IntType_6]))->ll_backend__llds_out__llds_out_data__vector_common_type_5_0__vct_5_f_0;
      }
      break;
  }
  return DirectFieldIntConstant_4;
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_ptag_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  uint8_t PtagUInt8_6 = (uint8_t) (HeadVar__2_2);
  MR_Unsigned Var_19;
  MR_String Var_20;

  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "MR_mktag(");
  mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_6, &Var_19);
  mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_19, &Var_20);
  mercury__io__write_string_4_p_0(Stream_5, Var_20);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ")");
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Test_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;
  MR_Word Left_10;
  MR_Integer RightConst_11;
  MR_String OpStr_12;
  MR_String Var_13;

  succeeded = ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(Test_7, &Left_10, &RightConst_11, &OpStr_12, &Var_13);
  if (succeeded)
  {
    mercury__io__write_string_4_p_0(Stream_8, OpStr_12);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Left_10, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
    mercury__io__write_int_4_p_0(Stream_8, RightConst_11);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
  else
  {
    MR_String NegOpStr_16;
    MR_Word Left_155;
    MR_Integer RightConst_156;
    MR_Word InnerTest_14;
    MR_Word Var_33;
    MR_String Var_15;

    succeeded = ((((MR_tag((MR_Word) Test_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_33 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 1))));
      InnerTest_14 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 2))));
      succeeded = (Var_33 == (MR_Word) ((MR_Unsigned) 16U));
      if (succeeded)
        succeeded = ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(InnerTest_14, &Left_155, &RightConst_156, &Var_15, &NegOpStr_16);
    }
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_8, NegOpStr_16);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Left_155, Stream_8);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
      mercury__io__write_int_4_p_0(Stream_8, RightConst_156);
      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
    }
    else
    {
      MR_Word Rval_17;
      MR_Word Ptag_18;
      MR_Word Negated_19;

      succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Test_7, &Rval_17, &Ptag_18, &Negated_19);
      if (succeeded)
      {
        switch (Negated_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_PTAG_TEST(");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_PTAG_TESTR(");
            break;
        }
        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_17, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
        ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_8, Ptag_18);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      else
      {
        MR_Word Rval_150;
        MR_Word Ptag_151;
        MR_Word Negated_152;
        MR_Word Var_53;
        MR_Word InnerTest_120;

        succeeded = ((((MR_tag((MR_Word) Test_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Var_53 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 1))));
          InnerTest_120 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 2))));
          succeeded = (Var_53 == (MR_Word) ((MR_Unsigned) 16U));
          if (succeeded)
            succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(InnerTest_120, &Rval_150, &Ptag_151, &Negated_152);
        }
        if (succeeded)
        {
          switch (Negated_152) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_PTAG_TESTR(");
              break;
            case (MR_Integer) 1:
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_PTAG_TEST(");
              break;
          }
          ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_150, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
          ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_8, Ptag_151);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        else
        {
          MR_Unsigned Stag_21;
          MR_Word Rval_145;
          MR_Word Ptag_146;
          MR_Word Right_20;
          MR_Word Var_64;
          MR_Word Var_65;
          MR_Word Left_121;
          MR_Word Var_157;

          succeeded = ((((MR_tag((MR_Word) Test_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
          if (succeeded)
          {
            Var_64 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 1))));
            Left_121 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 2))));
            Right_20 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 3))));
            succeeded = (Var_64 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Var_65 = (MR_Integer) 0;
              succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Left_121, &Rval_145, &Ptag_146, &Var_157);
              if (succeeded)
              {
                succeeded = (Var_65 == Var_157);
                if (succeeded)
                  succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(Right_20, Rval_145, Ptag_146, &Stag_21);
              }
            }
          }
          if (succeeded)
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_RTAGS_TEST(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_145, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
            ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_8, Ptag_146);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
            mercury__io__write_uint_4_p_0(Stream_8, Stag_21);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          else
          {
            MR_Word Rval_138;
            MR_Word Ptag_139;
            MR_Unsigned Stag_142;
            MR_Word Var_77;
            MR_Word Var_78;
            MR_Word Var_79;
            MR_Word Left_122;
            MR_Word InnerTest_123;
            MR_Word Right_124;
            MR_Word Var_158;

            succeeded = ((((MR_tag((MR_Word) Test_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (succeeded)
            {
              Var_77 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 1))));
              InnerTest_123 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 2))));
              succeeded = (Var_77 == (MR_Word) ((MR_Unsigned) 16U));
              if (succeeded)
              {
                succeeded = ((((MR_tag((MR_Word) InnerTest_123)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, InnerTest_123, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  Var_78 = ((MR_Word) ((MR_hl_field(3, InnerTest_123, (MR_Integer) 1))));
                  Left_122 = ((MR_Word) ((MR_hl_field(3, InnerTest_123, (MR_Integer) 2))));
                  Right_124 = ((MR_Word) ((MR_hl_field(3, InnerTest_123, (MR_Integer) 3))));
                  succeeded = (Var_78 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_79 = (MR_Integer) 0;
                    succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(Left_122, &Rval_138, &Ptag_139, &Var_158);
                    if (succeeded)
                    {
                      succeeded = (Var_79 == Var_158);
                      if (succeeded)
                        succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(Right_124, Rval_138, Ptag_139, &Stag_142);
                    }
                  }
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_RTAGS_TESTR(");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_138, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
              ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_8, Ptag_139);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
              mercury__io__write_uint_4_p_0(Stream_8, Stag_142);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            else
            {
              MR_Word Rval_132;
              MR_Word Ptag_133;
              MR_Word Negated_134;
              MR_Unsigned Stag_135;

              succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(Test_7, &Rval_132, &Ptag_133, &Stag_135, &Negated_134);
              if (succeeded)
              {
                switch (Negated_134) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_LTAGS_TEST(");
                    break;
                  case (MR_Integer) 1:
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_LTAGS_TESTR(");
                    break;
                }
                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_132, Stream_8);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
                ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_8, Ptag_133);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
                mercury__io__write_uint_4_p_0(Stream_8, Stag_135);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
              }
              else
              {
                MR_Word Rval_127;
                MR_Word Ptag_128;
                MR_Word Negated_129;
                MR_Unsigned Stag_130;
                MR_Word Var_104;
                MR_Word InnerTest_125;

                succeeded = ((((MR_tag((MR_Word) Test_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  Var_104 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 1))));
                  InnerTest_125 = ((MR_Word) ((MR_hl_field(3, Test_7, (MR_Integer) 2))));
                  succeeded = (Var_104 == (MR_Word) ((MR_Unsigned) 16U));
                  if (succeeded)
                    succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(InnerTest_125, &Rval_127, &Ptag_128, &Stag_130, &Negated_129);
                }
                if (succeeded)
                {
                  switch (Negated_129) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_LTAGS_TESTR(");
                      break;
                    case (MR_Integer) 1:
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_LTAGS_TEST(");
                      break;
                  }
                  ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_127, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
                  ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_8, Ptag_128);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ",");
                  mercury__io__write_uint_4_p_0(Stream_8, Stag_130);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                else
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, Test_7, (MR_Word) ((MR_Unsigned) 0U), Stream_8);
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
  MR_Word Op_11;
  MR_Word Right_12;
  MR_Integer StagInt_13;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Word Var_19;

  if (succeeded)
  {
    Op_11 = ((MR_Word) ((MR_hl_field(3, Test_6, (MR_Integer) 1))));
    *Rval_7 = ((MR_Word) ((MR_hl_field(3, Test_6, (MR_Integer) 2))));
    Right_12 = ((MR_Word) ((MR_hl_field(3, Test_6, (MR_Integer) 3))));
    succeeded = ((MR_tag((MR_Word) Right_12)) == (MR_Integer) 2);
    if (succeeded)
    {
      *Ptag_8 = ((MR_Word) ((MR_hl_field(2, Right_12, (MR_Integer) 0))));
      Var_16 = ((MR_Word) ((MR_hl_field(2, Right_12, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, (MR_Integer) 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 1))));
        Var_18 = ((MR_Word) ((MR_hl_field(3, Var_16, (MR_Integer) 2))));
        succeeded = (Var_17 == (MR_Word) ((MR_Unsigned) 8U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) Var_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_19 = ((MR_Word) ((MR_hl_field(3, Var_18, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
            if (succeeded)
            {
              StagInt_13 = ((MR_Integer) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
              succeeded = mercury__uint__from_int_2_p_0(StagInt_13, Stag_9);
              if (succeeded)
              {
                if (((((MR_tag((MR_Word) Op_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_11, (MR_Integer) 0)))) == (MR_Integer) 8))))
                {
                  *Negated_10 = (MR_Integer) 0;
                  succeeded = MR_TRUE;
                }
                else
                if (((((MR_tag((MR_Word) Op_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_11, (MR_Integer) 0)))) == (MR_Integer) 9))))
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word Rval_6,
  MR_Word Ptag_7,
  MR_Unsigned * Stag_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
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
    Var_13 = ((MR_Word) ((MR_hl_field(3, Test_5, (MR_Integer) 1))));
    Left_9 = ((MR_Word) ((MR_hl_field(3, Test_5, (MR_Integer) 2))));
    Right_10 = ((MR_Word) ((MR_hl_field(3, Test_5, (MR_Integer) 3))));
    succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_13, (MR_Integer) 0)))) == (MR_Integer) 8)));
    if (succeeded)
    {
      Var_14 = ((MR_Unsigned) ((MR_hl_field(3, Var_13, (MR_Integer) 1))) & (MR_Integer) 15);
      succeeded = (Var_14 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) Left_9)) == (MR_Integer) 0);
        if (succeeded)
        {
          Var_15 = ((MR_Word) ((MR_hl_field(0, Left_9, (MR_Integer) 0))));
          succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            Var_16 = ((MR_Word) ((MR_hl_field(3, Var_15, (MR_Integer) 1))));
            Var_20 = ((MR_Word) ((MR_hl_field(3, Var_15, (MR_Integer) 2))));
            Zero_11 = ((MR_Word) ((MR_hl_field(3, Var_15, (MR_Integer) 3))));
            succeeded = ll_backend__llds____Unify____rval_0_0(Rval_6, Var_20);
            if (succeeded)
            {
              succeeded = (Var_16 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Var_21 = ((MR_Word) ((MR_hl_field(1, Var_16, (MR_Integer) 0))));
                Var_24 = (uint8_t) (Ptag_7);
                Var_25 = (uint8_t) (Var_21);
                succeeded = (Var_24 == Var_25);
                if (succeeded)
                {
                  succeeded = ((((MR_tag((MR_Word) Zero_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Zero_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_17 = ((MR_Word) ((MR_hl_field(3, Zero_11, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_18 = ((MR_Integer) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
                      succeeded = (Var_18 == (MR_Integer) 0);
                      if (succeeded)
                      {
                        succeeded = ((((MR_tag((MR_Word) Right_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Right_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (succeeded)
                        {
                          Var_19 = ((MR_Word) ((MR_hl_field(3, Right_10, (MR_Integer) 1))));
                          succeeded = ((MR_tag((MR_Word) Var_19)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            StagInt_12 = ((MR_Integer) ((MR_hl_field(1, Var_19, (MR_Integer) 0))));
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word Test_5,
  MR_Word * Rval_6,
  MR_Word * Ptag_7,
  MR_Word * Negated_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_5, (MR_Integer) 0)))) == (MR_Integer) 4)));
  MR_Word Op_9;
  MR_Word Left_10;
  MR_Word Right_11;
  MR_Integer PtagInt_12;
  uint8_t PtagUint8_13;
  MR_Word Var_16;
  MR_Word Var_17;

  if (succeeded)
  {
    Op_9 = ((MR_Word) ((MR_hl_field(3, Test_5, (MR_Integer) 1))));
    Left_10 = ((MR_Word) ((MR_hl_field(3, Test_5, (MR_Integer) 2))));
    Right_11 = ((MR_Word) ((MR_hl_field(3, Test_5, (MR_Integer) 3))));
    succeeded = ((((MR_tag((MR_Word) Left_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Left_10, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Var_16 = ((MR_Word) ((MR_hl_field(3, Left_10, (MR_Integer) 1))));
      *Rval_6 = ((MR_Word) ((MR_hl_field(3, Left_10, (MR_Integer) 2))));
      succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        succeeded = ((((MR_tag((MR_Word) Right_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Right_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_17 = ((MR_Word) ((MR_hl_field(3, Right_11, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
          if (succeeded)
          {
            PtagInt_12 = ((MR_Integer) ((MR_hl_field(1, Var_17, (MR_Integer) 0))));
            succeeded = mercury__uint8__from_int_2_p_0(PtagInt_12, &PtagUint8_13);
            if (succeeded)
            {
              *Ptag_7 = (MR_Word) (PtagUint8_13);
              if (((((MR_tag((MR_Word) Op_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_9, (MR_Integer) 0)))) == (MR_Integer) 8))))
              {
                *Negated_8 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
              else
              if (((((MR_tag((MR_Word) Op_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_9, (MR_Integer) 0)))) == (MR_Integer) 9))))
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(
  MR_Word Test_6,
  MR_Word * Left_7,
  MR_Integer * RightConst_8,
  MR_String * OpStr_9,
  MR_String * NegOpStr_10)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Test_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
  MR_Word Op_11;
  MR_Word Right_12;
  MR_Word Var_13;

  if (succeeded)
  {
    Op_11 = ((MR_Word) ((MR_hl_field(3, Test_6, (MR_Integer) 1))));
    *Left_7 = ((MR_Word) ((MR_hl_field(3, Test_6, (MR_Integer) 2))));
    Right_12 = ((MR_Word) ((MR_hl_field(3, Test_6, (MR_Integer) 3))));
    succeeded = ((((MR_tag((MR_Word) Right_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Right_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_13 = ((MR_Word) ((MR_hl_field(3, Right_12, (MR_Integer) 1))));
      succeeded = ((MR_tag((MR_Word) Var_13)) == (MR_Integer) 1);
      if (succeeded)
      {
        *RightConst_8 = ((MR_Integer) ((MR_hl_field(1, Var_13, (MR_Integer) 0))));
        switch (MR_tag((MR_Word) Op_11)) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) ((MR_hl_field(3, Op_11, (MR_Integer) 0))))) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Var_14 = ((MR_Unsigned) ((MR_hl_field(3, Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

                  succeeded = (Var_14 == (MR_Integer) 0);
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
                  MR_Word Var_15 = ((MR_Unsigned) ((MR_hl_field(3, Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

                  succeeded = (Var_15 == (MR_Integer) 0);
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
                  MR_Word Var_16 = ((MR_Unsigned) ((MR_hl_field(3, Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

                  succeeded = (Var_16 == (MR_Integer) 0);
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
                  MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(3, Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

                  succeeded = (Var_17 == (MR_Integer) 0);
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
                  MR_Word Var_18 = ((MR_Unsigned) ((MR_hl_field(3, Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

                  succeeded = (Var_18 == (MR_Integer) 0);
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
                  MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(3, Op_11, (MR_Integer) 1))) & (MR_Integer) 15);

                  succeeded = (Var_19 == (MR_Integer) 0);
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

void MR_CALL 
ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  uint8_t PtagUInt8_6 = (uint8_t) (HeadVar__2_2);

  mercury__io__write_uint8_4_p_0(Stream_5, PtagUInt8_6);
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Rvals_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Integer Var_13;

  ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_11_p_0(Info_8, Stream_9, Rvals_10, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_14, STATE_VARIABLE_DeclSet_15);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_11_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_String FirstIndent_4,
  MR_String LaterIndent_5,
  MR_Integer STATE_VARIABLE_N_0_6,
  MR_Integer * STATE_VARIABLE_N_7,
  MR_Word STATE_VARIABLE_DeclSet_0_8,
  MR_Word * STATE_VARIABLE_DeclSet_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *STATE_VARIABLE_DeclSet_9 = STATE_VARIABLE_DeclSet_0_8;
      *STATE_VARIABLE_N_7 = STATE_VARIABLE_N_0_6;
    }
    else
    {
      MR_Word LeftOverRvals_35;
      MR_Integer STATE_VARIABLE_N_43_43;
      MR_Word STATE_VARIABLE_DeclSet_44_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_8;

      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_13_p_0(Info_1, Stream_2, HeadVar__3_3, &LeftOverRvals_35, (MR_Integer) 1000, FirstIndent_4, LaterIndent_5, STATE_VARIABLE_N_0_6, &STATE_VARIABLE_N_43_43, STATE_VARIABLE_DeclSet_0_8, &STATE_VARIABLE_DeclSet_44_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LeftOverRvals_35;
      next_value_of_STATE_VARIABLE_N_0_6 = STATE_VARIABLE_N_43_43;
      next_value_of_STATE_VARIABLE_DeclSet_0_8 = STATE_VARIABLE_DeclSet_44_44;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      STATE_VARIABLE_N_0_6 = next_value_of_STATE_VARIABLE_N_0_6;
      STATE_VARIABLE_DeclSet_0_8 = next_value_of_STATE_VARIABLE_DeclSet_0_8;
      continue;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_13_p_0(
  MR_Word Info_1,
  MR_Word Stream_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Integer Count_5,
  MR_String FirstIndent_6,
  MR_String LaterIndent_7,
  MR_Integer STATE_VARIABLE_N_0_8,
  MR_Integer * STATE_VARIABLE_N_9,
  MR_Word STATE_VARIABLE_DeclSet_0_10,
  MR_Word * STATE_VARIABLE_DeclSet_11)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_DeclSet_11 = STATE_VARIABLE_DeclSet_0_10;
      *STATE_VARIABLE_N_9 = STATE_VARIABLE_N_0_8;
    }
    else
    {
      MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_Word Rvals_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));

      succeeded = (Count_5 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_N_46_46;
        MR_Word STATE_VARIABLE_DeclSet_47_47;
        MR_Integer Var_49;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_Count_5;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_8;
        MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_10;

        ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_1, Stream_2, Rval_30, FirstIndent_6, LaterIndent_7, STATE_VARIABLE_N_0_8, &STATE_VARIABLE_N_46_46, STATE_VARIABLE_DeclSet_0_10, &STATE_VARIABLE_DeclSet_47_47);
        Var_49 = (MR_Integer) ((MR_Unsigned) Count_5 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Rvals_31;
        next_value_of_Count_5 = Var_49;
        next_value_of_STATE_VARIABLE_N_0_8 = STATE_VARIABLE_N_46_46;
        next_value_of_STATE_VARIABLE_DeclSet_0_10 = STATE_VARIABLE_DeclSet_47_47;
        HeadVar__3_3 = next_value_of_HeadVar__3_3;
        Count_5 = next_value_of_Count_5;
        STATE_VARIABLE_N_0_8 = next_value_of_STATE_VARIABLE_N_0_8;
        STATE_VARIABLE_DeclSet_0_10 = next_value_of_STATE_VARIABLE_DeclSet_0_10;
        continue;
      }
      else
      {
        *HeadVar__4_4 = HeadVar__3_3;
        *STATE_VARIABLE_DeclSet_11 = STATE_VARIABLE_DeclSet_0_10;
        *STATE_VARIABLE_N_9 = STATE_VARIABLE_N_0_8;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Rval_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Integer Var_13;

  ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_8, Stream_9, Rval_10, (MR_String) "", (MR_String) "\t", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_14, STATE_VARIABLE_DeclSet_15);
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Rval_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Integer Var_13;

  ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_8, Stream_9, Rval_10, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_14, STATE_VARIABLE_DeclSet_15);
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 1:
      {
        MR_Word RegType_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer RegNum_4 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

        *HeadVar__2_2 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_3, RegNum_4);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
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
            MR_Integer N_15 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
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
            MR_Integer N_5 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));
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
            MR_Word Type_20 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer N_21 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
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
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), Var_31, &Var_35);
            Var_42 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) ")");
            Var_44 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_42);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_21, &Var_45);
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

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_as_word_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Lval_8)
{
  MR_bool succeeded;
  MR_Word ActualType_10;

  ll_backend__llds__lval_type_2_p_0(Lval_8, &ActualType_10);
  if ((ActualType_10 == (MR_Word) ((MR_Unsigned) 0U)))
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) ActualType_10)) == (MR_Integer) 2))
  {
    MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_10, (MR_Integer) 0))) & (MR_Integer) 15);

    switch (Var_29) {
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
    succeeded = ll_backend__llds____Unify____llds_type_0_0(ActualType_10, (MR_Word) ((MR_Unsigned) 20U));
  if (succeeded)
    ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_7, Lval_8);
  else
  {
    succeeded = (ActualType_10 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
      {
        mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_as_word\'/5", (MR_String) "float");
        return;
      }
    else
    {
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_LVALUE_CAST(MR_Word,");
      ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_7, Lval_8);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_for_assign_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Lval_9,
  MR_Word * Type_10)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Lval_9)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Lval_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succip_word");
          }
          break;
        case (MR_Integer) 1:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_maxfr_word");
          }
          break;
        case (MR_Integer) 2:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_curfr_word");
          }
          break;
        case (MR_Integer) 3:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_hp_word");
          }
          break;
        case (MR_Integer) 4:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_sp_word");
          }
          break;
        case (MR_Integer) 5:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 12U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_parent_sp");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RegType_12 = ((MR_Unsigned) ((MR_hl_field(1, Lval_9, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(1, Lval_9, (MR_Integer) 1))));

        switch (RegType_12) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *Type_10 = (MR_Word) ((MR_Unsigned) 4U);
            break;
          case (MR_Integer) 0:
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            break;
        }
        ll_backend__llds_out__llds_out_data__output_reg_5_p_0(Stream_8, RegType_12, Num_13);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word RegType_130 = ((MR_Unsigned) ((MR_hl_field(2, Lval_9, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Num_131 = ((MR_Integer) ((MR_hl_field(2, Lval_9, (MR_Integer) 1))));

        switch (RegType_130) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              *Type_10 = (MR_Word) ((MR_Unsigned) 4U);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tempf");
              mercury__io__write_int_4_p_0(Stream_8, Num_131);
            }
            break;
          case (MR_Integer) 0:
            {
              *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tempr");
              mercury__io__write_int_4_p_0(Stream_8, Num_131);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval_9, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));
            MR_String Var_135;

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            succeeded = (N_14 < (MR_Integer) 0);
            if (succeeded)
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/6", (MR_String) "stack var out of range");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_sv(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_14, &Var_135);
            mercury__io__write_string_4_p_0(Stream_8, Var_135);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_123 = ((MR_Integer) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));
            MR_String Var_146;

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            succeeded = (N_123 < (MR_Integer) 0);
            if (succeeded)
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/6", (MR_String) "parent stack var out of range");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_parent_sv(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_123, &Var_146);
            mercury__io__write_string_4_p_0(Stream_8, Var_146);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_124 = ((MR_Integer) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));
            MR_String Var_157;

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            succeeded = (N_124 <= (MR_Integer) 0);
            if (succeeded)
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/6", (MR_String) "frame var out of range");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_fv(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_124, &Var_157);
            mercury__io__write_string_4_p_0(Stream_8, Var_157);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StackType_15 = ((MR_Unsigned) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer SlotNum_16 = ((MR_Integer) ((MR_hl_field(3, Lval_9, (MR_Integer) 2))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 4U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "* (MR_Float *) ");
            ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(Info_7, Stream_8, StackType_15, SlotNum_16);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval_128 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succip_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_128, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_17 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succfr_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_17, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_127 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_redoip_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_127, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_126 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_redofr_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_126, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_125 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_prevfr_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_125, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybePtag_18 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));
            MR_Word FieldNumRval_19 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 3))));
            MR_Word Rval_129 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 2))));
            MR_Integer FieldNum_21;
            MR_Word Var_106;

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            if ((MaybePtag_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mask_field(");
            else
            {
              uint8_t PtagUInt8_20;
              MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, MaybePtag_18, (MR_Integer) 0))));
              MR_Unsigned Var_169;
              MR_String Var_170;

              PtagUInt8_20 = (uint8_t) (Var_95);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tfield(");
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_169);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_169, &Var_170);
              mercury__io__write_string_4_p_0(Stream_8, Var_170);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_129, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) FieldNumRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_19, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_106 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_19, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_Integer) 1);
              if (succeeded)
                FieldNum_21 = ((MR_Integer) ((MR_hl_field(1, Var_106, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_8, FieldNum_21);
            else
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, FieldNumRval_19, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, Lval_9);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word GlobalVar_24 = ((MR_Word) ((MR_hl_field(3, Lval_9, (MR_Integer) 1))));
            MR_String Var_121;

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            Var_121 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_24);
            mercury__io__write_string_4_p_0(Stream_8, Var_121);
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/6", (MR_String) "lvar");
            return;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Lval_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Integer Var_13;

  ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_11_p_0(Info_8, Stream_9, Lval_10, (MR_String) "\t", (MR_String) "\t", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_14, STATE_VARIABLE_DeclSet_15);
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_7_p_0(
  MR_Word Info_8,
  MR_Word Stream_9,
  MR_Word Lval_10,
  MR_Word STATE_VARIABLE_DeclSet_0_14,
  MR_Word * STATE_VARIABLE_DeclSet_15)
{
  MR_Integer Var_13;

  ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_11_p_0(Info_8, Stream_9, Lval_10, (MR_String) "", (MR_String) "", (MR_Integer) 0, &Var_13, STATE_VARIABLE_DeclSet_0_14, STATE_VARIABLE_DeclSet_15);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_11_p_0(
  MR_Word tscc_proc_1_input_1_Info_12,
  MR_Word tscc_proc_1_input_2_Stream_13,
  MR_Word tscc_proc_1_input_3_Lval_14,
  MR_String tscc_proc_1_input_4_FirstIndent_15,
  MR_String tscc_proc_1_input_5_LaterIndent_16,
  MR_Integer tscc_proc_1_input_6_STATE_VARIABLE_N_0_34,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37)
{
  MR_Word tscc_proc_2_input_1_Info_12;
  MR_Word tscc_proc_2_input_2_Stream_13;
  MR_Word tscc_proc_2_input_3_Rval_14;
  MR_String tscc_proc_2_input_4_FirstIndent_15;
  MR_String tscc_proc_2_input_5_LaterIndent_16;
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
  MR_Word tscc_proc_3_input_1_Info_12;
  MR_Word tscc_proc_3_input_2_Stream_13;
  MR_Word tscc_proc_3_input_3_MemRef_14;
  MR_String tscc_proc_3_input_4_FirstIndent_15;
  MR_String tscc_proc_3_input_5_LaterIndent_16;
  MR_Integer tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
  MR_Word tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
  MR_Integer tscc_output_1_STATE_VARIABLE_N_35;
  MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_37;

  // The code for TSCC PROC 1: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/11-0
  ;
  // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/11-0
  ;
  // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/11-0
  ;
  ;
  goto top_of_proc_1;
top_of_proc_1:;
  {
    MR_Word Info_12 = tscc_proc_1_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_1_input_2_Stream_13;
    MR_Word Lval_14 = tscc_proc_1_input_3_Lval_14;
    MR_String FirstIndent_15 = tscc_proc_1_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_1_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_34 = tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
    MR_Integer STATE_VARIABLE_N_35;
    MR_Word STATE_VARIABLE_DeclSet_0_36 = tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
    MR_Word STATE_VARIABLE_DeclSet_37;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 4:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 5:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
          STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
          STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_58;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_57;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_55;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_54;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 2))));
              MR_Word FieldNum_22 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 3))));
              MR_Integer STATE_VARIABLE_N_40_40;
              MR_Word STATE_VARIABLE_DeclSet_41_41;
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, Rval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_34, &STATE_VARIABLE_N_40_40, STATE_VARIABLE_DeclSet_0_36, &STATE_VARIABLE_DeclSet_41_41);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              next_value_of_tscc_proc_2_input_3_Rval_14 = FieldNum_22;
              next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_40_40;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_41_41;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_53;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CGlobalVar_33 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_49, 1) = ((MR_Box) (CGlobalVar_33));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_49, STATE_VARIABLE_DeclSet_0_36);
              if (!(succeeded))
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/11", (MR_String) "global_var_ref");
                  return;
                }
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 12:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_35;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_37;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_12 = tscc_proc_2_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_2_input_2_Stream_13;
    MR_Word Rval_14 = tscc_proc_2_input_3_Rval_14;
    MR_String FirstIndent_15 = tscc_proc_2_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_2_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_85 = tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
    MR_Integer STATE_VARIABLE_N_86;
    MR_Word STATE_VARIABLE_DeclSet_0_87 = tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
    MR_Word STATE_VARIABLE_DeclSet_88;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_20 = ((MR_Word) ((MR_hl_field(0, Rval_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Lval_14 = Lval_20;
          MR_String next_value_of_tscc_proc_1_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_1_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = STATE_VARIABLE_DeclSet_0_87;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_12 = next_value_of_tscc_proc_1_input_1_Info_12;
          tscc_proc_1_input_2_Stream_13 = next_value_of_tscc_proc_1_input_2_Stream_13;
          tscc_proc_1_input_3_Lval_14 = next_value_of_tscc_proc_1_input_3_Lval_14;
          tscc_proc_1_input_4_FirstIndent_15 = next_value_of_tscc_proc_1_input_4_FirstIndent_15;
          tscc_proc_1_input_5_LaterIndent_16 = next_value_of_tscc_proc_1_input_5_LaterIndent_16;
          tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
          tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/11", (MR_String) "var");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_861 = ((MR_Word) ((MR_hl_field(2, Rval_14, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_861;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
              STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_23 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_23, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        int64_t Int64Val_33 = MR_unbox_int64((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedInt64s_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_115_115;
                        MR_Word Int64Label_36;

                        succeeded = (UnboxedInt64s_34 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_35 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              Int64Label_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Int64Label_36, 0) = MR_box_int64(Int64Val_33);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Int64Label_36, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_115_115);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String Int64Name_37;
                          MR_String Int64ValStr_38;

                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_115_115;
                          ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_33, &Int64Name_37);
                          Int64ValStr_38 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_33);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const int64_t mercury_int64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, Int64Name_37);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, Int64ValStr_38);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t UInt64Val_39 = MR_unbox_uint64((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedInt64s_176 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_177 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word UInt64Label_40;
                        MR_Word STATE_VARIABLE_DeclSet_127_127;

                        succeeded = (UnboxedInt64s_176 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_177 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              UInt64Label_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, UInt64Label_40, 0) = MR_box_uint64(UInt64Val_39);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_127_127);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String UInt64Name_41;
                          MR_String UInt64ValStr_42;

                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_127_127, &STATE_VARIABLE_DeclSet_88);
                          ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_39, &UInt64Name_41);
                          UInt64ValStr_42 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_39);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const uint64_t mercury_uint64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64Name_41);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64ValStr_42);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Float FloatVal_27 = MR_unbox_float((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedFloat_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_String FloatName_30;
                        MR_Word STATE_VARIABLE_DeclSet_103_103;
                        MR_Word FloatLabel_31;

                        succeeded = (UnboxedFloat_28 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_29 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_27, &FloatName_30);
                            {
                              FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, FloatLabel_31, 0) = ((MR_Box) (FloatName_30));
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_103_103);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatValStr_32;

                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_103_103;
                          FloatValStr_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const MR_Float mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_30);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatValStr_32);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word CodeAddress_24 = ((MR_Word) ((MR_hl_field(3, Const_23, (MR_Integer) 1))));

                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_11_p_0(Info_12, Stream_13, CodeAddress_24, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_86, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_88);
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId_25 = ((MR_Word) ((MR_hl_field(3, Const_23, (MR_Integer) 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_25, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_86, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_88);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_56 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_862 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_862;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_59 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
              MR_Word SubRvalA_60 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word SubRvalB_61 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 3))));
              MR_Integer STATE_VARIABLE_N_142_142;
              MR_Word STATE_VARIABLE_DeclSet_143_143;
              MR_Integer STATE_VARIABLE_N_145_145;
              MR_Word STATE_VARIABLE_DeclSet_146_146;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalA_60, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_142_142, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_143_143);
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalB_61, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_142_142, &STATE_VARIABLE_N_145_145, STATE_VARIABLE_DeclSet_143_143, &STATE_VARIABLE_DeclSet_146_146);
              switch (MR_tag((MR_Word) Op_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word UnboxFloat_63 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_181 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_148;
                        MR_String FloatName_179;
                        MR_Word FloatLabel_178;

                        succeeded = (UnboxFloat_63 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_181 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_179);
                            if (succeeded)
                            {
                              {
                                FloatLabel_178 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_178, 0) = ((MR_Box) (FloatName_179));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_178, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_148);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_148;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_179);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "+");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word UnboxFloat_789 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_814 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_764;
                        MR_String FloatName_787;
                        MR_Word FloatLabel_742;

                        succeeded = (UnboxFloat_789 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_814 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_787);
                            if (succeeded)
                            {
                              {
                                FloatLabel_742 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_742, 0) = ((MR_Box) (FloatName_787));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_742, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_764);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_764;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_787);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "-");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word UnboxFloat_624 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_649 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_599;
                        MR_String FloatName_622;
                        MR_Word FloatLabel_577;

                        succeeded = (UnboxFloat_624 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_649 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_622);
                            if (succeeded)
                            {
                              {
                                FloatLabel_577 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_577, 0) = ((MR_Box) (FloatName_622));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_577, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_599);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_599;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_622);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "*");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word UnboxFloat_459 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_484 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_434;
                        MR_String FloatName_457;
                        MR_Word FloatLabel_412;

                        succeeded = (UnboxFloat_459 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_484 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_457);
                            if (succeeded)
                            {
                              {
                                FloatLabel_412 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_412, 0) = ((MR_Box) (FloatName_457));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_412, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_434);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_434;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_457);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "/");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 22:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 27:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 28:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Op_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_84 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_3_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_3_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_3_input_3_MemRef_14 = MemRef_84;
              MR_String next_value_of_tscc_proc_3_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_3_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_Info_12 = next_value_of_tscc_proc_3_input_1_Info_12;
              tscc_proc_3_input_2_Stream_13 = next_value_of_tscc_proc_3_input_2_Stream_13;
              tscc_proc_3_input_3_MemRef_14 = next_value_of_tscc_proc_3_input_3_MemRef_14;
              tscc_proc_3_input_4_FirstIndent_15 = next_value_of_tscc_proc_3_input_4_FirstIndent_15;
              tscc_proc_3_input_5_LaterIndent_16 = next_value_of_tscc_proc_3_input_5_LaterIndent_16;
              tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
              tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
              goto top_of_proc_3;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_86;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_88;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_12 = tscc_proc_3_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_3_input_2_Stream_13;
    MR_Word MemRef_14 = tscc_proc_3_input_3_MemRef_14;
    MR_String FirstIndent_15 = tscc_proc_3_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_3_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_24 = tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
    MR_Integer STATE_VARIABLE_N_25;
    MR_Word STATE_VARIABLE_DeclSet_0_26 = tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
    MR_Word STATE_VARIABLE_DeclSet_27;

    switch (MR_tag((MR_Word) MemRef_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(0, MemRef_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_36;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(1, MemRef_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_20;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BaseRval_21 = ((MR_Word) ((MR_hl_field(2, MemRef_14, (MR_Integer) 0))));
          MR_Word OffsetRval_23 = ((MR_Word) ((MR_hl_field(2, MemRef_14, (MR_Integer) 2))));
          MR_Integer STATE_VARIABLE_N_33_33;
          MR_Word STATE_VARIABLE_DeclSet_34_34;
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;

          ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, BaseRval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_24, &STATE_VARIABLE_N_33_33, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_34_34);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          next_value_of_tscc_proc_2_input_3_Rval_14 = OffsetRval_23;
          next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_33_33;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_34_34;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_25;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_N_35 = tscc_output_1_STATE_VARIABLE_N_35;
  *tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37 = tscc_output_2_STATE_VARIABLE_DeclSet_37;
  return;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(
  MR_Word tscc_proc_2_input_1_Info_12,
  MR_Word tscc_proc_2_input_2_Stream_13,
  MR_Word tscc_proc_2_input_3_Rval_14,
  MR_String tscc_proc_2_input_4_FirstIndent_15,
  MR_String tscc_proc_2_input_5_LaterIndent_16,
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_85,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37)
{
  MR_Word tscc_proc_1_input_1_Info_12;
  MR_Word tscc_proc_1_input_2_Stream_13;
  MR_Word tscc_proc_1_input_3_Lval_14;
  MR_String tscc_proc_1_input_4_FirstIndent_15;
  MR_String tscc_proc_1_input_5_LaterIndent_16;
  MR_Integer tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
  MR_Word tscc_proc_3_input_1_Info_12;
  MR_Word tscc_proc_3_input_2_Stream_13;
  MR_Word tscc_proc_3_input_3_MemRef_14;
  MR_String tscc_proc_3_input_4_FirstIndent_15;
  MR_String tscc_proc_3_input_5_LaterIndent_16;
  MR_Integer tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
  MR_Word tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
  MR_Integer tscc_output_1_STATE_VARIABLE_N_35;
  MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_37;

  // The code for TSCC PROC 2: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/11-0
  ;
  // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/11-0
  ;
  // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/11-0
  ;
  ;
  goto top_of_proc_2;
top_of_proc_1:;
  {
    MR_Word Info_12 = tscc_proc_1_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_1_input_2_Stream_13;
    MR_Word Lval_14 = tscc_proc_1_input_3_Lval_14;
    MR_String FirstIndent_15 = tscc_proc_1_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_1_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_34 = tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
    MR_Integer STATE_VARIABLE_N_35;
    MR_Word STATE_VARIABLE_DeclSet_0_36 = tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
    MR_Word STATE_VARIABLE_DeclSet_37;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 4:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 5:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
          STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
          STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_58;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_57;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_55;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_54;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 2))));
              MR_Word FieldNum_22 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 3))));
              MR_Integer STATE_VARIABLE_N_40_40;
              MR_Word STATE_VARIABLE_DeclSet_41_41;
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, Rval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_34, &STATE_VARIABLE_N_40_40, STATE_VARIABLE_DeclSet_0_36, &STATE_VARIABLE_DeclSet_41_41);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              next_value_of_tscc_proc_2_input_3_Rval_14 = FieldNum_22;
              next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_40_40;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_41_41;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_53;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CGlobalVar_33 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_49, 1) = ((MR_Box) (CGlobalVar_33));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_49, STATE_VARIABLE_DeclSet_0_36);
              if (!(succeeded))
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/11", (MR_String) "global_var_ref");
                  return;
                }
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 12:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_35;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_37;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_12 = tscc_proc_2_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_2_input_2_Stream_13;
    MR_Word Rval_14 = tscc_proc_2_input_3_Rval_14;
    MR_String FirstIndent_15 = tscc_proc_2_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_2_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_85 = tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
    MR_Integer STATE_VARIABLE_N_86;
    MR_Word STATE_VARIABLE_DeclSet_0_87 = tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
    MR_Word STATE_VARIABLE_DeclSet_88;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_20 = ((MR_Word) ((MR_hl_field(0, Rval_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Lval_14 = Lval_20;
          MR_String next_value_of_tscc_proc_1_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_1_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = STATE_VARIABLE_DeclSet_0_87;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_12 = next_value_of_tscc_proc_1_input_1_Info_12;
          tscc_proc_1_input_2_Stream_13 = next_value_of_tscc_proc_1_input_2_Stream_13;
          tscc_proc_1_input_3_Lval_14 = next_value_of_tscc_proc_1_input_3_Lval_14;
          tscc_proc_1_input_4_FirstIndent_15 = next_value_of_tscc_proc_1_input_4_FirstIndent_15;
          tscc_proc_1_input_5_LaterIndent_16 = next_value_of_tscc_proc_1_input_5_LaterIndent_16;
          tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
          tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/11", (MR_String) "var");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_861 = ((MR_Word) ((MR_hl_field(2, Rval_14, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_861;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
              STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_23 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_23, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        int64_t Int64Val_33 = MR_unbox_int64((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedInt64s_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_115_115;
                        MR_Word Int64Label_36;

                        succeeded = (UnboxedInt64s_34 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_35 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              Int64Label_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Int64Label_36, 0) = MR_box_int64(Int64Val_33);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Int64Label_36, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_115_115);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String Int64Name_37;
                          MR_String Int64ValStr_38;

                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_115_115;
                          ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_33, &Int64Name_37);
                          Int64ValStr_38 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_33);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const int64_t mercury_int64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, Int64Name_37);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, Int64ValStr_38);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t UInt64Val_39 = MR_unbox_uint64((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedInt64s_176 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_177 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word UInt64Label_40;
                        MR_Word STATE_VARIABLE_DeclSet_127_127;

                        succeeded = (UnboxedInt64s_176 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_177 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              UInt64Label_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, UInt64Label_40, 0) = MR_box_uint64(UInt64Val_39);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_127_127);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String UInt64Name_41;
                          MR_String UInt64ValStr_42;

                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_127_127, &STATE_VARIABLE_DeclSet_88);
                          ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_39, &UInt64Name_41);
                          UInt64ValStr_42 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_39);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const uint64_t mercury_uint64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64Name_41);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64ValStr_42);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Float FloatVal_27 = MR_unbox_float((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedFloat_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_String FloatName_30;
                        MR_Word STATE_VARIABLE_DeclSet_103_103;
                        MR_Word FloatLabel_31;

                        succeeded = (UnboxedFloat_28 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_29 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_27, &FloatName_30);
                            {
                              FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, FloatLabel_31, 0) = ((MR_Box) (FloatName_30));
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_103_103);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatValStr_32;

                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_103_103;
                          FloatValStr_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const MR_Float mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_30);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatValStr_32);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word CodeAddress_24 = ((MR_Word) ((MR_hl_field(3, Const_23, (MR_Integer) 1))));

                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_11_p_0(Info_12, Stream_13, CodeAddress_24, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_86, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_88);
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId_25 = ((MR_Word) ((MR_hl_field(3, Const_23, (MR_Integer) 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_25, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_86, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_88);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_56 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_862 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_862;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_59 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
              MR_Word SubRvalA_60 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word SubRvalB_61 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 3))));
              MR_Integer STATE_VARIABLE_N_142_142;
              MR_Word STATE_VARIABLE_DeclSet_143_143;
              MR_Integer STATE_VARIABLE_N_145_145;
              MR_Word STATE_VARIABLE_DeclSet_146_146;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalA_60, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_142_142, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_143_143);
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalB_61, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_142_142, &STATE_VARIABLE_N_145_145, STATE_VARIABLE_DeclSet_143_143, &STATE_VARIABLE_DeclSet_146_146);
              switch (MR_tag((MR_Word) Op_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word UnboxFloat_63 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_181 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_148;
                        MR_String FloatName_179;
                        MR_Word FloatLabel_178;

                        succeeded = (UnboxFloat_63 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_181 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_179);
                            if (succeeded)
                            {
                              {
                                FloatLabel_178 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_178, 0) = ((MR_Box) (FloatName_179));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_178, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_148);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_148;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_179);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "+");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word UnboxFloat_789 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_814 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_764;
                        MR_String FloatName_787;
                        MR_Word FloatLabel_742;

                        succeeded = (UnboxFloat_789 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_814 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_787);
                            if (succeeded)
                            {
                              {
                                FloatLabel_742 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_742, 0) = ((MR_Box) (FloatName_787));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_742, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_764);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_764;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_787);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "-");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word UnboxFloat_624 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_649 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_599;
                        MR_String FloatName_622;
                        MR_Word FloatLabel_577;

                        succeeded = (UnboxFloat_624 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_649 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_622);
                            if (succeeded)
                            {
                              {
                                FloatLabel_577 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_577, 0) = ((MR_Box) (FloatName_622));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_577, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_599);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_599;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_622);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "*");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word UnboxFloat_459 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_484 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_434;
                        MR_String FloatName_457;
                        MR_Word FloatLabel_412;

                        succeeded = (UnboxFloat_459 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_484 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_457);
                            if (succeeded)
                            {
                              {
                                FloatLabel_412 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_412, 0) = ((MR_Box) (FloatName_457));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_412, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_434);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_434;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_457);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "/");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 22:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 27:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 28:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Op_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_84 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_3_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_3_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_3_input_3_MemRef_14 = MemRef_84;
              MR_String next_value_of_tscc_proc_3_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_3_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_Info_12 = next_value_of_tscc_proc_3_input_1_Info_12;
              tscc_proc_3_input_2_Stream_13 = next_value_of_tscc_proc_3_input_2_Stream_13;
              tscc_proc_3_input_3_MemRef_14 = next_value_of_tscc_proc_3_input_3_MemRef_14;
              tscc_proc_3_input_4_FirstIndent_15 = next_value_of_tscc_proc_3_input_4_FirstIndent_15;
              tscc_proc_3_input_5_LaterIndent_16 = next_value_of_tscc_proc_3_input_5_LaterIndent_16;
              tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
              tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
              goto top_of_proc_3;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_86;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_88;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_12 = tscc_proc_3_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_3_input_2_Stream_13;
    MR_Word MemRef_14 = tscc_proc_3_input_3_MemRef_14;
    MR_String FirstIndent_15 = tscc_proc_3_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_3_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_24 = tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
    MR_Integer STATE_VARIABLE_N_25;
    MR_Word STATE_VARIABLE_DeclSet_0_26 = tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
    MR_Word STATE_VARIABLE_DeclSet_27;

    switch (MR_tag((MR_Word) MemRef_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(0, MemRef_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_36;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(1, MemRef_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_20;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BaseRval_21 = ((MR_Word) ((MR_hl_field(2, MemRef_14, (MR_Integer) 0))));
          MR_Word OffsetRval_23 = ((MR_Word) ((MR_hl_field(2, MemRef_14, (MR_Integer) 2))));
          MR_Integer STATE_VARIABLE_N_33_33;
          MR_Word STATE_VARIABLE_DeclSet_34_34;
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;

          ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, BaseRval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_24, &STATE_VARIABLE_N_33_33, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_34_34);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          next_value_of_tscc_proc_2_input_3_Rval_14 = OffsetRval_23;
          next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_33_33;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_34_34;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_25;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_N_35 = tscc_output_1_STATE_VARIABLE_N_35;
  *tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37 = tscc_output_2_STATE_VARIABLE_DeclSet_37;
  return;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_11_p_0(
  MR_Word tscc_proc_3_input_1_Info_12,
  MR_Word tscc_proc_3_input_2_Stream_13,
  MR_Word tscc_proc_3_input_3_MemRef_14,
  MR_String tscc_proc_3_input_4_FirstIndent_15,
  MR_String tscc_proc_3_input_5_LaterIndent_16,
  MR_Integer tscc_proc_3_input_6_STATE_VARIABLE_N_0_24,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37)
{
  MR_Word tscc_proc_1_input_1_Info_12;
  MR_Word tscc_proc_1_input_2_Stream_13;
  MR_Word tscc_proc_1_input_3_Lval_14;
  MR_String tscc_proc_1_input_4_FirstIndent_15;
  MR_String tscc_proc_1_input_5_LaterIndent_16;
  MR_Integer tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
  MR_Word tscc_proc_2_input_1_Info_12;
  MR_Word tscc_proc_2_input_2_Stream_13;
  MR_Word tscc_proc_2_input_3_Rval_14;
  MR_String tscc_proc_2_input_4_FirstIndent_15;
  MR_String tscc_proc_2_input_5_LaterIndent_16;
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
  MR_Integer tscc_output_1_STATE_VARIABLE_N_35;
  MR_Word tscc_output_2_STATE_VARIABLE_DeclSet_37;

  // The code for TSCC PROC 3: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/11-0.
  ;
  // Setup for mutual tailcalls optimized into a loop.
  ;
  // The mutually recursive procedures are:
  ;
  ;
  // proc 1 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_lval_decls_format/11-0
  ;
  // proc 2 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_rval_decls_format/11-0
  ;
  // proc 3 in TSCC: pred ll_backend.llds_out.llds_out_data.output_record_mem_ref_decls_format/11-0
  ;
  ;
  goto top_of_proc_3;
top_of_proc_1:;
  {
    MR_Word Info_12 = tscc_proc_1_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_1_input_2_Stream_13;
    MR_Word Lval_14 = tscc_proc_1_input_3_Lval_14;
    MR_String FirstIndent_15 = tscc_proc_1_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_1_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_34 = tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
    MR_Integer STATE_VARIABLE_N_35;
    MR_Word STATE_VARIABLE_DeclSet_0_36 = tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
    MR_Word STATE_VARIABLE_DeclSet_37;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Lval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 4:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 5:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
          STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
          STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_58;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_57;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_55;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_54;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 2))));
              MR_Word FieldNum_22 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 3))));
              MR_Integer STATE_VARIABLE_N_40_40;
              MR_Word STATE_VARIABLE_DeclSet_41_41;
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, Rval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_34, &STATE_VARIABLE_N_40_40, STATE_VARIABLE_DeclSet_0_36, &STATE_VARIABLE_DeclSet_41_41);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              next_value_of_tscc_proc_2_input_3_Rval_14 = FieldNum_22;
              next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_40_40;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_41_41;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_53;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CGlobalVar_33 = ((MR_Word) ((MR_hl_field(3, Lval_14, (MR_Integer) 1))));
              MR_Word Var_49;

              {
                Var_49 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_49, 0) = ((MR_Box) ((MR_Unsigned) 6U));
                MR_hl_field(3, Var_49, 1) = ((MR_Box) (CGlobalVar_33));
              }
              succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(Var_49, STATE_VARIABLE_DeclSet_0_36);
              if (!(succeeded))
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/11", (MR_String) "global_var_ref");
                  return;
                }
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
          case (MR_Integer) 12:
            {
              STATE_VARIABLE_N_35 = STATE_VARIABLE_N_0_34;
              STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_0_36;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_35;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_37;
    goto tscc_end;
  }
top_of_proc_2:;
  {
    MR_Word Info_12 = tscc_proc_2_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_2_input_2_Stream_13;
    MR_Word Rval_14 = tscc_proc_2_input_3_Rval_14;
    MR_String FirstIndent_15 = tscc_proc_2_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_2_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_85 = tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
    MR_Integer STATE_VARIABLE_N_86;
    MR_Word STATE_VARIABLE_DeclSet_0_87 = tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
    MR_Word STATE_VARIABLE_DeclSet_88;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_20 = ((MR_Word) ((MR_hl_field(0, Rval_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Lval_14 = Lval_20;
          MR_String next_value_of_tscc_proc_1_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_1_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = STATE_VARIABLE_DeclSet_0_87;

          // direct tailcall eliminated
          ;
          tscc_proc_1_input_1_Info_12 = next_value_of_tscc_proc_1_input_1_Info_12;
          tscc_proc_1_input_2_Stream_13 = next_value_of_tscc_proc_1_input_2_Stream_13;
          tscc_proc_1_input_3_Lval_14 = next_value_of_tscc_proc_1_input_3_Lval_14;
          tscc_proc_1_input_4_FirstIndent_15 = next_value_of_tscc_proc_1_input_4_FirstIndent_15;
          tscc_proc_1_input_5_LaterIndent_16 = next_value_of_tscc_proc_1_input_5_LaterIndent_16;
          tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34;
          tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36;
          goto top_of_proc_1;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_rval_decls_format\'/11", (MR_String) "var");
          return;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word SubRval_861 = ((MR_Word) ((MR_hl_field(2, Rval_14, (MR_Integer) 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_861;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
              STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_23 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));

              switch (MR_tag((MR_Word) Const_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_23, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        int64_t Int64Val_33 = MR_unbox_int64((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedInt64s_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_115_115;
                        MR_Word Int64Label_36;

                        succeeded = (UnboxedInt64s_34 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_35 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              Int64Label_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, Int64Label_36, 0) = MR_box_int64(Int64Val_33);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Int64Label_36, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_115_115);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String Int64Name_37;
                          MR_String Int64ValStr_38;

                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_115_115;
                          ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_33, &Int64Name_37);
                          Int64ValStr_38 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_33);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const int64_t mercury_int64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, Int64Name_37);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, Int64ValStr_38);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t UInt64Val_39 = MR_unbox_uint64((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedInt64s_176 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_177 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word UInt64Label_40;
                        MR_Word STATE_VARIABLE_DeclSet_127_127;

                        succeeded = (UnboxedInt64s_176 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_177 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              UInt64Label_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, UInt64Label_40, 0) = MR_box_uint64(UInt64Val_39);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_127_127);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String UInt64Name_41;
                          MR_String UInt64ValStr_42;

                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_127_127, &STATE_VARIABLE_DeclSet_88);
                          ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_39, &UInt64Name_41);
                          UInt64ValStr_42 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_39);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const uint64_t mercury_uint64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64Name_41);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64ValStr_42);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Float FloatVal_27 = MR_unbox_float((MR_hl_field(3, Const_23, (MR_Integer) 1)));
                        MR_Word UnboxedFloat_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_String FloatName_30;
                        MR_Word STATE_VARIABLE_DeclSet_103_103;
                        MR_Word FloatLabel_31;

                        succeeded = (UnboxedFloat_28 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_29 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(FloatVal_27, &FloatName_30);
                            {
                              FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                              MR_hl_field(0, FloatLabel_31, 0) = ((MR_Box) (FloatName_30));
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_103_103);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatValStr_32;

                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_103_103;
                          FloatValStr_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_85 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const MR_Float mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_30);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatValStr_32);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_0_85;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_0_87;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word CodeAddress_24 = ((MR_Word) ((MR_hl_field(3, Const_23, (MR_Integer) 1))));

                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_11_p_0(Info_12, Stream_13, CodeAddress_24, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_86, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_88);
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId_25 = ((MR_Word) ((MR_hl_field(3, Const_23, (MR_Integer) 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_25, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_86, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_88);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_56 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_862 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_862;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_59 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
              MR_Word SubRvalA_60 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 2))));
              MR_Word SubRvalB_61 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 3))));
              MR_Integer STATE_VARIABLE_N_142_142;
              MR_Word STATE_VARIABLE_DeclSet_143_143;
              MR_Integer STATE_VARIABLE_N_145_145;
              MR_Word STATE_VARIABLE_DeclSet_146_146;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalA_60, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_85, &STATE_VARIABLE_N_142_142, STATE_VARIABLE_DeclSet_0_87, &STATE_VARIABLE_DeclSet_143_143);
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalB_61, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_142_142, &STATE_VARIABLE_N_145_145, STATE_VARIABLE_DeclSet_143_143, &STATE_VARIABLE_DeclSet_146_146);
              switch (MR_tag((MR_Word) Op_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word UnboxFloat_63 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_181 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_148;
                        MR_String FloatName_179;
                        MR_Word FloatLabel_178;

                        succeeded = (UnboxFloat_63 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_181 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_179);
                            if (succeeded)
                            {
                              {
                                FloatLabel_178 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_178, 0) = ((MR_Box) (FloatName_179));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_178, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_148);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_148;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_179);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "+");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word UnboxFloat_789 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_814 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_764;
                        MR_String FloatName_787;
                        MR_Word FloatLabel_742;

                        succeeded = (UnboxFloat_789 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_814 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_787);
                            if (succeeded)
                            {
                              {
                                FloatLabel_742 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_742, 0) = ((MR_Box) (FloatName_787));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_742, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_764);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_764;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_787);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "-");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word UnboxFloat_624 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_649 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_599;
                        MR_String FloatName_622;
                        MR_Word FloatLabel_577;

                        succeeded = (UnboxFloat_624 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_649 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_622);
                            if (succeeded)
                            {
                              {
                                FloatLabel_577 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_577, 0) = ((MR_Box) (FloatName_622));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_577, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_599);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_599;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_622);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "*");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word UnboxFloat_459 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_484 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_148_434;
                        MR_String FloatName_457;
                        MR_Word FloatLabel_412;

                        succeeded = (UnboxFloat_459 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_484 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_457);
                            if (succeeded)
                            {
                              {
                                FloatLabel_412 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_412, 0) = ((MR_Box) (FloatName_457));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_412, STATE_VARIABLE_DeclSet_146_146, &STATE_VARIABLE_DeclSet_148_434);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_148_434;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_145_145);
                          STATE_VARIABLE_N_86 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_145_145 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_13, (MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_457);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "/");
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                          STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        }
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 22:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 27:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 28:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                    STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Op_59, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        STATE_VARIABLE_N_86 = STATE_VARIABLE_N_145_145;
                        STATE_VARIABLE_DeclSet_88 = STATE_VARIABLE_DeclSet_146_146;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_84 = ((MR_Word) ((MR_hl_field(3, Rval_14, (MR_Integer) 1))));
              MR_Word next_value_of_tscc_proc_3_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_3_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_3_input_3_MemRef_14 = MemRef_84;
              MR_String next_value_of_tscc_proc_3_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_3_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = STATE_VARIABLE_N_0_85;
              MR_Word next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = STATE_VARIABLE_DeclSet_0_87;

              // direct tailcall eliminated
              ;
              tscc_proc_3_input_1_Info_12 = next_value_of_tscc_proc_3_input_1_Info_12;
              tscc_proc_3_input_2_Stream_13 = next_value_of_tscc_proc_3_input_2_Stream_13;
              tscc_proc_3_input_3_MemRef_14 = next_value_of_tscc_proc_3_input_3_MemRef_14;
              tscc_proc_3_input_4_FirstIndent_15 = next_value_of_tscc_proc_3_input_4_FirstIndent_15;
              tscc_proc_3_input_5_LaterIndent_16 = next_value_of_tscc_proc_3_input_5_LaterIndent_16;
              tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
              tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
              goto top_of_proc_3;
            }
            break;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_86;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_88;
    goto tscc_end;
  }
top_of_proc_3:;
  {
    MR_Word Info_12 = tscc_proc_3_input_1_Info_12;
    MR_Word Stream_13 = tscc_proc_3_input_2_Stream_13;
    MR_Word MemRef_14 = tscc_proc_3_input_3_MemRef_14;
    MR_String FirstIndent_15 = tscc_proc_3_input_4_FirstIndent_15;
    MR_String LaterIndent_16 = tscc_proc_3_input_5_LaterIndent_16;
    MR_Integer STATE_VARIABLE_N_0_24 = tscc_proc_3_input_6_STATE_VARIABLE_N_0_24;
    MR_Integer STATE_VARIABLE_N_25;
    MR_Word STATE_VARIABLE_DeclSet_0_26 = tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26;
    MR_Word STATE_VARIABLE_DeclSet_27;

    switch (MR_tag((MR_Word) MemRef_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(0, MemRef_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_36;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(1, MemRef_14, (MR_Integer) 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_20;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BaseRval_21 = ((MR_Word) ((MR_hl_field(2, MemRef_14, (MR_Integer) 0))));
          MR_Word OffsetRval_23 = ((MR_Word) ((MR_hl_field(2, MemRef_14, (MR_Integer) 2))));
          MR_Integer STATE_VARIABLE_N_33_33;
          MR_Word STATE_VARIABLE_DeclSet_34_34;
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;

          ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, BaseRval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_24, &STATE_VARIABLE_N_33_33, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_34_34);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          next_value_of_tscc_proc_2_input_3_Rval_14 = OffsetRval_23;
          next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = STATE_VARIABLE_N_33_33;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = STATE_VARIABLE_DeclSet_34_34;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_85 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_85;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_87;
          goto top_of_proc_2;
        }
        break;
    }
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_25;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_27;
    goto tscc_end;
  }
tscc_end:;
  *tscc_output_ptr_1_STATE_VARIABLE_N_35 = tscc_output_1_STATE_VARIABLE_N_35;
  *tscc_output_ptr_2_STATE_VARIABLE_DeclSet_37 = tscc_output_2_STATE_VARIABLE_DeclSet_37;
  return;
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
  MR_String Int64Name0_5;

  Int64Name0_5 = mercury__string__int64_to_string_1_f_0(Int64_3);
  mercury__string__replace_all_4_p_0(Int64Name0_5, (MR_String) "-", (MR_String) "neg", Int64Name_4);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(
  MR_Float Float_3,
  MR_String * FloatName_4)
{
  MR_String FloatName0_5;
  MR_String FloatName1_6;
  MR_String FloatName2_7;

  FloatName0_5 = backend_libs__c_util__make_float_literal_1_f_0(Float_3);
  mercury__string__replace_all_4_p_0(FloatName0_5, (MR_String) ".", (MR_String) "pt", &FloatName1_6);
  mercury__string__replace_all_4_p_0(FloatName1_6, (MR_String) "+", (MR_String) "plus", &FloatName2_7);
  mercury__string__replace_all_4_p_0(FloatName2_7, (MR_String) "-", (MR_String) "neg", FloatName_4);
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(
  MR_Word Op_5,
  MR_Word Arg1_6,
  MR_Word Arg2_7,
  MR_String * Name_8)
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
  MR_Float Float_17;
  MR_Word Var_21;
  MR_Float Float_39;
  MR_Word Var_43;

  switch (MR_tag((MR_Word) Op_5)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_5)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 13:
          {
            OpName_9 = (MR_String) "fadd";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            OpName_9 = (MR_String) "fsub";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            OpName_9 = (MR_String) "fmul";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            OpName_9 = (MR_String) "fdiv";
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  if (succeeded)
  {
    succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg1_6, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_21 = ((MR_Word) ((MR_hl_field(3, Arg1_6, (MR_Integer) 1))));
      succeeded = ((((MR_tag((MR_Word) Var_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_21, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
        Float_17 = MR_unbox_float((MR_hl_field(3, Var_21, (MR_Integer) 1)));
    }
    if (succeeded)
    {
      MR_String FloatName0_22;
      MR_String FloatName1_23;
      MR_String FloatName2_24;

      FloatName0_22 = backend_libs__c_util__make_float_literal_1_f_0(Float_17);
      mercury__string__replace_all_4_p_0(FloatName0_22, (MR_String) ".", (MR_String) "pt", &FloatName1_23);
      mercury__string__replace_all_4_p_0(FloatName1_23, (MR_String) "+", (MR_String) "plus", &FloatName2_24);
      mercury__string__replace_all_4_p_0(FloatName2_24, (MR_String) "-", (MR_String) "neg", &Arg1Name_10);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Op_18;
      MR_Word Arg1_19;
      MR_Word Arg2_20;
      MR_String OpName_31;
      MR_String Arg1Name_32;
      MR_String Arg2Name_33;
      MR_String Var_34;
      MR_String Var_35;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_38;

      succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg1_6, (MR_Integer) 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Op_18 = ((MR_Word) ((MR_hl_field(3, Arg1_6, (MR_Integer) 1))));
        Arg1_19 = ((MR_Word) ((MR_hl_field(3, Arg1_6, (MR_Integer) 2))));
        Arg2_20 = ((MR_Word) ((MR_hl_field(3, Arg1_6, (MR_Integer) 3))));
        succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_18, &OpName_31);
        if (succeeded)
        {
          succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_19, &Arg1Name_32);
          if (succeeded)
          {
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_20, &Arg2Name_33);
            if (succeeded)
            {
              Var_35 = (MR_String) "_";
              Var_38 = (MR_String) "_";
              Var_37 = mercury__string__f_43_43_2_f_0(Var_38, Arg2Name_33);
              Var_36 = mercury__string__f_43_43_2_f_0(Arg1Name_32, Var_37);
              Var_34 = mercury__string__f_43_43_2_f_0(Var_35, Var_36);
              Arg1Name_10 = mercury__string__f_43_43_2_f_0(OpName_31, Var_34);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg2_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_43 = ((MR_Word) ((MR_hl_field(3, Arg2_7, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_43)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_43, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
          Float_39 = MR_unbox_float((MR_hl_field(3, Var_43, (MR_Integer) 1)));
      }
      if (succeeded)
      {
        MR_String FloatName0_44;
        MR_String FloatName1_45;
        MR_String FloatName2_46;

        FloatName0_44 = backend_libs__c_util__make_float_literal_1_f_0(Float_39);
        mercury__string__replace_all_4_p_0(FloatName0_44, (MR_String) ".", (MR_String) "pt", &FloatName1_45);
        mercury__string__replace_all_4_p_0(FloatName1_45, (MR_String) "+", (MR_String) "plus", &FloatName2_46);
        mercury__string__replace_all_4_p_0(FloatName2_46, (MR_String) "-", (MR_String) "neg", &Arg2Name_11);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Op_40;
        MR_Word Arg1_41;
        MR_Word Arg2_42;
        MR_String OpName_53;
        MR_String Arg1Name_54;
        MR_String Arg2Name_55;
        MR_String Var_56;
        MR_String Var_57;
        MR_String Var_58;
        MR_String Var_59;
        MR_String Var_60;

        succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg2_7, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Op_40 = ((MR_Word) ((MR_hl_field(3, Arg2_7, (MR_Integer) 1))));
          Arg1_41 = ((MR_Word) ((MR_hl_field(3, Arg2_7, (MR_Integer) 2))));
          Arg2_42 = ((MR_Word) ((MR_hl_field(3, Arg2_7, (MR_Integer) 3))));
          succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_40, &OpName_53);
          if (succeeded)
          {
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_41, &Arg1Name_54);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_42, &Arg2Name_55);
              if (succeeded)
              {
                Var_57 = (MR_String) "_";
                Var_60 = (MR_String) "_";
                Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Arg2Name_55);
                Var_58 = mercury__string__f_43_43_2_f_0(Arg1Name_54, Var_59);
                Var_56 = mercury__string__f_43_43_2_f_0(Var_57, Var_58);
                Arg2Name_11 = mercury__string__f_43_43_2_f_0(OpName_53, Var_56);
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

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(
  MR_Word Info_12,
  MR_Word Stream_13,
  MR_Word DataId_14,
  MR_String FirstIndent_15,
  MR_String LaterIndent_16,
  MR_Integer STATE_VARIABLE_N_0_31,
  MR_Integer * STATE_VARIABLE_N_32,
  MR_Word STATE_VARIABLE_DeclSet_0_33,
  MR_Word * STATE_VARIABLE_DeclSet_34)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) DataId_14)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiId_28 = ((MR_Word) ((MR_hl_field(0, DataId_14, (MR_Integer) 0))));
        MR_Word DeclId_29;
        MR_Word STATE_VARIABLE_DeclSet_37_37;

        {
          DeclId_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, DeclId_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, DeclId_29, 1) = ((MR_Box) (RttiId_28));
        }
        succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(DeclId_29, STATE_VARIABLE_DeclSet_0_33, &STATE_VARIABLE_DeclSet_37_37);
        if (succeeded)
        {
          *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_37_37;
          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_31);
          *STATE_VARIABLE_N_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_31 + (MR_Unsigned) 1);
          ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_6_p_0(Info_12, Stream_13, RttiId_28, (MR_Integer) 0);
          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
        }
        else
        {
          *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
          *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
        *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
      }
      break;
    case (MR_Integer) 2:
      {
        *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
        *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DataId_14, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
            *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_30 = ((MR_Word) ((MR_hl_field(3, DataId_14, (MR_Integer) 1))));
            MR_Word DeclId_55;
            MR_Word STATE_VARIABLE_DeclSet_46_46;

            {
              DeclId_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, DeclId_55, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, DeclId_55, 1) = ((MR_Box) (LayoutName_30));
            }
            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(DeclId_55, STATE_VARIABLE_DeclSet_0_33, &STATE_VARIABLE_DeclSet_46_46);
            if (succeeded)
            {
              *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_46_46;
              ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_31);
              *STATE_VARIABLE_N_32 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_31 + (MR_Unsigned) 1);
              ll_backend__layout_out__output_layout_name_storage_type_name_5_p_0(Stream_13, LayoutName_30, (MR_Integer) 0);
              mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
            }
            else
            {
              *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
              *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
            *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(
  MR_Word Info_7,
  MR_Word Rval_8,
  MR_Word DesiredType_9,
  MR_Word Stream_10)
{
  MR_bool succeeded;
  MR_Word ActualType_12;

  ll_backend__llds__rval_type_2_p_0(Rval_8, &ActualType_12);
  switch (MR_tag((MR_Word) DesiredType_9)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(DesiredType_9)) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          if ((ActualType_12 == (MR_Word) ((MR_Unsigned) 20U)))
            succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) ActualType_12)) == (MR_Integer) 2))
          {
            MR_Word Var_65 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, (MR_Integer) 0))) & (MR_Integer) 15);

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
        case (MR_Integer) 5:
          if ((ActualType_12 == (MR_Word) ((MR_Unsigned) 0U)))
            succeeded = MR_TRUE;
          else
          if (((MR_tag((MR_Word) ActualType_12)) == (MR_Integer) 2))
          {
            MR_Word Var_66 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, (MR_Integer) 0))) & (MR_Integer) 15);

            switch (Var_66) {
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
        MR_Word Var_64;

        succeeded = (ActualType_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_64 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, (MR_Integer) 0))) & (MR_Integer) 15);
          succeeded = (Var_64 == (MR_Integer) 0);
        }
      }
      break;
  }
  if (!(succeeded))
    succeeded = ll_backend__llds____Unify____llds_type_0_0(ActualType_12, DesiredType_9);
  if (succeeded)
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
  else
  {
    succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 4U));
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "MR_word_to_float(");
      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
    }
    else
    {
      succeeded = (ActualType_12 == (MR_Word) ((MR_Unsigned) 4U));
      if (succeeded)
      {
        succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 20U));
        if (succeeded)
          ll_backend__llds_out__llds_out_data__output_float_rval_6_p_0(Info_7, Stream_10, Rval_8, (MR_Integer) 0);
        else
        {
          succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 12U));
          if (succeeded)
            ll_backend__llds_out__llds_out_data__output_float_rval_6_p_0(Info_7, Stream_10, Rval_8, (MR_Integer) 1);
          else
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/6", (MR_String) "type error");
              return;
            }
        }
      }
      else
      {
        MR_Word Var_27;

        succeeded = ((MR_tag((MR_Word) DesiredType_9)) == (MR_Integer) 2);
        if (succeeded)
        {
          Var_27 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, (MR_Integer) 0))) & (MR_Integer) 15);
          succeeded = (Var_27 == (MR_Integer) 8);
        }
        if (succeeded)
        {
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "MR_word_to_int64(");
          ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
        }
        else
        {
          MR_Word Var_33;

          succeeded = ((MR_tag((MR_Word) ActualType_12)) == (MR_Integer) 2);
          if (succeeded)
          {
            Var_33 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, (MR_Integer) 0))) & (MR_Integer) 15);
            succeeded = (Var_33 == (MR_Integer) 8);
          }
          if (succeeded)
          {
            succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 20U));
            if (succeeded)
              ll_backend__llds_out__llds_out_data__output_int64_rval_6_p_0(Info_7, Stream_10, Rval_8, (MR_Integer) 0);
            else
            {
              succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 12U));
              if (succeeded)
                ll_backend__llds_out__llds_out_data__output_int64_rval_6_p_0(Info_7, Stream_10, Rval_8, (MR_Integer) 1);
              else
                {
                  mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/6", (MR_String) "type error");
                  return;
                }
            }
          }
          else
          {
            MR_Word Var_39;

            succeeded = ((MR_tag((MR_Word) DesiredType_9)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_39 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, (MR_Integer) 0))) & (MR_Integer) 15);
              succeeded = (Var_39 == (MR_Integer) 9);
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) "MR_word_to_uint64(");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
              mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
            }
            else
            {
              MR_Word Var_45;

              succeeded = ((MR_tag((MR_Word) ActualType_12)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_45 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, (MR_Integer) 0))) & (MR_Integer) 15);
                succeeded = (Var_45 == (MR_Integer) 9);
              }
              if (succeeded)
              {
                succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 20U));
                if (succeeded)
                  ll_backend__llds_out__llds_out_data__output_uint64_rval_6_p_0(Info_7, Stream_10, Rval_8, (MR_Integer) 0);
                else
                {
                  succeeded = (DesiredType_9 == (MR_Word) ((MR_Unsigned) 12U));
                  if (succeeded)
                    ll_backend__llds_out__llds_out_data__output_uint64_rval_6_p_0(Info_7, Stream_10, Rval_8, (MR_Integer) 1);
                  else
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval_as_type\'/6", (MR_String) "type error");
                      return;
                    }
                }
              }
              else
              {
                MR_Integer N_13;
                MR_Word Var_51;

                succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  Var_51 = ((MR_Word) ((MR_hl_field(3, Rval_8, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_51)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    N_13 = ((MR_Integer) ((MR_hl_field(1, Var_51, (MR_Integer) 0))));
                    if (((MR_tag((MR_Word) DesiredType_9)) == (MR_Integer) 2))
                    {
                      MR_Word IntType_75 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, (MR_Integer) 0))) & (MR_Integer) 15);

                      switch (IntType_75) {
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
                    if (((MR_tag((MR_Word) DesiredType_9)) == (MR_Integer) 1))
                      succeeded = MR_TRUE;
                    else
                      succeeded = MR_FALSE;
                  }
                }
                if (succeeded)
                  mercury__io__write_int_4_p_0(Stream_10, N_13);
                else
                {
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
                  ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_10, DesiredType_9);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
                  mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
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
ll_backend__llds_out__llds_out_data__output_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Rval_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Rval_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval_38 = ((MR_Word) ((MR_hl_field(0, Rval_7, (MR_Integer) 0))));
        MR_Word MaybePtag_39;
        MR_Word FieldNumRval_40;
        MR_Word Var_427;

        succeeded = ((((MR_tag((MR_Word) Lval_38)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_38, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          MaybePtag_39 = ((MR_Word) ((MR_hl_field(3, Lval_38, (MR_Integer) 1))));
          Var_427 = ((MR_Word) ((MR_hl_field(3, Lval_38, (MR_Integer) 2))));
          FieldNumRval_40 = ((MR_Word) ((MR_hl_field(3, Lval_38, (MR_Integer) 3))));
          succeeded = ll_backend__llds____Unify____rval_0_0(Rval_7, Var_427);
        }
        if (succeeded)
        {
          MR_Integer FieldNum_41;
          MR_Word Var_348;

          if ((MaybePtag_39 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_const_mask_field(");
          else
          {
            MR_Word Var_337 = ((MR_Word) ((MR_hl_field(1, MaybePtag_39, (MR_Integer) 0))));
            uint8_t PtagUInt8_404 = (uint8_t) (Var_337);
            MR_Unsigned Var_2298;
            MR_String Var_2299;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_ctfield(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_404, &Var_2298);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_2298, &Var_2299);
            mercury__io__write_string_4_p_0(Stream_8, Var_2299);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          }
          ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_7, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          succeeded = ((((MR_tag((MR_Word) FieldNumRval_40)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_40, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_348 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_40, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_348)) == (MR_Integer) 1);
            if (succeeded)
              FieldNum_41 = ((MR_Integer) ((MR_hl_field(1, Var_348, (MR_Integer) 0))));
          }
          if (succeeded)
            mercury__io__write_int_4_p_0(Stream_8, FieldNum_41);
          else
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, FieldNumRval_40, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        else
          ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_8, Lval_38);
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval\'/5", (MR_String) "cannot output a var(_) expression in code");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        uint8_t PtagUInt8_33;
        MR_Word Var_299 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 0))));
        MR_Word SubRval_402 = ((MR_Word) ((MR_hl_field(2, Rval_7, (MR_Integer) 1))));
        MR_Integer TypeNum_35;
        MR_Integer CellNum_36;
        MR_Word DataId_34;
        MR_Word Var_300;
        MR_Word Var_301;
        MR_Word Var_302;

        PtagUInt8_33 = (uint8_t) (Var_299);
        succeeded = ((((MR_tag((MR_Word) SubRval_402)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_402, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_300 = ((MR_Word) ((MR_hl_field(3, SubRval_402, (MR_Integer) 1))));
          succeeded = ((((MR_tag((MR_Word) Var_300)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_300, (MR_Integer) 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            DataId_34 = ((MR_Word) ((MR_hl_field(3, Var_300, (MR_Integer) 1))));
            Var_301 = ((MR_Word) ((MR_hl_field(3, Var_300, (MR_Integer) 2))));
            succeeded = (Var_301 == (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) DataId_34)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_302 = ((MR_Word) ((MR_hl_field(2, DataId_34, (MR_Integer) 0))));
                CellNum_36 = ((MR_Integer) ((MR_hl_field(2, DataId_34, (MR_Integer) 1))));
                TypeNum_35 = (MR_Integer) (Var_302);
                succeeded = MR_TRUE;
              }
            }
          }
        }
        if (succeeded)
        {
          MR_Unsigned Var_2216;
          MR_String Var_2217;
          MR_String Var_2227;
          MR_String Var_2237;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_TAG_COMMON(");
          mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_33, &Var_2216);
          mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_2216, &Var_2217);
          mercury__io__write_string_4_p_0(Stream_8, Var_2217);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), TypeNum_35, &Var_2227);
          mercury__io__write_string_4_p_0(Stream_8, Var_2227);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_36, &Var_2237);
          mercury__io__write_string_4_p_0(Stream_8, Var_2237);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        else
        {
          MR_Integer Body_37;
          MR_Word Var_312;
          MR_Word Var_313;
          MR_Word Var_314;

          succeeded = ((((MR_tag((MR_Word) SubRval_402)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_402, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_312 = ((MR_Word) ((MR_hl_field(3, SubRval_402, (MR_Integer) 1))));
            Var_313 = ((MR_Word) ((MR_hl_field(3, SubRval_402, (MR_Integer) 2))));
            succeeded = (Var_312 == (MR_Word) ((MR_Unsigned) 8U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_313)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_313, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_314 = ((MR_Word) ((MR_hl_field(3, Var_313, (MR_Integer) 1))));
                succeeded = ((MR_tag((MR_Word) Var_314)) == (MR_Integer) 1);
                if (succeeded)
                  Body_37 = ((MR_Integer) ((MR_hl_field(1, Var_314, (MR_Integer) 0))));
              }
            }
          }
          if (succeeded)
          {
            MR_Unsigned Var_2249;
            MR_String Var_2250;
            MR_String Var_2260;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tbmkword(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_33, &Var_2249);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_2249, &Var_2250);
            mercury__io__write_string_4_p_0(Stream_8, Var_2250);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), Body_37, &Var_2260);
            mercury__io__write_string_4_p_0(Stream_8, Var_2260);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          else
          {
            MR_Unsigned Var_2272;
            MR_String Var_2273;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tmkword(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_33, &Var_2272);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_2272, &Var_2273);
            mercury__io__write_string_4_p_0(Stream_8, Var_2273);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_402, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_331 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
            uint8_t PtagUInt8_403 = (uint8_t) (Var_331);
            MR_Unsigned Var_2203;
            MR_String Var_2204;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tmkword(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_403, &Var_2203);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_2203, &Var_2204);
            mercury__io__write_string_4_p_0(Stream_8, Var_2204);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", 0)");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Const_10, Stream_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_11 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
            MR_Word SubRval_12 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
            ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, Type_11);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRval_12, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnaryOp_13 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
            MR_String OpString_14;
            MR_Word ArgType_15;
            MR_Word SubRval_393 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));

            backend_libs__c_util__unary_prefix_op_2_p_0(UnaryOp_13, &OpString_14);
            ll_backend__llds__unop_arg_type_2_p_0(UnaryOp_13, &ArgType_15);
            mercury__io__write_string_4_p_0(Stream_8, OpString_14);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_393, ArgType_15, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Op_16 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));
            MR_Word SubRvalA_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 2))));
            MR_Word SubRvalB_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 3))));

            switch (MR_tag((MR_Word) Op_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(Op_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&&");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "||");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_nth_code_unit(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word Var_97;
                      MR_Word Var_106;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
                      succeeded = ((((MR_tag((MR_Word) SubRvalA_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_97 = ((MR_Word) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_97)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_97, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_97, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      succeeded = ((((MR_tag((MR_Word) SubRvalB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_106 = ((MR_Word) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_106)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_106, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_106, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "==");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "0)");
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word Var_2090;
                      MR_Word Var_2101;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
                      succeeded = ((((MR_tag((MR_Word) SubRvalA_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_2090 = ((MR_Word) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_2090)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_2090, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_2090, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      succeeded = ((((MR_tag((MR_Word) SubRvalB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_2101 = ((MR_Word) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_2101)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_2101, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_2101, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "!=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "0)");
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_2041;
                      MR_Word Var_2052;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
                      succeeded = ((((MR_tag((MR_Word) SubRvalA_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_2041 = ((MR_Word) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_2041)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_2041, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_2041, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      succeeded = ((((MR_tag((MR_Word) SubRvalB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_2052 = ((MR_Word) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_2052)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_2052, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_2052, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "0)");
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word Var_1943;
                      MR_Word Var_1954;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
                      succeeded = ((((MR_tag((MR_Word) SubRvalA_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_1943 = ((MR_Word) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_1943)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1943, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_1943, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      succeeded = ((((MR_tag((MR_Word) SubRvalB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_1954 = ((MR_Word) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_1954)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1954, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_1954, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "0)");
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word Var_1992;
                      MR_Word Var_2003;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
                      succeeded = ((((MR_tag((MR_Word) SubRvalA_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_1992 = ((MR_Word) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_1992)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1992, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_1992, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      succeeded = ((((MR_tag((MR_Word) SubRvalB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_2003 = ((MR_Word) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_2003)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_2003, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_2003, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "0)");
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word Var_1894;
                      MR_Word Var_1905;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
                      succeeded = ((((MR_tag((MR_Word) SubRvalA_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_1894 = ((MR_Word) ((MR_hl_field(3, SubRvalA_17, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_1894)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1894, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_1894, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      succeeded = ((((MR_tag((MR_Word) SubRvalB_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (succeeded)
                      {
                        Var_1905 = ((MR_Word) ((MR_hl_field(3, SubRvalB_18, (MR_Integer) 1))));
                        succeeded = ((((MR_tag((MR_Word) Var_1905)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_1905, (MR_Integer) 0)))) == (MR_Integer) 10)));
                        if (succeeded)
                        {
                        }
                      }
                      if (succeeded)
                        ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Var_1905, Stream_8);
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      }
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "0)");
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strcmp(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 11:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[2])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " < ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[2])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 12:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[2])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " <= ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[2])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 14:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 15:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 16:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 17:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "==");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 18:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "!=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 19:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 20:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 21:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 22:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 23:
                    {
                      MR_Word MemRef_32;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_float_from_dword");
                      succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_17, SubRvalB_18, &MemRef_32);
                      if (succeeded)
                      {
                        MR_Word Var_287;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_ptr(MR_dword_ptr(");
                        {
                          Var_287 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_287, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, Var_287, 1) = ((MR_Box) (MemRef_32));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Var_287, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                      }
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalA_17, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalB_18, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 24:
                    {
                      MR_Word MemRef_809;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_int64_from_dword");
                      succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_17, SubRvalB_18, &MemRef_809);
                      if (succeeded)
                      {
                        MR_Word Var_799;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_ptr(MR_dword_ptr(");
                        {
                          Var_799 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_799, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, Var_799, 1) = ((MR_Box) (MemRef_809));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Var_799, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                      }
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalA_17, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalB_18, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 25:
                    {
                      MR_Word MemRef_2151;

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_uint64_from_dword");
                      succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_17, SubRvalB_18, &MemRef_2151);
                      if (succeeded)
                      {
                        MR_Word Var_2141;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_ptr(MR_dword_ptr(");
                        {
                          Var_2141 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(3, Var_2141, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                          MR_hl_field(3, Var_2141, 1) = ((MR_Box) (MemRef_2151));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Var_2141, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                      }
                      else
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalA_17, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalB_18, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 26:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(((MR_Word) ");
                      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalA_17, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") == ((MR_Word) ");
                      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalB_18, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
                    }
                    break;
                  case (MR_Integer) 27:
                  case (MR_Integer) 28:
                    {
                      mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_rval\'/5", (MR_String) "compound_compare_binop");
                      return;
                    }
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word IntType_23 = ((MR_Unsigned) ((MR_hl_field(1, Op_16, (MR_Integer) 0))) & (MR_Integer) 15);

                  switch (IntType_23) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_166;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Integer");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_166 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_166, 0) = (MR_Box) ((MR_Unsigned) (IntType_23));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_166, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_166, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_846;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int16_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_846 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_846, 0) = (MR_Box) ((MR_Unsigned) (IntType_23));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_846, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_846, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_867;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int32_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_867 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_867, 0) = (MR_Box) ((MR_Unsigned) (IntType_23));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_867, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_867, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word Var_888;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int64_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_888 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_888, 0) = (MR_Box) ((MR_Unsigned) (IntType_23));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_888, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_888, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_909;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int8_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_909 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_909, 0) = (MR_Box) ((MR_Unsigned) (IntType_23));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_909, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_909, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 9:
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_181;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        {
                          Var_181 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_181, 0) = (MR_Box) ((MR_Unsigned) (IntType_23));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_181, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_181, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word IntType_1760 = ((MR_Unsigned) ((MR_hl_field(2, Op_16, (MR_Integer) 0))) & (MR_Integer) 15);

                  switch (IntType_1760) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word Var_1619;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Integer");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_1619 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1619, 0) = (MR_Box) ((MR_Unsigned) (IntType_1760));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1619, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1619, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_1640;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int16_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_1640 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1640, 0) = (MR_Box) ((MR_Unsigned) (IntType_1760));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1640, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1640, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        MR_Word Var_1661;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int32_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_1661 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1661, 0) = (MR_Box) ((MR_Unsigned) (IntType_1760));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1661, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1661, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word Var_1682;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int64_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_1682 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1682, 0) = (MR_Box) ((MR_Unsigned) (IntType_1760));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1682, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1682, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word Var_1703;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int8_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        {
                          Var_1703 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1703, 0) = (MR_Box) ((MR_Unsigned) (IntType_1760));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1703, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1703, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 5:
                    case (MR_Integer) 7:
                    case (MR_Integer) 9:
                    case (MR_Integer) 3:
                      {
                        MR_Word Var_1717;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        {
                          Var_1717 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1717, 0) = (MR_Box) ((MR_Unsigned) (IntType_1760));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1717, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1717, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      break;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(3, Op_16, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word IntType_1575 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      switch (IntType_1575) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                            MR_Word Var_1434;

                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Integer");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            {
                              Var_1434 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1434, 0) = (MR_Box) ((MR_Unsigned) (IntType_1575));
                            }
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1434, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1434, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                          }
                          break;
                        case (MR_Integer) 4:
                          {
                            MR_Word Var_1455;

                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int16_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            {
                              Var_1455 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1455, 0) = (MR_Box) ((MR_Unsigned) (IntType_1575));
                            }
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1455, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1455, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                          }
                          break;
                        case (MR_Integer) 6:
                          {
                            MR_Word Var_1476;

                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int32_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            {
                              Var_1476 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1476, 0) = (MR_Box) ((MR_Unsigned) (IntType_1575));
                            }
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1476, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1476, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                          }
                          break;
                        case (MR_Integer) 8:
                          {
                            MR_Word Var_1497;

                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int64_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            {
                              Var_1497 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1497, 0) = (MR_Box) ((MR_Unsigned) (IntType_1575));
                            }
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1497, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1497, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            MR_Word Var_1518;

                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int8_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            {
                              Var_1518 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1518, 0) = (MR_Box) ((MR_Unsigned) (IntType_1575));
                            }
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1518, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1518, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                          }
                          break;
                        case (MR_Integer) 1:
                        case (MR_Integer) 5:
                        case (MR_Integer) 7:
                        case (MR_Integer) 9:
                        case (MR_Integer) 3:
                          {
                            MR_Word Var_1532;

                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                            {
                              Var_1532 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Var_1532, 0) = (MR_Box) ((MR_Unsigned) (IntType_1575));
                            }
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1532, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1532, Stream_8);
                            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_941;
                      MR_Word IntType_1004 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_941 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_941, 0) = (MR_Box) ((MR_Unsigned) (IntType_1004));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_941, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_941, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word Var_1361;
                      MR_Word IntType_1424 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_1361 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1361, 0) = (MR_Box) ((MR_Unsigned) (IntType_1424));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1361, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1361, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ShiftType_30 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 1);
                      MR_Word Var_235;
                      MR_Word IntType_400 = ((((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_235 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_235, 0) = (MR_Box) ((MR_Unsigned) (IntType_400));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_235, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<<");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      switch (ShiftType_30) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(int) ");
                          break;
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ShiftType_2181 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 1);
                      MR_Word Var_2184;
                      MR_Word IntType_2198 = ((((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) >> 1)) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_2184 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_2184, 0) = (MR_Box) ((MR_Unsigned) (IntType_2198));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_2184, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">>");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      switch (ShiftType_2181) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          {
                          }
                          break;
                        case (MR_Integer) 1:
                          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(int) ");
                          break;
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word Var_207;
                      MR_Word IntType_397 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_207 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_207, 0) = (MR_Box) ((MR_Unsigned) (IntType_397));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_207, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_207, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word Var_448;
                      MR_Word IntType_511 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_448 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_448, 0) = (MR_Box) ((MR_Unsigned) (IntType_511));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_448, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "|");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_448, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      MR_Word Var_532;
                      MR_Word IntType_595 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_532 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_532, 0) = (MR_Box) ((MR_Unsigned) (IntType_595));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_532, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "^");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_532, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 8:
                    {
                      MR_Word IntType_679 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);
                      MR_Word SubRvalAType_600;
                      MR_Word SubRvalBType_601;

                      switch (IntType_679) {
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
                        ll_backend__llds__rval_type_2_p_0(SubRvalA_17, &SubRvalAType_600);
                        if ((SubRvalAType_600 == (MR_Word) ((MR_Unsigned) 20U)))
                          succeeded = MR_TRUE;
                        else
                        if (((MR_tag((MR_Word) SubRvalAType_600)) == (MR_Integer) 2))
                        {
                          MR_Word Var_596 = ((MR_Unsigned) ((MR_hl_field(2, SubRvalAType_600, (MR_Integer) 0))) & (MR_Integer) 15);

                          succeeded = (Var_596 == (MR_Integer) 1);
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          ll_backend__llds__rval_type_2_p_0(SubRvalB_18, &SubRvalBType_601);
                          if ((SubRvalBType_601 == (MR_Word) ((MR_Unsigned) 20U)))
                            succeeded = MR_TRUE;
                          else
                          if (((MR_tag((MR_Word) SubRvalBType_601)) == (MR_Integer) 2))
                          {
                            MR_Word Var_598 = ((MR_Unsigned) ((MR_hl_field(2, SubRvalBType_601, (MR_Integer) 0))) & (MR_Integer) 15);

                            succeeded = (Var_598 == (MR_Integer) 1);
                          }
                          else
                            succeeded = MR_FALSE;
                        }
                      }
                      if (succeeded)
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalA_17, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "==");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalB_18, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      else
                      {
                        MR_Word Var_616;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        {
                          Var_616 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_616, 0) = (MR_Box) ((MR_Unsigned) (IntType_679));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_616, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "==");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_616, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 9:
                    {
                      MR_Word IntType_1893 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);
                      MR_Word SubRvalAType_1814;
                      MR_Word SubRvalBType_1815;

                      switch (IntType_1893) {
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
                        ll_backend__llds__rval_type_2_p_0(SubRvalA_17, &SubRvalAType_1814);
                        if ((SubRvalAType_1814 == (MR_Word) ((MR_Unsigned) 20U)))
                          succeeded = MR_TRUE;
                        else
                        if (((MR_tag((MR_Word) SubRvalAType_1814)) == (MR_Integer) 2))
                        {
                          MR_Word Var_1810 = ((MR_Unsigned) ((MR_hl_field(2, SubRvalAType_1814, (MR_Integer) 0))) & (MR_Integer) 15);

                          succeeded = (Var_1810 == (MR_Integer) 1);
                        }
                        else
                          succeeded = MR_FALSE;
                        if (succeeded)
                        {
                          ll_backend__llds__rval_type_2_p_0(SubRvalB_18, &SubRvalBType_1815);
                          if ((SubRvalBType_1815 == (MR_Word) ((MR_Unsigned) 20U)))
                            succeeded = MR_TRUE;
                          else
                          if (((MR_tag((MR_Word) SubRvalBType_1815)) == (MR_Integer) 2))
                          {
                            MR_Word Var_1812 = ((MR_Unsigned) ((MR_hl_field(2, SubRvalBType_1815, (MR_Integer) 0))) & (MR_Integer) 15);

                            succeeded = (Var_1812 == (MR_Integer) 1);
                          }
                          else
                            succeeded = MR_FALSE;
                        }
                      }
                      if (succeeded)
                      {
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalA_17, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "!=");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRvalB_18, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                      else
                      {
                        MR_Word Var_1830;

                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                        {
                          Var_1830 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Var_1830, 0) = (MR_Box) ((MR_Unsigned) (IntType_1893));
                        }
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1830, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "!=");
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1830, Stream_8);
                        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                      }
                    }
                    break;
                  case (MR_Integer) 10:
                    {
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
                    }
                    break;
                  case (MR_Integer) 11:
                    {
                      MR_Integer N_31 = ((MR_Integer) ((MR_hl_field(3, Op_16, (MR_Integer) 1))));

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_offset_streq(");
                      mercury__io__write_int_4_p_0(Stream_8, N_31);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 12:
                    {
                      MR_Word Var_1277;
                      MR_Word IntType_1340 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_1277 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1277, 0) = (MR_Box) ((MR_Unsigned) (IntType_1340));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1277, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1277, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 13:
                    {
                      MR_Word Var_1109;
                      MR_Word IntType_1172 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_1109 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1109, 0) = (MR_Box) ((MR_Unsigned) (IntType_1172));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1109, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1109, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 14:
                    {
                      MR_Word Var_1193;
                      MR_Word IntType_1256 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_1193 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1193, 0) = (MR_Box) ((MR_Unsigned) (IntType_1256));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1193, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1193, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                  case (MR_Integer) 15:
                    {
                      MR_Word Var_1025;
                      MR_Word IntType_1088 = ((MR_Unsigned) ((MR_hl_field(3, Op_16, (MR_Integer) 1))) & (MR_Integer) 15);

                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                      {
                        Var_1025 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Var_1025, 0) = (MR_Box) ((MR_Unsigned) (IntType_1088));
                      }
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalA_17, Var_1025, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">=");
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRvalB_18, Var_1025, Stream_8);
                      mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                    }
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef_426 = ((MR_Word) ((MR_hl_field(3, Rval_7, (MR_Integer) 1))));

            switch (MR_tag((MR_Word) MemRef_426)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubRval_409 = ((MR_Word) ((MR_hl_field(0, MemRef_426, (MR_Integer) 0))));
                  MR_Integer SlotNum_43;
                  MR_Word Var_359;

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_sv(");
                  succeeded = ((((MR_tag((MR_Word) SubRval_409)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_409, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_359 = ((MR_Word) ((MR_hl_field(3, SubRval_409, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_359)) == (MR_Integer) 1);
                    if (succeeded)
                      SlotNum_43 = ((MR_Integer) ((MR_hl_field(1, Var_359, (MR_Integer) 0))));
                  }
                  if (succeeded)
                    mercury__io__write_int_4_p_0(Stream_8, SlotNum_43);
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_409, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubRval_411 = ((MR_Word) ((MR_hl_field(1, MemRef_426, (MR_Integer) 0))));
                  MR_Integer SlotNum_410;
                  MR_Word Var_368;

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_fv(");
                  succeeded = ((((MR_tag((MR_Word) SubRval_411)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_411, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_368 = ((MR_Word) ((MR_hl_field(3, SubRval_411, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_368)) == (MR_Integer) 1);
                    if (succeeded)
                      SlotNum_410 = ((MR_Integer) ((MR_hl_field(1, Var_368, (MR_Integer) 0))));
                  }
                  if (succeeded)
                    mercury__io__write_int_4_p_0(Stream_8, SlotNum_410);
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_411, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BaseRval_44 = ((MR_Word) ((MR_hl_field(2, MemRef_426, (MR_Integer) 0))));
                  MR_Word MaybePtag_417 = ((MR_Word) ((MR_hl_field(2, MemRef_426, (MR_Integer) 1))));
                  MR_Word FieldNumRval_418 = ((MR_Word) ((MR_hl_field(2, MemRef_426, (MR_Integer) 2))));
                  MR_Integer FieldNum_415;
                  MR_Word Var_386;

                  if ((MaybePtag_417 == (MR_Word) ((MR_Unsigned) 0U)))
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_mask_field(");
                  else
                  {
                    MR_Word Var_375 = ((MR_Word) ((MR_hl_field(1, MaybePtag_417, (MR_Integer) 0))));
                    uint8_t PtagUInt8_413 = (uint8_t) (Var_375);
                    MR_Unsigned Var_2285;
                    MR_String Var_2286;

                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_tfield(");
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_413, &Var_2285);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_2285, &Var_2286);
                    mercury__io__write_string_4_p_0(Stream_8, Var_2286);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  }
                  ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, BaseRval_44, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  succeeded = ((((MR_tag((MR_Word) FieldNumRval_418)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_418, (MR_Integer) 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_386 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_418, (MR_Integer) 1))));
                    succeeded = ((MR_tag((MR_Word) Var_386)) == (MR_Integer) 1);
                    if (succeeded)
                      FieldNum_415 = ((MR_Integer) ((MR_hl_field(1, Var_386, (MR_Integer) 0))));
                  }
                  if (succeeded)
                    mercury__io__write_int_4_p_0(Stream_8, FieldNum_415);
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, FieldNumRval_418, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_uint64_rval_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Rval_9,
  MR_Word IsPtr_10)
{
  MR_bool succeeded;
  MR_Word UnboxInt64s_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
  MR_Word StaticGroundInt64s_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
  MR_String UInt64Name_14;
  uint64_t UInt64_74;
  MR_Word Var_75;

  succeeded = (UnboxInt64s_12 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (StaticGroundInt64s_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_75 = ((MR_Word) ((MR_hl_field(3, Rval_9, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_75, (MR_Integer) 0)))) == (MR_Integer) 7)));
        if (succeeded)
        {
          UInt64_74 = MR_unbox_uint64((MR_hl_field(3, Var_75, (MR_Integer) 1)));
          UInt64Name_14 = mercury__string__uint64_to_string_1_f_0(UInt64_74);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Cast_15;

    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Cast_15 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        Cast_15 = (MR_Word) ((MR_Unsigned) 12U);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, Cast_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&mercury_uint64_const_");
    mercury__io__write_string_4_p_0(Stream_8, UInt64Name_14);
  }
  else
  {
    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_uint64_to_word(");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_9, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_int64_rval_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Rval_9,
  MR_Word IsPtr_10)
{
  MR_bool succeeded;
  MR_Word UnboxInt64s_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 7))) >> 4)) & (MR_Integer) 1);
  MR_Word StaticGroundInt64s_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 7))) >> 3)) & (MR_Integer) 1);
  MR_String Int64Name_14;
  int64_t Int64_74;
  MR_Word Var_75;
  MR_String Int64Name0_76;
  MR_String Var_77;
  MR_String Var_78;

  succeeded = (UnboxInt64s_12 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (StaticGroundInt64s_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_75 = ((MR_Word) ((MR_hl_field(3, Rval_9, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_75, (MR_Integer) 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Int64_74 = MR_unbox_int64((MR_hl_field(3, Var_75, (MR_Integer) 1)));
          Int64Name0_76 = mercury__string__int64_to_string_1_f_0(Int64_74);
          Var_77 = (MR_String) "-";
          Var_78 = (MR_String) "neg";
          mercury__string__replace_all_4_p_0(Int64Name0_76, Var_77, Var_78, &Int64Name_14);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Cast_15;

    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Cast_15 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        Cast_15 = (MR_Word) ((MR_Unsigned) 12U);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, Cast_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&mercury_int64_const_");
    mercury__io__write_string_4_p_0(Stream_8, Int64Name_14);
  }
  else
  {
    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_int64_to_word(");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_9, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word Rval_9,
  MR_Word IsPtr_10)
{
  MR_bool succeeded;
  MR_Word UnboxFloat_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 7))) >> 7)) & (MR_Integer) 1);
  MR_Word StaticGroundFloats_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, (MR_Integer) 7))) >> 5)) & (MR_Integer) 1);
  MR_String FloatName_14;
  MR_Float Float_74;
  MR_Word Var_78;

  succeeded = (UnboxFloat_12 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (StaticGroundFloats_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, (MR_Integer) 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_78 = ((MR_Word) ((MR_hl_field(3, Rval_9, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) Var_78)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_78, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (succeeded)
          Float_74 = MR_unbox_float((MR_hl_field(3, Var_78, (MR_Integer) 1)));
      }
      if (succeeded)
      {
        MR_String FloatName0_79;
        MR_String FloatName1_80;
        MR_String FloatName2_81;

        FloatName0_79 = backend_libs__c_util__make_float_literal_1_f_0(Float_74);
        mercury__string__replace_all_4_p_0(FloatName0_79, (MR_String) ".", (MR_String) "pt", &FloatName1_80);
        mercury__string__replace_all_4_p_0(FloatName1_80, (MR_String) "+", (MR_String) "plus", &FloatName2_81);
        mercury__string__replace_all_4_p_0(FloatName2_81, (MR_String) "-", (MR_String) "neg", &FloatName_14);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Op_75;
        MR_Word Arg1_76;
        MR_Word Arg2_77;
        MR_String OpName_88;
        MR_String Arg1Name_89;
        MR_String Arg2Name_90;
        MR_String Var_91;
        MR_String Var_92;
        MR_String Var_93;
        MR_String Var_94;
        MR_String Var_95;

        succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, (MR_Integer) 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Op_75 = ((MR_Word) ((MR_hl_field(3, Rval_9, (MR_Integer) 1))));
          Arg1_76 = ((MR_Word) ((MR_hl_field(3, Rval_9, (MR_Integer) 2))));
          Arg2_77 = ((MR_Word) ((MR_hl_field(3, Rval_9, (MR_Integer) 3))));
          succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_75, &OpName_88);
          if (succeeded)
          {
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_76, &Arg1Name_89);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_77, &Arg2Name_90);
              if (succeeded)
              {
                Var_92 = (MR_String) "_";
                Var_95 = (MR_String) "_";
                Var_94 = mercury__string__f_43_43_2_f_0(Var_95, Arg2Name_90);
                Var_93 = mercury__string__f_43_43_2_f_0(Arg1Name_89, Var_94);
                Var_91 = mercury__string__f_43_43_2_f_0(Var_92, Var_93);
                FloatName_14 = mercury__string__f_43_43_2_f_0(OpName_88, Var_91);
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
    MR_Word Cast_15;

    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Cast_15 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        Cast_15 = (MR_Word) ((MR_Unsigned) 12U);
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, Cast_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&mercury_float_const_");
    mercury__io__write_string_4_p_0(Stream_8, FloatName_14);
  }
  else
  {
    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
        }
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_float_to_word(");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_9, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word StackType_9,
  MR_Integer SlotNum_10)
{
  MR_Word Lval_12;

  switch (StackType_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) SlotNum_10 + (MR_Unsigned) 1);

        {
          Lval_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Lval_12, 0) = ((MR_Box) ((MR_Unsigned) 1U));
          MR_hl_field(3, Lval_12, 1) = ((MR_Box) (Var_17));
        }
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Integer Var_15 = (MR_Integer) ((MR_Unsigned) SlotNum_10 + (MR_Unsigned) 1);

        {
          Lval_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Lval_12, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Lval_12, 1) = ((MR_Box) (Var_15));
        }
      }
      break;
  }
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_dword_ptr(&(");
  ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_7, Stream_8, Lval_12);
  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word Lval_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Lval_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Lval_8)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_succip");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_maxfr");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_curfr");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_hp");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_sp");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_parent_sp");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Type_10 = ((MR_Unsigned) ((MR_hl_field(1, Lval_8, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Num_11 = ((MR_Integer) ((MR_hl_field(1, Lval_8, (MR_Integer) 1))));

        ll_backend__llds_out__llds_out_data__output_reg_5_p_0(Stream_7, Type_10, Num_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_133 = ((MR_Unsigned) ((MR_hl_field(2, Lval_8, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Num_134 = ((MR_Integer) ((MR_hl_field(2, Lval_8, (MR_Integer) 1))));

        switch (Type_133) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_tempf");
              mercury__io__write_int_4_p_0(Stream_7, Num_134);
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_tempr");
              mercury__io__write_int_4_p_0(Stream_7, Num_134);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));
            MR_String Var_139;

            succeeded = (N_12 <= (MR_Integer) 0);
            if (succeeded)
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/5", (MR_String) "stack var out of range");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_sv(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_12, &Var_139);
            mercury__io__write_string_4_p_0(Stream_7, Var_139);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Integer N_126 = ((MR_Integer) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));
            MR_String Var_150;

            succeeded = (N_126 <= (MR_Integer) 0);
            if (succeeded)
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/5", (MR_String) "parent stack var out of range");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_parent_sv(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_126, &Var_150);
            mercury__io__write_string_4_p_0(Stream_7, Var_150);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer N_127 = ((MR_Integer) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));
            MR_String Var_161;

            succeeded = (N_127 <= (MR_Integer) 0);
            if (succeeded)
              {
                mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/5", (MR_String) "frame var out of range");
                return;
              }
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_fv(");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_127, &Var_161);
            mercury__io__write_string_4_p_0(Stream_7, Var_161);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word StackType_13 = ((MR_Unsigned) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer SlotNum_14 = ((MR_Integer) ((MR_hl_field(3, Lval_8, (MR_Integer) 2))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_float_from_dword_ptr(");
            ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(Info_6, Stream_7, StackType_13, SlotNum_14);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval_131 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_succip_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_131, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_succfr_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_15, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_130 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_redoip_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_130, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_129 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_redofr_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_129, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_128 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_prevfr_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_128, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybePtag_16 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));
            MR_Word FieldNumRval_17 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 3))));
            MR_Word Rval_132 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 2))));
            MR_Integer FieldNum_19;
            MR_Word Var_105;

            if ((MaybePtag_16 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_mask_field(");
            else
            {
              uint8_t PtagUInt8_18;
              MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, MaybePtag_16, (MR_Integer) 0))));
              MR_Unsigned Var_173;
              MR_String Var_174;

              PtagUInt8_18 = (uint8_t) (Var_94);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_tfield(");
              mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_18, &Var_173);
              mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_173, &Var_174);
              mercury__io__write_string_4_p_0(Stream_7, Var_174);
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
            }
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_132, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) FieldNumRval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_105 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_17, (MR_Integer) 1))));
              succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_Integer) 1);
              if (succeeded)
                FieldNum_19 = ((MR_Integer) ((MR_hl_field(1, Var_105, (MR_Integer) 0))));
            }
            if (succeeded)
              mercury__io__write_int_4_p_0(Stream_7, FieldNum_19);
            else
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, FieldNumRval_17, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Rval_135 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "* (MR_Word *) (");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_135, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word GlobalVar_21 = ((MR_Word) ((MR_hl_field(3, Lval_8, (MR_Integer) 1))));
            MR_String Var_124;

            Var_124 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(GlobalVar_21);
            mercury__io__write_string_4_p_0(Stream_7, Var_124);
          }
          break;
        case (MR_Integer) 12:
          {
            mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/5", (MR_String) "lvar");
            return;
          }
          break;
      }
      break;
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(
  MR_Word Expr_3,
  MR_String * Name_4)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
  MR_Float Float_5;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(3, Expr_3, (MR_Integer) 1))));
    succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, (MR_Integer) 0)))) == (MR_Integer) 9)));
    if (succeeded)
      Float_5 = MR_unbox_float((MR_hl_field(3, Var_9, (MR_Integer) 1)));
  }
  if (succeeded)
  {
    MR_String FloatName0_10;
    MR_String FloatName1_11;
    MR_String FloatName2_12;

    FloatName0_10 = backend_libs__c_util__make_float_literal_1_f_0(Float_5);
    mercury__string__replace_all_4_p_0(FloatName0_10, (MR_String) ".", (MR_String) "pt", &FloatName1_11);
    mercury__string__replace_all_4_p_0(FloatName1_11, (MR_String) "+", (MR_String) "plus", &FloatName2_12);
    mercury__string__replace_all_4_p_0(FloatName2_12, (MR_String) "-", (MR_String) "neg", Name_4);
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word Op_6;
    MR_Word Arg1_7;
    MR_Word Arg2_8;
    MR_String OpName_19;
    MR_String Arg1Name_20;
    MR_String Arg2Name_21;
    MR_String Var_22;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_26;

    succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Op_6 = ((MR_Word) ((MR_hl_field(3, Expr_3, (MR_Integer) 1))));
      Arg1_7 = ((MR_Word) ((MR_hl_field(3, Expr_3, (MR_Integer) 2))));
      Arg2_8 = ((MR_Word) ((MR_hl_field(3, Expr_3, (MR_Integer) 3))));
      succeeded = ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(Op_6, &OpName_19);
      if (succeeded)
      {
        succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_7, &Arg1Name_20);
        if (succeeded)
        {
          succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_8, &Arg2Name_21);
          if (succeeded)
          {
            Var_23 = (MR_String) "_";
            Var_26 = (MR_String) "_";
            Var_25 = mercury__string__f_43_43_2_f_0(Var_26, Arg2Name_21);
            Var_24 = mercury__string__f_43_43_2_f_0(Arg1Name_20, Var_25);
            Var_22 = mercury__string__f_43_43_2_f_0(Var_23, Var_24);
            *Name_4 = mercury__string__f_43_43_2_f_0(OpName_19, Var_22);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_op_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
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
        case (MR_Integer) 13:
          {
            *HeadVar__2_2 = (MR_String) "fadd";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 14:
          {
            *HeadVar__2_2 = (MR_String) "fsub";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 15:
          {
            *HeadVar__2_2 = (MR_String) "fmul";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 16:
          {
            *HeadVar__2_2 = (MR_String) "fdiv";
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * MemRef_6)
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
    LvalA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      LvalB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
      succeeded = ((((MR_tag((MR_Word) LvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        N_7 = ((MR_Integer) ((MR_hl_field(3, LvalA_4, (MR_Integer) 1))));
        succeeded = ((((MR_tag((MR_Word) LvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_11 = ((MR_Integer) ((MR_hl_field(3, LvalB_5, (MR_Integer) 1))));
          Var_12 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) N_7);
          succeeded = (Var_12 == (MR_Integer) 1);
          if (succeeded)
          {
            Var_16 = (MR_Integer) 1;
            Var_15 = (MR_Integer) ((MR_Unsigned) N_7 + (MR_Unsigned) Var_16);
            {
              Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_14, 0) = ((MR_Box) (Var_15));
            }
            {
              Var_13 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, Var_13, 0) = ((MR_Box) ((MR_Unsigned) 1U));
              MR_hl_field(3, Var_13, 1) = ((MR_Box) (Var_14));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              *MemRef_6 = base;
              MR_hl_field(0, base, 0) = ((MR_Box) (Var_13));
            }
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_LambdaHeadVar__3_72;

  conv0_LambdaHeadVar__3_72 = ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1461__1_2_f_0(((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_72));
  return wrapper_arg_3;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(
  MR_Word Info_6,
  MR_Word Const_7,
  MR_Word Stream_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Const_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Const_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_TRUE");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_FALSE");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(1, Const_7, (MR_Integer) 0))));

        backend_libs__c_util__output_int_expr_4_p_0(Stream_8, N_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned N_103 = ((MR_Unsigned) ((MR_hl_field(2, Const_7, (MR_Integer) 0))));

        backend_libs__c_util__output_uint_expr_4_p_0(Stream_8, N_103);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int8_t N_104 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_int8_expr_4_p_0(Stream_8, N_104);
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t N_105 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_uint8_expr_4_p_0(Stream_8, N_105);
          }
          break;
        case (MR_Integer) 2:
          {
            int16_t N_106 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_int16_expr_4_p_0(Stream_8, N_106);
          }
          break;
        case (MR_Integer) 3:
          {
            uint16_t N_107 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_uint16_expr_4_p_0(Stream_8, N_107);
          }
          break;
        case (MR_Integer) 4:
          {
            int32_t N_108 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_int32_expr_4_p_0(Stream_8, N_108);
          }
          break;
        case (MR_Integer) 5:
          {
            uint32_t N_109 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_uint32_expr_4_p_0(Stream_8, N_109);
          }
          break;
        case (MR_Integer) 6:
          {
            int64_t N_110 = MR_unbox_int64((MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_int64_expr_4_p_0(Stream_8, N_110);
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t N_111 = MR_unbox_uint64((MR_hl_field(3, Const_7, (MR_Integer) 1)));

            backend_libs__c_util__output_uint64_expr_4_p_0(Stream_8, N_111);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Value_11 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(3, Const_7, (MR_Integer) 2))));

            mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
            ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(Stream_8, Type_12);
            mercury__io__write_string_4_p_0(Stream_8, Value_11);
            mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Float FloatVal_13 = MR_unbox_float((MR_hl_field(3, Const_7, (MR_Integer) 1)));

            ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 4U));
            backend_libs__c_util__output_float_literal_4_p_0(Stream_8, FloatVal_13);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String String_14 = ((MR_String) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            MR_Integer Var_61;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_string_const(");
            backend_libs__c_util__output_quoted_string_c_4_p_0(Stream_8, String_14);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            Var_61 = mercury__string__count_utf8_code_units_1_f_0(String_14);
            mercury__io__write_int_4_p_0(Stream_8, Var_61);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Strings_15 = ((MR_Word) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            MR_Integer Length_19;
            MR_Box conv1_Length_19;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_string_const(");
            backend_libs__c_util__output_quoted_multi_string_c_4_p_0(Stream_8, Strings_15);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            conv1_Length_19 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_4[0]), Strings_15, ((MR_Box) ((MR_Integer) 0)));
            Length_19 = ((MR_Integer) (conv1_Length_19));
            mercury__io__write_int_4_p_0(Stream_8, Length_19);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word CodeAddress_20 = ((MR_Word) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));

            ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_8, CodeAddress_20);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word DataId_21 = ((MR_Word) ((MR_hl_field(3, Const_7, (MR_Integer) 1))));
            MR_Word MaybeOffset_22 = ((MR_Word) ((MR_hl_field(3, Const_7, (MR_Integer) 2))));

            if ((MaybeOffset_22 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Integer TypeNum_23;
              MR_Integer CellNum_24;
              MR_Word Var_81;

              succeeded = ((MR_tag((MR_Word) DataId_21)) == (MR_Integer) 2);
              if (succeeded)
              {
                Var_81 = ((MR_Word) ((MR_hl_field(2, DataId_21, (MR_Integer) 0))));
                CellNum_24 = ((MR_Integer) ((MR_hl_field(2, DataId_21, (MR_Integer) 1))));
                TypeNum_23 = (MR_Integer) (Var_81);
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_String Var_119;
                MR_String Var_129;

                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_COMMON(");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), TypeNum_23, &Var_119);
                mercury__io__write_string_4_p_0(Stream_8, Var_119);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_24, &Var_129);
                mercury__io__write_string_4_p_0(Stream_8, Var_129);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
              }
              else
              {
                MR_Word Module_27;
                MR_String Name_28;
                uint16_t Arity_29;
                MR_Word RttiId_25;
                MR_Word Ctor_26;

                succeeded = ((MR_tag((MR_Word) DataId_21)) == (MR_Integer) 0);
                if (succeeded)
                {
                  RttiId_25 = ((MR_Word) ((MR_hl_field(0, DataId_21, (MR_Integer) 0))));
                  succeeded = backend_libs__rtti__rtti_id_emits_type_ctor_info_2_p_0(RttiId_25, &Ctor_26);
                  if (succeeded)
                  {
                    Module_27 = ((MR_Word) ((MR_hl_field(0, Ctor_26, (MR_Integer) 0))));
                    Name_28 = ((MR_String) ((MR_hl_field(0, Ctor_26, (MR_Integer) 1))));
                    Arity_29 = ((uint16_t) (MR_Word) (MR_hl_field(0, Ctor_26, (MR_Integer) 2)));
                    succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(Module_27);
                    if (succeeded)
                      succeeded = backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(Name_28);
                  }
                }
                if (succeeded)
                  ll_backend__llds_out__llds_out_data__output_type_ctor_addr_6_p_0(Stream_8, Module_27, Name_28, Arity_29);
                else
                {
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
                  ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_6, Stream_8, DataId_21);
                }
              }
            }
            else
            {
              MR_Integer Offset_30 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_22, (MR_Integer) 0))));

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
              ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_6, Stream_8, DataId_21);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") + ");
              mercury__io__write_int_4_p_0(Stream_8, Offset_30);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_type_ctor_addr_6_p_0(
  MR_Word Stream_7,
  MR_Word Module0_8,
  MR_String Name_9,
  uint16_t Arity_10)
{
  MR_bool succeeded = ((MR_tag((MR_Word) Module0_8)) == (MR_Integer) 0);
  MR_Word Module_12;
  MR_String ModuleStr_13;
  MR_String Var_17;

  if (succeeded)
  {
    Var_17 = ((MR_String) ((MR_hl_field(0, Module0_8, (MR_Integer) 0))));
    succeeded = (strcmp(Var_17, (MR_String) "") == 0);
  }
  if (succeeded)
    Module_12 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
  else
    Module_12 = Module0_8;
  ModuleStr_13 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_12);
  succeeded = (Arity_10 == UINT16_C(0));
  if (succeeded)
  {
    MR_String Macro_14;
    MR_Integer slot_0;
    MR_String str_1;

    succeeded = (strcmp(ModuleStr_13, (MR_String) "builtin") == 0);
    if (succeeded)
    {
      // hashed string simple lookup switch
      ;
      // compute the hash value of the input string
      ;
      slot_0 = ((MR_hash_string6(Name_9)) & (MR_Integer) 63);
      // no collisions; no hash chain loop
      ;
      // lookup the string for this hash slot
      ;
      str_1 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, Name_9) == 0))))
      {
        // we found a match; look up the results
        ;
        Macro_14 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      succeeded = MR_FALSE;
    label_0:;
    }
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_7, Macro_14);
    else
    {
      succeeded = (strcmp(ModuleStr_13, (MR_String) "io") == 0);
      if (succeeded)
        succeeded = (strcmp(Name_9, (MR_String) "state") == 0);
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_IO_CTOR_ADDR");
      else
      {
        succeeded = (strcmp(ModuleStr_13, (MR_String) "bool") == 0);
        if (succeeded)
          succeeded = (strcmp(Name_9, (MR_String) "bool") == 0);
        if (succeeded)
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_BOOL_CTOR_ADDR");
        else
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_CTOR0_ADDR(");
          mercury__io__write_string_4_p_0(Stream_7, ModuleStr_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          mercury__io__write_string_4_p_0(Stream_7, Name_9);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
      }
    }
  }
  else
  {
    succeeded = (Arity_10 == UINT16_C(1));
    if (succeeded)
    {
      succeeded = (strcmp(Name_9, (MR_String) "list") == 0);
      if (succeeded)
        succeeded = (strcmp(ModuleStr_13, (MR_String) "list") == 0);
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_LIST_CTOR_ADDR");
      else
      {
        succeeded = (strcmp(Name_9, (MR_String) "private_builtin") == 0);
        if (succeeded)
          succeeded = (strcmp(ModuleStr_13, (MR_String) "type_info") == 0);
        if (succeeded)
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_TYPE_INFO_CTOR_ADDR");
        else
        {
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_CTOR1_ADDR(");
          mercury__io__write_string_4_p_0(Stream_7, ModuleStr_13);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
          mercury__io__write_string_4_p_0(Stream_7, Name_9);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
        }
      }
    }
    else
    {
      MR_Integer Var_49;
      MR_String Var_74;

      Var_49 = mercury__uint16__to_int_1_f_0(Arity_10);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_CTOR_ADDR(");
      mercury__io__write_string_4_p_0(Stream_7, ModuleStr_13);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_7, Name_9);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), Var_49, &Var_74);
      mercury__io__write_string_4_p_0(Stream_7, Var_74);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DataId_8)
{
  switch (MR_tag((MR_Word) DataId_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiId_10 = ((MR_Word) ((MR_hl_field(0, DataId_8, (MR_Integer) 0))));

        ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_7, RttiId_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(1, DataId_8, (MR_Integer) 0))));
        MR_Word TablingId_12 = ((MR_Word) ((MR_hl_field(1, DataId_8, (MR_Integer) 1))));
        MR_String Var_24;

        Var_24 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_11, TablingId_12);
        mercury__io__write_string_4_p_0(Stream_7, Var_24);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeNum_13 = ((MR_Word) ((MR_hl_field(2, DataId_8, (MR_Integer) 0))));
        MR_Integer CellNum_14 = ((MR_Integer) ((MR_hl_field(2, DataId_8, (MR_Integer) 1))));
        MR_String Var_89;

        ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_4_p_0(Stream_7, TypeNum_13);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_14, &Var_89);
        mercury__io__write_string_4_p_0(Stream_7, Var_89);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DataId_8, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeNum_36 = ((MR_Word) ((MR_hl_field(3, DataId_8, (MR_Integer) 1))));
            MR_Integer CellNum_37 = ((MR_Integer) ((MR_hl_field(3, DataId_8, (MR_Integer) 2))));

            ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_5_p_0(Stream_7, TypeNum_36, CellNum_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_15 = ((MR_Word) ((MR_hl_field(3, DataId_8, (MR_Integer) 1))));

            ll_backend__layout_out__output_layout_name_4_p_0(Stream_7, LayoutName_15);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredProcId_17 = ((MR_Word) ((MR_hl_field(3, DataId_8, (MR_Integer) 2))));
            MR_Word TableIoEntryMap_18 = ((MR_Word) ((MR_hl_field(0, Info_6, (MR_Integer) 5))));
            MR_Word LayoutSlotName_19;
            MR_String MangledModuleName_20;
            MR_Box conv0_LayoutSlotName_19;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), TableIoEntryMap_18, ((MR_Box) (PredProcId_17)), &conv0_LayoutSlotName_19);
            LayoutSlotName_19 = ((MR_Word) (conv0_LayoutSlotName_19));
            MangledModuleName_20 = ((MR_String) ((MR_hl_field(0, Info_6, (MR_Integer) 1))));
            ll_backend__layout_out__output_layout_slot_id_6_p_0(Stream_7, (MR_Integer) 1, MangledModuleName_20, LayoutSlotName_19);
          }
          break;
      }
      break;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_5_p_0(
  MR_Word Stream_6,
  MR_Word HeadVar__2_2,
  MR_Integer CellNum_8)
{
  MR_Integer TypeNum_7 = (MR_Integer) (HeadVar__2_2);
  MR_String Var_16;
  MR_String Var_24;
  MR_String Var_33;

  Var_16 = backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_6, Var_16);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), TypeNum_7, &Var_24);
  mercury__io__write_string_4_p_0(Stream_6, Var_24);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "_");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_8, &Var_33);
  mercury__io__write_string_4_p_0(Stream_6, Var_33);
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  MR_Integer TypeNum_6 = (MR_Integer) (HeadVar__2_2);
  MR_String Var_14;
  MR_String Var_19;

  Var_14 = backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0();
  mercury__io__write_string_4_p_0(Stream_5, Var_14);
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), TypeNum_6, &Var_19);
  mercury__io__write_string_4_p_0(Stream_5, Var_19);
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(
  MR_Word Stream_5,
  MR_Word LLDSType_6)
{
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(");
  ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(Stream_5, LLDSType_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ") ");
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_5_p_0(
  MR_Word Stream_6,
  MR_Word RegType_7,
  MR_Integer N_8)
{
  MR_String Var_12;

  Var_12 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_7, N_8);
  mercury__io__write_string_4_p_0(Stream_6, Var_12);
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2)
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

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_String EnvVarName_3 = (MR_String) (HeadVar__1_1);

  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", EnvVarName_3);
  return HeadVar__2_2;
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_4_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Integer");
          break;
        case (MR_Integer) 1:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Float");
          break;
        case (MR_Integer) 2:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_String");
          break;
        case (MR_Integer) 3:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Word *");
          break;
        case (MR_Integer) 4:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Code *");
          break;
        case (MR_Integer) 5:
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Word");
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_153 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 7);

        switch (Var_153) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_int_least16_t");
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_int_least32_t");
            break;
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_int_least8_t");
            break;
          case (MR_Integer) 3:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_uint_least16_t");
            break;
          case (MR_Integer) 5:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_uint_least32_t");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_uint_least8_t");
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_152 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 15);

        switch (Var_152) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Integer");
            break;
          case (MR_Integer) 4:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "int16_t");
            break;
          case (MR_Integer) 6:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "int32_t");
            break;
          case (MR_Integer) 8:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "int64_t");
            break;
          case (MR_Integer) 2:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "int8_t");
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "MR_Unsigned");
            break;
          case (MR_Integer) 5:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "uint16_t");
            break;
          case (MR_Integer) 7:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "uint32_t");
            break;
          case (MR_Integer) 9:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "uint64_t");
            break;
          case (MR_Integer) 3:
            mercury__io__write_string_4_p_0(Stream_1, (MR_String) "uint8_t");
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
