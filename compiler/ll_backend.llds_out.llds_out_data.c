/*
** Automatically generated from `llds_out_data.m'
** by the Mercury compiler,
** version rotd-2016-05-05
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module ll_backend.llds_out.llds_out_data. */
/* :- implementation. */

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
#include "check_hlds.type_util.mih"
#include "check_hlds.unify_proc.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_args.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_data.mih"
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
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1203__1_2_f_0(
  MR_String ll_backend__llds_out__llds_out_data__LambdaHeadVar__1_60,
  MR_Integer ll_backend__llds_out__llds_out_data__LambdaHeadVar__2_61);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(
  MR_Float ll_backend__llds_out__llds_out_data__Float_3,
  MR_String * ll_backend__llds_out__llds_out_data__FloatName_4);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Op_5,
  MR_Word ll_backend__llds_out__llds_out_data__Arg1_6,
  MR_Word ll_backend__llds_out__llds_out_data__Arg2_7,
  MR_String * ll_backend__llds_out__llds_out_data__Name_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_6,
  MR_Word * ll_backend__llds_out__llds_out_data__Rval_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__Ptag_8,
  MR_Integer * ll_backend__llds_out__llds_out_data__Stag_9,
  MR_Word * ll_backend__llds_out__llds_out_data__Negated_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6,
  MR_Integer ll_backend__llds_out__llds_out_data__Ptag_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__Stag_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_5,
  MR_Word * ll_backend__llds_out__llds_out_data__Rval_6,
  MR_Integer * ll_backend__llds_out__llds_out_data__Ptag_7,
  MR_Word * ll_backend__llds_out__llds_out_data__Negated_8);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_6,
  MR_Word * ll_backend__llds_out__llds_out_data__Left_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__RightConst_8,
  MR_String * ll_backend__llds_out__llds_out_data__OpStr_9,
  MR_String * ll_backend__llds_out__llds_out_data__NegOpStr_10);

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2,
  MR_Word * ll_backend__llds_out__llds_out_data__MemRef_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_6,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_7,
  MR_Word ll_backend__llds_out__llds_out_data__IsPtr_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_as_word_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_as_data_ptr_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Module0_6,
  MR_String ll_backend__llds_out__llds_out_data__Name_7,
  MR_Integer ll_backend__llds_out__llds_out_data__Arity_8);

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_data__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_data__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_data__wrapper_arg_2);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Const_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__MemRef_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_22,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_23,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_24,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_25);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_12_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_1,
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2,
  MR_Word * ll_backend__llds_out__llds_out_data__HeadVar__3_3,
  MR_Integer ll_backend__llds_out__llds_out_data__Count_4,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_5,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_6,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_9,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_10);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_1,
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_3,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_4,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_5,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_6,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_7,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__RegType_5,
  MR_Integer ll_backend__llds_out__llds_out_data__N_6);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_6,
  MR_Word ll_backend__llds_out__llds_out_data__StackType_7,
  MR_Integer ll_backend__llds_out__llds_out_data__SlotNum_8);

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);


static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_1[1][1];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][2];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][6];

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][3];


/* sealed */ struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s {
  const MR_Word ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s ll_backend__llds_out__llds_out_data_vector_common_2[14];



static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_1[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_3[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) ";\n")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_4[1][6] = {
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

static /* final */ const MR_Box ll_backend__llds_out__llds_out_data_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__llds_out__llds_out_data_scalar_common_4[0])),
    ((MR_Box) (ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};


static /* final */ const struct ll_backend__llds_out__llds_out_data__vector_common_type_2_0_s ll_backend__llds_out__llds_out_data_vector_common_2[14] = {
  /* row 0 */   {     (MR_Integer) 0 },
  /* row 1 */   {     (MR_Integer) 1 },
  /* row 2 */   {     (MR_Integer) 1 },
  /* row 3 */   {     (MR_Integer) 1 },
  /* row 4 */   {     (MR_Integer) 1 },
  /* row 5 */   {     (MR_Integer) 1 },
  /* row 6 */   {     (MR_Integer) 1 },
  /* row 7 */   {     (MR_Integer) 1 },
  /* row 8 */   {     (MR_Integer) 1 },
  /* row 9 */   {     (MR_Integer) 0 },
  /* row 10 */   {     (MR_Integer) 0 },
  /* row 11 */   {     (MR_Integer) 0 },
  /* row 12 */   {     (MR_Integer) 0 },
  /* row 13 */   {     (MR_Integer) 0 },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_Integer MR_CALL 
ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1203__1_2_f_0(
  MR_String ll_backend__llds_out__llds_out_data__LambdaHeadVar__1_60,
  MR_Integer ll_backend__llds_out__llds_out_data__LambdaHeadVar__2_61)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__LambdaHeadVar__3_62;
    MR_Integer ll_backend__llds_out__llds_out_data__V_63_63;
    MR_Integer ll_backend__llds_out__llds_out_data__V_64_64;

    {
      ll_backend__llds_out__llds_out_data__V_64_64 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__llds_out__llds_out_data__LambdaHeadVar__1_60);
    }
    ll_backend__llds_out__llds_out_data__V_63_63 = (ll_backend__llds_out__llds_out_data__LambdaHeadVar__2_61 + ll_backend__llds_out__llds_out_data__V_64_64);
    ll_backend__llds_out__llds_out_data__LambdaHeadVar__3_62 = (ll_backend__llds_out__llds_out_data__V_63_63 + (MR_Integer) 1);
    return ll_backend__llds_out__llds_out_data__LambdaHeadVar__3_62;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(
  MR_Float ll_backend__llds_out__llds_out_data__Float_3,
  MR_String * ll_backend__llds_out__llds_out_data__FloatName_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_String ll_backend__llds_out__llds_out_data__FloatName0_5;
    MR_String ll_backend__llds_out__llds_out_data__FloatName1_6;
    MR_String ll_backend__llds_out__llds_out_data__FloatName2_7;

    {
      ll_backend__llds_out__llds_out_data__FloatName0_5 = backend_libs__c_util__make_float_literal_1_f_0(ll_backend__llds_out__llds_out_data__Float_3);
    }
    {
      mercury__string__replace_all_4_p_0(ll_backend__llds_out__llds_out_data__FloatName0_5, (MR_String) ".", (MR_String) "pt", &ll_backend__llds_out__llds_out_data__FloatName1_6);
    }
    {
      mercury__string__replace_all_4_p_0(ll_backend__llds_out__llds_out_data__FloatName1_6, (MR_String) "+", (MR_String) "plus", &ll_backend__llds_out__llds_out_data__FloatName2_7);
    }
    {
      mercury__string__replace_all_4_p_0(ll_backend__llds_out__llds_out_data__FloatName2_7, (MR_String) "-", (MR_String) "neg", ll_backend__llds_out__llds_out_data__FloatName_4);
    }
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Op_5,
  MR_Word ll_backend__llds_out__llds_out_data__Arg1_6,
  MR_Word ll_backend__llds_out__llds_out_data__Arg2_7,
  MR_String * ll_backend__llds_out__llds_out_data__Name_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_String ll_backend__llds_out__llds_out_data__OpName_9;
    MR_String ll_backend__llds_out__llds_out_data__Arg1Name_10;
    MR_String ll_backend__llds_out__llds_out_data__Arg2Name_11;
    MR_String ll_backend__llds_out__llds_out_data__V_12_12;
    MR_String ll_backend__llds_out__llds_out_data__V_13_13;
    MR_String ll_backend__llds_out__llds_out_data__V_14_14;
    MR_String ll_backend__llds_out__llds_out_data__V_15_15;
    MR_String ll_backend__llds_out__llds_out_data__V_16_16;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Op_5)) {
      default:
        ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Op_5)) {
          default:
            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 28:
            {
              ll_backend__llds_out__llds_out_data__OpName_9 = (MR_String) "plus";
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 29:
            {
              ll_backend__llds_out__llds_out_data__OpName_9 = (MR_String) "minus";
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 30:
            {
              ll_backend__llds_out__llds_out_data__OpName_9 = (MR_String) "times";
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 31:
            {
              ll_backend__llds_out__llds_out_data__OpName_9 = (MR_String) "divide";
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        {
          ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(ll_backend__llds_out__llds_out_data__Arg1_6, &ll_backend__llds_out__llds_out_data__Arg1Name_10);
        }
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            {
              ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(ll_backend__llds_out__llds_out_data__Arg2_7, &ll_backend__llds_out__llds_out_data__Arg2Name_11);
            }
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__V_13_13 = (MR_String) "_";
                ll_backend__llds_out__llds_out_data__V_16_16 = (MR_String) "_";
                {
                  ll_backend__llds_out__llds_out_data__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_16_16, ll_backend__llds_out__llds_out_data__Arg2Name_11);
                }
                {
                  ll_backend__llds_out__llds_out_data__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__Arg1Name_10, ll_backend__llds_out__llds_out_data__V_15_15);
                }
                {
                  ll_backend__llds_out__llds_out_data__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_13_13, ll_backend__llds_out__llds_out_data__V_14_14);
                }
                {
                  *ll_backend__llds_out__llds_out_data__Name_8 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__OpName_9, ll_backend__llds_out__llds_out_data__V_12_12);
                }
                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
              }
          }
      }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_6,
  MR_Word * ll_backend__llds_out__llds_out_data__Rval_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__Ptag_8,
  MR_Integer * ll_backend__llds_out__llds_out_data__Stag_9,
  MR_Word * ll_backend__llds_out__llds_out_data__Negated_10)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_data__Op_11;
    MR_Word ll_backend__llds_out__llds_out_data__Right_12;
    MR_Word ll_backend__llds_out__llds_out_data__V_13_13;
    MR_Word ll_backend__llds_out__llds_out_data__V_14_14;
    MR_Word ll_backend__llds_out__llds_out_data__V_15_15;
    MR_Word ll_backend__llds_out__llds_out_data__V_16_16;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
        *ll_backend__llds_out__llds_out_data__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
        ll_backend__llds_out__llds_out_data__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 3)));
        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Right_12)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            *ll_backend__llds_out__llds_out_data__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Right_12, (MR_Integer) 0)));
            ll_backend__llds_out__llds_out_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Right_12, (MR_Integer) 1)));
            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 2)));
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 1)));
                ll_backend__llds_out__llds_out_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 2)));
                ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_14_14 == (MR_Integer) 4);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_15_15, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_16_16)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            *ll_backend__llds_out__llds_out_data__Stag_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_16_16, (MR_Integer) 0)));
                            if ((ll_backend__llds_out__llds_out_data__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
                              {
                                *ll_backend__llds_out__llds_out_data__Negated_10 = (MR_Integer) 0;
                                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                              }
                            else
                            if ((ll_backend__llds_out__llds_out_data__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
                              {
                                *ll_backend__llds_out__llds_out_data__Negated_10 = (MR_Integer) 1;
                                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                              }
                            else
                              ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6,
  MR_Integer ll_backend__llds_out__llds_out_data__Ptag_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__Stag_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_data__Left_9;
    MR_Word ll_backend__llds_out__llds_out_data__Right_10;
    MR_Word ll_backend__llds_out__llds_out_data__Zero_11;
    MR_Word ll_backend__llds_out__llds_out_data__V_12_12;
    MR_Word ll_backend__llds_out__llds_out_data__V_13_13;
    MR_Word ll_backend__llds_out__llds_out_data__V_14_14;
    MR_Word ll_backend__llds_out__llds_out_data__V_15_15;
    MR_Integer ll_backend__llds_out__llds_out_data__V_16_16;
    MR_Word ll_backend__llds_out__llds_out_data__V_17_17;
    MR_Word ll_backend__llds_out__llds_out_data__V_18_18;
    MR_Integer ll_backend__llds_out__llds_out_data__V_19_19;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 1)));
        ll_backend__llds_out__llds_out_data__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 2)));
        ll_backend__llds_out__llds_out_data__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 3)));
        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_12_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12))));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Left_9)) == (MR_mktag((MR_Integer) 0)));
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Left_9, (MR_Integer) 0)));
                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_13_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 0)))) == (MR_Integer) 9)));
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 2)));
                    ll_backend__llds_out__llds_out_data__Zero_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 3)));
                    {
                      ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__llds_out__llds_out_data__Rval_6, ll_backend__llds_out__llds_out_data__V_18_18);
                    }
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_14_14)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_14_14, (MR_Integer) 0)));
                            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__Ptag_7 == ll_backend__llds_out__llds_out_data__V_19_19);
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              {
                                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Zero_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Zero_11, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  {
                                    ll_backend__llds_out__llds_out_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Zero_11, (MR_Integer) 1)));
                                    ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                                    if (ll_backend__llds_out__llds_out_data__succeeded)
                                      {
                                        ll_backend__llds_out__llds_out_data__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_15_15, (MR_Integer) 0)));
                                        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_16_16 == (MR_Integer) 0);
                                        if (ll_backend__llds_out__llds_out_data__succeeded)
                                          {
                                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Right_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_10, (MR_Integer) 0)))) == (MR_Integer) 1)));
                                            if (ll_backend__llds_out__llds_out_data__succeeded)
                                              {
                                                ll_backend__llds_out__llds_out_data__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_10, (MR_Integer) 1)));
                                                ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_17_17)) == (MR_mktag((MR_Integer) 1)));
                                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                                  *ll_backend__llds_out__llds_out_data__Stag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_17_17, (MR_Integer) 0)));
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
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_5,
  MR_Word * ll_backend__llds_out__llds_out_data__Rval_6,
  MR_Integer * ll_backend__llds_out__llds_out_data__Ptag_7,
  MR_Word * ll_backend__llds_out__llds_out_data__Negated_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_data__Op_9;
    MR_Word ll_backend__llds_out__llds_out_data__Left_10;
    MR_Word ll_backend__llds_out__llds_out_data__Right_11;
    MR_Word ll_backend__llds_out__llds_out_data__V_12_12;
    MR_Word ll_backend__llds_out__llds_out_data__V_13_13;
    MR_Word ll_backend__llds_out__llds_out_data__V_14_14;
    MR_Word ll_backend__llds_out__llds_out_data__V_15_15;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__Op_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 1)));
        ll_backend__llds_out__llds_out_data__Left_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 2)));
        ll_backend__llds_out__llds_out_data__Right_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_5, (MR_Integer) 3)));
        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Left_10)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Left_10, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Left_10, (MR_Integer) 1)));
            *ll_backend__llds_out__llds_out_data__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Left_10, (MR_Integer) 2)));
            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_12_12 == (MR_Integer) 1);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Right_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_11, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_11, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_data__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_11, (MR_Integer) 2)));
                    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_13_13 == (MR_Integer) 0);
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_14_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_14_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_14_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_15_15)) == (MR_mktag((MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              {
                                *ll_backend__llds_out__llds_out_data__Ptag_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_15_15, (MR_Integer) 0)));
                                if ((ll_backend__llds_out__llds_out_data__Op_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
                                  {
                                    *ll_backend__llds_out__llds_out_data__Negated_8 = (MR_Integer) 0;
                                    ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                                  }
                                else
                                if ((ll_backend__llds_out__llds_out_data__Op_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
                                  {
                                    *ll_backend__llds_out__llds_out_data__Negated_8 = (MR_Integer) 1;
                                    ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                                  }
                                else
                                  ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                              }
                          }
                      }
                  }
              }
          }
      }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Test_6,
  MR_Word * ll_backend__llds_out__llds_out_data__Left_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__RightConst_8,
  MR_String * ll_backend__llds_out__llds_out_data__OpStr_9,
  MR_String * ll_backend__llds_out__llds_out_data__NegOpStr_10)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_data__Op_11;
    MR_Word ll_backend__llds_out__llds_out_data__Right_12;
    MR_Word ll_backend__llds_out__llds_out_data__V_13_13;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
        *ll_backend__llds_out__llds_out_data__Left_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
        ll_backend__llds_out__llds_out_data__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 3)));
        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Right_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Right_12, (MR_Integer) 1)));
            ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_13_13)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                *ll_backend__llds_out__llds_out_data__RightConst_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_13_13, (MR_Integer) 0)));
                switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Op_11)) {
                  default:
                    ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                    break;
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Op_11)) {
                      default:
                        ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                        break;
                      case (MR_Integer) 12:
                        {
                          *ll_backend__llds_out__llds_out_data__OpStr_9 = (MR_String) "MR_INT_EQ";
                          *ll_backend__llds_out__llds_out_data__NegOpStr_10 = (MR_String) "MR_INT_NE";
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 13:
                        {
                          *ll_backend__llds_out__llds_out_data__OpStr_9 = (MR_String) "MR_INT_NE";
                          *ll_backend__llds_out__llds_out_data__NegOpStr_10 = (MR_String) "MR_INT_EQ";
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 23:
                        {
                          *ll_backend__llds_out__llds_out_data__OpStr_9 = (MR_String) "MR_INT_LT";
                          *ll_backend__llds_out__llds_out_data__NegOpStr_10 = (MR_String) "MR_INT_GE";
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 24:
                        {
                          *ll_backend__llds_out__llds_out_data__OpStr_9 = (MR_String) "MR_INT_GT";
                          *ll_backend__llds_out__llds_out_data__NegOpStr_10 = (MR_String) "MR_INT_LT";
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 25:
                        {
                          *ll_backend__llds_out__llds_out_data__OpStr_9 = (MR_String) "MR_INT_LE";
                          *ll_backend__llds_out__llds_out_data__NegOpStr_10 = (MR_String) "MR_INT_GT";
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                        break;
                      case (MR_Integer) 26:
                        {
                          *ll_backend__llds_out__llds_out_data__OpStr_9 = (MR_String) "MR_INT_GE";
                          *ll_backend__llds_out__llds_out_data__NegOpStr_10 = (MR_String) "MR_INT_LT";
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                        break;
                    }
                    break;
                }
              }
          }
      }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

static MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1,
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2,
  MR_Word * ll_backend__llds_out__llds_out_data__MemRef_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ll_backend__llds_out__llds_out_data__LvalA_4;
    MR_Word ll_backend__llds_out__llds_out_data__LvalB_5;
    MR_Integer ll_backend__llds_out__llds_out_data__N_7;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;
    MR_Integer ll_backend__llds_out__llds_out_data__V_12_12;
    MR_Word ll_backend__llds_out__llds_out_data__V_13_13;
    MR_Word ll_backend__llds_out__llds_out_data__V_14_14;
    MR_Integer ll_backend__llds_out__llds_out_data__V_15_15;
    MR_Integer ll_backend__llds_out__llds_out_data__V_16_16;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__LvalA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 0)));
        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__LvalB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__HeadVar__2_2, (MR_Integer) 0)));
            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__LvalA_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__LvalA_4, (MR_Integer) 0)))) == (MR_Integer) 0)));
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__LvalA_4, (MR_Integer) 1)));
                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__LvalB_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__LvalB_5, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__LvalB_5, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_data__V_12_12 = (ll_backend__llds_out__llds_out_data__V_11_11 - ll_backend__llds_out__llds_out_data__N_7);
                    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_12_12 == (MR_Integer) 1);
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__V_16_16 = (MR_Integer) 1;
                        ll_backend__llds_out__llds_out_data__V_15_15 = (ll_backend__llds_out__llds_out_data__N_7 + ll_backend__llds_out__llds_out_data__V_16_16);
                        {
                          ll_backend__llds_out__llds_out_data__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_14_14, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_15_15));
                        }
                        {
                          ll_backend__llds_out__llds_out_data__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                          MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_13_13, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_14_14));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                          *ll_backend__llds_out__llds_out_data__MemRef_6 = base;
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_13_13));
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_6,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_7,
  MR_Word ll_backend__llds_out__llds_out_data__IsPtr_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Word ll_backend__llds_out__llds_out_data__UnboxFloat_10 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__StaticGroundFloats_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 0)));
    MR_String ll_backend__llds_out__llds_out_data__V_28_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 1)));
    MR_String ll_backend__llds_out__llds_out_data__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 2)));
    MR_Word ll_backend__llds_out__llds_out_data__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 3)));
    MR_Word ll_backend__llds_out__llds_out_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 4)));
    MR_Word ll_backend__llds_out__llds_out_data__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 5)));
    MR_Word ll_backend__llds_out__llds_out_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 6)));
    MR_Word ll_backend__llds_out__llds_out_data__V_34_34 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_40_40 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_41_41 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_42_42 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
    MR_Word ll_backend__llds_out__llds_out_data__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
    MR_Word ll_backend__llds_out__llds_out_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_6, (MR_Integer) 8)));
    MR_String ll_backend__llds_out__llds_out_data__FloatName_12;

    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__UnboxFloat_10 == (MR_Integer) 0);
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__StaticGroundFloats_11 == (MR_Integer) 1);
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(ll_backend__llds_out__llds_out_data__Rval_7, &ll_backend__llds_out__llds_out_data__FloatName_12);
          }
      }
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        MR_Word ll_backend__llds_out__llds_out_data__Cast_13;

        switch (ll_backend__llds_out__llds_out_data__IsPtr_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__llds_out__llds_out_data__Cast_13 = (MR_Integer) 13;
            break;
          case (MR_Integer) 1:
            ll_backend__llds_out__llds_out_data__Cast_13 = (MR_Integer) 11;
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_data__Cast_13);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ") ");
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "&mercury_float_const_");
        }
        {
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__FloatName_12);
        }
      }
    else
      {
        switch (ll_backend__llds_out__llds_out_data__IsPtr_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Integer) 11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ") ");
              }
            }
            break;
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "MR_float_to_word(");
        }
        {
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_7);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_as_word_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    {
      ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 0);
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_float_rval_as_data_ptr_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    {
      ll_backend__llds_out__llds_out_data__output_float_rval_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1);
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Module0_6,
  MR_String ll_backend__llds_out__llds_out_data__Name_7,
  MR_Integer ll_backend__llds_out__llds_out_data__Arity_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Module0_6)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ll_backend__llds_out__llds_out_data__Module_10;
    MR_String ll_backend__llds_out__llds_out_data__ModuleStr_11;
    MR_String ll_backend__llds_out__llds_out_data__V_15_15;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Module0_6, (MR_Integer) 0)));
        ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__V_15_15, (MR_String) "") == 0);
      }
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__Module_10 = mdbcomp__builtin_modules__mercury_public_builtin_module_0_f_0();
      }
    else
      ll_backend__llds_out__llds_out_data__Module_10 = ll_backend__llds_out__llds_out_data__Module0_6;
    {
      ll_backend__llds_out__llds_out_data__ModuleStr_11 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__llds_out__llds_out_data__Module_10);
    }
    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__Arity_8 == (MR_Integer) 0);
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        MR_String ll_backend__llds_out__llds_out_data__Macro_12;

        ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__ModuleStr_11, (MR_String) "builtin") == 0);
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "int") == 0);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__Macro_12 = (MR_String) "MR_INT_CTOR_ADDR";
                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
              }
            else
              {
                ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "float") == 0);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__Macro_12 = (MR_String) "MR_FLOAT_CTOR_ADDR";
                    ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                  }
                else
                  {
                    ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "string") == 0);
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__Macro_12 = (MR_String) "MR_STRING_CTOR_ADDR";
                        ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                      }
                    else
                      {
                        ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "character") == 0);
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__Macro_12 = (MR_String) "MR_CHAR_CTOR_ADDR";
                            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                          }
                      }
                  }
              }
          }
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__Macro_12);
          }
        else
          {
            ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__ModuleStr_11, (MR_String) "io") == 0);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "state") == 0);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_IO_CTOR_ADDR");
                }
              }
            else
              {
                ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__ModuleStr_11, (MR_String) "bool") == 0);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "bool") == 0);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_BOOL_CTOR_ADDR");
                    }
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_CTOR0_ADDR(");
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__ModuleStr_11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__Name_7);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
              }
          }
      }
    else
      {
        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__Arity_8 == (MR_Integer) 1);
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "list") == 0);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__ModuleStr_11, (MR_String) "list") == 0);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_LIST_CTOR_ADDR");
                }
              }
            else
              {
                ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__Name_7, (MR_String) "private_builtin") == 0);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  ll_backend__llds_out__llds_out_data__succeeded = (strcmp(ll_backend__llds_out__llds_out_data__ModuleStr_11, (MR_String) "type_info") == 0);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_TYPE_INFO_CTOR_ADDR");
                    }
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_CTOR1_ADDR(");
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__ModuleStr_11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__Name_7);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
              }
          }
        else
          {
            MR_String ll_backend__llds_out__llds_out_data__V_71_71;

            {
              mercury__io__write_string_3_p_0((MR_String) "MR_CTOR_ADDR(");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__ModuleStr_11);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__Name_7);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ", ");
            }
            {
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) &ll_backend__llds_out__llds_out_data_scalar_common_1[0], ll_backend__llds_out__llds_out_data__Arity_8, &ll_backend__llds_out__llds_out_data__V_71_71);
            }
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_71_71);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
      }
  }
}

static MR_Box MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0_1(
  MR_Box ll_backend__llds_out__llds_out_data__closure_arg,
  MR_Box ll_backend__llds_out__llds_out_data__wrapper_arg_1,
  MR_Box ll_backend__llds_out__llds_out_data__wrapper_arg_2)
{
  {
    MR_Box ll_backend__llds_out__llds_out_data__wrapper_arg_3;
    MR_Box ll_backend__llds_out__llds_out_data__closure = ll_backend__llds_out__llds_out_data__closure_arg;
    MR_Integer ll_backend__llds_out__llds_out_data__conv0_LambdaHeadVar__3_62;

    {
      ll_backend__llds_out__llds_out_data__conv0_LambdaHeadVar__3_62 = ll_backend__llds_out__llds_out_data__IntroducedFrom__func__output_rval_const__1203__1_2_f_0(((MR_String) ll_backend__llds_out__llds_out_data__wrapper_arg_1), ((MR_Integer) ll_backend__llds_out__llds_out_data__wrapper_arg_2));
    }
    ll_backend__llds_out__llds_out_data__wrapper_arg_3 = ((MR_Box) (ll_backend__llds_out__llds_out_data__conv0_LambdaHeadVar__3_62));
    return ll_backend__llds_out__llds_out_data__wrapper_arg_3;
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Const_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Const_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Const_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_TRUE");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_FALSE");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__llds_out__llds_out_data__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 0)));

          {
            backend_libs__c_util__output_int_expr_3_p_0(ll_backend__llds_out__llds_out_data__N_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ll_backend__llds_out__llds_out_data__Value_9 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_data__Type_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 1)));

          {
            mercury__io__write_char_3_p_0((MR_Char) 40);
          }
          {
            ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(ll_backend__llds_out__llds_out_data__Type_10);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__Value_9);
          }
          {
            mercury__io__write_char_3_p_0((MR_Char) 41);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Float ll_backend__llds_out__llds_out_data__FloatVal_11 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 9);
              }
              {
                backend_libs__c_util__output_float_literal_3_p_0(ll_backend__llds_out__llds_out_data__FloatVal_11);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__llds_out__llds_out_data__String_12 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__V_75_75;

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_string_const(\"");
              }
              {
                backend_libs__c_util__output_quoted_string_3_p_0(ll_backend__llds_out__llds_out_data__String_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\", ");
              }
              {
                ll_backend__llds_out__llds_out_data__V_75_75 = mercury__string__count_utf8_code_units_1_f_0(ll_backend__llds_out__llds_out_data__String_12);
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__V_75_75);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Strings_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__Length_17;
              MR_Box ll_backend__llds_out__llds_out_data__conv1_Length_17;

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_string_const(\"");
              }
              {
                backend_libs__c_util__output_quoted_multi_string_3_p_0(ll_backend__llds_out__llds_out_data__Strings_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "\", ");
              }
              {
                ll_backend__llds_out__llds_out_data__conv1_Length_17 = mercury__list__foldl_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &ll_backend__llds_out__llds_out_data_scalar_common_5[0], ll_backend__llds_out__llds_out_data__Strings_13, ((MR_Box) ((MR_Integer) 0)));
              }
              ll_backend__llds_out__llds_out_data__Length_17 = ((MR_Integer) ll_backend__llds_out__llds_out_data__conv1_Length_17);
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Length_17);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_data__CodeAddress_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_code_addr__output_code_addr_3_p_0(ll_backend__llds_out__llds_out_data__CodeAddress_18);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_data__DataId_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__MaybeOffset_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_6, (MR_Integer) 2)));

              if ((ll_backend__llds_out__llds_out_data__MaybeOffset_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_Integer ll_backend__llds_out__llds_out_data__TypeNum_21;
                  MR_Integer ll_backend__llds_out__llds_out_data__CellNum_22;
                  MR_Word ll_backend__llds_out__llds_out_data__V_41_41;

                  ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__DataId_19)) == (MR_mktag((MR_Integer) 2)));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    {
                      ll_backend__llds_out__llds_out_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__DataId_19, (MR_Integer) 0)));
                      ll_backend__llds_out__llds_out_data__CellNum_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__DataId_19, (MR_Integer) 1)));
                      ll_backend__llds_out__llds_out_data__TypeNum_21 = (MR_Integer) ll_backend__llds_out__llds_out_data__V_41_41;
                      ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                    }
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_COMMON(");
                      }
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__TypeNum_21);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ",");
                      }
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__CellNum_22);
                      }
                      {
                        mercury__io__write_string_3_p_0((MR_String) ")");
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__llds_out__llds_out_data__Module_25;
                      MR_String ll_backend__llds_out__llds_out_data__Name_26;
                      MR_Integer ll_backend__llds_out__llds_out_data__Arity_27;
                      MR_Word ll_backend__llds_out__llds_out_data__RttiId_23;
                      MR_Word ll_backend__llds_out__llds_out_data__Ctor_24;

                      ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__DataId_19)) == (MR_mktag((MR_Integer) 0)));
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__RttiId_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__DataId_19, (MR_Integer) 0)));
                          {
                            ll_backend__llds_out__llds_out_data__succeeded = backend_libs__rtti__rtti_id_emits_type_ctor_info_2_p_0(ll_backend__llds_out__llds_out_data__RttiId_23, &ll_backend__llds_out__llds_out_data__Ctor_24);
                          }
                          if (ll_backend__llds_out__llds_out_data__succeeded)
                            {
                              ll_backend__llds_out__llds_out_data__Module_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Ctor_24, (MR_Integer) 0)));
                              ll_backend__llds_out__llds_out_data__Name_26 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Ctor_24, (MR_Integer) 1)));
                              ll_backend__llds_out__llds_out_data__Arity_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Ctor_24, (MR_Integer) 2)));
                              {
                                ll_backend__llds_out__llds_out_data__succeeded = backend_libs__name_mangle__sym_name_doesnt_need_mangling_1_p_0(ll_backend__llds_out__llds_out_data__Module_25);
                              }
                              if (ll_backend__llds_out__llds_out_data__succeeded)
                                {
                                  ll_backend__llds_out__llds_out_data__succeeded = backend_libs__name_mangle__name_doesnt_need_mangling_1_p_0(ll_backend__llds_out__llds_out_data__Name_26);
                                }
                            }
                        }
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__output_type_ctor_addr_5_p_0(ll_backend__llds_out__llds_out_data__Module_25, ll_backend__llds_out__llds_out_data__Name_26, ll_backend__llds_out__llds_out_data__Arity_27);
                        }
                      else
                        {
                          {
                            ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 11);
                          }
                          {
                            ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__DataId_19);
                          }
                        }
                    }
                }
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_data__Offset_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MaybeOffset_20, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "((");
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0((MR_Integer) 11);
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__DataId_19);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ") + ");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Offset_28);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__MemRef_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_22,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_23,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_24,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_25)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__MemRef_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__llds_out__llds_out_data__Rval_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__MemRef_12, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_37, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_22, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_23, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_24, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_25);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_data__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MemRef_12, (MR_Integer) 0)));

          {
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_18, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_22, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_23, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_24, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_25);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_data__BaseRval_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__MemRef_12, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_data__OffsetRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__MemRef_12, (MR_Integer) 2)));
          MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_28_28;
          MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_29_29;
          MR_Word ll_backend__llds_out__llds_out_data__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__MemRef_12, (MR_Integer) 1)));

          {
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__BaseRval_19, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_22, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_28_28, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_24, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_29_29);
          }
          {
            ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__OffsetRval_21, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_28_28, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_23, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_29_29, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_25);
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_12_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_1,
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2,
  MR_Word * ll_backend__llds_out__llds_out_data__HeadVar__3_3,
  MR_Integer ll_backend__llds_out__llds_out_data__Count_4,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_5,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_6,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_7,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_9,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_10)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_data__succeeded;

        if ((ll_backend__llds_out__llds_out_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__llds_out__llds_out_data__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_10 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_9;
            *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_8 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_7;
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_data__Rval_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word ll_backend__llds_out__llds_out_data__Rvals_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__HeadVar__2_2, (MR_Integer) 1)));

            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__Count_4 > (MR_Integer) 0);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_43_43;
                MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44_44;
                MR_Integer ll_backend__llds_out__llds_out_data__V_46_46;

                {
                  ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_1, ll_backend__llds_out__llds_out_data__Rval_27, ll_backend__llds_out__llds_out_data__FirstIndent_5, ll_backend__llds_out__llds_out_data__LaterIndent_6, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_7, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_43_43, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_9, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44_44);
                }
                ll_backend__llds_out__llds_out_data__V_46_46 = (ll_backend__llds_out__llds_out_data__Count_4 - (MR_Integer) 1);
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_data__Rvals_28;
                  MR_Integer ll_backend__llds_out__llds_out_data__Count__tmp_copy_4 = ll_backend__llds_out__llds_out_data__V_46_46;
                  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0__tmp_copy_7 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_43_43;
                  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0__tmp_copy_9 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44_44;

                  ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_9 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0__tmp_copy_9;
                  ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_7 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0__tmp_copy_7;
                  ll_backend__llds_out__llds_out_data__Count_4 = ll_backend__llds_out__llds_out_data__Count__tmp_copy_4;
                  ll_backend__llds_out__llds_out_data__HeadVar__2_2 = ll_backend__llds_out__llds_out_data__HeadVar__2__tmp_copy_2;
                }
                continue;
              }
            else
              {
                *ll_backend__llds_out__llds_out_data__HeadVar__3_3 = ll_backend__llds_out__llds_out_data__HeadVar__2_2;
                *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_10 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_9;
                *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_8 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_7;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_1,
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_3,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_4,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_5,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_6,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_7,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_data__succeeded;

        if ((ll_backend__llds_out__llds_out_data__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_8 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_7;
            *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_6 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_5;
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_data__LeftOverRvals_32;
            MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_40_40;
            MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_41_41;

            {
              ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_count_12_p_0(ll_backend__llds_out__llds_out_data__Info_1, ll_backend__llds_out__llds_out_data__HeadVar__2_2, &ll_backend__llds_out__llds_out_data__LeftOverRvals_32, (MR_Integer) 1000, ll_backend__llds_out__llds_out_data__FirstIndent_3, ll_backend__llds_out__llds_out_data__LaterIndent_4, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_5, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_40_40, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_7, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_41_41);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2__tmp_copy_2 = ll_backend__llds_out__llds_out_data__LeftOverRvals_32;
              MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0__tmp_copy_5 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_40_40;
              MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0__tmp_copy_7 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_41_41;

              ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_7 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0__tmp_copy_7;
              ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_5 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0__tmp_copy_5;
              ll_backend__llds_out__llds_out_data__HeadVar__2_2 = ll_backend__llds_out__llds_out_data__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__llds_out__llds_out_data__succeeded;

        switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Rval_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Lval_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 0)));

              {
                ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Lval_18, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);
              }
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
              MR_Word ll_backend__llds_out__llds_out_data__SubRval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__llds_out__llds_out_data__Rval__tmp_copy_12 = ll_backend__llds_out__llds_out_data__SubRval_21;

                ll_backend__llds_out__llds_out_data__Rval_12 = ll_backend__llds_out__llds_out_data__Rval__tmp_copy_12;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41;
                  *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__llds_out__llds_out_data__Const_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 1)));
                  MR_Word ll_backend__llds_out__llds_out_data__CodeAddress_24;

                  ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    {
                      ll_backend__llds_out__llds_out_data__CodeAddress_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 1)));
                      {
                        ll_backend__llds_out__llds_out_code_addr__output_record_code_addr_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__CodeAddress_24, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);
                      }
                    }
                  else
                    {
                      MR_Word ll_backend__llds_out__llds_out_data__DataId_25;
                      MR_Word ll_backend__llds_out__llds_out_data__V_26_26;

                      ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__DataId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 1)));
                          ll_backend__llds_out__llds_out_data__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 2)));
                          {
                            ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__DataId_25, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);
                          }
                        }
                      else
                        {
                          MR_Float ll_backend__llds_out__llds_out_data__FloatVal_27;

                          ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Const_23)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 0)))) == (MR_Integer) 0)));
                          if (ll_backend__llds_out__llds_out_data__succeeded)
                            {
                              ll_backend__llds_out__llds_out_data__FloatVal_27 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Const_23, (MR_Integer) 1)));
                              {
                                MR_Word ll_backend__llds_out__llds_out_data__UnboxedFloat_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__StaticGroundFloats_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 0)));
                                MR_String ll_backend__llds_out__llds_out_data__V_128_128 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 1)));
                                MR_String ll_backend__llds_out__llds_out_data__V_129_129 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 2)));
                                MR_Word ll_backend__llds_out__llds_out_data__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 3)));
                                MR_Word ll_backend__llds_out__llds_out_data__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 4)));
                                MR_Word ll_backend__llds_out__llds_out_data__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 5)));
                                MR_Word ll_backend__llds_out__llds_out_data__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 6)));
                                MR_Word ll_backend__llds_out__llds_out_data__V_134_134 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_135_135 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_136_136 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_137_137 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_138_138 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_139_139 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_140_140 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_141_141 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_142_142 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_143_143 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_145_145 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                                MR_Word ll_backend__llds_out__llds_out_data__V_146_146 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                                MR_Word ll_backend__llds_out__llds_out_data__V_147_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 8)));

                                ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__UnboxedFloat_28 == (MR_Integer) 0);
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__StaticGroundFloats_29 == (MR_Integer) 1);
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  {
                                    MR_String ll_backend__llds_out__llds_out_data__FloatName_30;
                                    MR_Word ll_backend__llds_out__llds_out_data__FloatLabel_31;

                                    {
                                      ll_backend__llds_out__llds_out_data__float_literal_name_2_p_0(ll_backend__llds_out__llds_out_data__FloatVal_27, &ll_backend__llds_out__llds_out_data__FloatName_30);
                                    }
                                    {
                                      ll_backend__llds_out__llds_out_data__FloatLabel_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                                      MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__FloatLabel_31, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_data__FloatName_30));
                                    }
                                    {
                                      ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_data__FloatLabel_31, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43);
                                    }
                                    if (ll_backend__llds_out__llds_out_data__succeeded)
                                      {
                                        *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43;
                                        *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41;
                                      }
                                    else
                                      {
                                        MR_String ll_backend__llds_out__llds_out_data__FloatString_32;
                                        MR_Word ll_backend__llds_out__llds_out_data__V_93_93;
                                        MR_Word ll_backend__llds_out__llds_out_data__V_96_96;
                                        MR_Word ll_backend__llds_out__llds_out_data__V_98_98;
                                        MR_Word ll_backend__llds_out__llds_out_data__V_99_99;
                                        MR_Word ll_backend__llds_out__llds_out_data__V_101_101;

                                        {
                                          ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_data__FloatLabel_31, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);
                                        }
                                        {
                                          ll_backend__llds_out__llds_out_data__FloatString_32 = backend_libs__c_util__make_float_literal_1_f_0(ll_backend__llds_out__llds_out_data__FloatVal_27);
                                        }
                                        {
                                          ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41);
                                        }
                                        *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = (ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41 + (MR_Integer) 1);
                                        {
                                          ll_backend__llds_out__llds_out_data__V_101_101 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_101_101, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_data__FloatString_32));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_101_101, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_out__llds_out_data_scalar_common_3[0])));
                                        }
                                        {
                                          ll_backend__llds_out__llds_out_data__V_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_99_99, 0) = ((MR_Box) ((MR_String) " = "));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_99_99, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_101_101));
                                        }
                                        {
                                          ll_backend__llds_out__llds_out_data__V_98_98 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_98_98, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_data__FloatName_30));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_98_98, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_99_99));
                                        }
                                        {
                                          ll_backend__llds_out__llds_out_data__V_96_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_96_96, 0) = ((MR_Box) ((MR_String) "mercury_float_const_"));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_96_96, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_98_98));
                                        }
                                        {
                                          ll_backend__llds_out__llds_out_data__V_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_93_93, 0) = ((MR_Box) ((MR_String) "static const MR_Float "));
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_93_93, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_96_96));
                                        }
                                        {
                                          mercury__io__write_strings_3_p_0(ll_backend__llds_out__llds_out_data__V_93_93);
                                        }
                                      }
                                  }
                                else
                                  {
                                    *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43;
                                    *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41;
                                  }
                              }
                            }
                          else
                            {
                              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43;
                              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41;
                            }
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__llds_out__llds_out_data__SubRvalA_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 2)));
                  MR_Word ll_backend__llds_out__llds_out_data__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__llds_out__llds_out_data__Rval__tmp_copy_12 = ll_backend__llds_out__llds_out_data__SubRvalA_34;

                    ll_backend__llds_out__llds_out_data__Rval_12 = ll_backend__llds_out__llds_out_data__Rval__tmp_copy_12;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__llds_out__llds_out_data__Op_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 1)));
                  MR_Word ll_backend__llds_out__llds_out_data__SubRvalB_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 3)));
                  MR_Word ll_backend__llds_out__llds_out_data__Category_37;
                  MR_String ll_backend__llds_out__llds_out_data__OpStr_38;
                  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_50_50;
                  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_51_51;
                  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53;
                  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54;
                  MR_Word ll_backend__llds_out__llds_out_data__SubRvalA_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 2)));

                  {
                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__SubRvalA_126, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_50_50, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_51_51);
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__SubRvalB_36, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_50_50, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_51_51, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54);
                  }
                  {
                    backend_libs__c_util__binop_category_string_3_p_0(ll_backend__llds_out__llds_out_data__Op_35, &ll_backend__llds_out__llds_out_data__Category_37, &ll_backend__llds_out__llds_out_data__OpStr_38);
                  }
                  ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__Category_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    {
                      MR_Word ll_backend__llds_out__llds_out_data__UnboxFloat_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__StaticGroundFloats_117 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_169_169 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 0)));
                      MR_String ll_backend__llds_out__llds_out_data__V_170_170 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 1)));
                      MR_String ll_backend__llds_out__llds_out_data__V_171_171 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 2)));
                      MR_Word ll_backend__llds_out__llds_out_data__V_172_172 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 3)));
                      MR_Word ll_backend__llds_out__llds_out_data__V_173_173 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 4)));
                      MR_Word ll_backend__llds_out__llds_out_data__V_174_174 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 5)));
                      MR_Word ll_backend__llds_out__llds_out_data__V_175_175 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 6)));
                      MR_Word ll_backend__llds_out__llds_out_data__V_176_176 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_177_177 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_178_178 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_179_179 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_180_180 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_181_181 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_182_182 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_183_183 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_184_184 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_185_185 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_187_187 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
                      MR_Word ll_backend__llds_out__llds_out_data__V_188_188 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
                      MR_Word ll_backend__llds_out__llds_out_data__V_189_189 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_11, (MR_Integer) 8)));
                      MR_String ll_backend__llds_out__llds_out_data__FloatName_115;

                      ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__UnboxFloat_39 == (MR_Integer) 0);
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__StaticGroundFloats_117 == (MR_Integer) 1);
                          if (ll_backend__llds_out__llds_out_data__succeeded)
                            {
                              ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(ll_backend__llds_out__llds_out_data__Op_35, ll_backend__llds_out__llds_out_data__SubRvalA_126, ll_backend__llds_out__llds_out_data__SubRvalB_36, &ll_backend__llds_out__llds_out_data__FloatName_115);
                            }
                        }
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          MR_Word ll_backend__llds_out__llds_out_data__FloatLabel_114;

                          {
                            ll_backend__llds_out__llds_out_data__FloatLabel_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__FloatLabel_114, 0) = ((MR_Box) (ll_backend__llds_out__llds_out_data__FloatName_115));
                          }
                          {
                            ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_data__FloatLabel_114, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54);
                          }
                          if (ll_backend__llds_out__llds_out_data__succeeded)
                            {
                              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54;
                              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53;
                            }
                          else
                            {
                              {
                                ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_data__FloatLabel_114, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);
                              }
                              {
                                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53);
                              }
                              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = (ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53 + (MR_Integer) 1);
                              {
                                mercury__io__write_string_3_p_0((MR_String) "static const ");
                              }
                              {
                                ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0((MR_Integer) 9);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) " mercury_float_const_");
                              }
                              {
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__FloatName_115);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) " = ");
                              }
                              {
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__SubRvalA_126, (MR_Integer) 9);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) " ");
                              }
                              {
                                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__OpStr_38);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) " ");
                              }
                              {
                                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__SubRvalB_36, (MR_Integer) 9);
                              }
                              {
                                mercury__io__write_string_3_p_0((MR_String) ";\n");
                              }
                            }
                        }
                      else
                        {
                          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54;
                          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53;
                        }
                    }
                  else
                    {
                      *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_54_54;
                      *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_53_53;
                    }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__llds_out__llds_out_data__MemRef_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_12, (MR_Integer) 1)));

                  {
                    ll_backend__llds_out__llds_out_data__output_record_mem_ref_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__MemRef_40, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_41, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_42, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_43, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_44);
                  }
                }
                break;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_reg_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__RegType_5,
  MR_Integer ll_backend__llds_out__llds_out_data__N_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_String ll_backend__llds_out__llds_out_data__V_10_10;

    {
      ll_backend__llds_out__llds_out_data__V_10_10 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(ll_backend__llds_out__llds_out_data__RegType_5, ll_backend__llds_out__llds_out_data__N_6);
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_10_10);
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_6,
  MR_Word ll_backend__llds_out__llds_out_data__StackType_7,
  MR_Integer ll_backend__llds_out__llds_out_data__SlotNum_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Word ll_backend__llds_out__llds_out_data__Lval_10;

    switch (ll_backend__llds_out__llds_out_data__StackType_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__llds_out__llds_out_data__V_13_13 = (ll_backend__llds_out__llds_out_data__SlotNum_8 + (MR_Integer) 1);

          {
            ll_backend__llds_out__llds_out_data__Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_10, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_13_13));
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Integer ll_backend__llds_out__llds_out_data__V_15_15 = (ll_backend__llds_out__llds_out_data__SlotNum_8 + (MR_Integer) 1);

          {
            ll_backend__llds_out__llds_out_data__Lval_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_10, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__V_15_15));
          }
        }
        break;
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "MR_dword_ptr(&(");
    }
    {
      ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Lval_10);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "))");
    }
  }
}

static void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Lval_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Lval_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 4:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_56, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_55, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_54, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_53, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_52, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_data__FieldNum_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 3)));
              MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_45_45;
              MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_46_46;
              MR_Word ll_backend__llds_out__llds_out_data__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_19, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_45_45, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, &ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_46_46);
              }
              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__FieldNum_20, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_45_45, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_46_46, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__Rval_51, ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__llds_out__llds_out_data__CGlobalVar_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_12, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__V_38_38;

              {
                ll_backend__llds_out__llds_out_data__V_38_38 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_38_38, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_38_38, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__CGlobalVar_31));
              }
              {
                ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_data__V_38_38, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34);
              }
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                }
              else
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_record_lval_decls_format\'/10", (MR_String) "global_var_ref");
                    return;
                  }
                }
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
          case (MR_Integer) 12:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_33 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_32;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_35 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_34;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1,
  MR_Integer ll_backend__llds_out__llds_out_data__CellNum_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__TypeNum_5 = (MR_Integer) ll_backend__llds_out__llds_out_data__HeadVar__1_1;
    MR_String ll_backend__llds_out__llds_out_data__V_10_10;

    {
      ll_backend__llds_out__llds_out_data__V_10_10 = backend_libs__name_mangle__mercury_vector_common_array_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_10_10);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__TypeNum_5);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) "_");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__CellNum_6);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_common_scalar_cell_array_name_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__TypeNum_4 = (MR_Integer) ll_backend__llds_out__llds_out_data__HeadVar__1_1;
    MR_String ll_backend__llds_out__llds_out_data__V_8_8;

    {
      ll_backend__llds_out__llds_out_data__V_8_8 = backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0();
    }
    {
      mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_8_8);
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__TypeNum_4);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_data_id_addr_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__DataId_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "&");
    }
    {
      ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__DataId_6);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_data_id_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__DataId_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__DataId_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__llds_out__llds_out_data__RttiId_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 0)));

          {
            ll_backend__rtti_out__output_rtti_id_3_p_0(ll_backend__llds_out__llds_out_data__RttiId_8);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_data__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_data__TablingId_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 1)));
          MR_String ll_backend__llds_out__llds_out_data__V_31_31;

          {
            ll_backend__llds_out__llds_out_data__V_31_31 = ll_backend__rtti_out__tabling_struct_data_addr_string_2_f_0(ll_backend__llds_out__llds_out_data__ProcLabel_9, ll_backend__llds_out__llds_out_data__TablingId_10);
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_31_31);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_data__TypeNum_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 0)));
          MR_Integer ll_backend__llds_out__llds_out_data__CellNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 1)));
          MR_Integer ll_backend__llds_out__llds_out_data__TypeNum_82 = (MR_Integer) ll_backend__llds_out__llds_out_data__TypeNum_11;
          MR_String ll_backend__llds_out__llds_out_data__V_84_84;

          {
            ll_backend__llds_out__llds_out_data__V_84_84 = backend_libs__name_mangle__mercury_scalar_common_array_prefix_0_f_0();
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_84_84);
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__TypeNum_82);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "[");
          }
          {
            mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__CellNum_12);
          }
          {
            mercury__io__write_string_3_p_0((MR_String) "]");
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__llds_out__llds_out_data__TypeNum_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__CellNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 2)));

              {
                ll_backend__llds_out__llds_out_data__output_common_vector_cell_array_name_4_p_0(ll_backend__llds_out__llds_out_data__TypeNum_34, ll_backend__llds_out__llds_out_data__CellNum_35);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_data__LayoutName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 1)));

              {
                ll_backend__layout_out__output_layout_name_3_p_0(ll_backend__llds_out__llds_out_data__LayoutName_13);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_data__PredProcId_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_6, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_data__TableIoEntryMap_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 5)));
              MR_Word ll_backend__llds_out__llds_out_data__LayoutSlotName_17;
              MR_String ll_backend__llds_out__llds_out_data__MangledModuleName_18;
              MR_Word ll_backend__llds_out__llds_out_data__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 0)));
              MR_String ll_backend__llds_out__llds_out_data__V_37_37 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_data__V_38_38 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 2)));
              MR_Word ll_backend__llds_out__llds_out_data__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_data__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 4)));
              MR_Word ll_backend__llds_out__llds_out_data__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 6)));
              MR_Word ll_backend__llds_out__llds_out_data__V_42_42 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_43_43 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_44_44 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_45_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_46_46 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_47_47 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_48_48 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              MR_Word ll_backend__llds_out__llds_out_data__V_55_55 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              MR_Word ll_backend__llds_out__llds_out_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 8)));
              MR_Box ll_backend__llds_out__llds_out_data__conv0_LayoutSlotName_17;
              MR_Word ll_backend__llds_out__llds_out_data__V_57_57;
              MR_String ll_backend__llds_out__llds_out_data__V_58_58;
              MR_Word ll_backend__llds_out__llds_out_data__V_59_59;
              MR_Word ll_backend__llds_out__llds_out_data__V_60_60;
              MR_Word ll_backend__llds_out__llds_out_data__V_61_61;
              MR_Word ll_backend__llds_out__llds_out_data__V_62_62;
              MR_Word ll_backend__llds_out__llds_out_data__V_63_63;
              MR_Word ll_backend__llds_out__llds_out_data__V_64_64;
              MR_Word ll_backend__llds_out__llds_out_data__V_65_65;
              MR_Word ll_backend__llds_out__llds_out_data__V_66_66;
              MR_Word ll_backend__llds_out__llds_out_data__V_67_67;
              MR_Word ll_backend__llds_out__llds_out_data__V_68_68;
              MR_Word ll_backend__llds_out__llds_out_data__V_69_69;
              MR_Word ll_backend__llds_out__llds_out_data__V_70_70;
              MR_Word ll_backend__llds_out__llds_out_data__V_71_71;
              MR_Word ll_backend__llds_out__llds_out_data__V_72_72;
              MR_Word ll_backend__llds_out__llds_out_data__V_73_73;
              MR_Word ll_backend__llds_out__llds_out_data__V_74_74;
              MR_Word ll_backend__llds_out__llds_out_data__V_75_75;
              MR_Word ll_backend__llds_out__llds_out_data__V_76_76;
              MR_Word ll_backend__llds_out__llds_out_data__V_77_77;

              {
                mercury__map__lookup_3_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, (MR_Word) &ll_backend__layout__ll_backend__layout__type_ctor_info_layout_slot_name_0, ll_backend__llds_out__llds_out_data__TableIoEntryMap_16, ((MR_Box) (ll_backend__llds_out__llds_out_data__PredProcId_15)), &ll_backend__llds_out__llds_out_data__conv0_LayoutSlotName_17);
              }
              ll_backend__llds_out__llds_out_data__LayoutSlotName_17 = ((MR_Word) ll_backend__llds_out__llds_out_data__conv0_LayoutSlotName_17);
              ll_backend__llds_out__llds_out_data__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 0)));
              ll_backend__llds_out__llds_out_data__MangledModuleName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 1)));
              ll_backend__llds_out__llds_out_data__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 2)));
              ll_backend__llds_out__llds_out_data__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 3)));
              ll_backend__llds_out__llds_out_data__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 4)));
              ll_backend__llds_out__llds_out_data__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 5)));
              ll_backend__llds_out__llds_out_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 6)));
              ll_backend__llds_out__llds_out_data__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_64_64 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_67_67 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_69_69 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_71_71 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 8)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_72_72 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 9)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 10)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 11)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_75_75 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 12)) & (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_76_76 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 7)))) >> (MR_Integer) 13)) & (MR_Integer) 7);
              ll_backend__llds_out__llds_out_data__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Info_5, (MR_Integer) 8)));
              {
                ll_backend__layout_out__output_layout_slot_id_5_p_0((MR_Integer) 1, ll_backend__llds_out__llds_out_data__MangledModuleName_18, ll_backend__llds_out__llds_out_data__LayoutSlotName_17);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_11,
  MR_Word ll_backend__llds_out__llds_out_data__DataId_12,
  MR_String ll_backend__llds_out__llds_out_data__FirstIndent_13,
  MR_String ll_backend__llds_out__llds_out_data__LaterIndent_14,
  MR_Integer ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29,
  MR_Integer * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__DataId_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__llds_out__llds_out_data__RttiId_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__DataId_12, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_data__DeclId_27;

          {
            ll_backend__llds_out__llds_out_data__DeclId_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DeclId_27, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
            MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DeclId_27, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__RttiId_26));
          }
          {
            ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_data__DeclId_27, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31);
          }
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29;
            }
          else
            {
              {
                ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_data__DeclId_27, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32);
              }
              {
                ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29);
              }
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = (ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29 + (MR_Integer) 1);
              {
                ll_backend__rtti_out__output_rtti_id_storage_type_name_no_decl_5_p_0(ll_backend__llds_out__llds_out_data__Info_11, ll_backend__llds_out__llds_out_data__RttiId_26, (MR_Integer) 0);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ";\n");
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29;
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31;
        }
        break;
      case (MR_Integer) 2:
        {
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29;
          *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_12, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_data__LayoutName_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DataId_12, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__DeclId_51;

              {
                ll_backend__llds_out__llds_out_data__DeclId_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DeclId_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__DeclId_51, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__LayoutName_28));
              }
              {
                ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_util__decl_set_is_member_2_p_0(ll_backend__llds_out__llds_out_data__DeclId_51, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31);
              }
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31;
                  *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29;
                }
              else
                {
                  {
                    ll_backend__llds_out__llds_out_util__decl_set_insert_3_p_0(ll_backend__llds_out__llds_out_data__DeclId_51, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32);
                  }
                  {
                    ll_backend__llds_out__llds_out_util__output_indent_5_p_0(ll_backend__llds_out__llds_out_data__FirstIndent_13, ll_backend__llds_out__llds_out_data__LaterIndent_14, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29);
                  }
                  *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = (ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29 + (MR_Integer) 1);
                  {
                    ll_backend__layout_out__output_layout_name_storage_type_name_4_p_0(ll_backend__llds_out__llds_out_data__LayoutName_28, (MR_Integer) 0);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ";\n");
                  }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_30 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_N_0_29;
              *ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_32 = ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_31;
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_data_id_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_7,
  MR_Word ll_backend__llds_out__llds_out_data__DataId_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__output_record_data_id_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_7, ll_backend__llds_out__llds_out_data__DataId_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_data__V_11_11, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13);
    }
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__float_const_expr_name_2_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Expr_3,
  MR_String * ll_backend__llds_out__llds_out_data__Name_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
    MR_Float ll_backend__llds_out__llds_out_data__Float_5;
    MR_Word ll_backend__llds_out__llds_out_data__V_9_9;

    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Expr_3, (MR_Integer) 1)));
        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_9_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_9_9, (MR_Integer) 0)))) == (MR_Integer) 0)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          ll_backend__llds_out__llds_out_data__Float_5 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_9_9, (MR_Integer) 1)));
      }
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        MR_String ll_backend__llds_out__llds_out_data__FloatName0_12;
        MR_String ll_backend__llds_out__llds_out_data__FloatName1_13;
        MR_String ll_backend__llds_out__llds_out_data__FloatName2_14;

        {
          ll_backend__llds_out__llds_out_data__FloatName0_12 = backend_libs__c_util__make_float_literal_1_f_0(ll_backend__llds_out__llds_out_data__Float_5);
        }
        {
          mercury__string__replace_all_4_p_0(ll_backend__llds_out__llds_out_data__FloatName0_12, (MR_String) ".", (MR_String) "pt", &ll_backend__llds_out__llds_out_data__FloatName1_13);
        }
        {
          mercury__string__replace_all_4_p_0(ll_backend__llds_out__llds_out_data__FloatName1_13, (MR_String) "+", (MR_String) "plus", &ll_backend__llds_out__llds_out_data__FloatName2_14);
        }
        {
          mercury__string__replace_all_4_p_0(ll_backend__llds_out__llds_out_data__FloatName2_14, (MR_String) "-", (MR_String) "neg", ll_backend__llds_out__llds_out_data__Name_4);
        }
        ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ll_backend__llds_out__llds_out_data__Op_6;
        MR_Word ll_backend__llds_out__llds_out_data__Arg1_7;
        MR_Word ll_backend__llds_out__llds_out_data__Arg2_8;

        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Expr_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Expr_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__Op_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Expr_3, (MR_Integer) 1)));
            ll_backend__llds_out__llds_out_data__Arg1_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Expr_3, (MR_Integer) 2)));
            ll_backend__llds_out__llds_out_data__Arg2_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Expr_3, (MR_Integer) 3)));
            {
              ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__float_const_binop_expr_name_4_p_0(ll_backend__llds_out__llds_out_data__Op_6, ll_backend__llds_out__llds_out_data__Arg1_7, ll_backend__llds_out__llds_out_data__Arg2_8, ll_backend__llds_out__llds_out_data__Name_4);
            }
          }
      }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

MR_Word MR_CALL 
ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Word ll_backend__llds_out__llds_out_data__HeadVar__2_2 = ((&ll_backend__llds_out__llds_out_data_vector_common_2[0 + ll_backend__llds_out__llds_out_data__HeadVar__1_1]))->ll_backend__llds_out__llds_out_data__vector_common_type_2_0__vct_2_f_0;

    return ll_backend__llds_out__llds_out_data__HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_tag_3_p_0(
  MR_Integer ll_backend__llds_out__llds_out_data__Tag_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "MR_mktag(");
    }
    {
      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ")");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_test_rval_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Test_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Word ll_backend__llds_out__llds_out_data__Left_8;
    MR_Integer ll_backend__llds_out__llds_out_data__RightConst_9;
    MR_String ll_backend__llds_out__llds_out_data__OpStr_10;
    MR_String ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(ll_backend__llds_out__llds_out_data__Test_6, &ll_backend__llds_out__llds_out_data__Left_8, &ll_backend__llds_out__llds_out_data__RightConst_9, &ll_backend__llds_out__llds_out_data__OpStr_10, &ll_backend__llds_out__llds_out_data__V_11_11);
    }
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        {
          mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__OpStr_10);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) "(");
        }
        {
          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Left_8);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ",");
        }
        {
          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__RightConst_9);
        }
        {
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
      }
    else
      {
        MR_String ll_backend__llds_out__llds_out_data__NegOpStr_14;
        MR_Word ll_backend__llds_out__llds_out_data__Left_153;
        MR_Integer ll_backend__llds_out__llds_out_data__RightConst_154;
        MR_Word ll_backend__llds_out__llds_out_data__InnerTest_12;
        MR_Word ll_backend__llds_out__llds_out_data__V_31_31;
        MR_String ll_backend__llds_out__llds_out_data__V_13_13;

        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            ll_backend__llds_out__llds_out_data__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
            ll_backend__llds_out__llds_out_data__InnerTest_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_31_31 == (MR_Integer) 7);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_int_cmp_5_p_0(ll_backend__llds_out__llds_out_data__InnerTest_12, &ll_backend__llds_out__llds_out_data__Left_153, &ll_backend__llds_out__llds_out_data__RightConst_154, &ll_backend__llds_out__llds_out_data__V_13_13, &ll_backend__llds_out__llds_out_data__NegOpStr_14);
              }
          }
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            {
              mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__NegOpStr_14);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) "(");
            }
            {
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Left_153);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ",");
            }
            {
              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__RightConst_154);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            MR_Word ll_backend__llds_out__llds_out_data__Rval_15;
            MR_Integer ll_backend__llds_out__llds_out_data__Ptag_16;
            MR_Word ll_backend__llds_out__llds_out_data__Negated_17;

            {
              ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(ll_backend__llds_out__llds_out_data__Test_6, &ll_backend__llds_out__llds_out_data__Rval_15, &ll_backend__llds_out__llds_out_data__Ptag_16, &ll_backend__llds_out__llds_out_data__Negated_17);
            }
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                switch (ll_backend__llds_out__llds_out_data__Negated_17) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TEST(");
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TESTR(");
                      }
                    }
                    break;
                }
                {
                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_15);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ",");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Ptag_16);
                }
                {
                  mercury__io__write_string_3_p_0((MR_String) ")");
                }
              }
            else
              {
                MR_Word ll_backend__llds_out__llds_out_data__Rval_148;
                MR_Integer ll_backend__llds_out__llds_out_data__Ptag_149;
                MR_Word ll_backend__llds_out__llds_out_data__Negated_150;
                MR_Word ll_backend__llds_out__llds_out_data__V_51_51;
                MR_Word ll_backend__llds_out__llds_out_data__InnerTest_118;

                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_data__InnerTest_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
                    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_51_51 == (MR_Integer) 7);
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(ll_backend__llds_out__llds_out_data__InnerTest_118, &ll_backend__llds_out__llds_out_data__Rval_148, &ll_backend__llds_out__llds_out_data__Ptag_149, &ll_backend__llds_out__llds_out_data__Negated_150);
                      }
                  }
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    switch (ll_backend__llds_out__llds_out_data__Negated_150) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TESTR(");
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        {
                          {
                            mercury__io__write_string_3_p_0((MR_String) "MR_PTAG_TEST(");
                          }
                        }
                        break;
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_148);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ",");
                    }
                    {
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Ptag_149);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                else
                  {
                    MR_Integer ll_backend__llds_out__llds_out_data__Stag_19;
                    MR_Word ll_backend__llds_out__llds_out_data__Rval_143;
                    MR_Integer ll_backend__llds_out__llds_out_data__Ptag_144;
                    MR_Word ll_backend__llds_out__llds_out_data__Right_18;
                    MR_Word ll_backend__llds_out__llds_out_data__V_62_62;
                    MR_Word ll_backend__llds_out__llds_out_data__V_63_63;
                    MR_Word ll_backend__llds_out__llds_out_data__Left_119;
                    MR_Word ll_backend__llds_out__llds_out_data__V_155_155;

                    ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 3)));
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_data__Left_119 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
                        ll_backend__llds_out__llds_out_data__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 3)));
                        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_63_63 = (MR_Integer) 0;
                            {
                              ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(ll_backend__llds_out__llds_out_data__Left_119, &ll_backend__llds_out__llds_out_data__Rval_143, &ll_backend__llds_out__llds_out_data__Ptag_144, &ll_backend__llds_out__llds_out_data__V_155_155);
                            }
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              {
                                ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_63_63 == ll_backend__llds_out__llds_out_data__V_155_155);
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  {
                                    ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(ll_backend__llds_out__llds_out_data__Right_18, ll_backend__llds_out__llds_out_data__Rval_143, ll_backend__llds_out__llds_out_data__Ptag_144, &ll_backend__llds_out__llds_out_data__Stag_19);
                                  }
                              }
                          }
                      }
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_RTAGS_TEST(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_143);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ",");
                        }
                        {
                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Ptag_144);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ",");
                        }
                        {
                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Stag_19);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                    else
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__Rval_136;
                        MR_Integer ll_backend__llds_out__llds_out_data__Ptag_137;
                        MR_Integer ll_backend__llds_out__llds_out_data__Stag_140;
                        MR_Word ll_backend__llds_out__llds_out_data__V_75_75;
                        MR_Word ll_backend__llds_out__llds_out_data__V_76_76;
                        MR_Word ll_backend__llds_out__llds_out_data__V_77_77;
                        MR_Word ll_backend__llds_out__llds_out_data__Left_120;
                        MR_Word ll_backend__llds_out__llds_out_data__InnerTest_121;
                        MR_Word ll_backend__llds_out__llds_out_data__Right_122;
                        MR_Word ll_backend__llds_out__llds_out_data__V_156_156;

                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__InnerTest_121 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
                            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_75_75 == (MR_Integer) 7);
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              {
                                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__InnerTest_121)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__InnerTest_121, (MR_Integer) 0)))) == (MR_Integer) 3)));
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  {
                                    ll_backend__llds_out__llds_out_data__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__InnerTest_121, (MR_Integer) 1)));
                                    ll_backend__llds_out__llds_out_data__Left_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__InnerTest_121, (MR_Integer) 2)));
                                    ll_backend__llds_out__llds_out_data__Right_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__InnerTest_121, (MR_Integer) 3)));
                                    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_76_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10))));
                                    if (ll_backend__llds_out__llds_out_data__succeeded)
                                      {
                                        ll_backend__llds_out__llds_out_data__V_77_77 = (MR_Integer) 0;
                                        {
                                          ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_ptag_test_4_p_0(ll_backend__llds_out__llds_out_data__Left_120, &ll_backend__llds_out__llds_out_data__Rval_136, &ll_backend__llds_out__llds_out_data__Ptag_137, &ll_backend__llds_out__llds_out_data__V_156_156);
                                        }
                                        if (ll_backend__llds_out__llds_out_data__succeeded)
                                          {
                                            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_77_77 == ll_backend__llds_out__llds_out_data__V_156_156);
                                            if (ll_backend__llds_out__llds_out_data__succeeded)
                                              {
                                                ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_remote_stag_test_4_p_0(ll_backend__llds_out__llds_out_data__Right_122, ll_backend__llds_out__llds_out_data__Rval_136, ll_backend__llds_out__llds_out_data__Ptag_137, &ll_backend__llds_out__llds_out_data__Stag_140);
                                              }
                                          }
                                      }
                                  }
                              }
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_RTAGS_TESTR(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_136);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ",");
                            }
                            {
                              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Ptag_137);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ",");
                            }
                            {
                              mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Stag_140);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                          }
                        else
                          {
                            MR_Word ll_backend__llds_out__llds_out_data__Rval_130;
                            MR_Integer ll_backend__llds_out__llds_out_data__Ptag_131;
                            MR_Word ll_backend__llds_out__llds_out_data__Negated_132;
                            MR_Integer ll_backend__llds_out__llds_out_data__Stag_133;

                            {
                              ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(ll_backend__llds_out__llds_out_data__Test_6, &ll_backend__llds_out__llds_out_data__Rval_130, &ll_backend__llds_out__llds_out_data__Ptag_131, &ll_backend__llds_out__llds_out_data__Stag_133, &ll_backend__llds_out__llds_out_data__Negated_132);
                            }
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              {
                                switch (ll_backend__llds_out__llds_out_data__Negated_132) {
                                  default: /*NOTREACHED*/ MR_assert(0);
                                  case (MR_Integer) 0:
                                    {
                                      {
                                        mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TEST(");
                                      }
                                    }
                                    break;
                                  case (MR_Integer) 1:
                                    {
                                      {
                                        mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TESTR(");
                                      }
                                    }
                                    break;
                                }
                                {
                                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_130);
                                }
                                {
                                  mercury__io__write_string_3_p_0((MR_String) ",");
                                }
                                {
                                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Ptag_131);
                                }
                                {
                                  mercury__io__write_string_3_p_0((MR_String) ",");
                                }
                                {
                                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Stag_133);
                                }
                                {
                                  mercury__io__write_string_3_p_0((MR_String) ")");
                                }
                              }
                            else
                              {
                                MR_Word ll_backend__llds_out__llds_out_data__Rval_125;
                                MR_Integer ll_backend__llds_out__llds_out_data__Ptag_126;
                                MR_Word ll_backend__llds_out__llds_out_data__Negated_127;
                                MR_Integer ll_backend__llds_out__llds_out_data__Stag_128;
                                MR_Word ll_backend__llds_out__llds_out_data__V_102_102;
                                MR_Word ll_backend__llds_out__llds_out_data__InnerTest_123;

                                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Test_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0)))) == (MR_Integer) 2)));
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  {
                                    ll_backend__llds_out__llds_out_data__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 1)));
                                    ll_backend__llds_out__llds_out_data__InnerTest_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 2)));
                                    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_102_102 == (MR_Integer) 7);
                                    if (ll_backend__llds_out__llds_out_data__succeeded)
                                      {
                                        ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_local_stag_test_5_p_0(ll_backend__llds_out__llds_out_data__InnerTest_123, &ll_backend__llds_out__llds_out_data__Rval_125, &ll_backend__llds_out__llds_out_data__Ptag_126, &ll_backend__llds_out__llds_out_data__Stag_128, &ll_backend__llds_out__llds_out_data__Negated_127);
                                      }
                                  }
                                if (ll_backend__llds_out__llds_out_data__succeeded)
                                  {
                                    switch (ll_backend__llds_out__llds_out_data__Negated_127) {
                                      default: /*NOTREACHED*/ MR_assert(0);
                                      case (MR_Integer) 0:
                                        {
                                          {
                                            mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TESTR(");
                                          }
                                        }
                                        break;
                                      case (MR_Integer) 1:
                                        {
                                          {
                                            mercury__io__write_string_3_p_0((MR_String) "MR_LTAGS_TEST(");
                                          }
                                        }
                                        break;
                                    }
                                    {
                                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_125);
                                    }
                                    {
                                      mercury__io__write_string_3_p_0((MR_String) ",");
                                    }
                                    {
                                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Ptag_126);
                                    }
                                    {
                                      mercury__io__write_string_3_p_0((MR_String) ",");
                                    }
                                    {
                                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Stag_128);
                                    }
                                    {
                                      mercury__io__write_string_3_p_0((MR_String) ")");
                                    }
                                  }
                                else
                                  {
                                    {
                                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Test_6, (MR_Integer) 0);
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

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_6,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_7,
  MR_Word ll_backend__llds_out__llds_out_data__DesiredType_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Word ll_backend__llds_out__llds_out_data__ActualType_10;

    {
      ll_backend__llds__rval_type_2_p_0(ll_backend__llds_out__llds_out_data__Rval_7, &ll_backend__llds_out__llds_out_data__ActualType_10);
    }
    switch (ll_backend__llds_out__llds_out_data__ActualType_10) {
      default:
        ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        switch (ll_backend__llds_out__llds_out_data__DesiredType_8) {
          default:
            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 7:
            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 7:
        switch (ll_backend__llds_out__llds_out_data__DesiredType_8) {
          default:
            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 8:
        switch (ll_backend__llds_out__llds_out_data__DesiredType_8) {
          default:
            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            break;
          case (MR_Integer) 13:
            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            break;
        }
        break;
      case (MR_Integer) 13:
        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__DesiredType_8 == (MR_Integer) 0);
        break;
    }
    if (!(ll_backend__llds_out__llds_out_data__succeeded))
      ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__ActualType_10 == ll_backend__llds_out__llds_out_data__DesiredType_8);
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_7);
      }
    else
      {
        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__DesiredType_8 == (MR_Integer) 9);
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_word_to_float(");
            }
            {
              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_7);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
        else
          {
            ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__ActualType_10 == (MR_Integer) 9);
            if (ll_backend__llds_out__llds_out_data__succeeded)
              {
                ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__DesiredType_8 == (MR_Integer) 13);
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__output_float_rval_as_word_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_7);
                  }
                else
                  {
                    ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__DesiredType_8 == (MR_Integer) 11);
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__output_float_rval_as_data_ptr_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_7);
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
                MR_Integer ll_backend__llds_out__llds_out_data__N_11;
                MR_Word ll_backend__llds_out__llds_out_data__V_25_25;
                MR_Word ll_backend__llds_out__llds_out_data__V_26_26;

                ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Rval_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_7, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    ll_backend__llds_out__llds_out_data__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_7, (MR_Integer) 1)));
                    ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_25_25)) == (MR_mktag((MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_25_25, (MR_Integer) 0)));
                        {
                          ll_backend__llds_out__llds_out_data__V_26_26 = ll_backend__llds_out__llds_out_data__direct_field_int_constant_1_f_0(ll_backend__llds_out__llds_out_data__DesiredType_8);
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_26_26 == (MR_Integer) 1);
                      }
                  }
                if (ll_backend__llds_out__llds_out_data__succeeded)
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_11);
                  }
                else
                  {
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_data__DesiredType_8);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ") ");
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_7);
                    }
                  }
              }
          }
      }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_rval_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Rval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__llds_out__llds_out_data__Lval_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_data__MaybeTag_30;
          MR_Word ll_backend__llds_out__llds_out_data__FieldNumRval_31;
          MR_Word ll_backend__llds_out__llds_out_data__V_328_328;

          ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Lval_29)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_29, (MR_Integer) 0)))) == (MR_Integer) 9)));
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              ll_backend__llds_out__llds_out_data__MaybeTag_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_29, (MR_Integer) 1)));
              ll_backend__llds_out__llds_out_data__V_328_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_29, (MR_Integer) 2)));
              ll_backend__llds_out__llds_out_data__FieldNumRval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_29, (MR_Integer) 3)));
              {
                ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__llds_out__llds_out_data__Rval_6, ll_backend__llds_out__llds_out_data__V_328_328);
              }
            }
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              MR_Integer ll_backend__llds_out__llds_out_data__FieldNum_32;
              MR_Word ll_backend__llds_out__llds_out_data__V_83_83;

              if ((ll_backend__llds_out__llds_out_data__MaybeTag_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_const_mask_field(");
                  }
                }
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_data__Tag_301 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MaybeTag_30, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_ctfield(");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_301);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_6);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__FieldNumRval_31)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_31, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  ll_backend__llds_out__llds_out_data__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_31, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_83_83)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    ll_backend__llds_out__llds_out_data__FieldNum_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_83_83, (MR_Integer) 0)));
                }
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__FieldNum_32);
                }
              else
                {
                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__FieldNumRval_31);
                }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          else
            {
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Lval_29);
            }
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
          MR_Integer ll_backend__llds_out__llds_out_data__Tag_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 0)));
          MR_Word ll_backend__llds_out__llds_out_data__SubRval_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1)));
          MR_Integer ll_backend__llds_out__llds_out_data__TypeNum_26;
          MR_Integer ll_backend__llds_out__llds_out_data__CellNum_27;
          MR_Word ll_backend__llds_out__llds_out_data__DataId_25;
          MR_Word ll_backend__llds_out__llds_out_data__V_94_94;
          MR_Word ll_backend__llds_out__llds_out_data__V_95_95;
          MR_Word ll_backend__llds_out__llds_out_data__V_96_96;

          ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRval_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_24, (MR_Integer) 0)))) == (MR_Integer) 1)));
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              ll_backend__llds_out__llds_out_data__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_24, (MR_Integer) 1)));
              ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_94_94)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_94_94, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  ll_backend__llds_out__llds_out_data__DataId_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_94_94, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_data__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_94_94, (MR_Integer) 2)));
                  ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_95_95 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    {
                      ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__DataId_25)) == (MR_mktag((MR_Integer) 2)));
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__DataId_25, (MR_Integer) 0)));
                          ll_backend__llds_out__llds_out_data__CellNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__DataId_25, (MR_Integer) 1)));
                          ll_backend__llds_out__llds_out_data__TypeNum_26 = (MR_Integer) ll_backend__llds_out__llds_out_data__V_96_96;
                          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                        }
                    }
                }
            }
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_TAG_COMMON(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_23);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ",");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__TypeNum_26);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ",");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__CellNum_27);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
          else
            {
              MR_Integer ll_backend__llds_out__llds_out_data__Body_28;
              MR_Word ll_backend__llds_out__llds_out_data__V_108_108;
              MR_Word ll_backend__llds_out__llds_out_data__V_109_109;
              MR_Word ll_backend__llds_out__llds_out_data__V_110_110;

              ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRval_24)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_24, (MR_Integer) 0)))) == (MR_Integer) 2)));
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  ll_backend__llds_out__llds_out_data__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_24, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_data__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_24, (MR_Integer) 2)));
                  ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__V_108_108 == (MR_Integer) 4);
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    {
                      ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_109_109)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_109_109, (MR_Integer) 0)))) == (MR_Integer) 1)));
                      if (ll_backend__llds_out__llds_out_data__succeeded)
                        {
                          ll_backend__llds_out__llds_out_data__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_109_109, (MR_Integer) 1)));
                          ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_110_110)) == (MR_mktag((MR_Integer) 1)));
                          if (ll_backend__llds_out__llds_out_data__succeeded)
                            ll_backend__llds_out__llds_out_data__Body_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_110_110, (MR_Integer) 0)));
                        }
                    }
                }
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tbmkword(");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_23);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Body_28);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
              else
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tmkword(");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_23);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                  {
                    ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRval_24, (MR_Integer) 11);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ")");
                  }
                }
            }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__Tag_300 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_tmkword(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_300);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", 0)");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Const_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1)));

              {
                ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Const_8);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__llds_out__llds_out_data__UnaryOp_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__SubRvalA_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 2)));
              MR_String ll_backend__llds_out__llds_out_data__OpString_11;
              MR_Word ll_backend__llds_out__llds_out_data__ArgType_12;

              {
                backend_libs__c_util__unary_prefix_op_2_p_0(ll_backend__llds_out__llds_out_data__UnaryOp_9, &ll_backend__llds_out__llds_out_data__OpString_11);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__OpString_11);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) "(");
              }
              {
                ll_backend__llds__unop_arg_type_2_p_0(ll_backend__llds_out__llds_out_data__UnaryOp_9, &ll_backend__llds_out__llds_out_data__ArgType_12);
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_10, ll_backend__llds_out__llds_out_data__ArgType_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Op_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__SubRvalB_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_data__SubRvalA_299 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Op_13)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Op_13)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "+");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "-");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "*");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 3:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "/");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 4:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "%");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<<");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">>");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "&");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "|");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "^");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 10:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "&&");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 11:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "||");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__SubRvalAType_475;
                        MR_Word ll_backend__llds_out__llds_out_data__SubRvalBType_476;

                        {
                          ll_backend__llds__rval_type_2_p_0(ll_backend__llds_out__llds_out_data__SubRvalA_299, &ll_backend__llds_out__llds_out_data__SubRvalAType_475);
                        }
                        switch (ll_backend__llds_out__llds_out_data__SubRvalAType_475) {
                          default:
                            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 8:
                            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 13:
                            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                            break;
                        }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            {
                              ll_backend__llds__rval_type_2_p_0(ll_backend__llds_out__llds_out_data__SubRvalB_14, &ll_backend__llds_out__llds_out_data__SubRvalBType_476);
                            }
                            switch (ll_backend__llds_out__llds_out_data__SubRvalBType_476) {
                              default:
                                ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 8:
                                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                                break;
                              case (MR_Integer) 13:
                                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                                break;
                            }
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "==");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "==");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__SubRvalAType_1468;
                        MR_Word ll_backend__llds_out__llds_out_data__SubRvalBType_1469;

                        {
                          ll_backend__llds__rval_type_2_p_0(ll_backend__llds_out__llds_out_data__SubRvalA_299, &ll_backend__llds_out__llds_out_data__SubRvalAType_1468);
                        }
                        switch (ll_backend__llds_out__llds_out_data__SubRvalAType_1468) {
                          default:
                            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                            break;
                          case (MR_Integer) 8:
                            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                            break;
                          case (MR_Integer) 13:
                            ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                            break;
                        }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            {
                              ll_backend__llds__rval_type_2_p_0(ll_backend__llds_out__llds_out_data__SubRvalB_14, &ll_backend__llds_out__llds_out_data__SubRvalBType_1469);
                            }
                            switch (ll_backend__llds_out__llds_out_data__SubRvalBType_1469) {
                              default:
                                ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
                                break;
                              case (MR_Integer) 8:
                                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                                break;
                              case (MR_Integer) 13:
                                ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
                                break;
                            }
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "!=");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "!=");
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) " ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_body(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_nth_code_unit(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__V_234_234;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalAConst_17;
                        MR_Word ll_backend__llds_out__llds_out_data__V_243_243;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalBConst_18;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalA_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_234_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_234_234)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_234_234, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalAConst_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_234_234, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_234_234);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_243_243)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_243_243, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalBConst_18 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_243_243, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_243_243);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "==");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "0)");
                        }
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__V_1737_1737;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalAConst_1742;
                        MR_Word ll_backend__llds_out__llds_out_data__V_1748_1748;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalBConst_1753;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalA_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1737_1737 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1737_1737)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1737_1737, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalAConst_1742 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1737_1737, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1737_1737);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1748_1748 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1748_1748)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1748_1748, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalBConst_1753 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1748_1748, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1748_1748);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "!=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "0)");
                        }
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__V_1688_1688;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalAConst_1693;
                        MR_Word ll_backend__llds_out__llds_out_data__V_1699_1699;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalBConst_1704;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalA_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1688_1688 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1688_1688)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1688_1688, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalAConst_1693 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1688_1688, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1688_1688);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1699_1699 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1699_1699)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1699_1699, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalBConst_1704 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1699_1699, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1699_1699);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "0)");
                        }
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__V_1590_1590;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalAConst_1595;
                        MR_Word ll_backend__llds_out__llds_out_data__V_1601_1601;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalBConst_1606;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalA_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1590_1590 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1590_1590)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1590_1590, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalAConst_1595 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1590_1590, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1590_1590);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1601_1601 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1601_1601)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1601_1601, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalBConst_1606 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1601_1601, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1601_1601);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "0)");
                        }
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__V_1639_1639;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalAConst_1644;
                        MR_Word ll_backend__llds_out__llds_out_data__V_1650_1650;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalBConst_1655;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalA_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1639_1639 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1639_1639)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1639_1639, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalAConst_1644 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1639_1639, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1639_1639);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1650_1650 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1650_1650)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1650_1650, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalBConst_1655 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1650_1650, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1650_1650);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "0)");
                        }
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__V_1541_1541;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalAConst_1546;
                        MR_Word ll_backend__llds_out__llds_out_data__V_1552_1552;
                        MR_String ll_backend__llds_out__llds_out_data__SubRvalBConst_1557;

                        {
                          mercury__io__write_string_3_p_0((MR_String) "(strcmp(");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalA_299)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1541_1541 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1541_1541)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1541_1541, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalAConst_1546 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1541_1541, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1541_1541);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRvalB_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 0)))) == (MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__V_1552_1552 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 1)));
                            ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_1552_1552)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1552_1552, (MR_Integer) 0)))) == (MR_Integer) 1)));
                            if (ll_backend__llds_out__llds_out_data__succeeded)
                              ll_backend__llds_out__llds_out_data__SubRvalBConst_1557 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_1552_1552, (MR_Integer) 1)));
                          }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            ll_backend__llds_out__llds_out_data__output_rval_const_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_1552_1552);
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "(char *) ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                            }
                          }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "0)");
                        }
                      }
                      break;
                    case (MR_Integer) 22:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_strcmp(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 27:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 8);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " <= ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 8);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 28:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "+");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 29:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "-");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 30:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "*");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 31:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "/");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 32:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "==");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 33:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "!=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 34:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 35:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 36:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "<=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 37:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ">=");
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) " ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 38:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "MR_float_word_bits(");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 9);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ")");
                        }
                      }
                      break;
                    case (MR_Integer) 39:
                      {
                        MR_Word ll_backend__llds_out__llds_out_data__MemRef_22;

                        {
                          ll_backend__llds_out__llds_out_data__succeeded = ll_backend__llds_out__llds_out_data__is_aligned_dword_ptr_3_p_0(ll_backend__llds_out__llds_out_data__SubRvalA_299, ll_backend__llds_out__llds_out_data__SubRvalB_14, &ll_backend__llds_out__llds_out_data__MemRef_22);
                        }
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          {
                            MR_Word ll_backend__llds_out__llds_out_data__V_130_130;

                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword_ptr(MR_dword_ptr(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__V_130_130 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_130_130, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                              MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__V_130_130, 1) = ((MR_Box) (ll_backend__llds_out__llds_out_data__MemRef_22));
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__V_130_130);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) "))");
                            }
                          }
                        else
                          {
                            {
                              mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword(");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ", ");
                            }
                            {
                              ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14);
                            }
                            {
                              mercury__io__write_string_3_p_0((MR_String) ")");
                            }
                          }
                      }
                      break;
                    case (MR_Integer) 40:
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "(((MR_Word) ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ") == ((MR_Word) ");
                        }
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) "))");
                        }
                      }
                      break;
                    case (MR_Integer) 41:
                    case (MR_Integer) 42:
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
                    {
                      mercury__io__write_string_3_p_0((MR_String) "(");
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")[");
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 7);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) "]");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Integer ll_backend__llds_out__llds_out_data__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Op_13, (MR_Integer) 0)));

                    {
                      mercury__io__write_string_3_p_0((MR_String) "MR_offset_streq(");
                    }
                    {
                      mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_21);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalA_299, (MR_Integer) 11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRvalB_14, (MR_Integer) 11);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_data__MemRef_322 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Rval_6, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__MemRef_322)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__llds_out__llds_out_data__SubRval_306 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_out__llds_out_data__MemRef_322, (MR_Integer) 0)));
                    MR_Integer ll_backend__llds_out__llds_out_data__SlotNum_34;
                    MR_Word ll_backend__llds_out__llds_out_data__V_64_64;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "&MR_sv(");
                    }
                    ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRval_306)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_306, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_306, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_64_64)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          ll_backend__llds_out__llds_out_data__SlotNum_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_64_64, (MR_Integer) 0)));
                      }
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__SlotNum_34);
                      }
                    else
                      {
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRval_306, (MR_Integer) 7);
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__llds_out__llds_out_data__SubRval_308 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MemRef_322, (MR_Integer) 0)));
                    MR_Integer ll_backend__llds_out__llds_out_data__SlotNum_307;
                    MR_Word ll_backend__llds_out__llds_out_data__V_56_56;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "&MR_fv(");
                    }
                    ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__SubRval_308)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_308, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__SubRval_308, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_56_56)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          ll_backend__llds_out__llds_out_data__SlotNum_307 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_56_56, (MR_Integer) 0)));
                      }
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__SlotNum_307);
                      }
                    else
                      {
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__SubRval_308, (MR_Integer) 7);
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__llds_out__llds_out_data__BaseRval_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__MemRef_322, (MR_Integer) 0)));
                    MR_Word ll_backend__llds_out__llds_out_data__MaybeTag_314 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__MemRef_322, (MR_Integer) 1)));
                    MR_Word ll_backend__llds_out__llds_out_data__FieldNumRval_315 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__MemRef_322, (MR_Integer) 2)));
                    MR_Integer ll_backend__llds_out__llds_out_data__FieldNum_312;
                    MR_Word ll_backend__llds_out__llds_out_data__V_48_48;

                    if ((ll_backend__llds_out__llds_out_data__MaybeTag_314 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      {
                        {
                          mercury__io__write_string_3_p_0((MR_String) "&MR_mask_field(");
                        }
                      }
                    else
                      {
                        MR_Integer ll_backend__llds_out__llds_out_data__Tag_310 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MaybeTag_314, (MR_Integer) 0)));

                        {
                          mercury__io__write_string_3_p_0((MR_String) "&MR_tfield(");
                        }
                        {
                          mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_310);
                        }
                        {
                          mercury__io__write_string_3_p_0((MR_String) ", ");
                        }
                      }
                    {
                      ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__BaseRval_35);
                    }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ", ");
                    }
                    ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__FieldNumRval_315)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_315, (MR_Integer) 0)))) == (MR_Integer) 1)));
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        ll_backend__llds_out__llds_out_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_315, (MR_Integer) 1)));
                        ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_48_48)) == (MR_mktag((MR_Integer) 1)));
                        if (ll_backend__llds_out__llds_out_data__succeeded)
                          ll_backend__llds_out__llds_out_data__FieldNum_312 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_48_48, (MR_Integer) 0)));
                      }
                    if (ll_backend__llds_out__llds_out_data__succeeded)
                      {
                        mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__FieldNum_312);
                      }
                    else
                      {
                        {
                          ll_backend__llds_out__llds_out_data__output_rval_as_type_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__FieldNumRval_315, (MR_Integer) 7);
                        }
                      }
                    {
                      mercury__io__write_string_3_p_0((MR_String) ")");
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
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rvals_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_7,
  MR_Word ll_backend__llds_out__llds_out_data__Rvals_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__output_record_rvals_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_7, ll_backend__llds_out__llds_out_data__Rvals_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_data__V_11_11, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_tab_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_7,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_7, ll_backend__llds_out__llds_out_data__Rval_8, (MR_String) "", (MR_String) "\t", (MR_Integer) 0, &ll_backend__llds_out__llds_out_data__V_11_11, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_rval_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_7,
  MR_Word ll_backend__llds_out__llds_out_data__Rval_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__output_record_rval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_7, ll_backend__llds_out__llds_out_data__Rval_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_data__V_11_11, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13);
    }
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_String ll_backend__llds_out__llds_out_data__HeadVar__2_2;
    MR_String ll_backend__llds_out__llds_out_data__EnvVarName_3 = (MR_String) ll_backend__llds_out__llds_out_data__HeadVar__1_1;

    {
      ll_backend__llds_out__llds_out_data__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "mercury_envvar_", ll_backend__llds_out__llds_out_data__EnvVarName_3);
    }
    return ll_backend__llds_out__llds_out_data__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1,
  MR_Integer ll_backend__llds_out__llds_out_data__N_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_String ll_backend__llds_out__llds_out_data__HeadVar__3_3;

    switch (ll_backend__llds_out__llds_out_data__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_2 <= (MR_Integer) 1024);
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              MR_String ll_backend__llds_out__llds_out_data__V_19_19;
              MR_String ll_backend__llds_out__llds_out_data__V_20_20;

              {
                ll_backend__llds_out__llds_out_data__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_data__N_2);
              }
              {
                ll_backend__llds_out__llds_out_data__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_20_20, (MR_String) ")");
              }
              {
                ll_backend__llds_out__llds_out_data__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "MR_f(", ll_backend__llds_out__llds_out_data__V_19_19);
              }
            }
          else
            {
              MR_Box ll_backend__llds_out__llds_out_data__conv0_HeadVar__3_3;

              {
                ll_backend__llds_out__llds_out_data__conv0_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "llds_out_data.m", (MR_String) "function \140ll_backend.llds_out.llds_out_data.reg_to_string\'/2", (MR_String) "register number too large");
              }
              ll_backend__llds_out__llds_out_data__HeadVar__3_3 = ((MR_String) ll_backend__llds_out__llds_out_data__conv0_HeadVar__3_3);
            }
        }
        break;
      case (MR_Integer) 0:
        {
          ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_2 <= (MR_Integer) 32);
          if (ll_backend__llds_out__llds_out_data__succeeded)
            {
              MR_String ll_backend__llds_out__llds_out_data__V_7_7;

              {
                ll_backend__llds_out__llds_out_data__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_data__N_2);
              }
              {
                ll_backend__llds_out__llds_out_data__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r", ll_backend__llds_out__llds_out_data__V_7_7);
              }
            }
          else
            {
              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_2 <= (MR_Integer) 1024);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  MR_String ll_backend__llds_out__llds_out_data__V_10_10;
                  MR_String ll_backend__llds_out__llds_out_data__V_11_11;

                  {
                    ll_backend__llds_out__llds_out_data__V_11_11 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_data__N_2);
                  }
                  {
                    ll_backend__llds_out__llds_out_data__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_11_11, (MR_String) ")");
                  }
                  {
                    ll_backend__llds_out__llds_out_data__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "MR_r(", ll_backend__llds_out__llds_out_data__V_10_10);
                  }
                }
              else
                {
                  MR_Box ll_backend__llds_out__llds_out_data__conv1_HeadVar__3_3;

                  {
                    ll_backend__llds_out__llds_out_data__conv1_HeadVar__3_3 = mercury__require__unexpected_3_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_String) "llds_out_data.m", (MR_String) "function \140ll_backend.llds_out.llds_out_data.reg_to_string\'/2", (MR_String) "register number too large");
                  }
                  ll_backend__llds_out__llds_out_data__HeadVar__3_3 = ((MR_String) ll_backend__llds_out__llds_out_data__conv1_HeadVar__3_3);
                }
            }
        }
        break;
    }
    return ll_backend__llds_out__llds_out_data__HeadVar__3_3;
  }
}

MR_bool MR_CALL 
ll_backend__llds_out__llds_out_data__lval_to_string_1_f_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1,
  MR_String * ll_backend__llds_out__llds_out_data__HeadVar__2_2)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__HeadVar__1_1)) {
      default:
        ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_data__RegType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 0)));
          MR_Integer ll_backend__llds_out__llds_out_data__RegNum_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 1)));

          {
            *ll_backend__llds_out__llds_out_data__HeadVar__2_2 = ll_backend__llds_out__llds_out_data__reg_to_string_2_f_0(ll_backend__llds_out__llds_out_data__RegType_3, ll_backend__llds_out__llds_out_data__RegNum_4);
          }
          ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 0)))) {
          default:
            ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_data__V_12_12;
              MR_String ll_backend__llds_out__llds_out_data__V_13_13;

              {
                ll_backend__llds_out__llds_out_data__V_13_13 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_data__N_10);
              }
              {
                ll_backend__llds_out__llds_out_data__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_13_13, (MR_String) ")");
              }
              {
                *ll_backend__llds_out__llds_out_data__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "MR_sv(", ll_backend__llds_out__llds_out_data__V_12_12);
              }
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_data__V_17_17;
              MR_String ll_backend__llds_out__llds_out_data__V_18_18;

              {
                ll_backend__llds_out__llds_out_data__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_data__N_15);
              }
              {
                ll_backend__llds_out__llds_out_data__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_18_18, (MR_String) ")");
              }
              {
                *ll_backend__llds_out__llds_out_data__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "MR_parent_sv(", ll_backend__llds_out__llds_out_data__V_17_17);
              }
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_data__V_7_7;
              MR_String ll_backend__llds_out__llds_out_data__V_8_8;

              {
                ll_backend__llds_out__llds_out_data__V_8_8 = mercury__string__int_to_string_1_f_0(ll_backend__llds_out__llds_out_data__N_5);
              }
              {
                ll_backend__llds_out__llds_out_data__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_8_8, (MR_String) ")");
              }
              {
                *ll_backend__llds_out__llds_out_data__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "MR_fv(", ll_backend__llds_out__llds_out_data__V_7_7);
              }
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__HeadVar__1_1, (MR_Integer) 2)));
              MR_String ll_backend__llds_out__llds_out_data__Macro_23;
              MR_Integer ll_backend__llds_out__llds_out_data__V_31_31;
              MR_String ll_backend__llds_out__llds_out_data__V_35_35;
              MR_Word ll_backend__llds_out__llds_out_data__V_41_41;
              MR_String ll_backend__llds_out__llds_out_data__V_42_42;
              MR_String ll_backend__llds_out__llds_out_data__V_44_44;
              MR_String ll_backend__llds_out__llds_out_data__V_45_45;
              MR_String ll_backend__llds_out__llds_out_data__V_52_52;
              MR_String ll_backend__llds_out__llds_out_data__V_54_54;

              switch (ll_backend__llds_out__llds_out_data__Type_20) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__llds_out__llds_out_data__Macro_23 = (MR_String) "MR_parent_sv";
                  break;
                case (MR_Integer) 0:
                  ll_backend__llds_out__llds_out_data__Macro_23 = (MR_String) "MR_sv";
                  break;
              }
              ll_backend__llds_out__llds_out_data__V_31_31 = (ll_backend__llds_out__llds_out_data__N_21 + (MR_Integer) 1);
              ll_backend__llds_out__llds_out_data__V_41_41 = (MR_Word) &ll_backend__llds_out__llds_out_data_scalar_common_1[0];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__llds_out__llds_out_data__V_41_41, ll_backend__llds_out__llds_out_data__V_31_31, &ll_backend__llds_out__llds_out_data__V_35_35);
              }
              {
                ll_backend__llds_out__llds_out_data__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_35_35, (MR_String) ")");
              }
              {
                ll_backend__llds_out__llds_out_data__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__llds_out__llds_out_data__V_42_42);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__llds_out__llds_out_data__V_41_41, ll_backend__llds_out__llds_out_data__N_21, &ll_backend__llds_out__llds_out_data__V_45_45);
              }
              {
                ll_backend__llds_out__llds_out_data__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__V_45_45, ll_backend__llds_out__llds_out_data__V_44_44);
              }
              {
                ll_backend__llds_out__llds_out_data__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__llds_out__llds_out_data__V_52_52);
              }
              {
                *ll_backend__llds_out__llds_out_data__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__llds_out__llds_out_data__Macro_23, ll_backend__llds_out__llds_out_data__V_54_54);
              }
              ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
            }
            break;
        }
        break;
    }
    return ll_backend__llds_out__llds_out_data__succeeded;
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__HeadVar__1_1)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (ll_backend__llds_out__llds_out_data__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
          }
        }
        break;
      case (MR_Integer) 12:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Code *");
          }
        }
        break;
      case (MR_Integer) 11:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word *");
          }
        }
        break;
      case (MR_Integer) 9:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Float");
          }
        }
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least16_t");
          }
        }
        break;
      case (MR_Integer) 5:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least32_t");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_int_least8_t");
          }
        }
        break;
      case (MR_Integer) 7:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Integer");
          }
        }
        break;
      case (MR_Integer) 10:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_String");
          }
        }
        break;
      case (MR_Integer) 4:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least16_t");
          }
        }
        break;
      case (MR_Integer) 6:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least32_t");
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_uint_least8_t");
          }
        }
        break;
      case (MR_Integer) 8:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Unsigned");
          }
        }
        break;
      case (MR_Integer) 13:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "MR_Word");
          }
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_llds_type_cast_3_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__LLDSType_4)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    {
      mercury__io__write_string_3_p_0((MR_String) "(");
    }
    {
      ll_backend__llds_out__llds_out_data__output_llds_type_3_p_0(ll_backend__llds_out__llds_out_data__LLDSType_4);
    }
    {
      mercury__io__write_string_3_p_0((MR_String) ") ");
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_as_word_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Word ll_backend__llds_out__llds_out_data__ActualType_8;

    {
      ll_backend__llds__lval_type_2_p_0(ll_backend__llds_out__llds_out_data__Lval_6, &ll_backend__llds_out__llds_out_data__ActualType_8);
    }
    switch (ll_backend__llds_out__llds_out_data__ActualType_8) {
      default:
        ll_backend__llds_out__llds_out_data__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 0:
        ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 7:
        ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
        break;
      case (MR_Integer) 8:
        ll_backend__llds_out__llds_out_data__succeeded = MR_TRUE;
        break;
    }
    if (!(ll_backend__llds_out__llds_out_data__succeeded))
      ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__ActualType_8 == (MR_Integer) 13);
    if (ll_backend__llds_out__llds_out_data__succeeded)
      {
        ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Lval_6);
      }
    else
      {
        ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__ActualType_8 == (MR_Integer) 9);
        if (ll_backend__llds_out__llds_out_data__succeeded)
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_as_word\'/4", (MR_String) "float");
              return;
            }
          }
        else
          {
            {
              mercury__io__write_string_3_p_0((MR_String) "MR_LVALUE_CAST(MR_Word,");
            }
            {
              ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Lval_6);
            }
            {
              mercury__io__write_string_3_p_0((MR_String) ")");
            }
          }
      }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_lval_for_assign_5_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_6,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_7,
  MR_Word * ll_backend__llds_out__llds_out_data__Type_8)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Lval_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Lval_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_succip_word");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_maxfr_word");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_curfr_word");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_hp_word");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_sp_word");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 11;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_parent_sp");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_data__RegType_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 0)));
          MR_Integer ll_backend__llds_out__llds_out_data__Num_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

          switch (ll_backend__llds_out__llds_out_data__RegType_10) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 9;
              break;
            case (MR_Integer) 0:
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              break;
          }
          {
            ll_backend__llds_out__llds_out_data__output_reg_4_p_0(ll_backend__llds_out__llds_out_data__RegType_10, ll_backend__llds_out__llds_out_data__Num_11);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_data__RegType_127 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 0)));
          MR_Integer ll_backend__llds_out__llds_out_data__Num_128 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

          switch (ll_backend__llds_out__llds_out_data__RegType_127) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 9;
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tempf");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Num_128);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tempr");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Num_128);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_12 < (MR_Integer) 0);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "stack var out of range");
                    return;
                  }
                }
              else
                {
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_sv(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_120 < (MR_Integer) 0);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "parent stack var out of range");
                    return;
                  }
                }
              else
                {
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_parent_sv(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_120);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_121 <= (MR_Integer) 0);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval_for_assign\'/5", (MR_String) "frame var out of range");
                    return;
                  }
                }
              else
                {
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_fv(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_121);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_data__StackType_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__SlotNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 2)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 9;
              {
                mercury__io__write_string_3_p_0((MR_String) "* (MR_Float *) ");
              }
              {
                ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__StackType_13, ll_backend__llds_out__llds_out_data__SlotNum_14);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_succip_slot_word(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_125);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_succfr_slot_word(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_15);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_124 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_redoip_slot_word(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_124);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_redofr_slot_word(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_123);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_prevfr_slot_word(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_122);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__llds_out__llds_out_data__MaybeTag_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__FieldNumRval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_data__Rval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 2)));
              MR_Integer ll_backend__llds_out__llds_out_data__FieldNum_19;
              MR_Word ll_backend__llds_out__llds_out_data__V_47_47;

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              if ((ll_backend__llds_out__llds_out_data__MaybeTag_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_mask_field(");
                  }
                }
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_data__Tag_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MaybeTag_16, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tfield(");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_18);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Rval_126);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__FieldNumRval_17)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_17, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  ll_backend__llds_out__llds_out_data__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_17, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_47_47)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    ll_backend__llds_out__llds_out_data__FieldNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_47_47, (MR_Integer) 0)));
                }
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__FieldNum_19);
                }
              else
                {
                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__FieldNumRval_17);
                }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                ll_backend__llds_out__llds_out_data__output_lval_4_p_0(ll_backend__llds_out__llds_out_data__Info_6, ll_backend__llds_out__llds_out_data__Lval_7);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__llds_out__llds_out_data__GlobalVar_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_7, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_data__V_25_25;

              *ll_backend__llds_out__llds_out_data__Type_8 = (MR_Integer) 13;
              {
                ll_backend__llds_out__llds_out_data__V_25_25 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(ll_backend__llds_out__llds_out_data__GlobalVar_22);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_25_25);
              }
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
ll_backend__llds_out__llds_out_data__output_lval_4_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_5,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_6)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;

    switch (MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__Lval_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__llds_out__llds_out_data__Lval_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_succip");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_maxfr");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_curfr");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_hp");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_sp");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_parent_sp");
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__llds_out__llds_out_data__Type_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 0)));
          MR_Integer ll_backend__llds_out__llds_out_data__Num_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

          {
            ll_backend__llds_out__llds_out_data__output_reg_4_p_0(ll_backend__llds_out__llds_out_data__Type_8, ll_backend__llds_out__llds_out_data__Num_9);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__llds_out__llds_out_data__Type_130 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 0)));
          MR_Integer ll_backend__llds_out__llds_out_data__Num_131 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

          switch (ll_backend__llds_out__llds_out_data__Type_130) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tempf");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Num_131);
                }
              }
              break;
            case (MR_Integer) 0:
              {
                {
                  mercury__io__write_string_3_p_0((MR_String) "MR_tempr");
                }
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Num_131);
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_10 <= (MR_Integer) 0);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "stack var out of range");
                    return;
                  }
                }
              else
                {
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_sv(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_10);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_123 <= (MR_Integer) 0);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "parent stack var out of range");
                    return;
                  }
                }
              else
                {
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_parent_sv(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_123);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Integer ll_backend__llds_out__llds_out_data__N_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              ll_backend__llds_out__llds_out_data__succeeded = (ll_backend__llds_out__llds_out_data__N_124 <= (MR_Integer) 0);
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "llds_out_data.m", (MR_String) "predicate \140ll_backend.llds_out.llds_out_data.output_lval\'/4", (MR_String) "frame var out of range");
                    return;
                  }
                }
              else
                {
                }
              {
                mercury__io__write_string_3_p_0((MR_String) "MR_fv(");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__N_124);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__llds_out__llds_out_data__StackType_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));
              MR_Integer ll_backend__llds_out__llds_out_data__SlotNum_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 2)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_float_from_dword_ptr(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_double_stackvar_ptr_5_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__StackType_11, ll_backend__llds_out__llds_out_data__SlotNum_12);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_128 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_succip_slot(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_128);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_succfr_slot(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_13);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_redoip_slot(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_127);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_126 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_redofr_slot(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_126);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_125 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "MR_prevfr_slot(");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_125);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__llds_out__llds_out_data__MaybeTag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));
              MR_Word ll_backend__llds_out__llds_out_data__FieldNumRval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 3)));
              MR_Word ll_backend__llds_out__llds_out_data__Rval_129 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 2)));
              MR_Integer ll_backend__llds_out__llds_out_data__FieldNum_17;
              MR_Word ll_backend__llds_out__llds_out_data__V_48_48;

              if ((ll_backend__llds_out__llds_out_data__MaybeTag_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_mask_field(");
                  }
                }
              else
                {
                  MR_Integer ll_backend__llds_out__llds_out_data__Tag_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__MaybeTag_14, (MR_Integer) 0)));

                  {
                    mercury__io__write_string_3_p_0((MR_String) "MR_tfield(");
                  }
                  {
                    mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__Tag_16);
                  }
                  {
                    mercury__io__write_string_3_p_0((MR_String) ", ");
                  }
                }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_129);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ", ");
              }
              ll_backend__llds_out__llds_out_data__succeeded = ((((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__FieldNumRval_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_15, (MR_Integer) 0)))) == (MR_Integer) 1)));
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  ll_backend__llds_out__llds_out_data__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__FieldNumRval_15, (MR_Integer) 1)));
                  ll_backend__llds_out__llds_out_data__succeeded = ((MR_tag((MR_Word) ll_backend__llds_out__llds_out_data__V_48_48)) == (MR_mktag((MR_Integer) 1)));
                  if (ll_backend__llds_out__llds_out_data__succeeded)
                    ll_backend__llds_out__llds_out_data__FieldNum_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_out__llds_out_data__V_48_48, (MR_Integer) 0)));
                }
              if (ll_backend__llds_out__llds_out_data__succeeded)
                {
                  mercury__io__write_int_3_p_0(ll_backend__llds_out__llds_out_data__FieldNum_17);
                }
              else
                {
                  ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__FieldNumRval_15);
                }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__llds_out__llds_out_data__Rval_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));

              {
                mercury__io__write_string_3_p_0((MR_String) "* (MR_Word *) (");
              }
              {
                ll_backend__llds_out__llds_out_data__output_rval_4_p_0(ll_backend__llds_out__llds_out_data__Info_5, ll_backend__llds_out__llds_out_data__Rval_132);
              }
              {
                mercury__io__write_string_3_p_0((MR_String) ")");
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__llds_out__llds_out_data__GlobalVar_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_out__llds_out_data__Lval_6, (MR_Integer) 1)));
              MR_String ll_backend__llds_out__llds_out_data__V_22_22;

              {
                ll_backend__llds_out__llds_out_data__V_22_22 = ll_backend__llds_out__llds_out_data__c_global_var_name_1_f_0(ll_backend__llds_out__llds_out_data__GlobalVar_19);
              }
              {
                mercury__io__write_string_3_p_0(ll_backend__llds_out__llds_out_data__V_22_22);
              }
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

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_tab_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_7,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_7, ll_backend__llds_out__llds_out_data__Lval_8, (MR_String) "\t", (MR_String) "\t", (MR_Integer) 0, &ll_backend__llds_out__llds_out_data__V_11_11, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13);
    }
  }
}

void MR_CALL 
ll_backend__llds_out__llds_out_data__output_record_lval_decls_6_p_0(
  MR_Word ll_backend__llds_out__llds_out_data__Info_7,
  MR_Word ll_backend__llds_out__llds_out_data__Lval_8,
  MR_Word ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12,
  MR_Word * ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13)
{
  {
    MR_bool ll_backend__llds_out__llds_out_data__succeeded;
    MR_Integer ll_backend__llds_out__llds_out_data__V_11_11;

    {
      ll_backend__llds_out__llds_out_data__output_record_lval_decls_format_10_p_0(ll_backend__llds_out__llds_out_data__Info_7, ll_backend__llds_out__llds_out_data__Lval_8, (MR_String) "", (MR_String) "", (MR_Integer) 0, &ll_backend__llds_out__llds_out_data__V_11_11, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_0_12, ll_backend__llds_out__llds_out_data__STATE_VARIABLE_DeclSet_13);
    }
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_out.llds_out_data. */
