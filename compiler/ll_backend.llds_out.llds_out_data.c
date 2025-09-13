/*
** Automatically generated from `llds_out_data.m'
** by the Mercury compiler,
** version rotd-2025-09-13
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
#include "sparse_bitset.mih"
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
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.instmap.mih"
#include "libs.file_util.mih"
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
#include "parse_tree.find_module.mih"
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




static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_1;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_2;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_ordinal_ordered_dword_type_0[3];

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_name_ordered_dword_type_0[3];

static const MR_Integer ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__functor_number_map_dword_type_0[3];

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_0;

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_1;

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_ordinal_ordered_maybe_negated_test_0[2];

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_name_ordered_maybe_negated_test_0[2];

static const MR_Integer ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__functor_number_map_maybe_negated_test_0[2];

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1163__1_2_f_0(
  MR_String LambdaHeadVar__1_69,
  MR_Integer LambdaHeadVar__2_70);

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____maybe_negated_test_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____maybe_negated_test_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____dword_type_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____dword_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_84,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86,
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
ll_backend__llds_out__llds_out_data__do_output_test_rval_6_p_0(
  MR_Word Stream_7,
  MR_Word Info_8,
  MR_Word MaybeNegated_9,
  MR_Word TestRval_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(
  MR_Word Stream_7,
  MR_Word Info_8,
  MR_Word MaybeNegated_9,
  MR_Word Test0_10);

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
ll_backend__llds_out__llds_out_data__output_rval_binop_7_p_0(
  MR_Word Stream_8,
  MR_Word Info_9,
  MR_Word Op_10,
  MR_Word SubRvalA_11,
  MR_Word SubRvalB_12);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(
  MR_Word Info_7,
  MR_Word Stream_8,
  MR_Word StackType_9,
  MR_Integer SlotNum_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_arith_op_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * MemRef_6);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word VarRval_6,
  MR_Word Ptag_7,
  MR_Unsigned * Sectag_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__args_are_of_ptag_test_4_p_0(
  MR_Word SubRvalA_5,
  MR_Word SubRvalB_6,
  MR_Word * VarRval_7,
  MR_Word * Ptag_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word TestRval_5,
  MR_Word * VarRval_6,
  MR_Word * Ptag_7,
  MR_Word * Negated_8);

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
ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(
  MR_Word Stream_5,
  MR_Word Type_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_5_p_0(
  MR_Word Stream_6,
  MR_Word RegType_7,
  MR_Integer N_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____dword_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____dword_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____maybe_negated_test_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____maybe_negated_test_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_1[3][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][3];


struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s {
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s ll_backend__llds_out__llds_out_data_vector_common_2[24];

struct ll_backend__llds_out__llds_out_data__vector_common_type_3_0_s {
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_3_0__vct_3_f_0;
  const MR_String ll_backend__llds_out__llds_out_data__vector_common_type_3_0__vct_3_f_1;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_3_0_s ll_backend__llds_out__llds_out_data_vector_common_3[64];

struct ll_backend__llds_out__llds_out_data__vector_common_type_6_0_s {
  const MR_Word ll_backend__llds_out__llds_out_data__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_6_0_s ll_backend__llds_out__llds_out_data_vector_common_6[10];



static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_1[3][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
  /* row   1 */
  { (MR_Box) ((MR_Unsigned) 0U) },
  /* row   2 */
  { (MR_Box) ((MR_Unsigned) 1U) },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][6] = {
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_data_scalar_common_4[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};


static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s ll_backend__llds_out__llds_out_data_vector_common_2[24] = {
  /* row   0 */   { (MR_String) "MR_Integer" },
  /* row   1 */   { (MR_String) "MR_Unsigned" },
  /* row   2 */   { (MR_String) "int8_t" },
  /* row   3 */   { (MR_String) "uint8_t" },
  /* row   4 */   { (MR_String) "int16_t" },
  /* row   5 */   { (MR_String) "uint16_t" },
  /* row   6 */   { (MR_String) "int32_t" },
  /* row   7 */   { (MR_String) "uint32_t" },
  /* row   8 */   { (MR_String) "int64_t" },
  /* row   9 */   { (MR_String) "uint64_t" },
  /* row  10 */   { (MR_String) "MR_int_least8_t" },
  /* row  11 */   { (MR_String) "MR_uint_least8_t" },
  /* row  12 */   { (MR_String) "MR_int_least16_t" },
  /* row  13 */   { (MR_String) "MR_uint_least16_t" },
  /* row  14 */   { (MR_String) "MR_int_least32_t" },
  /* row  15 */   { (MR_String) "MR_uint_least32_t" },
  /* row  16 */   { (MR_String) "fadd" },
  /* row  17 */   { (MR_String) "fsub" },
  /* row  18 */   { (MR_String) "fmul" },
  /* row  19 */   { (MR_String) "fdiv" },
  /* row  20 */   { (MR_String) "fadd" },
  /* row  21 */   { (MR_String) "fsub" },
  /* row  22 */   { (MR_String) "fmul" },
  /* row  23 */   { (MR_String) "fdiv" },
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_3_0_s ll_backend__llds_out__llds_out_data_vector_common_3[64] = {
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

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_6_0_s ll_backend__llds_out__llds_out_data_vector_common_6[10] = {
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


static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_0 = {
  (MR_String) "dword_float",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_1 = {
  (MR_String) "dword_int64",
  INT32_C(1)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_2 = {
  (MR_String) "dword_uint64",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_ordinal_ordered_dword_type_0[3] = {
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_0,
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_1,
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_2
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_name_ordered_dword_type_0[3] = {
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_0,
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_1,
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_dword_type_0_2
};

static const MR_Integer ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__functor_number_map_dword_type_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__type_ctor_info_dword_type_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_data____Unify____dword_type_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_data____Compare____dword_type_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_data",
  (MR_String) "dword_type",
  { ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_name_ordered_dword_type_0 },
  { ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_ordinal_ordered_dword_type_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__functor_number_map_dword_type_0,

};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_0 = {
  (MR_String) "plain_test",
  INT32_C(0)
};

static const MR_EnumFunctorDesc ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_1 = {
  (MR_String) "negated_test",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_ordinal_ordered_maybe_negated_test_0[2] = {
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_0,
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_1
};

static const MR_EnumFunctorDescPtr ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_name_ordered_maybe_negated_test_0[2] = {
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_1,
  &ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_functor_desc_maybe_negated_test_0_0
};

static const MR_Integer ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__functor_number_map_maybe_negated_test_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__type_ctor_info_maybe_negated_test_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (ll_backend__llds_out__llds_out_data____Unify____maybe_negated_test_0_0_10001)),
  ((MR_Box) (ll_backend__llds_out__llds_out_data____Compare____maybe_negated_test_0_0_10001)),
  (MR_String) "ll_backend.llds_out.llds_out_data",
  (MR_String) "maybe_negated_test",
  { ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_name_ordered_maybe_negated_test_0 },
  { ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__enum_ordinal_ordered_maybe_negated_test_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__functor_number_map_maybe_negated_test_0,

};

static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1163__1_2_f_0(
  MR_String LambdaHeadVar__1_69,
  MR_Integer LambdaHeadVar__2_70)
{
  MR_Integer LambdaHeadVar__3_71;
  MR_Integer Var_72;
  MR_Integer Var_73;

  Var_73 = mercury__string__count_utf8_code_units_1_f_0(LambdaHeadVar__1_69);
  Var_72 = (MR_Integer) ((MR_Unsigned) LambdaHeadVar__2_70 + (MR_Unsigned) Var_73);
  LambdaHeadVar__3_71 = (MR_Integer) ((MR_Unsigned) Var_72 + (MR_Unsigned) 1);
  return LambdaHeadVar__3_71;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____maybe_negated_test_0_0(
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____maybe_negated_test_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____dword_type_0_0(
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____dword_type_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, 0)))) == (MR_Integer) 1)));
  uint64_t UInt64_5;
  MR_Word Var_6;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(3, Expr_3, 1))));
    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_6, 0)))) == (MR_Integer) 7)));
    if (succeeded)
    {
      UInt64_5 = MR_unbox_uint64((MR_hl_field(3, Var_6, 1)));
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, 0)))) == (MR_Integer) 1)));
  int64_t Int64_5;
  MR_Word Var_6;
  MR_String Int64Name0_7;
  MR_String Var_8;
  MR_String Var_9;

  if (succeeded)
  {
    Var_6 = ((MR_Word) ((MR_hl_field(3, Expr_3, 1))));
    succeeded = ((((MR_tag((MR_Word) Var_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_6, 0)))) == (MR_Integer) 6)));
    if (succeeded)
    {
      Int64_5 = MR_unbox_int64((MR_hl_field(3, Var_6, 1)));
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
        MR_Word IntType_6 = ((MR_Unsigned) ((MR_hl_field(2, LLDSType_3, 0))) & (MR_Integer) 15);

        DirectFieldIntConstant_4 = ((&ll_backend__llds_out__llds_out_data_vector_common_6[0 + IntType_6]))->ll_backend__llds_out__llds_out_data__vector_common_type_6_0__vct_6_f_0;
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
      MR_Integer STATE_VARIABLE_N_1_43;
      MR_Word STATE_VARIABLE_DeclSet_1_44;
      MR_Word next_value_of_HeadVar__3_3;
      MR_Integer next_value_of_STATE_VARIABLE_N_0_6;
      MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_8;

      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_13_p_0(Info_1, Stream_2, HeadVar__3_3, &LeftOverRvals_35, (MR_Integer) 1000, FirstIndent_4, LaterIndent_5, STATE_VARIABLE_N_0_6, &STATE_VARIABLE_N_1_43, STATE_VARIABLE_DeclSet_0_8, &STATE_VARIABLE_DeclSet_1_44);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__3_3 = LeftOverRvals_35;
      next_value_of_STATE_VARIABLE_N_0_6 = STATE_VARIABLE_N_1_43;
      next_value_of_STATE_VARIABLE_DeclSet_0_8 = STATE_VARIABLE_DeclSet_1_44;
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
      MR_Word Rval_30 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
      MR_Word Rvals_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));

      succeeded = (Count_5 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_Integer STATE_VARIABLE_N_1_46;
        MR_Word STATE_VARIABLE_DeclSet_1_47;
        MR_Integer Var_49;
        MR_Word next_value_of_HeadVar__3_3;
        MR_Integer next_value_of_Count_5;
        MR_Integer next_value_of_STATE_VARIABLE_N_0_8;
        MR_Word next_value_of_STATE_VARIABLE_DeclSet_0_10;

        ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_1, Stream_2, Rval_30, FirstIndent_6, LaterIndent_7, STATE_VARIABLE_N_0_8, &STATE_VARIABLE_N_1_46, STATE_VARIABLE_DeclSet_0_10, &STATE_VARIABLE_DeclSet_1_47);
        Var_49 = (MR_Integer) ((MR_Unsigned) Count_5 - (MR_Unsigned) 1);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_3 = Rvals_31;
        next_value_of_Count_5 = Var_49;
        next_value_of_STATE_VARIABLE_N_0_8 = STATE_VARIABLE_N_1_46;
        next_value_of_STATE_VARIABLE_DeclSet_0_10 = STATE_VARIABLE_DeclSet_1_47;
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
ll_backend__llds_out__llds_out_data__lval_to_string_2_p_0(
  MR_Word Lval_3,
  MR_String * Str_4)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Lval_3)) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      switch (MR_unmkbody(Lval_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *Str_4 = (MR_String) "succip";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            *Str_4 = (MR_String) "maxfr";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            *Str_4 = (MR_String) "curfr";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            *Str_4 = (MR_String) "hp";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 4:
          {
            *Str_4 = (MR_String) "sp";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 5:
          {
            *Str_4 = (MR_String) "parent_sp";
            succeeded = MR_TRUE;
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RegType_5 = ((MR_Unsigned) ((MR_hl_field(1, Lval_3, 0))) & (MR_Integer) 1);
        MR_Integer RegNum_6 = ((MR_Integer) ((MR_hl_field(1, Lval_3, 1))));

        *Str_4 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(RegType_5, RegNum_6);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(2, Lval_3, 1))));
        MR_String RegTypeStr_8;
        MR_Word RegType_39 = ((MR_Unsigned) ((MR_hl_field(2, Lval_3, 0))) & (MR_Integer) 1);
        MR_String Var_45;
        MR_String Var_52;
        MR_String Var_54;
        MR_String Var_55;

        switch (RegType_39) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            RegTypeStr_8 = (MR_String) "f";
            break;
          case (MR_Integer) 0:
            RegTypeStr_8 = (MR_String) "r";
            break;
        }
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_7, &Var_45);
        Var_52 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) ")");
        Var_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_52);
        Var_55 = mercury__string__f_43_43_2_f_0(RegTypeStr_8, Var_54);
        *Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "temp(", Var_55);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval_3, 0))))) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 0:
          {
            MR_String Var_18;
            MR_String Var_19;
            MR_Integer N_40 = ((MR_Integer) ((MR_hl_field(3, Lval_3, 1))));

            Var_19 = mercury__string__int_to_string_1_f_0(N_40);
            Var_18 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) ")");
            *Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", Var_18);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_22;
            MR_String Var_23;
            MR_Integer N_41 = ((MR_Integer) ((MR_hl_field(3, Lval_3, 1))));

            Var_23 = mercury__string__int_to_string_1_f_0(N_41);
            Var_22 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) ")");
            *Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_parent_sv(", Var_22);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_26;
            MR_String Var_27;
            MR_Integer N_42 = ((MR_Integer) ((MR_hl_field(3, Lval_3, 1))));

            Var_27 = mercury__string__int_to_string_1_f_0(N_42);
            Var_26 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) ")");
            *Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", Var_26);
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Type_9 = ((MR_Unsigned) ((MR_hl_field(3, Lval_3, 1))) & (MR_Integer) 1);
            MR_String Macro_10;
            MR_Integer Var_36;
            MR_Integer N_43 = ((MR_Integer) ((MR_hl_field(3, Lval_3, 2))));
            MR_String Var_58;
            MR_String Var_65;
            MR_String Var_67;
            MR_String Var_68;
            MR_String Var_75;
            MR_String Var_77;

            switch (Type_9) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                Macro_10 = (MR_String) "MR_parent_sv";
                break;
              case (MR_Integer) 0:
                Macro_10 = (MR_String) "MR_sv";
                break;
            }
            Var_36 = (MR_Integer) ((MR_Unsigned) N_43 + (MR_Unsigned) 1);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), Var_36, &Var_58);
            Var_65 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) ")");
            Var_67 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_65);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), N_43, &Var_68);
            Var_75 = mercury__string__f_43_43_2_f_0(Var_68, Var_67);
            Var_77 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_75);
            *Str_4 = mercury__string__f_43_43_2_f_0(Macro_10, Var_77);
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
    MR_Word Var_29 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_10, 0))) & (MR_Integer) 15);

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
        MR_Word RegType_12 = ((MR_Unsigned) ((MR_hl_field(1, Lval_9, 0))) & (MR_Integer) 1);
        MR_Integer Num_13 = ((MR_Integer) ((MR_hl_field(1, Lval_9, 1))));

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
        MR_Word RegType_130 = ((MR_Unsigned) ((MR_hl_field(2, Lval_9, 0))) & (MR_Integer) 1);
        MR_Integer Num_131 = ((MR_Integer) ((MR_hl_field(2, Lval_9, 1))));

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
      switch (((MR_Integer) ((MR_hl_field(3, Lval_9, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_14 = ((MR_Integer) ((MR_hl_field(3, Lval_9, 1))));
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
            MR_Integer N_123 = ((MR_Integer) ((MR_hl_field(3, Lval_9, 1))));
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
            MR_Integer N_124 = ((MR_Integer) ((MR_hl_field(3, Lval_9, 1))));
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
            MR_Word StackType_15 = ((MR_Unsigned) ((MR_hl_field(3, Lval_9, 1))) & (MR_Integer) 1);
            MR_Integer SlotNum_16 = ((MR_Integer) ((MR_hl_field(3, Lval_9, 2))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 4U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "* (MR_Float *) ");
            ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(Info_7, Stream_8, StackType_15, SlotNum_16);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval_128 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succip_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_128, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_17 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_succfr_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_17, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_127 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_redoip_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_127, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_126 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_redofr_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_126, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_125 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_prevfr_slot_word(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_125, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybePtag_18 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));
            MR_Word FieldNumRval_19 = ((MR_Word) ((MR_hl_field(3, Lval_9, 3))));
            MR_Word Rval_129 = ((MR_Word) ((MR_hl_field(3, Lval_9, 2))));
            MR_Integer FieldNum_21;
            MR_Word Var_106;

            *Type_10 = (MR_Word) ((MR_Unsigned) 20U);
            if ((MaybePtag_18 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_mask_field(");
            else
            {
              uint8_t PtagUInt8_20;
              MR_Word Var_95 = ((MR_Word) ((MR_hl_field(1, MaybePtag_18, 0))));
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
            succeeded = ((((MR_tag((MR_Word) FieldNumRval_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_19, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_106 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_19, 1))));
              succeeded = ((MR_tag((MR_Word) Var_106)) == (MR_Integer) 1);
              if (succeeded)
                FieldNum_21 = ((MR_Integer) ((MR_hl_field(1, Var_106, 0))));
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
            MR_Word GlobalVar_24 = ((MR_Word) ((MR_hl_field(3, Lval_9, 1))));
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
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
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
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, 0))))) {
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
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_58;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_57;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_55;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_54;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_14, 2))));
              MR_Word FieldNum_22 = ((MR_Word) ((MR_hl_field(3, Lval_14, 3))));
              MR_Integer STATE_VARIABLE_N_1_40;
              MR_Word STATE_VARIABLE_DeclSet_1_41;
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, Rval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_34, &STATE_VARIABLE_N_1_40, STATE_VARIABLE_DeclSet_0_36, &STATE_VARIABLE_DeclSet_1_41);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              next_value_of_tscc_proc_2_input_3_Rval_14 = FieldNum_22;
              next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_1_40;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_1_41;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_53;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CGlobalVar_33 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
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
    MR_Integer STATE_VARIABLE_N_0_84 = tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
    MR_Integer STATE_VARIABLE_N_85;
    MR_Word STATE_VARIABLE_DeclSet_0_86 = tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
    MR_Word STATE_VARIABLE_DeclSet_87;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_20 = ((MR_Word) ((MR_hl_field(0, Rval_14, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Lval_14 = Lval_20;
          MR_String next_value_of_tscc_proc_1_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_1_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = STATE_VARIABLE_DeclSet_0_86;

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
          MR_Word SubRval_358 = ((MR_Word) ((MR_hl_field(2, Rval_14, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_358;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
              STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_23 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));

              switch (MR_tag((MR_Word) Const_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_23, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        int64_t Int64Val_33 = MR_unbox_int64((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedInt64s_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_6_114;
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
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Int64Label_36, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_6_114);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String Int64Name_37;
                          MR_String Int64ValStr_38;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_6_114;
                          ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_33, &Int64Name_37);
                          Int64ValStr_38 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_33);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const int64_t mercury_int64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, Int64Name_37);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, Int64ValStr_38);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t UInt64Val_39 = MR_unbox_uint64((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedInt64s_175 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_176 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word UInt64Label_40;
                        MR_Word STATE_VARIABLE_DeclSet_8_126;

                        succeeded = (UnboxedInt64s_175 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_176 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              UInt64Label_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, UInt64Label_40, 0) = MR_box_uint64(UInt64Val_39);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_8_126);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String UInt64Name_41;
                          MR_String UInt64ValStr_42;

                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_8_126, &STATE_VARIABLE_DeclSet_87);
                          ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_39, &UInt64Name_41);
                          UInt64ValStr_42 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_39);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const uint64_t mercury_uint64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64Name_41);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64ValStr_42);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Float FloatVal_27 = MR_unbox_float((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedFloat_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 5)) & (MR_Integer) 1);
                        MR_String FloatName_30;
                        MR_Word STATE_VARIABLE_DeclSet_4_102;
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
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_4_102);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatValStr_32;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_4_102;
                          FloatValStr_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const MR_Float mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_30);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatValStr_32);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word CodeAddress_24 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_11_p_0(Info_12, Stream_13, CodeAddress_24, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId_25 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_25, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word DataId_357 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_357, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_56 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_359 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_359;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_59 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));
              MR_Word SubRvalA_60 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word SubRvalB_61 = ((MR_Word) ((MR_hl_field(3, Rval_14, 3))));
              MR_Integer STATE_VARIABLE_N_8_141;
              MR_Word STATE_VARIABLE_DeclSet_11_142;
              MR_Integer STATE_VARIABLE_N_9_144;
              MR_Word STATE_VARIABLE_DeclSet_12_145;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalA_60, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_8_141, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_11_142);
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalB_61, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_8_141, &STATE_VARIABLE_N_9_144, STATE_VARIABLE_DeclSet_11_142, &STATE_VARIABLE_DeclSet_12_145);
              switch (MR_tag((MR_Word) Op_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Op_59, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ArithOp_62 = ((MR_Unsigned) ((MR_hl_field(3, Op_59, 1))) & (MR_Integer) 7);
                        MR_String OpStr_63;
                        MR_Word UnboxFloat_64;
                        MR_Word Var_147 = (MR_Word) (ArithOp_62);
                        MR_Word StaticGroundFloats_180;
                        MR_Word STATE_VARIABLE_DeclSet_13_148;
                        MR_String FloatName_178;
                        MR_Word FloatLabel_177;

                        OpStr_63 = backend_libs__builtin_ops__arith_op_c_operator_1_f_0(Var_147);
                        UnboxFloat_64 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 7)) & (MR_Integer) 1);
                        StaticGroundFloats_180 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 5)) & (MR_Integer) 1);
                        succeeded = (UnboxFloat_64 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_180 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_178);
                            if (succeeded)
                            {
                              {
                                FloatLabel_177 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_177, 0) = ((MR_Box) (FloatName_178));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_177, STATE_VARIABLE_DeclSet_12_145, &STATE_VARIABLE_DeclSet_13_148);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatTypeStr_65;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_13_148;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_9_144);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_9_144 + (MR_Unsigned) 1);
                          FloatTypeStr_65 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatTypeStr_65);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_178);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, OpStr_63);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_83 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));
              MR_Word next_value_of_tscc_proc_3_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_3_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_3_input_3_MemRef_14 = MemRef_83;
              MR_String next_value_of_tscc_proc_3_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_3_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = STATE_VARIABLE_DeclSet_0_86;

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
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_85;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_87;
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
          MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(0, MemRef_14, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_36;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(1, MemRef_14, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_20;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BaseRval_21 = ((MR_Word) ((MR_hl_field(2, MemRef_14, 0))));
          MR_Word OffsetRval_23 = ((MR_Word) ((MR_hl_field(2, MemRef_14, 2))));
          MR_Integer STATE_VARIABLE_N_2_33;
          MR_Word STATE_VARIABLE_DeclSet_2_34;
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;

          ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, BaseRval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_24, &STATE_VARIABLE_N_2_33, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          next_value_of_tscc_proc_2_input_3_Rval_14 = OffsetRval_23;
          next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_2_33;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_2_34;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
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
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_84,
  MR_Integer * tscc_output_ptr_1_STATE_VARIABLE_N_35,
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86,
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
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, 0))))) {
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
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_58;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_57;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_55;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_54;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_14, 2))));
              MR_Word FieldNum_22 = ((MR_Word) ((MR_hl_field(3, Lval_14, 3))));
              MR_Integer STATE_VARIABLE_N_1_40;
              MR_Word STATE_VARIABLE_DeclSet_1_41;
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, Rval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_34, &STATE_VARIABLE_N_1_40, STATE_VARIABLE_DeclSet_0_36, &STATE_VARIABLE_DeclSet_1_41);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              next_value_of_tscc_proc_2_input_3_Rval_14 = FieldNum_22;
              next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_1_40;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_1_41;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_53;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CGlobalVar_33 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
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
    MR_Integer STATE_VARIABLE_N_0_84 = tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
    MR_Integer STATE_VARIABLE_N_85;
    MR_Word STATE_VARIABLE_DeclSet_0_86 = tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
    MR_Word STATE_VARIABLE_DeclSet_87;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_20 = ((MR_Word) ((MR_hl_field(0, Rval_14, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Lval_14 = Lval_20;
          MR_String next_value_of_tscc_proc_1_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_1_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = STATE_VARIABLE_DeclSet_0_86;

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
          MR_Word SubRval_358 = ((MR_Word) ((MR_hl_field(2, Rval_14, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_358;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
              STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_23 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));

              switch (MR_tag((MR_Word) Const_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_23, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        int64_t Int64Val_33 = MR_unbox_int64((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedInt64s_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_6_114;
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
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Int64Label_36, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_6_114);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String Int64Name_37;
                          MR_String Int64ValStr_38;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_6_114;
                          ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_33, &Int64Name_37);
                          Int64ValStr_38 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_33);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const int64_t mercury_int64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, Int64Name_37);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, Int64ValStr_38);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t UInt64Val_39 = MR_unbox_uint64((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedInt64s_175 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_176 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word UInt64Label_40;
                        MR_Word STATE_VARIABLE_DeclSet_8_126;

                        succeeded = (UnboxedInt64s_175 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_176 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              UInt64Label_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, UInt64Label_40, 0) = MR_box_uint64(UInt64Val_39);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_8_126);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String UInt64Name_41;
                          MR_String UInt64ValStr_42;

                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_8_126, &STATE_VARIABLE_DeclSet_87);
                          ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_39, &UInt64Name_41);
                          UInt64ValStr_42 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_39);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const uint64_t mercury_uint64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64Name_41);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64ValStr_42);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Float FloatVal_27 = MR_unbox_float((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedFloat_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 5)) & (MR_Integer) 1);
                        MR_String FloatName_30;
                        MR_Word STATE_VARIABLE_DeclSet_4_102;
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
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_4_102);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatValStr_32;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_4_102;
                          FloatValStr_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const MR_Float mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_30);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatValStr_32);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word CodeAddress_24 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_11_p_0(Info_12, Stream_13, CodeAddress_24, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId_25 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_25, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word DataId_357 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_357, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_56 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_359 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_359;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_59 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));
              MR_Word SubRvalA_60 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word SubRvalB_61 = ((MR_Word) ((MR_hl_field(3, Rval_14, 3))));
              MR_Integer STATE_VARIABLE_N_8_141;
              MR_Word STATE_VARIABLE_DeclSet_11_142;
              MR_Integer STATE_VARIABLE_N_9_144;
              MR_Word STATE_VARIABLE_DeclSet_12_145;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalA_60, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_8_141, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_11_142);
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalB_61, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_8_141, &STATE_VARIABLE_N_9_144, STATE_VARIABLE_DeclSet_11_142, &STATE_VARIABLE_DeclSet_12_145);
              switch (MR_tag((MR_Word) Op_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Op_59, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ArithOp_62 = ((MR_Unsigned) ((MR_hl_field(3, Op_59, 1))) & (MR_Integer) 7);
                        MR_String OpStr_63;
                        MR_Word UnboxFloat_64;
                        MR_Word Var_147 = (MR_Word) (ArithOp_62);
                        MR_Word StaticGroundFloats_180;
                        MR_Word STATE_VARIABLE_DeclSet_13_148;
                        MR_String FloatName_178;
                        MR_Word FloatLabel_177;

                        OpStr_63 = backend_libs__builtin_ops__arith_op_c_operator_1_f_0(Var_147);
                        UnboxFloat_64 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 7)) & (MR_Integer) 1);
                        StaticGroundFloats_180 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 5)) & (MR_Integer) 1);
                        succeeded = (UnboxFloat_64 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_180 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_178);
                            if (succeeded)
                            {
                              {
                                FloatLabel_177 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_177, 0) = ((MR_Box) (FloatName_178));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_177, STATE_VARIABLE_DeclSet_12_145, &STATE_VARIABLE_DeclSet_13_148);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatTypeStr_65;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_13_148;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_9_144);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_9_144 + (MR_Unsigned) 1);
                          FloatTypeStr_65 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatTypeStr_65);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_178);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, OpStr_63);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_83 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));
              MR_Word next_value_of_tscc_proc_3_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_3_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_3_input_3_MemRef_14 = MemRef_83;
              MR_String next_value_of_tscc_proc_3_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_3_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = STATE_VARIABLE_DeclSet_0_86;

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
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_85;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_87;
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
          MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(0, MemRef_14, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_36;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(1, MemRef_14, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_20;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BaseRval_21 = ((MR_Word) ((MR_hl_field(2, MemRef_14, 0))));
          MR_Word OffsetRval_23 = ((MR_Word) ((MR_hl_field(2, MemRef_14, 2))));
          MR_Integer STATE_VARIABLE_N_2_33;
          MR_Word STATE_VARIABLE_DeclSet_2_34;
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;

          ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, BaseRval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_24, &STATE_VARIABLE_N_2_33, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          next_value_of_tscc_proc_2_input_3_Rval_14 = OffsetRval_23;
          next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_2_33;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_2_34;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
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
  MR_Integer tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
  MR_Word tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
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
        switch (((MR_Integer) ((MR_hl_field(3, Lval_14, 0))))) {
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
              MR_Word Rval_58 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_58;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_57 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_57;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_56 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_55 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_55;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_54 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_54;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval_21 = ((MR_Word) ((MR_hl_field(3, Lval_14, 2))));
              MR_Word FieldNum_22 = ((MR_Word) ((MR_hl_field(3, Lval_14, 3))));
              MR_Integer STATE_VARIABLE_N_1_40;
              MR_Word STATE_VARIABLE_DeclSet_1_41;
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, Rval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_34, &STATE_VARIABLE_N_1_40, STATE_VARIABLE_DeclSet_0_36, &STATE_VARIABLE_DeclSet_1_41);
              // direct tailcall eliminated
              ;
              next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              next_value_of_tscc_proc_2_input_3_Rval_14 = FieldNum_22;
              next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_1_40;
              next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_1_41;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_53 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_53;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_34;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_36;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word CGlobalVar_33 = ((MR_Word) ((MR_hl_field(3, Lval_14, 1))));
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
    MR_Integer STATE_VARIABLE_N_0_84 = tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
    MR_Integer STATE_VARIABLE_N_85;
    MR_Word STATE_VARIABLE_DeclSet_0_86 = tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
    MR_Word STATE_VARIABLE_DeclSet_87;
    MR_bool succeeded;

    switch (MR_tag((MR_Word) Rval_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_20 = ((MR_Word) ((MR_hl_field(0, Rval_14, 0))));
          MR_Word next_value_of_tscc_proc_1_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_1_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_1_input_3_Lval_14 = Lval_20;
          MR_String next_value_of_tscc_proc_1_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_1_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_N_0_34 = STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_DeclSet_0_36 = STATE_VARIABLE_DeclSet_0_86;

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
          MR_Word SubRval_358 = ((MR_Word) ((MR_hl_field(2, Rval_14, 1))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_358;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Rval_14, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
              STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_23 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));

              switch (MR_tag((MR_Word) Const_23)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Const_23)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Const_23, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        int64_t Int64Val_33 = MR_unbox_int64((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedInt64s_34 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_35 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word STATE_VARIABLE_DeclSet_6_114;
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
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(Int64Label_36, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_6_114);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String Int64Name_37;
                          MR_String Int64ValStr_38;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_6_114;
                          ll_backend__llds_out__llds_out_data__int64_literal_name_2_p_0(Int64Val_33, &Int64Name_37);
                          Int64ValStr_38 = backend_libs__c_util__make_int64_literal_1_f_0(Int64Val_33);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const int64_t mercury_int64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, Int64Name_37);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, Int64ValStr_38);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        uint64_t UInt64Val_39 = MR_unbox_uint64((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedInt64s_175 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 4)) & (MR_Integer) 1);
                        MR_Word StaticGroundInt64s_176 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 3)) & (MR_Integer) 1);
                        MR_Word UInt64Label_40;
                        MR_Word STATE_VARIABLE_DeclSet_8_126;

                        succeeded = (UnboxedInt64s_175 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundInt64s_176 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            {
                              UInt64Label_40 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, UInt64Label_40, 0) = MR_box_uint64(UInt64Val_39);
                            }
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_8_126);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String UInt64Name_41;
                          MR_String UInt64ValStr_42;

                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(UInt64Label_40, STATE_VARIABLE_DeclSet_8_126, &STATE_VARIABLE_DeclSet_87);
                          ll_backend__llds_out__llds_out_data__uint64_literal_name_2_p_0(UInt64Val_39, &UInt64Name_41);
                          UInt64ValStr_42 = backend_libs__c_util__make_uint64_literal_1_f_0(UInt64Val_39);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const uint64_t mercury_uint64_const_");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64Name_41);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, UInt64ValStr_42);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Float FloatVal_27 = MR_unbox_float((MR_hl_field(3, Const_23, 1)));
                        MR_Word UnboxedFloat_28 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 7)) & (MR_Integer) 1);
                        MR_Word StaticGroundFloats_29 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 5)) & (MR_Integer) 1);
                        MR_String FloatName_30;
                        MR_Word STATE_VARIABLE_DeclSet_4_102;
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
                            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_31, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_4_102);
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatValStr_32;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_4_102;
                          FloatValStr_32 = backend_libs__c_util__make_float_literal_1_f_0(FloatVal_27);
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_0_84 + (MR_Unsigned) 1);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const MR_Float mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_30);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatValStr_32);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_0_84;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_0_86;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word CodeAddress_24 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_11_p_0(Info_12, Stream_13, CodeAddress_24, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word DataId_25 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_25, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word DataId_357 = ((MR_Word) ((MR_hl_field(3, Const_23, 1))));

                        ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_11_p_0(Info_12, Stream_13, DataId_357, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_85, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_87);
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubRval_56 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_56;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubRval_359 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = SubRval_359;
              MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_86;

              // direct tailcall eliminated
              ;
              tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
              tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
              tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
              tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
              tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
              tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
              tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
              goto top_of_proc_2;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Op_59 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));
              MR_Word SubRvalA_60 = ((MR_Word) ((MR_hl_field(3, Rval_14, 2))));
              MR_Word SubRvalB_61 = ((MR_Word) ((MR_hl_field(3, Rval_14, 3))));
              MR_Integer STATE_VARIABLE_N_8_141;
              MR_Word STATE_VARIABLE_DeclSet_11_142;
              MR_Integer STATE_VARIABLE_N_9_144;
              MR_Word STATE_VARIABLE_DeclSet_12_145;

              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalA_60, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_84, &STATE_VARIABLE_N_8_141, STATE_VARIABLE_DeclSet_0_86, &STATE_VARIABLE_DeclSet_11_142);
              ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, SubRvalB_61, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_8_141, &STATE_VARIABLE_N_9_144, STATE_VARIABLE_DeclSet_11_142, &STATE_VARIABLE_DeclSet_12_145);
              switch (MR_tag((MR_Word) Op_59)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_59)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                    STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Op_59, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word ArithOp_62 = ((MR_Unsigned) ((MR_hl_field(3, Op_59, 1))) & (MR_Integer) 7);
                        MR_String OpStr_63;
                        MR_Word UnboxFloat_64;
                        MR_Word Var_147 = (MR_Word) (ArithOp_62);
                        MR_Word StaticGroundFloats_180;
                        MR_Word STATE_VARIABLE_DeclSet_13_148;
                        MR_String FloatName_178;
                        MR_Word FloatLabel_177;

                        OpStr_63 = backend_libs__builtin_ops__arith_op_c_operator_1_f_0(Var_147);
                        UnboxFloat_64 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 7)) & (MR_Integer) 1);
                        StaticGroundFloats_180 = ((((MR_Unsigned) ((MR_hl_field(0, Info_12, 7))) >> 5)) & (MR_Integer) 1);
                        succeeded = (UnboxFloat_64 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = (StaticGroundFloats_180 == (MR_Integer) 0);
                          if (succeeded)
                          {
                            succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(Op_59, SubRvalA_60, SubRvalB_61, &FloatName_178);
                            if (succeeded)
                            {
                              {
                                FloatLabel_177 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                                MR_hl_field(0, FloatLabel_177, 0) = ((MR_Box) (FloatName_178));
                              }
                              succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(FloatLabel_177, STATE_VARIABLE_DeclSet_12_145, &STATE_VARIABLE_DeclSet_13_148);
                            }
                          }
                        }
                        if (succeeded)
                        {
                          MR_String FloatTypeStr_65;

                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_13_148;
                          ll_backend__llds_out__llds_out_util__output_indent_6_p_0(Stream_13, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_9_144);
                          STATE_VARIABLE_N_85 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_N_9_144 + (MR_Unsigned) 1);
                          FloatTypeStr_65 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 4U));
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) "static const ");
                          mercury__io__write_string_4_p_0(Stream_13, FloatTypeStr_65);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " mercury_float_const_");
                          mercury__io__write_string_4_p_0(Stream_13, FloatName_178);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " = ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalA_60, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          mercury__io__write_string_4_p_0(Stream_13, OpStr_63);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) " ");
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_12, SubRvalB_61, (MR_Word) ((MR_Unsigned) 4U), Stream_13);
                          mercury__io__write_string_4_p_0(Stream_13, (MR_String) ";\n");
                        }
                        else
                        {
                          STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                          STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        STATE_VARIABLE_N_85 = STATE_VARIABLE_N_9_144;
                        STATE_VARIABLE_DeclSet_87 = STATE_VARIABLE_DeclSet_12_145;
                      }
                      break;
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word MemRef_83 = ((MR_Word) ((MR_hl_field(3, Rval_14, 1))));
              MR_Word next_value_of_tscc_proc_3_input_1_Info_12 = Info_12;
              MR_Word next_value_of_tscc_proc_3_input_2_Stream_13 = Stream_13;
              MR_Word next_value_of_tscc_proc_3_input_3_MemRef_14 = MemRef_83;
              MR_String next_value_of_tscc_proc_3_input_4_FirstIndent_15 = FirstIndent_15;
              MR_String next_value_of_tscc_proc_3_input_5_LaterIndent_16 = LaterIndent_16;
              MR_Integer next_value_of_tscc_proc_3_input_6_STATE_VARIABLE_N_0_24 = STATE_VARIABLE_N_0_84;
              MR_Word next_value_of_tscc_proc_3_input_7_STATE_VARIABLE_DeclSet_0_26 = STATE_VARIABLE_DeclSet_0_86;

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
    tscc_output_1_STATE_VARIABLE_N_35 = STATE_VARIABLE_N_85;
    tscc_output_2_STATE_VARIABLE_DeclSet_37 = STATE_VARIABLE_DeclSet_87;
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
          MR_Word Rval_36 = ((MR_Word) ((MR_hl_field(0, MemRef_14, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_36;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Rval_20 = ((MR_Word) ((MR_hl_field(1, MemRef_14, 0))));
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14 = Rval_20;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_0_24;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_0_26;

          // direct tailcall eliminated
          ;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
          goto top_of_proc_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word BaseRval_21 = ((MR_Word) ((MR_hl_field(2, MemRef_14, 0))));
          MR_Word OffsetRval_23 = ((MR_Word) ((MR_hl_field(2, MemRef_14, 2))));
          MR_Integer STATE_VARIABLE_N_2_33;
          MR_Word STATE_VARIABLE_DeclSet_2_34;
          MR_Word next_value_of_tscc_proc_2_input_1_Info_12;
          MR_Word next_value_of_tscc_proc_2_input_2_Stream_13;
          MR_Word next_value_of_tscc_proc_2_input_3_Rval_14;
          MR_String next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          MR_String next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          MR_Integer next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          MR_Word next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;

          ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_11_p_0(Info_12, Stream_13, BaseRval_21, FirstIndent_15, LaterIndent_16, STATE_VARIABLE_N_0_24, &STATE_VARIABLE_N_2_33, STATE_VARIABLE_DeclSet_0_26, &STATE_VARIABLE_DeclSet_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_tscc_proc_2_input_1_Info_12 = Info_12;
          next_value_of_tscc_proc_2_input_2_Stream_13 = Stream_13;
          next_value_of_tscc_proc_2_input_3_Rval_14 = OffsetRval_23;
          next_value_of_tscc_proc_2_input_4_FirstIndent_15 = FirstIndent_15;
          next_value_of_tscc_proc_2_input_5_LaterIndent_16 = LaterIndent_16;
          next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = STATE_VARIABLE_N_2_33;
          next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = STATE_VARIABLE_DeclSet_2_34;
          tscc_proc_2_input_1_Info_12 = next_value_of_tscc_proc_2_input_1_Info_12;
          tscc_proc_2_input_2_Stream_13 = next_value_of_tscc_proc_2_input_2_Stream_13;
          tscc_proc_2_input_3_Rval_14 = next_value_of_tscc_proc_2_input_3_Rval_14;
          tscc_proc_2_input_4_FirstIndent_15 = next_value_of_tscc_proc_2_input_4_FirstIndent_15;
          tscc_proc_2_input_5_LaterIndent_16 = next_value_of_tscc_proc_2_input_5_LaterIndent_16;
          tscc_proc_2_input_6_STATE_VARIABLE_N_0_84 = next_value_of_tscc_proc_2_input_6_STATE_VARIABLE_N_0_84;
          tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86 = next_value_of_tscc_proc_2_input_7_STATE_VARIABLE_DeclSet_0_86;
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Op_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_5, 0)))) == (MR_Integer) 9)));
  MR_Word ArithOp_9;
  MR_String OpName_10;
  MR_String Arg1Name_11;
  MR_String Arg2Name_12;
  MR_String Var_13;
  MR_String Var_14;
  MR_String Var_15;
  MR_String Var_16;
  MR_String Var_17;
  MR_Float Float_18;
  MR_Word Var_22;
  MR_Float Float_41;
  MR_Word Var_45;

  if (succeeded)
  {
    ArithOp_9 = ((MR_Unsigned) ((MR_hl_field(3, Op_5, 1))) & (MR_Integer) 7);
    OpName_10 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[20 + ArithOp_9]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
    succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg1_6, 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Var_22 = ((MR_Word) ((MR_hl_field(3, Arg1_6, 1))));
      succeeded = ((((MR_tag((MR_Word) Var_22)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_22, 0)))) == (MR_Integer) 9)));
      if (succeeded)
        Float_18 = MR_unbox_float((MR_hl_field(3, Var_22, 1)));
    }
    if (succeeded)
    {
      MR_String FloatName0_23;
      MR_String FloatName1_24;
      MR_String FloatName2_25;

      FloatName0_23 = backend_libs__c_util__make_float_literal_1_f_0(Float_18);
      mercury__string__replace_all_4_p_0(FloatName0_23, (MR_String) ".", (MR_String) "pt", &FloatName1_24);
      mercury__string__replace_all_4_p_0(FloatName1_24, (MR_String) "+", (MR_String) "plus", &FloatName2_25);
      mercury__string__replace_all_4_p_0(FloatName2_25, (MR_String) "-", (MR_String) "neg", &Arg1Name_11);
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Word Op_19;
      MR_Word Arg1_20;
      MR_Word Arg2_21;
      MR_Word ArithOp_32;
      MR_String OpName_33;
      MR_String Arg1Name_34;
      MR_String Arg2Name_35;
      MR_String Var_36;
      MR_String Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_String Var_40;

      succeeded = ((((MR_tag((MR_Word) Arg1_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg1_6, 0)))) == (MR_Integer) 4)));
      if (succeeded)
      {
        Op_19 = ((MR_Word) ((MR_hl_field(3, Arg1_6, 1))));
        Arg1_20 = ((MR_Word) ((MR_hl_field(3, Arg1_6, 2))));
        Arg2_21 = ((MR_Word) ((MR_hl_field(3, Arg1_6, 3))));
        succeeded = ((((MR_tag((MR_Word) Op_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_19, 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          ArithOp_32 = ((MR_Unsigned) ((MR_hl_field(3, Op_19, 1))) & (MR_Integer) 7);
          ll_backend__llds_out__llds_out_data__float_arith_op_name_2_p_0(ArithOp_32, &OpName_33);
          succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_20, &Arg1Name_34);
          if (succeeded)
          {
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_21, &Arg2Name_35);
            if (succeeded)
            {
              Var_37 = (MR_String) "_";
              Var_40 = (MR_String) "_";
              Var_39 = mercury__string__f_43_43_2_f_0(Var_40, Arg2Name_35);
              Var_38 = mercury__string__f_43_43_2_f_0(Arg1Name_34, Var_39);
              Var_36 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
              Arg1Name_11 = mercury__string__f_43_43_2_f_0(OpName_33, Var_36);
              succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg2_7, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_45 = ((MR_Word) ((MR_hl_field(3, Arg2_7, 1))));
        succeeded = ((((MR_tag((MR_Word) Var_45)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_45, 0)))) == (MR_Integer) 9)));
        if (succeeded)
          Float_41 = MR_unbox_float((MR_hl_field(3, Var_45, 1)));
      }
      if (succeeded)
      {
        MR_String FloatName0_46;
        MR_String FloatName1_47;
        MR_String FloatName2_48;

        FloatName0_46 = backend_libs__c_util__make_float_literal_1_f_0(Float_41);
        mercury__string__replace_all_4_p_0(FloatName0_46, (MR_String) ".", (MR_String) "pt", &FloatName1_47);
        mercury__string__replace_all_4_p_0(FloatName1_47, (MR_String) "+", (MR_String) "plus", &FloatName2_48);
        mercury__string__replace_all_4_p_0(FloatName2_48, (MR_String) "-", (MR_String) "neg", &Arg2Name_12);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Op_42;
        MR_Word Arg1_43;
        MR_Word Arg2_44;
        MR_Word ArithOp_55;
        MR_String OpName_56;
        MR_String Arg1Name_57;
        MR_String Arg2Name_58;
        MR_String Var_59;
        MR_String Var_60;
        MR_String Var_61;
        MR_String Var_62;
        MR_String Var_63;

        succeeded = ((((MR_tag((MR_Word) Arg2_7)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Arg2_7, 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Op_42 = ((MR_Word) ((MR_hl_field(3, Arg2_7, 1))));
          Arg1_43 = ((MR_Word) ((MR_hl_field(3, Arg2_7, 2))));
          Arg2_44 = ((MR_Word) ((MR_hl_field(3, Arg2_7, 3))));
          succeeded = ((((MR_tag((MR_Word) Op_42)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_42, 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            ArithOp_55 = ((MR_Unsigned) ((MR_hl_field(3, Op_42, 1))) & (MR_Integer) 7);
            ll_backend__llds_out__llds_out_data__float_arith_op_name_2_p_0(ArithOp_55, &OpName_56);
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_43, &Arg1Name_57);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_44, &Arg2Name_58);
              if (succeeded)
              {
                Var_60 = (MR_String) "_";
                Var_63 = (MR_String) "_";
                Var_62 = mercury__string__f_43_43_2_f_0(Var_63, Arg2Name_58);
                Var_61 = mercury__string__f_43_43_2_f_0(Arg1Name_57, Var_62);
                Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Var_61);
                Arg2Name_12 = mercury__string__f_43_43_2_f_0(OpName_56, Var_59);
                succeeded = MR_TRUE;
              }
            }
          }
        }
      }
      if (succeeded)
      {
        Var_14 = (MR_String) "_";
        Var_17 = (MR_String) "_";
        Var_16 = mercury__string__f_43_43_2_f_0(Var_17, Arg2Name_12);
        Var_15 = mercury__string__f_43_43_2_f_0(Arg1Name_11, Var_16);
        Var_13 = mercury__string__f_43_43_2_f_0(Var_14, Var_15);
        *Name_8 = mercury__string__f_43_43_2_f_0(OpName_10, Var_13);
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
        MR_Word RttiId_28 = ((MR_Word) ((MR_hl_field(0, DataId_14, 0))));
        MR_Word DeclId_29;
        MR_Word STATE_VARIABLE_DeclSet_1_37;

        {
          DeclId_29 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, DeclId_29, 0) = ((MR_Box) ((MR_Unsigned) 2U));
          MR_hl_field(3, DeclId_29, 1) = ((MR_Box) (RttiId_28));
        }
        succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(DeclId_29, STATE_VARIABLE_DeclSet_0_33, &STATE_VARIABLE_DeclSet_1_37);
        if (succeeded)
        {
          *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_1_37;
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
      switch (((MR_Integer) ((MR_hl_field(3, DataId_14, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_N_32 = STATE_VARIABLE_N_0_31;
            *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_0_33;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_30 = ((MR_Word) ((MR_hl_field(3, DataId_14, 1))));
            MR_Word DeclId_55;
            MR_Word STATE_VARIABLE_DeclSet_3_46;

            {
              DeclId_55 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(3, DeclId_55, 0) = ((MR_Box) ((MR_Unsigned) 3U));
              MR_hl_field(3, DeclId_55, 1) = ((MR_Box) (LayoutName_30));
            }
            succeeded = ll_backend__llds_out__llds_out_util__decl_set_insert_new_3_p_0(DeclId_55, STATE_VARIABLE_DeclSet_0_33, &STATE_VARIABLE_DeclSet_3_46);
            if (succeeded)
            {
              *STATE_VARIABLE_DeclSet_34 = STATE_VARIABLE_DeclSet_3_46;
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
ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(
  MR_Word Info_6,
  MR_Word Test_7,
  MR_Word Stream_8)
{
  ll_backend__llds_out__llds_out_data__do_output_test_rval_6_p_0(Stream_8, Info_6, (MR_Integer) 0, Test_7);
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__do_output_test_rval_6_p_0(
  MR_Word Stream_7,
  MR_Word Info_8,
  MR_Word MaybeNegated_9,
  MR_Word TestRval_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) TestRval_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, TestRval_10, 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 5:
            ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
            break;
          case (MR_Integer) 3:
            {
              MR_Word Unop_12 = ((MR_Word) ((MR_hl_field(3, TestRval_10, 1))));
              MR_Word SubRvalA_13 = ((MR_Word) ((MR_hl_field(3, TestRval_10, 2))));

              succeeded = (Unop_12 == (MR_Word) ((MR_Unsigned) 16U));
              if (succeeded)
              {
                MR_Word SubNegated_14;
                MR_Word next_value_of_MaybeNegated_9;
                MR_Word next_value_of_TestRval_10;

                switch (MaybeNegated_9) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    SubNegated_14 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 0:
                    SubNegated_14 = (MR_Integer) 1;
                    break;
                }
                // direct tailcall eliminated
                ;
                next_value_of_MaybeNegated_9 = SubNegated_14;
                next_value_of_TestRval_10 = SubRvalA_13;
                MaybeNegated_9 = next_value_of_MaybeNegated_9;
                TestRval_10 = next_value_of_TestRval_10;
                continue;
              }
              else
                ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Binop_15 = ((MR_Word) ((MR_hl_field(3, TestRval_10, 1))));
              MR_Word SubRvalB_16 = ((MR_Word) ((MR_hl_field(3, TestRval_10, 3))));
              MR_Word SubRvalA_149 = ((MR_Word) ((MR_hl_field(3, TestRval_10, 2))));

              switch (MR_tag((MR_Word) Binop_15)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Binop_15)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word VarRval_17;
                        MR_Word Ptag_18;
                        MR_Unsigned Sectag_19;
                        MR_Word Var_150;

                        succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(SubRvalA_149, &VarRval_17, &Ptag_18, &Var_150);
                        if (succeeded)
                        {
                          succeeded = ((MR_Integer) 0 == Var_150);
                          if (succeeded)
                            succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(SubRvalB_16, VarRval_17, Ptag_18, &Sectag_19);
                        }
                        if (succeeded)
                        {
                          MR_String Macro_20;

                          switch (MaybeNegated_9) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 1:
                              Macro_20 = (MR_String) "MR_RTAGS_TESTR";
                              break;
                            case (MR_Integer) 0:
                              Macro_20 = (MR_String) "MR_RTAGS_TEST";
                              break;
                          }
                          mercury__io__write_string_4_p_0(Stream_7, Macro_20);
                          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                          ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, VarRval_17, Stream_7);
                          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                          ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_7, Ptag_18);
                          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                          mercury__io__write_uint_4_p_0(Stream_7, Sectag_19);
                          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                        }
                        else
                          ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                      }
                      break;
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 4:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                      ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(3, Binop_15, 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                    case (MR_Integer) 2:
                    case (MR_Integer) 3:
                    case (MR_Integer) 5:
                    case (MR_Integer) 6:
                    case (MR_Integer) 7:
                    case (MR_Integer) 8:
                    case (MR_Integer) 9:
                    case (MR_Integer) 10:
                      ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                      break;
                    case (MR_Integer) 4:
                      {
                        MR_Word Var_151 = ((MR_Unsigned) ((MR_hl_field(3, Binop_15, 1))) & (MR_Integer) 7);
                        MR_Word Var_152 = ((((MR_Unsigned) ((MR_hl_field(3, Binop_15, 1))) >> 3)) & (MR_Integer) 15);

                        switch (Var_151) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            {
                              MR_Word VarRval_134;
                              MR_Word Ptag_135;

                              succeeded = ll_backend__llds_out__llds_out_data__args_are_of_ptag_test_4_p_0(SubRvalA_149, SubRvalB_16, &VarRval_134, &Ptag_135);
                              if (succeeded)
                              {
                                MR_String Macro_120;

                                switch (MaybeNegated_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Negated_24;

                                      Negated_24 = mercury__bool__not_1_f_0((MR_Integer) 0);
                                      switch (Negated_24) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          Macro_120 = (MR_String) "MR_PTAG_TEST";
                                          break;
                                        case (MR_Integer) 1:
                                          Macro_120 = (MR_String) "MR_PTAG_TESTR";
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 0:
                                    Macro_120 = (MR_String) "MR_PTAG_TEST";
                                    break;
                                }
                                mercury__io__write_string_4_p_0(Stream_7, Macro_120);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, VarRval_134, Stream_7);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_7, Ptag_135);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                              }
                              else
                              {
                                MR_Word Ptag_130;
                                MR_Unsigned Sectag_131;
                                MR_Word ConstB_25;
                                MR_Integer SectagInt_26;
                                MR_Word Var_81;
                                MR_Word Var_82;
                                MR_Word Var_83;

                                succeeded = ((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Ptag_130 = ((MR_Word) ((MR_hl_field(2, SubRvalB_16, 0))));
                                  Var_81 = ((MR_Word) ((MR_hl_field(2, SubRvalB_16, 1))));
                                  succeeded = ((((MR_tag((MR_Word) Var_81)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_81, 0)))) == (MR_Integer) 3)));
                                  if (succeeded)
                                  {
                                    Var_82 = ((MR_Word) ((MR_hl_field(3, Var_81, 1))));
                                    Var_83 = ((MR_Word) ((MR_hl_field(3, Var_81, 2))));
                                    succeeded = (Var_82 == (MR_Word) ((MR_Unsigned) 8U));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_83)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_83, 0)))) == (MR_Integer) 1)));
                                      if (succeeded)
                                      {
                                        ConstB_25 = ((MR_Word) ((MR_hl_field(3, Var_83, 1))));
                                        succeeded = ((MR_tag((MR_Word) ConstB_25)) == (MR_Integer) 1);
                                        if (succeeded)
                                        {
                                          SectagInt_26 = ((MR_Integer) ((MR_hl_field(1, ConstB_25, 0))));
                                          succeeded = mercury__uint__from_int_2_p_0(SectagInt_26, &Sectag_131);
                                        }
                                      }
                                    }
                                  }
                                }
                                if (succeeded)
                                {
                                  MR_String Macro_122;

                                  switch (MaybeNegated_9) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 1:
                                      {
                                        MR_Word Negated_123;

                                        Negated_123 = mercury__bool__not_1_f_0((MR_Integer) 0);
                                        switch (Negated_123) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            Macro_122 = (MR_String) "MR_LTAGS_TEST";
                                            break;
                                          case (MR_Integer) 1:
                                            Macro_122 = (MR_String) "MR_LTAGS_TESTR";
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 0:
                                      Macro_122 = (MR_String) "MR_LTAGS_TEST";
                                      break;
                                  }
                                  mercury__io__write_string_4_p_0(Stream_7, Macro_122);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                  ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                  ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_7, Ptag_130);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                  mercury__io__write_uint_4_p_0(Stream_7, Sectag_131);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                                }
                                else
                                {
                                  MR_Integer ConstB_128;
                                  MR_Word Var_96;

                                  succeeded = (Var_152 == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_16, 0)))) == (MR_Integer) 1)));
                                    if (succeeded)
                                    {
                                      Var_96 = ((MR_Word) ((MR_hl_field(3, SubRvalB_16, 1))));
                                      succeeded = ((MR_tag((MR_Word) Var_96)) == (MR_Integer) 1);
                                      if (succeeded)
                                        ConstB_128 = ((MR_Integer) ((MR_hl_field(1, Var_96, 0))));
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_String Macro_124;

                                    switch (MaybeNegated_9) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word Negated_125;

                                          Negated_125 = mercury__bool__not_1_f_0((MR_Integer) 0);
                                          switch (Negated_125) {
                                            default: /*NOTREACHED*/ MR_assert(0);
                                            case (MR_Integer) 0:
                                              Macro_124 = (MR_String) "MR_INT_EQ";
                                              break;
                                            case (MR_Integer) 1:
                                              Macro_124 = (MR_String) "MR_INT_NE";
                                              break;
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 0:
                                        Macro_124 = (MR_String) "MR_INT_EQ";
                                        break;
                                    }
                                    mercury__io__write_string_4_p_0(Stream_7, Macro_124);
                                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                    mercury__io__write_int_4_p_0(Stream_7, ConstB_128);
                                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                                  }
                                  else
                                    ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                                }
                              }
                            }
                            break;
                          case (MR_Integer) 5:
                            {
                              MR_Integer ConstB_144;
                              MR_Word Var_107;

                              succeeded = (Var_152 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_16, 0)))) == (MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_107 = ((MR_Word) ((MR_hl_field(3, SubRvalB_16, 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_107)) == (MR_Integer) 1);
                                  if (succeeded)
                                    ConstB_144 = ((MR_Integer) ((MR_hl_field(1, Var_107, 0))));
                                }
                              }
                              if (succeeded)
                              {
                                MR_String Macro_142;

                                switch (MaybeNegated_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    Macro_142 = (MR_String) "MR_INT_LT";
                                    break;
                                  case (MR_Integer) 0:
                                    Macro_142 = (MR_String) "MR_INT_GE";
                                    break;
                                }
                                mercury__io__write_string_4_p_0(Stream_7, Macro_142);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                mercury__io__write_int_4_p_0(Stream_7, ConstB_144);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                              }
                              else
                                ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                            }
                            break;
                          case (MR_Integer) 4:
                            {
                              MR_Integer ConstB_173;
                              MR_Word Var_153;

                              succeeded = (Var_152 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_16, 0)))) == (MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_153 = ((MR_Word) ((MR_hl_field(3, SubRvalB_16, 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_153)) == (MR_Integer) 1);
                                  if (succeeded)
                                    ConstB_173 = ((MR_Integer) ((MR_hl_field(1, Var_153, 0))));
                                }
                              }
                              if (succeeded)
                              {
                                MR_String Macro_162;

                                switch (MaybeNegated_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    Macro_162 = (MR_String) "MR_INT_LT";
                                    break;
                                  case (MR_Integer) 0:
                                    Macro_162 = (MR_String) "MR_INT_GT";
                                    break;
                                }
                                mercury__io__write_string_4_p_0(Stream_7, Macro_162);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                mercury__io__write_int_4_p_0(Stream_7, ConstB_173);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                              }
                              else
                                ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                            }
                            break;
                          case (MR_Integer) 3:
                            {
                              MR_Integer ConstB_209;
                              MR_Word Var_189;

                              succeeded = (Var_152 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_16, 0)))) == (MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_189 = ((MR_Word) ((MR_hl_field(3, SubRvalB_16, 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_189)) == (MR_Integer) 1);
                                  if (succeeded)
                                    ConstB_209 = ((MR_Integer) ((MR_hl_field(1, Var_189, 0))));
                                }
                              }
                              if (succeeded)
                              {
                                MR_String Macro_198;

                                switch (MaybeNegated_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    Macro_198 = (MR_String) "MR_INT_GT";
                                    break;
                                  case (MR_Integer) 0:
                                    Macro_198 = (MR_String) "MR_INT_LE";
                                    break;
                                }
                                mercury__io__write_string_4_p_0(Stream_7, Macro_198);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                mercury__io__write_int_4_p_0(Stream_7, ConstB_209);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                              }
                              else
                                ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                            }
                            break;
                          case (MR_Integer) 2:
                            {
                              MR_Integer ConstB_245;
                              MR_Word Var_225;

                              succeeded = (Var_152 == (MR_Integer) 0);
                              if (succeeded)
                              {
                                succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_16, 0)))) == (MR_Integer) 1)));
                                if (succeeded)
                                {
                                  Var_225 = ((MR_Word) ((MR_hl_field(3, SubRvalB_16, 1))));
                                  succeeded = ((MR_tag((MR_Word) Var_225)) == (MR_Integer) 1);
                                  if (succeeded)
                                    ConstB_245 = ((MR_Integer) ((MR_hl_field(1, Var_225, 0))));
                                }
                              }
                              if (succeeded)
                              {
                                MR_String Macro_234;

                                switch (MaybeNegated_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    Macro_234 = (MR_String) "MR_INT_GE";
                                    break;
                                  case (MR_Integer) 0:
                                    Macro_234 = (MR_String) "MR_INT_LT";
                                    break;
                                }
                                mercury__io__write_string_4_p_0(Stream_7, Macro_234);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                mercury__io__write_int_4_p_0(Stream_7, ConstB_245);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                              }
                              else
                                ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              MR_Word VarRval_389;
                              MR_Word Ptag_390;

                              succeeded = ll_backend__llds_out__llds_out_data__args_are_of_ptag_test_4_p_0(SubRvalA_149, SubRvalB_16, &VarRval_389, &Ptag_390);
                              if (succeeded)
                              {
                                MR_String Macro_270;

                                switch (MaybeNegated_9) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 1:
                                    {
                                      MR_Word Negated_261;

                                      Negated_261 = mercury__bool__not_1_f_0((MR_Integer) 1);
                                      switch (Negated_261) {
                                        default: /*NOTREACHED*/ MR_assert(0);
                                        case (MR_Integer) 0:
                                          Macro_270 = (MR_String) "MR_PTAG_TEST";
                                          break;
                                        case (MR_Integer) 1:
                                          Macro_270 = (MR_String) "MR_PTAG_TESTR";
                                          break;
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 0:
                                    Macro_270 = (MR_String) "MR_PTAG_TESTR";
                                    break;
                                }
                                mercury__io__write_string_4_p_0(Stream_7, Macro_270);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, VarRval_389, Stream_7);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_7, Ptag_390);
                                mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                              }
                              else
                              {
                                MR_Word Ptag_344;
                                MR_Unsigned Sectag_345;
                                MR_Word ConstB_271;
                                MR_Integer SectagInt_272;
                                MR_Word Var_273;
                                MR_Word Var_274;
                                MR_Word Var_275;

                                succeeded = ((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 2);
                                if (succeeded)
                                {
                                  Ptag_344 = ((MR_Word) ((MR_hl_field(2, SubRvalB_16, 0))));
                                  Var_273 = ((MR_Word) ((MR_hl_field(2, SubRvalB_16, 1))));
                                  succeeded = ((((MR_tag((MR_Word) Var_273)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_273, 0)))) == (MR_Integer) 3)));
                                  if (succeeded)
                                  {
                                    Var_274 = ((MR_Word) ((MR_hl_field(3, Var_273, 1))));
                                    Var_275 = ((MR_Word) ((MR_hl_field(3, Var_273, 2))));
                                    succeeded = (Var_274 == (MR_Word) ((MR_Unsigned) 8U));
                                    if (succeeded)
                                    {
                                      succeeded = ((((MR_tag((MR_Word) Var_275)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_275, 0)))) == (MR_Integer) 1)));
                                      if (succeeded)
                                      {
                                        ConstB_271 = ((MR_Word) ((MR_hl_field(3, Var_275, 1))));
                                        succeeded = ((MR_tag((MR_Word) ConstB_271)) == (MR_Integer) 1);
                                        if (succeeded)
                                        {
                                          SectagInt_272 = ((MR_Integer) ((MR_hl_field(1, ConstB_271, 0))));
                                          succeeded = mercury__uint__from_int_2_p_0(SectagInt_272, &Sectag_345);
                                        }
                                      }
                                    }
                                  }
                                }
                                if (succeeded)
                                {
                                  MR_String Macro_288;

                                  switch (MaybeNegated_9) {
                                    default: /*NOTREACHED*/ MR_assert(0);
                                    case (MR_Integer) 1:
                                      {
                                        MR_Word Negated_289;

                                        Negated_289 = mercury__bool__not_1_f_0((MR_Integer) 1);
                                        switch (Negated_289) {
                                          default: /*NOTREACHED*/ MR_assert(0);
                                          case (MR_Integer) 0:
                                            Macro_288 = (MR_String) "MR_LTAGS_TEST";
                                            break;
                                          case (MR_Integer) 1:
                                            Macro_288 = (MR_String) "MR_LTAGS_TESTR";
                                            break;
                                        }
                                      }
                                      break;
                                    case (MR_Integer) 0:
                                      Macro_288 = (MR_String) "MR_LTAGS_TESTR";
                                      break;
                                  }
                                  mercury__io__write_string_4_p_0(Stream_7, Macro_288);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                  ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                  ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(Stream_7, Ptag_344);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                  mercury__io__write_uint_4_p_0(Stream_7, Sectag_345);
                                  mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                                }
                                else
                                {
                                  MR_Integer ConstB_312;
                                  MR_Word Var_290;

                                  succeeded = (Var_152 == (MR_Integer) 0);
                                  if (succeeded)
                                  {
                                    succeeded = ((((MR_tag((MR_Word) SubRvalB_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_16, 0)))) == (MR_Integer) 1)));
                                    if (succeeded)
                                    {
                                      Var_290 = ((MR_Word) ((MR_hl_field(3, SubRvalB_16, 1))));
                                      succeeded = ((MR_tag((MR_Word) Var_290)) == (MR_Integer) 1);
                                      if (succeeded)
                                        ConstB_312 = ((MR_Integer) ((MR_hl_field(1, Var_290, 0))));
                                    }
                                  }
                                  if (succeeded)
                                  {
                                    MR_String Macro_299;

                                    switch (MaybeNegated_9) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 1:
                                        {
                                          MR_Word Negated_300;

                                          Negated_300 = mercury__bool__not_1_f_0((MR_Integer) 1);
                                          switch (Negated_300) {
                                            default: /*NOTREACHED*/ MR_assert(0);
                                            case (MR_Integer) 0:
                                              Macro_299 = (MR_String) "MR_INT_EQ";
                                              break;
                                            case (MR_Integer) 1:
                                              Macro_299 = (MR_String) "MR_INT_NE";
                                              break;
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 0:
                                        Macro_299 = (MR_String) "MR_INT_NE";
                                        break;
                                    }
                                    mercury__io__write_string_4_p_0(Stream_7, Macro_299);
                                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) "(");
                                    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_8, SubRvalA_149, Stream_7);
                                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ",");
                                    mercury__io__write_int_4_p_0(Stream_7, ConstB_312);
                                    mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
                                  }
                                  else
                                    ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(Stream_7, Info_8, MaybeNegated_9, TestRval_10);
                                }
                              }
                            }
                            break;
                        }
                      }
                      break;
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__do_output_test_rval_base_6_p_0(
  MR_Word Stream_7,
  MR_Word Info_8,
  MR_Word MaybeNegated_9,
  MR_Word Test0_10)
{
  MR_Word Test_12;

  switch (MaybeNegated_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        Test_12 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(3, Test_12, 0) = ((MR_Box) ((MR_Unsigned) 3U));
        MR_hl_field(3, Test_12, 1) = ((MR_Box) ((MR_Unsigned) 16U));
        MR_hl_field(3, Test_12, 2) = ((MR_Box) (Test0_10));
      }
      break;
    case (MR_Integer) 0:
      Test_12 = Test0_10;
      break;
  }
  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_8, Test_12, (MR_Word) ((MR_Unsigned) 0U), Stream_7);
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
            MR_Word Var_60 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, 0))) & (MR_Integer) 15);

            switch (Var_60) {
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
            MR_Word Var_61 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, 0))) & (MR_Integer) 15);

            switch (Var_61) {
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
        MR_Word Var_59;

        succeeded = (ActualType_12 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_59 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, 0))) & (MR_Integer) 15);
          succeeded = (Var_59 == (MR_Integer) 0);
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
    MR_String ConvMacro_13;

    if ((DesiredType_9 == (MR_Word) ((MR_Unsigned) 4U)))
    {
      ConvMacro_13 = (MR_String) "MR_word_to_float";
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) DesiredType_9)) == (MR_Integer) 2))
    {
      MR_Word Var_52 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, 0))) & (MR_Integer) 15);

      switch (Var_52) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 8:
          {
            ConvMacro_13 = (MR_String) "MR_word_to_int64";
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 9:
          {
            ConvMacro_13 = (MR_String) "MR_word_to_uint64";
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      mercury__io__write_string_4_p_0(Stream_10, ConvMacro_13);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
      ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
      mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
    }
    else
    {
      MR_Word DwordType_14;

      if ((ActualType_12 == (MR_Word) ((MR_Unsigned) 4U)))
      {
        DwordType_14 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      else
      if (((MR_tag((MR_Word) ActualType_12)) == (MR_Integer) 2))
      {
        MR_Word Var_53 = ((MR_Unsigned) ((MR_hl_field(2, ActualType_12, 0))) & (MR_Integer) 15);

        switch (Var_53) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 8:
            {
              DwordType_14 = (MR_Integer) 1;
              succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 9:
            {
              DwordType_14 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            break;
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        switch (DwordType_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
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
            break;
          case (MR_Integer) 1:
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
            break;
          case (MR_Integer) 2:
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
            break;
        }
      else
      {
        MR_Integer N_15;
        MR_Word Var_44;

        succeeded = ((((MR_tag((MR_Word) Rval_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_8, 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_44 = ((MR_Word) ((MR_hl_field(3, Rval_8, 1))));
          succeeded = ((MR_tag((MR_Word) Var_44)) == (MR_Integer) 1);
          if (succeeded)
          {
            N_15 = ((MR_Integer) ((MR_hl_field(1, Var_44, 0))));
            if (((MR_tag((MR_Word) DesiredType_9)) == (MR_Integer) 2))
            {
              MR_Word IntType_70 = ((MR_Unsigned) ((MR_hl_field(2, DesiredType_9, 0))) & (MR_Integer) 15);

              switch (IntType_70) {
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
          mercury__io__write_int_4_p_0(Stream_10, N_15);
        else
        {
          MR_String TypeStr_71;

          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
          TypeStr_71 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(DesiredType_9);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) "(");
          mercury__io__write_string_4_p_0(Stream_10, TypeStr_71);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ") ");
          ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_8, Stream_10);
          mercury__io__write_string_4_p_0(Stream_10, (MR_String) ")");
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
        MR_Word Lval_25 = ((MR_Word) ((MR_hl_field(0, Rval_7, 0))));
        MR_Word MaybePtag_26;
        MR_Word FieldNumRval_27;
        MR_Word Var_162;

        succeeded = ((((MR_tag((MR_Word) Lval_25)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Lval_25, 0)))) == (MR_Integer) 9)));
        if (succeeded)
        {
          MaybePtag_26 = ((MR_Word) ((MR_hl_field(3, Lval_25, 1))));
          Var_162 = ((MR_Word) ((MR_hl_field(3, Lval_25, 2))));
          FieldNumRval_27 = ((MR_Word) ((MR_hl_field(3, Lval_25, 3))));
          succeeded = ll_backend__llds____Unify____rval_0_0(Rval_7, Var_162);
        }
        if (succeeded)
        {
          MR_Integer FieldNum_28;
          MR_Word Var_99;

          if ((MaybePtag_26 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_const_mask_field(");
          else
          {
            MR_Word Var_88 = ((MR_Word) ((MR_hl_field(1, MaybePtag_26, 0))));
            uint8_t PtagUInt8_147 = (uint8_t) (Var_88);
            MR_Unsigned Var_262;
            MR_String Var_263;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_ctfield(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_147, &Var_262);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_262, &Var_263);
            mercury__io__write_string_4_p_0(Stream_8, Var_263);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          }
          ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_7, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          succeeded = ((((MR_tag((MR_Word) FieldNumRval_27)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_27, 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_99 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_27, 1))));
            succeeded = ((MR_tag((MR_Word) Var_99)) == (MR_Integer) 1);
            if (succeeded)
              FieldNum_28 = ((MR_Integer) ((MR_hl_field(1, Var_99, 0))));
          }
          if (succeeded)
            mercury__io__write_int_4_p_0(Stream_8, FieldNum_28);
          else
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, FieldNumRval_27, Stream_8);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        else
          ll_backend__llds_out__llds_out_data__output_lval_5_p_0(Info_6, Stream_8, Lval_25);
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
        uint8_t PtagUInt8_20;
        MR_Word Var_51 = ((MR_Word) ((MR_hl_field(2, Rval_7, 0))));
        MR_Word SubRval_145 = ((MR_Word) ((MR_hl_field(2, Rval_7, 1))));
        MR_Integer TypeNum_22;
        MR_Integer CellNum_23;
        MR_Word DataId_21;
        MR_Word Var_52;
        MR_Word Var_53;

        PtagUInt8_20 = (uint8_t) (Var_51);
        succeeded = ((((MR_tag((MR_Word) SubRval_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_145, 0)))) == (MR_Integer) 1)));
        if (succeeded)
        {
          Var_52 = ((MR_Word) ((MR_hl_field(3, SubRval_145, 1))));
          succeeded = ((((MR_tag((MR_Word) Var_52)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_52, 0)))) == (MR_Integer) 13)));
          if (succeeded)
          {
            DataId_21 = ((MR_Word) ((MR_hl_field(3, Var_52, 1))));
            succeeded = ((MR_tag((MR_Word) DataId_21)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_53 = ((MR_Word) ((MR_hl_field(2, DataId_21, 0))));
              CellNum_23 = ((MR_Integer) ((MR_hl_field(2, DataId_21, 1))));
              TypeNum_22 = (MR_Integer) (Var_53);
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
        {
          MR_Unsigned Var_180;
          MR_String Var_181;
          MR_String Var_191;
          MR_String Var_201;

          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_TAG_COMMON(");
          mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_180);
          mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_180, &Var_181);
          mercury__io__write_string_4_p_0(Stream_8, Var_181);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), TypeNum_22, &Var_191);
          mercury__io__write_string_4_p_0(Stream_8, Var_191);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_23, &Var_201);
          mercury__io__write_string_4_p_0(Stream_8, Var_201);
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
        }
        else
        {
          MR_Integer Body_24;
          MR_Word Var_63;
          MR_Word Var_64;
          MR_Word Var_65;

          succeeded = ((((MR_tag((MR_Word) SubRval_145)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_145, 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Var_63 = ((MR_Word) ((MR_hl_field(3, SubRval_145, 1))));
            Var_64 = ((MR_Word) ((MR_hl_field(3, SubRval_145, 2))));
            succeeded = (Var_63 == (MR_Word) ((MR_Unsigned) 8U));
            if (succeeded)
            {
              succeeded = ((((MR_tag((MR_Word) Var_64)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_64, 0)))) == (MR_Integer) 1)));
              if (succeeded)
              {
                Var_65 = ((MR_Word) ((MR_hl_field(3, Var_64, 1))));
                succeeded = ((MR_tag((MR_Word) Var_65)) == (MR_Integer) 1);
                if (succeeded)
                  Body_24 = ((MR_Integer) ((MR_hl_field(1, Var_65, 0))));
              }
            }
          }
          if (succeeded)
          {
            MR_Unsigned Var_213;
            MR_String Var_214;
            MR_String Var_224;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tbmkword(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_213);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_213, &Var_214);
            mercury__io__write_string_4_p_0(Stream_8, Var_214);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), Body_24, &Var_224);
            mercury__io__write_string_4_p_0(Stream_8, Var_224);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          else
          {
            MR_Unsigned Var_236;
            MR_String Var_237;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tmkword(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_20, &Var_236);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_236, &Var_237);
            mercury__io__write_string_4_p_0(Stream_8, Var_237);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_145, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_82 = ((MR_Word) ((MR_hl_field(3, Rval_7, 1))));
            uint8_t PtagUInt8_146 = (uint8_t) (Var_82);
            MR_Unsigned Var_167;
            MR_String Var_168;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_tmkword(");
            mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_146, &Var_167);
            mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_167, &Var_168);
            mercury__io__write_string_4_p_0(Stream_8, Var_168);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", 0)");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Const_10 = ((MR_Word) ((MR_hl_field(3, Rval_7, 1))));

            ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_6, Const_10, Stream_8);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Type_11 = ((MR_Word) ((MR_hl_field(3, Rval_7, 1))));
            MR_Word SubRval_12 = ((MR_Word) ((MR_hl_field(3, Rval_7, 2))));
            MR_String TypeStr_13;

            TypeStr_13 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Type_11);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
            mercury__io__write_string_4_p_0(Stream_8, TypeStr_13);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, SubRval_12, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word UnaryOp_14 = ((MR_Word) ((MR_hl_field(3, Rval_7, 1))));
            MR_String OpString_15;
            MR_Word ArgType_16;
            MR_Word SubRval_144 = ((MR_Word) ((MR_hl_field(3, Rval_7, 2))));

            backend_libs__c_util__unary_prefix_op_2_p_0(UnaryOp_14, &OpString_15);
            ll_backend__llds__unop_arg_type_2_p_0(UnaryOp_14, &ArgType_16);
            mercury__io__write_string_4_p_0(Stream_8, OpString_15);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_144, ArgType_16, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word BinOp_17 = ((MR_Word) ((MR_hl_field(3, Rval_7, 1))));
            MR_Word SubRvalA_18 = ((MR_Word) ((MR_hl_field(3, Rval_7, 2))));
            MR_Word SubRvalB_19 = ((MR_Word) ((MR_hl_field(3, Rval_7, 3))));

            ll_backend__llds_out__llds_out_data__output_rval_binop_7_p_0(Stream_8, Info_6, BinOp_17, SubRvalA_18, SubRvalB_19);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef_30 = ((MR_Word) ((MR_hl_field(3, Rval_7, 1))));

            switch (MR_tag((MR_Word) MemRef_30)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word SubRval_152 = ((MR_Word) ((MR_hl_field(0, MemRef_30, 0))));
                  MR_Integer SlotNum_31;
                  MR_Word Var_110;

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_sv(");
                  succeeded = ((((MR_tag((MR_Word) SubRval_152)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_152, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_110 = ((MR_Word) ((MR_hl_field(3, SubRval_152, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_110)) == (MR_Integer) 1);
                    if (succeeded)
                      SlotNum_31 = ((MR_Integer) ((MR_hl_field(1, Var_110, 0))));
                  }
                  if (succeeded)
                    mercury__io__write_int_4_p_0(Stream_8, SlotNum_31);
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_152, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word SubRval_154 = ((MR_Word) ((MR_hl_field(1, MemRef_30, 0))));
                  MR_Integer SlotNum_153;
                  MR_Word Var_119;

                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_fv(");
                  succeeded = ((((MR_tag((MR_Word) SubRval_154)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRval_154, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_119 = ((MR_Word) ((MR_hl_field(3, SubRval_154, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_119)) == (MR_Integer) 1);
                    if (succeeded)
                      SlotNum_153 = ((MR_Integer) ((MR_hl_field(1, Var_119, 0))));
                  }
                  if (succeeded)
                    mercury__io__write_int_4_p_0(Stream_8, SlotNum_153);
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, SubRval_154, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word BaseRval_32 = ((MR_Word) ((MR_hl_field(2, MemRef_30, 0))));
                  MR_Word MaybePtag_160 = ((MR_Word) ((MR_hl_field(2, MemRef_30, 1))));
                  MR_Word FieldNumRval_161 = ((MR_Word) ((MR_hl_field(2, MemRef_30, 2))));
                  MR_Integer FieldNum_158;
                  MR_Word Var_137;

                  if ((MaybePtag_160 == (MR_Word) ((MR_Unsigned) 0U)))
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_mask_field(");
                  else
                  {
                    MR_Word Var_126 = ((MR_Word) ((MR_hl_field(1, MaybePtag_160, 0))));
                    uint8_t PtagUInt8_156 = (uint8_t) (Var_126);
                    MR_Unsigned Var_249;
                    MR_String Var_250;

                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&MR_tfield(");
                    mercury__string__format__format_cast_uint8_to_uint_2_p_0(PtagUInt8_156, &Var_249);
                    mercury__string__format__format_uint_component_nowidth_noprec_4_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), (MR_Integer) 1, Var_249, &Var_250);
                    mercury__io__write_string_4_p_0(Stream_8, Var_250);
                    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  }
                  ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, BaseRval_32, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
                  succeeded = ((((MR_tag((MR_Word) FieldNumRval_161)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_161, 0)))) == (MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_137 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_161, 1))));
                    succeeded = ((MR_tag((MR_Word) Var_137)) == (MR_Integer) 1);
                    if (succeeded)
                      FieldNum_158 = ((MR_Integer) ((MR_hl_field(1, Var_137, 0))));
                  }
                  if (succeeded)
                    mercury__io__write_int_4_p_0(Stream_8, FieldNum_158);
                  else
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_6, FieldNumRval_161, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
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
  MR_Word UnboxInt64s_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word StaticGroundInt64s_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 7))) >> 3)) & (MR_Integer) 1);
  MR_String UInt64Name_14;
  uint64_t UInt64_72;
  MR_Word Var_73;

  succeeded = (UnboxInt64s_12 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (StaticGroundInt64s_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_73 = ((MR_Word) ((MR_hl_field(3, Rval_9, 1))));
        succeeded = ((((MR_tag((MR_Word) Var_73)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_73, 0)))) == (MR_Integer) 7)));
        if (succeeded)
        {
          UInt64_72 = MR_unbox_uint64((MR_hl_field(3, Var_73, 1)));
          UInt64Name_14 = mercury__string__uint64_to_string_1_f_0(UInt64_72);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Cast_15;
    MR_String TypeStr_74;

    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Cast_15 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        Cast_15 = (MR_Word) ((MR_Unsigned) 12U);
        break;
    }
    TypeStr_74 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Cast_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_8, TypeStr_74);
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
          MR_String TypeStr_83;

          TypeStr_83 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 12U));
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          mercury__io__write_string_4_p_0(Stream_8, TypeStr_83);
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
  MR_Word UnboxInt64s_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 7))) >> 4)) & (MR_Integer) 1);
  MR_Word StaticGroundInt64s_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 7))) >> 3)) & (MR_Integer) 1);
  MR_String Int64Name_14;
  int64_t Int64_72;
  MR_Word Var_73;
  MR_String Int64Name0_74;
  MR_String Var_75;
  MR_String Var_76;

  succeeded = (UnboxInt64s_12 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (StaticGroundInt64s_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_73 = ((MR_Word) ((MR_hl_field(3, Rval_9, 1))));
        succeeded = ((((MR_tag((MR_Word) Var_73)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_73, 0)))) == (MR_Integer) 6)));
        if (succeeded)
        {
          Int64_72 = MR_unbox_int64((MR_hl_field(3, Var_73, 1)));
          Int64Name0_74 = mercury__string__int64_to_string_1_f_0(Int64_72);
          Var_75 = (MR_String) "-";
          Var_76 = (MR_String) "neg";
          mercury__string__replace_all_4_p_0(Int64Name0_74, Var_75, Var_76, &Int64Name_14);
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word Cast_15;
    MR_String TypeStr_77;

    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Cast_15 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        Cast_15 = (MR_Word) ((MR_Unsigned) 12U);
        break;
    }
    TypeStr_77 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Cast_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_8, TypeStr_77);
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
          MR_String TypeStr_86;

          TypeStr_86 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 12U));
          mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
          mercury__io__write_string_4_p_0(Stream_8, TypeStr_86);
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
  MR_Word UnboxFloat_12 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 7))) >> 7)) & (MR_Integer) 1);
  MR_Word StaticGroundFloats_13 = ((((MR_Unsigned) ((MR_hl_field(0, Info_7, 7))) >> 5)) & (MR_Integer) 1);
  MR_String FloatName_14;
  MR_Float Float_72;
  MR_Word Var_76;

  succeeded = (UnboxFloat_12 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (StaticGroundFloats_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_76 = ((MR_Word) ((MR_hl_field(3, Rval_9, 1))));
        succeeded = ((((MR_tag((MR_Word) Var_76)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_76, 0)))) == (MR_Integer) 9)));
        if (succeeded)
          Float_72 = MR_unbox_float((MR_hl_field(3, Var_76, 1)));
      }
      if (succeeded)
      {
        MR_String FloatName0_77;
        MR_String FloatName1_78;
        MR_String FloatName2_79;

        FloatName0_77 = backend_libs__c_util__make_float_literal_1_f_0(Float_72);
        mercury__string__replace_all_4_p_0(FloatName0_77, (MR_String) ".", (MR_String) "pt", &FloatName1_78);
        mercury__string__replace_all_4_p_0(FloatName1_78, (MR_String) "+", (MR_String) "plus", &FloatName2_79);
        mercury__string__replace_all_4_p_0(FloatName2_79, (MR_String) "-", (MR_String) "neg", &FloatName_14);
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word Op_73;
        MR_Word Arg1_74;
        MR_Word Arg2_75;
        MR_Word ArithOp_86;
        MR_String OpName_87;
        MR_String Arg1Name_88;
        MR_String Arg2Name_89;
        MR_String Var_90;
        MR_String Var_91;
        MR_String Var_92;
        MR_String Var_93;
        MR_String Var_94;

        succeeded = ((((MR_tag((MR_Word) Rval_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Rval_9, 0)))) == (MR_Integer) 4)));
        if (succeeded)
        {
          Op_73 = ((MR_Word) ((MR_hl_field(3, Rval_9, 1))));
          Arg1_74 = ((MR_Word) ((MR_hl_field(3, Rval_9, 2))));
          Arg2_75 = ((MR_Word) ((MR_hl_field(3, Rval_9, 3))));
          succeeded = ((((MR_tag((MR_Word) Op_73)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_73, 0)))) == (MR_Integer) 9)));
          if (succeeded)
          {
            ArithOp_86 = ((MR_Unsigned) ((MR_hl_field(3, Op_73, 1))) & (MR_Integer) 7);
            ll_backend__llds_out__llds_out_data__float_arith_op_name_2_p_0(ArithOp_86, &OpName_87);
            succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_74, &Arg1Name_88);
            if (succeeded)
            {
              succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_75, &Arg2Name_89);
              if (succeeded)
              {
                Var_91 = (MR_String) "_";
                Var_94 = (MR_String) "_";
                Var_93 = mercury__string__f_43_43_2_f_0(Var_94, Arg2Name_89);
                Var_92 = mercury__string__f_43_43_2_f_0(Arg1Name_88, Var_93);
                Var_90 = mercury__string__f_43_43_2_f_0(Var_91, Var_92);
                FloatName_14 = mercury__string__f_43_43_2_f_0(OpName_87, Var_90);
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
    MR_String TypeStr_95;

    switch (IsPtr_10) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Cast_15 = (MR_Word) ((MR_Unsigned) 20U);
        break;
      case (MR_Integer) 1:
        Cast_15 = (MR_Word) ((MR_Unsigned) 12U);
        break;
    }
    TypeStr_95 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Cast_15);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
    mercury__io__write_string_4_p_0(Stream_8, TypeStr_95);
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
        ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
        break;
    }
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_float_to_word(");
    ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_7, Rval_9, Stream_8);
    mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_binop_7_p_0(
  MR_Word Stream_8,
  MR_Word Info_9,
  MR_Word Op_10,
  MR_Word SubRvalA_11,
  MR_Word SubRvalB_12)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Op_10)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Op_10)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&&");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "||");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_test_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_body(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_nth_code_unit(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_strcmp(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word MemRef_31;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_float_from_dword");
            succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_11, SubRvalB_12, &MemRef_31);
            if (succeeded)
            {
              MR_Word Var_276;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_ptr(MR_dword_ptr(");
              {
                Var_276 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_276, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_276, 1) = ((MR_Box) (MemRef_31));
              }
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, Var_276, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word MemRef_362;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_int64_from_dword");
            succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_11, SubRvalB_12, &MemRef_362);
            if (succeeded)
            {
              MR_Word Var_352;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_ptr(MR_dword_ptr(");
              {
                Var_352 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_352, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_352, 1) = ((MR_Box) (MemRef_362));
              }
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, Var_352, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MemRef_854;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_uint64_from_dword");
            succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(SubRvalA_11, SubRvalB_12, &MemRef_854);
            if (succeeded)
            {
              MR_Word Var_844;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "_ptr(MR_dword_ptr(");
              {
                Var_844 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(3, Var_844, 0) = ((MR_Box) ((MR_Unsigned) 5U));
                MR_hl_field(3, Var_844, 1) = ((MR_Box) (MemRef_854));
              }
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, Var_844, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
            }
            else
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 8:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(((MR_Word) ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") == ((MR_Word) ");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "))");
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntType_21 = ((((MR_Unsigned) ((MR_hl_field(1, Op_10, 0))) >> 3)) & (MR_Integer) 15);
        MR_Word ArithOp_299 = ((MR_Unsigned) ((MR_hl_field(1, Op_10, 0))) & (MR_Integer) 7);

        switch (ArithOp_299) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            switch (IntType_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_24;

                  {
                    Type_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_24, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Integer");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_24, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_24, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Type_392;

                  {
                    Type_392 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_392, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_392, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_392, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Type_412;

                  {
                    Type_412 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_412, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_412, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_412, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Type_432;

                  {
                    Type_432 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_432, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_432, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_432, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Type_452;

                  {
                    Type_452 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_452, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_452, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_452, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 5:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
              case (MR_Integer) 3:
                {
                  MR_Word Type_294;

                  {
                    Type_294 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_294, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_294, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "+");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_294, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Var_145;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              {
                Var_145 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_145, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
              }
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_145, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "/");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Var_145, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 2:
            switch (IntType_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_472;

                  {
                    Type_472 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_472, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Integer");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_472, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_472, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Type_492;

                  {
                    Type_492 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_492, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_492, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_492, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Type_512;

                  {
                    Type_512 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_512, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_512, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_512, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Type_532;

                  {
                    Type_532 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_532, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_532, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_532, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Type_552;

                  {
                    Type_552 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_552, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_552, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_552, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 5:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
              case (MR_Integer) 3:
                {
                  MR_Word Type_580;

                  {
                    Type_580 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_580, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_580, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "*");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_580, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Var_646;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              {
                Var_646 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_646, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
              }
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_646, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "%");
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Var_646, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            break;
          case (MR_Integer) 1:
            switch (IntType_21) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Type_659;

                  {
                    Type_659 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_659, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Integer");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_659, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_Unsigned");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_659, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word Type_679;

                  {
                    Type_679 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_679, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_679, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint16_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_679, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word Type_699;

                  {
                    Type_699 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_699, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_699, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint32_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_699, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 8:
                {
                  MR_Word Type_719;

                  {
                    Type_719 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_719, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_719, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint64_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_719, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Type_739;

                  {
                    Type_739 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_739, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "int8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ((");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_739, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " (");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "uint8_t");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_739, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 5:
              case (MR_Integer) 7:
              case (MR_Integer) 9:
              case (MR_Integer) 3:
                {
                  MR_Word Type_767;

                  {
                    Type_767 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Type_767, 0) = (MR_Box) ((MR_Unsigned) (IntType_21));
                  }
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Type_767, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) "-");
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
                  ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Type_767, Stream_8);
                  mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
                }
                break;
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ShiftType_27 = ((MR_Unsigned) ((MR_hl_field(2, Op_10, 0))) & (MR_Integer) 1);
        MR_Word Var_208;
        MR_Word IntType_307 = ((((MR_Unsigned) ((MR_hl_field(2, Op_10, 0))) >> 1)) & (MR_Integer) 15);

        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
        {
          Var_208 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(2, Var_208, 0) = (MR_Box) ((MR_Unsigned) (IntType_307));
        }
        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_208, Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) "<<");
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
        switch (ShiftType_27) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(int) ");
            break;
        }
        ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
        mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Op_10, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ShiftType_884 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 1);
            MR_Word Var_887;
            MR_Word IntType_901 = ((((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) >> 1)) & (MR_Integer) 15);

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            {
              Var_887 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_887, 0) = (MR_Box) ((MR_Unsigned) (IntType_901));
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_887, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ">>");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            switch (ShiftType_884) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                }
                break;
              case (MR_Integer) 1:
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(int) ");
                break;
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_184;
            MR_Word IntType_304 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 15);

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            {
              Var_184 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_184, 0) = (MR_Box) ((MR_Unsigned) (IntType_304));
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_184, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Var_184, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_311;
            MR_Word IntType_322 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 15);

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            {
              Var_311 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_311, 0) = (MR_Box) ((MR_Unsigned) (IntType_322));
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_311, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "|");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Var_311, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_325;
            MR_Word IntType_336 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 15);

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            {
              Var_325 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Var_325, 0) = (MR_Box) ((MR_Unsigned) (IntType_336));
            }
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_325, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "^");
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Var_325, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word CmpOp_300 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 7);
            MR_String OpStr_301;
            MR_Word IntType_302 = ((((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) >> 3)) & (MR_Integer) 15);
            MR_Word SubRvalAType_25;
            MR_Word SubRvalBType_26;

            OpStr_301 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(CmpOp_300);
            switch (CmpOp_300) {
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
              switch (IntType_302) {
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
                ll_backend__llds__rval_type_2_p_0(SubRvalA_11, &SubRvalAType_25);
                if ((SubRvalAType_25 == (MR_Word) ((MR_Unsigned) 20U)))
                  succeeded = MR_TRUE;
                else
                if (((MR_tag((MR_Word) SubRvalAType_25)) == (MR_Integer) 2))
                {
                  MR_Word Var_156 = ((MR_Unsigned) ((MR_hl_field(2, SubRvalAType_25, 0))) & (MR_Integer) 15);

                  succeeded = (Var_156 == (MR_Integer) 1);
                }
                else
                  succeeded = MR_FALSE;
                if (succeeded)
                {
                  ll_backend__llds__rval_type_2_p_0(SubRvalB_12, &SubRvalBType_26);
                  if ((SubRvalBType_26 == (MR_Word) ((MR_Unsigned) 20U)))
                    succeeded = MR_TRUE;
                  else
                  if (((MR_tag((MR_Word) SubRvalBType_26)) == (MR_Integer) 2))
                  {
                    MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(2, SubRvalBType_26, 0))) & (MR_Integer) 15);

                    succeeded = (Var_157 == (MR_Integer) 1);
                  }
                  else
                    succeeded = MR_FALSE;
                }
              }
            }
            if (succeeded)
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalA_11, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_8, OpStr_301);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_9, SubRvalB_12, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            else
            {
              MR_Word Var_171;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
              {
                Var_171 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Var_171, 0) = (MR_Box) ((MR_Unsigned) (IntType_302));
              }
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Var_171, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              mercury__io__write_string_4_p_0(Stream_8, OpStr_301);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Var_171, Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 5:
          {
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")[");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[1])), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "]");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CmpOp_15 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 7);
            MR_String OpStr_16;
            MR_Word Var_66;
            MR_Word Var_75;

            OpStr_16 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(CmpOp_15);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(strcmp(");
            succeeded = ((((MR_tag((MR_Word) SubRvalA_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_11, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_66 = ((MR_Word) ((MR_hl_field(3, SubRvalA_11, 1))));
              succeeded = ((((MR_tag((MR_Word) Var_66)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_66, 0)))) == (MR_Integer) 10)));
            }
            if (succeeded)
              ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_9, Var_66, Stream_8);
            else
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            succeeded = ((((MR_tag((MR_Word) SubRvalB_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_12, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_75 = ((MR_Word) ((MR_hl_field(3, SubRvalB_12, 1))));
              succeeded = ((((MR_tag((MR_Word) Var_75)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_75, 0)))) == (MR_Integer) 10)));
            }
            if (succeeded)
              ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0(Info_9, Var_75, Stream_8);
            else
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(char *) ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) ((MR_Unsigned) 12U), Stream_8);
            }
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
            mercury__io__write_string_4_p_0(Stream_8, OpStr_16);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " 0)");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer Offset_28 = ((MR_Integer) ((MR_hl_field(3, Op_10, 1))));
            MR_Word MaybeSize_29 = ((MR_Word) ((MR_hl_field(3, Op_10, 2))));

            if ((MaybeSize_29 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_offset_streq(");
              mercury__io__write_int_4_p_0(Stream_8, Offset_28);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 8U), Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) ((MR_Unsigned) 8U), Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            else
            {
              MR_Integer Size_30 = ((MR_Integer) ((MR_hl_field(1, MaybeSize_29, 0))));

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_offset_strn_eq(");
              mercury__io__write_int_4_p_0(Stream_8, Offset_28);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              mercury__io__write_int_4_p_0(Stream_8, Size_30);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 8U), Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) ((MR_Unsigned) 8U), Stream_8);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Uint_20;
            MR_Word Var_101;
            MR_Word CmpOp_292 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 7);
            MR_String OpStr_293;

            Var_101 = (MR_Word) (CmpOp_292);
            OpStr_293 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(Var_101);
            Uint_20 = (MR_Word) (MR_mkword(2, &ll_backend__llds_out__llds_out_data_scalar_common_1[2]));
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, Uint_20, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, OpStr_293);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, Uint_20, Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ArithOp_19 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 7);
            MR_Word Var_87 = (MR_Word) (ArithOp_19);
            MR_String OpStr_291;

            OpStr_291 = backend_libs__builtin_ops__arith_op_c_operator_1_f_0(Var_87);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, OpStr_291);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word CmpOp_288 = ((MR_Unsigned) ((MR_hl_field(3, Op_10, 1))) & (MR_Integer) 7);
            MR_String OpStr_349;

            OpStr_349 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(CmpOp_288);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalA_11, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            mercury__io__write_string_4_p_0(Stream_8, OpStr_349);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) " ");
            ll_backend__llds_out__llds_out_data__output_rval_as_type_6_p_0(Info_9, SubRvalB_12, (MR_Word) ((MR_Unsigned) 4U), Stream_8);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
      }
      break;
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
        MR_Word Type_10 = ((MR_Unsigned) ((MR_hl_field(1, Lval_8, 0))) & (MR_Integer) 1);
        MR_Integer Num_11 = ((MR_Integer) ((MR_hl_field(1, Lval_8, 1))));

        ll_backend__llds_out__llds_out_data__output_reg_5_p_0(Stream_7, Type_10, Num_11);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Type_133 = ((MR_Unsigned) ((MR_hl_field(2, Lval_8, 0))) & (MR_Integer) 1);
        MR_Integer Num_134 = ((MR_Integer) ((MR_hl_field(2, Lval_8, 1))));

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
      switch (((MR_Integer) ((MR_hl_field(3, Lval_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_12 = ((MR_Integer) ((MR_hl_field(3, Lval_8, 1))));
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
            MR_Integer N_126 = ((MR_Integer) ((MR_hl_field(3, Lval_8, 1))));
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
            MR_Integer N_127 = ((MR_Integer) ((MR_hl_field(3, Lval_8, 1))));
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
            MR_Word StackType_13 = ((MR_Unsigned) ((MR_hl_field(3, Lval_8, 1))) & (MR_Integer) 1);
            MR_Integer SlotNum_14 = ((MR_Integer) ((MR_hl_field(3, Lval_8, 2))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_float_from_dword_ptr(");
            ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_6_p_0(Info_6, Stream_7, StackType_13, SlotNum_14);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word Rval_131 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_succip_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_131, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_succfr_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_15, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word Rval_130 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_redoip_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_130, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_129 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_redofr_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_129, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Rval_128 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_prevfr_slot(");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_128, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MaybePtag_16 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));
            MR_Word FieldNumRval_17 = ((MR_Word) ((MR_hl_field(3, Lval_8, 3))));
            MR_Word Rval_132 = ((MR_Word) ((MR_hl_field(3, Lval_8, 2))));
            MR_Integer FieldNum_19;
            MR_Word Var_105;

            if ((MaybePtag_16 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_mask_field(");
            else
            {
              uint8_t PtagUInt8_18;
              MR_Word Var_94 = ((MR_Word) ((MR_hl_field(1, MaybePtag_16, 0))));
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
            succeeded = ((((MR_tag((MR_Word) FieldNumRval_17)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, FieldNumRval_17, 0)))) == (MR_Integer) 1)));
            if (succeeded)
            {
              Var_105 = ((MR_Word) ((MR_hl_field(3, FieldNumRval_17, 1))));
              succeeded = ((MR_tag((MR_Word) Var_105)) == (MR_Integer) 1);
              if (succeeded)
                FieldNum_19 = ((MR_Integer) ((MR_hl_field(1, Var_105, 0))));
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
            MR_Word Rval_135 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));

            mercury__io__write_string_4_p_0(Stream_7, (MR_String) "* (MR_Word *) (");
            ll_backend__llds_out__llds_out_data__output_rval_5_p_0(Info_6, Rval_135, Stream_7);
            mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word GlobalVar_21 = ((MR_Word) ((MR_hl_field(3, Lval_8, 1))));
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
  MR_bool succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, 0)))) == (MR_Integer) 1)));
  MR_Float Float_5;
  MR_Word Var_9;

  if (succeeded)
  {
    Var_9 = ((MR_Word) ((MR_hl_field(3, Expr_3, 1))));
    succeeded = ((((MR_tag((MR_Word) Var_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_9, 0)))) == (MR_Integer) 9)));
    if (succeeded)
      Float_5 = MR_unbox_float((MR_hl_field(3, Var_9, 1)));
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
    MR_Word ArithOp_19;
    MR_String OpName_20;
    MR_String Arg1Name_21;
    MR_String Arg2Name_22;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_25;
    MR_String Var_26;
    MR_String Var_27;

    succeeded = ((((MR_tag((MR_Word) Expr_3)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Expr_3, 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Op_6 = ((MR_Word) ((MR_hl_field(3, Expr_3, 1))));
      Arg1_7 = ((MR_Word) ((MR_hl_field(3, Expr_3, 2))));
      Arg2_8 = ((MR_Word) ((MR_hl_field(3, Expr_3, 3))));
      succeeded = ((((MR_tag((MR_Word) Op_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Op_6, 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        ArithOp_19 = ((MR_Unsigned) ((MR_hl_field(3, Op_6, 1))) & (MR_Integer) 7);
        ll_backend__llds_out__llds_out_data__float_arith_op_name_2_p_0(ArithOp_19, &OpName_20);
        succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg1_7, &Arg1Name_21);
        if (succeeded)
        {
          succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(Arg2_8, &Arg2Name_22);
          if (succeeded)
          {
            Var_24 = (MR_String) "_";
            Var_27 = (MR_String) "_";
            Var_26 = mercury__string__f_43_43_2_f_0(Var_27, Arg2Name_22);
            Var_25 = mercury__string__f_43_43_2_f_0(Arg1Name_21, Var_26);
            Var_23 = mercury__string__f_43_43_2_f_0(Var_24, Var_25);
            *Name_4 = mercury__string__f_43_43_2_f_0(OpName_20, Var_23);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_arith_op_name_2_p_0(
  MR_Word HeadVar__1_1,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[16 + HeadVar__1_1]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
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
    LvalA_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      LvalB_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
      succeeded = ((((MR_tag((MR_Word) LvalA_4)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, LvalA_4, 0)))) == (MR_Integer) 0)));
      if (succeeded)
      {
        N_7 = ((MR_Integer) ((MR_hl_field(3, LvalA_4, 1))));
        succeeded = ((((MR_tag((MR_Word) LvalB_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, LvalB_5, 0)))) == (MR_Integer) 0)));
        if (succeeded)
        {
          Var_11 = ((MR_Integer) ((MR_hl_field(3, LvalB_5, 1))));
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

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word Test_5,
  MR_Word VarRval_6,
  MR_Word Ptag_7,
  MR_Unsigned * Sectag_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) Test_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Test_5, 0)))) == (MR_Integer) 4)));
  MR_Word Left_9;
  MR_Word Right_10;
  MR_Word Zero_11;
  MR_Integer SectagInt_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_16;
  MR_Word Var_17;
  MR_Word Var_18;
  MR_Integer Var_19;
  MR_Word Var_20;
  MR_Word Var_21;
  MR_Word Var_22;
  uint8_t Var_25;
  uint8_t Var_26;

  if (succeeded)
  {
    Var_13 = ((MR_Word) ((MR_hl_field(3, Test_5, 1))));
    Left_9 = ((MR_Word) ((MR_hl_field(3, Test_5, 2))));
    Right_10 = ((MR_Word) ((MR_hl_field(3, Test_5, 3))));
    succeeded = ((((MR_tag((MR_Word) Var_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_13, 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      Var_14 = ((((MR_Unsigned) ((MR_hl_field(3, Var_13, 1))) >> 3)) & (MR_Integer) 15);
      Var_15 = ((MR_Unsigned) ((MR_hl_field(3, Var_13, 1))) & (MR_Integer) 7);
      succeeded = (Var_14 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (Var_15 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = ((MR_tag((MR_Word) Left_9)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_16 = ((MR_Word) ((MR_hl_field(0, Left_9, 0))));
            succeeded = ((((MR_tag((MR_Word) Var_16)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Var_16, 0)))) == (MR_Integer) 9)));
            if (succeeded)
            {
              Var_17 = ((MR_Word) ((MR_hl_field(3, Var_16, 1))));
              Var_21 = ((MR_Word) ((MR_hl_field(3, Var_16, 2))));
              Zero_11 = ((MR_Word) ((MR_hl_field(3, Var_16, 3))));
              succeeded = ll_backend__llds____Unify____rval_0_0(VarRval_6, Var_21);
              if (succeeded)
              {
                succeeded = (Var_17 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_22 = ((MR_Word) ((MR_hl_field(1, Var_17, 0))));
                  Var_25 = (uint8_t) (Ptag_7);
                  Var_26 = (uint8_t) (Var_22);
                  succeeded = (Var_25 == Var_26);
                  if (succeeded)
                  {
                    succeeded = ((((MR_tag((MR_Word) Zero_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Zero_11, 0)))) == (MR_Integer) 1)));
                    if (succeeded)
                    {
                      Var_18 = ((MR_Word) ((MR_hl_field(3, Zero_11, 1))));
                      succeeded = ((MR_tag((MR_Word) Var_18)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        Var_19 = ((MR_Integer) ((MR_hl_field(1, Var_18, 0))));
                        succeeded = (Var_19 == (MR_Integer) 0);
                        if (succeeded)
                        {
                          succeeded = ((((MR_tag((MR_Word) Right_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Right_10, 0)))) == (MR_Integer) 1)));
                          if (succeeded)
                          {
                            Var_20 = ((MR_Word) ((MR_hl_field(3, Right_10, 1))));
                            succeeded = ((MR_tag((MR_Word) Var_20)) == (MR_Integer) 1);
                            if (succeeded)
                            {
                              SectagInt_12 = ((MR_Integer) ((MR_hl_field(1, Var_20, 0))));
                              succeeded = mercury__uint__from_int_2_p_0(SectagInt_12, Sectag_8);
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
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__args_are_of_ptag_test_4_p_0(
  MR_Word SubRvalA_5,
  MR_Word SubRvalB_6,
  MR_Word * VarRval_7,
  MR_Word * Ptag_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) SubRvalA_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_5, 0)))) == (MR_Integer) 3)));
  MR_Integer PtagInt_9;
  uint8_t PtagUint8_10;
  MR_Word Var_11;
  MR_Word Var_12;

  if (succeeded)
  {
    Var_11 = ((MR_Word) ((MR_hl_field(3, SubRvalA_5, 1))));
    *VarRval_7 = ((MR_Word) ((MR_hl_field(3, SubRvalA_5, 2))));
    succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      succeeded = ((((MR_tag((MR_Word) SubRvalB_6)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_6, 0)))) == (MR_Integer) 1)));
      if (succeeded)
      {
        Var_12 = ((MR_Word) ((MR_hl_field(3, SubRvalB_6, 1))));
        succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
        if (succeeded)
        {
          PtagInt_9 = ((MR_Integer) ((MR_hl_field(1, Var_12, 0))));
          succeeded = mercury__uint8__from_int_2_p_0(PtagInt_9, &PtagUint8_10);
          if (succeeded)
          {
            *Ptag_8 = (MR_Word) (PtagUint8_10);
            succeeded = MR_TRUE;
          }
        }
      }
    }
  }
  return succeeded;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word TestRval_5,
  MR_Word * VarRval_6,
  MR_Word * Ptag_7,
  MR_Word * Negated_8)
{
  MR_bool succeeded = ((((MR_tag((MR_Word) TestRval_5)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, TestRval_5, 0)))) == (MR_Integer) 4)));
  MR_Word BinOp_9;
  MR_Word SubRvalA_10;
  MR_Word SubRvalB_11;
  MR_Word CmpOp_13;
  MR_Integer PtagInt_14;
  uint8_t PtagUint8_15;
  MR_Word Var_16;
  MR_Word Var_17;

  if (succeeded)
  {
    BinOp_9 = ((MR_Word) ((MR_hl_field(3, TestRval_5, 1))));
    SubRvalA_10 = ((MR_Word) ((MR_hl_field(3, TestRval_5, 2))));
    SubRvalB_11 = ((MR_Word) ((MR_hl_field(3, TestRval_5, 3))));
    succeeded = ((((MR_tag((MR_Word) BinOp_9)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, BinOp_9, 0)))) == (MR_Integer) 4)));
    if (succeeded)
    {
      CmpOp_13 = ((MR_Unsigned) ((MR_hl_field(3, BinOp_9, 1))) & (MR_Integer) 7);
      succeeded = ((((MR_tag((MR_Word) SubRvalA_10)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalA_10, 0)))) == (MR_Integer) 3)));
      if (succeeded)
      {
        Var_16 = ((MR_Word) ((MR_hl_field(3, SubRvalA_10, 1))));
        *VarRval_6 = ((MR_Word) ((MR_hl_field(3, SubRvalA_10, 2))));
        succeeded = (Var_16 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          succeeded = ((((MR_tag((MR_Word) SubRvalB_11)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, SubRvalB_11, 0)))) == (MR_Integer) 1)));
          if (succeeded)
          {
            Var_17 = ((MR_Word) ((MR_hl_field(3, SubRvalB_11, 1))));
            succeeded = ((MR_tag((MR_Word) Var_17)) == (MR_Integer) 1);
            if (succeeded)
            {
              PtagInt_14 = ((MR_Integer) ((MR_hl_field(1, Var_17, 0))));
              succeeded = mercury__uint8__from_int_2_p_0(PtagInt_14, &PtagUint8_15);
              if (succeeded)
              {
                *Ptag_7 = (MR_Word) (PtagUint8_15);
                switch (CmpOp_13) {
                  default:
                    succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    {
                      *Negated_8 = (MR_Integer) 0;
                      succeeded = MR_TRUE;
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      *Negated_8 = (MR_Integer) 1;
                      succeeded = MR_TRUE;
                    }
                    break;
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

void MR_CALL 
ll_backend__llds_out__llds_out_data__write_ptag_4_p_0(
  MR_Word Stream_5,
  MR_Word HeadVar__2_2)
{
  uint8_t PtagUInt8_6 = (uint8_t) (HeadVar__2_2);

  mercury__io__write_uint8_4_p_0(Stream_5, PtagUInt8_6);
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_Box wrapper_arg_3;
  MR_Box closure = closure_arg;
  MR_Integer conv0_LambdaHeadVar__3_71;

  conv0_LambdaHeadVar__3_71 = ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1163__1_2_f_0(((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
  wrapper_arg_3 = ((MR_Box) (conv0_LambdaHeadVar__3_71));
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
        MR_Integer N_10 = ((MR_Integer) ((MR_hl_field(1, Const_7, 0))));

        backend_libs__c_util__output_int_as_c_expr_4_p_0(Stream_8, N_10);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned N_102 = ((MR_Unsigned) ((MR_hl_field(2, Const_7, 0))));

        backend_libs__c_util__output_uint_as_c_expr_4_p_0(Stream_8, N_102);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_7, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int8_t N_103 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_int8_as_c_expr_4_p_0(Stream_8, N_103);
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t N_104 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_uint8_as_c_expr_4_p_0(Stream_8, N_104);
          }
          break;
        case (MR_Integer) 2:
          {
            int16_t N_105 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_int16_as_c_expr_4_p_0(Stream_8, N_105);
          }
          break;
        case (MR_Integer) 3:
          {
            uint16_t N_106 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_uint16_as_c_expr_4_p_0(Stream_8, N_106);
          }
          break;
        case (MR_Integer) 4:
          {
            int32_t N_107 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_int32_as_c_expr_4_p_0(Stream_8, N_107);
          }
          break;
        case (MR_Integer) 5:
          {
            uint32_t N_108 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_uint32_as_c_expr_4_p_0(Stream_8, N_108);
          }
          break;
        case (MR_Integer) 6:
          {
            int64_t N_109 = MR_unbox_int64((MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_int64_as_c_expr_4_p_0(Stream_8, N_109);
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t N_110 = MR_unbox_uint64((MR_hl_field(3, Const_7, 1)));

            backend_libs__c_util__output_uint64_as_c_expr_4_p_0(Stream_8, N_110);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Value_11 = ((MR_String) ((MR_hl_field(3, Const_7, 1))));
            MR_Word Type_12 = ((MR_Word) ((MR_hl_field(3, Const_7, 2))));

            mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 40);
            ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(Stream_8, Type_12);
            mercury__io__write_string_4_p_0(Stream_8, Value_11);
            mercury__io__write_char_4_p_0(Stream_8, (MR_Char) 41);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Float FloatVal_13 = MR_unbox_float((MR_hl_field(3, Const_7, 1)));

            ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 4U));
            backend_libs__c_util__output_float_literal_4_p_0(Stream_8, FloatVal_13);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String String_14 = ((MR_String) ((MR_hl_field(3, Const_7, 1))));
            MR_Integer Var_60;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_string_const(");
            backend_libs__c_util__output_quoted_mmf_string_c_4_p_0(Stream_8, String_14);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            Var_60 = mercury__string__count_utf8_code_units_1_f_0(String_14);
            mercury__io__write_int_4_p_0(Stream_8, Var_60);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Strings_15 = ((MR_Word) ((MR_hl_field(3, Const_7, 1))));
            MR_Integer Length_19;
            MR_Box conv1_Length_19;

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_string_const(");
            backend_libs__c_util__output_quoted_multi_string_c_4_p_0(Stream_8, Strings_15);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
            conv1_Length_19 = mercury__list__foldl_3_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_5[0]), Strings_15, ((MR_Box) ((MR_Integer) 0)));
            Length_19 = ((MR_Integer) (conv1_Length_19));
            mercury__io__write_int_4_p_0(Stream_8, Length_19);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word CodeAddress_20 = ((MR_Word) ((MR_hl_field(3, Const_7, 1))));

            ll_backend__llds_out__llds_out_code_addr__output_code_addr_4_p_0(Stream_8, CodeAddress_20);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word DataId_21 = ((MR_Word) ((MR_hl_field(3, Const_7, 1))));
            MR_Integer TypeNum_22;
            MR_Integer CellNum_23;
            MR_Word Var_80;

            succeeded = ((MR_tag((MR_Word) DataId_21)) == (MR_Integer) 2);
            if (succeeded)
            {
              Var_80 = ((MR_Word) ((MR_hl_field(2, DataId_21, 0))));
              CellNum_23 = ((MR_Integer) ((MR_hl_field(2, DataId_21, 1))));
              TypeNum_22 = (MR_Integer) (Var_80);
              succeeded = MR_TRUE;
            }
            if (succeeded)
            {
              MR_String Var_119;
              MR_String Var_129;

              mercury__io__write_string_4_p_0(Stream_8, (MR_String) "MR_COMMON(");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), TypeNum_22, &Var_119);
              mercury__io__write_string_4_p_0(Stream_8, Var_119);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ", ");
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_23, &Var_129);
              mercury__io__write_string_4_p_0(Stream_8, Var_129);
              mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
            }
            else
            {
              MR_Word Module_26;
              MR_String Name_27;
              uint16_t Arity_28;
              MR_Word RttiId_24;
              MR_Word Ctor_25;

              succeeded = ((MR_tag((MR_Word) DataId_21)) == (MR_Integer) 0);
              if (succeeded)
              {
                RttiId_24 = ((MR_Word) ((MR_hl_field(0, DataId_21, 0))));
                succeeded = backend_libs__rtti__rtti_id_emits_type_ctor_info_2_p_0(RttiId_24, &Ctor_25);
                if (succeeded)
                {
                  Module_26 = ((MR_Word) ((MR_hl_field(0, Ctor_25, 0))));
                  Name_27 = ((MR_String) ((MR_hl_field(0, Ctor_25, 1))));
                  Arity_28 = ((uint16_t) (MR_Word) (MR_hl_field(0, Ctor_25, 2)));
                  succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(Module_26);
                  if (succeeded)
                    succeeded = backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(Name_27);
                }
              }
              if (succeeded)
                ll_backend__llds_out__llds_out_data__output_type_ctor_addr_6_p_0(Stream_8, Module_26, Name_27, Arity_28);
              else
              {
                MR_String TypeStr_137;

                TypeStr_137 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0((MR_Word) ((MR_Unsigned) 12U));
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "(");
                mercury__io__write_string_4_p_0(Stream_8, TypeStr_137);
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") ");
                mercury__io__write_string_4_p_0(Stream_8, (MR_String) "&");
                ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(Info_6, Stream_8, DataId_21);
              }
            }
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Offset_29 = ((MR_Integer) ((MR_hl_field(3, Const_7, 2))));
            MR_Word DataId_113 = ((MR_Word) ((MR_hl_field(3, Const_7, 1))));

            mercury__io__write_string_4_p_0(Stream_8, (MR_String) "((");
            ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(Stream_8, (MR_Word) ((MR_Unsigned) 12U));
            ll_backend__llds_out__llds_out_data__output_data_id_addr_5_p_0(Info_6, Stream_8, DataId_113);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ") + ");
            mercury__io__write_int_4_p_0(Stream_8, Offset_29);
            mercury__io__write_string_4_p_0(Stream_8, (MR_String) ")");
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
    Var_17 = ((MR_String) ((MR_hl_field(0, Module0_8, 0))));
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

    if ((strcmp(ModuleStr_13, (MR_String) "io") == 0))
    {
      succeeded = (strcmp(Name_9, (MR_String) "state") == 0);
      if (succeeded)
      {
        Macro_14 = (MR_String) "MR_IO_CTOR_ADDR";
        succeeded = MR_TRUE;
      }
    }
    else
    if ((strcmp(ModuleStr_13, (MR_String) "bool") == 0))
    {
      succeeded = (strcmp(Name_9, (MR_String) "bool") == 0);
      if (succeeded)
      {
        Macro_14 = (MR_String) "MR_BOOL_CTOR_ADDR";
        succeeded = MR_TRUE;
      }
    }
    else
    if ((strcmp(ModuleStr_13, (MR_String) "builtin") == 0))
    {
      MR_Integer slot_0 = ((MR_hash_string6(Name_9)) & (MR_Integer) 63);
      MR_String str_1 = ((&ll_backend__llds_out__llds_out_data_vector_common_3[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_3_0__vct_3_f_0;

      // hashed string simple lookup switch
      ;
      // compute the hash value of the input string
      ;
      // no collisions; no hash chain loop
      ;
      // lookup the string for this hash slot
      ;
      // did we find a match?
      ;
      if ((((str_1 != NULL)) && ((strcmp(str_1, Name_9) == 0))))
      {
        // we found a match; look up the results
        ;
        Macro_14 = ((&ll_backend__llds_out__llds_out_data_vector_common_3[0 + slot_0]))->ll_backend__llds_out__llds_out_data__vector_common_type_3_0__vct_3_f_1;
        succeeded = MR_TRUE;
        // jump out of search loop
        ;
        goto label_0;
      }
      succeeded = MR_FALSE;
    label_0:;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
      mercury__io__write_string_4_p_0(Stream_7, Macro_14);
    else
    {
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_CTOR0_ADDR(");
      mercury__io__write_string_4_p_0(Stream_7, ModuleStr_13);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_7, Name_9);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    }
  }
  else
  {
    succeeded = (Arity_10 == UINT16_C(1));
    if (succeeded)
    {
      MR_String Macro_44;

      if ((strcmp(Name_9, (MR_String) "list") == 0))
      {
        succeeded = (strcmp(ModuleStr_13, (MR_String) "list") == 0);
        if (succeeded)
        {
          Macro_44 = (MR_String) "MR_LIST_CTOR_ADDR";
          succeeded = MR_TRUE;
        }
      }
      else
      if ((strcmp(Name_9, (MR_String) "type_info") == 0))
      {
        succeeded = (strcmp(ModuleStr_13, (MR_String) "private_builtin") == 0);
        if (succeeded)
        {
          Macro_44 = (MR_String) "MR_TYPE_INFO_CTOR_ADDR";
          succeeded = MR_TRUE;
        }
      }
      else
        succeeded = MR_FALSE;
      if (succeeded)
        mercury__io__write_string_4_p_0(Stream_7, Macro_44);
      else
      {
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_CTOR1_ADDR(");
        mercury__io__write_string_4_p_0(Stream_7, ModuleStr_13);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
        mercury__io__write_string_4_p_0(Stream_7, Name_9);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
      }
    }
    else
    {
      MR_Integer Var_42;
      MR_String Var_68;

      Var_42 = mercury__uint16__to_int_1_f_0(Arity_10);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) "MR_CTOR_ADDR(");
      mercury__io__write_string_4_p_0(Stream_7, ModuleStr_13);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      mercury__io__write_string_4_p_0(Stream_7, Name_9);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), Var_42, &Var_68);
      mercury__io__write_string_4_p_0(Stream_7, Var_68);
      mercury__io__write_string_4_p_0(Stream_7, (MR_String) ")");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_cast_4_p_0(
  MR_Word Stream_5,
  MR_Word Type_6)
{
  MR_String TypeStr_8;

  TypeStr_8 = ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(Type_6);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) "(");
  mercury__io__write_string_4_p_0(Stream_5, TypeStr_8);
  mercury__io__write_string_4_p_0(Stream_5, (MR_String) ") ");
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
ll_backend__llds_out__llds_out_data__output_data_id_5_p_0(
  MR_Word Info_6,
  MR_Word Stream_7,
  MR_Word DataId_8)
{
  switch (MR_tag((MR_Word) DataId_8)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiId_10 = ((MR_Word) ((MR_hl_field(0, DataId_8, 0))));

        ll_backend__rtti_out__output_rtti_id_4_p_0(Stream_7, RttiId_10);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_11 = ((MR_Word) ((MR_hl_field(1, DataId_8, 0))));
        MR_Word TablingId_12 = ((MR_Word) ((MR_hl_field(1, DataId_8, 1))));
        MR_String Var_24;

        Var_24 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ProcLabel_11, TablingId_12);
        mercury__io__write_string_4_p_0(Stream_7, Var_24);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeNum_13 = ((MR_Word) ((MR_hl_field(2, DataId_8, 0))));
        MR_Integer CellNum_14 = ((MR_Integer) ((MR_hl_field(2, DataId_8, 1))));
        MR_String Var_87;

        ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_4_p_0(Stream_7, TypeNum_13);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "[");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__llds_out__llds_out_data_scalar_common_1[0]), CellNum_14, &Var_87);
        mercury__io__write_string_4_p_0(Stream_7, Var_87);
        mercury__io__write_string_4_p_0(Stream_7, (MR_String) "]");
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DataId_8, 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TypeNum_36 = ((MR_Word) ((MR_hl_field(3, DataId_8, 1))));
            MR_Integer CellNum_37 = ((MR_Integer) ((MR_hl_field(3, DataId_8, 2))));

            ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_5_p_0(Stream_7, TypeNum_36, CellNum_37);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_15 = ((MR_Word) ((MR_hl_field(3, DataId_8, 1))));

            ll_backend__layout_out__output_layout_name_4_p_0(Stream_7, LayoutName_15);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredProcId_17 = ((MR_Word) ((MR_hl_field(3, DataId_8, 2))));
            MR_Word TableIoEntryMap_18 = ((MR_Word) ((MR_hl_field(0, Info_6, 5))));
            MR_Word LayoutSlotName_19;
            MR_String MangledModuleName_20;
            MR_Box conv0_LayoutSlotName_19;

            mercury__map__lookup_3_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0), TableIoEntryMap_18, ((MR_Box) (PredProcId_17)), &conv0_LayoutSlotName_19);
            LayoutSlotName_19 = ((MR_Word) (conv0_LayoutSlotName_19));
            MangledModuleName_20 = ((MR_String) ((MR_hl_field(0, Info_6, 1))));
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

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__llds_type_to_string_1_f_0(
  MR_Word Type_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) Type_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(Type_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Str_4 = (MR_String) "MR_Integer";
          break;
        case (MR_Integer) 1:
          Str_4 = (MR_String) "MR_Float";
          break;
        case (MR_Integer) 2:
          Str_4 = (MR_String) "MR_String";
          break;
        case (MR_Integer) 3:
          Str_4 = (MR_String) "MR_Word *";
          break;
        case (MR_Integer) 4:
          Str_4 = (MR_String) "MR_Code *";
          break;
        case (MR_Integer) 5:
          Str_4 = (MR_String) "MR_Word";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word IntLeastType_5 = ((MR_Unsigned) ((MR_hl_field(1, Type_3, 0))) & (MR_Integer) 7);

        Str_4 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[10 + IntLeastType_5]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word IntType_6 = ((MR_Unsigned) ((MR_hl_field(2, Type_3, 0))) & (MR_Integer) 15);

        Str_4 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[0 + IntType_6]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
      }
      break;
  }
  return Str_4;
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____dword_type_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_data____Unify____dword_type_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____dword_type_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_data____Compare____dword_type_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data____Unify____maybe_negated_test_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = ll_backend__llds_out__llds_out_data____Unify____maybe_negated_test_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data____Compare____maybe_negated_test_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  ll_backend__llds_out__llds_out_data____Compare____maybe_negated_test_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ll_backend__llds_out__llds_out_data__init(void)
{
}

void mercury__ll_backend__llds_out__llds_out_data__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__type_ctor_info_dword_type_0);
  MR_register_type_ctor_info(&ll_backend__llds_out__llds_out_data__ll_backend__llds_out__llds_out_data__type_ctor_info_maybe_negated_test_0);
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
