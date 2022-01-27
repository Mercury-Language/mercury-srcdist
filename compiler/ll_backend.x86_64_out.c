/*
** Automatically generated from `x86_64_out.m'
** by the Mercury compiler,
** version 13.05, configured for x86_64-apple-darwin12.3.0.
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


/* :- module ll_backend.x86_64_out. */
/* :- implementation. */

/*
INIT mercury__ll_backend__x86_64_out__init
ENDINIT
*/

#include "ll_backend.x86_64_out.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
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
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.x86_64_instrs.mih"
#include "ll_backend.x86_64_regs.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.trace_counts.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "stream.string_writer.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 1467 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_unsigned_int_size_3_p_0(
#line 1467 "x86_64_out.m"
  MR_Integer ll_backend__x86_64_out__BitSize_4,
#line 1467 "x86_64_out.m"
  MR_Integer ll_backend__x86_64_out__Val_5,
#line 1467 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_6);

#line 1411 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_not_mem_ref_2_p_0(
#line 1411 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1411 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4);

#line 1402 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_register_2_p_0(
#line 1402 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1402 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4);

#line 1379 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(
#line 1379 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1379 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4);

#line 1367 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_reg_or_mem_2_p_0(
#line 1367 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1367 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4);

#line 1358 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(
#line 1358 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1358 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4);

#line 1310 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_rc_first_operand_2_p_0(
#line 1310 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op_3,
#line 1310 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4);

#line 1274 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_instr_with_condition_7_p_0(
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_40,
#line 1274 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_8,
#line 1274 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__Instr_9,
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op1_10,
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op2_11,
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Cond_12);

#line 1238 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_bit_test_instr_6_p_0(
#line 1238 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_44,
#line 1238 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_7,
#line 1238 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__Instr_8,
#line 1238 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Src_9,
#line 1238 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Idx_10);

#line 1210 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(
#line 1210 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_34,
#line 1210 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_6,
#line 1210 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__InstrName_7,
#line 1210 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__RelOffset_8);

#line 1173 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(
#line 1173 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_53,
#line 1173 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_7,
#line 1173 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__Instr_8,
#line 1173 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op1_9,
#line 1173 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op2_10);

#line 1112 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__rel_offset_to_string_2_p_0(
#line 1112 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 1112 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__RelOffsetVal_2);

#line 539 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_inst_4_p_0(
#line 539 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_848,
#line 539 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 539 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2);

#line 507 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_instr_4_p_0(
#line 507 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_51,
#line 507 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 507 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2);

#line 476 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_type_desc_2_p_0(
#line 476 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 476 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__HeadVar__2_2);

#line 468 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_section_type_2_p_0(
#line 468 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 468 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__HeadVar__2_2);

#line 454 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_section_m_flag_2_p_0(
#line 454 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 454 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__HeadVar__2_2);

#line 433 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__pseudo_section_flags_to_string_3_p_0(
#line 433 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 433 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__HeadVar__2_2,
#line 433 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__Result_3);

#line 422 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_section_flags_2_p_0(
#line 422 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 422 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__HeadVar__2_2);

#line 392 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_section_flags_and_type_3_p_0(
#line 392 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Flags_4,
#line 392 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Type0_5,
#line 392 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_6);

#line 374 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__pseudo_op_str_args_while_4_p_0(
#line 374 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_28,
#line 374 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 374 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2);

#line 366 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(
#line 366 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_20,
#line 366 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_6,
#line 366 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__OpName_7,
#line 366 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__StrArgs_8);

#line 348 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__pseudo_op_float_args_while_4_p_0(
#line 348 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_22,
#line 348 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 348 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2);

#line 340 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_pseudo_op_float_args_5_p_0(
#line 340 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_20,
#line 340 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_6,
#line 340 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__OpName_7,
#line 340 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__FloatArgs_8);

#line 308 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(
#line 308 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_36,
#line 308 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_8,
#line 308 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__OpName_9,
#line 308 "x86_64_out.m"
  MR_Integer ll_backend__x86_64_out__Arg1_10,
#line 308 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Arg2_11,
#line 308 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Arg3_12);

#line 61 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_pseudo_op_4_p_0(
#line 61 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_862,
#line 61 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 61 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2);

#line 505 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_instruction_4_p_0_1(
#line 505 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__closure_arg,
#line 505 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__wrapper_arg_1,
#line 505 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__wrapper_arg_2,
#line 505 "x86_64_out.m"
  MR_Box * ll_backend__x86_64_out__wrapper_arg_3);


static /* final */ const MR_Integer ll_backend__x86_64_out_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__x86_64_out_scalar_common_2[1][8];




static /* final */ const MR_Integer ll_backend__x86_64_out_scalar_common_1[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box ll_backend__x86_64_out_scalar_common_2[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&ll_backend__x86_64_out_scalar_common_1[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1467 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_unsigned_int_size_3_p_0(
#line 1467 "x86_64_out.m"
  MR_Integer ll_backend__x86_64_out__BitSize_4,
#line 1467 "x86_64_out.m"
  MR_Integer ll_backend__x86_64_out__Val_5,
#line 1467 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_6)
#line 1467 "x86_64_out.m"
{
#line 1469 "x86_64_out.m"
  {
#line 1469 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 1469 "x86_64_out.m"
    MR_Integer ll_backend__x86_64_out__MaxInt_7;
#line 1469 "x86_64_out.m"
    MR_Integer ll_backend__x86_64_out__V_8_8;

#line 1470 "x86_64_out.m"
    {
#line 1470 "x86_64_out.m"
      ll_backend__x86_64_out__V_8_8 = mercury__int__f_60_60_2_f_0((MR_Integer) 1, ll_backend__x86_64_out__BitSize_4);
    }
#line 1470 "x86_64_out.m"
    ll_backend__x86_64_out__MaxInt_7 = (ll_backend__x86_64_out__V_8_8 - (MR_Integer) 1);
#line 1472 "x86_64_out.m"
    ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_5 >= (MR_Integer) 0);
#line 1472 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1473 "x86_64_out.m"
      ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_5 <= ll_backend__x86_64_out__MaxInt_7);
#line 1476 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1475 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_6 = (MR_Integer) 1;
#line 1476 "x86_64_out.m"
    else
#line 1477 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_6 = (MR_Integer) 0;
#line 1469 "x86_64_out.m"
  }
#line 1467 "x86_64_out.m"
}

#line 1411 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_not_mem_ref_2_p_0(
#line 1411 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1411 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4)
#line 1411 "x86_64_out.m"
{
#line 1416 "x86_64_out.m"
  {
#line 1416 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Operand_3)) == (MR_mktag((MR_Integer) 2)));
#line 1414 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_5_5;

#line 1414 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1414 "x86_64_out.m"
      {
#line 1414 "x86_64_out.m"
        ll_backend__x86_64_out__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Operand_3, (MR_Integer) 0)));
#line 1415 "x86_64_out.m"
        *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1414 "x86_64_out.m"
      }
#line 1414 "x86_64_out.m"
    else
#line 1417 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 1416 "x86_64_out.m"
  }
#line 1411 "x86_64_out.m"
}

#line 1402 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_register_2_p_0(
#line 1402 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1402 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4)
#line 1402 "x86_64_out.m"
{
#line 1407 "x86_64_out.m"
  {
#line 1407 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Operand_3)) == (MR_mktag((MR_Integer) 0)));
#line 1405 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_5_5;

#line 1405 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1405 "x86_64_out.m"
      {
#line 1405 "x86_64_out.m"
        ll_backend__x86_64_out__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__Operand_3, (MR_Integer) 0)));
#line 1406 "x86_64_out.m"
        *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 1405 "x86_64_out.m"
      }
#line 1405 "x86_64_out.m"
    else
#line 1408 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1407 "x86_64_out.m"
  }
#line 1402 "x86_64_out.m"
}

#line 1379 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(
#line 1379 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1379 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4)
#line 1379 "x86_64_out.m"
{
#line 1398 "x86_64_out.m"
  {
#line 1398 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Operand_3)) == (MR_mktag((MR_Integer) 1)));
#line 1398 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__Imm_5;

#line 1382 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1382 "x86_64_out.m"
      {
#line 1382 "x86_64_out.m"
        ll_backend__x86_64_out__Imm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Operand_3, (MR_Integer) 0)));
#line 1383 "x86_64_out.m"
        {
#line 1383 "x86_64_out.m"
          MR_String ll_backend__x86_64_out__ImmType_6;
#line 1395 "x86_64_out.m"
          MR_Integer ll_backend__x86_64_out__ImmInt_7;

#line 1043 "x86_64_out.m"
          if (((MR_tag((MR_Word) ll_backend__x86_64_out__Imm_5)) == (MR_mktag((MR_Integer) 1))))
#line 1045 "x86_64_out.m"
            {
#line 1045 "x86_64_out.m"
              MR_Integer ll_backend__x86_64_out__Val_18;
#line 1045 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Imm_5, (MR_Integer) 0)));
#line 1045 "x86_64_out.m"
              MR_String ll_backend__x86_64_out__V_22_22;

#line 1045 "x86_64_out.m"
              ll_backend__x86_64_out__Val_18 = (MR_Integer) ll_backend__x86_64_out__V_20_20;
#line 1046 "x86_64_out.m"
              {
#line 1046 "x86_64_out.m"
                ll_backend__x86_64_out__V_22_22 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_18);
              }
#line 1046 "x86_64_out.m"
              {
#line 1046 "x86_64_out.m"
                ll_backend__x86_64_out__ImmType_6 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__V_22_22);
              }
#line 1045 "x86_64_out.m"
            }
#line 1043 "x86_64_out.m"
          else
#line 1043 "x86_64_out.m"
            if (((MR_tag((MR_Word) ll_backend__x86_64_out__Imm_5)) == (MR_mktag((MR_Integer) 2))))
#line 1047 "x86_64_out.m"
              {
#line 1047 "x86_64_out.m"
                MR_Integer ll_backend__x86_64_out__Val_23;
#line 1047 "x86_64_out.m"
                MR_Word ll_backend__x86_64_out__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Imm_5, (MR_Integer) 0)));
#line 1047 "x86_64_out.m"
                MR_String ll_backend__x86_64_out__V_27_27;

#line 1047 "x86_64_out.m"
                ll_backend__x86_64_out__Val_23 = (MR_Integer) ll_backend__x86_64_out__V_25_25;
#line 1048 "x86_64_out.m"
                {
#line 1048 "x86_64_out.m"
                  ll_backend__x86_64_out__V_27_27 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_23);
                }
#line 1048 "x86_64_out.m"
                {
#line 1048 "x86_64_out.m"
                  ll_backend__x86_64_out__ImmType_6 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__V_27_27);
                }
#line 1047 "x86_64_out.m"
              }
#line 1043 "x86_64_out.m"
            else
#line 1043 "x86_64_out.m"
              {
#line 1043 "x86_64_out.m"
                MR_Integer ll_backend__x86_64_out__Val_13;
#line 1043 "x86_64_out.m"
                MR_Word ll_backend__x86_64_out__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__Imm_5, (MR_Integer) 0)));
#line 1043 "x86_64_out.m"
                MR_String ll_backend__x86_64_out__V_17_17;

#line 1043 "x86_64_out.m"
                ll_backend__x86_64_out__Val_13 = (MR_Integer) ll_backend__x86_64_out__V_15_15;
#line 1044 "x86_64_out.m"
                {
#line 1044 "x86_64_out.m"
                  ll_backend__x86_64_out__V_17_17 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_13);
                }
#line 1044 "x86_64_out.m"
                {
#line 1044 "x86_64_out.m"
                  ll_backend__x86_64_out__ImmType_6 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__V_17_17);
                }
#line 1043 "x86_64_out.m"
              }
#line 1384 "x86_64_out.m"
          {
#line 1384 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = mercury__string__to_int_2_p_0(ll_backend__x86_64_out__ImmType_6, &ll_backend__x86_64_out__ImmInt_7);
          }
#line 1395 "x86_64_out.m"
          if (ll_backend__x86_64_out__succeeded)
#line 1386 "x86_64_out.m"
            {
#line 1472 "x86_64_out.m"
              ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__ImmInt_7 >= (MR_Integer) 0);
#line 1472 "x86_64_out.m"
              if (ll_backend__x86_64_out__succeeded)
#line 1473 "x86_64_out.m"
                ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__ImmInt_7 <= (MR_Integer) 4294967295);
#line 704 "ll_backend.x86_64_out.c"
              if (ll_backend__x86_64_out__succeeded)
#line 1389 "x86_64_out.m"
                *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 708 "ll_backend.x86_64_out.c"
              else
#line 1392 "x86_64_out.m"
                *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1386 "x86_64_out.m"
            }
#line 1395 "x86_64_out.m"
          else
#line 1396 "x86_64_out.m"
            {
#line 1396 "x86_64_out.m"
              {
#line 1396 "x86_64_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.check_operand_unsigned_imm_or_reg\'/2", (MR_String) "string.to_int failed");
#line 1396 "x86_64_out.m"
                return;
              }
#line 1396 "x86_64_out.m"
            }
#line 1383 "x86_64_out.m"
        }
#line 1382 "x86_64_out.m"
      }
#line 1382 "x86_64_out.m"
    else
#line 1399 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1398 "x86_64_out.m"
  }
#line 1379 "x86_64_out.m"
}

#line 1367 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_reg_or_mem_2_p_0(
#line 1367 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1367 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4)
#line 1367 "x86_64_out.m"
{
#line 1372 "x86_64_out.m"
  {
#line 1372 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Operand_3)) == (MR_mktag((MR_Integer) 0)));
#line 1370 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_5_5;

#line 1370 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1370 "x86_64_out.m"
      {
#line 1370 "x86_64_out.m"
        ll_backend__x86_64_out__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__Operand_3, (MR_Integer) 0)));
#line 1371 "x86_64_out.m"
        *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 1370 "x86_64_out.m"
      }
#line 1370 "x86_64_out.m"
    else
#line 1375 "x86_64_out.m"
      {
#line 1373 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__V_6_6;

#line 1373 "x86_64_out.m"
        ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Operand_3)) == (MR_mktag((MR_Integer) 2)));
#line 1373 "x86_64_out.m"
        if (ll_backend__x86_64_out__succeeded)
#line 1373 "x86_64_out.m"
          {
#line 1373 "x86_64_out.m"
            ll_backend__x86_64_out__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Operand_3, (MR_Integer) 0)));
#line 1374 "x86_64_out.m"
            *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 1373 "x86_64_out.m"
          }
#line 1373 "x86_64_out.m"
        else
#line 1376 "x86_64_out.m"
          *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1375 "x86_64_out.m"
      }
#line 1372 "x86_64_out.m"
  }
#line 1367 "x86_64_out.m"
}

#line 1358 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(
#line 1358 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Operand_3,
#line 1358 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4)
#line 1358 "x86_64_out.m"
{
#line 1363 "x86_64_out.m"
  {
#line 1363 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Operand_3)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_5_5;

#line 1361 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1361 "x86_64_out.m"
      {
#line 1361 "x86_64_out.m"
        ll_backend__x86_64_out__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Operand_3, (MR_Integer) 0)));
#line 1362 "x86_64_out.m"
        *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1361 "x86_64_out.m"
      }
#line 1361 "x86_64_out.m"
    else
#line 1364 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 1363 "x86_64_out.m"
  }
#line 1358 "x86_64_out.m"
}

#line 1310 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_rc_first_operand_2_p_0(
#line 1310 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op_3,
#line 1310 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_4)
#line 1310 "x86_64_out.m"
{
#line 1314 "x86_64_out.m"
  {
#line 1314 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 1314 "x86_64_out.m"
    if (((MR_tag((MR_Word) ll_backend__x86_64_out__Op_3)) == (MR_mktag((MR_Integer) 1))))
#line 1314 "x86_64_out.m"
      {
#line 1314 "x86_64_out.m"
        MR_String ll_backend__x86_64_out__OpType_6;
#line 1325 "x86_64_out.m"
        MR_Integer ll_backend__x86_64_out__OpInt_7;

#line 1315 "x86_64_out.m"
        {
#line 1315 "x86_64_out.m"
          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op_3, &ll_backend__x86_64_out__OpType_6);
        }
#line 1316 "x86_64_out.m"
        {
#line 1316 "x86_64_out.m"
          ll_backend__x86_64_out__succeeded = mercury__string__to_int_2_p_0(ll_backend__x86_64_out__OpType_6, &ll_backend__x86_64_out__OpInt_7);
        }
#line 1325 "x86_64_out.m"
        if (ll_backend__x86_64_out__succeeded)
#line 1317 "x86_64_out.m"
          {
#line 1472 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__OpInt_7 >= (MR_Integer) 0);
#line 1472 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 1473 "x86_64_out.m"
              ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__OpInt_7 <= (MR_Integer) 255);
#line 874 "ll_backend.x86_64_out.c"
            if (ll_backend__x86_64_out__succeeded)
#line 1320 "x86_64_out.m"
              *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 878 "ll_backend.x86_64_out.c"
            else
#line 1323 "x86_64_out.m"
              *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 1317 "x86_64_out.m"
          }
#line 1325 "x86_64_out.m"
        else
#line 1326 "x86_64_out.m"
          {
#line 1326 "x86_64_out.m"
            {
#line 1326 "x86_64_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.check_rc_first_operand\'/2", (MR_String) "string.to_int");
#line 1326 "x86_64_out.m"
              return;
            }
#line 1326 "x86_64_out.m"
          }
#line 1314 "x86_64_out.m"
      }
#line 1314 "x86_64_out.m"
    else
#line 1314 "x86_64_out.m"
      if (((MR_tag((MR_Word) ll_backend__x86_64_out__Op_3)) == (MR_mktag((MR_Integer) 0))))
#line 903 "ll_backend.x86_64_out.c"
        {
#line 1405 "x86_64_out.m"
          MR_Word ll_backend__x86_64_out__V_31_31;

#line 1405 "x86_64_out.m"
          ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Op_3)) == (MR_mktag((MR_Integer) 0)));
#line 1405 "x86_64_out.m"
          if (ll_backend__x86_64_out__succeeded)
#line 1405 "x86_64_out.m"
            {
#line 1405 "x86_64_out.m"
              ll_backend__x86_64_out__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__Op_3, (MR_Integer) 0)));
#line 1333 "x86_64_out.m"
              *ll_backend__x86_64_out__Result_4 = (MR_Integer) 1;
#line 1405 "x86_64_out.m"
            }
#line 1405 "x86_64_out.m"
          else
#line 1336 "x86_64_out.m"
            *ll_backend__x86_64_out__Result_4 = (MR_Integer) 0;
#line 924 "ll_backend.x86_64_out.c"
        }
#line 1314 "x86_64_out.m"
      else
#line 1342 "x86_64_out.m"
        {
#line 1343 "x86_64_out.m"
          {
#line 1343 "x86_64_out.m"
            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.check_rc_first_operand\'/2", (MR_String) "invalid operand");
#line 1343 "x86_64_out.m"
            return;
          }
#line 1342 "x86_64_out.m"
        }
#line 1314 "x86_64_out.m"
  }
#line 1310 "x86_64_out.m"
}

#line 1274 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_instr_with_condition_7_p_0(
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_40,
#line 1274 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_8,
#line 1274 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__Instr_9,
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op1_10,
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op2_11,
#line 1274 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Cond_12)
#line 1274 "x86_64_out.m"
{
#line 961 "ll_backend.x86_64_out.c"
  {
#line 963 "ll_backend.x86_64_out.c"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Op1_10)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_43_43;

#line 1361 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1361 "x86_64_out.m"
      {
#line 1361 "x86_64_out.m"
        ll_backend__x86_64_out__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Op1_10, (MR_Integer) 0)));
#line 1304 "x86_64_out.m"
        {
#line 1304 "x86_64_out.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_instr_with_condition\'/7", (MR_String) "invalid first operand: immediate value is not allowed");
#line 1304 "x86_64_out.m"
          return;
        }
#line 1361 "x86_64_out.m"
      }
#line 1361 "x86_64_out.m"
    else
#line 985 "ll_backend.x86_64_out.c"
      {
#line 987 "ll_backend.x86_64_out.c"
        MR_String ll_backend__x86_64_out__CondRes_15;
#line 989 "ll_backend.x86_64_out.c"
        MR_String ll_backend__x86_64_out__Op1Type_16;
#line 991 "ll_backend.x86_64_out.c"
        MR_String ll_backend__x86_64_out__V_25_25;
#line 993 "ll_backend.x86_64_out.c"
        MR_String ll_backend__x86_64_out__V_28_28;
#line 995 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 997 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_26_26;
#line 999 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1001 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_29_29;
#line 1003 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1005 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_31_31;

#line 1433 "x86_64_out.m"
        if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 15))
#line 1448 "x86_64_out.m"
          ll_backend__x86_64_out__CondRes_15 = (MR_String) "a";
#line 1433 "x86_64_out.m"
        else
#line 1433 "x86_64_out.m"
          if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 7))
#line 1440 "x86_64_out.m"
            ll_backend__x86_64_out__CondRes_15 = (MR_String) "ae";
#line 1433 "x86_64_out.m"
          else
#line 1433 "x86_64_out.m"
            if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 2))
#line 1435 "x86_64_out.m"
              ll_backend__x86_64_out__CondRes_15 = (MR_String) "b";
#line 1433 "x86_64_out.m"
            else
#line 1433 "x86_64_out.m"
              if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 12))
#line 1445 "x86_64_out.m"
                ll_backend__x86_64_out__CondRes_15 = (MR_String) "be";
#line 1433 "x86_64_out.m"
              else
#line 1433 "x86_64_out.m"
                if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 3))
#line 1436 "x86_64_out.m"
                  ll_backend__x86_64_out__CondRes_15 = (MR_String) "c";
#line 1433 "x86_64_out.m"
                else
#line 1433 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 9))
#line 1442 "x86_64_out.m"
                    ll_backend__x86_64_out__CondRes_15 = (MR_String) "e";
#line 1433 "x86_64_out.m"
                  else
#line 1433 "x86_64_out.m"
                    if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 29))
#line 1462 "x86_64_out.m"
                      ll_backend__x86_64_out__CondRes_15 = (MR_String) "g";
#line 1433 "x86_64_out.m"
                    else
#line 1433 "x86_64_out.m"
                      if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 25))
#line 1458 "x86_64_out.m"
                        ll_backend__x86_64_out__CondRes_15 = (MR_String) "ge";
#line 1433 "x86_64_out.m"
                      else
#line 1433 "x86_64_out.m"
                        if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 22))
#line 1455 "x86_64_out.m"
                          ll_backend__x86_64_out__CondRes_15 = (MR_String) "l";
#line 1433 "x86_64_out.m"
                        else
#line 1433 "x86_64_out.m"
                          if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 26))
#line 1459 "x86_64_out.m"
                            ll_backend__x86_64_out__CondRes_15 = (MR_String) "le";
#line 1433 "x86_64_out.m"
                          else
#line 1433 "x86_64_out.m"
                            if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 13))
#line 1446 "x86_64_out.m"
                              ll_backend__x86_64_out__CondRes_15 = (MR_String) "na";
#line 1433 "x86_64_out.m"
                            else
#line 1433 "x86_64_out.m"
                              if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 4))
#line 1437 "x86_64_out.m"
                                ll_backend__x86_64_out__CondRes_15 = (MR_String) "nae";
#line 1433 "x86_64_out.m"
                              else
#line 1433 "x86_64_out.m"
                                if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 5))
#line 1438 "x86_64_out.m"
                                  ll_backend__x86_64_out__CondRes_15 = (MR_String) "nb";
#line 1433 "x86_64_out.m"
                                else
#line 1433 "x86_64_out.m"
                                  if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 14))
#line 1447 "x86_64_out.m"
                                    ll_backend__x86_64_out__CondRes_15 = (MR_String) "nbe";
#line 1433 "x86_64_out.m"
                                  else
#line 1433 "x86_64_out.m"
                                    if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 6))
#line 1439 "x86_64_out.m"
                                      ll_backend__x86_64_out__CondRes_15 = (MR_String) "nc";
#line 1433 "x86_64_out.m"
                                    else
#line 1433 "x86_64_out.m"
                                      if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 11))
#line 1444 "x86_64_out.m"
                                        ll_backend__x86_64_out__CondRes_15 = (MR_String) "ne";
#line 1433 "x86_64_out.m"
                                      else
#line 1433 "x86_64_out.m"
                                        if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 27))
#line 1460 "x86_64_out.m"
                                          ll_backend__x86_64_out__CondRes_15 = (MR_String) "ng";
#line 1433 "x86_64_out.m"
                                        else
#line 1433 "x86_64_out.m"
                                          if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 23))
#line 1456 "x86_64_out.m"
                                            ll_backend__x86_64_out__CondRes_15 = (MR_String) "nge";
#line 1433 "x86_64_out.m"
                                          else
#line 1433 "x86_64_out.m"
                                            if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 24))
#line 1457 "x86_64_out.m"
                                              ll_backend__x86_64_out__CondRes_15 = (MR_String) "nl";
#line 1433 "x86_64_out.m"
                                            else
#line 1433 "x86_64_out.m"
                                              if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 28))
#line 1461 "x86_64_out.m"
                                                ll_backend__x86_64_out__CondRes_15 = (MR_String) "nle";
#line 1433 "x86_64_out.m"
                                              else
#line 1433 "x86_64_out.m"
                                                if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 1))
#line 1434 "x86_64_out.m"
                                                  ll_backend__x86_64_out__CondRes_15 = (MR_String) "no";
#line 1433 "x86_64_out.m"
                                                else
#line 1433 "x86_64_out.m"
                                                  if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 20))
#line 1453 "x86_64_out.m"
                                                    ll_backend__x86_64_out__CondRes_15 = (MR_String) "np";
#line 1433 "x86_64_out.m"
                                                  else
#line 1433 "x86_64_out.m"
                                                    if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 17))
#line 1450 "x86_64_out.m"
                                                      ll_backend__x86_64_out__CondRes_15 = (MR_String) "ns";
#line 1433 "x86_64_out.m"
                                                    else
#line 1433 "x86_64_out.m"
                                                      if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 10))
#line 1443 "x86_64_out.m"
                                                        ll_backend__x86_64_out__CondRes_15 = (MR_String) "nz";
#line 1433 "x86_64_out.m"
                                                      else
#line 1433 "x86_64_out.m"
                                                        if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 0))
#line 1433 "x86_64_out.m"
                                                          ll_backend__x86_64_out__CondRes_15 = (MR_String) "o";
#line 1433 "x86_64_out.m"
                                                        else
#line 1433 "x86_64_out.m"
                                                          if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 18))
#line 1451 "x86_64_out.m"
                                                            ll_backend__x86_64_out__CondRes_15 = (MR_String) "p";
#line 1433 "x86_64_out.m"
                                                          else
#line 1433 "x86_64_out.m"
                                                            if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 19))
#line 1452 "x86_64_out.m"
                                                              ll_backend__x86_64_out__CondRes_15 = (MR_String) "pe";
#line 1433 "x86_64_out.m"
                                                            else
#line 1433 "x86_64_out.m"
                                                              if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 21))
#line 1454 "x86_64_out.m"
                                                                ll_backend__x86_64_out__CondRes_15 = (MR_String) "po";
#line 1433 "x86_64_out.m"
                                                              else
#line 1433 "x86_64_out.m"
                                                                if ((ll_backend__x86_64_out__Cond_12 == (MR_Integer) 16))
#line 1449 "x86_64_out.m"
                                                                  ll_backend__x86_64_out__CondRes_15 = (MR_String) "s";
#line 1433 "x86_64_out.m"
                                                                else
#line 1441 "x86_64_out.m"
                                                                  ll_backend__x86_64_out__CondRes_15 = (MR_String) "z";
#line 1283 "x86_64_out.m"
        {
#line 1283 "x86_64_out.m"
          ll_backend__x86_64_out__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__Instr_9);
        }
#line 1189 "ll_backend.x86_64_out.c"
        ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1191 "ll_backend.x86_64_out.c"
        {
#line 1193 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_40), ll_backend__x86_64_out__Stream_8, ((MR_Box) (ll_backend__x86_64_out__V_25_25)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_26_26);
        }
#line 1284 "x86_64_out.m"
        {
#line 1284 "x86_64_out.m"
          ll_backend__x86_64_out__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__CondRes_15, (MR_String) "\t");
        }
#line 1201 "ll_backend.x86_64_out.c"
        ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1203 "ll_backend.x86_64_out.c"
        {
#line 1205 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_40), ll_backend__x86_64_out__Stream_8, ((MR_Box) (ll_backend__x86_64_out__V_28_28)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_29_29);
        }
#line 1285 "x86_64_out.m"
        {
#line 1285 "x86_64_out.m"
          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op1_10, &ll_backend__x86_64_out__Op1Type_16);
        }
#line 1213 "ll_backend.x86_64_out.c"
        ll_backend__x86_64_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1215 "ll_backend.x86_64_out.c"
        {
#line 1217 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_4(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_40), ll_backend__x86_64_out__Stream_8, ((MR_Box) (ll_backend__x86_64_out__Op1Type_16)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_31_31);
        }
#line 1298 "x86_64_out.m"
        if ((ll_backend__x86_64_out__Op2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1299 "x86_64_out.m"
          {
#line 1224 "ll_backend.x86_64_out.c"
            void MR_CALL (* ll_backend__x86_64_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1226 "ll_backend.x86_64_out.c"
            MR_Box ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_21;

#line 1229 "ll_backend.x86_64_out.c"
            {
#line 1231 "ll_backend.x86_64_out.c"
              ll_backend__x86_64_out__func_6(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_40), ll_backend__x86_64_out__Stream_8, ((MR_Box) ((MR_String) "\t\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_21);
            }
#line 1299 "x86_64_out.m"
          }
#line 1298 "x86_64_out.m"
        else
#line 1288 "x86_64_out.m"
          {
#line 1288 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Op2Res_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Op2_11, (MR_Integer) 0)));
#line 1405 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__V_46_46;

#line 1405 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Op2Res_17)) == (MR_mktag((MR_Integer) 0)));
#line 1405 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 1405 "x86_64_out.m"
              {
#line 1405 "x86_64_out.m"
                ll_backend__x86_64_out__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__Op2Res_17, (MR_Integer) 0)));
#line 1253 "ll_backend.x86_64_out.c"
                {
#line 1255 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__Op2Type_19;
#line 1257 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_37_37;
#line 1259 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1261 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_21;

#line 1292 "x86_64_out.m"
                  {
#line 1292 "x86_64_out.m"
                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op2Res_17, &ll_backend__x86_64_out__Op2Type_19);
                  }
#line 1293 "x86_64_out.m"
                  {
#line 1293 "x86_64_out.m"
                    ll_backend__x86_64_out__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__Op2Type_19);
                  }
#line 1274 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_40, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1276 "ll_backend.x86_64_out.c"
                  {
#line 1278 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_8(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_40), ll_backend__x86_64_out__Stream_8, ((MR_Box) (ll_backend__x86_64_out__V_37_37)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_21);
                  }
#line 1281 "ll_backend.x86_64_out.c"
                }
#line 1405 "x86_64_out.m"
              }
#line 1405 "x86_64_out.m"
            else
#line 1287 "ll_backend.x86_64_out.c"
              {
#line 1296 "x86_64_out.m"
                {
#line 1296 "x86_64_out.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_instr_with_condition\'/7", (MR_String) "invalid second operand");
#line 1296 "x86_64_out.m"
                  return;
                }
#line 1296 "ll_backend.x86_64_out.c"
              }
#line 1288 "x86_64_out.m"
          }
#line 1300 "ll_backend.x86_64_out.c"
      }
#line 1302 "ll_backend.x86_64_out.c"
  }
#line 1274 "x86_64_out.m"
}

#line 1238 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_bit_test_instr_6_p_0(
#line 1238 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_44,
#line 1238 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_7,
#line 1238 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__Instr_8,
#line 1238 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Src_9,
#line 1238 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Idx_10)
#line 1238 "x86_64_out.m"
{
#line 1322 "ll_backend.x86_64_out.c"
  {
#line 1324 "ll_backend.x86_64_out.c"
    MR_bool ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Src_9)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_47_47;

#line 1361 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1361 "x86_64_out.m"
      {
#line 1361 "x86_64_out.m"
        ll_backend__x86_64_out__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Src_9, (MR_Integer) 0)));
#line 1270 "x86_64_out.m"
        {
#line 1270 "x86_64_out.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", (MR_String) "bt: invalid first operand - immediate value is not allowed");
#line 1270 "x86_64_out.m"
          return;
        }
#line 1361 "x86_64_out.m"
      }
#line 1361 "x86_64_out.m"
    else
#line 1346 "ll_backend.x86_64_out.c"
      {
#line 1348 "ll_backend.x86_64_out.c"
        MR_String ll_backend__x86_64_out__Op1_13;
#line 1414 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__V_50_50;

#line 1245 "x86_64_out.m"
        {
#line 1245 "x86_64_out.m"
          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src_9, &ll_backend__x86_64_out__Op1_13);
        }
#line 1414 "x86_64_out.m"
        ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Idx_10)) == (MR_mktag((MR_Integer) 2)));
#line 1414 "x86_64_out.m"
        if (ll_backend__x86_64_out__succeeded)
#line 1414 "x86_64_out.m"
          {
#line 1414 "x86_64_out.m"
            ll_backend__x86_64_out__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Idx_10, (MR_Integer) 0)));
#line 1265 "x86_64_out.m"
            {
#line 1265 "x86_64_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", (MR_String) "bt: invalid second operand - memory reference is not allowed");
#line 1265 "x86_64_out.m"
              return;
            }
#line 1414 "x86_64_out.m"
          }
#line 1414 "x86_64_out.m"
        else
#line 1377 "ll_backend.x86_64_out.c"
          {
#line 1379 "ll_backend.x86_64_out.c"
            MR_String ll_backend__x86_64_out__Op2_15;
#line 1260 "x86_64_out.m"
            MR_Integer ll_backend__x86_64_out__IdxInt_16;

#line 1249 "x86_64_out.m"
            {
#line 1249 "x86_64_out.m"
              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Idx_10, &ll_backend__x86_64_out__Op2_15);
            }
#line 1250 "x86_64_out.m"
            {
#line 1250 "x86_64_out.m"
              ll_backend__x86_64_out__succeeded = mercury__string__to_int_2_p_0(ll_backend__x86_64_out__Op2_15, &ll_backend__x86_64_out__IdxInt_16);
            }
#line 1260 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 1251 "x86_64_out.m"
              {
#line 1489 "x86_64_out.m"
                ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__IdxInt_16 >= (MR_Integer) -128);
#line 1489 "x86_64_out.m"
                if (ll_backend__x86_64_out__succeeded)
#line 1490 "x86_64_out.m"
                  ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__IdxInt_16 <= (MR_Integer) 127);
#line 1404 "ll_backend.x86_64_out.c"
                if (ll_backend__x86_64_out__succeeded)
#line 1406 "ll_backend.x86_64_out.c"
                  {
#line 1408 "ll_backend.x86_64_out.c"
                    MR_String ll_backend__x86_64_out__V_30_30;
#line 1410 "ll_backend.x86_64_out.c"
                    MR_String ll_backend__x86_64_out__V_33_33;
#line 1412 "ll_backend.x86_64_out.c"
                    MR_String ll_backend__x86_64_out__V_35_35;
#line 1414 "ll_backend.x86_64_out.c"
                    MR_String ll_backend__x86_64_out__V_37_37;
#line 1416 "ll_backend.x86_64_out.c"
                    MR_String ll_backend__x86_64_out__V_39_39;
#line 1418 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1420 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_31_31;
#line 1422 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1424 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_19;

#line 1254 "x86_64_out.m"
                    {
#line 1254 "x86_64_out.m"
                      ll_backend__x86_64_out__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Instr_8, (MR_String) "\t");
                    }
#line 1254 "x86_64_out.m"
                    {
#line 1254 "x86_64_out.m"
                      ll_backend__x86_64_out__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_33_33);
                    }
#line 1437 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_44, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1439 "ll_backend.x86_64_out.c"
                    {
#line 1441 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_44), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_30_30)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_31_31);
                    }
#line 1255 "x86_64_out.m"
                    {
#line 1255 "x86_64_out.m"
                      ll_backend__x86_64_out__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_15, (MR_String) "\t");
                    }
#line 1255 "x86_64_out.m"
                    {
#line 1255 "x86_64_out.m"
                      ll_backend__x86_64_out__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_39_39);
                    }
#line 1255 "x86_64_out.m"
                    {
#line 1255 "x86_64_out.m"
                      ll_backend__x86_64_out__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_13, ll_backend__x86_64_out__V_37_37);
                    }
#line 1459 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_44, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1461 "ll_backend.x86_64_out.c"
                    {
#line 1463 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_44), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_35_35)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_19);
                    }
#line 1466 "ll_backend.x86_64_out.c"
                  }
#line 1468 "ll_backend.x86_64_out.c"
                else
#line 1470 "ll_backend.x86_64_out.c"
                  {
#line 1258 "x86_64_out.m"
                    {
#line 1258 "x86_64_out.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", (MR_String) "bt: invalid second operand");
#line 1258 "x86_64_out.m"
                      return;
                    }
#line 1479 "ll_backend.x86_64_out.c"
                  }
#line 1251 "x86_64_out.m"
              }
#line 1260 "x86_64_out.m"
            else
#line 1261 "x86_64_out.m"
              {
#line 1261 "x86_64_out.m"
                {
#line 1261 "x86_64_out.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_bit_test_instr\'/6", (MR_String) "string.to_int failed");
#line 1261 "x86_64_out.m"
                  return;
                }
#line 1261 "x86_64_out.m"
              }
#line 1496 "ll_backend.x86_64_out.c"
          }
#line 1498 "ll_backend.x86_64_out.c"
      }
#line 1500 "ll_backend.x86_64_out.c"
  }
#line 1238 "x86_64_out.m"
}

#line 1210 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(
#line 1210 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_34,
#line 1210 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_6,
#line 1210 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__InstrName_7,
#line 1210 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__RelOffset_8)
#line 1210 "x86_64_out.m"
{
#line 1518 "ll_backend.x86_64_out.c"
  {
#line 1520 "ll_backend.x86_64_out.c"
    MR_bool ll_backend__x86_64_out__succeeded = ((((MR_tag((MR_Word) ll_backend__x86_64_out__RelOffset_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__RelOffset_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 1423 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_37_37;

#line 1423 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1423 "x86_64_out.m"
      {
#line 1423 "x86_64_out.m"
        ll_backend__x86_64_out__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__RelOffset_8, (MR_Integer) 1)));
#line 1531 "ll_backend.x86_64_out.c"
        {
#line 1533 "ll_backend.x86_64_out.c"
          MR_String ll_backend__x86_64_out__RelOffsetType_11;
#line 1229 "x86_64_out.m"
          MR_Integer ll_backend__x86_64_out__Val_12;

#line 1217 "x86_64_out.m"
          {
#line 1217 "x86_64_out.m"
            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__RelOffset_8, &ll_backend__x86_64_out__RelOffsetType_11);
          }
#line 1218 "x86_64_out.m"
          {
#line 1218 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = mercury__string__to_int_2_p_0(ll_backend__x86_64_out__RelOffsetType_11, &ll_backend__x86_64_out__Val_12);
          }
#line 1229 "x86_64_out.m"
          if (ll_backend__x86_64_out__succeeded)
#line 1219 "x86_64_out.m"
            {
#line 1489 "x86_64_out.m"
              ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_12 >= (MR_Integer) -128);
#line 1489 "x86_64_out.m"
              if (ll_backend__x86_64_out__succeeded)
#line 1490 "x86_64_out.m"
                ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_12 <= (MR_Integer) 127);
#line 1558 "ll_backend.x86_64_out.c"
              if (ll_backend__x86_64_out__succeeded)
#line 1560 "ll_backend.x86_64_out.c"
                {
#line 1562 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_23_23;
#line 1564 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_26_26;
#line 1566 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1568 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_24_24;
#line 1223 "x86_64_out.m"
                  MR_Box ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_28_28;
#line 1572 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1574 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_15;

#line 1222 "x86_64_out.m"
                  {
#line 1222 "x86_64_out.m"
                    ll_backend__x86_64_out__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__InstrName_7, (MR_String) "\t");
                  }
#line 1222 "x86_64_out.m"
                  {
#line 1222 "x86_64_out.m"
                    ll_backend__x86_64_out__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_26_26);
                  }
#line 1587 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1589 "ll_backend.x86_64_out.c"
                  {
#line 1591 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_34), ll_backend__x86_64_out__Stream_6, ((MR_Box) (ll_backend__x86_64_out__V_23_23)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_24_24);
                  }
#line 1223 "x86_64_out.m"
                  {
#line 1223 "x86_64_out.m"
                    mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_34, ll_backend__x86_64_out__Stream_6, ll_backend__x86_64_out__Val_12, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_28_28);
                  }
#line 1599 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_3 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1601 "ll_backend.x86_64_out.c"
                  {
#line 1603 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_3(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_34), ll_backend__x86_64_out__Stream_6, ((MR_Box) ((MR_String) "\t\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_15);
                  }
#line 1606 "ll_backend.x86_64_out.c"
                }
#line 1608 "ll_backend.x86_64_out.c"
              else
#line 1610 "ll_backend.x86_64_out.c"
                {
#line 1227 "x86_64_out.m"
                  {
#line 1227 "x86_64_out.m"
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_instr_8bit_rel_offset\'/5", (MR_String) "check_signed_int_size failed");
#line 1227 "x86_64_out.m"
                    return;
                  }
#line 1619 "ll_backend.x86_64_out.c"
                }
#line 1219 "x86_64_out.m"
            }
#line 1229 "x86_64_out.m"
          else
#line 1230 "x86_64_out.m"
            {
#line 1230 "x86_64_out.m"
              {
#line 1230 "x86_64_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_instr_8bit_rel_offset\'/5", (MR_String) "string.to_int failed");
#line 1230 "x86_64_out.m"
                return;
              }
#line 1230 "x86_64_out.m"
            }
#line 1636 "ll_backend.x86_64_out.c"
        }
#line 1423 "x86_64_out.m"
      }
#line 1423 "x86_64_out.m"
    else
#line 1642 "ll_backend.x86_64_out.c"
      {
#line 1234 "x86_64_out.m"
        {
#line 1234 "x86_64_out.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_instr_8bit_rel_offset\'/5", (MR_String) "invalid operand: operand is not a relative offset");
#line 1234 "x86_64_out.m"
          return;
        }
#line 1651 "ll_backend.x86_64_out.c"
      }
#line 1653 "ll_backend.x86_64_out.c"
  }
#line 1210 "x86_64_out.m"
}

#line 1173 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(
#line 1173 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_53,
#line 1173 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_7,
#line 1173 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__Instr_8,
#line 1173 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op1_9,
#line 1173 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Op2_10)
#line 1173 "x86_64_out.m"
{
#line 1177 "x86_64_out.m"
  {
#line 1177 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 1177 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__Op1Type_12;

#line 1178 "x86_64_out.m"
    {
#line 1178 "x86_64_out.m"
      ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op1_9, &ll_backend__x86_64_out__Op1Type_12);
    }
#line 1202 "x86_64_out.m"
    if ((ll_backend__x86_64_out__Op2_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1203 "x86_64_out.m"
      {
#line 1203 "x86_64_out.m"
        MR_String ll_backend__x86_64_out__V_19_19;
#line 1691 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1693 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_18;

#line 1204 "x86_64_out.m"
        {
#line 1204 "x86_64_out.m"
          ll_backend__x86_64_out__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1Type_12, (MR_String) "\t\t");
        }
#line 1701 "ll_backend.x86_64_out.c"
        ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1703 "ll_backend.x86_64_out.c"
        {
#line 1705 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_19_19)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_18);
        }
#line 1203 "x86_64_out.m"
      }
#line 1202 "x86_64_out.m"
    else
#line 1180 "x86_64_out.m"
      {
#line 1180 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__Op2Result_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Op2_10, (MR_Integer) 0)));
#line 1350 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__V_57_57;
#line 1351 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__V_58_58;

#line 1350 "x86_64_out.m"
        ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Op1_9)) == (MR_mktag((MR_Integer) 2)));
#line 1350 "x86_64_out.m"
        if (ll_backend__x86_64_out__succeeded)
#line 1350 "x86_64_out.m"
          {
#line 1350 "x86_64_out.m"
            ll_backend__x86_64_out__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Op1_9, (MR_Integer) 0)));
#line 1351 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Op2Result_13)) == (MR_mktag((MR_Integer) 2)));
#line 1351 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 1351 "x86_64_out.m"
              ll_backend__x86_64_out__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Op2Result_13, (MR_Integer) 0)));
#line 1350 "x86_64_out.m"
          }
#line 1737 "ll_backend.x86_64_out.c"
        if (ll_backend__x86_64_out__succeeded)
#line 1739 "ll_backend.x86_64_out.c"
          {
#line 1199 "x86_64_out.m"
            {
#line 1199 "x86_64_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_instr_not_imm_dest\'/6", (MR_String) "invalid operands: two memory references are not allowed");
#line 1199 "x86_64_out.m"
              return;
            }
#line 1748 "ll_backend.x86_64_out.c"
          }
#line 1750 "ll_backend.x86_64_out.c"
        else
#line 1752 "ll_backend.x86_64_out.c"
          {
#line 1754 "ll_backend.x86_64_out.c"
            MR_String ll_backend__x86_64_out__Op2Type_15;
#line 1361 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__V_61_61;

#line 1184 "x86_64_out.m"
            {
#line 1184 "x86_64_out.m"
              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op2Result_13, &ll_backend__x86_64_out__Op2Type_15);
            }
#line 1361 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Op2Result_13)) == (MR_mktag((MR_Integer) 1)));
#line 1361 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 1361 "x86_64_out.m"
              {
#line 1361 "x86_64_out.m"
                ll_backend__x86_64_out__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Op2Result_13, (MR_Integer) 0)));
#line 1772 "ll_backend.x86_64_out.c"
                {
#line 1774 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_25_25;
#line 1776 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_28_28;
#line 1778 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_32_32;
#line 1780 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_35_35;
#line 1782 "ll_backend.x86_64_out.c"
                  MR_String ll_backend__x86_64_out__V_37_37;
#line 1784 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1786 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_26_26;
#line 1788 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1790 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_31_31;
#line 1792 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1794 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_33_33;
#line 1796 "ll_backend.x86_64_out.c"
                  void MR_CALL (* ll_backend__x86_64_out__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1798 "ll_backend.x86_64_out.c"
                  MR_Box ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_18;

#line 1192 "x86_64_out.m"
                  {
#line 1192 "x86_64_out.m"
                    ll_backend__x86_64_out__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2Type_15, (MR_String) ", %r13\t");
                  }
#line 1192 "x86_64_out.m"
                  {
#line 1192 "x86_64_out.m"
                    ll_backend__x86_64_out__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\tmov\t", ll_backend__x86_64_out__V_28_28);
                  }
#line 1811 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1813 "ll_backend.x86_64_out.c"
                  {
#line 1815 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_25_25)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_26_26);
                  }
#line 1818 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1820 "ll_backend.x86_64_out.c"
                  {
#line 1822 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_4(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) ((MR_String) "# move immediate to temp reg\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_31_31);
                  }
#line 1194 "x86_64_out.m"
                  {
#line 1194 "x86_64_out.m"
                    ll_backend__x86_64_out__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Instr_8, (MR_String) "\t");
                  }
#line 1194 "x86_64_out.m"
                  {
#line 1194 "x86_64_out.m"
                    ll_backend__x86_64_out__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_35_35);
                  }
#line 1835 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1837 "ll_backend.x86_64_out.c"
                  {
#line 1839 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_6(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_32_32)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_33_33);
                  }
#line 1195 "x86_64_out.m"
                  {
#line 1195 "x86_64_out.m"
                    ll_backend__x86_64_out__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1Type_12, (MR_String) ", %r13\t");
                  }
#line 1847 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1849 "ll_backend.x86_64_out.c"
                  {
#line 1851 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_8(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_37_37)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_18);
                  }
#line 1854 "ll_backend.x86_64_out.c"
                }
#line 1361 "x86_64_out.m"
              }
#line 1361 "x86_64_out.m"
            else
#line 1860 "ll_backend.x86_64_out.c"
              {
#line 1862 "ll_backend.x86_64_out.c"
                MR_String ll_backend__x86_64_out__V_42_42;
#line 1864 "ll_backend.x86_64_out.c"
                MR_String ll_backend__x86_64_out__V_45_45;
#line 1866 "ll_backend.x86_64_out.c"
                MR_String ll_backend__x86_64_out__V_47_47;
#line 1868 "ll_backend.x86_64_out.c"
                MR_String ll_backend__x86_64_out__V_49_49;
#line 1870 "ll_backend.x86_64_out.c"
                MR_String ll_backend__x86_64_out__V_51_51;
#line 1872 "ll_backend.x86_64_out.c"
                void MR_CALL (* ll_backend__x86_64_out__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1874 "ll_backend.x86_64_out.c"
                MR_Box ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_43_43;
#line 1876 "ll_backend.x86_64_out.c"
                void MR_CALL (* ll_backend__x86_64_out__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 1878 "ll_backend.x86_64_out.c"
                MR_Box ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_18;

#line 1188 "x86_64_out.m"
                {
#line 1188 "x86_64_out.m"
                  ll_backend__x86_64_out__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Instr_8, (MR_String) "\t");
                }
#line 1188 "x86_64_out.m"
                {
#line 1188 "x86_64_out.m"
                  ll_backend__x86_64_out__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_45_45);
                }
#line 1891 "ll_backend.x86_64_out.c"
                ll_backend__x86_64_out__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1893 "ll_backend.x86_64_out.c"
                {
#line 1895 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_10(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_42_42)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_43_43);
                }
#line 1189 "x86_64_out.m"
                {
#line 1189 "x86_64_out.m"
                  ll_backend__x86_64_out__V_51_51 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2Type_15, (MR_String) "\t");
                }
#line 1189 "x86_64_out.m"
                {
#line 1189 "x86_64_out.m"
                  ll_backend__x86_64_out__V_49_49 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_51_51);
                }
#line 1189 "x86_64_out.m"
                {
#line 1189 "x86_64_out.m"
                  ll_backend__x86_64_out__V_47_47 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1Type_12, ll_backend__x86_64_out__V_49_49);
                }
#line 1913 "ll_backend.x86_64_out.c"
                ll_backend__x86_64_out__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_53, (MR_Integer) 0)), (MR_Integer) 5)));
#line 1915 "ll_backend.x86_64_out.c"
                {
#line 1917 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_12(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_53), ll_backend__x86_64_out__Stream_7, ((MR_Box) (ll_backend__x86_64_out__V_47_47)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_18);
                }
#line 1920 "ll_backend.x86_64_out.c"
              }
#line 1922 "ll_backend.x86_64_out.c"
          }
#line 1180 "x86_64_out.m"
      }
#line 1177 "x86_64_out.m"
  }
#line 1173 "x86_64_out.m"
}

#line 1112 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__rel_offset_to_string_2_p_0(
#line 1112 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 1112 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__RelOffsetVal_2)
#line 1112 "x86_64_out.m"
{
#line 1114 "x86_64_out.m"
  {
#line 1114 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 1114 "x86_64_out.m"
    if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1127 "x86_64_out.m"
      {
#line 1127 "x86_64_out.m"
        MR_Integer ll_backend__x86_64_out__Val_11;
#line 1127 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 1127 "x86_64_out.m"
        ll_backend__x86_64_out__Val_11 = (MR_Integer) ll_backend__x86_64_out__V_14_14;
#line 1489 "x86_64_out.m"
        ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_11 >= (MR_Integer) -32768);
#line 1489 "x86_64_out.m"
        if (ll_backend__x86_64_out__succeeded)
#line 1490 "x86_64_out.m"
          ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_11 <= (MR_Integer) 32767);
#line 1962 "ll_backend.x86_64_out.c"
        if (ll_backend__x86_64_out__succeeded)
#line 1133 "x86_64_out.m"
          {
#line 1131 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_11 == (MR_Integer) 0);
#line 1133 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 1132 "x86_64_out.m"
              *ll_backend__x86_64_out__RelOffsetVal_2 = (MR_String) "";
#line 1133 "x86_64_out.m"
            else
#line 1134 "x86_64_out.m"
              {
#line 1134 "x86_64_out.m"
                *ll_backend__x86_64_out__RelOffsetVal_2 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_11);
              }
#line 1133 "x86_64_out.m"
          }
#line 1981 "ll_backend.x86_64_out.c"
        else
#line 1983 "ll_backend.x86_64_out.c"
          {
#line 1138 "x86_64_out.m"
            {
#line 1138 "x86_64_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.rel_offset_to_string\'/2", (MR_String) "ro16(int16): check_signed_int_size failed");
#line 1138 "x86_64_out.m"
              return;
            }
#line 1992 "ll_backend.x86_64_out.c"
          }
#line 1127 "x86_64_out.m"
      }
#line 1114 "x86_64_out.m"
    else
#line 1114 "x86_64_out.m"
      if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1140 "x86_64_out.m"
        {
#line 1140 "x86_64_out.m"
          MR_Integer ll_backend__x86_64_out__Val_19;
#line 1140 "x86_64_out.m"
          MR_Word ll_backend__x86_64_out__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 1140 "x86_64_out.m"
          ll_backend__x86_64_out__Val_19 = (MR_Integer) ll_backend__x86_64_out__V_22_22;
#line 1489 "x86_64_out.m"
          ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_19 >= (MR_Integer) -2147483648);
#line 1489 "x86_64_out.m"
          if (ll_backend__x86_64_out__succeeded)
#line 1490 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_19 <= (MR_Integer) 2147483647);
#line 2015 "ll_backend.x86_64_out.c"
          if (ll_backend__x86_64_out__succeeded)
#line 1146 "x86_64_out.m"
            {
#line 1144 "x86_64_out.m"
              ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_19 == (MR_Integer) 0);
#line 1146 "x86_64_out.m"
              if (ll_backend__x86_64_out__succeeded)
#line 1145 "x86_64_out.m"
                *ll_backend__x86_64_out__RelOffsetVal_2 = (MR_String) "";
#line 1146 "x86_64_out.m"
              else
#line 1147 "x86_64_out.m"
                {
#line 1147 "x86_64_out.m"
                  *ll_backend__x86_64_out__RelOffsetVal_2 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_19);
                }
#line 1146 "x86_64_out.m"
            }
#line 2034 "ll_backend.x86_64_out.c"
          else
#line 2036 "ll_backend.x86_64_out.c"
            {
#line 1151 "x86_64_out.m"
              {
#line 1151 "x86_64_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.rel_offset_to_string\'/2", (MR_String) "ro32(int32): check_signed_int_size failed");
#line 1151 "x86_64_out.m"
                return;
              }
#line 2045 "ll_backend.x86_64_out.c"
            }
#line 1140 "x86_64_out.m"
        }
#line 1114 "x86_64_out.m"
      else
#line 1114 "x86_64_out.m"
        {
#line 1114 "x86_64_out.m"
          MR_Integer ll_backend__x86_64_out__Val_3;
#line 1114 "x86_64_out.m"
          MR_Word ll_backend__x86_64_out__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 1114 "x86_64_out.m"
          ll_backend__x86_64_out__Val_3 = (MR_Integer) ll_backend__x86_64_out__V_6_6;
#line 1489 "x86_64_out.m"
          ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_3 >= (MR_Integer) -128);
#line 1489 "x86_64_out.m"
          if (ll_backend__x86_64_out__succeeded)
#line 1490 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_3 <= (MR_Integer) 127);
#line 2066 "ll_backend.x86_64_out.c"
          if (ll_backend__x86_64_out__succeeded)
#line 1120 "x86_64_out.m"
            {
#line 1118 "x86_64_out.m"
              ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Val_3 == (MR_Integer) 0);
#line 1120 "x86_64_out.m"
              if (ll_backend__x86_64_out__succeeded)
#line 1119 "x86_64_out.m"
                *ll_backend__x86_64_out__RelOffsetVal_2 = (MR_String) "";
#line 1120 "x86_64_out.m"
              else
#line 1121 "x86_64_out.m"
                {
#line 1121 "x86_64_out.m"
                  *ll_backend__x86_64_out__RelOffsetVal_2 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_3);
                }
#line 1120 "x86_64_out.m"
            }
#line 2085 "ll_backend.x86_64_out.c"
          else
#line 2087 "ll_backend.x86_64_out.c"
            {
#line 1125 "x86_64_out.m"
              {
#line 1125 "x86_64_out.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.rel_offset_to_string\'/2", (MR_String) "ro8(int8): check_signed_int_size failed");
#line 1125 "x86_64_out.m"
                return;
              }
#line 2096 "ll_backend.x86_64_out.c"
            }
#line 1114 "x86_64_out.m"
        }
#line 1114 "x86_64_out.m"
  }
#line 1112 "x86_64_out.m"
}

#line 539 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_inst_4_p_0(
#line 539 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_848,
#line 539 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 539 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2)
#line 539 "x86_64_out.m"
{
#line 542 "x86_64_out.m"
  {
#line 542 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 542 "x86_64_out.m"
    if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "x86_64_out.m"
      {
#line 604 "x86_64_out.m"
        MR_Box ll_backend__x86_64_out__conv0_STATE_VARIABLE_IO_4;

#line 604 "x86_64_out.m"
        {
#line 604 "x86_64_out.m"
          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcbw\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv0_STATE_VARIABLE_IO_4);
        }
#line 603 "x86_64_out.m"
      }
#line 542 "x86_64_out.m"
    else
#line 542 "x86_64_out.m"
      if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 611 "x86_64_out.m"
        {
#line 612 "x86_64_out.m"
          MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_4;

#line 612 "x86_64_out.m"
          {
#line 612 "x86_64_out.m"
            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcdq\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_4);
          }
#line 611 "x86_64_out.m"
        }
#line 542 "x86_64_out.m"
      else
#line 542 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 607 "x86_64_out.m"
          {
#line 608 "x86_64_out.m"
            MR_Box ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_4;

#line 608 "x86_64_out.m"
            {
#line 608 "x86_64_out.m"
              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcdqe\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_4);
            }
#line 607 "x86_64_out.m"
          }
#line 542 "x86_64_out.m"
        else
#line 542 "x86_64_out.m"
          if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "x86_64_out.m"
            {
#line 616 "x86_64_out.m"
              MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_4;

#line 616 "x86_64_out.m"
              {
#line 616 "x86_64_out.m"
                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tclc\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_4);
              }
#line 615 "x86_64_out.m"
            }
#line 542 "x86_64_out.m"
          else
#line 542 "x86_64_out.m"
            if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 617 "x86_64_out.m"
              {
#line 618 "x86_64_out.m"
                MR_Box ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_4;

#line 618 "x86_64_out.m"
                {
#line 618 "x86_64_out.m"
                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcld\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_4);
                }
#line 617 "x86_64_out.m"
              }
#line 542 "x86_64_out.m"
            else
#line 542 "x86_64_out.m"
              if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 619 "x86_64_out.m"
                {
#line 620 "x86_64_out.m"
                  MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_4;

#line 620 "x86_64_out.m"
                  {
#line 620 "x86_64_out.m"
                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcmc\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_4);
                  }
#line 619 "x86_64_out.m"
                }
#line 542 "x86_64_out.m"
              else
#line 542 "x86_64_out.m"
                if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 613 "x86_64_out.m"
                  {
#line 614 "x86_64_out.m"
                    MR_Box ll_backend__x86_64_out__conv6_STATE_VARIABLE_IO_4;

#line 614 "x86_64_out.m"
                    {
#line 614 "x86_64_out.m"
                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcqo\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv6_STATE_VARIABLE_IO_4);
                    }
#line 613 "x86_64_out.m"
                  }
#line 542 "x86_64_out.m"
                else
#line 542 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 609 "x86_64_out.m"
                    {
#line 610 "x86_64_out.m"
                      MR_Box ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_4;

#line 610 "x86_64_out.m"
                      {
#line 610 "x86_64_out.m"
                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcwd\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_4);
                      }
#line 609 "x86_64_out.m"
                    }
#line 542 "x86_64_out.m"
                  else
#line 542 "x86_64_out.m"
                    if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 605 "x86_64_out.m"
                      {
#line 606 "x86_64_out.m"
                        MR_Box ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_4;

#line 606 "x86_64_out.m"
                        {
#line 606 "x86_64_out.m"
                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tcwde\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_4);
                        }
#line 605 "x86_64_out.m"
                      }
#line 542 "x86_64_out.m"
                    else
#line 542 "x86_64_out.m"
                      if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 730 "x86_64_out.m"
                        {
#line 731 "x86_64_out.m"
                          MR_Box ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_4;

#line 731 "x86_64_out.m"
                          {
#line 731 "x86_64_out.m"
                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tleave\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_4);
                          }
#line 730 "x86_64_out.m"
                        }
#line 542 "x86_64_out.m"
                      else
#line 542 "x86_64_out.m"
                        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 748 "x86_64_out.m"
                          {
#line 749 "x86_64_out.m"
                            MR_Box ll_backend__x86_64_out__conv10_STATE_VARIABLE_IO_4;

#line 749 "x86_64_out.m"
                            {
#line 749 "x86_64_out.m"
                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "nop")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv10_STATE_VARIABLE_IO_4);
                            }
#line 748 "x86_64_out.m"
                          }
#line 542 "x86_64_out.m"
                        else
#line 542 "x86_64_out.m"
                          if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 756 "x86_64_out.m"
                            {
#line 757 "x86_64_out.m"
                              MR_Box ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_4;

#line 757 "x86_64_out.m"
                              {
#line 757 "x86_64_out.m"
                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tpopfq\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_4);
                              }
#line 756 "x86_64_out.m"
                            }
#line 542 "x86_64_out.m"
                          else
#line 542 "x86_64_out.m"
                            if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 762 "x86_64_out.m"
                              {
#line 763 "x86_64_out.m"
                                MR_Box ll_backend__x86_64_out__conv12_STATE_VARIABLE_IO_4;

#line 763 "x86_64_out.m"
                                {
#line 763 "x86_64_out.m"
                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tpushfq\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv12_STATE_VARIABLE_IO_4);
                                }
#line 762 "x86_64_out.m"
                              }
#line 542 "x86_64_out.m"
                            else
#line 542 "x86_64_out.m"
                              if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 957 "x86_64_out.m"
                                {
#line 958 "x86_64_out.m"
                                  MR_Box ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_4;

#line 958 "x86_64_out.m"
                                  {
#line 958 "x86_64_out.m"
                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tstc\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_4);
                                  }
#line 957 "x86_64_out.m"
                                }
#line 542 "x86_64_out.m"
                              else
#line 542 "x86_64_out.m"
                                if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 959 "x86_64_out.m"
                                  {
#line 960 "x86_64_out.m"
                                    MR_Box ll_backend__x86_64_out__conv14_STATE_VARIABLE_IO_4;

#line 960 "x86_64_out.m"
                                    {
#line 960 "x86_64_out.m"
                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tstd\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv14_STATE_VARIABLE_IO_4);
                                    }
#line 959 "x86_64_out.m"
                                  }
#line 542 "x86_64_out.m"
                                else
#line 542 "x86_64_out.m"
                                  if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 542 "x86_64_out.m"
                                    {
#line 542 "x86_64_out.m"
                                      MR_Word ll_backend__x86_64_out__Src_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 542 "x86_64_out.m"
                                      MR_Word ll_backend__x86_64_out__Dest_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 542 "x86_64_out.m"
                                      MR_Word ll_backend__x86_64_out__V_12_12;

#line 543 "x86_64_out.m"
                                      {
#line 543 "x86_64_out.m"
                                        ll_backend__x86_64_out__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "x86_64_out.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_12_12, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_7));
#line 543 "x86_64_out.m"
                                      }
#line 543 "x86_64_out.m"
                                      {
#line 543 "x86_64_out.m"
                                        ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "adc", ll_backend__x86_64_out__Src_6, ll_backend__x86_64_out__V_12_12);
#line 543 "x86_64_out.m"
                                        return;
                                      }
#line 542 "x86_64_out.m"
                                    }
#line 542 "x86_64_out.m"
                                  else
#line 542 "x86_64_out.m"
                                    if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 544 "x86_64_out.m"
                                      {
#line 544 "x86_64_out.m"
                                        MR_Word ll_backend__x86_64_out__Src_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 544 "x86_64_out.m"
                                        MR_Word ll_backend__x86_64_out__Dest_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 544 "x86_64_out.m"
                                        MR_Word ll_backend__x86_64_out__V_21_21;

#line 545 "x86_64_out.m"
                                        {
#line 545 "x86_64_out.m"
                                          ll_backend__x86_64_out__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 545 "x86_64_out.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_21_21, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_16));
#line 545 "x86_64_out.m"
                                        }
#line 545 "x86_64_out.m"
                                        {
#line 545 "x86_64_out.m"
                                          ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "add", ll_backend__x86_64_out__Src_15, ll_backend__x86_64_out__V_21_21);
#line 545 "x86_64_out.m"
                                          return;
                                        }
#line 544 "x86_64_out.m"
                                      }
#line 542 "x86_64_out.m"
                                    else
#line 542 "x86_64_out.m"
                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 546 "x86_64_out.m"
                                        {
#line 546 "x86_64_out.m"
                                          MR_Word ll_backend__x86_64_out__Src_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 546 "x86_64_out.m"
                                          MR_Word ll_backend__x86_64_out__Dest_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 546 "x86_64_out.m"
                                          MR_Word ll_backend__x86_64_out__V_30_30;

#line 547 "x86_64_out.m"
                                          {
#line 547 "x86_64_out.m"
                                            ll_backend__x86_64_out__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 547 "x86_64_out.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_30_30, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_25));
#line 547 "x86_64_out.m"
                                          }
#line 547 "x86_64_out.m"
                                          {
#line 547 "x86_64_out.m"
                                            ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "and", ll_backend__x86_64_out__Src_24, ll_backend__x86_64_out__V_30_30);
#line 547 "x86_64_out.m"
                                            return;
                                          }
#line 546 "x86_64_out.m"
                                        }
#line 542 "x86_64_out.m"
                                      else
#line 542 "x86_64_out.m"
                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 548 "x86_64_out.m"
                                          {
#line 548 "x86_64_out.m"
                                            MR_Word ll_backend__x86_64_out__Src_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 548 "x86_64_out.m"
                                            MR_Word ll_backend__x86_64_out__Dest_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 548 "x86_64_out.m"
                                            MR_Word ll_backend__x86_64_out__Cond_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 548 "x86_64_out.m"
                                            MR_Word ll_backend__x86_64_out__Result1_37;

#line 549 "x86_64_out.m"
                                            {
#line 549 "x86_64_out.m"
                                              ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Src_33, &ll_backend__x86_64_out__Result1_37);
                                            }
#line 570 "x86_64_out.m"
                                            if ((ll_backend__x86_64_out__Result1_37 == (MR_Integer) 0))
#line 571 "x86_64_out.m"
                                              {
#line 572 "x86_64_out.m"
                                                {
#line 572 "x86_64_out.m"
                                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "bsf: first operand is an immediate value");
#line 572 "x86_64_out.m"
                                                  return;
                                                }
#line 571 "x86_64_out.m"
                                              }
#line 570 "x86_64_out.m"
                                            else
#line 551 "x86_64_out.m"
                                              {
#line 551 "x86_64_out.m"
                                                MR_String ll_backend__x86_64_out__SrcType_38;
#line 551 "x86_64_out.m"
                                                MR_Word ll_backend__x86_64_out__DestRes_39;

#line 552 "x86_64_out.m"
                                                {
#line 552 "x86_64_out.m"
                                                  ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src_33, &ll_backend__x86_64_out__SrcType_38);
                                                }
#line 553 "x86_64_out.m"
                                                {
#line 553 "x86_64_out.m"
                                                  ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Dest_34, &ll_backend__x86_64_out__DestRes_39);
                                                }
#line 566 "x86_64_out.m"
                                                if ((ll_backend__x86_64_out__DestRes_39 == (MR_Integer) 0))
#line 567 "x86_64_out.m"
                                                  {
#line 568 "x86_64_out.m"
                                                    {
#line 568 "x86_64_out.m"
                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "bs: second operand is not a register");
#line 568 "x86_64_out.m"
                                                      return;
                                                    }
#line 567 "x86_64_out.m"
                                                  }
#line 566 "x86_64_out.m"
                                                else
#line 555 "x86_64_out.m"
                                                  {
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__Instr_40;
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__DestType_41;
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__V_50_50;
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__V_53_53;
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__V_55_55;
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__V_57_57;
#line 555 "x86_64_out.m"
                                                    MR_String ll_backend__x86_64_out__V_59_59;
#line 563 "x86_64_out.m"
                                                    MR_Box ll_backend__x86_64_out__conv15_STATE_VARIABLE_IO_51_51;
#line 565 "x86_64_out.m"
                                                    MR_Box ll_backend__x86_64_out__conv16_STATE_VARIABLE_IO_4;

#line 559 "x86_64_out.m"
                                                    if ((ll_backend__x86_64_out__Cond_35 == (MR_Integer) 0))
#line 558 "x86_64_out.m"
                                                      ll_backend__x86_64_out__Instr_40 = (MR_String) "bsf";
#line 559 "x86_64_out.m"
                                                    else
#line 561 "x86_64_out.m"
                                                      ll_backend__x86_64_out__Instr_40 = (MR_String) "bsr";
#line 563 "x86_64_out.m"
                                                    {
#line 563 "x86_64_out.m"
                                                      ll_backend__x86_64_out__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Instr_40, (MR_String) "\t");
                                                    }
#line 563 "x86_64_out.m"
                                                    {
#line 563 "x86_64_out.m"
                                                      ll_backend__x86_64_out__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_53_53);
                                                    }
#line 563 "x86_64_out.m"
                                                    {
#line 563 "x86_64_out.m"
                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_50_50)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv15_STATE_VARIABLE_IO_51_51);
                                                    }
#line 564 "x86_64_out.m"
                                                    {
#line 564 "x86_64_out.m"
                                                      ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_34, &ll_backend__x86_64_out__DestType_41);
                                                    }
#line 565 "x86_64_out.m"
                                                    {
#line 565 "x86_64_out.m"
                                                      ll_backend__x86_64_out__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__DestType_41, (MR_String) "\t");
                                                    }
#line 565 "x86_64_out.m"
                                                    {
#line 565 "x86_64_out.m"
                                                      ll_backend__x86_64_out__V_57_57 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_59_59);
                                                    }
#line 565 "x86_64_out.m"
                                                    {
#line 565 "x86_64_out.m"
                                                      ll_backend__x86_64_out__V_55_55 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__SrcType_38, ll_backend__x86_64_out__V_57_57);
                                                    }
#line 565 "x86_64_out.m"
                                                    {
#line 565 "x86_64_out.m"
                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_55_55)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv16_STATE_VARIABLE_IO_4);
                                                    }
#line 555 "x86_64_out.m"
                                                  }
#line 551 "x86_64_out.m"
                                              }
#line 548 "x86_64_out.m"
                                          }
#line 542 "x86_64_out.m"
                                        else
#line 542 "x86_64_out.m"
                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 575 "x86_64_out.m"
                                            {
#line 575 "x86_64_out.m"
                                              MR_Word ll_backend__x86_64_out__Op_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 575 "x86_64_out.m"
                                              MR_Word ll_backend__x86_64_out__Result_64;

#line 576 "x86_64_out.m"
                                              {
#line 576 "x86_64_out.m"
                                                ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Op_62, &ll_backend__x86_64_out__Result_64);
                                              }
#line 581 "x86_64_out.m"
                                              if ((ll_backend__x86_64_out__Result_64 == (MR_Integer) 0))
#line 582 "x86_64_out.m"
                                                {
#line 583 "x86_64_out.m"
                                                  {
#line 583 "x86_64_out.m"
                                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "bswap: operand is not a register");
#line 583 "x86_64_out.m"
                                                    return;
                                                  }
#line 582 "x86_64_out.m"
                                                }
#line 581 "x86_64_out.m"
                                              else
#line 578 "x86_64_out.m"
                                                {
#line 578 "x86_64_out.m"
                                                  MR_String ll_backend__x86_64_out__RegType_65;
#line 578 "x86_64_out.m"
                                                  MR_String ll_backend__x86_64_out__V_71_71;
#line 578 "x86_64_out.m"
                                                  MR_String ll_backend__x86_64_out__V_74_74;
#line 580 "x86_64_out.m"
                                                  MR_Box ll_backend__x86_64_out__conv17_STATE_VARIABLE_IO_4;

#line 579 "x86_64_out.m"
                                                  {
#line 579 "x86_64_out.m"
                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op_62, &ll_backend__x86_64_out__RegType_65);
                                                  }
#line 580 "x86_64_out.m"
                                                  {
#line 580 "x86_64_out.m"
                                                    ll_backend__x86_64_out__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__RegType_65, (MR_String) "\t\t");
                                                  }
#line 580 "x86_64_out.m"
                                                  {
#line 580 "x86_64_out.m"
                                                    ll_backend__x86_64_out__V_71_71 = mercury__string__f_43_43_2_f_0((MR_String) "\tbswap\t", ll_backend__x86_64_out__V_74_74);
                                                  }
#line 580 "x86_64_out.m"
                                                  {
#line 580 "x86_64_out.m"
                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_71_71)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv17_STATE_VARIABLE_IO_4);
                                                  }
#line 578 "x86_64_out.m"
                                                }
#line 575 "x86_64_out.m"
                                            }
#line 542 "x86_64_out.m"
                                          else
#line 542 "x86_64_out.m"
                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 585 "x86_64_out.m"
                                              {
#line 585 "x86_64_out.m"
                                                MR_Word ll_backend__x86_64_out__Src_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 585 "x86_64_out.m"
                                                MR_Word ll_backend__x86_64_out__Idx_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 586 "x86_64_out.m"
                                                {
#line 586 "x86_64_out.m"
                                                  ll_backend__x86_64_out__output_bit_test_instr_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "bt", ll_backend__x86_64_out__Src_77, ll_backend__x86_64_out__Idx_78);
#line 586 "x86_64_out.m"
                                                  return;
                                                }
#line 585 "x86_64_out.m"
                                              }
#line 542 "x86_64_out.m"
                                            else
#line 542 "x86_64_out.m"
                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 587 "x86_64_out.m"
                                                {
#line 587 "x86_64_out.m"
                                                  MR_Word ll_backend__x86_64_out__Src_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 587 "x86_64_out.m"
                                                  MR_Word ll_backend__x86_64_out__Idx_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 588 "x86_64_out.m"
                                                  {
#line 588 "x86_64_out.m"
                                                    ll_backend__x86_64_out__output_bit_test_instr_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "btc", ll_backend__x86_64_out__Src_85, ll_backend__x86_64_out__Idx_86);
#line 588 "x86_64_out.m"
                                                    return;
                                                  }
#line 587 "x86_64_out.m"
                                                }
#line 542 "x86_64_out.m"
                                              else
#line 542 "x86_64_out.m"
                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 589 "x86_64_out.m"
                                                  {
#line 589 "x86_64_out.m"
                                                    MR_Word ll_backend__x86_64_out__Src_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 589 "x86_64_out.m"
                                                    MR_Word ll_backend__x86_64_out__Idx_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 590 "x86_64_out.m"
                                                    {
#line 590 "x86_64_out.m"
                                                      ll_backend__x86_64_out__output_bit_test_instr_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "btr", ll_backend__x86_64_out__Src_93, ll_backend__x86_64_out__Idx_94);
#line 590 "x86_64_out.m"
                                                      return;
                                                    }
#line 589 "x86_64_out.m"
                                                  }
#line 542 "x86_64_out.m"
                                                else
#line 542 "x86_64_out.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 591 "x86_64_out.m"
                                                    {
#line 591 "x86_64_out.m"
                                                      MR_Word ll_backend__x86_64_out__Src_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 591 "x86_64_out.m"
                                                      MR_Word ll_backend__x86_64_out__Idx_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 592 "x86_64_out.m"
                                                      {
#line 592 "x86_64_out.m"
                                                        ll_backend__x86_64_out__output_bit_test_instr_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "bts", ll_backend__x86_64_out__Src_101, ll_backend__x86_64_out__Idx_102);
#line 592 "x86_64_out.m"
                                                        return;
                                                      }
#line 591 "x86_64_out.m"
                                                    }
#line 542 "x86_64_out.m"
                                                  else
#line 542 "x86_64_out.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 593 "x86_64_out.m"
                                                      {
#line 593 "x86_64_out.m"
                                                        MR_Word ll_backend__x86_64_out__Target_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 593 "x86_64_out.m"
                                                        MR_Word ll_backend__x86_64_out__Result_111;

#line 594 "x86_64_out.m"
                                                        {
#line 594 "x86_64_out.m"
                                                          ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Target_109, &ll_backend__x86_64_out__Result_111);
                                                        }
#line 599 "x86_64_out.m"
                                                        if ((ll_backend__x86_64_out__Result_111 == (MR_Integer) 0))
#line 600 "x86_64_out.m"
                                                          {
#line 601 "x86_64_out.m"
                                                            {
#line 601 "x86_64_out.m"
                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "call: invalid target operand");
#line 601 "x86_64_out.m"
                                                              return;
                                                            }
#line 600 "x86_64_out.m"
                                                          }
#line 599 "x86_64_out.m"
                                                        else
#line 596 "x86_64_out.m"
                                                          {
#line 596 "x86_64_out.m"
                                                            MR_String ll_backend__x86_64_out__TargetType_112;
#line 596 "x86_64_out.m"
                                                            MR_String ll_backend__x86_64_out__V_118_118;
#line 596 "x86_64_out.m"
                                                            MR_String ll_backend__x86_64_out__V_121_121;
#line 598 "x86_64_out.m"
                                                            MR_Box ll_backend__x86_64_out__conv18_STATE_VARIABLE_IO_4;

#line 597 "x86_64_out.m"
                                                            {
#line 597 "x86_64_out.m"
                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Target_109, &ll_backend__x86_64_out__TargetType_112);
                                                            }
#line 598 "x86_64_out.m"
                                                            {
#line 598 "x86_64_out.m"
                                                              ll_backend__x86_64_out__V_121_121 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__TargetType_112, (MR_String) "\t\t");
                                                            }
#line 598 "x86_64_out.m"
                                                            {
#line 598 "x86_64_out.m"
                                                              ll_backend__x86_64_out__V_118_118 = mercury__string__f_43_43_2_f_0((MR_String) "\tcall\t", ll_backend__x86_64_out__V_121_121);
                                                            }
#line 598 "x86_64_out.m"
                                                            {
#line 598 "x86_64_out.m"
                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_118_118)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv18_STATE_VARIABLE_IO_4);
                                                            }
#line 596 "x86_64_out.m"
                                                          }
#line 593 "x86_64_out.m"
                                                      }
#line 542 "x86_64_out.m"
                                                    else
#line 542 "x86_64_out.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 621 "x86_64_out.m"
                                                        {
#line 621 "x86_64_out.m"
                                                          MR_Word ll_backend__x86_64_out__Src_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 621 "x86_64_out.m"
                                                          MR_Word ll_backend__x86_64_out__Dest_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 621 "x86_64_out.m"
                                                          MR_Word ll_backend__x86_64_out__Cond_180 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 621 "x86_64_out.m"
                                                          MR_Word ll_backend__x86_64_out__V_185_185;

#line 622 "x86_64_out.m"
                                                          {
#line 622 "x86_64_out.m"
                                                            ll_backend__x86_64_out__V_185_185 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 622 "x86_64_out.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_185_185, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_179));
#line 622 "x86_64_out.m"
                                                          }
#line 622 "x86_64_out.m"
                                                          {
#line 622 "x86_64_out.m"
                                                            ll_backend__x86_64_out__output_instr_with_condition_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "cmov", ll_backend__x86_64_out__Src_178, ll_backend__x86_64_out__V_185_185, ll_backend__x86_64_out__Cond_180);
#line 622 "x86_64_out.m"
                                                            return;
                                                          }
#line 621 "x86_64_out.m"
                                                        }
#line 542 "x86_64_out.m"
                                                      else
#line 542 "x86_64_out.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 623 "x86_64_out.m"
                                                          {
#line 623 "x86_64_out.m"
                                                            MR_Word ll_backend__x86_64_out__Src_188 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 623 "x86_64_out.m"
                                                            MR_Word ll_backend__x86_64_out__Dest_189 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 623 "x86_64_out.m"
                                                            MR_Word ll_backend__x86_64_out__V_194_194;

#line 624 "x86_64_out.m"
                                                            {
#line 624 "x86_64_out.m"
                                                              ll_backend__x86_64_out__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 624 "x86_64_out.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_194_194, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_189));
#line 624 "x86_64_out.m"
                                                            }
#line 624 "x86_64_out.m"
                                                            {
#line 624 "x86_64_out.m"
                                                              ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "cmp", ll_backend__x86_64_out__Src_188, ll_backend__x86_64_out__V_194_194);
#line 624 "x86_64_out.m"
                                                              return;
                                                            }
#line 623 "x86_64_out.m"
                                                          }
#line 542 "x86_64_out.m"
                                                        else
#line 542 "x86_64_out.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 625 "x86_64_out.m"
                                                            {
#line 625 "x86_64_out.m"
                                                              MR_Word ll_backend__x86_64_out__Src_197 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 625 "x86_64_out.m"
                                                              MR_Word ll_backend__x86_64_out__Dest_198 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 625 "x86_64_out.m"
                                                              MR_Word ll_backend__x86_64_out__Result1_200;

#line 626 "x86_64_out.m"
                                                              {
#line 626 "x86_64_out.m"
                                                                ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Src_197, &ll_backend__x86_64_out__Result1_200);
                                                              }
#line 639 "x86_64_out.m"
                                                              if ((ll_backend__x86_64_out__Result1_200 == (MR_Integer) 0))
#line 640 "x86_64_out.m"
                                                                {
#line 641 "x86_64_out.m"
                                                                  {
#line 641 "x86_64_out.m"
                                                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "xmpxchg: invalid first operand");
#line 641 "x86_64_out.m"
                                                                    return;
                                                                  }
#line 640 "x86_64_out.m"
                                                                }
#line 639 "x86_64_out.m"
                                                              else
#line 628 "x86_64_out.m"
                                                                {
#line 628 "x86_64_out.m"
                                                                  MR_Word ll_backend__x86_64_out__Result2_201;

#line 629 "x86_64_out.m"
                                                                  {
#line 629 "x86_64_out.m"
                                                                    ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Dest_198, &ll_backend__x86_64_out__Result2_201);
                                                                  }
#line 635 "x86_64_out.m"
                                                                  if ((ll_backend__x86_64_out__Result2_201 == (MR_Integer) 0))
#line 636 "x86_64_out.m"
                                                                    {
#line 637 "x86_64_out.m"
                                                                      {
#line 637 "x86_64_out.m"
                                                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "xmpxchg: invalid second operand");
#line 637 "x86_64_out.m"
                                                                        return;
                                                                      }
#line 636 "x86_64_out.m"
                                                                    }
#line 635 "x86_64_out.m"
                                                                  else
#line 631 "x86_64_out.m"
                                                                    {
#line 631 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__Op1_202;
#line 631 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__Op2_203;
#line 631 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__V_212_212;
#line 631 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__V_215_215;
#line 631 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__V_216_216;
#line 631 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__V_218_218;
#line 634 "x86_64_out.m"
                                                                      MR_Box ll_backend__x86_64_out__conv19_STATE_VARIABLE_IO_4;

#line 632 "x86_64_out.m"
                                                                      {
#line 632 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src_197, &ll_backend__x86_64_out__Op1_202);
                                                                      }
#line 633 "x86_64_out.m"
                                                                      {
#line 633 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_198, &ll_backend__x86_64_out__Op2_203);
                                                                      }
#line 634 "x86_64_out.m"
                                                                      {
#line 634 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__V_218_218 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_203, (MR_String) "\t");
                                                                      }
#line 634 "x86_64_out.m"
                                                                      {
#line 634 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__V_216_216 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_218_218);
                                                                      }
#line 634 "x86_64_out.m"
                                                                      {
#line 634 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__V_215_215 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_202, ll_backend__x86_64_out__V_216_216);
                                                                      }
#line 634 "x86_64_out.m"
                                                                      {
#line 634 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__V_212_212 = mercury__string__f_43_43_2_f_0((MR_String) "\tcmp\t", ll_backend__x86_64_out__V_215_215);
                                                                      }
#line 634 "x86_64_out.m"
                                                                      {
#line 634 "x86_64_out.m"
                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_212_212)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv19_STATE_VARIABLE_IO_4);
                                                                      }
#line 631 "x86_64_out.m"
                                                                    }
#line 628 "x86_64_out.m"
                                                                }
#line 625 "x86_64_out.m"
                                                            }
#line 542 "x86_64_out.m"
                                                          else
#line 542 "x86_64_out.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 643 "x86_64_out.m"
                                                              {
#line 643 "x86_64_out.m"
                                                                MR_Word ll_backend__x86_64_out__Op_221 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 643 "x86_64_out.m"
                                                                MR_Word ll_backend__x86_64_out__Result_223;

#line 644 "x86_64_out.m"
                                                                {
#line 644 "x86_64_out.m"
                                                                  ll_backend__x86_64_out__check_operand_not_mem_ref_2_p_0(ll_backend__x86_64_out__Op_221, &ll_backend__x86_64_out__Result_223);
                                                                }
#line 649 "x86_64_out.m"
                                                                if ((ll_backend__x86_64_out__Result_223 == (MR_Integer) 0))
#line 646 "x86_64_out.m"
                                                                  {
#line 646 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__OpType_224;
#line 646 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__V_230_230;
#line 648 "x86_64_out.m"
                                                                    MR_Box ll_backend__x86_64_out__conv20_STATE_VARIABLE_IO_4;

#line 647 "x86_64_out.m"
                                                                    {
#line 647 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Op_221, &ll_backend__x86_64_out__OpType_224);
                                                                    }
#line 648 "x86_64_out.m"
                                                                    {
#line 648 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__V_230_230 = mercury__string__f_43_43_2_f_0((MR_String) "\tcmpxchg8b", ll_backend__x86_64_out__OpType_224);
                                                                    }
#line 648 "x86_64_out.m"
                                                                    {
#line 648 "x86_64_out.m"
                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_230_230)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv20_STATE_VARIABLE_IO_4);
                                                                    }
#line 646 "x86_64_out.m"
                                                                  }
#line 649 "x86_64_out.m"
                                                                else
#line 650 "x86_64_out.m"
                                                                  {
#line 651 "x86_64_out.m"
                                                                    {
#line 651 "x86_64_out.m"
                                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "cmpxchg8b: invalid operand");
#line 651 "x86_64_out.m"
                                                                      return;
                                                                    }
#line 650 "x86_64_out.m"
                                                                  }
#line 643 "x86_64_out.m"
                                                              }
#line 542 "x86_64_out.m"
                                                            else
#line 542 "x86_64_out.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 653 "x86_64_out.m"
                                                                {
#line 653 "x86_64_out.m"
                                                                  MR_Word ll_backend__x86_64_out__Operand_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 654 "x86_64_out.m"
                                                                  {
#line 654 "x86_64_out.m"
                                                                    ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "dec", ll_backend__x86_64_out__Operand_234, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 654 "x86_64_out.m"
                                                                    return;
                                                                  }
#line 653 "x86_64_out.m"
                                                                }
#line 542 "x86_64_out.m"
                                                              else
#line 542 "x86_64_out.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 655 "x86_64_out.m"
                                                                  {
#line 655 "x86_64_out.m"
                                                                    MR_Word ll_backend__x86_64_out__Operand_242 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 656 "x86_64_out.m"
                                                                    {
#line 656 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "div", ll_backend__x86_64_out__Operand_242, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 656 "x86_64_out.m"
                                                                      return;
                                                                    }
#line 655 "x86_64_out.m"
                                                                  }
#line 542 "x86_64_out.m"
                                                                else
#line 542 "x86_64_out.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 657 "x86_64_out.m"
                                                                    {
#line 657 "x86_64_out.m"
                                                                      MR_Word ll_backend__x86_64_out__StackSize_250 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 657 "x86_64_out.m"
                                                                      MR_Word ll_backend__x86_64_out__NestingLevel_251 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 657 "x86_64_out.m"
                                                                      MR_Integer ll_backend__x86_64_out__Size_253 = (MR_Integer) ll_backend__x86_64_out__StackSize_250;
#line 657 "x86_64_out.m"
                                                                      MR_Integer ll_backend__x86_64_out__Level_254 = (MR_Integer) ll_backend__x86_64_out__NestingLevel_251;
#line 657 "x86_64_out.m"
                                                                      MR_Word ll_backend__x86_64_out__Result0_255;
#line 657 "x86_64_out.m"
                                                                      MR_Word ll_backend__x86_64_out__Result1_256;

#line 660 "x86_64_out.m"
                                                                      {
#line 660 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__check_unsigned_int_size_3_p_0((MR_Integer) 16, ll_backend__x86_64_out__Size_253, &ll_backend__x86_64_out__Result0_255);
                                                                      }
#line 661 "x86_64_out.m"
                                                                      {
#line 661 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__check_unsigned_int_size_3_p_0((MR_Integer) 8, ll_backend__x86_64_out__Level_254, &ll_backend__x86_64_out__Result1_256);
                                                                      }
#line 663 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Result0_255 == (MR_Integer) 1);
#line 663 "x86_64_out.m"
                                                                      if (ll_backend__x86_64_out__succeeded)
#line 664 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Result1_256 == (MR_Integer) 1);
#line 671 "x86_64_out.m"
                                                                      if (ll_backend__x86_64_out__succeeded)
#line 666 "x86_64_out.m"
                                                                        {
#line 666 "x86_64_out.m"
                                                                          MR_Box ll_backend__x86_64_out__conv21_STATE_VARIABLE_IO_262_262;
#line 667 "x86_64_out.m"
                                                                          MR_Box ll_backend__x86_64_out__conv22_STATE_VARIABLE_IO_263_263;
#line 668 "x86_64_out.m"
                                                                          MR_Box ll_backend__x86_64_out__conv23_STATE_VARIABLE_IO_265_265;
#line 669 "x86_64_out.m"
                                                                          MR_Box ll_backend__x86_64_out__conv24_STATE_VARIABLE_IO_266_266;
#line 670 "x86_64_out.m"
                                                                          MR_Box ll_backend__x86_64_out__conv25_STATE_VARIABLE_IO_4;

#line 666 "x86_64_out.m"
                                                                          {
#line 666 "x86_64_out.m"
                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tenter\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv21_STATE_VARIABLE_IO_262_262);
                                                                          }
#line 667 "x86_64_out.m"
                                                                          {
#line 667 "x86_64_out.m"
                                                                            mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Size_253, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv22_STATE_VARIABLE_IO_263_263);
                                                                          }
#line 668 "x86_64_out.m"
                                                                          {
#line 668 "x86_64_out.m"
                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv23_STATE_VARIABLE_IO_265_265);
                                                                          }
#line 669 "x86_64_out.m"
                                                                          {
#line 669 "x86_64_out.m"
                                                                            mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Level_254, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv24_STATE_VARIABLE_IO_266_266);
                                                                          }
#line 670 "x86_64_out.m"
                                                                          {
#line 670 "x86_64_out.m"
                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv25_STATE_VARIABLE_IO_4);
                                                                          }
#line 666 "x86_64_out.m"
                                                                        }
#line 671 "x86_64_out.m"
                                                                      else
#line 672 "x86_64_out.m"
                                                                        {
#line 672 "x86_64_out.m"
                                                                          {
#line 672 "x86_64_out.m"
                                                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "enter: check_unsigned_int_size failed");
#line 672 "x86_64_out.m"
                                                                            return;
                                                                          }
#line 672 "x86_64_out.m"
                                                                        }
#line 657 "x86_64_out.m"
                                                                    }
#line 542 "x86_64_out.m"
                                                                  else
#line 542 "x86_64_out.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 674 "x86_64_out.m"
                                                                      {
#line 674 "x86_64_out.m"
                                                                        MR_Word ll_backend__x86_64_out__Operand_273 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 675 "x86_64_out.m"
                                                                        {
#line 675 "x86_64_out.m"
                                                                          ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "idiv", ll_backend__x86_64_out__Operand_273, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 675 "x86_64_out.m"
                                                                          return;
                                                                        }
#line 674 "x86_64_out.m"
                                                                      }
#line 542 "x86_64_out.m"
                                                                    else
#line 542 "x86_64_out.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 676 "x86_64_out.m"
                                                                        {
#line 676 "x86_64_out.m"
                                                                          MR_Word ll_backend__x86_64_out__Src_281 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 676 "x86_64_out.m"
                                                                          MR_Word ll_backend__x86_64_out__Dest_282 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 676 "x86_64_out.m"
                                                                          MR_Word ll_backend__x86_64_out__Mult_283 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 676 "x86_64_out.m"
                                                                          MR_String ll_backend__x86_64_out__SrcType_285;
#line 676 "x86_64_out.m"
                                                                          MR_String ll_backend__x86_64_out__V_294_294;
#line 678 "x86_64_out.m"
                                                                          MR_Box ll_backend__x86_64_out__conv26_STATE_VARIABLE_IO_295_295;

#line 677 "x86_64_out.m"
                                                                          {
#line 677 "x86_64_out.m"
                                                                            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src_281, &ll_backend__x86_64_out__SrcType_285);
                                                                          }
#line 678 "x86_64_out.m"
                                                                          {
#line 678 "x86_64_out.m"
                                                                            ll_backend__x86_64_out__V_294_294 = mercury__string__f_43_43_2_f_0((MR_String) "\timul\t", ll_backend__x86_64_out__SrcType_285);
                                                                          }
#line 678 "x86_64_out.m"
                                                                          {
#line 678 "x86_64_out.m"
                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_294_294)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv26_STATE_VARIABLE_IO_295_295);
                                                                          }
#line 699 "x86_64_out.m"
                                                                          if ((ll_backend__x86_64_out__Dest_282 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 700 "x86_64_out.m"
                                                                            {
#line 701 "x86_64_out.m"
                                                                              MR_Box ll_backend__x86_64_out__conv27_STATE_VARIABLE_IO_4;

#line 701 "x86_64_out.m"
                                                                              {
#line 701 "x86_64_out.m"
                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv27_STATE_VARIABLE_IO_4);
                                                                              }
#line 700 "x86_64_out.m"
                                                                            }
#line 699 "x86_64_out.m"
                                                                          else
#line 680 "x86_64_out.m"
                                                                            {
#line 680 "x86_64_out.m"
                                                                              MR_Word ll_backend__x86_64_out__DestRes_286 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Dest_282, (MR_Integer) 0)));
#line 680 "x86_64_out.m"
                                                                              MR_Word ll_backend__x86_64_out__Result1_287;
#line 680 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__DestType_288;
#line 680 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__V_300_300;
#line 690 "x86_64_out.m"
                                                                              MR_Box ll_backend__x86_64_out__conv28_STATE_VARIABLE_IO_301_301;

#line 681 "x86_64_out.m"
                                                                              {
#line 681 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__DestRes_286, &ll_backend__x86_64_out__Result1_287);
                                                                              }
#line 685 "x86_64_out.m"
                                                                              if ((ll_backend__x86_64_out__Result1_287 == (MR_Integer) 0))
#line 686 "x86_64_out.m"
                                                                                {
#line 686 "x86_64_out.m"
                                                                                  MR_Word ll_backend__x86_64_out__TempReg_289;
#line 686 "x86_64_out.m"
                                                                                  MR_Word ll_backend__x86_64_out__V_299_299;

#line 687 "x86_64_out.m"
                                                                                  {
#line 687 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__V_299_299 = ll_backend__x86_64_regs__get_scratch_reg_0_f_0();
                                                                                  }
#line 687 "x86_64_out.m"
                                                                                  {
#line 687 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__TempReg_289 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 687 "x86_64_out.m"
                                                                                    MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TempReg_289, 0) = ((MR_Box) (ll_backend__x86_64_out__V_299_299));
#line 687 "x86_64_out.m"
                                                                                  }
#line 688 "x86_64_out.m"
                                                                                  {
#line 688 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__TempReg_289, &ll_backend__x86_64_out__DestType_288);
                                                                                  }
#line 686 "x86_64_out.m"
                                                                                }
#line 685 "x86_64_out.m"
                                                                              else
#line 684 "x86_64_out.m"
                                                                                {
#line 684 "x86_64_out.m"
                                                                                  ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__DestRes_286, &ll_backend__x86_64_out__DestType_288);
                                                                                }
#line 690 "x86_64_out.m"
                                                                              {
#line 690 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__V_300_300 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__DestType_288);
                                                                              }
#line 690 "x86_64_out.m"
                                                                              {
#line 690 "x86_64_out.m"
                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_300_300)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv28_STATE_VARIABLE_IO_301_301);
                                                                              }
#line 695 "x86_64_out.m"
                                                                              if ((ll_backend__x86_64_out__Mult_283 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 696 "x86_64_out.m"
                                                                                {
#line 697 "x86_64_out.m"
                                                                                  MR_Box ll_backend__x86_64_out__conv29_STATE_VARIABLE_IO_4;

#line 697 "x86_64_out.m"
                                                                                  {
#line 697 "x86_64_out.m"
                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv29_STATE_VARIABLE_IO_4);
                                                                                  }
#line 696 "x86_64_out.m"
                                                                                }
#line 695 "x86_64_out.m"
                                                                              else
#line 692 "x86_64_out.m"
                                                                                {
#line 692 "x86_64_out.m"
                                                                                  MR_Word ll_backend__x86_64_out__MultRes_290 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Mult_283, (MR_Integer) 0)));
#line 692 "x86_64_out.m"
                                                                                  MR_String ll_backend__x86_64_out__Op3_291;
#line 692 "x86_64_out.m"
                                                                                  MR_String ll_backend__x86_64_out__V_305_305;
#line 692 "x86_64_out.m"
                                                                                  MR_String ll_backend__x86_64_out__V_308_308;
#line 694 "x86_64_out.m"
                                                                                  MR_Box ll_backend__x86_64_out__conv30_STATE_VARIABLE_IO_4;

#line 693 "x86_64_out.m"
                                                                                  {
#line 693 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__MultRes_290, &ll_backend__x86_64_out__Op3_291);
                                                                                  }
#line 694 "x86_64_out.m"
                                                                                  {
#line 694 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__V_308_308 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op3_291, (MR_String) " ");
                                                                                  }
#line 694 "x86_64_out.m"
                                                                                  {
#line 694 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__V_305_305 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_308_308);
                                                                                  }
#line 694 "x86_64_out.m"
                                                                                  {
#line 694 "x86_64_out.m"
                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_305_305)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv30_STATE_VARIABLE_IO_4);
                                                                                  }
#line 692 "x86_64_out.m"
                                                                                }
#line 680 "x86_64_out.m"
                                                                            }
#line 676 "x86_64_out.m"
                                                                        }
#line 542 "x86_64_out.m"
                                                                      else
#line 542 "x86_64_out.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 703 "x86_64_out.m"
                                                                          {
#line 703 "x86_64_out.m"
                                                                            MR_Word ll_backend__x86_64_out__Operand_311 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 704 "x86_64_out.m"
                                                                            {
#line 704 "x86_64_out.m"
                                                                              ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "inc", ll_backend__x86_64_out__Operand_311, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 704 "x86_64_out.m"
                                                                              return;
                                                                            }
#line 703 "x86_64_out.m"
                                                                          }
#line 542 "x86_64_out.m"
                                                                        else
#line 542 "x86_64_out.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 705 "x86_64_out.m"
                                                                            {
#line 705 "x86_64_out.m"
                                                                              MR_Word ll_backend__x86_64_out__Offset_319 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 705 "x86_64_out.m"
                                                                              MR_Word ll_backend__x86_64_out__Cond_320 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 706 "x86_64_out.m"
                                                                              {
#line 706 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__output_instr_with_condition_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "j", ll_backend__x86_64_out__Offset_319, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__x86_64_out__Cond_320);
#line 706 "x86_64_out.m"
                                                                                return;
                                                                              }
#line 705 "x86_64_out.m"
                                                                            }
#line 542 "x86_64_out.m"
                                                                          else
#line 542 "x86_64_out.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 709 "x86_64_out.m"
                                                                              {
#line 709 "x86_64_out.m"
                                                                                MR_Word ll_backend__x86_64_out__Target_335 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 709 "x86_64_out.m"
                                                                                MR_String ll_backend__x86_64_out__Op_337;
#line 709 "x86_64_out.m"
                                                                                MR_String ll_backend__x86_64_out__V_340_340;
#line 709 "x86_64_out.m"
                                                                                MR_String ll_backend__x86_64_out__V_343_343;
#line 711 "x86_64_out.m"
                                                                                MR_Box ll_backend__x86_64_out__conv31_STATE_VARIABLE_IO_4;

#line 710 "x86_64_out.m"
                                                                                {
#line 710 "x86_64_out.m"
                                                                                  ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Target_335, &ll_backend__x86_64_out__Op_337);
                                                                                }
#line 711 "x86_64_out.m"
                                                                                {
#line 711 "x86_64_out.m"
                                                                                  ll_backend__x86_64_out__V_343_343 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op_337, (MR_String) "\t\t");
                                                                                }
#line 711 "x86_64_out.m"
                                                                                {
#line 711 "x86_64_out.m"
                                                                                  ll_backend__x86_64_out__V_340_340 = mercury__string__f_43_43_2_f_0((MR_String) "\tjmp\t", ll_backend__x86_64_out__V_343_343);
                                                                                }
#line 711 "x86_64_out.m"
                                                                                {
#line 711 "x86_64_out.m"
                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_340_340)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv31_STATE_VARIABLE_IO_4);
                                                                                }
#line 709 "x86_64_out.m"
                                                                              }
#line 542 "x86_64_out.m"
                                                                            else
#line 542 "x86_64_out.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 707 "x86_64_out.m"
                                                                                {
#line 707 "x86_64_out.m"
                                                                                  MR_Word ll_backend__x86_64_out__RelOffset_328 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 708 "x86_64_out.m"
                                                                                  {
#line 708 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "jrcxz", ll_backend__x86_64_out__RelOffset_328);
#line 708 "x86_64_out.m"
                                                                                    return;
                                                                                  }
#line 707 "x86_64_out.m"
                                                                                }
#line 542 "x86_64_out.m"
                                                                              else
#line 542 "x86_64_out.m"
                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 712 "x86_64_out.m"
                                                                                  {
#line 712 "x86_64_out.m"
                                                                                    MR_Word ll_backend__x86_64_out__Src_346 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 712 "x86_64_out.m"
                                                                                    MR_Word ll_backend__x86_64_out__Dest_347 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 712 "x86_64_out.m"
                                                                                    MR_Word ll_backend__x86_64_out__Result1_349;

#line 713 "x86_64_out.m"
                                                                                    {
#line 713 "x86_64_out.m"
                                                                                      ll_backend__x86_64_out__check_operand_not_mem_ref_2_p_0(ll_backend__x86_64_out__Src_346, &ll_backend__x86_64_out__Result1_349);
                                                                                    }
#line 726 "x86_64_out.m"
                                                                                    if ((ll_backend__x86_64_out__Result1_349 == (MR_Integer) 0))
#line 715 "x86_64_out.m"
                                                                                      {
#line 715 "x86_64_out.m"
                                                                                        MR_Word ll_backend__x86_64_out__Result2_350;

#line 716 "x86_64_out.m"
                                                                                        {
#line 716 "x86_64_out.m"
                                                                                          ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Dest_347, &ll_backend__x86_64_out__Result2_350);
                                                                                        }
#line 722 "x86_64_out.m"
                                                                                        if ((ll_backend__x86_64_out__Result2_350 == (MR_Integer) 0))
#line 723 "x86_64_out.m"
                                                                                          {
#line 724 "x86_64_out.m"
                                                                                            {
#line 724 "x86_64_out.m"
                                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "lea: invalid second operand");
#line 724 "x86_64_out.m"
                                                                                              return;
                                                                                            }
#line 723 "x86_64_out.m"
                                                                                          }
#line 722 "x86_64_out.m"
                                                                                        else
#line 718 "x86_64_out.m"
                                                                                          {
#line 718 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__Op1_351;
#line 718 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__Op2_352;
#line 718 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__V_361_361;
#line 718 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__V_364_364;
#line 718 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__V_365_365;
#line 718 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__V_367_367;
#line 721 "x86_64_out.m"
                                                                                            MR_Box ll_backend__x86_64_out__conv32_STATE_VARIABLE_IO_4;

#line 719 "x86_64_out.m"
                                                                                            {
#line 719 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src_346, &ll_backend__x86_64_out__Op1_351);
                                                                                            }
#line 720 "x86_64_out.m"
                                                                                            {
#line 720 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_347, &ll_backend__x86_64_out__Op2_352);
                                                                                            }
#line 721 "x86_64_out.m"
                                                                                            {
#line 721 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__V_367_367 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_352, (MR_String) "\t");
                                                                                            }
#line 721 "x86_64_out.m"
                                                                                            {
#line 721 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__V_365_365 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_367_367);
                                                                                            }
#line 721 "x86_64_out.m"
                                                                                            {
#line 721 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__V_364_364 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_351, ll_backend__x86_64_out__V_365_365);
                                                                                            }
#line 721 "x86_64_out.m"
                                                                                            {
#line 721 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__V_361_361 = mercury__string__f_43_43_2_f_0((MR_String) "\tlea\t", ll_backend__x86_64_out__V_364_364);
                                                                                            }
#line 721 "x86_64_out.m"
                                                                                            {
#line 721 "x86_64_out.m"
                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_361_361)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv32_STATE_VARIABLE_IO_4);
                                                                                            }
#line 718 "x86_64_out.m"
                                                                                          }
#line 715 "x86_64_out.m"
                                                                                      }
#line 726 "x86_64_out.m"
                                                                                    else
#line 727 "x86_64_out.m"
                                                                                      {
#line 728 "x86_64_out.m"
                                                                                        {
#line 728 "x86_64_out.m"
                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "lea: invalid first operand");
#line 728 "x86_64_out.m"
                                                                                          return;
                                                                                        }
#line 727 "x86_64_out.m"
                                                                                      }
#line 712 "x86_64_out.m"
                                                                                  }
#line 542 "x86_64_out.m"
                                                                                else
#line 542 "x86_64_out.m"
                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 732 "x86_64_out.m"
                                                                                    {
#line 732 "x86_64_out.m"
                                                                                      MR_Word ll_backend__x86_64_out__RelOffset_376 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 733 "x86_64_out.m"
                                                                                      {
#line 733 "x86_64_out.m"
                                                                                        ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "loop", ll_backend__x86_64_out__RelOffset_376);
#line 733 "x86_64_out.m"
                                                                                        return;
                                                                                      }
#line 732 "x86_64_out.m"
                                                                                    }
#line 542 "x86_64_out.m"
                                                                                  else
#line 542 "x86_64_out.m"
                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 734 "x86_64_out.m"
                                                                                      {
#line 734 "x86_64_out.m"
                                                                                        MR_Word ll_backend__x86_64_out__RelOffset_383 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 735 "x86_64_out.m"
                                                                                        {
#line 735 "x86_64_out.m"
                                                                                          ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "loope", ll_backend__x86_64_out__RelOffset_383);
#line 735 "x86_64_out.m"
                                                                                          return;
                                                                                        }
#line 734 "x86_64_out.m"
                                                                                      }
#line 542 "x86_64_out.m"
                                                                                    else
#line 542 "x86_64_out.m"
                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 736 "x86_64_out.m"
                                                                                        {
#line 736 "x86_64_out.m"
                                                                                          MR_Word ll_backend__x86_64_out__RelOffset_390 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 737 "x86_64_out.m"
                                                                                          {
#line 737 "x86_64_out.m"
                                                                                            ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "loopne", ll_backend__x86_64_out__RelOffset_390);
#line 737 "x86_64_out.m"
                                                                                            return;
                                                                                          }
#line 736 "x86_64_out.m"
                                                                                        }
#line 542 "x86_64_out.m"
                                                                                      else
#line 542 "x86_64_out.m"
                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 738 "x86_64_out.m"
                                                                                          {
#line 738 "x86_64_out.m"
                                                                                            MR_Word ll_backend__x86_64_out__RelOffset_397 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 739 "x86_64_out.m"
                                                                                            {
#line 739 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "loopnz", ll_backend__x86_64_out__RelOffset_397);
#line 739 "x86_64_out.m"
                                                                                              return;
                                                                                            }
#line 738 "x86_64_out.m"
                                                                                          }
#line 542 "x86_64_out.m"
                                                                                        else
#line 542 "x86_64_out.m"
                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 740 "x86_64_out.m"
                                                                                            {
#line 740 "x86_64_out.m"
                                                                                              MR_Word ll_backend__x86_64_out__RelOffset_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 741 "x86_64_out.m"
                                                                                              {
#line 741 "x86_64_out.m"
                                                                                                ll_backend__x86_64_out__output_instr_8bit_rel_offset_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "loopz", ll_backend__x86_64_out__RelOffset_404);
#line 741 "x86_64_out.m"
                                                                                                return;
                                                                                              }
#line 740 "x86_64_out.m"
                                                                                            }
#line 542 "x86_64_out.m"
                                                                                          else
#line 542 "x86_64_out.m"
                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 742 "x86_64_out.m"
                                                                                              {
#line 742 "x86_64_out.m"
                                                                                                MR_Word ll_backend__x86_64_out__Src_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 742 "x86_64_out.m"
                                                                                                MR_Word ll_backend__x86_64_out__Dest_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 742 "x86_64_out.m"
                                                                                                MR_Word ll_backend__x86_64_out__V_417_417;

#line 743 "x86_64_out.m"
                                                                                                {
#line 743 "x86_64_out.m"
                                                                                                  ll_backend__x86_64_out__V_417_417 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 743 "x86_64_out.m"
                                                                                                  MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_417_417, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_412));
#line 743 "x86_64_out.m"
                                                                                                }
#line 743 "x86_64_out.m"
                                                                                                {
#line 743 "x86_64_out.m"
                                                                                                  ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "mov", ll_backend__x86_64_out__Src_411, ll_backend__x86_64_out__V_417_417);
#line 743 "x86_64_out.m"
                                                                                                  return;
                                                                                                }
#line 742 "x86_64_out.m"
                                                                                              }
#line 542 "x86_64_out.m"
                                                                                            else
#line 542 "x86_64_out.m"
                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 744 "x86_64_out.m"
                                                                                                {
#line 744 "x86_64_out.m"
                                                                                                  MR_Word ll_backend__x86_64_out__Operand_420 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 745 "x86_64_out.m"
                                                                                                  {
#line 745 "x86_64_out.m"
                                                                                                    ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "mul", ll_backend__x86_64_out__Operand_420, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 745 "x86_64_out.m"
                                                                                                    return;
                                                                                                  }
#line 744 "x86_64_out.m"
                                                                                                }
#line 542 "x86_64_out.m"
                                                                                              else
#line 542 "x86_64_out.m"
                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 746 "x86_64_out.m"
                                                                                                  {
#line 746 "x86_64_out.m"
                                                                                                    MR_Word ll_backend__x86_64_out__Operand_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 747 "x86_64_out.m"
                                                                                                    {
#line 747 "x86_64_out.m"
                                                                                                      ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "neg", ll_backend__x86_64_out__Operand_428, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 747 "x86_64_out.m"
                                                                                                      return;
                                                                                                    }
#line 746 "x86_64_out.m"
                                                                                                  }
#line 542 "x86_64_out.m"
                                                                                                else
#line 542 "x86_64_out.m"
                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 752 "x86_64_out.m"
                                                                                                    {
#line 752 "x86_64_out.m"
                                                                                                      MR_Word ll_backend__x86_64_out__Src_450 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 752 "x86_64_out.m"
                                                                                                      MR_Word ll_backend__x86_64_out__Dest_451 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 752 "x86_64_out.m"
                                                                                                      MR_Word ll_backend__x86_64_out__V_456_456;

#line 753 "x86_64_out.m"
                                                                                                      {
#line 753 "x86_64_out.m"
                                                                                                        ll_backend__x86_64_out__V_456_456 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 753 "x86_64_out.m"
                                                                                                        MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_456_456, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_451));
#line 753 "x86_64_out.m"
                                                                                                      }
#line 753 "x86_64_out.m"
                                                                                                      {
#line 753 "x86_64_out.m"
                                                                                                        ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "or", ll_backend__x86_64_out__Src_450, ll_backend__x86_64_out__V_456_456);
#line 753 "x86_64_out.m"
                                                                                                        return;
                                                                                                      }
#line 752 "x86_64_out.m"
                                                                                                    }
#line 542 "x86_64_out.m"
                                                                                                  else
#line 542 "x86_64_out.m"
                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 754 "x86_64_out.m"
                                                                                                      {
#line 754 "x86_64_out.m"
                                                                                                        MR_Word ll_backend__x86_64_out__Operand_459 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 755 "x86_64_out.m"
                                                                                                        {
#line 755 "x86_64_out.m"
                                                                                                          ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "pop", ll_backend__x86_64_out__Operand_459, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 755 "x86_64_out.m"
                                                                                                          return;
                                                                                                        }
#line 754 "x86_64_out.m"
                                                                                                      }
#line 542 "x86_64_out.m"
                                                                                                    else
#line 542 "x86_64_out.m"
                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 758 "x86_64_out.m"
                                                                                                        {
#line 758 "x86_64_out.m"
                                                                                                          MR_Word ll_backend__x86_64_out__Operand_473 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 758 "x86_64_out.m"
                                                                                                          MR_String ll_backend__x86_64_out__OperandType_475;
#line 758 "x86_64_out.m"
                                                                                                          MR_String ll_backend__x86_64_out__V_480_480;
#line 759 "x86_64_out.m"
                                                                                                          MR_Box ll_backend__x86_64_out__conv33_STATE_VARIABLE_IO_479_479;
#line 761 "x86_64_out.m"
                                                                                                          MR_Box ll_backend__x86_64_out__conv34_STATE_VARIABLE_IO_4;

#line 759 "x86_64_out.m"
                                                                                                          {
#line 759 "x86_64_out.m"
                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tpush\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv33_STATE_VARIABLE_IO_479_479);
                                                                                                          }
#line 760 "x86_64_out.m"
                                                                                                          {
#line 760 "x86_64_out.m"
                                                                                                            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Operand_473, &ll_backend__x86_64_out__OperandType_475);
                                                                                                          }
#line 761 "x86_64_out.m"
                                                                                                          {
#line 761 "x86_64_out.m"
                                                                                                            ll_backend__x86_64_out__V_480_480 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__OperandType_475, (MR_String) "\t");
                                                                                                          }
#line 761 "x86_64_out.m"
                                                                                                          {
#line 761 "x86_64_out.m"
                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_480_480)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv34_STATE_VARIABLE_IO_4);
                                                                                                          }
#line 758 "x86_64_out.m"
                                                                                                        }
#line 542 "x86_64_out.m"
                                                                                                      else
#line 542 "x86_64_out.m"
                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 764 "x86_64_out.m"
                                                                                                          {
#line 764 "x86_64_out.m"
                                                                                                            MR_Word ll_backend__x86_64_out__Amnt_490 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 764 "x86_64_out.m"
                                                                                                            MR_Word ll_backend__x86_64_out__Dest_491 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 764 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__Cond_492 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 764 "x86_64_out.m"
                                                                                                            MR_Word ll_backend__x86_64_out__Result1_494;

#line 765 "x86_64_out.m"
                                                                                                            {
#line 765 "x86_64_out.m"
                                                                                                              ll_backend__x86_64_out__check_rc_first_operand_2_p_0(ll_backend__x86_64_out__Amnt_490, &ll_backend__x86_64_out__Result1_494);
                                                                                                            }
#line 779 "x86_64_out.m"
                                                                                                            if ((ll_backend__x86_64_out__Result1_494 == (MR_Integer) 0))
#line 780 "x86_64_out.m"
                                                                                                              {
#line 781 "x86_64_out.m"
                                                                                                                {
#line 781 "x86_64_out.m"
                                                                                                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "rc: invalid first operand");
#line 781 "x86_64_out.m"
                                                                                                                  return;
                                                                                                                }
#line 780 "x86_64_out.m"
                                                                                                              }
#line 779 "x86_64_out.m"
                                                                                                            else
#line 767 "x86_64_out.m"
                                                                                                              {
#line 767 "x86_64_out.m"
                                                                                                                MR_Word ll_backend__x86_64_out__Result2_495;

#line 768 "x86_64_out.m"
                                                                                                                {
#line 768 "x86_64_out.m"
                                                                                                                  ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_491, &ll_backend__x86_64_out__Result2_495);
                                                                                                                }
#line 775 "x86_64_out.m"
                                                                                                                if ((ll_backend__x86_64_out__Result2_495 == (MR_Integer) 0))
#line 776 "x86_64_out.m"
                                                                                                                  {
#line 777 "x86_64_out.m"
                                                                                                                    {
#line 777 "x86_64_out.m"
                                                                                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "rc: invalid second operand");
#line 777 "x86_64_out.m"
                                                                                                                      return;
                                                                                                                    }
#line 776 "x86_64_out.m"
                                                                                                                  }
#line 775 "x86_64_out.m"
                                                                                                                else
#line 770 "x86_64_out.m"
                                                                                                                  {
#line 770 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__Op1_496;
#line 770 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__Op2_497;
#line 770 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__V_506_506;
#line 770 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__V_509_509;
#line 770 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__V_511_511;
#line 770 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__V_513_513;
#line 773 "x86_64_out.m"
                                                                                                                    MR_Box ll_backend__x86_64_out__conv35_STATE_VARIABLE_IO_507_507;
#line 774 "x86_64_out.m"
                                                                                                                    MR_Box ll_backend__x86_64_out__conv36_STATE_VARIABLE_IO_4;

#line 771 "x86_64_out.m"
                                                                                                                    {
#line 771 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_490, &ll_backend__x86_64_out__Op1_496);
                                                                                                                    }
#line 772 "x86_64_out.m"
                                                                                                                    {
#line 772 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_491, &ll_backend__x86_64_out__Op2_497);
                                                                                                                    }
#line 773 "x86_64_out.m"
                                                                                                                    {
#line 773 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__V_506_506 = mercury__string__f_43_43_2_f_0((MR_String) "\trc\t", ll_backend__x86_64_out__Cond_492);
                                                                                                                    }
#line 773 "x86_64_out.m"
                                                                                                                    {
#line 773 "x86_64_out.m"
                                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_506_506)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv35_STATE_VARIABLE_IO_507_507);
                                                                                                                    }
#line 774 "x86_64_out.m"
                                                                                                                    {
#line 774 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__V_513_513 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_497, (MR_String) "\t");
                                                                                                                    }
#line 774 "x86_64_out.m"
                                                                                                                    {
#line 774 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__V_511_511 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_513_513);
                                                                                                                    }
#line 774 "x86_64_out.m"
                                                                                                                    {
#line 774 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__V_509_509 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_496, ll_backend__x86_64_out__V_511_511);
                                                                                                                    }
#line 774 "x86_64_out.m"
                                                                                                                    {
#line 774 "x86_64_out.m"
                                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_509_509)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv36_STATE_VARIABLE_IO_4);
                                                                                                                    }
#line 770 "x86_64_out.m"
                                                                                                                  }
#line 767 "x86_64_out.m"
                                                                                                              }
#line 764 "x86_64_out.m"
                                                                                                          }
#line 542 "x86_64_out.m"
                                                                                                        else
#line 542 "x86_64_out.m"
                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 35))))
#line 783 "x86_64_out.m"
                                                                                                            {
#line 783 "x86_64_out.m"
                                                                                                              MR_Word ll_backend__x86_64_out__Op_516 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 787 "x86_64_out.m"
                                                                                                              if ((ll_backend__x86_64_out__Op_516 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 785 "x86_64_out.m"
                                                                                                                {
#line 786 "x86_64_out.m"
                                                                                                                  MR_Box ll_backend__x86_64_out__conv37_STATE_VARIABLE_IO_4;

#line 786 "x86_64_out.m"
                                                                                                                  {
#line 786 "x86_64_out.m"
                                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tret\t\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv37_STATE_VARIABLE_IO_4);
                                                                                                                  }
#line 785 "x86_64_out.m"
                                                                                                                }
#line 787 "x86_64_out.m"
                                                                                                              else
#line 788 "x86_64_out.m"
                                                                                                                {
#line 788 "x86_64_out.m"
                                                                                                                  MR_Word ll_backend__x86_64_out__OpRes_518 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Op_516, (MR_Integer) 0)));
#line 788 "x86_64_out.m"
                                                                                                                  MR_Integer ll_backend__x86_64_out__NumBytes_519 = (MR_Integer) ll_backend__x86_64_out__OpRes_518;
#line 788 "x86_64_out.m"
                                                                                                                  MR_Word ll_backend__x86_64_out__Result_520;

#line 790 "x86_64_out.m"
                                                                                                                  {
#line 790 "x86_64_out.m"
                                                                                                                    ll_backend__x86_64_out__check_unsigned_int_size_3_p_0((MR_Integer) 16, ll_backend__x86_64_out__NumBytes_519, &ll_backend__x86_64_out__Result_520);
                                                                                                                  }
#line 796 "x86_64_out.m"
                                                                                                                  if ((ll_backend__x86_64_out__Result_520 == (MR_Integer) 0))
#line 797 "x86_64_out.m"
                                                                                                                    {
#line 798 "x86_64_out.m"
                                                                                                                      {
#line 798 "x86_64_out.m"
                                                                                                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "ret: check_unsigned_int_size failed");
#line 798 "x86_64_out.m"
                                                                                                                        return;
                                                                                                                      }
#line 797 "x86_64_out.m"
                                                                                                                    }
#line 796 "x86_64_out.m"
                                                                                                                  else
#line 792 "x86_64_out.m"
                                                                                                                    {
#line 793 "x86_64_out.m"
                                                                                                                      MR_Box ll_backend__x86_64_out__conv38_STATE_VARIABLE_IO_528_528;
#line 794 "x86_64_out.m"
                                                                                                                      MR_Box ll_backend__x86_64_out__conv39_STATE_VARIABLE_IO_529_529;
#line 795 "x86_64_out.m"
                                                                                                                      MR_Box ll_backend__x86_64_out__conv40_STATE_VARIABLE_IO_4;

#line 793 "x86_64_out.m"
                                                                                                                      {
#line 793 "x86_64_out.m"
                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\tret\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv38_STATE_VARIABLE_IO_528_528);
                                                                                                                      }
#line 794 "x86_64_out.m"
                                                                                                                      {
#line 794 "x86_64_out.m"
                                                                                                                        mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__NumBytes_519, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv39_STATE_VARIABLE_IO_529_529);
                                                                                                                      }
#line 795 "x86_64_out.m"
                                                                                                                      {
#line 795 "x86_64_out.m"
                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv40_STATE_VARIABLE_IO_4);
                                                                                                                      }
#line 792 "x86_64_out.m"
                                                                                                                    }
#line 788 "x86_64_out.m"
                                                                                                                }
#line 783 "x86_64_out.m"
                                                                                                            }
#line 542 "x86_64_out.m"
                                                                                                          else
#line 542 "x86_64_out.m"
                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 36))))
#line 801 "x86_64_out.m"
                                                                                                              {
#line 801 "x86_64_out.m"
                                                                                                                MR_Word ll_backend__x86_64_out__Amnt_535 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 801 "x86_64_out.m"
                                                                                                                MR_Word ll_backend__x86_64_out__Dest_536 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 801 "x86_64_out.m"
                                                                                                                MR_String ll_backend__x86_64_out__Dir_537 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 801 "x86_64_out.m"
                                                                                                                MR_Word ll_backend__x86_64_out__Result1_539;

#line 802 "x86_64_out.m"
                                                                                                                {
#line 802 "x86_64_out.m"
                                                                                                                  ll_backend__x86_64_out__check_operand_not_mem_ref_2_p_0(ll_backend__x86_64_out__Amnt_535, &ll_backend__x86_64_out__Result1_539);
                                                                                                                }
#line 816 "x86_64_out.m"
                                                                                                                if ((ll_backend__x86_64_out__Result1_539 == (MR_Integer) 0))
#line 817 "x86_64_out.m"
                                                                                                                  {
#line 818 "x86_64_out.m"
                                                                                                                    {
#line 818 "x86_64_out.m"
                                                                                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "ro: invalid first operand");
#line 818 "x86_64_out.m"
                                                                                                                      return;
                                                                                                                    }
#line 817 "x86_64_out.m"
                                                                                                                  }
#line 816 "x86_64_out.m"
                                                                                                                else
#line 804 "x86_64_out.m"
                                                                                                                  {
#line 804 "x86_64_out.m"
                                                                                                                    MR_Word ll_backend__x86_64_out__Result2_540;

#line 805 "x86_64_out.m"
                                                                                                                    {
#line 805 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_536, &ll_backend__x86_64_out__Result2_540);
                                                                                                                    }
#line 812 "x86_64_out.m"
                                                                                                                    if ((ll_backend__x86_64_out__Result2_540 == (MR_Integer) 0))
#line 813 "x86_64_out.m"
                                                                                                                      {
#line 814 "x86_64_out.m"
                                                                                                                        {
#line 814 "x86_64_out.m"
                                                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "ro: invalid second operand");
#line 814 "x86_64_out.m"
                                                                                                                          return;
                                                                                                                        }
#line 813 "x86_64_out.m"
                                                                                                                      }
#line 812 "x86_64_out.m"
                                                                                                                    else
#line 807 "x86_64_out.m"
                                                                                                                      {
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__Op1_541;
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__Op2_542;
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__V_551_551;
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__V_554_554;
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__V_556_556;
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__V_558_558;
#line 807 "x86_64_out.m"
                                                                                                                        MR_String ll_backend__x86_64_out__V_560_560;
#line 810 "x86_64_out.m"
                                                                                                                        MR_Box ll_backend__x86_64_out__conv41_STATE_VARIABLE_IO_552_552;
#line 811 "x86_64_out.m"
                                                                                                                        MR_Box ll_backend__x86_64_out__conv42_STATE_VARIABLE_IO_4;

#line 808 "x86_64_out.m"
                                                                                                                        {
#line 808 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_535, &ll_backend__x86_64_out__Op1_541);
                                                                                                                        }
#line 809 "x86_64_out.m"
                                                                                                                        {
#line 809 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_536, &ll_backend__x86_64_out__Op2_542);
                                                                                                                        }
#line 810 "x86_64_out.m"
                                                                                                                        {
#line 810 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__V_554_554 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Dir_537, (MR_String) "\t");
                                                                                                                        }
#line 810 "x86_64_out.m"
                                                                                                                        {
#line 810 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__V_551_551 = mercury__string__f_43_43_2_f_0((MR_String) "\tro", ll_backend__x86_64_out__V_554_554);
                                                                                                                        }
#line 810 "x86_64_out.m"
                                                                                                                        {
#line 810 "x86_64_out.m"
                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_551_551)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv41_STATE_VARIABLE_IO_552_552);
                                                                                                                        }
#line 811 "x86_64_out.m"
                                                                                                                        {
#line 811 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__V_560_560 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_542, (MR_String) "\t\t");
                                                                                                                        }
#line 811 "x86_64_out.m"
                                                                                                                        {
#line 811 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__V_558_558 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_560_560);
                                                                                                                        }
#line 811 "x86_64_out.m"
                                                                                                                        {
#line 811 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__V_556_556 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_541, ll_backend__x86_64_out__V_558_558);
                                                                                                                        }
#line 811 "x86_64_out.m"
                                                                                                                        {
#line 811 "x86_64_out.m"
                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_556_556)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv42_STATE_VARIABLE_IO_4);
                                                                                                                        }
#line 807 "x86_64_out.m"
                                                                                                                      }
#line 804 "x86_64_out.m"
                                                                                                                  }
#line 801 "x86_64_out.m"
                                                                                                              }
#line 542 "x86_64_out.m"
                                                                                                            else
#line 542 "x86_64_out.m"
                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 37))))
#line 820 "x86_64_out.m"
                                                                                                                {
#line 820 "x86_64_out.m"
                                                                                                                  MR_Word ll_backend__x86_64_out__Amnt_563 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 820 "x86_64_out.m"
                                                                                                                  MR_Word ll_backend__x86_64_out__Dest_564 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 820 "x86_64_out.m"
                                                                                                                  MR_Word ll_backend__x86_64_out__Result1_566;

#line 821 "x86_64_out.m"
                                                                                                                  {
#line 821 "x86_64_out.m"
                                                                                                                    ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(ll_backend__x86_64_out__Amnt_563, &ll_backend__x86_64_out__Result1_566);
                                                                                                                  }
#line 834 "x86_64_out.m"
                                                                                                                  if ((ll_backend__x86_64_out__Result1_566 == (MR_Integer) 0))
#line 835 "x86_64_out.m"
                                                                                                                    {
#line 836 "x86_64_out.m"
                                                                                                                      {
#line 836 "x86_64_out.m"
                                                                                                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "sal: invalid first operand");
#line 836 "x86_64_out.m"
                                                                                                                        return;
                                                                                                                      }
#line 835 "x86_64_out.m"
                                                                                                                    }
#line 834 "x86_64_out.m"
                                                                                                                  else
#line 823 "x86_64_out.m"
                                                                                                                    {
#line 823 "x86_64_out.m"
                                                                                                                      MR_Word ll_backend__x86_64_out__Result2_567;

#line 824 "x86_64_out.m"
                                                                                                                      {
#line 824 "x86_64_out.m"
                                                                                                                        ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_564, &ll_backend__x86_64_out__Result2_567);
                                                                                                                      }
#line 830 "x86_64_out.m"
                                                                                                                      if ((ll_backend__x86_64_out__Result2_567 == (MR_Integer) 0))
#line 831 "x86_64_out.m"
                                                                                                                        {
#line 832 "x86_64_out.m"
                                                                                                                          {
#line 832 "x86_64_out.m"
                                                                                                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "sal: invalid second operand");
#line 832 "x86_64_out.m"
                                                                                                                            return;
                                                                                                                          }
#line 831 "x86_64_out.m"
                                                                                                                        }
#line 830 "x86_64_out.m"
                                                                                                                      else
#line 826 "x86_64_out.m"
                                                                                                                        {
#line 826 "x86_64_out.m"
                                                                                                                          MR_String ll_backend__x86_64_out__Op1_568;
#line 826 "x86_64_out.m"
                                                                                                                          MR_String ll_backend__x86_64_out__Op2_569;
#line 826 "x86_64_out.m"
                                                                                                                          MR_String ll_backend__x86_64_out__V_578_578;
#line 826 "x86_64_out.m"
                                                                                                                          MR_String ll_backend__x86_64_out__V_581_581;
#line 826 "x86_64_out.m"
                                                                                                                          MR_String ll_backend__x86_64_out__V_582_582;
#line 826 "x86_64_out.m"
                                                                                                                          MR_String ll_backend__x86_64_out__V_584_584;
#line 829 "x86_64_out.m"
                                                                                                                          MR_Box ll_backend__x86_64_out__conv43_STATE_VARIABLE_IO_4;

#line 827 "x86_64_out.m"
                                                                                                                          {
#line 827 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_563, &ll_backend__x86_64_out__Op1_568);
                                                                                                                          }
#line 828 "x86_64_out.m"
                                                                                                                          {
#line 828 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_564, &ll_backend__x86_64_out__Op2_569);
                                                                                                                          }
#line 829 "x86_64_out.m"
                                                                                                                          {
#line 829 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__V_584_584 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_569, (MR_String) "\t");
                                                                                                                          }
#line 829 "x86_64_out.m"
                                                                                                                          {
#line 829 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__V_582_582 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_584_584);
                                                                                                                          }
#line 829 "x86_64_out.m"
                                                                                                                          {
#line 829 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__V_581_581 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_568, ll_backend__x86_64_out__V_582_582);
                                                                                                                          }
#line 829 "x86_64_out.m"
                                                                                                                          {
#line 829 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__V_578_578 = mercury__string__f_43_43_2_f_0((MR_String) "\tsal\t", ll_backend__x86_64_out__V_581_581);
                                                                                                                          }
#line 829 "x86_64_out.m"
                                                                                                                          {
#line 829 "x86_64_out.m"
                                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_578_578)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv43_STATE_VARIABLE_IO_4);
                                                                                                                          }
#line 826 "x86_64_out.m"
                                                                                                                        }
#line 823 "x86_64_out.m"
                                                                                                                    }
#line 820 "x86_64_out.m"
                                                                                                                }
#line 542 "x86_64_out.m"
                                                                                                              else
#line 542 "x86_64_out.m"
                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 39))))
#line 856 "x86_64_out.m"
                                                                                                                  {
#line 856 "x86_64_out.m"
                                                                                                                    MR_Word ll_backend__x86_64_out__Amnt_611 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 856 "x86_64_out.m"
                                                                                                                    MR_Word ll_backend__x86_64_out__Dest_612 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 856 "x86_64_out.m"
                                                                                                                    MR_Word ll_backend__x86_64_out__Result1_614;

#line 857 "x86_64_out.m"
                                                                                                                    {
#line 857 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(ll_backend__x86_64_out__Amnt_611, &ll_backend__x86_64_out__Result1_614);
                                                                                                                    }
#line 870 "x86_64_out.m"
                                                                                                                    if ((ll_backend__x86_64_out__Result1_614 == (MR_Integer) 0))
#line 871 "x86_64_out.m"
                                                                                                                      {
#line 872 "x86_64_out.m"
                                                                                                                        {
#line 872 "x86_64_out.m"
                                                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "sar: invalid first operand");
#line 872 "x86_64_out.m"
                                                                                                                          return;
                                                                                                                        }
#line 871 "x86_64_out.m"
                                                                                                                      }
#line 870 "x86_64_out.m"
                                                                                                                    else
#line 859 "x86_64_out.m"
                                                                                                                      {
#line 859 "x86_64_out.m"
                                                                                                                        MR_Word ll_backend__x86_64_out__Result2_615;

#line 860 "x86_64_out.m"
                                                                                                                        {
#line 860 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_612, &ll_backend__x86_64_out__Result2_615);
                                                                                                                        }
#line 866 "x86_64_out.m"
                                                                                                                        if ((ll_backend__x86_64_out__Result2_615 == (MR_Integer) 0))
#line 867 "x86_64_out.m"
                                                                                                                          {
#line 868 "x86_64_out.m"
                                                                                                                            {
#line 868 "x86_64_out.m"
                                                                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "sar: invalid second operand");
#line 868 "x86_64_out.m"
                                                                                                                              return;
                                                                                                                            }
#line 867 "x86_64_out.m"
                                                                                                                          }
#line 866 "x86_64_out.m"
                                                                                                                        else
#line 862 "x86_64_out.m"
                                                                                                                          {
#line 862 "x86_64_out.m"
                                                                                                                            MR_String ll_backend__x86_64_out__Op1_616;
#line 862 "x86_64_out.m"
                                                                                                                            MR_String ll_backend__x86_64_out__Op2_617;
#line 862 "x86_64_out.m"
                                                                                                                            MR_String ll_backend__x86_64_out__V_626_626;
#line 862 "x86_64_out.m"
                                                                                                                            MR_String ll_backend__x86_64_out__V_629_629;
#line 862 "x86_64_out.m"
                                                                                                                            MR_String ll_backend__x86_64_out__V_630_630;
#line 862 "x86_64_out.m"
                                                                                                                            MR_String ll_backend__x86_64_out__V_632_632;
#line 865 "x86_64_out.m"
                                                                                                                            MR_Box ll_backend__x86_64_out__conv44_STATE_VARIABLE_IO_4;

#line 863 "x86_64_out.m"
                                                                                                                            {
#line 863 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_611, &ll_backend__x86_64_out__Op1_616);
                                                                                                                            }
#line 864 "x86_64_out.m"
                                                                                                                            {
#line 864 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_612, &ll_backend__x86_64_out__Op2_617);
                                                                                                                            }
#line 865 "x86_64_out.m"
                                                                                                                            {
#line 865 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__V_632_632 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_617, (MR_String) "\t");
                                                                                                                            }
#line 865 "x86_64_out.m"
                                                                                                                            {
#line 865 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__V_630_630 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_632_632);
                                                                                                                            }
#line 865 "x86_64_out.m"
                                                                                                                            {
#line 865 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__V_629_629 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_616, ll_backend__x86_64_out__V_630_630);
                                                                                                                            }
#line 865 "x86_64_out.m"
                                                                                                                            {
#line 865 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__V_626_626 = mercury__string__f_43_43_2_f_0((MR_String) "\tsar\t", ll_backend__x86_64_out__V_629_629);
                                                                                                                            }
#line 865 "x86_64_out.m"
                                                                                                                            {
#line 865 "x86_64_out.m"
                                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_626_626)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv44_STATE_VARIABLE_IO_4);
                                                                                                                            }
#line 862 "x86_64_out.m"
                                                                                                                          }
#line 859 "x86_64_out.m"
                                                                                                                      }
#line 856 "x86_64_out.m"
                                                                                                                  }
#line 542 "x86_64_out.m"
                                                                                                                else
#line 542 "x86_64_out.m"
                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 40))))
#line 874 "x86_64_out.m"
                                                                                                                    {
#line 874 "x86_64_out.m"
                                                                                                                      MR_Word ll_backend__x86_64_out__Src_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 874 "x86_64_out.m"
                                                                                                                      MR_Word ll_backend__x86_64_out__Dest_636 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 874 "x86_64_out.m"
                                                                                                                      MR_Word ll_backend__x86_64_out__V_641_641;

#line 875 "x86_64_out.m"
                                                                                                                      {
#line 875 "x86_64_out.m"
                                                                                                                        ll_backend__x86_64_out__V_641_641 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 875 "x86_64_out.m"
                                                                                                                        MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_641_641, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_636));
#line 875 "x86_64_out.m"
                                                                                                                      }
#line 875 "x86_64_out.m"
                                                                                                                      {
#line 875 "x86_64_out.m"
                                                                                                                        ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "sbb", ll_backend__x86_64_out__Src_635, ll_backend__x86_64_out__V_641_641);
#line 875 "x86_64_out.m"
                                                                                                                        return;
                                                                                                                      }
#line 874 "x86_64_out.m"
                                                                                                                    }
#line 542 "x86_64_out.m"
                                                                                                                  else
#line 542 "x86_64_out.m"
                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 41))))
#line 876 "x86_64_out.m"
                                                                                                                      {
#line 876 "x86_64_out.m"
                                                                                                                        MR_Word ll_backend__x86_64_out__Operand_644 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 876 "x86_64_out.m"
                                                                                                                        MR_Word ll_backend__x86_64_out__Cond_645 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 876 "x86_64_out.m"
                                                                                                                        MR_Word ll_backend__x86_64_out__Result_647;

#line 877 "x86_64_out.m"
                                                                                                                        {
#line 877 "x86_64_out.m"
                                                                                                                          ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Operand_644, &ll_backend__x86_64_out__Result_647);
                                                                                                                        }
#line 881 "x86_64_out.m"
                                                                                                                        if ((ll_backend__x86_64_out__Result_647 == (MR_Integer) 0))
#line 882 "x86_64_out.m"
                                                                                                                          {
#line 883 "x86_64_out.m"
                                                                                                                            {
#line 883 "x86_64_out.m"
                                                                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "set: invalid first operand");
#line 883 "x86_64_out.m"
                                                                                                                              return;
                                                                                                                            }
#line 882 "x86_64_out.m"
                                                                                                                          }
#line 881 "x86_64_out.m"
                                                                                                                        else
#line 879 "x86_64_out.m"
                                                                                                                          {
#line 880 "x86_64_out.m"
                                                                                                                            {
#line 880 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__output_instr_with_condition_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "set", ll_backend__x86_64_out__Operand_644, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__x86_64_out__Cond_645);
#line 880 "x86_64_out.m"
                                                                                                                              return;
                                                                                                                            }
#line 879 "x86_64_out.m"
                                                                                                                          }
#line 876 "x86_64_out.m"
                                                                                                                      }
#line 542 "x86_64_out.m"
                                                                                                                    else
#line 542 "x86_64_out.m"
                                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 38))))
#line 838 "x86_64_out.m"
                                                                                                                        {
#line 838 "x86_64_out.m"
                                                                                                                          MR_Word ll_backend__x86_64_out__Amnt_587 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 838 "x86_64_out.m"
                                                                                                                          MR_Word ll_backend__x86_64_out__Dest_588 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 838 "x86_64_out.m"
                                                                                                                          MR_Word ll_backend__x86_64_out__Result1_590;

#line 839 "x86_64_out.m"
                                                                                                                          {
#line 839 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(ll_backend__x86_64_out__Amnt_587, &ll_backend__x86_64_out__Result1_590);
                                                                                                                          }
#line 852 "x86_64_out.m"
                                                                                                                          if ((ll_backend__x86_64_out__Result1_590 == (MR_Integer) 0))
#line 853 "x86_64_out.m"
                                                                                                                            {
#line 854 "x86_64_out.m"
                                                                                                                              {
#line 854 "x86_64_out.m"
                                                                                                                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shl: invalid first operand");
#line 854 "x86_64_out.m"
                                                                                                                                return;
                                                                                                                              }
#line 853 "x86_64_out.m"
                                                                                                                            }
#line 852 "x86_64_out.m"
                                                                                                                          else
#line 841 "x86_64_out.m"
                                                                                                                            {
#line 841 "x86_64_out.m"
                                                                                                                              MR_Word ll_backend__x86_64_out__Result2_591;

#line 842 "x86_64_out.m"
                                                                                                                              {
#line 842 "x86_64_out.m"
                                                                                                                                ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_588, &ll_backend__x86_64_out__Result2_591);
                                                                                                                              }
#line 848 "x86_64_out.m"
                                                                                                                              if ((ll_backend__x86_64_out__Result2_591 == (MR_Integer) 0))
#line 849 "x86_64_out.m"
                                                                                                                                {
#line 850 "x86_64_out.m"
                                                                                                                                  {
#line 850 "x86_64_out.m"
                                                                                                                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shl: invalid second operand");
#line 850 "x86_64_out.m"
                                                                                                                                    return;
                                                                                                                                  }
#line 849 "x86_64_out.m"
                                                                                                                                }
#line 848 "x86_64_out.m"
                                                                                                                              else
#line 844 "x86_64_out.m"
                                                                                                                                {
#line 844 "x86_64_out.m"
                                                                                                                                  MR_String ll_backend__x86_64_out__Op1_592;
#line 844 "x86_64_out.m"
                                                                                                                                  MR_String ll_backend__x86_64_out__Op2_593;
#line 844 "x86_64_out.m"
                                                                                                                                  MR_String ll_backend__x86_64_out__V_602_602;
#line 844 "x86_64_out.m"
                                                                                                                                  MR_String ll_backend__x86_64_out__V_605_605;
#line 844 "x86_64_out.m"
                                                                                                                                  MR_String ll_backend__x86_64_out__V_606_606;
#line 844 "x86_64_out.m"
                                                                                                                                  MR_String ll_backend__x86_64_out__V_608_608;
#line 847 "x86_64_out.m"
                                                                                                                                  MR_Box ll_backend__x86_64_out__conv45_STATE_VARIABLE_IO_4;

#line 845 "x86_64_out.m"
                                                                                                                                  {
#line 845 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_587, &ll_backend__x86_64_out__Op1_592);
                                                                                                                                  }
#line 846 "x86_64_out.m"
                                                                                                                                  {
#line 846 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_588, &ll_backend__x86_64_out__Op2_593);
                                                                                                                                  }
#line 847 "x86_64_out.m"
                                                                                                                                  {
#line 847 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__V_608_608 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_593, (MR_String) "\t");
                                                                                                                                  }
#line 847 "x86_64_out.m"
                                                                                                                                  {
#line 847 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__V_606_606 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_608_608);
                                                                                                                                  }
#line 847 "x86_64_out.m"
                                                                                                                                  {
#line 847 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__V_605_605 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_592, ll_backend__x86_64_out__V_606_606);
                                                                                                                                  }
#line 847 "x86_64_out.m"
                                                                                                                                  {
#line 847 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__V_602_602 = mercury__string__f_43_43_2_f_0((MR_String) "\tshl\t", ll_backend__x86_64_out__V_605_605);
                                                                                                                                  }
#line 847 "x86_64_out.m"
                                                                                                                                  {
#line 847 "x86_64_out.m"
                                                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_602_602)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv45_STATE_VARIABLE_IO_4);
                                                                                                                                  }
#line 844 "x86_64_out.m"
                                                                                                                                }
#line 841 "x86_64_out.m"
                                                                                                                            }
#line 838 "x86_64_out.m"
                                                                                                                        }
#line 542 "x86_64_out.m"
                                                                                                                      else
#line 542 "x86_64_out.m"
                                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 42))))
#line 885 "x86_64_out.m"
                                                                                                                          {
#line 885 "x86_64_out.m"
                                                                                                                            MR_Word ll_backend__x86_64_out__Amnt_657 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 885 "x86_64_out.m"
                                                                                                                            MR_Word ll_backend__x86_64_out__Dest1_658 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 885 "x86_64_out.m"
                                                                                                                            MR_Word ll_backend__x86_64_out__Reg_659 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 885 "x86_64_out.m"
                                                                                                                            MR_Word ll_backend__x86_64_out__Result1_661;

#line 886 "x86_64_out.m"
                                                                                                                            {
#line 886 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(ll_backend__x86_64_out__Amnt_657, &ll_backend__x86_64_out__Result1_661);
                                                                                                                            }
#line 908 "x86_64_out.m"
                                                                                                                            if ((ll_backend__x86_64_out__Result1_661 == (MR_Integer) 0))
#line 909 "x86_64_out.m"
                                                                                                                              {
#line 910 "x86_64_out.m"
                                                                                                                                {
#line 910 "x86_64_out.m"
                                                                                                                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shld: invalid first operand");
#line 910 "x86_64_out.m"
                                                                                                                                  return;
                                                                                                                                }
#line 909 "x86_64_out.m"
                                                                                                                              }
#line 908 "x86_64_out.m"
                                                                                                                            else
#line 888 "x86_64_out.m"
                                                                                                                              {
#line 888 "x86_64_out.m"
                                                                                                                                MR_Word ll_backend__x86_64_out__Result2_662;

#line 889 "x86_64_out.m"
                                                                                                                                {
#line 889 "x86_64_out.m"
                                                                                                                                  ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest1_658, &ll_backend__x86_64_out__Result2_662);
                                                                                                                                }
#line 904 "x86_64_out.m"
                                                                                                                                if ((ll_backend__x86_64_out__Result2_662 == (MR_Integer) 0))
#line 905 "x86_64_out.m"
                                                                                                                                  {
#line 906 "x86_64_out.m"
                                                                                                                                    {
#line 906 "x86_64_out.m"
                                                                                                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shld: invalid second operand");
#line 906 "x86_64_out.m"
                                                                                                                                      return;
                                                                                                                                    }
#line 905 "x86_64_out.m"
                                                                                                                                  }
#line 904 "x86_64_out.m"
                                                                                                                                else
#line 891 "x86_64_out.m"
                                                                                                                                  {
#line 891 "x86_64_out.m"
                                                                                                                                    MR_Word ll_backend__x86_64_out__Result3_663;

#line 892 "x86_64_out.m"
                                                                                                                                    {
#line 892 "x86_64_out.m"
                                                                                                                                      ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Reg_659, &ll_backend__x86_64_out__Result3_663);
                                                                                                                                    }
#line 900 "x86_64_out.m"
                                                                                                                                    if ((ll_backend__x86_64_out__Result3_663 == (MR_Integer) 0))
#line 901 "x86_64_out.m"
                                                                                                                                      {
#line 902 "x86_64_out.m"
                                                                                                                                        {
#line 902 "x86_64_out.m"
                                                                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shld: invalid third operand");
#line 902 "x86_64_out.m"
                                                                                                                                          return;
                                                                                                                                        }
#line 901 "x86_64_out.m"
                                                                                                                                      }
#line 900 "x86_64_out.m"
                                                                                                                                    else
#line 894 "x86_64_out.m"
                                                                                                                                      {
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__Op1_664;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__Op2_665;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__Op3_666;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__V_678_678;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__V_681_681;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__V_683_683;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__V_685_685;
#line 894 "x86_64_out.m"
                                                                                                                                        MR_String ll_backend__x86_64_out__V_687_687;
#line 898 "x86_64_out.m"
                                                                                                                                        MR_Box ll_backend__x86_64_out__conv46_STATE_VARIABLE_IO_679_679;
#line 899 "x86_64_out.m"
                                                                                                                                        MR_Box ll_backend__x86_64_out__conv47_STATE_VARIABLE_IO_4;

#line 895 "x86_64_out.m"
                                                                                                                                        {
#line 895 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_657, &ll_backend__x86_64_out__Op1_664);
                                                                                                                                        }
#line 896 "x86_64_out.m"
                                                                                                                                        {
#line 896 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_657, &ll_backend__x86_64_out__Op2_665);
                                                                                                                                        }
#line 897 "x86_64_out.m"
                                                                                                                                        {
#line 897 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_657, &ll_backend__x86_64_out__Op3_666);
                                                                                                                                        }
#line 898 "x86_64_out.m"
                                                                                                                                        {
#line 898 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__V_681_681 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_664, (MR_String) ", ");
                                                                                                                                        }
#line 898 "x86_64_out.m"
                                                                                                                                        {
#line 898 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__V_678_678 = mercury__string__f_43_43_2_f_0((MR_String) "\tshld\t", ll_backend__x86_64_out__V_681_681);
                                                                                                                                        }
#line 898 "x86_64_out.m"
                                                                                                                                        {
#line 898 "x86_64_out.m"
                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_678_678)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv46_STATE_VARIABLE_IO_679_679);
                                                                                                                                        }
#line 899 "x86_64_out.m"
                                                                                                                                        {
#line 899 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__V_687_687 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op3_666, (MR_String) "\t");
                                                                                                                                        }
#line 899 "x86_64_out.m"
                                                                                                                                        {
#line 899 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__V_685_685 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_687_687);
                                                                                                                                        }
#line 899 "x86_64_out.m"
                                                                                                                                        {
#line 899 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__V_683_683 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_665, ll_backend__x86_64_out__V_685_685);
                                                                                                                                        }
#line 899 "x86_64_out.m"
                                                                                                                                        {
#line 899 "x86_64_out.m"
                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_683_683)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv47_STATE_VARIABLE_IO_4);
                                                                                                                                        }
#line 894 "x86_64_out.m"
                                                                                                                                      }
#line 891 "x86_64_out.m"
                                                                                                                                  }
#line 888 "x86_64_out.m"
                                                                                                                              }
#line 885 "x86_64_out.m"
                                                                                                                          }
#line 542 "x86_64_out.m"
                                                                                                                        else
#line 542 "x86_64_out.m"
                                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 912 "x86_64_out.m"
                                                                                                                            {
#line 912 "x86_64_out.m"
                                                                                                                              MR_Word ll_backend__x86_64_out__Amnt_690 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 912 "x86_64_out.m"
                                                                                                                              MR_Word ll_backend__x86_64_out__Dest_691 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 912 "x86_64_out.m"
                                                                                                                              MR_Word ll_backend__x86_64_out__Result1_693;

#line 913 "x86_64_out.m"
                                                                                                                              {
#line 913 "x86_64_out.m"
                                                                                                                                ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(ll_backend__x86_64_out__Amnt_690, &ll_backend__x86_64_out__Result1_693);
                                                                                                                              }
#line 926 "x86_64_out.m"
                                                                                                                              if ((ll_backend__x86_64_out__Result1_693 == (MR_Integer) 0))
#line 927 "x86_64_out.m"
                                                                                                                                {
#line 928 "x86_64_out.m"
                                                                                                                                  {
#line 928 "x86_64_out.m"
                                                                                                                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shr: invalid first operand");
#line 928 "x86_64_out.m"
                                                                                                                                    return;
                                                                                                                                  }
#line 927 "x86_64_out.m"
                                                                                                                                }
#line 926 "x86_64_out.m"
                                                                                                                              else
#line 915 "x86_64_out.m"
                                                                                                                                {
#line 915 "x86_64_out.m"
                                                                                                                                  MR_Word ll_backend__x86_64_out__Result2_694;

#line 916 "x86_64_out.m"
                                                                                                                                  {
#line 916 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_691, &ll_backend__x86_64_out__Result2_694);
                                                                                                                                  }
#line 922 "x86_64_out.m"
                                                                                                                                  if ((ll_backend__x86_64_out__Result2_694 == (MR_Integer) 0))
#line 923 "x86_64_out.m"
                                                                                                                                    {
#line 924 "x86_64_out.m"
                                                                                                                                      {
#line 924 "x86_64_out.m"
                                                                                                                                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shr: invalid second operand");
#line 924 "x86_64_out.m"
                                                                                                                                        return;
                                                                                                                                      }
#line 923 "x86_64_out.m"
                                                                                                                                    }
#line 922 "x86_64_out.m"
                                                                                                                                  else
#line 918 "x86_64_out.m"
                                                                                                                                    {
#line 918 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__Op1_695;
#line 918 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__Op2_696;
#line 918 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__V_705_705;
#line 918 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__V_708_708;
#line 918 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__V_709_709;
#line 918 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__V_711_711;
#line 921 "x86_64_out.m"
                                                                                                                                      MR_Box ll_backend__x86_64_out__conv48_STATE_VARIABLE_IO_4;

#line 919 "x86_64_out.m"
                                                                                                                                      {
#line 919 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_690, &ll_backend__x86_64_out__Op1_695);
                                                                                                                                      }
#line 920 "x86_64_out.m"
                                                                                                                                      {
#line 920 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_691, &ll_backend__x86_64_out__Op2_696);
                                                                                                                                      }
#line 921 "x86_64_out.m"
                                                                                                                                      {
#line 921 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__V_711_711 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_696, (MR_String) "\t");
                                                                                                                                      }
#line 921 "x86_64_out.m"
                                                                                                                                      {
#line 921 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__V_709_709 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_711_711);
                                                                                                                                      }
#line 921 "x86_64_out.m"
                                                                                                                                      {
#line 921 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__V_708_708 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_695, ll_backend__x86_64_out__V_709_709);
                                                                                                                                      }
#line 921 "x86_64_out.m"
                                                                                                                                      {
#line 921 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__V_705_705 = mercury__string__f_43_43_2_f_0((MR_String) "\tshr\t", ll_backend__x86_64_out__V_708_708);
                                                                                                                                      }
#line 921 "x86_64_out.m"
                                                                                                                                      {
#line 921 "x86_64_out.m"
                                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_705_705)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv48_STATE_VARIABLE_IO_4);
                                                                                                                                      }
#line 918 "x86_64_out.m"
                                                                                                                                    }
#line 915 "x86_64_out.m"
                                                                                                                                }
#line 912 "x86_64_out.m"
                                                                                                                            }
#line 542 "x86_64_out.m"
                                                                                                                          else
#line 542 "x86_64_out.m"
                                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 44))))
#line 930 "x86_64_out.m"
                                                                                                                              {
#line 930 "x86_64_out.m"
                                                                                                                                MR_Word ll_backend__x86_64_out__Amnt_714 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 930 "x86_64_out.m"
                                                                                                                                MR_Word ll_backend__x86_64_out__Dest1_715 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 930 "x86_64_out.m"
                                                                                                                                MR_Word ll_backend__x86_64_out__Reg_716 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 930 "x86_64_out.m"
                                                                                                                                MR_Word ll_backend__x86_64_out__Result1_718;

#line 931 "x86_64_out.m"
                                                                                                                                {
#line 931 "x86_64_out.m"
                                                                                                                                  ll_backend__x86_64_out__check_operand_unsigned_imm_or_reg_2_p_0(ll_backend__x86_64_out__Amnt_714, &ll_backend__x86_64_out__Result1_718);
                                                                                                                                }
#line 953 "x86_64_out.m"
                                                                                                                                if ((ll_backend__x86_64_out__Result1_718 == (MR_Integer) 0))
#line 954 "x86_64_out.m"
                                                                                                                                  {
#line 955 "x86_64_out.m"
                                                                                                                                    {
#line 955 "x86_64_out.m"
                                                                                                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shrd: invalid first operand");
#line 955 "x86_64_out.m"
                                                                                                                                      return;
                                                                                                                                    }
#line 954 "x86_64_out.m"
                                                                                                                                  }
#line 953 "x86_64_out.m"
                                                                                                                                else
#line 933 "x86_64_out.m"
                                                                                                                                  {
#line 933 "x86_64_out.m"
                                                                                                                                    MR_Word ll_backend__x86_64_out__Result2_719;

#line 934 "x86_64_out.m"
                                                                                                                                    {
#line 934 "x86_64_out.m"
                                                                                                                                      ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest1_715, &ll_backend__x86_64_out__Result2_719);
                                                                                                                                    }
#line 949 "x86_64_out.m"
                                                                                                                                    if ((ll_backend__x86_64_out__Result2_719 == (MR_Integer) 0))
#line 950 "x86_64_out.m"
                                                                                                                                      {
#line 951 "x86_64_out.m"
                                                                                                                                        {
#line 951 "x86_64_out.m"
                                                                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shrd: invalid second operand");
#line 951 "x86_64_out.m"
                                                                                                                                          return;
                                                                                                                                        }
#line 950 "x86_64_out.m"
                                                                                                                                      }
#line 949 "x86_64_out.m"
                                                                                                                                    else
#line 936 "x86_64_out.m"
                                                                                                                                      {
#line 936 "x86_64_out.m"
                                                                                                                                        MR_Word ll_backend__x86_64_out__Result3_720;

#line 937 "x86_64_out.m"
                                                                                                                                        {
#line 937 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Reg_716, &ll_backend__x86_64_out__Result3_720);
                                                                                                                                        }
#line 945 "x86_64_out.m"
                                                                                                                                        if ((ll_backend__x86_64_out__Result3_720 == (MR_Integer) 0))
#line 946 "x86_64_out.m"
                                                                                                                                          {
#line 947 "x86_64_out.m"
                                                                                                                                            {
#line 947 "x86_64_out.m"
                                                                                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "shrd: invalid third operand");
#line 947 "x86_64_out.m"
                                                                                                                                              return;
                                                                                                                                            }
#line 946 "x86_64_out.m"
                                                                                                                                          }
#line 945 "x86_64_out.m"
                                                                                                                                        else
#line 939 "x86_64_out.m"
                                                                                                                                          {
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__Op1_721;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__Op2_722;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__Op3_723;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_735_735;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_738_738;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_740_740;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_742_742;
#line 939 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_744_744;
#line 943 "x86_64_out.m"
                                                                                                                                            MR_Box ll_backend__x86_64_out__conv49_STATE_VARIABLE_IO_736_736;
#line 944 "x86_64_out.m"
                                                                                                                                            MR_Box ll_backend__x86_64_out__conv50_STATE_VARIABLE_IO_4;

#line 940 "x86_64_out.m"
                                                                                                                                            {
#line 940 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_714, &ll_backend__x86_64_out__Op1_721);
                                                                                                                                            }
#line 941 "x86_64_out.m"
                                                                                                                                            {
#line 941 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_714, &ll_backend__x86_64_out__Op2_722);
                                                                                                                                            }
#line 942 "x86_64_out.m"
                                                                                                                                            {
#line 942 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Amnt_714, &ll_backend__x86_64_out__Op3_723);
                                                                                                                                            }
#line 943 "x86_64_out.m"
                                                                                                                                            {
#line 943 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_738_738 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_721, (MR_String) ", ");
                                                                                                                                            }
#line 943 "x86_64_out.m"
                                                                                                                                            {
#line 943 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_735_735 = mercury__string__f_43_43_2_f_0((MR_String) "\tshrd\t", ll_backend__x86_64_out__V_738_738);
                                                                                                                                            }
#line 943 "x86_64_out.m"
                                                                                                                                            {
#line 943 "x86_64_out.m"
                                                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_735_735)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv49_STATE_VARIABLE_IO_736_736);
                                                                                                                                            }
#line 944 "x86_64_out.m"
                                                                                                                                            {
#line 944 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_744_744 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op3_723, (MR_String) "\t");
                                                                                                                                            }
#line 944 "x86_64_out.m"
                                                                                                                                            {
#line 944 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_742_742 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_744_744);
                                                                                                                                            }
#line 944 "x86_64_out.m"
                                                                                                                                            {
#line 944 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_740_740 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_722, ll_backend__x86_64_out__V_742_742);
                                                                                                                                            }
#line 944 "x86_64_out.m"
                                                                                                                                            {
#line 944 "x86_64_out.m"
                                                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_740_740)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv50_STATE_VARIABLE_IO_4);
                                                                                                                                            }
#line 939 "x86_64_out.m"
                                                                                                                                          }
#line 936 "x86_64_out.m"
                                                                                                                                      }
#line 933 "x86_64_out.m"
                                                                                                                                  }
#line 930 "x86_64_out.m"
                                                                                                                              }
#line 542 "x86_64_out.m"
                                                                                                                            else
#line 542 "x86_64_out.m"
                                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 45))))
#line 961 "x86_64_out.m"
                                                                                                                                {
#line 961 "x86_64_out.m"
                                                                                                                                  MR_Word ll_backend__x86_64_out__Src_759 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 961 "x86_64_out.m"
                                                                                                                                  MR_Word ll_backend__x86_64_out__Dest_760 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 961 "x86_64_out.m"
                                                                                                                                  MR_Word ll_backend__x86_64_out__V_765_765;

#line 962 "x86_64_out.m"
                                                                                                                                  {
#line 962 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__V_765_765 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 962 "x86_64_out.m"
                                                                                                                                    MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_765_765, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_760));
#line 962 "x86_64_out.m"
                                                                                                                                  }
#line 962 "x86_64_out.m"
                                                                                                                                  {
#line 962 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "sub", ll_backend__x86_64_out__Src_759, ll_backend__x86_64_out__V_765_765);
#line 962 "x86_64_out.m"
                                                                                                                                    return;
                                                                                                                                  }
#line 961 "x86_64_out.m"
                                                                                                                                }
#line 542 "x86_64_out.m"
                                                                                                                              else
#line 542 "x86_64_out.m"
                                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 46))))
#line 963 "x86_64_out.m"
                                                                                                                                  {
#line 963 "x86_64_out.m"
                                                                                                                                    MR_Word ll_backend__x86_64_out__Src1_768 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 963 "x86_64_out.m"
                                                                                                                                    MR_Word ll_backend__x86_64_out__Src2_769 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 963 "x86_64_out.m"
                                                                                                                                    MR_Word ll_backend__x86_64_out__Result1_771;

#line 964 "x86_64_out.m"
                                                                                                                                    {
#line 964 "x86_64_out.m"
                                                                                                                                      ll_backend__x86_64_out__check_operand_not_mem_ref_2_p_0(ll_backend__x86_64_out__Src1_768, &ll_backend__x86_64_out__Result1_771);
                                                                                                                                    }
#line 977 "x86_64_out.m"
                                                                                                                                    if ((ll_backend__x86_64_out__Result1_771 == (MR_Integer) 0))
#line 978 "x86_64_out.m"
                                                                                                                                      {
#line 979 "x86_64_out.m"
                                                                                                                                        {
#line 979 "x86_64_out.m"
                                                                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "test: invalid first operand");
#line 979 "x86_64_out.m"
                                                                                                                                          return;
                                                                                                                                        }
#line 978 "x86_64_out.m"
                                                                                                                                      }
#line 977 "x86_64_out.m"
                                                                                                                                    else
#line 966 "x86_64_out.m"
                                                                                                                                      {
#line 966 "x86_64_out.m"
                                                                                                                                        MR_Word ll_backend__x86_64_out__Result2_772;

#line 967 "x86_64_out.m"
                                                                                                                                        {
#line 967 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Src2_769, &ll_backend__x86_64_out__Result2_772);
                                                                                                                                        }
#line 973 "x86_64_out.m"
                                                                                                                                        if ((ll_backend__x86_64_out__Result2_772 == (MR_Integer) 0))
#line 974 "x86_64_out.m"
                                                                                                                                          {
#line 975 "x86_64_out.m"
                                                                                                                                            {
#line 975 "x86_64_out.m"
                                                                                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "test: invalid second operand");
#line 975 "x86_64_out.m"
                                                                                                                                              return;
                                                                                                                                            }
#line 974 "x86_64_out.m"
                                                                                                                                          }
#line 973 "x86_64_out.m"
                                                                                                                                        else
#line 969 "x86_64_out.m"
                                                                                                                                          {
#line 969 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__Op1_773;
#line 969 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__Op2_774;
#line 969 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_783_783;
#line 969 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_786_786;
#line 969 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_787_787;
#line 969 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_789_789;
#line 972 "x86_64_out.m"
                                                                                                                                            MR_Box ll_backend__x86_64_out__conv51_STATE_VARIABLE_IO_4;

#line 970 "x86_64_out.m"
                                                                                                                                            {
#line 970 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src1_768, &ll_backend__x86_64_out__Op1_773);
                                                                                                                                            }
#line 971 "x86_64_out.m"
                                                                                                                                            {
#line 971 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src2_769, &ll_backend__x86_64_out__Op2_774);
                                                                                                                                            }
#line 972 "x86_64_out.m"
                                                                                                                                            {
#line 972 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_789_789 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_774, (MR_String) "\t");
                                                                                                                                            }
#line 972 "x86_64_out.m"
                                                                                                                                            {
#line 972 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_787_787 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_789_789);
                                                                                                                                            }
#line 972 "x86_64_out.m"
                                                                                                                                            {
#line 972 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_786_786 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_773, ll_backend__x86_64_out__V_787_787);
                                                                                                                                            }
#line 972 "x86_64_out.m"
                                                                                                                                            {
#line 972 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_783_783 = mercury__string__f_43_43_2_f_0((MR_String) "\ttest\t", ll_backend__x86_64_out__V_786_786);
                                                                                                                                            }
#line 972 "x86_64_out.m"
                                                                                                                                            {
#line 972 "x86_64_out.m"
                                                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_783_783)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv51_STATE_VARIABLE_IO_4);
                                                                                                                                            }
#line 969 "x86_64_out.m"
                                                                                                                                          }
#line 966 "x86_64_out.m"
                                                                                                                                      }
#line 963 "x86_64_out.m"
                                                                                                                                  }
#line 542 "x86_64_out.m"
                                                                                                                                else
#line 542 "x86_64_out.m"
                                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 750 "x86_64_out.m"
                                                                                                                                    {
#line 750 "x86_64_out.m"
                                                                                                                                      MR_Word ll_backend__x86_64_out__Operand_442 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 751 "x86_64_out.m"
                                                                                                                                      {
#line 751 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "not", ll_backend__x86_64_out__Operand_442, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 751 "x86_64_out.m"
                                                                                                                                        return;
                                                                                                                                      }
#line 750 "x86_64_out.m"
                                                                                                                                    }
#line 542 "x86_64_out.m"
                                                                                                                                  else
#line 542 "x86_64_out.m"
                                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 47))))
#line 981 "x86_64_out.m"
                                                                                                                                      {
#line 981 "x86_64_out.m"
                                                                                                                                        MR_Word ll_backend__x86_64_out__Src_792 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 981 "x86_64_out.m"
                                                                                                                                        MR_Word ll_backend__x86_64_out__Dest_793 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 981 "x86_64_out.m"
                                                                                                                                        MR_Word ll_backend__x86_64_out__Result1_795;

#line 982 "x86_64_out.m"
                                                                                                                                        {
#line 982 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__check_operand_register_2_p_0(ll_backend__x86_64_out__Src_792, &ll_backend__x86_64_out__Result1_795);
                                                                                                                                        }
#line 996 "x86_64_out.m"
                                                                                                                                        if ((ll_backend__x86_64_out__Result1_795 == (MR_Integer) 0))
#line 997 "x86_64_out.m"
                                                                                                                                          {
#line 998 "x86_64_out.m"
                                                                                                                                            {
#line 998 "x86_64_out.m"
                                                                                                                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "xadd: first operand is not a register");
#line 998 "x86_64_out.m"
                                                                                                                                              return;
                                                                                                                                            }
#line 997 "x86_64_out.m"
                                                                                                                                          }
#line 996 "x86_64_out.m"
                                                                                                                                        else
#line 984 "x86_64_out.m"
                                                                                                                                          {
#line 984 "x86_64_out.m"
                                                                                                                                            MR_Word ll_backend__x86_64_out__Result2_796;

#line 985 "x86_64_out.m"
                                                                                                                                            {
#line 985 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__check_operand_not_immediate_2_p_0(ll_backend__x86_64_out__Dest_793, &ll_backend__x86_64_out__Result2_796);
                                                                                                                                            }
#line 991 "x86_64_out.m"
                                                                                                                                            if ((ll_backend__x86_64_out__Result2_796 == (MR_Integer) 0))
#line 992 "x86_64_out.m"
                                                                                                                                              {
#line 993 "x86_64_out.m"
                                                                                                                                                {
#line 993 "x86_64_out.m"
                                                                                                                                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "xadd: second operand is an immediate value");
#line 993 "x86_64_out.m"
                                                                                                                                                  return;
                                                                                                                                                }
#line 992 "x86_64_out.m"
                                                                                                                                              }
#line 991 "x86_64_out.m"
                                                                                                                                            else
#line 987 "x86_64_out.m"
                                                                                                                                              {
#line 987 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__Op1_797;
#line 987 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__Op2_798;
#line 987 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__V_807_807;
#line 987 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__V_810_810;
#line 987 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__V_811_811;
#line 987 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__V_813_813;
#line 990 "x86_64_out.m"
                                                                                                                                                MR_Box ll_backend__x86_64_out__conv52_STATE_VARIABLE_IO_4;

#line 988 "x86_64_out.m"
                                                                                                                                                {
#line 988 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src_792, &ll_backend__x86_64_out__Op1_797);
                                                                                                                                                }
#line 989 "x86_64_out.m"
                                                                                                                                                {
#line 989 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Dest_793, &ll_backend__x86_64_out__Op2_798);
                                                                                                                                                }
#line 990 "x86_64_out.m"
                                                                                                                                                {
#line 990 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__V_813_813 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_798, (MR_String) "\t");
                                                                                                                                                }
#line 990 "x86_64_out.m"
                                                                                                                                                {
#line 990 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__V_811_811 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_813_813);
                                                                                                                                                }
#line 990 "x86_64_out.m"
                                                                                                                                                {
#line 990 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__V_810_810 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_797, ll_backend__x86_64_out__V_811_811);
                                                                                                                                                }
#line 990 "x86_64_out.m"
                                                                                                                                                {
#line 990 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__V_807_807 = mercury__string__f_43_43_2_f_0((MR_String) "\txadd\t", ll_backend__x86_64_out__V_810_810);
                                                                                                                                                }
#line 990 "x86_64_out.m"
                                                                                                                                                {
#line 990 "x86_64_out.m"
                                                                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_807_807)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv52_STATE_VARIABLE_IO_4);
                                                                                                                                                }
#line 987 "x86_64_out.m"
                                                                                                                                              }
#line 984 "x86_64_out.m"
                                                                                                                                          }
#line 981 "x86_64_out.m"
                                                                                                                                      }
#line 542 "x86_64_out.m"
                                                                                                                                    else
#line 542 "x86_64_out.m"
                                                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 48))))
#line 1000 "x86_64_out.m"
                                                                                                                                        {
#line 1000 "x86_64_out.m"
                                                                                                                                          MR_Word ll_backend__x86_64_out__Src1_816 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1000 "x86_64_out.m"
                                                                                                                                          MR_Word ll_backend__x86_64_out__Src2_817 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 1000 "x86_64_out.m"
                                                                                                                                          MR_Word ll_backend__x86_64_out__Result1_819;

#line 1001 "x86_64_out.m"
                                                                                                                                          {
#line 1001 "x86_64_out.m"
                                                                                                                                            ll_backend__x86_64_out__check_operand_reg_or_mem_2_p_0(ll_backend__x86_64_out__Src1_816, &ll_backend__x86_64_out__Result1_819);
                                                                                                                                          }
#line 1014 "x86_64_out.m"
                                                                                                                                          if ((ll_backend__x86_64_out__Result1_819 == (MR_Integer) 0))
#line 1015 "x86_64_out.m"
                                                                                                                                            {
#line 1016 "x86_64_out.m"
                                                                                                                                              {
#line 1016 "x86_64_out.m"
                                                                                                                                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "xchg: invalid second operand");
#line 1016 "x86_64_out.m"
                                                                                                                                                return;
                                                                                                                                              }
#line 1015 "x86_64_out.m"
                                                                                                                                            }
#line 1014 "x86_64_out.m"
                                                                                                                                          else
#line 1003 "x86_64_out.m"
                                                                                                                                            {
#line 1003 "x86_64_out.m"
                                                                                                                                              MR_Word ll_backend__x86_64_out__Result2_820;

#line 1004 "x86_64_out.m"
                                                                                                                                              {
#line 1004 "x86_64_out.m"
                                                                                                                                                ll_backend__x86_64_out__check_operand_reg_or_mem_2_p_0(ll_backend__x86_64_out__Src2_817, &ll_backend__x86_64_out__Result2_820);
                                                                                                                                              }
#line 1010 "x86_64_out.m"
                                                                                                                                              if ((ll_backend__x86_64_out__Result2_820 == (MR_Integer) 0))
#line 1011 "x86_64_out.m"
                                                                                                                                                {
#line 1012 "x86_64_out.m"
                                                                                                                                                  {
#line 1012 "x86_64_out.m"
                                                                                                                                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_inst\'/4", (MR_String) "xchg: invalid second operand");
#line 1012 "x86_64_out.m"
                                                                                                                                                    return;
                                                                                                                                                  }
#line 1011 "x86_64_out.m"
                                                                                                                                                }
#line 1010 "x86_64_out.m"
                                                                                                                                              else
#line 1006 "x86_64_out.m"
                                                                                                                                                {
#line 1006 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__Op1_821;
#line 1006 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__Op2_822;
#line 1006 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_831_831;
#line 1006 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_834_834;
#line 1006 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_835_835;
#line 1006 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_837_837;
#line 1009 "x86_64_out.m"
                                                                                                                                                  MR_Box ll_backend__x86_64_out__conv53_STATE_VARIABLE_IO_4;

#line 1007 "x86_64_out.m"
                                                                                                                                                  {
#line 1007 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src1_816, &ll_backend__x86_64_out__Op1_821);
                                                                                                                                                  }
#line 1008 "x86_64_out.m"
                                                                                                                                                  {
#line 1008 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__x86_64_out__Src2_817, &ll_backend__x86_64_out__Op2_822);
                                                                                                                                                  }
#line 1009 "x86_64_out.m"
                                                                                                                                                  {
#line 1009 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_837_837 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op2_822, (MR_String) "\t");
                                                                                                                                                  }
#line 1009 "x86_64_out.m"
                                                                                                                                                  {
#line 1009 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_835_835 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__x86_64_out__V_837_837);
                                                                                                                                                  }
#line 1009 "x86_64_out.m"
                                                                                                                                                  {
#line 1009 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_834_834 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Op1_821, ll_backend__x86_64_out__V_835_835);
                                                                                                                                                  }
#line 1009 "x86_64_out.m"
                                                                                                                                                  {
#line 1009 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_831_831 = mercury__string__f_43_43_2_f_0((MR_String) "\txchg\t", ll_backend__x86_64_out__V_834_834);
                                                                                                                                                  }
#line 1009 "x86_64_out.m"
                                                                                                                                                  {
#line 1009 "x86_64_out.m"
                                                                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_831_831)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv53_STATE_VARIABLE_IO_4);
                                                                                                                                                  }
#line 1006 "x86_64_out.m"
                                                                                                                                                }
#line 1003 "x86_64_out.m"
                                                                                                                                            }
#line 1000 "x86_64_out.m"
                                                                                                                                        }
#line 542 "x86_64_out.m"
                                                                                                                                      else
#line 1018 "x86_64_out.m"
                                                                                                                                        {
#line 1018 "x86_64_out.m"
                                                                                                                                          MR_Word ll_backend__x86_64_out__Src_840 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 1018 "x86_64_out.m"
                                                                                                                                          MR_Word ll_backend__x86_64_out__Dest_841 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 1018 "x86_64_out.m"
                                                                                                                                          MR_Word ll_backend__x86_64_out__V_846_846;

#line 1019 "x86_64_out.m"
                                                                                                                                          {
#line 1019 "x86_64_out.m"
                                                                                                                                            ll_backend__x86_64_out__V_846_846 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "x86_64_out.m"
                                                                                                                                            MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__V_846_846, 0) = ((MR_Box) (ll_backend__x86_64_out__Dest_841));
#line 1019 "x86_64_out.m"
                                                                                                                                          }
#line 1019 "x86_64_out.m"
                                                                                                                                          {
#line 1019 "x86_64_out.m"
                                                                                                                                            ll_backend__x86_64_out__output_instr_not_imm_dest_6_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_848, ll_backend__x86_64_out__Stream_1, (MR_String) "xor", ll_backend__x86_64_out__Src_840, ll_backend__x86_64_out__V_846_846);
#line 1019 "x86_64_out.m"
                                                                                                                                            return;
                                                                                                                                          }
#line 1018 "x86_64_out.m"
                                                                                                                                        }
#line 542 "x86_64_out.m"
  }
#line 539 "x86_64_out.m"
}

#line 507 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_instr_4_p_0(
#line 507 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_51,
#line 507 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 507 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2)
#line 507 "x86_64_out.m"
{
#line 510 "x86_64_out.m"
  while (MR_TRUE)
#line 510 "x86_64_out.m"
    {
#line 510 "x86_64_out.m"
      /* tailcall optimized into a loop */
#line 510 "x86_64_out.m"
      {
#line 510 "x86_64_out.m"
        MR_bool ll_backend__x86_64_out__succeeded;

#line 510 "x86_64_out.m"
        if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 510 "x86_64_out.m"
          {
#line 510 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__Comment_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));

#line 511 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = (strcmp(ll_backend__x86_64_out__Comment_6, (MR_String) "") == 0);
#line 511 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = !(ll_backend__x86_64_out__succeeded);
#line 522 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 512 "x86_64_out.m"
              {
#line 5488 "ll_backend.x86_64_out.c"
                void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5490 "ll_backend.x86_64_out.c"
                MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_13_13;
#line 513 "x86_64_out.m"
                MR_Integer ll_backend__x86_64_out__V_14_14;

#line 5495 "ll_backend.x86_64_out.c"
                {
#line 5497 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_51), ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t# ")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_13_13);
                }
#line 513 "x86_64_out.m"
                {
#line 513 "x86_64_out.m"
                  ll_backend__x86_64_out__V_14_14 = mercury__string__count_codepoints_1_f_0(ll_backend__x86_64_out__Comment_6);
                }
#line 513 "x86_64_out.m"
                ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__V_14_14 > (MR_Integer) 68);
#line 519 "x86_64_out.m"
                if (ll_backend__x86_64_out__succeeded)
#line 515 "x86_64_out.m"
                  {
#line 515 "x86_64_out.m"
                    MR_String ll_backend__x86_64_out__Comment1_8;
#line 515 "x86_64_out.m"
                    MR_String ll_backend__x86_64_out__Comment2_9;
#line 515 "x86_64_out.m"
                    MR_String ll_backend__x86_64_out__V_17_17;
#line 515 "x86_64_out.m"
                    MR_Word ll_backend__x86_64_out__V_22_22;
#line 5519 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5521 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_18_18;
#line 5523 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5525 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_21_21;

#line 514 "x86_64_out.m"
                    {
#line 514 "x86_64_out.m"
                      mercury__string__split_by_codepoint_4_p_0(ll_backend__x86_64_out__Comment_6, (MR_Integer) 68, &ll_backend__x86_64_out__Comment1_8, &ll_backend__x86_64_out__Comment2_9);
                    }
#line 516 "x86_64_out.m"
                    {
#line 516 "x86_64_out.m"
                      ll_backend__x86_64_out__V_17_17 = mercury__string__word_wrap_2_f_0(ll_backend__x86_64_out__Comment1_8, (MR_Integer) 68);
                    }
#line 5538 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5540 "ll_backend.x86_64_out.c"
                    {
#line 5542 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_51), ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_17_17)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_18_18);
                    }
#line 5545 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5547 "ll_backend.x86_64_out.c"
                    {
#line 5549 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_4(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_51), ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_21_21);
                    }
#line 518 "x86_64_out.m"
                    {
#line 518 "x86_64_out.m"
                      ll_backend__x86_64_out__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 518 "x86_64_out.m"
                      MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__V_22_22, 0) = ((MR_Box) (ll_backend__x86_64_out__Comment2_9));
#line 518 "x86_64_out.m"
                    }
#line 518 "x86_64_out.m"
                    /* direct tailcall eliminated */
#line 518 "x86_64_out.m"
                    {
#line 518 "x86_64_out.m"
                      MR_Word ll_backend__x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__x86_64_out__V_22_22;

#line 518 "x86_64_out.m"
                      ll_backend__x86_64_out__HeadVar__2_2 = ll_backend__x86_64_out__HeadVar__2__tmp_copy_2;
#line 518 "x86_64_out.m"
                    }
#line 518 "x86_64_out.m"
                    continue;
#line 515 "x86_64_out.m"
                  }
#line 519 "x86_64_out.m"
                else
#line 520 "x86_64_out.m"
                  {
#line 520 "x86_64_out.m"
                    MR_String ll_backend__x86_64_out__V_24_24;
#line 5581 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5583 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_4;

#line 520 "x86_64_out.m"
                    {
#line 520 "x86_64_out.m"
                      ll_backend__x86_64_out__V_24_24 = mercury__string__word_wrap_2_f_0(ll_backend__x86_64_out__Comment_6, (MR_Integer) 68);
                    }
#line 5591 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_6 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5593 "ll_backend.x86_64_out.c"
                    {
#line 5595 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_6(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_51), ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_24_24)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_4);
                    }
#line 520 "x86_64_out.m"
                  }
#line 512 "x86_64_out.m"
              }
#line 522 "x86_64_out.m"
            else
#line 520 "x86_64_out.m"
              {
#line 520 "x86_64_out.m"
              }
#line 510 "x86_64_out.m"
          }
#line 510 "x86_64_out.m"
        else
#line 510 "x86_64_out.m"
          if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 531 "x86_64_out.m"
            {
#line 531 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__PseudoOp_38 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));

#line 532 "x86_64_out.m"
              {
#line 532 "x86_64_out.m"
                ll_backend__x86_64_out__output_x86_64_pseudo_op_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_51, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__PseudoOp_38);
#line 532 "x86_64_out.m"
                return;
              }
#line 531 "x86_64_out.m"
            }
#line 510 "x86_64_out.m"
          else
#line 510 "x86_64_out.m"
            if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 533 "x86_64_out.m"
              {
#line 533 "x86_64_out.m"
                MR_Word ll_backend__x86_64_out__Instr_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 5636 "ll_backend.x86_64_out.c"
                void MR_CALL (* ll_backend__x86_64_out__func_8)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5638 "ll_backend.x86_64_out.c"
                MR_Box ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_4;

#line 534 "x86_64_out.m"
                {
#line 534 "x86_64_out.m"
                  ll_backend__x86_64_out__output_x86_64_inst_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_51, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Instr_44);
                }
#line 5646 "ll_backend.x86_64_out.c"
                ll_backend__x86_64_out__func_8 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5648 "ll_backend.x86_64_out.c"
                {
#line 5650 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_8(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_51), ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_4);
                }
#line 533 "x86_64_out.m"
              }
#line 510 "x86_64_out.m"
            else
#line 525 "x86_64_out.m"
              {
#line 525 "x86_64_out.m"
                MR_String ll_backend__x86_64_out__LabelName_28 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));

#line 526 "x86_64_out.m"
                ll_backend__x86_64_out__succeeded = (strcmp(ll_backend__x86_64_out__LabelName_28, (MR_String) "") == 0);
#line 526 "x86_64_out.m"
                ll_backend__x86_64_out__succeeded = !(ll_backend__x86_64_out__succeeded);
#line 528 "x86_64_out.m"
                if (ll_backend__x86_64_out__succeeded)
#line 527 "x86_64_out.m"
                  {
#line 527 "x86_64_out.m"
                    MR_String ll_backend__x86_64_out__V_32_32;
#line 527 "x86_64_out.m"
                    MR_String ll_backend__x86_64_out__V_35_35;
#line 5674 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_10)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 5676 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_4;

#line 527 "x86_64_out.m"
                    {
#line 527 "x86_64_out.m"
                      ll_backend__x86_64_out__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__LabelName_28, (MR_String) ":");
                    }
#line 527 "x86_64_out.m"
                    {
#line 527 "x86_64_out.m"
                      ll_backend__x86_64_out__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__x86_64_out__V_35_35);
                    }
#line 5689 "ll_backend.x86_64_out.c"
                    ll_backend__x86_64_out__func_10 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_51, (MR_Integer) 0)), (MR_Integer) 5)));
#line 5691 "ll_backend.x86_64_out.c"
                    {
#line 5693 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_10(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_51), ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_32_32)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_4);
                    }
#line 527 "x86_64_out.m"
                  }
#line 528 "x86_64_out.m"
                else
#line 527 "x86_64_out.m"
                  {
#line 527 "x86_64_out.m"
                  }
#line 525 "x86_64_out.m"
              }
#line 510 "x86_64_out.m"
      }
#line 510 "x86_64_out.m"
      break;
#line 510 "x86_64_out.m"
    }
#line 507 "x86_64_out.m"
}

#line 476 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_type_desc_2_p_0(
#line 476 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 476 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__HeadVar__2_2)
#line 476 "x86_64_out.m"
{
#line 479 "x86_64_out.m"
  {
#line 479 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 479 "x86_64_out.m"
    if ((ll_backend__x86_64_out__HeadVar__1_1 == (MR_Integer) 0))
#line 479 "x86_64_out.m"
      *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "\100function";
#line 479 "x86_64_out.m"
    else
#line 480 "x86_64_out.m"
      *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "\100object";
#line 479 "x86_64_out.m"
  }
#line 476 "x86_64_out.m"
}

#line 468 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_section_type_2_p_0(
#line 468 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 468 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__HeadVar__2_2)
#line 468 "x86_64_out.m"
{
#line 471 "x86_64_out.m"
  {
#line 471 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 471 "x86_64_out.m"
    if ((ll_backend__x86_64_out__HeadVar__1_1 == (MR_Integer) 1))
#line 472 "x86_64_out.m"
      *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "\100nobits";
#line 471 "x86_64_out.m"
    else
#line 471 "x86_64_out.m"
      *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "\100progbits";
#line 471 "x86_64_out.m"
  }
#line 468 "x86_64_out.m"
}

#line 454 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_section_m_flag_2_p_0(
#line 454 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 454 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__HeadVar__2_2)
#line 454 "x86_64_out.m"
{
#line 457 "x86_64_out.m"
  while (MR_TRUE)
#line 457 "x86_64_out.m"
    {
#line 457 "x86_64_out.m"
      /* tailcall optimized into a loop */
#line 457 "x86_64_out.m"
      {
#line 457 "x86_64_out.m"
        MR_bool ll_backend__x86_64_out__succeeded;

#line 457 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 457 "x86_64_out.m"
          *ll_backend__x86_64_out__HeadVar__2_2 = (MR_Integer) 0;
#line 457 "x86_64_out.m"
        else
#line 458 "x86_64_out.m"
          {
#line 458 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Flag_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));
#line 458 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Flags_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 1)));
#line 458 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__FlagType_6;

#line 445 "x86_64_out.m"
            if ((ll_backend__x86_64_out__Flag_3 == (MR_Integer) 0))
#line 445 "x86_64_out.m"
              ll_backend__x86_64_out__FlagType_6 = (MR_String) "a";
#line 445 "x86_64_out.m"
            else
#line 445 "x86_64_out.m"
              if ((ll_backend__x86_64_out__Flag_3 == (MR_Integer) 3))
#line 448 "x86_64_out.m"
                ll_backend__x86_64_out__FlagType_6 = (MR_String) "m";
#line 445 "x86_64_out.m"
              else
#line 445 "x86_64_out.m"
                if ((ll_backend__x86_64_out__Flag_3 == (MR_Integer) 4))
#line 449 "x86_64_out.m"
                  ll_backend__x86_64_out__FlagType_6 = (MR_String) "s";
#line 445 "x86_64_out.m"
                else
#line 445 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__Flag_3 == (MR_Integer) 1))
#line 446 "x86_64_out.m"
                    ll_backend__x86_64_out__FlagType_6 = (MR_String) "w";
#line 445 "x86_64_out.m"
                  else
#line 447 "x86_64_out.m"
                    ll_backend__x86_64_out__FlagType_6 = (MR_String) "x";
#line 460 "x86_64_out.m"
            ll_backend__x86_64_out__succeeded = (strcmp(ll_backend__x86_64_out__FlagType_6, (MR_String) "m") == 0);
#line 462 "x86_64_out.m"
            if (ll_backend__x86_64_out__succeeded)
#line 461 "x86_64_out.m"
              *ll_backend__x86_64_out__HeadVar__2_2 = (MR_Integer) 1;
#line 462 "x86_64_out.m"
            else
#line 463 "x86_64_out.m"
              {
#line 463 "x86_64_out.m"
                /* direct tailcall eliminated */
#line 463 "x86_64_out.m"
                {
#line 463 "x86_64_out.m"
                  MR_Word ll_backend__x86_64_out__HeadVar__1__tmp_copy_1 = ll_backend__x86_64_out__Flags_4;

#line 463 "x86_64_out.m"
                  ll_backend__x86_64_out__HeadVar__1_1 = ll_backend__x86_64_out__HeadVar__1__tmp_copy_1;
#line 463 "x86_64_out.m"
                }
#line 463 "x86_64_out.m"
                continue;
#line 463 "x86_64_out.m"
              }
#line 458 "x86_64_out.m"
          }
#line 457 "x86_64_out.m"
      }
#line 457 "x86_64_out.m"
      break;
#line 457 "x86_64_out.m"
    }
#line 454 "x86_64_out.m"
}

#line 433 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__pseudo_section_flags_to_string_3_p_0(
#line 433 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 433 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__HeadVar__2_2,
#line 433 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__Result_3)
#line 433 "x86_64_out.m"
{
#line 436 "x86_64_out.m"
  while (MR_TRUE)
#line 436 "x86_64_out.m"
    {
#line 436 "x86_64_out.m"
      /* tailcall optimized into a loop */
#line 436 "x86_64_out.m"
      {
#line 436 "x86_64_out.m"
        MR_bool ll_backend__x86_64_out__succeeded;

#line 436 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "x86_64_out.m"
          *ll_backend__x86_64_out__Result_3 = ll_backend__x86_64_out__HeadVar__2_2;
#line 436 "x86_64_out.m"
        else
#line 437 "x86_64_out.m"
          {
#line 437 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Flag_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Flags_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 1)));
#line 437 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__FlagString_9;
#line 437 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__V_10_10;

#line 445 "x86_64_out.m"
            if ((ll_backend__x86_64_out__Flag_5 == (MR_Integer) 0))
#line 445 "x86_64_out.m"
              ll_backend__x86_64_out__FlagString_9 = (MR_String) "a";
#line 445 "x86_64_out.m"
            else
#line 445 "x86_64_out.m"
              if ((ll_backend__x86_64_out__Flag_5 == (MR_Integer) 3))
#line 448 "x86_64_out.m"
                ll_backend__x86_64_out__FlagString_9 = (MR_String) "m";
#line 445 "x86_64_out.m"
              else
#line 445 "x86_64_out.m"
                if ((ll_backend__x86_64_out__Flag_5 == (MR_Integer) 4))
#line 449 "x86_64_out.m"
                  ll_backend__x86_64_out__FlagString_9 = (MR_String) "s";
#line 445 "x86_64_out.m"
                else
#line 445 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__Flag_5 == (MR_Integer) 1))
#line 446 "x86_64_out.m"
                    ll_backend__x86_64_out__FlagString_9 = (MR_String) "w";
#line 445 "x86_64_out.m"
                  else
#line 447 "x86_64_out.m"
                    ll_backend__x86_64_out__FlagString_9 = (MR_String) "x";
#line 439 "x86_64_out.m"
            {
#line 439 "x86_64_out.m"
              ll_backend__x86_64_out__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__FlagString_9, ll_backend__x86_64_out__HeadVar__2_2);
            }
#line 439 "x86_64_out.m"
            /* direct tailcall eliminated */
#line 439 "x86_64_out.m"
            {
#line 439 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__HeadVar__1__tmp_copy_1 = ll_backend__x86_64_out__Flags_6;
#line 439 "x86_64_out.m"
              MR_String ll_backend__x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__x86_64_out__V_10_10;

#line 439 "x86_64_out.m"
              ll_backend__x86_64_out__HeadVar__2_2 = ll_backend__x86_64_out__HeadVar__2__tmp_copy_2;
#line 439 "x86_64_out.m"
              ll_backend__x86_64_out__HeadVar__1_1 = ll_backend__x86_64_out__HeadVar__1__tmp_copy_1;
#line 439 "x86_64_out.m"
            }
#line 439 "x86_64_out.m"
            continue;
#line 437 "x86_64_out.m"
          }
#line 436 "x86_64_out.m"
      }
#line 436 "x86_64_out.m"
      break;
#line 436 "x86_64_out.m"
    }
#line 433 "x86_64_out.m"
}

#line 422 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_pseudo_section_flags_2_p_0(
#line 422 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 422 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__HeadVar__2_2)
#line 422 "x86_64_out.m"
{
#line 425 "x86_64_out.m"
  while (MR_TRUE)
#line 425 "x86_64_out.m"
    {
#line 425 "x86_64_out.m"
      /* tailcall optimized into a loop */
#line 425 "x86_64_out.m"
      {
#line 425 "x86_64_out.m"
        MR_bool ll_backend__x86_64_out__succeeded;

#line 425 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 425 "x86_64_out.m"
          *ll_backend__x86_64_out__HeadVar__2_2 = (MR_Integer) 1;
#line 425 "x86_64_out.m"
        else
#line 426 "x86_64_out.m"
          {
#line 426 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Flags_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 1)));
#line 426 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Flag_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 428 "x86_64_out.m"
            /* direct tailcall eliminated */
#line 428 "x86_64_out.m"
            {
#line 428 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__HeadVar__1__tmp_copy_1 = ll_backend__x86_64_out__Flags_4;

#line 428 "x86_64_out.m"
              ll_backend__x86_64_out__HeadVar__1_1 = ll_backend__x86_64_out__HeadVar__1__tmp_copy_1;
#line 428 "x86_64_out.m"
            }
#line 428 "x86_64_out.m"
            continue;
#line 426 "x86_64_out.m"
          }
#line 425 "x86_64_out.m"
      }
#line 425 "x86_64_out.m"
      break;
#line 425 "x86_64_out.m"
    }
#line 422 "x86_64_out.m"
}

#line 392 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__check_section_flags_and_type_3_p_0(
#line 392 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Flags_4,
#line 392 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Type0_5,
#line 392 "x86_64_out.m"
  MR_Word * ll_backend__x86_64_out__Result_6)
#line 392 "x86_64_out.m"
{
#line 395 "x86_64_out.m"
  {
#line 395 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 395 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__Result0_7;
#line 395 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__Result1_10;

#line 396 "x86_64_out.m"
    {
#line 396 "x86_64_out.m"
      ll_backend__x86_64_out__check_pseudo_section_m_flag_2_p_0(ll_backend__x86_64_out__Flags_4, &ll_backend__x86_64_out__Result0_7);
    }
#line 407 "x86_64_out.m"
    if ((ll_backend__x86_64_out__Result0_7 == (MR_Integer) 0))
#line 408 "x86_64_out.m"
      {
#line 408 "x86_64_out.m"
      }
#line 407 "x86_64_out.m"
    else
#line 404 "x86_64_out.m"
      {
#line 400 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__Type1_8;

#line 400 "x86_64_out.m"
        ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Type0_5)) == (MR_mktag((MR_Integer) 1)));
#line 400 "x86_64_out.m"
        if (ll_backend__x86_64_out__succeeded)
#line 400 "x86_64_out.m"
          {
#line 400 "x86_64_out.m"
            ll_backend__x86_64_out__Type1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Type0_5, (MR_Integer) 0)));
#line 400 "x86_64_out.m"
          }
#line 400 "x86_64_out.m"
        else
#line 405 "x86_64_out.m"
          {
#line 405 "x86_64_out.m"
            {
#line 405 "x86_64_out.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.check_section_flags_and_type\'/3", (MR_String) "flag \'m\' has to have \'type\' arguments");
#line 405 "x86_64_out.m"
              return;
            }
#line 405 "x86_64_out.m"
          }
#line 404 "x86_64_out.m"
      }
#line 411 "x86_64_out.m"
    {
#line 411 "x86_64_out.m"
      ll_backend__x86_64_out__check_pseudo_section_flags_2_p_0(ll_backend__x86_64_out__Flags_4, &ll_backend__x86_64_out__Result1_10);
    }
#line 415 "x86_64_out.m"
    if ((ll_backend__x86_64_out__Result1_10 == (MR_Integer) 0))
#line 417 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_6 = (MR_Integer) 0;
#line 415 "x86_64_out.m"
    else
#line 414 "x86_64_out.m"
      *ll_backend__x86_64_out__Result_6 = (MR_Integer) 1;
#line 395 "x86_64_out.m"
  }
#line 392 "x86_64_out.m"
}

#line 374 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__pseudo_op_str_args_while_4_p_0(
#line 374 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_28,
#line 374 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 374 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2)
#line 374 "x86_64_out.m"
{
#line 377 "x86_64_out.m"
  while (MR_TRUE)
#line 377 "x86_64_out.m"
    {
#line 377 "x86_64_out.m"
      /* tailcall optimized into a loop */
#line 377 "x86_64_out.m"
      {
#line 377 "x86_64_out.m"
        MR_bool ll_backend__x86_64_out__succeeded;

#line 377 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "x86_64_out.m"
          {
#line 377 "x86_64_out.m"
          }
#line 377 "x86_64_out.m"
        else
#line 378 "x86_64_out.m"
          {
#line 378 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__Arg_10 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 378 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 378 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__V_17_17;
#line 378 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__V_19_19;
#line 378 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__V_21_21;
#line 6144 "ll_backend.x86_64_out.c"
            void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6146 "ll_backend.x86_64_out.c"
            MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_18_18;

#line 379 "x86_64_out.m"
            {
#line 379 "x86_64_out.m"
              ll_backend__x86_64_out__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Arg_10, (MR_String) "\"");
            }
#line 379 "x86_64_out.m"
            {
#line 379 "x86_64_out.m"
              ll_backend__x86_64_out__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__x86_64_out__V_21_21);
            }
#line 379 "x86_64_out.m"
            {
#line 379 "x86_64_out.m"
              ll_backend__x86_64_out__V_17_17 = mercury__string__word_wrap_2_f_0(ll_backend__x86_64_out__V_19_19, (MR_Integer) 68);
            }
#line 6164 "ll_backend.x86_64_out.c"
            ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6166 "ll_backend.x86_64_out.c"
            {
#line 6168 "ll_backend.x86_64_out.c"
              ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_28), ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_17_17)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_18_18);
            }
#line 383 "x86_64_out.m"
            if ((ll_backend__x86_64_out__Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "x86_64_out.m"
              {
#line 382 "x86_64_out.m"
                /* direct tailcall eliminated */
#line 382 "x86_64_out.m"
                {
#line 382 "x86_64_out.m"
                  MR_Word ll_backend__x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__x86_64_out__Args_11;

#line 382 "x86_64_out.m"
                  ll_backend__x86_64_out__HeadVar__2_2 = ll_backend__x86_64_out__HeadVar__2__tmp_copy_2;
#line 382 "x86_64_out.m"
                }
#line 382 "x86_64_out.m"
                continue;
#line 382 "x86_64_out.m"
              }
#line 383 "x86_64_out.m"
            else
#line 384 "x86_64_out.m"
              {
#line 6194 "ll_backend.x86_64_out.c"
                void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_28, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6196 "ll_backend.x86_64_out.c"
                MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_25_25;

#line 6199 "ll_backend.x86_64_out.c"
                {
#line 6201 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_28), ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_25_25);
                }
#line 386 "x86_64_out.m"
                /* direct tailcall eliminated */
#line 386 "x86_64_out.m"
                {
#line 386 "x86_64_out.m"
                  MR_Word ll_backend__x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__x86_64_out__Args_11;

#line 386 "x86_64_out.m"
                  ll_backend__x86_64_out__HeadVar__2_2 = ll_backend__x86_64_out__HeadVar__2__tmp_copy_2;
#line 386 "x86_64_out.m"
                }
#line 386 "x86_64_out.m"
                continue;
#line 384 "x86_64_out.m"
              }
#line 378 "x86_64_out.m"
          }
#line 377 "x86_64_out.m"
      }
#line 377 "x86_64_out.m"
      break;
#line 377 "x86_64_out.m"
    }
#line 374 "x86_64_out.m"
}

#line 366 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(
#line 366 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_20,
#line 366 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_6,
#line 366 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__OpName_7,
#line 366 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__StrArgs_8)
#line 366 "x86_64_out.m"
{
#line 369 "x86_64_out.m"
  {
#line 369 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 369 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__V_12_12;
#line 369 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__V_15_15;
#line 6251 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6253 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_13_13;
#line 6255 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6257 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_11;

#line 370 "x86_64_out.m"
    {
#line 370 "x86_64_out.m"
      ll_backend__x86_64_out__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__OpName_7, (MR_String) "\t");
    }
#line 370 "x86_64_out.m"
    {
#line 370 "x86_64_out.m"
      ll_backend__x86_64_out__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_15_15);
    }
#line 6270 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6272 "ll_backend.x86_64_out.c"
    {
#line 6274 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_20), ll_backend__x86_64_out__Stream_6, ((MR_Box) (ll_backend__x86_64_out__V_12_12)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_13_13);
    }
#line 371 "x86_64_out.m"
    {
#line 371 "x86_64_out.m"
      ll_backend__x86_64_out__pseudo_op_str_args_while_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_20, ll_backend__x86_64_out__Stream_6, ll_backend__x86_64_out__StrArgs_8);
    }
#line 6282 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6284 "ll_backend.x86_64_out.c"
    {
#line 6286 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_20), ll_backend__x86_64_out__Stream_6, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_11);
    }
#line 369 "x86_64_out.m"
  }
#line 366 "x86_64_out.m"
}

#line 348 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__pseudo_op_float_args_while_4_p_0(
#line 348 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_22,
#line 348 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 348 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2)
#line 348 "x86_64_out.m"
{
#line 351 "x86_64_out.m"
  while (MR_TRUE)
#line 351 "x86_64_out.m"
    {
#line 351 "x86_64_out.m"
      /* tailcall optimized into a loop */
#line 351 "x86_64_out.m"
      {
#line 351 "x86_64_out.m"
        MR_bool ll_backend__x86_64_out__succeeded;

#line 351 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "x86_64_out.m"
          {
#line 351 "x86_64_out.m"
          }
#line 351 "x86_64_out.m"
        else
#line 352 "x86_64_out.m"
          {
#line 352 "x86_64_out.m"
            MR_Float ll_backend__x86_64_out__Arg_10 = MR_unbox_float((MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 352 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Args_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 353 "x86_64_out.m"
            MR_Box ll_backend__x86_64_out__conv0_STATE_VARIABLE_IO_17_17;

#line 353 "x86_64_out.m"
            {
#line 353 "x86_64_out.m"
              mercury__stream__string_writer__put_float_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_22, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Arg_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv0_STATE_VARIABLE_IO_17_17);
            }
#line 357 "x86_64_out.m"
            if ((ll_backend__x86_64_out__Args_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 351 "x86_64_out.m"
              {
#line 351 "x86_64_out.m"
              }
#line 357 "x86_64_out.m"
            else
#line 358 "x86_64_out.m"
              {
#line 358 "x86_64_out.m"
                MR_Float ll_backend__x86_64_out__Arg_45;
#line 358 "x86_64_out.m"
                MR_Word ll_backend__x86_64_out__Args_46;
#line 6352 "ll_backend.x86_64_out.c"
                void MR_CALL (* ll_backend__x86_64_out__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6354 "ll_backend.x86_64_out.c"
                MR_Box ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_19_19;
#line 353 "x86_64_out.m"
                MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_17_52;

#line 6359 "ll_backend.x86_64_out.c"
                {
#line 6361 "ll_backend.x86_64_out.c"
                  ll_backend__x86_64_out__func_1(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_22), ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_19_19);
                }
#line 352 "x86_64_out.m"
                ll_backend__x86_64_out__Arg_45 = MR_unbox_float((MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Args_11, (MR_Integer) 0)));
#line 352 "x86_64_out.m"
                ll_backend__x86_64_out__Args_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Args_11, (MR_Integer) 1)));
#line 353 "x86_64_out.m"
                {
#line 353 "x86_64_out.m"
                  mercury__stream__string_writer__put_float_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_22, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Arg_45, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_17_52);
                }
#line 357 "x86_64_out.m"
                if ((ll_backend__x86_64_out__Args_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 356 "x86_64_out.m"
                  {
#line 356 "x86_64_out.m"
                    /* direct tailcall eliminated */
#line 356 "x86_64_out.m"
                    {
#line 356 "x86_64_out.m"
                      MR_Word ll_backend__x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__x86_64_out__Args_46;

#line 356 "x86_64_out.m"
                      ll_backend__x86_64_out__HeadVar__2_2 = ll_backend__x86_64_out__HeadVar__2__tmp_copy_2;
#line 356 "x86_64_out.m"
                    }
#line 356 "x86_64_out.m"
                    continue;
#line 356 "x86_64_out.m"
                  }
#line 357 "x86_64_out.m"
                else
#line 358 "x86_64_out.m"
                  {
#line 6396 "ll_backend.x86_64_out.c"
                    void MR_CALL (* ll_backend__x86_64_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_22, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6398 "ll_backend.x86_64_out.c"
                    MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_19_54;

#line 6401 "ll_backend.x86_64_out.c"
                    {
#line 6403 "ll_backend.x86_64_out.c"
                      ll_backend__x86_64_out__func_4(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_22), ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_19_54);
                    }
#line 360 "x86_64_out.m"
                    /* direct tailcall eliminated */
#line 360 "x86_64_out.m"
                    {
#line 360 "x86_64_out.m"
                      MR_Word ll_backend__x86_64_out__HeadVar__2__tmp_copy_2 = ll_backend__x86_64_out__Args_46;

#line 360 "x86_64_out.m"
                      ll_backend__x86_64_out__HeadVar__2_2 = ll_backend__x86_64_out__HeadVar__2__tmp_copy_2;
#line 360 "x86_64_out.m"
                    }
#line 360 "x86_64_out.m"
                    continue;
#line 358 "x86_64_out.m"
                  }
#line 358 "x86_64_out.m"
              }
#line 352 "x86_64_out.m"
          }
#line 351 "x86_64_out.m"
      }
#line 351 "x86_64_out.m"
      break;
#line 351 "x86_64_out.m"
    }
#line 348 "x86_64_out.m"
}

#line 340 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_pseudo_op_float_args_5_p_0(
#line 340 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_20,
#line 340 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_6,
#line 340 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__OpName_7,
#line 340 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__FloatArgs_8)
#line 340 "x86_64_out.m"
{
#line 343 "x86_64_out.m"
  {
#line 343 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 343 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__V_12_12;
#line 343 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__V_15_15;
#line 6455 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6457 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_13_13;
#line 6459 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6461 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_11;

#line 344 "x86_64_out.m"
    {
#line 344 "x86_64_out.m"
      ll_backend__x86_64_out__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__OpName_7, (MR_String) "\t");
    }
#line 344 "x86_64_out.m"
    {
#line 344 "x86_64_out.m"
      ll_backend__x86_64_out__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_15_15);
    }
#line 6474 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6476 "ll_backend.x86_64_out.c"
    {
#line 6478 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_20), ll_backend__x86_64_out__Stream_6, ((MR_Box) (ll_backend__x86_64_out__V_12_12)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_13_13);
    }
#line 345 "x86_64_out.m"
    {
#line 345 "x86_64_out.m"
      ll_backend__x86_64_out__pseudo_op_float_args_while_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_20, ll_backend__x86_64_out__Stream_6, ll_backend__x86_64_out__FloatArgs_8);
    }
#line 6486 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_20, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6488 "ll_backend.x86_64_out.c"
    {
#line 6490 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_20), ll_backend__x86_64_out__Stream_6, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_11);
    }
#line 343 "x86_64_out.m"
  }
#line 340 "x86_64_out.m"
}

#line 308 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(
#line 308 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_36,
#line 308 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_8,
#line 308 "x86_64_out.m"
  MR_String ll_backend__x86_64_out__OpName_9,
#line 308 "x86_64_out.m"
  MR_Integer ll_backend__x86_64_out__Arg1_10,
#line 308 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Arg2_11,
#line 308 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__Arg3_12)
#line 308 "x86_64_out.m"
{
#line 312 "x86_64_out.m"
  {
#line 312 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 312 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__V_19_19;
#line 312 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__V_22_22;
#line 6523 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6525 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_20_20;
#line 314 "x86_64_out.m"
    MR_Box ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_24_24;
#line 6529 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_12)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 6531 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_18;

#line 313 "x86_64_out.m"
    {
#line 313 "x86_64_out.m"
      ll_backend__x86_64_out__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__OpName_9, (MR_String) "\t");
    }
#line 313 "x86_64_out.m"
    {
#line 313 "x86_64_out.m"
      ll_backend__x86_64_out__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__x86_64_out__V_22_22);
    }
#line 6544 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6546 "ll_backend.x86_64_out.c"
    {
#line 6548 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_36), ll_backend__x86_64_out__Stream_8, ((MR_Box) (ll_backend__x86_64_out__V_19_19)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_20_20);
    }
#line 314 "x86_64_out.m"
    {
#line 314 "x86_64_out.m"
      mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_36, ll_backend__x86_64_out__Stream_8, ll_backend__x86_64_out__Arg1_10, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_24_24);
    }
#line 319 "x86_64_out.m"
    if ((ll_backend__x86_64_out__Arg2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "x86_64_out.m"
      {
#line 320 "x86_64_out.m"
      }
#line 319 "x86_64_out.m"
    else
#line 316 "x86_64_out.m"
      {
#line 316 "x86_64_out.m"
        MR_Integer ll_backend__x86_64_out__Arg2Out_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Arg2_11, (MR_Integer) 0)));
#line 6568 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_3)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6570 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_26_26;
#line 318 "x86_64_out.m"
        MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_27_27;

#line 6575 "ll_backend.x86_64_out.c"
        {
#line 6577 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_3(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_36), ll_backend__x86_64_out__Stream_8, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_26_26);
        }
#line 318 "x86_64_out.m"
        {
#line 318 "x86_64_out.m"
          mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_36, ll_backend__x86_64_out__Stream_8, ll_backend__x86_64_out__Arg2Out_14, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_27_27);
        }
#line 316 "x86_64_out.m"
      }
#line 333 "x86_64_out.m"
    if ((ll_backend__x86_64_out__Arg3_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "x86_64_out.m"
      {
#line 334 "x86_64_out.m"
      }
#line 333 "x86_64_out.m"
    else
#line 323 "x86_64_out.m"
      {
#line 323 "x86_64_out.m"
        MR_Integer ll_backend__x86_64_out__Arg3Out_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Arg3_12, (MR_Integer) 0)));

#line 328 "x86_64_out.m"
        if ((ll_backend__x86_64_out__Arg2_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 325 "x86_64_out.m"
          {
#line 6604 "ll_backend.x86_64_out.c"
            void MR_CALL (* ll_backend__x86_64_out__func_6)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6606 "ll_backend.x86_64_out.c"
            MR_Box ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_32_32;
#line 327 "x86_64_out.m"
            MR_Box ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_33_33;

#line 6611 "ll_backend.x86_64_out.c"
            {
#line 6613 "ll_backend.x86_64_out.c"
              ll_backend__x86_64_out__func_6(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_36), ll_backend__x86_64_out__Stream_8, ((MR_Box) ((MR_String) ",,")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_32_32);
            }
#line 327 "x86_64_out.m"
            {
#line 327 "x86_64_out.m"
              mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_36, ll_backend__x86_64_out__Stream_8, ll_backend__x86_64_out__Arg3Out_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_33_33);
            }
#line 325 "x86_64_out.m"
          }
#line 328 "x86_64_out.m"
        else
#line 329 "x86_64_out.m"
          {
#line 6627 "ll_backend.x86_64_out.c"
            void MR_CALL (* ll_backend__x86_64_out__func_9)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6629 "ll_backend.x86_64_out.c"
            MR_Box ll_backend__x86_64_out__conv10_STATE_VARIABLE_IO_29_29;
#line 331 "x86_64_out.m"
            MR_Box ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_33_33;

#line 6634 "ll_backend.x86_64_out.c"
            {
#line 6636 "ll_backend.x86_64_out.c"
              ll_backend__x86_64_out__func_9(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_36), ll_backend__x86_64_out__Stream_8, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv10_STATE_VARIABLE_IO_29_29);
            }
#line 331 "x86_64_out.m"
            {
#line 331 "x86_64_out.m"
              mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_36, ll_backend__x86_64_out__Stream_8, ll_backend__x86_64_out__Arg3Out_15, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_33_33);
            }
#line 329 "x86_64_out.m"
          }
#line 323 "x86_64_out.m"
      }
#line 6648 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_12 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_36, (MR_Integer) 0)), (MR_Integer) 5)));
#line 6650 "ll_backend.x86_64_out.c"
    {
#line 6652 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_12(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_36), ll_backend__x86_64_out__Stream_8, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_18);
    }
#line 312 "x86_64_out.m"
  }
#line 308 "x86_64_out.m"
}

#line 61 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_pseudo_op_4_p_0(
#line 61 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_862,
#line 61 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_1,
#line 61 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2)
#line 61 "x86_64_out.m"
{
#line 64 "x86_64_out.m"
  {
#line 64 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 64 "x86_64_out.m"
    if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 64 "x86_64_out.m"
      {
#line 65 "x86_64_out.m"
        MR_Box ll_backend__x86_64_out__conv0_STATE_VARIABLE_IO_4;

#line 65 "x86_64_out.m"
        {
#line 65 "x86_64_out.m"
          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.abort\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv0_STATE_VARIABLE_IO_4);
        }
#line 64 "x86_64_out.m"
      }
#line 64 "x86_64_out.m"
    else
#line 64 "x86_64_out.m"
      if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 102 "x86_64_out.m"
        {
#line 103 "x86_64_out.m"
          MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_4;

#line 103 "x86_64_out.m"
          {
#line 103 "x86_64_out.m"
            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.dim\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_4);
          }
#line 102 "x86_64_out.m"
        }
#line 64 "x86_64_out.m"
      else
#line 64 "x86_64_out.m"
        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 106 "x86_64_out.m"
          {
#line 107 "x86_64_out.m"
            MR_Box ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_4;

#line 107 "x86_64_out.m"
            {
#line 107 "x86_64_out.m"
              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.eject\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv2_STATE_VARIABLE_IO_4);
            }
#line 106 "x86_64_out.m"
          }
#line 64 "x86_64_out.m"
        else
#line 64 "x86_64_out.m"
          if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 110 "x86_64_out.m"
            {
#line 111 "x86_64_out.m"
              MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_4;

#line 111 "x86_64_out.m"
              {
#line 111 "x86_64_out.m"
                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.elseif\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_4);
              }
#line 110 "x86_64_out.m"
            }
#line 64 "x86_64_out.m"
          else
#line 64 "x86_64_out.m"
            if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 112 "x86_64_out.m"
              {
#line 113 "x86_64_out.m"
                MR_Box ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_4;

#line 113 "x86_64_out.m"
                {
#line 113 "x86_64_out.m"
                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.end\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv4_STATE_VARIABLE_IO_4);
                }
#line 112 "x86_64_out.m"
              }
#line 64 "x86_64_out.m"
            else
#line 64 "x86_64_out.m"
              if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 114 "x86_64_out.m"
                {
#line 115 "x86_64_out.m"
                  MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_4;

#line 115 "x86_64_out.m"
                  {
#line 115 "x86_64_out.m"
                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.endef\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_4);
                  }
#line 114 "x86_64_out.m"
                }
#line 64 "x86_64_out.m"
              else
#line 64 "x86_64_out.m"
                if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 116 "x86_64_out.m"
                  {
#line 117 "x86_64_out.m"
                    MR_Box ll_backend__x86_64_out__conv6_STATE_VARIABLE_IO_4;

#line 117 "x86_64_out.m"
                    {
#line 117 "x86_64_out.m"
                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.endfunc\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv6_STATE_VARIABLE_IO_4);
                    }
#line 116 "x86_64_out.m"
                  }
#line 64 "x86_64_out.m"
                else
#line 64 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 118 "x86_64_out.m"
                    {
#line 119 "x86_64_out.m"
                      MR_Box ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_4;

#line 119 "x86_64_out.m"
                      {
#line 119 "x86_64_out.m"
                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.endif\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv7_STATE_VARIABLE_IO_4);
                      }
#line 118 "x86_64_out.m"
                    }
#line 64 "x86_64_out.m"
                  else
#line 64 "x86_64_out.m"
                    if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 120 "x86_64_out.m"
                      {
#line 121 "x86_64_out.m"
                        MR_Box ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_4;

#line 121 "x86_64_out.m"
                        {
#line 121 "x86_64_out.m"
                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.endm\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_4);
                        }
#line 120 "x86_64_out.m"
                      }
#line 64 "x86_64_out.m"
                    else
#line 64 "x86_64_out.m"
                      if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 126 "x86_64_out.m"
                        {
#line 127 "x86_64_out.m"
                          MR_Box ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_4;

#line 127 "x86_64_out.m"
                          {
#line 127 "x86_64_out.m"
                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.err\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv9_STATE_VARIABLE_IO_4);
                          }
#line 126 "x86_64_out.m"
                        }
#line 64 "x86_64_out.m"
                      else
#line 64 "x86_64_out.m"
                        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 128 "x86_64_out.m"
                          {
#line 129 "x86_64_out.m"
                            MR_Box ll_backend__x86_64_out__conv10_STATE_VARIABLE_IO_4;

#line 129 "x86_64_out.m"
                            {
#line 129 "x86_64_out.m"
                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.exitm\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv10_STATE_VARIABLE_IO_4);
                            }
#line 128 "x86_64_out.m"
                          }
#line 64 "x86_64_out.m"
                        else
#line 64 "x86_64_out.m"
                          if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 130 "x86_64_out.m"
                            {
#line 131 "x86_64_out.m"
                              MR_Box ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_4;

#line 131 "x86_64_out.m"
                              {
#line 131 "x86_64_out.m"
                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.extern\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv11_STATE_VARIABLE_IO_4);
                              }
#line 130 "x86_64_out.m"
                            }
#line 64 "x86_64_out.m"
                          else
#line 64 "x86_64_out.m"
                            if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 150 "x86_64_out.m"
                              {
#line 151 "x86_64_out.m"
                                MR_Box ll_backend__x86_64_out__conv12_STATE_VARIABLE_IO_4;

#line 151 "x86_64_out.m"
                                {
#line 151 "x86_64_out.m"
                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.ident\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv12_STATE_VARIABLE_IO_4);
                                }
#line 150 "x86_64_out.m"
                              }
#line 64 "x86_64_out.m"
                            else
#line 64 "x86_64_out.m"
                              if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 192 "x86_64_out.m"
                                {
#line 193 "x86_64_out.m"
                                  MR_Box ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_4;

#line 193 "x86_64_out.m"
                                  {
#line 193 "x86_64_out.m"
                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.list\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv13_STATE_VARIABLE_IO_4);
                                  }
#line 192 "x86_64_out.m"
                                }
#line 64 "x86_64_out.m"
                              else
#line 64 "x86_64_out.m"
                                if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 196 "x86_64_out.m"
                                  {
#line 197 "x86_64_out.m"
                                    MR_Box ll_backend__x86_64_out__conv14_STATE_VARIABLE_IO_4;

#line 197 "x86_64_out.m"
                                    {
#line 197 "x86_64_out.m"
                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.macro\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv14_STATE_VARIABLE_IO_4);
                                    }
#line 196 "x86_64_out.m"
                                  }
#line 64 "x86_64_out.m"
                                else
#line 64 "x86_64_out.m"
                                  if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 198 "x86_64_out.m"
                                    {
#line 199 "x86_64_out.m"
                                      MR_Box ll_backend__x86_64_out__conv15_STATE_VARIABLE_IO_4;

#line 199 "x86_64_out.m"
                                      {
#line 199 "x86_64_out.m"
                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.nolist\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv15_STATE_VARIABLE_IO_4);
                                      }
#line 198 "x86_64_out.m"
                                    }
#line 64 "x86_64_out.m"
                                  else
#line 64 "x86_64_out.m"
                                    if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 203 "x86_64_out.m"
                                      {
#line 204 "x86_64_out.m"
                                        MR_Box ll_backend__x86_64_out__conv16_STATE_VARIABLE_IO_4;

#line 204 "x86_64_out.m"
                                        {
#line 204 "x86_64_out.m"
                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.popsection\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv16_STATE_VARIABLE_IO_4);
                                        }
#line 203 "x86_64_out.m"
                                      }
#line 64 "x86_64_out.m"
                                    else
#line 64 "x86_64_out.m"
                                      if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 205 "x86_64_out.m"
                                        {
#line 206 "x86_64_out.m"
                                          MR_Box ll_backend__x86_64_out__conv17_STATE_VARIABLE_IO_4;

#line 206 "x86_64_out.m"
                                          {
#line 206 "x86_64_out.m"
                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.previous\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv17_STATE_VARIABLE_IO_4);
                                          }
#line 205 "x86_64_out.m"
                                        }
#line 64 "x86_64_out.m"
                                      else
#line 64 "x86_64_out.m"
                                        if ((ll_backend__x86_64_out__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 108 "x86_64_out.m"
                                          {
#line 109 "x86_64_out.m"
                                            MR_Box ll_backend__x86_64_out__conv18_STATE_VARIABLE_IO_4;

#line 109 "x86_64_out.m"
                                            {
#line 109 "x86_64_out.m"
                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.else\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv18_STATE_VARIABLE_IO_4);
                                            }
#line 108 "x86_64_out.m"
                                          }
#line 64 "x86_64_out.m"
                                        else
#line 64 "x86_64_out.m"
                                          if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 66 "x86_64_out.m"
                                            {
#line 66 "x86_64_out.m"
                                              MR_Integer ll_backend__x86_64_out__Bytes_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 66 "x86_64_out.m"
                                              MR_Word ll_backend__x86_64_out__FillVal_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 66 "x86_64_out.m"
                                              MR_Word ll_backend__x86_64_out__SkipBytes_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 67 "x86_64_out.m"
                                              {
#line 67 "x86_64_out.m"
                                                ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".align", ll_backend__x86_64_out__Bytes_12, ll_backend__x86_64_out__FillVal_13, ll_backend__x86_64_out__SkipBytes_14);
#line 67 "x86_64_out.m"
                                                return;
                                              }
#line 66 "x86_64_out.m"
                                            }
#line 64 "x86_64_out.m"
                                          else
#line 64 "x86_64_out.m"
                                            if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 69 "x86_64_out.m"
                                              {
#line 69 "x86_64_out.m"
                                                MR_Word ll_backend__x86_64_out__Literals_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));

#line 70 "x86_64_out.m"
                                                {
#line 70 "x86_64_out.m"
                                                  ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".ascii", ll_backend__x86_64_out__Literals_21);
#line 70 "x86_64_out.m"
                                                  return;
                                                }
#line 69 "x86_64_out.m"
                                              }
#line 64 "x86_64_out.m"
                                            else
#line 64 "x86_64_out.m"
                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 71 "x86_64_out.m"
                                                {
#line 71 "x86_64_out.m"
                                                  MR_Word ll_backend__x86_64_out__Literals_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 72 "x86_64_out.m"
                                                  {
#line 72 "x86_64_out.m"
                                                    ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".asciiz", ll_backend__x86_64_out__Literals_28);
#line 72 "x86_64_out.m"
                                                    return;
                                                  }
#line 71 "x86_64_out.m"
                                                }
#line 64 "x86_64_out.m"
                                              else
#line 64 "x86_64_out.m"
                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 73 "x86_64_out.m"
                                                  {
#line 73 "x86_64_out.m"
                                                    MR_Integer ll_backend__x86_64_out__Bytes_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 73 "x86_64_out.m"
                                                    MR_Word ll_backend__x86_64_out__FillVal_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 73 "x86_64_out.m"
                                                    MR_Word ll_backend__x86_64_out__SkipBytes_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));

#line 74 "x86_64_out.m"
                                                    {
#line 74 "x86_64_out.m"
                                                      ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".balign", ll_backend__x86_64_out__Bytes_35, ll_backend__x86_64_out__FillVal_36, ll_backend__x86_64_out__SkipBytes_37);
#line 74 "x86_64_out.m"
                                                      return;
                                                    }
#line 73 "x86_64_out.m"
                                                  }
#line 64 "x86_64_out.m"
                                                else
#line 64 "x86_64_out.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 76 "x86_64_out.m"
                                                    {
#line 76 "x86_64_out.m"
                                                      MR_Word ll_backend__x86_64_out__ExprList_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "x86_64_out.m"
                                                      {
#line 77 "x86_64_out.m"
                                                        ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".byte", ll_backend__x86_64_out__ExprList_44);
#line 77 "x86_64_out.m"
                                                        return;
                                                      }
#line 76 "x86_64_out.m"
                                                    }
#line 64 "x86_64_out.m"
                                                  else
#line 64 "x86_64_out.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 78 "x86_64_out.m"
                                                      {
#line 78 "x86_64_out.m"
                                                        MR_String ll_backend__x86_64_out__Symbol_51 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 78 "x86_64_out.m"
                                                        MR_Integer ll_backend__x86_64_out__Length_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 78 "x86_64_out.m"
                                                        MR_Word ll_backend__x86_64_out__Align0_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 78 "x86_64_out.m"
                                                        MR_String ll_backend__x86_64_out__V_58_58;
#line 78 "x86_64_out.m"
                                                        MR_String ll_backend__x86_64_out__V_61_61;
#line 79 "x86_64_out.m"
                                                        MR_Box ll_backend__x86_64_out__conv19_STATE_VARIABLE_IO_59_59;
#line 80 "x86_64_out.m"
                                                        MR_Box ll_backend__x86_64_out__conv20_STATE_VARIABLE_IO_63_63;
#line 88 "x86_64_out.m"
                                                        MR_Box ll_backend__x86_64_out__conv23_STATE_VARIABLE_IO_4;

#line 79 "x86_64_out.m"
                                                        {
#line 79 "x86_64_out.m"
                                                          ll_backend__x86_64_out__V_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_51, (MR_String) ",");
                                                        }
#line 79 "x86_64_out.m"
                                                        {
#line 79 "x86_64_out.m"
                                                          ll_backend__x86_64_out__V_58_58 = mercury__string__f_43_43_2_f_0((MR_String) "\t.comm\t", ll_backend__x86_64_out__V_61_61);
                                                        }
#line 79 "x86_64_out.m"
                                                        {
#line 79 "x86_64_out.m"
                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_58_58)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv19_STATE_VARIABLE_IO_59_59);
                                                        }
#line 80 "x86_64_out.m"
                                                        {
#line 80 "x86_64_out.m"
                                                          mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Length_52, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv20_STATE_VARIABLE_IO_63_63);
                                                        }
#line 85 "x86_64_out.m"
                                                        if ((ll_backend__x86_64_out__Align0_53 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 86 "x86_64_out.m"
                                                          {
#line 86 "x86_64_out.m"
                                                          }
#line 85 "x86_64_out.m"
                                                        else
#line 82 "x86_64_out.m"
                                                          {
#line 82 "x86_64_out.m"
                                                            MR_Integer ll_backend__x86_64_out__Align1_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Align0_53, (MR_Integer) 0)));
#line 83 "x86_64_out.m"
                                                            MR_Box ll_backend__x86_64_out__conv21_STATE_VARIABLE_IO_65_65;
#line 84 "x86_64_out.m"
                                                            MR_Box ll_backend__x86_64_out__conv22_STATE_VARIABLE_IO_66_66;

#line 83 "x86_64_out.m"
                                                            {
#line 83 "x86_64_out.m"
                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv21_STATE_VARIABLE_IO_65_65);
                                                            }
#line 84 "x86_64_out.m"
                                                            {
#line 84 "x86_64_out.m"
                                                              mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Align1_55, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv22_STATE_VARIABLE_IO_66_66);
                                                            }
#line 82 "x86_64_out.m"
                                                          }
#line 88 "x86_64_out.m"
                                                        {
#line 88 "x86_64_out.m"
                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv23_STATE_VARIABLE_IO_4);
                                                        }
#line 78 "x86_64_out.m"
                                                      }
#line 64 "x86_64_out.m"
                                                    else
#line 64 "x86_64_out.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 89 "x86_64_out.m"
                                                        {
#line 89 "x86_64_out.m"
                                                          MR_Word ll_backend__x86_64_out__Subsection0_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 90 "x86_64_out.m"
                                                          MR_Box ll_backend__x86_64_out__conv24_STATE_VARIABLE_IO_76_76;
#line 97 "x86_64_out.m"
                                                          MR_Box ll_backend__x86_64_out__conv26_STATE_VARIABLE_IO_4;

#line 90 "x86_64_out.m"
                                                          {
#line 90 "x86_64_out.m"
                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.data\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv24_STATE_VARIABLE_IO_76_76);
                                                          }
#line 94 "x86_64_out.m"
                                                          if ((ll_backend__x86_64_out__Subsection0_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 95 "x86_64_out.m"
                                                            {
#line 95 "x86_64_out.m"
                                                            }
#line 94 "x86_64_out.m"
                                                          else
#line 92 "x86_64_out.m"
                                                            {
#line 92 "x86_64_out.m"
                                                              MR_Integer ll_backend__x86_64_out__Subsection1_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Subsection0_70, (MR_Integer) 0)));
#line 93 "x86_64_out.m"
                                                              MR_Box ll_backend__x86_64_out__conv25_STATE_VARIABLE_IO_77_77;

#line 93 "x86_64_out.m"
                                                              {
#line 93 "x86_64_out.m"
                                                                mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Subsection1_72, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv25_STATE_VARIABLE_IO_77_77);
                                                              }
#line 92 "x86_64_out.m"
                                                            }
#line 97 "x86_64_out.m"
                                                          {
#line 97 "x86_64_out.m"
                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv26_STATE_VARIABLE_IO_4);
                                                          }
#line 89 "x86_64_out.m"
                                                        }
#line 64 "x86_64_out.m"
                                                      else
#line 64 "x86_64_out.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 100 "x86_64_out.m"
                                                          {
#line 100 "x86_64_out.m"
                                                            MR_String ll_backend__x86_64_out__Name_95 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "x86_64_out.m"
                                                            MR_String ll_backend__x86_64_out__V_99_99;
#line 100 "x86_64_out.m"
                                                            MR_String ll_backend__x86_64_out__V_102_102;
#line 101 "x86_64_out.m"
                                                            MR_Box ll_backend__x86_64_out__conv27_STATE_VARIABLE_IO_4;

#line 101 "x86_64_out.m"
                                                            {
#line 101 "x86_64_out.m"
                                                              ll_backend__x86_64_out__V_102_102 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_95, (MR_String) "\n");
                                                            }
#line 101 "x86_64_out.m"
                                                            {
#line 101 "x86_64_out.m"
                                                              ll_backend__x86_64_out__V_99_99 = mercury__string__f_43_43_2_f_0((MR_String) "\t.def\t", ll_backend__x86_64_out__V_102_102);
                                                            }
#line 101 "x86_64_out.m"
                                                            {
#line 101 "x86_64_out.m"
                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_99_99)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv27_STATE_VARIABLE_IO_4);
                                                            }
#line 100 "x86_64_out.m"
                                                          }
#line 64 "x86_64_out.m"
                                                        else
#line 64 "x86_64_out.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 98 "x86_64_out.m"
                                                            {
#line 98 "x86_64_out.m"
                                                              MR_String ll_backend__x86_64_out__Symbol_81 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 98 "x86_64_out.m"
                                                              MR_String ll_backend__x86_64_out__AbsExpr_82 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 98 "x86_64_out.m"
                                                              MR_String ll_backend__x86_64_out__V_86_86;
#line 98 "x86_64_out.m"
                                                              MR_String ll_backend__x86_64_out__V_89_89;
#line 98 "x86_64_out.m"
                                                              MR_String ll_backend__x86_64_out__V_90_90;
#line 98 "x86_64_out.m"
                                                              MR_String ll_backend__x86_64_out__V_92_92;
#line 99 "x86_64_out.m"
                                                              MR_Box ll_backend__x86_64_out__conv28_STATE_VARIABLE_IO_4;

#line 99 "x86_64_out.m"
                                                              {
#line 99 "x86_64_out.m"
                                                                ll_backend__x86_64_out__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__AbsExpr_82, (MR_String) "\n");
                                                              }
#line 99 "x86_64_out.m"
                                                              {
#line 99 "x86_64_out.m"
                                                                ll_backend__x86_64_out__V_90_90 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_92_92);
                                                              }
#line 99 "x86_64_out.m"
                                                              {
#line 99 "x86_64_out.m"
                                                                ll_backend__x86_64_out__V_89_89 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_81, ll_backend__x86_64_out__V_90_90);
                                                              }
#line 99 "x86_64_out.m"
                                                              {
#line 99 "x86_64_out.m"
                                                                ll_backend__x86_64_out__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) "\t.desc\t", ll_backend__x86_64_out__V_89_89);
                                                              }
#line 99 "x86_64_out.m"
                                                              {
#line 99 "x86_64_out.m"
                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_86_86)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv28_STATE_VARIABLE_IO_4);
                                                              }
#line 98 "x86_64_out.m"
                                                            }
#line 64 "x86_64_out.m"
                                                          else
#line 64 "x86_64_out.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 104 "x86_64_out.m"
                                                              {
#line 104 "x86_64_out.m"
                                                                MR_Word ll_backend__x86_64_out__NumList_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 105 "x86_64_out.m"
                                                                {
#line 105 "x86_64_out.m"
                                                                  ll_backend__x86_64_out__output_pseudo_op_float_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".double", ll_backend__x86_64_out__NumList_111);
#line 105 "x86_64_out.m"
                                                                  return;
                                                                }
#line 104 "x86_64_out.m"
                                                              }
#line 64 "x86_64_out.m"
                                                            else
#line 64 "x86_64_out.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 122 "x86_64_out.m"
                                                                {
#line 122 "x86_64_out.m"
                                                                  MR_String ll_backend__x86_64_out__Symbol_166 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 122 "x86_64_out.m"
                                                                  MR_String ll_backend__x86_64_out__Expr_167 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 122 "x86_64_out.m"
                                                                  MR_String ll_backend__x86_64_out__V_171_171;
#line 122 "x86_64_out.m"
                                                                  MR_String ll_backend__x86_64_out__V_174_174;
#line 122 "x86_64_out.m"
                                                                  MR_String ll_backend__x86_64_out__V_175_175;
#line 122 "x86_64_out.m"
                                                                  MR_String ll_backend__x86_64_out__V_177_177;
#line 123 "x86_64_out.m"
                                                                  MR_Box ll_backend__x86_64_out__conv29_STATE_VARIABLE_IO_4;

#line 123 "x86_64_out.m"
                                                                  {
#line 123 "x86_64_out.m"
                                                                    ll_backend__x86_64_out__V_177_177 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_167, (MR_String) "\n");
                                                                  }
#line 123 "x86_64_out.m"
                                                                  {
#line 123 "x86_64_out.m"
                                                                    ll_backend__x86_64_out__V_175_175 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_177_177);
                                                                  }
#line 123 "x86_64_out.m"
                                                                  {
#line 123 "x86_64_out.m"
                                                                    ll_backend__x86_64_out__V_174_174 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_166, ll_backend__x86_64_out__V_175_175);
                                                                  }
#line 123 "x86_64_out.m"
                                                                  {
#line 123 "x86_64_out.m"
                                                                    ll_backend__x86_64_out__V_171_171 = mercury__string__f_43_43_2_f_0((MR_String) "\t.equ\t", ll_backend__x86_64_out__V_174_174);
                                                                  }
#line 123 "x86_64_out.m"
                                                                  {
#line 123 "x86_64_out.m"
                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_171_171)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv29_STATE_VARIABLE_IO_4);
                                                                  }
#line 122 "x86_64_out.m"
                                                                }
#line 64 "x86_64_out.m"
                                                              else
#line 64 "x86_64_out.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 124 "x86_64_out.m"
                                                                  {
#line 124 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__Symbol_180 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 124 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__Expr_181 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 124 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__V_185_185;
#line 124 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__V_188_188;
#line 124 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__V_189_189;
#line 124 "x86_64_out.m"
                                                                    MR_String ll_backend__x86_64_out__V_191_191;
#line 125 "x86_64_out.m"
                                                                    MR_Box ll_backend__x86_64_out__conv30_STATE_VARIABLE_IO_4;

#line 125 "x86_64_out.m"
                                                                    {
#line 125 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__V_191_191 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_181, (MR_String) "\n");
                                                                    }
#line 125 "x86_64_out.m"
                                                                    {
#line 125 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__V_189_189 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_191_191);
                                                                    }
#line 125 "x86_64_out.m"
                                                                    {
#line 125 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__V_188_188 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_180, ll_backend__x86_64_out__V_189_189);
                                                                    }
#line 125 "x86_64_out.m"
                                                                    {
#line 125 "x86_64_out.m"
                                                                      ll_backend__x86_64_out__V_185_185 = mercury__string__f_43_43_2_f_0((MR_String) "\t.equiv\t", ll_backend__x86_64_out__V_188_188);
                                                                    }
#line 125 "x86_64_out.m"
                                                                    {
#line 125 "x86_64_out.m"
                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_185_185)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv30_STATE_VARIABLE_IO_4);
                                                                    }
#line 124 "x86_64_out.m"
                                                                  }
#line 64 "x86_64_out.m"
                                                                else
#line 64 "x86_64_out.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 132 "x86_64_out.m"
                                                                    {
#line 132 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__Expr_212 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 132 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__V_216_216;
#line 132 "x86_64_out.m"
                                                                      MR_String ll_backend__x86_64_out__V_219_219;
#line 133 "x86_64_out.m"
                                                                      MR_Box ll_backend__x86_64_out__conv31_STATE_VARIABLE_IO_4;

#line 133 "x86_64_out.m"
                                                                      {
#line 133 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__V_219_219 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_212, (MR_String) "\n");
                                                                      }
#line 133 "x86_64_out.m"
                                                                      {
#line 133 "x86_64_out.m"
                                                                        ll_backend__x86_64_out__V_216_216 = mercury__string__f_43_43_2_f_0((MR_String) "\t.fail\t", ll_backend__x86_64_out__V_219_219);
                                                                      }
#line 133 "x86_64_out.m"
                                                                      {
#line 133 "x86_64_out.m"
                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_216_216)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv31_STATE_VARIABLE_IO_4);
                                                                      }
#line 132 "x86_64_out.m"
                                                                    }
#line 64 "x86_64_out.m"
                                                                  else
#line 64 "x86_64_out.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 134 "x86_64_out.m"
                                                                      {
#line 134 "x86_64_out.m"
                                                                        MR_String ll_backend__x86_64_out__Name_222 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 134 "x86_64_out.m"
                                                                        MR_String ll_backend__x86_64_out__V_226_226;
#line 134 "x86_64_out.m"
                                                                        MR_String ll_backend__x86_64_out__V_229_229;
#line 135 "x86_64_out.m"
                                                                        MR_Box ll_backend__x86_64_out__conv32_STATE_VARIABLE_IO_4;

#line 135 "x86_64_out.m"
                                                                        {
#line 135 "x86_64_out.m"
                                                                          ll_backend__x86_64_out__V_229_229 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_222, (MR_String) "\"\n");
                                                                        }
#line 135 "x86_64_out.m"
                                                                        {
#line 135 "x86_64_out.m"
                                                                          ll_backend__x86_64_out__V_226_226 = mercury__string__f_43_43_2_f_0((MR_String) "\t.file\t\"", ll_backend__x86_64_out__V_229_229);
                                                                        }
#line 135 "x86_64_out.m"
                                                                        {
#line 135 "x86_64_out.m"
                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_226_226)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv32_STATE_VARIABLE_IO_4);
                                                                        }
#line 134 "x86_64_out.m"
                                                                      }
#line 64 "x86_64_out.m"
                                                                    else
#line 64 "x86_64_out.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 136 "x86_64_out.m"
                                                                        {
#line 136 "x86_64_out.m"
                                                                          MR_Integer ll_backend__x86_64_out__Repeat_232 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 136 "x86_64_out.m"
                                                                          MR_Word ll_backend__x86_64_out__Size_233 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 136 "x86_64_out.m"
                                                                          MR_Word ll_backend__x86_64_out__Val_234 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));

#line 137 "x86_64_out.m"
                                                                          {
#line 137 "x86_64_out.m"
                                                                            ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".repeat", ll_backend__x86_64_out__Repeat_232, ll_backend__x86_64_out__Size_233, ll_backend__x86_64_out__Val_234);
#line 137 "x86_64_out.m"
                                                                            return;
                                                                          }
#line 136 "x86_64_out.m"
                                                                        }
#line 64 "x86_64_out.m"
                                                                      else
#line 64 "x86_64_out.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 138 "x86_64_out.m"
                                                                          {
#line 138 "x86_64_out.m"
                                                                            MR_Word ll_backend__x86_64_out__NumList_241 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 139 "x86_64_out.m"
                                                                            {
#line 139 "x86_64_out.m"
                                                                              ll_backend__x86_64_out__output_pseudo_op_float_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".float", ll_backend__x86_64_out__NumList_241);
#line 139 "x86_64_out.m"
                                                                              return;
                                                                            }
#line 138 "x86_64_out.m"
                                                                          }
#line 64 "x86_64_out.m"
                                                                        else
#line 64 "x86_64_out.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 140 "x86_64_out.m"
                                                                            {
#line 140 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__Name_248 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 140 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__Label_249 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 140 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__V_253_253;
#line 140 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__V_256_256;
#line 140 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__V_257_257;
#line 140 "x86_64_out.m"
                                                                              MR_String ll_backend__x86_64_out__V_259_259;
#line 141 "x86_64_out.m"
                                                                              MR_Box ll_backend__x86_64_out__conv33_STATE_VARIABLE_IO_4;

#line 141 "x86_64_out.m"
                                                                              {
#line 141 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__V_259_259 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Label_249, (MR_String) "\n");
                                                                              }
#line 141 "x86_64_out.m"
                                                                              {
#line 141 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__V_257_257 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_259_259);
                                                                              }
#line 141 "x86_64_out.m"
                                                                              {
#line 141 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__V_256_256 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_248, ll_backend__x86_64_out__V_257_257);
                                                                              }
#line 141 "x86_64_out.m"
                                                                              {
#line 141 "x86_64_out.m"
                                                                                ll_backend__x86_64_out__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) "\t.func\t", ll_backend__x86_64_out__V_256_256);
                                                                              }
#line 141 "x86_64_out.m"
                                                                              {
#line 141 "x86_64_out.m"
                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_253_253)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv33_STATE_VARIABLE_IO_4);
                                                                              }
#line 140 "x86_64_out.m"
                                                                            }
#line 64 "x86_64_out.m"
                                                                          else
#line 64 "x86_64_out.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 142 "x86_64_out.m"
                                                                              {
#line 142 "x86_64_out.m"
                                                                                MR_String ll_backend__x86_64_out__Symbol_262 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 142 "x86_64_out.m"
                                                                                MR_String ll_backend__x86_64_out__V_266_266;
#line 142 "x86_64_out.m"
                                                                                MR_String ll_backend__x86_64_out__V_269_269;
#line 143 "x86_64_out.m"
                                                                                MR_Box ll_backend__x86_64_out__conv34_STATE_VARIABLE_IO_4;

#line 143 "x86_64_out.m"
                                                                                {
#line 143 "x86_64_out.m"
                                                                                  ll_backend__x86_64_out__V_269_269 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_262, (MR_String) "\n");
                                                                                }
#line 143 "x86_64_out.m"
                                                                                {
#line 143 "x86_64_out.m"
                                                                                  ll_backend__x86_64_out__V_266_266 = mercury__string__f_43_43_2_f_0((MR_String) "\t.global\t", ll_backend__x86_64_out__V_269_269);
                                                                                }
#line 143 "x86_64_out.m"
                                                                                {
#line 143 "x86_64_out.m"
                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_266_266)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv34_STATE_VARIABLE_IO_4);
                                                                                }
#line 142 "x86_64_out.m"
                                                                              }
#line 64 "x86_64_out.m"
                                                                            else
#line 64 "x86_64_out.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 144 "x86_64_out.m"
                                                                                {
#line 144 "x86_64_out.m"
                                                                                  MR_String ll_backend__x86_64_out__Symbol_272 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 144 "x86_64_out.m"
                                                                                  MR_String ll_backend__x86_64_out__V_276_276;
#line 144 "x86_64_out.m"
                                                                                  MR_String ll_backend__x86_64_out__V_279_279;
#line 145 "x86_64_out.m"
                                                                                  MR_Box ll_backend__x86_64_out__conv35_STATE_VARIABLE_IO_4;

#line 145 "x86_64_out.m"
                                                                                  {
#line 145 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__V_279_279 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_272, (MR_String) "\n");
                                                                                  }
#line 145 "x86_64_out.m"
                                                                                  {
#line 145 "x86_64_out.m"
                                                                                    ll_backend__x86_64_out__V_276_276 = mercury__string__f_43_43_2_f_0((MR_String) "\t.globl\t", ll_backend__x86_64_out__V_279_279);
                                                                                  }
#line 145 "x86_64_out.m"
                                                                                  {
#line 145 "x86_64_out.m"
                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_276_276)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv35_STATE_VARIABLE_IO_4);
                                                                                  }
#line 144 "x86_64_out.m"
                                                                                }
#line 64 "x86_64_out.m"
                                                                              else
#line 64 "x86_64_out.m"
                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 146 "x86_64_out.m"
                                                                                  {
#line 146 "x86_64_out.m"
                                                                                    MR_String ll_backend__x86_64_out__Name_282 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 146 "x86_64_out.m"
                                                                                    MR_String ll_backend__x86_64_out__V_286_286;
#line 146 "x86_64_out.m"
                                                                                    MR_String ll_backend__x86_64_out__V_289_289;
#line 147 "x86_64_out.m"
                                                                                    MR_Box ll_backend__x86_64_out__conv36_STATE_VARIABLE_IO_4;

#line 147 "x86_64_out.m"
                                                                                    {
#line 147 "x86_64_out.m"
                                                                                      ll_backend__x86_64_out__V_289_289 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_282, (MR_String) "\n");
                                                                                    }
#line 147 "x86_64_out.m"
                                                                                    {
#line 147 "x86_64_out.m"
                                                                                      ll_backend__x86_64_out__V_286_286 = mercury__string__f_43_43_2_f_0((MR_String) "\t.hidden\t", ll_backend__x86_64_out__V_289_289);
                                                                                    }
#line 147 "x86_64_out.m"
                                                                                    {
#line 147 "x86_64_out.m"
                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_286_286)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv36_STATE_VARIABLE_IO_4);
                                                                                    }
#line 146 "x86_64_out.m"
                                                                                  }
#line 64 "x86_64_out.m"
                                                                                else
#line 64 "x86_64_out.m"
                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 148 "x86_64_out.m"
                                                                                    {
#line 148 "x86_64_out.m"
                                                                                      MR_Word ll_backend__x86_64_out__ExprList_292 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 149 "x86_64_out.m"
                                                                                      {
#line 149 "x86_64_out.m"
                                                                                        ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".hword", ll_backend__x86_64_out__ExprList_292);
#line 149 "x86_64_out.m"
                                                                                        return;
                                                                                      }
#line 148 "x86_64_out.m"
                                                                                    }
#line 64 "x86_64_out.m"
                                                                                  else
#line 64 "x86_64_out.m"
                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 156 "x86_64_out.m"
                                                                                      {
#line 156 "x86_64_out.m"
                                                                                        MR_String ll_backend__x86_64_out__Str1_325 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 156 "x86_64_out.m"
                                                                                        MR_String ll_backend__x86_64_out__Str2_326 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 156 "x86_64_out.m"
                                                                                        MR_String ll_backend__x86_64_out__V_330_330;
#line 156 "x86_64_out.m"
                                                                                        MR_String ll_backend__x86_64_out__V_333_333;
#line 156 "x86_64_out.m"
                                                                                        MR_String ll_backend__x86_64_out__V_334_334;
#line 156 "x86_64_out.m"
                                                                                        MR_String ll_backend__x86_64_out__V_336_336;
#line 157 "x86_64_out.m"
                                                                                        MR_Box ll_backend__x86_64_out__conv37_STATE_VARIABLE_IO_4;

#line 157 "x86_64_out.m"
                                                                                        {
#line 157 "x86_64_out.m"
                                                                                          ll_backend__x86_64_out__V_336_336 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str2_326, (MR_String) "\n");
                                                                                        }
#line 157 "x86_64_out.m"
                                                                                        {
#line 157 "x86_64_out.m"
                                                                                          ll_backend__x86_64_out__V_334_334 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_336_336);
                                                                                        }
#line 157 "x86_64_out.m"
                                                                                        {
#line 157 "x86_64_out.m"
                                                                                          ll_backend__x86_64_out__V_333_333 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str1_325, ll_backend__x86_64_out__V_334_334);
                                                                                        }
#line 157 "x86_64_out.m"
                                                                                        {
#line 157 "x86_64_out.m"
                                                                                          ll_backend__x86_64_out__V_330_330 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifc\t", ll_backend__x86_64_out__V_333_333);
                                                                                        }
#line 157 "x86_64_out.m"
                                                                                        {
#line 157 "x86_64_out.m"
                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_330_330)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv37_STATE_VARIABLE_IO_4);
                                                                                        }
#line 156 "x86_64_out.m"
                                                                                      }
#line 64 "x86_64_out.m"
                                                                                    else
#line 64 "x86_64_out.m"
                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 154 "x86_64_out.m"
                                                                                        {
#line 154 "x86_64_out.m"
                                                                                          MR_String ll_backend__x86_64_out__Symbol_315 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 154 "x86_64_out.m"
                                                                                          MR_String ll_backend__x86_64_out__V_319_319;
#line 154 "x86_64_out.m"
                                                                                          MR_String ll_backend__x86_64_out__V_322_322;
#line 155 "x86_64_out.m"
                                                                                          MR_Box ll_backend__x86_64_out__conv38_STATE_VARIABLE_IO_4;

#line 155 "x86_64_out.m"
                                                                                          {
#line 155 "x86_64_out.m"
                                                                                            ll_backend__x86_64_out__V_322_322 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_315, (MR_String) "\n");
                                                                                          }
#line 155 "x86_64_out.m"
                                                                                          {
#line 155 "x86_64_out.m"
                                                                                            ll_backend__x86_64_out__V_319_319 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifdef\t", ll_backend__x86_64_out__V_322_322);
                                                                                          }
#line 155 "x86_64_out.m"
                                                                                          {
#line 155 "x86_64_out.m"
                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_319_319)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv38_STATE_VARIABLE_IO_4);
                                                                                          }
#line 154 "x86_64_out.m"
                                                                                        }
#line 64 "x86_64_out.m"
                                                                                      else
#line 64 "x86_64_out.m"
                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 158 "x86_64_out.m"
                                                                                          {
#line 158 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__Expr_339 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 158 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__V_343_343;
#line 158 "x86_64_out.m"
                                                                                            MR_String ll_backend__x86_64_out__V_346_346;
#line 159 "x86_64_out.m"
                                                                                            MR_Box ll_backend__x86_64_out__conv39_STATE_VARIABLE_IO_4;

#line 159 "x86_64_out.m"
                                                                                            {
#line 159 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__V_346_346 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_339, (MR_String) "\n");
                                                                                            }
#line 159 "x86_64_out.m"
                                                                                            {
#line 159 "x86_64_out.m"
                                                                                              ll_backend__x86_64_out__V_343_343 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifeq\t", ll_backend__x86_64_out__V_346_346);
                                                                                            }
#line 159 "x86_64_out.m"
                                                                                            {
#line 159 "x86_64_out.m"
                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_343_343)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv39_STATE_VARIABLE_IO_4);
                                                                                            }
#line 158 "x86_64_out.m"
                                                                                          }
#line 64 "x86_64_out.m"
                                                                                        else
#line 64 "x86_64_out.m"
                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 160 "x86_64_out.m"
                                                                                            {
#line 160 "x86_64_out.m"
                                                                                              MR_String ll_backend__x86_64_out__Expr_349 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 160 "x86_64_out.m"
                                                                                              MR_String ll_backend__x86_64_out__V_353_353;
#line 160 "x86_64_out.m"
                                                                                              MR_String ll_backend__x86_64_out__V_356_356;
#line 161 "x86_64_out.m"
                                                                                              MR_Box ll_backend__x86_64_out__conv40_STATE_VARIABLE_IO_4;

#line 161 "x86_64_out.m"
                                                                                              {
#line 161 "x86_64_out.m"
                                                                                                ll_backend__x86_64_out__V_356_356 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_349, (MR_String) "\n");
                                                                                              }
#line 161 "x86_64_out.m"
                                                                                              {
#line 161 "x86_64_out.m"
                                                                                                ll_backend__x86_64_out__V_353_353 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifge\t", ll_backend__x86_64_out__V_356_356);
                                                                                              }
#line 161 "x86_64_out.m"
                                                                                              {
#line 161 "x86_64_out.m"
                                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_353_353)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv40_STATE_VARIABLE_IO_4);
                                                                                              }
#line 160 "x86_64_out.m"
                                                                                            }
#line 64 "x86_64_out.m"
                                                                                          else
#line 64 "x86_64_out.m"
                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 162 "x86_64_out.m"
                                                                                              {
#line 162 "x86_64_out.m"
                                                                                                MR_String ll_backend__x86_64_out__Expr_359 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 162 "x86_64_out.m"
                                                                                                MR_String ll_backend__x86_64_out__V_363_363;
#line 162 "x86_64_out.m"
                                                                                                MR_String ll_backend__x86_64_out__V_366_366;
#line 163 "x86_64_out.m"
                                                                                                MR_Box ll_backend__x86_64_out__conv41_STATE_VARIABLE_IO_4;

#line 163 "x86_64_out.m"
                                                                                                {
#line 163 "x86_64_out.m"
                                                                                                  ll_backend__x86_64_out__V_366_366 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_359, (MR_String) "\n");
                                                                                                }
#line 163 "x86_64_out.m"
                                                                                                {
#line 163 "x86_64_out.m"
                                                                                                  ll_backend__x86_64_out__V_363_363 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifgt\t", ll_backend__x86_64_out__V_366_366);
                                                                                                }
#line 163 "x86_64_out.m"
                                                                                                {
#line 163 "x86_64_out.m"
                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_363_363)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv41_STATE_VARIABLE_IO_4);
                                                                                                }
#line 162 "x86_64_out.m"
                                                                                              }
#line 64 "x86_64_out.m"
                                                                                            else
#line 64 "x86_64_out.m"
                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 164 "x86_64_out.m"
                                                                                                {
#line 164 "x86_64_out.m"
                                                                                                  MR_String ll_backend__x86_64_out__Expr_369 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "x86_64_out.m"
                                                                                                  MR_String ll_backend__x86_64_out__V_373_373;
#line 164 "x86_64_out.m"
                                                                                                  MR_String ll_backend__x86_64_out__V_376_376;
#line 165 "x86_64_out.m"
                                                                                                  MR_Box ll_backend__x86_64_out__conv42_STATE_VARIABLE_IO_4;

#line 165 "x86_64_out.m"
                                                                                                  {
#line 165 "x86_64_out.m"
                                                                                                    ll_backend__x86_64_out__V_376_376 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_369, (MR_String) "\n");
                                                                                                  }
#line 165 "x86_64_out.m"
                                                                                                  {
#line 165 "x86_64_out.m"
                                                                                                    ll_backend__x86_64_out__V_373_373 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifle\t", ll_backend__x86_64_out__V_376_376);
                                                                                                  }
#line 165 "x86_64_out.m"
                                                                                                  {
#line 165 "x86_64_out.m"
                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_373_373)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv42_STATE_VARIABLE_IO_4);
                                                                                                  }
#line 164 "x86_64_out.m"
                                                                                                }
#line 64 "x86_64_out.m"
                                                                                              else
#line 64 "x86_64_out.m"
                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 166 "x86_64_out.m"
                                                                                                  {
#line 166 "x86_64_out.m"
                                                                                                    MR_String ll_backend__x86_64_out__Expr_379 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 166 "x86_64_out.m"
                                                                                                    MR_String ll_backend__x86_64_out__V_383_383;
#line 166 "x86_64_out.m"
                                                                                                    MR_String ll_backend__x86_64_out__V_386_386;
#line 167 "x86_64_out.m"
                                                                                                    MR_Box ll_backend__x86_64_out__conv43_STATE_VARIABLE_IO_4;

#line 167 "x86_64_out.m"
                                                                                                    {
#line 167 "x86_64_out.m"
                                                                                                      ll_backend__x86_64_out__V_386_386 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_379, (MR_String) "\n");
                                                                                                    }
#line 167 "x86_64_out.m"
                                                                                                    {
#line 167 "x86_64_out.m"
                                                                                                      ll_backend__x86_64_out__V_383_383 = mercury__string__f_43_43_2_f_0((MR_String) "\t.iflt\t", ll_backend__x86_64_out__V_386_386);
                                                                                                    }
#line 167 "x86_64_out.m"
                                                                                                    {
#line 167 "x86_64_out.m"
                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_383_383)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv43_STATE_VARIABLE_IO_4);
                                                                                                    }
#line 166 "x86_64_out.m"
                                                                                                  }
#line 64 "x86_64_out.m"
                                                                                                else
#line 64 "x86_64_out.m"
                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 168 "x86_64_out.m"
                                                                                                    {
#line 168 "x86_64_out.m"
                                                                                                      MR_String ll_backend__x86_64_out__Str1_389 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "x86_64_out.m"
                                                                                                      MR_String ll_backend__x86_64_out__Str2_390 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "x86_64_out.m"
                                                                                                      MR_String ll_backend__x86_64_out__V_394_394;
#line 168 "x86_64_out.m"
                                                                                                      MR_String ll_backend__x86_64_out__V_397_397;
#line 168 "x86_64_out.m"
                                                                                                      MR_String ll_backend__x86_64_out__V_398_398;
#line 168 "x86_64_out.m"
                                                                                                      MR_String ll_backend__x86_64_out__V_400_400;
#line 169 "x86_64_out.m"
                                                                                                      MR_Box ll_backend__x86_64_out__conv44_STATE_VARIABLE_IO_4;

#line 169 "x86_64_out.m"
                                                                                                      {
#line 169 "x86_64_out.m"
                                                                                                        ll_backend__x86_64_out__V_400_400 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str2_390, (MR_String) "\n");
                                                                                                      }
#line 169 "x86_64_out.m"
                                                                                                      {
#line 169 "x86_64_out.m"
                                                                                                        ll_backend__x86_64_out__V_398_398 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_400_400);
                                                                                                      }
#line 169 "x86_64_out.m"
                                                                                                      {
#line 169 "x86_64_out.m"
                                                                                                        ll_backend__x86_64_out__V_397_397 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str1_389, ll_backend__x86_64_out__V_398_398);
                                                                                                      }
#line 169 "x86_64_out.m"
                                                                                                      {
#line 169 "x86_64_out.m"
                                                                                                        ll_backend__x86_64_out__V_394_394 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifnc\t", ll_backend__x86_64_out__V_397_397);
                                                                                                      }
#line 169 "x86_64_out.m"
                                                                                                      {
#line 169 "x86_64_out.m"
                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_394_394)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv44_STATE_VARIABLE_IO_4);
                                                                                                      }
#line 168 "x86_64_out.m"
                                                                                                    }
#line 64 "x86_64_out.m"
                                                                                                  else
#line 64 "x86_64_out.m"
                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 170 "x86_64_out.m"
                                                                                                      {
#line 170 "x86_64_out.m"
                                                                                                        MR_String ll_backend__x86_64_out__Symbol_403 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "x86_64_out.m"
                                                                                                        MR_String ll_backend__x86_64_out__V_407_407;
#line 170 "x86_64_out.m"
                                                                                                        MR_String ll_backend__x86_64_out__V_410_410;
#line 171 "x86_64_out.m"
                                                                                                        MR_Box ll_backend__x86_64_out__conv45_STATE_VARIABLE_IO_4;

#line 171 "x86_64_out.m"
                                                                                                        {
#line 171 "x86_64_out.m"
                                                                                                          ll_backend__x86_64_out__V_410_410 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_403, (MR_String) "\n");
                                                                                                        }
#line 171 "x86_64_out.m"
                                                                                                        {
#line 171 "x86_64_out.m"
                                                                                                          ll_backend__x86_64_out__V_407_407 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifndef\t", ll_backend__x86_64_out__V_410_410);
                                                                                                        }
#line 171 "x86_64_out.m"
                                                                                                        {
#line 171 "x86_64_out.m"
                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_407_407)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv45_STATE_VARIABLE_IO_4);
                                                                                                        }
#line 170 "x86_64_out.m"
                                                                                                      }
#line 64 "x86_64_out.m"
                                                                                                    else
#line 64 "x86_64_out.m"
                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 174 "x86_64_out.m"
                                                                                                        {
#line 174 "x86_64_out.m"
                                                                                                          MR_String ll_backend__x86_64_out__Expr_423 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 174 "x86_64_out.m"
                                                                                                          MR_String ll_backend__x86_64_out__V_427_427;
#line 174 "x86_64_out.m"
                                                                                                          MR_String ll_backend__x86_64_out__V_430_430;
#line 175 "x86_64_out.m"
                                                                                                          MR_Box ll_backend__x86_64_out__conv46_STATE_VARIABLE_IO_4;

#line 175 "x86_64_out.m"
                                                                                                          {
#line 175 "x86_64_out.m"
                                                                                                            ll_backend__x86_64_out__V_430_430 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_423, (MR_String) "\n");
                                                                                                          }
#line 175 "x86_64_out.m"
                                                                                                          {
#line 175 "x86_64_out.m"
                                                                                                            ll_backend__x86_64_out__V_427_427 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifne\t", ll_backend__x86_64_out__V_430_430);
                                                                                                          }
#line 175 "x86_64_out.m"
                                                                                                          {
#line 175 "x86_64_out.m"
                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_427_427)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv46_STATE_VARIABLE_IO_4);
                                                                                                          }
#line 174 "x86_64_out.m"
                                                                                                        }
#line 64 "x86_64_out.m"
                                                                                                      else
#line 64 "x86_64_out.m"
                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 176 "x86_64_out.m"
                                                                                                          {
#line 176 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__Str1_433 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 176 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__Str2_434 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 176 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__V_438_438;
#line 176 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__V_441_441;
#line 176 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__V_442_442;
#line 176 "x86_64_out.m"
                                                                                                            MR_String ll_backend__x86_64_out__V_444_444;
#line 177 "x86_64_out.m"
                                                                                                            MR_Box ll_backend__x86_64_out__conv47_STATE_VARIABLE_IO_4;

#line 177 "x86_64_out.m"
                                                                                                            {
#line 177 "x86_64_out.m"
                                                                                                              ll_backend__x86_64_out__V_444_444 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str2_434, (MR_String) "\n");
                                                                                                            }
#line 177 "x86_64_out.m"
                                                                                                            {
#line 177 "x86_64_out.m"
                                                                                                              ll_backend__x86_64_out__V_442_442 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_444_444);
                                                                                                            }
#line 177 "x86_64_out.m"
                                                                                                            {
#line 177 "x86_64_out.m"
                                                                                                              ll_backend__x86_64_out__V_441_441 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str1_433, ll_backend__x86_64_out__V_442_442);
                                                                                                            }
#line 177 "x86_64_out.m"
                                                                                                            {
#line 177 "x86_64_out.m"
                                                                                                              ll_backend__x86_64_out__V_438_438 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifnes\t", ll_backend__x86_64_out__V_441_441);
                                                                                                            }
#line 177 "x86_64_out.m"
                                                                                                            {
#line 177 "x86_64_out.m"
                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_438_438)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv47_STATE_VARIABLE_IO_4);
                                                                                                            }
#line 176 "x86_64_out.m"
                                                                                                          }
#line 64 "x86_64_out.m"
                                                                                                        else
#line 64 "x86_64_out.m"
                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 172 "x86_64_out.m"
                                                                                                            {
#line 172 "x86_64_out.m"
                                                                                                              MR_String ll_backend__x86_64_out__Symbol_413 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "x86_64_out.m"
                                                                                                              MR_String ll_backend__x86_64_out__V_417_417;
#line 172 "x86_64_out.m"
                                                                                                              MR_String ll_backend__x86_64_out__V_420_420;
#line 173 "x86_64_out.m"
                                                                                                              MR_Box ll_backend__x86_64_out__conv48_STATE_VARIABLE_IO_4;

#line 173 "x86_64_out.m"
                                                                                                              {
#line 173 "x86_64_out.m"
                                                                                                                ll_backend__x86_64_out__V_420_420 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_413, (MR_String) "\n");
                                                                                                              }
#line 173 "x86_64_out.m"
                                                                                                              {
#line 173 "x86_64_out.m"
                                                                                                                ll_backend__x86_64_out__V_417_417 = mercury__string__f_43_43_2_f_0((MR_String) "\t.ifnotdef\t", ll_backend__x86_64_out__V_420_420);
                                                                                                              }
#line 173 "x86_64_out.m"
                                                                                                              {
#line 173 "x86_64_out.m"
                                                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_417_417)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv48_STATE_VARIABLE_IO_4);
                                                                                                              }
#line 172 "x86_64_out.m"
                                                                                                            }
#line 64 "x86_64_out.m"
                                                                                                          else
#line 64 "x86_64_out.m"
                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 178 "x86_64_out.m"
                                                                                                              {
#line 178 "x86_64_out.m"
                                                                                                                MR_String ll_backend__x86_64_out__File_447 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "x86_64_out.m"
                                                                                                                MR_String ll_backend__x86_64_out__V_451_451;
#line 178 "x86_64_out.m"
                                                                                                                MR_String ll_backend__x86_64_out__V_454_454;
#line 178 "x86_64_out.m"
                                                                                                                MR_String ll_backend__x86_64_out__V_456_456;
#line 179 "x86_64_out.m"
                                                                                                                MR_Box ll_backend__x86_64_out__conv49_STATE_VARIABLE_IO_4;

#line 179 "x86_64_out.m"
                                                                                                                {
#line 179 "x86_64_out.m"
                                                                                                                  ll_backend__x86_64_out__V_456_456 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__File_447, (MR_String) "\"\n");
                                                                                                                }
#line 179 "x86_64_out.m"
                                                                                                                {
#line 179 "x86_64_out.m"
                                                                                                                  ll_backend__x86_64_out__V_454_454 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__x86_64_out__V_456_456);
                                                                                                                }
#line 179 "x86_64_out.m"
                                                                                                                {
#line 179 "x86_64_out.m"
                                                                                                                  ll_backend__x86_64_out__V_451_451 = mercury__string__f_43_43_2_f_0((MR_String) "\t.include\t", ll_backend__x86_64_out__V_454_454);
                                                                                                                }
#line 179 "x86_64_out.m"
                                                                                                                {
#line 179 "x86_64_out.m"
                                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_451_451)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv49_STATE_VARIABLE_IO_4);
                                                                                                                }
#line 178 "x86_64_out.m"
                                                                                                              }
#line 64 "x86_64_out.m"
                                                                                                            else
#line 64 "x86_64_out.m"
                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 180 "x86_64_out.m"
                                                                                                                {
#line 180 "x86_64_out.m"
                                                                                                                  MR_Word ll_backend__x86_64_out__ExprList_459 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 181 "x86_64_out.m"
                                                                                                                  {
#line 181 "x86_64_out.m"
                                                                                                                    ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".int", ll_backend__x86_64_out__ExprList_459);
#line 181 "x86_64_out.m"
                                                                                                                    return;
                                                                                                                  }
#line 180 "x86_64_out.m"
                                                                                                                }
#line 64 "x86_64_out.m"
                                                                                                              else
#line 64 "x86_64_out.m"
                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 182 "x86_64_out.m"
                                                                                                                  {
#line 182 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__Name_466 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 182 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__V_470_470;
#line 182 "x86_64_out.m"
                                                                                                                    MR_String ll_backend__x86_64_out__V_473_473;
#line 183 "x86_64_out.m"
                                                                                                                    MR_Box ll_backend__x86_64_out__conv50_STATE_VARIABLE_IO_4;

#line 183 "x86_64_out.m"
                                                                                                                    {
#line 183 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__V_473_473 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_466, (MR_String) "\n");
                                                                                                                    }
#line 183 "x86_64_out.m"
                                                                                                                    {
#line 183 "x86_64_out.m"
                                                                                                                      ll_backend__x86_64_out__V_470_470 = mercury__string__f_43_43_2_f_0((MR_String) "\t.internal\t", ll_backend__x86_64_out__V_473_473);
                                                                                                                    }
#line 183 "x86_64_out.m"
                                                                                                                    {
#line 183 "x86_64_out.m"
                                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_470_470)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv50_STATE_VARIABLE_IO_4);
                                                                                                                    }
#line 182 "x86_64_out.m"
                                                                                                                  }
#line 64 "x86_64_out.m"
                                                                                                                else
#line 64 "x86_64_out.m"
                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 35))))
#line 184 "x86_64_out.m"
                                                                                                                    {
#line 184 "x86_64_out.m"
                                                                                                                      MR_String ll_backend__x86_64_out__Symbol_476 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 184 "x86_64_out.m"
                                                                                                                      MR_Integer ll_backend__x86_64_out__Length_477 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 184 "x86_64_out.m"
                                                                                                                      MR_String ll_backend__x86_64_out__V_481_481;
#line 185 "x86_64_out.m"
                                                                                                                      MR_Box ll_backend__x86_64_out__conv51_STATE_VARIABLE_IO_482_482;
#line 186 "x86_64_out.m"
                                                                                                                      MR_Box ll_backend__x86_64_out__conv52_STATE_VARIABLE_IO_484_484;
#line 187 "x86_64_out.m"
                                                                                                                      MR_Box ll_backend__x86_64_out__conv53_STATE_VARIABLE_IO_4;

#line 185 "x86_64_out.m"
                                                                                                                      {
#line 185 "x86_64_out.m"
                                                                                                                        ll_backend__x86_64_out__V_481_481 = mercury__string__f_43_43_2_f_0((MR_String) "\tlcomm\t", ll_backend__x86_64_out__Symbol_476);
                                                                                                                      }
#line 185 "x86_64_out.m"
                                                                                                                      {
#line 185 "x86_64_out.m"
                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_481_481)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv51_STATE_VARIABLE_IO_482_482);
                                                                                                                      }
#line 186 "x86_64_out.m"
                                                                                                                      {
#line 186 "x86_64_out.m"
                                                                                                                        mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Length_477, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv52_STATE_VARIABLE_IO_484_484);
                                                                                                                      }
#line 187 "x86_64_out.m"
                                                                                                                      {
#line 187 "x86_64_out.m"
                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv53_STATE_VARIABLE_IO_4);
                                                                                                                      }
#line 184 "x86_64_out.m"
                                                                                                                    }
#line 64 "x86_64_out.m"
                                                                                                                  else
#line 64 "x86_64_out.m"
                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 36))))
#line 188 "x86_64_out.m"
                                                                                                                      {
#line 188 "x86_64_out.m"
                                                                                                                        MR_Integer ll_backend__x86_64_out__LineNum_488 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 189 "x86_64_out.m"
                                                                                                                        MR_Box ll_backend__x86_64_out__conv54_STATE_VARIABLE_IO_493_493;
#line 190 "x86_64_out.m"
                                                                                                                        MR_Box ll_backend__x86_64_out__conv55_STATE_VARIABLE_IO_494_494;
#line 191 "x86_64_out.m"
                                                                                                                        MR_Box ll_backend__x86_64_out__conv56_STATE_VARIABLE_IO_4;

#line 189 "x86_64_out.m"
                                                                                                                        {
#line 189 "x86_64_out.m"
                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.line\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv54_STATE_VARIABLE_IO_493_493);
                                                                                                                        }
#line 190 "x86_64_out.m"
                                                                                                                        {
#line 190 "x86_64_out.m"
                                                                                                                          mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__LineNum_488, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv55_STATE_VARIABLE_IO_494_494);
                                                                                                                        }
#line 191 "x86_64_out.m"
                                                                                                                        {
#line 191 "x86_64_out.m"
                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv56_STATE_VARIABLE_IO_4);
                                                                                                                        }
#line 188 "x86_64_out.m"
                                                                                                                      }
#line 64 "x86_64_out.m"
                                                                                                                    else
#line 64 "x86_64_out.m"
                                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 37))))
#line 194 "x86_64_out.m"
                                                                                                                        {
#line 194 "x86_64_out.m"
                                                                                                                          MR_Word ll_backend__x86_64_out__ExprList_504 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 195 "x86_64_out.m"
                                                                                                                          {
#line 195 "x86_64_out.m"
                                                                                                                            ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".long", ll_backend__x86_64_out__ExprList_504);
#line 195 "x86_64_out.m"
                                                                                                                            return;
                                                                                                                          }
#line 194 "x86_64_out.m"
                                                                                                                        }
#line 64 "x86_64_out.m"
                                                                                                                      else
#line 64 "x86_64_out.m"
                                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 38))))
#line 200 "x86_64_out.m"
                                                                                                                          {
#line 200 "x86_64_out.m"
                                                                                                                            MR_Integer ll_backend__x86_64_out__PowBit_523 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 200 "x86_64_out.m"
                                                                                                                            MR_Word ll_backend__x86_64_out__FillVal_524 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 200 "x86_64_out.m"
                                                                                                                            MR_Word ll_backend__x86_64_out__SkipBytes_525 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));

#line 201 "x86_64_out.m"
                                                                                                                            {
#line 201 "x86_64_out.m"
                                                                                                                              ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".p2align", ll_backend__x86_64_out__PowBit_523, ll_backend__x86_64_out__FillVal_524, ll_backend__x86_64_out__SkipBytes_525);
#line 201 "x86_64_out.m"
                                                                                                                              return;
                                                                                                                            }
#line 200 "x86_64_out.m"
                                                                                                                          }
#line 64 "x86_64_out.m"
                                                                                                                        else
#line 64 "x86_64_out.m"
                                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 39))))
#line 207 "x86_64_out.m"
                                                                                                                            {
#line 207 "x86_64_out.m"
                                                                                                                              MR_String ll_backend__x86_64_out__Str_544 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 207 "x86_64_out.m"
                                                                                                                              MR_String ll_backend__x86_64_out__V_548_548;
#line 207 "x86_64_out.m"
                                                                                                                              MR_String ll_backend__x86_64_out__V_551_551;
#line 208 "x86_64_out.m"
                                                                                                                              MR_Box ll_backend__x86_64_out__conv57_STATE_VARIABLE_IO_4;

#line 208 "x86_64_out.m"
                                                                                                                              {
#line 208 "x86_64_out.m"
                                                                                                                                ll_backend__x86_64_out__V_551_551 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Str_544, (MR_String) "\n");
                                                                                                                              }
#line 208 "x86_64_out.m"
                                                                                                                              {
#line 208 "x86_64_out.m"
                                                                                                                                ll_backend__x86_64_out__V_548_548 = mercury__string__f_43_43_2_f_0((MR_String) "\t.print\t", ll_backend__x86_64_out__V_551_551);
                                                                                                                              }
#line 208 "x86_64_out.m"
                                                                                                                              {
#line 208 "x86_64_out.m"
                                                                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_548_548)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv57_STATE_VARIABLE_IO_4);
                                                                                                                              }
#line 207 "x86_64_out.m"
                                                                                                                            }
#line 64 "x86_64_out.m"
                                                                                                                          else
#line 64 "x86_64_out.m"
                                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 40))))
#line 209 "x86_64_out.m"
                                                                                                                              {
#line 209 "x86_64_out.m"
                                                                                                                                MR_String ll_backend__x86_64_out__Name_554 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 209 "x86_64_out.m"
                                                                                                                                MR_String ll_backend__x86_64_out__V_558_558;
#line 209 "x86_64_out.m"
                                                                                                                                MR_String ll_backend__x86_64_out__V_561_561;
#line 210 "x86_64_out.m"
                                                                                                                                MR_Box ll_backend__x86_64_out__conv58_STATE_VARIABLE_IO_4;

#line 210 "x86_64_out.m"
                                                                                                                                {
#line 210 "x86_64_out.m"
                                                                                                                                  ll_backend__x86_64_out__V_561_561 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_554, (MR_String) "\n");
                                                                                                                                }
#line 210 "x86_64_out.m"
                                                                                                                                {
#line 210 "x86_64_out.m"
                                                                                                                                  ll_backend__x86_64_out__V_558_558 = mercury__string__f_43_43_2_f_0((MR_String) "\t.protected\t", ll_backend__x86_64_out__V_561_561);
                                                                                                                                }
#line 210 "x86_64_out.m"
                                                                                                                                {
#line 210 "x86_64_out.m"
                                                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_558_558)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv58_STATE_VARIABLE_IO_4);
                                                                                                                                }
#line 209 "x86_64_out.m"
                                                                                                                              }
#line 64 "x86_64_out.m"
                                                                                                                            else
#line 64 "x86_64_out.m"
                                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 41))))
#line 211 "x86_64_out.m"
                                                                                                                                {
#line 211 "x86_64_out.m"
                                                                                                                                  MR_Integer ll_backend__x86_64_out__Lines_564 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 211 "x86_64_out.m"
                                                                                                                                  MR_Word ll_backend__x86_64_out__Cols_565 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 212 "x86_64_out.m"
                                                                                                                                  {
#line 212 "x86_64_out.m"
                                                                                                                                    ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".psize", ll_backend__x86_64_out__Lines_564, ll_backend__x86_64_out__Cols_565, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 212 "x86_64_out.m"
                                                                                                                                    return;
                                                                                                                                  }
#line 211 "x86_64_out.m"
                                                                                                                                }
#line 64 "x86_64_out.m"
                                                                                                                              else
#line 64 "x86_64_out.m"
                                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 42))))
#line 213 "x86_64_out.m"
                                                                                                                                  {
#line 213 "x86_64_out.m"
                                                                                                                                    MR_String ll_backend__x86_64_out__Name_573 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 213 "x86_64_out.m"
                                                                                                                                    MR_String ll_backend__x86_64_out__V_577_577;
#line 213 "x86_64_out.m"
                                                                                                                                    MR_String ll_backend__x86_64_out__V_580_580;
#line 214 "x86_64_out.m"
                                                                                                                                    MR_Box ll_backend__x86_64_out__conv59_STATE_VARIABLE_IO_4;

#line 214 "x86_64_out.m"
                                                                                                                                    {
#line 214 "x86_64_out.m"
                                                                                                                                      ll_backend__x86_64_out__V_580_580 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_573, (MR_String) "\n");
                                                                                                                                    }
#line 214 "x86_64_out.m"
                                                                                                                                    {
#line 214 "x86_64_out.m"
                                                                                                                                      ll_backend__x86_64_out__V_577_577 = mercury__string__f_43_43_2_f_0((MR_String) "\t.purgem\t", ll_backend__x86_64_out__V_580_580);
                                                                                                                                    }
#line 214 "x86_64_out.m"
                                                                                                                                    {
#line 214 "x86_64_out.m"
                                                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_577_577)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv59_STATE_VARIABLE_IO_4);
                                                                                                                                    }
#line 213 "x86_64_out.m"
                                                                                                                                  }
#line 64 "x86_64_out.m"
                                                                                                                                else
#line 64 "x86_64_out.m"
                                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 215 "x86_64_out.m"
                                                                                                                                    {
#line 215 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__Name_583 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 215 "x86_64_out.m"
                                                                                                                                      MR_Integer ll_backend__x86_64_out__Subsection_584 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 215 "x86_64_out.m"
                                                                                                                                      MR_String ll_backend__x86_64_out__V_588_588;
#line 216 "x86_64_out.m"
                                                                                                                                      MR_Box ll_backend__x86_64_out__conv60_STATE_VARIABLE_IO_589_589;
#line 217 "x86_64_out.m"
                                                                                                                                      MR_Box ll_backend__x86_64_out__conv61_STATE_VARIABLE_IO_591_591;
#line 218 "x86_64_out.m"
                                                                                                                                      MR_Box ll_backend__x86_64_out__conv62_STATE_VARIABLE_IO_4;

#line 216 "x86_64_out.m"
                                                                                                                                      {
#line 216 "x86_64_out.m"
                                                                                                                                        ll_backend__x86_64_out__V_588_588 = mercury__string__f_43_43_2_f_0((MR_String) "\t.pushsection\t", ll_backend__x86_64_out__Name_583);
                                                                                                                                      }
#line 216 "x86_64_out.m"
                                                                                                                                      {
#line 216 "x86_64_out.m"
                                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_588_588)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv60_STATE_VARIABLE_IO_589_589);
                                                                                                                                      }
#line 217 "x86_64_out.m"
                                                                                                                                      {
#line 217 "x86_64_out.m"
                                                                                                                                        mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Subsection_584, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv61_STATE_VARIABLE_IO_591_591);
                                                                                                                                      }
#line 218 "x86_64_out.m"
                                                                                                                                      {
#line 218 "x86_64_out.m"
                                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv62_STATE_VARIABLE_IO_4);
                                                                                                                                      }
#line 215 "x86_64_out.m"
                                                                                                                                    }
#line 64 "x86_64_out.m"
                                                                                                                                  else
#line 64 "x86_64_out.m"
                                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 44))))
#line 219 "x86_64_out.m"
                                                                                                                                      {
#line 219 "x86_64_out.m"
                                                                                                                                        MR_Word ll_backend__x86_64_out__BigNumList_595 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 220 "x86_64_out.m"
                                                                                                                                        {
#line 220 "x86_64_out.m"
                                                                                                                                          ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) "\t.quad\t", ll_backend__x86_64_out__BigNumList_595);
#line 220 "x86_64_out.m"
                                                                                                                                          return;
                                                                                                                                        }
#line 219 "x86_64_out.m"
                                                                                                                                      }
#line 64 "x86_64_out.m"
                                                                                                                                    else
#line 64 "x86_64_out.m"
                                                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 45))))
#line 221 "x86_64_out.m"
                                                                                                                                        {
#line 221 "x86_64_out.m"
                                                                                                                                          MR_Integer ll_backend__x86_64_out__Count_602 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 222 "x86_64_out.m"
                                                                                                                                          MR_Box ll_backend__x86_64_out__conv63_STATE_VARIABLE_IO_607_607;
#line 223 "x86_64_out.m"
                                                                                                                                          MR_Box ll_backend__x86_64_out__conv64_STATE_VARIABLE_IO_608_608;
#line 224 "x86_64_out.m"
                                                                                                                                          MR_Box ll_backend__x86_64_out__conv65_STATE_VARIABLE_IO_4;

#line 222 "x86_64_out.m"
                                                                                                                                          {
#line 222 "x86_64_out.m"
                                                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\t.rept\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv63_STATE_VARIABLE_IO_607_607);
                                                                                                                                          }
#line 223 "x86_64_out.m"
                                                                                                                                          {
#line 223 "x86_64_out.m"
                                                                                                                                            mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Count_602, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv64_STATE_VARIABLE_IO_608_608);
                                                                                                                                          }
#line 224 "x86_64_out.m"
                                                                                                                                          {
#line 224 "x86_64_out.m"
                                                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv65_STATE_VARIABLE_IO_4);
                                                                                                                                          }
#line 221 "x86_64_out.m"
                                                                                                                                        }
#line 64 "x86_64_out.m"
                                                                                                                                      else
#line 64 "x86_64_out.m"
                                                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 46))))
#line 225 "x86_64_out.m"
                                                                                                                                          {
#line 225 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__SubHeading_612 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 225 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_616_616;
#line 225 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_619_619;
#line 225 "x86_64_out.m"
                                                                                                                                            MR_String ll_backend__x86_64_out__V_621_621;
#line 226 "x86_64_out.m"
                                                                                                                                            MR_Box ll_backend__x86_64_out__conv66_STATE_VARIABLE_IO_4;

#line 226 "x86_64_out.m"
                                                                                                                                            {
#line 226 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_621_621 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__SubHeading_612, (MR_String) "\"\n");
                                                                                                                                            }
#line 226 "x86_64_out.m"
                                                                                                                                            {
#line 226 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_619_619 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__x86_64_out__V_621_621);
                                                                                                                                            }
#line 226 "x86_64_out.m"
                                                                                                                                            {
#line 226 "x86_64_out.m"
                                                                                                                                              ll_backend__x86_64_out__V_616_616 = mercury__string__f_43_43_2_f_0((MR_String) "\t.sbttl\t", ll_backend__x86_64_out__V_619_619);
                                                                                                                                            }
#line 226 "x86_64_out.m"
                                                                                                                                            {
#line 226 "x86_64_out.m"
                                                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_616_616)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv66_STATE_VARIABLE_IO_4);
                                                                                                                                            }
#line 225 "x86_64_out.m"
                                                                                                                                          }
#line 64 "x86_64_out.m"
                                                                                                                                        else
#line 64 "x86_64_out.m"
                                                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 47))))
#line 227 "x86_64_out.m"
                                                                                                                                            {
#line 227 "x86_64_out.m"
                                                                                                                                              MR_String ll_backend__x86_64_out__Class_624 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "x86_64_out.m"
                                                                                                                                              MR_String ll_backend__x86_64_out__V_628_628;
#line 227 "x86_64_out.m"
                                                                                                                                              MR_String ll_backend__x86_64_out__V_631_631;
#line 228 "x86_64_out.m"
                                                                                                                                              MR_Box ll_backend__x86_64_out__conv67_STATE_VARIABLE_IO_4;

#line 228 "x86_64_out.m"
                                                                                                                                              {
#line 228 "x86_64_out.m"
                                                                                                                                                ll_backend__x86_64_out__V_631_631 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Class_624, (MR_String) "\n");
                                                                                                                                              }
#line 228 "x86_64_out.m"
                                                                                                                                              {
#line 228 "x86_64_out.m"
                                                                                                                                                ll_backend__x86_64_out__V_628_628 = mercury__string__f_43_43_2_f_0((MR_String) "\t.scl\t", ll_backend__x86_64_out__V_631_631);
                                                                                                                                              }
#line 228 "x86_64_out.m"
                                                                                                                                              {
#line 228 "x86_64_out.m"
                                                                                                                                                mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_628_628)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv67_STATE_VARIABLE_IO_4);
                                                                                                                                              }
#line 227 "x86_64_out.m"
                                                                                                                                            }
#line 64 "x86_64_out.m"
                                                                                                                                          else
#line 64 "x86_64_out.m"
                                                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 48))))
#line 229 "x86_64_out.m"
                                                                                                                                              {
#line 229 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__Name_634 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 229 "x86_64_out.m"
                                                                                                                                                MR_Word ll_backend__x86_64_out__Flags0_635 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 229 "x86_64_out.m"
                                                                                                                                                MR_Word ll_backend__x86_64_out__Type0_636 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 3)));
#line 229 "x86_64_out.m"
                                                                                                                                                MR_Word ll_backend__x86_64_out__EntSize0_637 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 4)));
#line 229 "x86_64_out.m"
                                                                                                                                                MR_String ll_backend__x86_64_out__V_647_647;
#line 230 "x86_64_out.m"
                                                                                                                                                MR_Box ll_backend__x86_64_out__conv68_STATE_VARIABLE_IO_648_648;
#line 256 "x86_64_out.m"
                                                                                                                                                MR_Box ll_backend__x86_64_out__conv73_STATE_VARIABLE_IO_4;

#line 230 "x86_64_out.m"
                                                                                                                                                {
#line 230 "x86_64_out.m"
                                                                                                                                                  ll_backend__x86_64_out__V_647_647 = mercury__string__f_43_43_2_f_0((MR_String) "\t.section\t", ll_backend__x86_64_out__Name_634);
                                                                                                                                                }
#line 230 "x86_64_out.m"
                                                                                                                                                {
#line 230 "x86_64_out.m"
                                                                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_647_647)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv68_STATE_VARIABLE_IO_648_648);
                                                                                                                                                }
#line 246 "x86_64_out.m"
                                                                                                                                                if ((ll_backend__x86_64_out__Flags0_635 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "x86_64_out.m"
                                                                                                                                                  {
#line 247 "x86_64_out.m"
                                                                                                                                                  }
#line 246 "x86_64_out.m"
                                                                                                                                                else
#line 232 "x86_64_out.m"
                                                                                                                                                  {
#line 232 "x86_64_out.m"
                                                                                                                                                    MR_Word ll_backend__x86_64_out__Flags1_639 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Flags0_635, (MR_Integer) 0)));
#line 232 "x86_64_out.m"
                                                                                                                                                    MR_Word ll_backend__x86_64_out__Result0_640;
#line 242 "x86_64_out.m"
                                                                                                                                                    MR_Word ll_backend__x86_64_out__Type1_641;

#line 233 "x86_64_out.m"
                                                                                                                                                    {
#line 233 "x86_64_out.m"
                                                                                                                                                      ll_backend__x86_64_out__check_section_flags_and_type_3_p_0(ll_backend__x86_64_out__Flags1_639, ll_backend__x86_64_out__Type0_636, &ll_backend__x86_64_out__Result0_640);
                                                                                                                                                    }
#line 235 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Result0_640 == (MR_Integer) 1);
#line 235 "x86_64_out.m"
                                                                                                                                                    if (ll_backend__x86_64_out__succeeded)
#line 235 "x86_64_out.m"
                                                                                                                                                      {
#line 236 "x86_64_out.m"
                                                                                                                                                        ll_backend__x86_64_out__succeeded = ((MR_tag((MR_Word) ll_backend__x86_64_out__Type0_636)) == (MR_mktag((MR_Integer) 1)));
#line 236 "x86_64_out.m"
                                                                                                                                                        if (ll_backend__x86_64_out__succeeded)
#line 236 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__Type1_641 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Type0_636, (MR_Integer) 0)));
#line 235 "x86_64_out.m"
                                                                                                                                                      }
#line 242 "x86_64_out.m"
                                                                                                                                                    if (ll_backend__x86_64_out__succeeded)
#line 238 "x86_64_out.m"
                                                                                                                                                      {
#line 238 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__FlagsStr_642;
#line 238 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__Type1Str_643;
#line 238 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_651_651;
#line 238 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_654_654;
#line 238 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_656_656;
#line 239 "x86_64_out.m"
                                                                                                                                                        MR_Box ll_backend__x86_64_out__conv69_STATE_VARIABLE_IO_652_652;
#line 241 "x86_64_out.m"
                                                                                                                                                        MR_Box ll_backend__x86_64_out__conv70_STATE_VARIABLE_IO_657_657;

#line 238 "x86_64_out.m"
                                                                                                                                                        {
#line 238 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__pseudo_section_flags_to_string_3_p_0(ll_backend__x86_64_out__Flags1_639, (MR_String) "", &ll_backend__x86_64_out__FlagsStr_642);
                                                                                                                                                        }
#line 239 "x86_64_out.m"
                                                                                                                                                        {
#line 239 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_654_654 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__FlagsStr_642, (MR_String) "\"");
                                                                                                                                                        }
#line 239 "x86_64_out.m"
                                                                                                                                                        {
#line 239 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_651_651 = mercury__string__f_43_43_2_f_0((MR_String) ",\"", ll_backend__x86_64_out__V_654_654);
                                                                                                                                                        }
#line 239 "x86_64_out.m"
                                                                                                                                                        {
#line 239 "x86_64_out.m"
                                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_651_651)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv69_STATE_VARIABLE_IO_652_652);
                                                                                                                                                        }
#line 240 "x86_64_out.m"
                                                                                                                                                        {
#line 240 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__check_pseudo_section_type_2_p_0(ll_backend__x86_64_out__Type1_641, &ll_backend__x86_64_out__Type1Str_643);
                                                                                                                                                        }
#line 241 "x86_64_out.m"
                                                                                                                                                        {
#line 241 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_656_656 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__Type1Str_643);
                                                                                                                                                        }
#line 241 "x86_64_out.m"
                                                                                                                                                        {
#line 241 "x86_64_out.m"
                                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_656_656)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv70_STATE_VARIABLE_IO_657_657);
                                                                                                                                                        }
#line 238 "x86_64_out.m"
                                                                                                                                                      }
#line 242 "x86_64_out.m"
                                                                                                                                                    else
#line 243 "x86_64_out.m"
                                                                                                                                                      {
#line 243 "x86_64_out.m"
                                                                                                                                                        {
#line 243 "x86_64_out.m"
                                                                                                                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.output_x86_64_pseudo_op\'/4", (MR_String) "section: check_section_flags_and_type unexpected");
#line 243 "x86_64_out.m"
                                                                                                                                                          return;
                                                                                                                                                        }
#line 243 "x86_64_out.m"
                                                                                                                                                      }
#line 232 "x86_64_out.m"
                                                                                                                                                  }
#line 253 "x86_64_out.m"
                                                                                                                                                if ((ll_backend__x86_64_out__EntSize0_637 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "x86_64_out.m"
                                                                                                                                                  {
#line 254 "x86_64_out.m"
                                                                                                                                                  }
#line 253 "x86_64_out.m"
                                                                                                                                                else
#line 250 "x86_64_out.m"
                                                                                                                                                  {
#line 250 "x86_64_out.m"
                                                                                                                                                    MR_Integer ll_backend__x86_64_out__EntSize1_644 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__EntSize0_637, (MR_Integer) 0)));
#line 251 "x86_64_out.m"
                                                                                                                                                    MR_Box ll_backend__x86_64_out__conv71_STATE_VARIABLE_IO_663_663;
#line 252 "x86_64_out.m"
                                                                                                                                                    MR_Box ll_backend__x86_64_out__conv72_STATE_VARIABLE_IO_664_664;

#line 251 "x86_64_out.m"
                                                                                                                                                    {
#line 251 "x86_64_out.m"
                                                                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) ",")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv71_STATE_VARIABLE_IO_663_663);
                                                                                                                                                    }
#line 252 "x86_64_out.m"
                                                                                                                                                    {
#line 252 "x86_64_out.m"
                                                                                                                                                      mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__EntSize1_644, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv72_STATE_VARIABLE_IO_664_664);
                                                                                                                                                    }
#line 250 "x86_64_out.m"
                                                                                                                                                  }
#line 256 "x86_64_out.m"
                                                                                                                                                {
#line 256 "x86_64_out.m"
                                                                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv73_STATE_VARIABLE_IO_4);
                                                                                                                                                }
#line 229 "x86_64_out.m"
                                                                                                                                              }
#line 64 "x86_64_out.m"
                                                                                                                                            else
#line 64 "x86_64_out.m"
                                                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 49))))
#line 257 "x86_64_out.m"
                                                                                                                                                {
#line 257 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__Symbol_668 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 257 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__Expr_669 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 257 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_673_673;
#line 257 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_676_676;
#line 257 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_677_677;
#line 257 "x86_64_out.m"
                                                                                                                                                  MR_String ll_backend__x86_64_out__V_679_679;
#line 258 "x86_64_out.m"
                                                                                                                                                  MR_Box ll_backend__x86_64_out__conv74_STATE_VARIABLE_IO_4;

#line 258 "x86_64_out.m"
                                                                                                                                                  {
#line 258 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_679_679 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_669, (MR_String) "\n");
                                                                                                                                                  }
#line 258 "x86_64_out.m"
                                                                                                                                                  {
#line 258 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_677_677 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_679_679);
                                                                                                                                                  }
#line 258 "x86_64_out.m"
                                                                                                                                                  {
#line 258 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_676_676 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_668, ll_backend__x86_64_out__V_677_677);
                                                                                                                                                  }
#line 258 "x86_64_out.m"
                                                                                                                                                  {
#line 258 "x86_64_out.m"
                                                                                                                                                    ll_backend__x86_64_out__V_673_673 = mercury__string__f_43_43_2_f_0((MR_String) "\t.set\t", ll_backend__x86_64_out__V_676_676);
                                                                                                                                                  }
#line 258 "x86_64_out.m"
                                                                                                                                                  {
#line 258 "x86_64_out.m"
                                                                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_673_673)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv74_STATE_VARIABLE_IO_4);
                                                                                                                                                  }
#line 257 "x86_64_out.m"
                                                                                                                                                }
#line 64 "x86_64_out.m"
                                                                                                                                              else
#line 64 "x86_64_out.m"
                                                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 50))))
#line 259 "x86_64_out.m"
                                                                                                                                                  {
#line 259 "x86_64_out.m"
                                                                                                                                                    MR_Word ll_backend__x86_64_out__ExprList_682 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 260 "x86_64_out.m"
                                                                                                                                                    {
#line 260 "x86_64_out.m"
                                                                                                                                                      ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".short", ll_backend__x86_64_out__ExprList_682);
#line 260 "x86_64_out.m"
                                                                                                                                                      return;
                                                                                                                                                    }
#line 259 "x86_64_out.m"
                                                                                                                                                  }
#line 64 "x86_64_out.m"
                                                                                                                                                else
#line 64 "x86_64_out.m"
                                                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 51))))
#line 261 "x86_64_out.m"
                                                                                                                                                    {
#line 261 "x86_64_out.m"
                                                                                                                                                      MR_Word ll_backend__x86_64_out__FloatList_689 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 262 "x86_64_out.m"
                                                                                                                                                      {
#line 262 "x86_64_out.m"
                                                                                                                                                        ll_backend__x86_64_out__output_pseudo_op_float_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".single", ll_backend__x86_64_out__FloatList_689);
#line 262 "x86_64_out.m"
                                                                                                                                                        return;
                                                                                                                                                      }
#line 261 "x86_64_out.m"
                                                                                                                                                    }
#line 64 "x86_64_out.m"
                                                                                                                                                  else
#line 64 "x86_64_out.m"
                                                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 52))))
#line 263 "x86_64_out.m"
                                                                                                                                                      {
#line 263 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__Name_696 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__Expr_697 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 263 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_701_701;
#line 263 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_704_704;
#line 263 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_705_705;
#line 263 "x86_64_out.m"
                                                                                                                                                        MR_String ll_backend__x86_64_out__V_707_707;
#line 264 "x86_64_out.m"
                                                                                                                                                        MR_Box ll_backend__x86_64_out__conv75_STATE_VARIABLE_IO_4;

#line 264 "x86_64_out.m"
                                                                                                                                                        {
#line 264 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_707_707 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_697, (MR_String) "\n");
                                                                                                                                                        }
#line 264 "x86_64_out.m"
                                                                                                                                                        {
#line 264 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_705_705 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_707_707);
                                                                                                                                                        }
#line 264 "x86_64_out.m"
                                                                                                                                                        {
#line 264 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_704_704 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_696, ll_backend__x86_64_out__V_705_705);
                                                                                                                                                        }
#line 264 "x86_64_out.m"
                                                                                                                                                        {
#line 264 "x86_64_out.m"
                                                                                                                                                          ll_backend__x86_64_out__V_701_701 = mercury__string__f_43_43_2_f_0((MR_String) "\t.size\t", ll_backend__x86_64_out__V_704_704);
                                                                                                                                                        }
#line 264 "x86_64_out.m"
                                                                                                                                                        {
#line 264 "x86_64_out.m"
                                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_701_701)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv75_STATE_VARIABLE_IO_4);
                                                                                                                                                        }
#line 263 "x86_64_out.m"
                                                                                                                                                      }
#line 64 "x86_64_out.m"
                                                                                                                                                    else
#line 64 "x86_64_out.m"
                                                                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 53))))
#line 265 "x86_64_out.m"
                                                                                                                                                        {
#line 265 "x86_64_out.m"
                                                                                                                                                          MR_Integer ll_backend__x86_64_out__Size_710 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 265 "x86_64_out.m"
                                                                                                                                                          MR_Word ll_backend__x86_64_out__Val_711 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 266 "x86_64_out.m"
                                                                                                                                                          {
#line 266 "x86_64_out.m"
                                                                                                                                                            ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".skip", ll_backend__x86_64_out__Size_710, ll_backend__x86_64_out__Val_711, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 266 "x86_64_out.m"
                                                                                                                                                            return;
                                                                                                                                                          }
#line 265 "x86_64_out.m"
                                                                                                                                                        }
#line 64 "x86_64_out.m"
                                                                                                                                                      else
#line 64 "x86_64_out.m"
                                                                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 54))))
#line 267 "x86_64_out.m"
                                                                                                                                                          {
#line 267 "x86_64_out.m"
                                                                                                                                                            MR_Word ll_backend__x86_64_out__ExprList_719 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 268 "x86_64_out.m"
                                                                                                                                                            {
#line 268 "x86_64_out.m"
                                                                                                                                                              ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".sleb128\t", ll_backend__x86_64_out__ExprList_719);
#line 268 "x86_64_out.m"
                                                                                                                                                              return;
                                                                                                                                                            }
#line 267 "x86_64_out.m"
                                                                                                                                                          }
#line 64 "x86_64_out.m"
                                                                                                                                                        else
#line 64 "x86_64_out.m"
                                                                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 55))))
#line 269 "x86_64_out.m"
                                                                                                                                                            {
#line 269 "x86_64_out.m"
                                                                                                                                                              MR_Integer ll_backend__x86_64_out__Size_726 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 269 "x86_64_out.m"
                                                                                                                                                              MR_Word ll_backend__x86_64_out__Fill_727 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));

#line 270 "x86_64_out.m"
                                                                                                                                                              {
#line 270 "x86_64_out.m"
                                                                                                                                                                ll_backend__x86_64_out__output_pseudo_op_with_int_args_7_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".space", ll_backend__x86_64_out__Size_726, ll_backend__x86_64_out__Fill_727, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)));
#line 270 "x86_64_out.m"
                                                                                                                                                                return;
                                                                                                                                                              }
#line 269 "x86_64_out.m"
                                                                                                                                                            }
#line 64 "x86_64_out.m"
                                                                                                                                                          else
#line 64 "x86_64_out.m"
                                                                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 56))))
#line 271 "x86_64_out.m"
                                                                                                                                                              {
#line 271 "x86_64_out.m"
                                                                                                                                                                MR_Word ll_backend__x86_64_out__StrList_735 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 272 "x86_64_out.m"
                                                                                                                                                                {
#line 272 "x86_64_out.m"
                                                                                                                                                                  ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".string", ll_backend__x86_64_out__StrList_735);
#line 272 "x86_64_out.m"
                                                                                                                                                                  return;
                                                                                                                                                                }
#line 271 "x86_64_out.m"
                                                                                                                                                              }
#line 64 "x86_64_out.m"
                                                                                                                                                            else
#line 64 "x86_64_out.m"
                                                                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 57))))
#line 273 "x86_64_out.m"
                                                                                                                                                                {
#line 273 "x86_64_out.m"
                                                                                                                                                                  MR_String ll_backend__x86_64_out__Expr_742 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "x86_64_out.m"
                                                                                                                                                                  MR_String ll_backend__x86_64_out__V_746_746;
#line 273 "x86_64_out.m"
                                                                                                                                                                  MR_String ll_backend__x86_64_out__V_749_749;
#line 274 "x86_64_out.m"
                                                                                                                                                                  MR_Box ll_backend__x86_64_out__conv76_STATE_VARIABLE_IO_4;

#line 274 "x86_64_out.m"
                                                                                                                                                                  {
#line 274 "x86_64_out.m"
                                                                                                                                                                    ll_backend__x86_64_out__V_749_749 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_742, (MR_String) "\n");
                                                                                                                                                                  }
#line 274 "x86_64_out.m"
                                                                                                                                                                  {
#line 274 "x86_64_out.m"
                                                                                                                                                                    ll_backend__x86_64_out__V_746_746 = mercury__string__f_43_43_2_f_0((MR_String) "\t.struct\t", ll_backend__x86_64_out__V_749_749);
                                                                                                                                                                  }
#line 274 "x86_64_out.m"
                                                                                                                                                                  {
#line 274 "x86_64_out.m"
                                                                                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_746_746)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv76_STATE_VARIABLE_IO_4);
                                                                                                                                                                  }
#line 273 "x86_64_out.m"
                                                                                                                                                                }
#line 64 "x86_64_out.m"
                                                                                                                                                              else
#line 64 "x86_64_out.m"
                                                                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 58))))
#line 275 "x86_64_out.m"
                                                                                                                                                                  {
#line 275 "x86_64_out.m"
                                                                                                                                                                    MR_String ll_backend__x86_64_out__Name_752 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "x86_64_out.m"
                                                                                                                                                                    MR_String ll_backend__x86_64_out__V_756_756;
#line 275 "x86_64_out.m"
                                                                                                                                                                    MR_String ll_backend__x86_64_out__V_759_759;
#line 276 "x86_64_out.m"
                                                                                                                                                                    MR_Box ll_backend__x86_64_out__conv77_STATE_VARIABLE_IO_4;

#line 276 "x86_64_out.m"
                                                                                                                                                                    {
#line 276 "x86_64_out.m"
                                                                                                                                                                      ll_backend__x86_64_out__V_759_759 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_752, (MR_String) "\n");
                                                                                                                                                                    }
#line 276 "x86_64_out.m"
                                                                                                                                                                    {
#line 276 "x86_64_out.m"
                                                                                                                                                                      ll_backend__x86_64_out__V_756_756 = mercury__string__f_43_43_2_f_0((MR_String) "\t.subsection\t", ll_backend__x86_64_out__V_759_759);
                                                                                                                                                                    }
#line 276 "x86_64_out.m"
                                                                                                                                                                    {
#line 276 "x86_64_out.m"
                                                                                                                                                                      mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_756_756)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv77_STATE_VARIABLE_IO_4);
                                                                                                                                                                    }
#line 275 "x86_64_out.m"
                                                                                                                                                                  }
#line 64 "x86_64_out.m"
                                                                                                                                                                else
#line 64 "x86_64_out.m"
                                                                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 59))))
#line 277 "x86_64_out.m"
                                                                                                                                                                    {
#line 277 "x86_64_out.m"
                                                                                                                                                                      MR_String ll_backend__x86_64_out__Name_762 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 277 "x86_64_out.m"
                                                                                                                                                                      MR_String ll_backend__x86_64_out__Alias_763 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 277 "x86_64_out.m"
                                                                                                                                                                      MR_String ll_backend__x86_64_out__V_767_767;
#line 277 "x86_64_out.m"
                                                                                                                                                                      MR_String ll_backend__x86_64_out__V_770_770;
#line 277 "x86_64_out.m"
                                                                                                                                                                      MR_String ll_backend__x86_64_out__V_771_771;
#line 277 "x86_64_out.m"
                                                                                                                                                                      MR_String ll_backend__x86_64_out__V_773_773;
#line 278 "x86_64_out.m"
                                                                                                                                                                      MR_Box ll_backend__x86_64_out__conv78_STATE_VARIABLE_IO_4;

#line 278 "x86_64_out.m"
                                                                                                                                                                      {
#line 278 "x86_64_out.m"
                                                                                                                                                                        ll_backend__x86_64_out__V_773_773 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Alias_763, (MR_String) "\n");
                                                                                                                                                                      }
#line 278 "x86_64_out.m"
                                                                                                                                                                      {
#line 278 "x86_64_out.m"
                                                                                                                                                                        ll_backend__x86_64_out__V_771_771 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_773_773);
                                                                                                                                                                      }
#line 278 "x86_64_out.m"
                                                                                                                                                                      {
#line 278 "x86_64_out.m"
                                                                                                                                                                        ll_backend__x86_64_out__V_770_770 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_762, ll_backend__x86_64_out__V_771_771);
                                                                                                                                                                      }
#line 278 "x86_64_out.m"
                                                                                                                                                                      {
#line 278 "x86_64_out.m"
                                                                                                                                                                        ll_backend__x86_64_out__V_767_767 = mercury__string__f_43_43_2_f_0((MR_String) "\t.symver\t", ll_backend__x86_64_out__V_770_770);
                                                                                                                                                                      }
#line 278 "x86_64_out.m"
                                                                                                                                                                      {
#line 278 "x86_64_out.m"
                                                                                                                                                                        mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_767_767)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv78_STATE_VARIABLE_IO_4);
                                                                                                                                                                      }
#line 277 "x86_64_out.m"
                                                                                                                                                                    }
#line 64 "x86_64_out.m"
                                                                                                                                                                  else
#line 64 "x86_64_out.m"
                                                                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 60))))
#line 279 "x86_64_out.m"
                                                                                                                                                                      {
#line 279 "x86_64_out.m"
                                                                                                                                                                        MR_String ll_backend__x86_64_out__Name_776 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "x86_64_out.m"
                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_780_780;
#line 279 "x86_64_out.m"
                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_783_783;
#line 280 "x86_64_out.m"
                                                                                                                                                                        MR_Box ll_backend__x86_64_out__conv79_STATE_VARIABLE_IO_4;

#line 280 "x86_64_out.m"
                                                                                                                                                                        {
#line 280 "x86_64_out.m"
                                                                                                                                                                          ll_backend__x86_64_out__V_783_783 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_776, (MR_String) "\n");
                                                                                                                                                                        }
#line 280 "x86_64_out.m"
                                                                                                                                                                        {
#line 280 "x86_64_out.m"
                                                                                                                                                                          ll_backend__x86_64_out__V_780_780 = mercury__string__f_43_43_2_f_0((MR_String) "\t.tag\t", ll_backend__x86_64_out__V_783_783);
                                                                                                                                                                        }
#line 280 "x86_64_out.m"
                                                                                                                                                                        {
#line 280 "x86_64_out.m"
                                                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_780_780)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv79_STATE_VARIABLE_IO_4);
                                                                                                                                                                        }
#line 279 "x86_64_out.m"
                                                                                                                                                                      }
#line 64 "x86_64_out.m"
                                                                                                                                                                    else
#line 64 "x86_64_out.m"
                                                                                                                                                                      if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 61))))
#line 281 "x86_64_out.m"
                                                                                                                                                                        {
#line 281 "x86_64_out.m"
                                                                                                                                                                          MR_Word ll_backend__x86_64_out__Subsection0_786 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 282 "x86_64_out.m"
                                                                                                                                                                          MR_Box ll_backend__x86_64_out__conv80_STATE_VARIABLE_IO_792_792;
#line 289 "x86_64_out.m"
                                                                                                                                                                          MR_Box ll_backend__x86_64_out__conv82_STATE_VARIABLE_IO_4;

#line 282 "x86_64_out.m"
                                                                                                                                                                          {
#line 282 "x86_64_out.m"
                                                                                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\ttext\t")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv80_STATE_VARIABLE_IO_792_792);
                                                                                                                                                                          }
#line 286 "x86_64_out.m"
                                                                                                                                                                          if ((ll_backend__x86_64_out__Subsection0_786 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "x86_64_out.m"
                                                                                                                                                                            {
#line 287 "x86_64_out.m"
                                                                                                                                                                            }
#line 286 "x86_64_out.m"
                                                                                                                                                                          else
#line 284 "x86_64_out.m"
                                                                                                                                                                            {
#line 284 "x86_64_out.m"
                                                                                                                                                                              MR_Integer ll_backend__x86_64_out__Subsection1_788 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Subsection0_786, (MR_Integer) 0)));
#line 285 "x86_64_out.m"
                                                                                                                                                                              MR_Box ll_backend__x86_64_out__conv81_STATE_VARIABLE_IO_793_793;

#line 285 "x86_64_out.m"
                                                                                                                                                                              {
#line 285 "x86_64_out.m"
                                                                                                                                                                                mercury__stream__string_writer__put_int_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ll_backend__x86_64_out__Subsection1_788, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv81_STATE_VARIABLE_IO_793_793);
                                                                                                                                                                              }
#line 284 "x86_64_out.m"
                                                                                                                                                                            }
#line 289 "x86_64_out.m"
                                                                                                                                                                          {
#line 289 "x86_64_out.m"
                                                                                                                                                                            mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv82_STATE_VARIABLE_IO_4);
                                                                                                                                                                          }
#line 281 "x86_64_out.m"
                                                                                                                                                                        }
#line 64 "x86_64_out.m"
                                                                                                                                                                      else
#line 64 "x86_64_out.m"
                                                                                                                                                                        if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 62))))
#line 290 "x86_64_out.m"
                                                                                                                                                                          {
#line 290 "x86_64_out.m"
                                                                                                                                                                            MR_String ll_backend__x86_64_out__Heading_797 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "x86_64_out.m"
                                                                                                                                                                            MR_String ll_backend__x86_64_out__V_801_801;
#line 290 "x86_64_out.m"
                                                                                                                                                                            MR_String ll_backend__x86_64_out__V_804_804;
#line 291 "x86_64_out.m"
                                                                                                                                                                            MR_Box ll_backend__x86_64_out__conv83_STATE_VARIABLE_IO_4;

#line 291 "x86_64_out.m"
                                                                                                                                                                            {
#line 291 "x86_64_out.m"
                                                                                                                                                                              ll_backend__x86_64_out__V_804_804 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Heading_797, (MR_String) "\n");
                                                                                                                                                                            }
#line 291 "x86_64_out.m"
                                                                                                                                                                            {
#line 291 "x86_64_out.m"
                                                                                                                                                                              ll_backend__x86_64_out__V_801_801 = mercury__string__f_43_43_2_f_0((MR_String) "\t.title\t", ll_backend__x86_64_out__V_804_804);
                                                                                                                                                                            }
#line 291 "x86_64_out.m"
                                                                                                                                                                            {
#line 291 "x86_64_out.m"
                                                                                                                                                                              mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_801_801)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv83_STATE_VARIABLE_IO_4);
                                                                                                                                                                            }
#line 290 "x86_64_out.m"
                                                                                                                                                                          }
#line 64 "x86_64_out.m"
                                                                                                                                                                        else
#line 64 "x86_64_out.m"
                                                                                                                                                                          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 64))))
#line 295 "x86_64_out.m"
                                                                                                                                                                            {
#line 295 "x86_64_out.m"
                                                                                                                                                                              MR_Word ll_backend__x86_64_out__ExprList_822 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 296 "x86_64_out.m"
                                                                                                                                                                              {
#line 296 "x86_64_out.m"
                                                                                                                                                                                ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".uleb128", ll_backend__x86_64_out__ExprList_822);
#line 296 "x86_64_out.m"
                                                                                                                                                                                return;
                                                                                                                                                                              }
#line 295 "x86_64_out.m"
                                                                                                                                                                            }
#line 64 "x86_64_out.m"
                                                                                                                                                                          else
#line 64 "x86_64_out.m"
                                                                                                                                                                            if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 65))))
#line 297 "x86_64_out.m"
                                                                                                                                                                              {
#line 297 "x86_64_out.m"
                                                                                                                                                                                MR_String ll_backend__x86_64_out__Addr_829 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "x86_64_out.m"
                                                                                                                                                                                MR_String ll_backend__x86_64_out__V_833_833;
#line 297 "x86_64_out.m"
                                                                                                                                                                                MR_String ll_backend__x86_64_out__V_836_836;
#line 298 "x86_64_out.m"
                                                                                                                                                                                MR_Box ll_backend__x86_64_out__conv84_STATE_VARIABLE_IO_4;

#line 298 "x86_64_out.m"
                                                                                                                                                                                {
#line 298 "x86_64_out.m"
                                                                                                                                                                                  ll_backend__x86_64_out__V_836_836 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Addr_829, (MR_String) "\n");
                                                                                                                                                                                }
#line 298 "x86_64_out.m"
                                                                                                                                                                                {
#line 298 "x86_64_out.m"
                                                                                                                                                                                  ll_backend__x86_64_out__V_833_833 = mercury__string__f_43_43_2_f_0((MR_String) "\t.val\t", ll_backend__x86_64_out__V_836_836);
                                                                                                                                                                                }
#line 298 "x86_64_out.m"
                                                                                                                                                                                {
#line 298 "x86_64_out.m"
                                                                                                                                                                                  mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_833_833)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv84_STATE_VARIABLE_IO_4);
                                                                                                                                                                                }
#line 297 "x86_64_out.m"
                                                                                                                                                                              }
#line 64 "x86_64_out.m"
                                                                                                                                                                            else
#line 64 "x86_64_out.m"
                                                                                                                                                                              if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 66))))
#line 299 "x86_64_out.m"
                                                                                                                                                                                {
#line 299 "x86_64_out.m"
                                                                                                                                                                                  MR_String ll_backend__x86_64_out__Note_839 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "x86_64_out.m"
                                                                                                                                                                                  MR_String ll_backend__x86_64_out__V_843_843;
#line 299 "x86_64_out.m"
                                                                                                                                                                                  MR_String ll_backend__x86_64_out__V_846_846;
#line 300 "x86_64_out.m"
                                                                                                                                                                                  MR_Box ll_backend__x86_64_out__conv85_STATE_VARIABLE_IO_4;

#line 300 "x86_64_out.m"
                                                                                                                                                                                  {
#line 300 "x86_64_out.m"
                                                                                                                                                                                    ll_backend__x86_64_out__V_846_846 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Note_839, (MR_String) "\n");
                                                                                                                                                                                  }
#line 300 "x86_64_out.m"
                                                                                                                                                                                  {
#line 300 "x86_64_out.m"
                                                                                                                                                                                    ll_backend__x86_64_out__V_843_843 = mercury__string__f_43_43_2_f_0((MR_String) "\t.version\t", ll_backend__x86_64_out__V_846_846);
                                                                                                                                                                                  }
#line 300 "x86_64_out.m"
                                                                                                                                                                                  {
#line 300 "x86_64_out.m"
                                                                                                                                                                                    mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_843_843)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv85_STATE_VARIABLE_IO_4);
                                                                                                                                                                                  }
#line 299 "x86_64_out.m"
                                                                                                                                                                                }
#line 64 "x86_64_out.m"
                                                                                                                                                                              else
#line 64 "x86_64_out.m"
                                                                                                                                                                                if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 67))))
#line 301 "x86_64_out.m"
                                                                                                                                                                                  {
#line 301 "x86_64_out.m"
                                                                                                                                                                                    MR_Word ll_backend__x86_64_out__NameList_849 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 302 "x86_64_out.m"
                                                                                                                                                                                    {
#line 302 "x86_64_out.m"
                                                                                                                                                                                      ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".weak", ll_backend__x86_64_out__NameList_849);
#line 302 "x86_64_out.m"
                                                                                                                                                                                      return;
                                                                                                                                                                                    }
#line 301 "x86_64_out.m"
                                                                                                                                                                                  }
#line 64 "x86_64_out.m"
                                                                                                                                                                                else
#line 64 "x86_64_out.m"
                                                                                                                                                                                  if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 68))))
#line 303 "x86_64_out.m"
                                                                                                                                                                                    {
#line 303 "x86_64_out.m"
                                                                                                                                                                                      MR_Word ll_backend__x86_64_out__ExprList_856 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));

#line 304 "x86_64_out.m"
                                                                                                                                                                                      {
#line 304 "x86_64_out.m"
                                                                                                                                                                                        ll_backend__x86_64_out__output_pseudo_op_str_args_5_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, (MR_String) ".word", ll_backend__x86_64_out__ExprList_856);
#line 304 "x86_64_out.m"
                                                                                                                                                                                        return;
                                                                                                                                                                                      }
#line 303 "x86_64_out.m"
                                                                                                                                                                                    }
#line 64 "x86_64_out.m"
                                                                                                                                                                                  else
#line 64 "x86_64_out.m"
                                                                                                                                                                                    if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 152 "x86_64_out.m"
                                                                                                                                                                                      {
#line 152 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__Expr_305 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 152 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_309_309;
#line 152 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_312_312;
#line 153 "x86_64_out.m"
                                                                                                                                                                                        MR_Box ll_backend__x86_64_out__conv86_STATE_VARIABLE_IO_4;

#line 153 "x86_64_out.m"
                                                                                                                                                                                        {
#line 153 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__V_312_312 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Expr_305, (MR_String) "\n");
                                                                                                                                                                                        }
#line 153 "x86_64_out.m"
                                                                                                                                                                                        {
#line 153 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__V_309_309 = mercury__string__f_43_43_2_f_0((MR_String) "\t.if\t", ll_backend__x86_64_out__V_312_312);
                                                                                                                                                                                        }
#line 153 "x86_64_out.m"
                                                                                                                                                                                        {
#line 153 "x86_64_out.m"
                                                                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_309_309)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv86_STATE_VARIABLE_IO_4);
                                                                                                                                                                                        }
#line 152 "x86_64_out.m"
                                                                                                                                                                                      }
#line 64 "x86_64_out.m"
                                                                                                                                                                                    else
#line 292 "x86_64_out.m"
                                                                                                                                                                                      {
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__Name_807 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_Word ll_backend__x86_64_out__Desc_808 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 2)));
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__DescType_810;
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_813_813;
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_816_816;
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_817_817;
#line 292 "x86_64_out.m"
                                                                                                                                                                                        MR_String ll_backend__x86_64_out__V_819_819;
#line 294 "x86_64_out.m"
                                                                                                                                                                                        MR_Box ll_backend__x86_64_out__conv87_STATE_VARIABLE_IO_4;

#line 293 "x86_64_out.m"
                                                                                                                                                                                        {
#line 293 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__check_pseudo_type_desc_2_p_0(ll_backend__x86_64_out__Desc_808, &ll_backend__x86_64_out__DescType_810);
                                                                                                                                                                                        }
#line 294 "x86_64_out.m"
                                                                                                                                                                                        {
#line 294 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__V_819_819 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__DescType_810, (MR_String) "\n");
                                                                                                                                                                                        }
#line 294 "x86_64_out.m"
                                                                                                                                                                                        {
#line 294 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__V_817_817 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__x86_64_out__V_819_819);
                                                                                                                                                                                        }
#line 294 "x86_64_out.m"
                                                                                                                                                                                        {
#line 294 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__V_816_816 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Name_807, ll_backend__x86_64_out__V_817_817);
                                                                                                                                                                                        }
#line 294 "x86_64_out.m"
                                                                                                                                                                                        {
#line 294 "x86_64_out.m"
                                                                                                                                                                                          ll_backend__x86_64_out__V_813_813 = mercury__string__f_43_43_2_f_0((MR_String) "\t.type\t", ll_backend__x86_64_out__V_816_816);
                                                                                                                                                                                        }
#line 294 "x86_64_out.m"
                                                                                                                                                                                        {
#line 294 "x86_64_out.m"
                                                                                                                                                                                          mercury__stream__put_4_p_0(ll_backend__x86_64_out__TypeClassInfo_for_writer_862, ll_backend__x86_64_out__Stream_1, ((MR_Box) (ll_backend__x86_64_out__V_813_813)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv87_STATE_VARIABLE_IO_4);
                                                                                                                                                                                        }
#line 292 "x86_64_out.m"
                                                                                                                                                                                      }
#line 64 "x86_64_out.m"
  }
#line 61 "x86_64_out.m"
}

#line 39 "x86_64_out.m"
void MR_CALL 
ll_backend__x86_64_out__operand_to_string_2_p_0(
#line 39 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__1_1,
#line 39 "x86_64_out.m"
  MR_String * ll_backend__x86_64_out__HeadVar__2_2)
#line 39 "x86_64_out.m"
{
#line 1155 "x86_64_out.m"
  {
#line 1155 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;

#line 1155 "x86_64_out.m"
    if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1157 "x86_64_out.m"
      {
#line 1157 "x86_64_out.m"
        MR_Word ll_backend__x86_64_out__Imm_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 1043 "x86_64_out.m"
        if (((MR_tag((MR_Word) ll_backend__x86_64_out__Imm_5)) == (MR_mktag((MR_Integer) 1))))
#line 1045 "x86_64_out.m"
          {
#line 1045 "x86_64_out.m"
            MR_Integer ll_backend__x86_64_out__Val_17;
#line 1045 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__Imm_5, (MR_Integer) 0)));
#line 1045 "x86_64_out.m"
            MR_String ll_backend__x86_64_out__V_21_21;

#line 1045 "x86_64_out.m"
            ll_backend__x86_64_out__Val_17 = (MR_Integer) ll_backend__x86_64_out__V_19_19;
#line 1046 "x86_64_out.m"
            {
#line 1046 "x86_64_out.m"
              ll_backend__x86_64_out__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_17);
            }
#line 1046 "x86_64_out.m"
            {
#line 1046 "x86_64_out.m"
              *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__V_21_21);
            }
#line 1045 "x86_64_out.m"
          }
#line 1043 "x86_64_out.m"
        else
#line 1043 "x86_64_out.m"
          if (((MR_tag((MR_Word) ll_backend__x86_64_out__Imm_5)) == (MR_mktag((MR_Integer) 2))))
#line 1047 "x86_64_out.m"
            {
#line 1047 "x86_64_out.m"
              MR_Integer ll_backend__x86_64_out__Val_22;
#line 1047 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__Imm_5, (MR_Integer) 0)));
#line 1047 "x86_64_out.m"
              MR_String ll_backend__x86_64_out__V_26_26;

#line 1047 "x86_64_out.m"
              ll_backend__x86_64_out__Val_22 = (MR_Integer) ll_backend__x86_64_out__V_24_24;
#line 1048 "x86_64_out.m"
              {
#line 1048 "x86_64_out.m"
                ll_backend__x86_64_out__V_26_26 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_22);
              }
#line 1048 "x86_64_out.m"
              {
#line 1048 "x86_64_out.m"
                *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__V_26_26);
              }
#line 1047 "x86_64_out.m"
            }
#line 1043 "x86_64_out.m"
          else
#line 1043 "x86_64_out.m"
            {
#line 1043 "x86_64_out.m"
              MR_Integer ll_backend__x86_64_out__Val_12;
#line 1043 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__Imm_5, (MR_Integer) 0)));
#line 1043 "x86_64_out.m"
              MR_String ll_backend__x86_64_out__V_16_16;

#line 1043 "x86_64_out.m"
              ll_backend__x86_64_out__Val_12 = (MR_Integer) ll_backend__x86_64_out__V_14_14;
#line 1044 "x86_64_out.m"
              {
#line 1044 "x86_64_out.m"
                ll_backend__x86_64_out__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Val_12);
              }
#line 1044 "x86_64_out.m"
              {
#line 1044 "x86_64_out.m"
                *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__V_16_16);
              }
#line 1043 "x86_64_out.m"
            }
#line 1157 "x86_64_out.m"
      }
#line 1155 "x86_64_out.m"
    else
#line 1155 "x86_64_out.m"
      if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1159 "x86_64_out.m"
        {
#line 1159 "x86_64_out.m"
          MR_Word ll_backend__x86_64_out__MemRef_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 1073 "x86_64_out.m"
          if (((MR_tag((MR_Word) ll_backend__x86_64_out__MemRef_7)) == (MR_mktag((MR_Integer) 0))))
#line 1073 "x86_64_out.m"
            {
#line 1073 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__DirectMemRef_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__MemRef_7, (MR_Integer) 0)));

#line 1082 "x86_64_out.m"
              if (((MR_tag((MR_Word) ll_backend__x86_64_out__DirectMemRef_27)) == (MR_mktag((MR_Integer) 1))))
#line 1090 "x86_64_out.m"
                {
#line 1090 "x86_64_out.m"
                  MR_String ll_backend__x86_64_out__Expr_43 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__DirectMemRef_27, (MR_Integer) 0)));

#line 1091 "x86_64_out.m"
                  {
#line 1091 "x86_64_out.m"
                    *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__x86_64_out__Expr_43);
                  }
#line 1090 "x86_64_out.m"
                }
#line 1082 "x86_64_out.m"
              else
#line 1082 "x86_64_out.m"
                {
#line 1082 "x86_64_out.m"
                  MR_Integer ll_backend__x86_64_out__Offset_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__DirectMemRef_27, (MR_Integer) 0)));
#line 1082 "x86_64_out.m"
                  MR_Word ll_backend__x86_64_out__Reg_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__DirectMemRef_27, (MR_Integer) 1)));
#line 1082 "x86_64_out.m"
                  MR_String ll_backend__x86_64_out__RegStr_34;

#line 1052 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 10))
#line 1062 "x86_64_out.m"
                    ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r10";
#line 1052 "x86_64_out.m"
                  else
#line 1052 "x86_64_out.m"
                    if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 11))
#line 1063 "x86_64_out.m"
                      ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r11";
#line 1052 "x86_64_out.m"
                    else
#line 1052 "x86_64_out.m"
                      if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 12))
#line 1064 "x86_64_out.m"
                        ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r12";
#line 1052 "x86_64_out.m"
                      else
#line 1052 "x86_64_out.m"
                        if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 13))
#line 1065 "x86_64_out.m"
                          ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r13";
#line 1052 "x86_64_out.m"
                        else
#line 1052 "x86_64_out.m"
                          if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 14))
#line 1066 "x86_64_out.m"
                            ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r14";
#line 1052 "x86_64_out.m"
                          else
#line 1052 "x86_64_out.m"
                            if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 15))
#line 1067 "x86_64_out.m"
                              ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r15";
#line 1052 "x86_64_out.m"
                            else
#line 1052 "x86_64_out.m"
                              if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 8))
#line 1060 "x86_64_out.m"
                                ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r8";
#line 1052 "x86_64_out.m"
                              else
#line 1052 "x86_64_out.m"
                                if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 9))
#line 1061 "x86_64_out.m"
                                  ll_backend__x86_64_out__RegStr_34 = (MR_String) "%r9";
#line 1052 "x86_64_out.m"
                                else
#line 1052 "x86_64_out.m"
                                  if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 0))
#line 1052 "x86_64_out.m"
                                    ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rax";
#line 1052 "x86_64_out.m"
                                  else
#line 1052 "x86_64_out.m"
                                    if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 4))
#line 1056 "x86_64_out.m"
                                      ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rbp";
#line 1052 "x86_64_out.m"
                                    else
#line 1052 "x86_64_out.m"
                                      if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 1))
#line 1053 "x86_64_out.m"
                                        ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rbx";
#line 1052 "x86_64_out.m"
                                      else
#line 1052 "x86_64_out.m"
                                        if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 2))
#line 1054 "x86_64_out.m"
                                          ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rcx";
#line 1052 "x86_64_out.m"
                                        else
#line 1052 "x86_64_out.m"
                                          if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 6))
#line 1058 "x86_64_out.m"
                                            ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rdi";
#line 1052 "x86_64_out.m"
                                          else
#line 1052 "x86_64_out.m"
                                            if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 3))
#line 1055 "x86_64_out.m"
                                              ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rdx";
#line 1052 "x86_64_out.m"
                                            else
#line 1052 "x86_64_out.m"
                                              if ((ll_backend__x86_64_out__Reg_32 == (MR_Integer) 5))
#line 1057 "x86_64_out.m"
                                                ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rsi";
#line 1052 "x86_64_out.m"
                                              else
#line 1059 "x86_64_out.m"
                                                ll_backend__x86_64_out__RegStr_34 = (MR_String) "%rsp";
#line 1084 "x86_64_out.m"
                  ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Offset_31 == (MR_Integer) 0);
#line 1086 "x86_64_out.m"
                  if (ll_backend__x86_64_out__succeeded)
#line 1085 "x86_64_out.m"
                    {
#line 1085 "x86_64_out.m"
                      MR_String ll_backend__x86_64_out__V_36_36;

#line 1085 "x86_64_out.m"
                      {
#line 1085 "x86_64_out.m"
                        ll_backend__x86_64_out__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__RegStr_34, (MR_String) ")");
                      }
#line 1085 "x86_64_out.m"
                      {
#line 1085 "x86_64_out.m"
                        *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__x86_64_out__V_36_36);
                      }
#line 1085 "x86_64_out.m"
                    }
#line 1086 "x86_64_out.m"
                  else
#line 1087 "x86_64_out.m"
                    {
#line 1087 "x86_64_out.m"
                      MR_String ll_backend__x86_64_out__V_38_38;
#line 1087 "x86_64_out.m"
                      MR_String ll_backend__x86_64_out__V_39_39;
#line 1087 "x86_64_out.m"
                      MR_String ll_backend__x86_64_out__V_41_41;

#line 1087 "x86_64_out.m"
                      {
#line 1087 "x86_64_out.m"
                        ll_backend__x86_64_out__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Offset_31);
                      }
#line 1088 "x86_64_out.m"
                      {
#line 1088 "x86_64_out.m"
                        ll_backend__x86_64_out__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__RegStr_34, (MR_String) ")");
                      }
#line 1087 "x86_64_out.m"
                      {
#line 1087 "x86_64_out.m"
                        ll_backend__x86_64_out__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__x86_64_out__V_41_41);
                      }
#line 1087 "x86_64_out.m"
                      {
#line 1087 "x86_64_out.m"
                        *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__V_38_38, ll_backend__x86_64_out__V_39_39);
                      }
#line 1087 "x86_64_out.m"
                    }
#line 1082 "x86_64_out.m"
                }
#line 1073 "x86_64_out.m"
            }
#line 1073 "x86_64_out.m"
          else
#line 1075 "x86_64_out.m"
            {
#line 1075 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__InstrPtr_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__MemRef_7, (MR_Integer) 0)));

#line 1097 "x86_64_out.m"
              if (((MR_tag((MR_Word) ll_backend__x86_64_out__InstrPtr_29)) == (MR_mktag((MR_Integer) 0))))
#line 1097 "x86_64_out.m"
                {
#line 1097 "x86_64_out.m"
                  MR_Integer ll_backend__x86_64_out__Constant_46;
#line 1097 "x86_64_out.m"
                  MR_Word ll_backend__x86_64_out__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__InstrPtr_29, (MR_Integer) 0)));

#line 1097 "x86_64_out.m"
                  ll_backend__x86_64_out__Constant_46 = (MR_Integer) ll_backend__x86_64_out__V_49_49;
#line 1489 "x86_64_out.m"
                  ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Constant_46 >= (MR_Integer) -2147483648);
#line 1489 "x86_64_out.m"
                  if (ll_backend__x86_64_out__succeeded)
#line 1490 "x86_64_out.m"
                    ll_backend__x86_64_out__succeeded = (ll_backend__x86_64_out__Constant_46 <= (MR_Integer) 2147483647);
#line 9702 "ll_backend.x86_64_out.c"
                  if (ll_backend__x86_64_out__succeeded)
#line 9704 "ll_backend.x86_64_out.c"
                    {
#line 9706 "ll_backend.x86_64_out.c"
                      MR_String ll_backend__x86_64_out__V_54_54;

#line 1101 "x86_64_out.m"
                      {
#line 1101 "x86_64_out.m"
                        ll_backend__x86_64_out__V_54_54 = mercury__string__int_to_string_1_f_0(ll_backend__x86_64_out__Constant_46);
                      }
#line 1101 "x86_64_out.m"
                      {
#line 1101 "x86_64_out.m"
                        *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__V_54_54, (MR_String) "(%rip)");
                      }
#line 9719 "ll_backend.x86_64_out.c"
                    }
#line 9721 "ll_backend.x86_64_out.c"
                  else
#line 9723 "ll_backend.x86_64_out.c"
                    {
#line 1104 "x86_64_out.m"
                      {
#line 1104 "x86_64_out.m"
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.x86_64_out", (MR_String) "predicate \140ll_backend.x86_64_out.instr_ptr_type\'/2", (MR_String) "rip_constant: check_signed_int_size failed");
#line 1104 "x86_64_out.m"
                        return;
                      }
#line 9732 "ll_backend.x86_64_out.c"
                    }
#line 1097 "x86_64_out.m"
                }
#line 1097 "x86_64_out.m"
              else
#line 1107 "x86_64_out.m"
                {
#line 1107 "x86_64_out.m"
                  MR_String ll_backend__x86_64_out__Symbol_56 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__x86_64_out__InstrPtr_29, (MR_Integer) 0)));

#line 1108 "x86_64_out.m"
                  {
#line 1108 "x86_64_out.m"
                    *ll_backend__x86_64_out__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__x86_64_out__Symbol_56, (MR_String) "(%rip)");
                  }
#line 1107 "x86_64_out.m"
                }
#line 1075 "x86_64_out.m"
            }
#line 1159 "x86_64_out.m"
        }
#line 1155 "x86_64_out.m"
      else
#line 1155 "x86_64_out.m"
        if (((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1155 "x86_64_out.m"
          {
#line 1155 "x86_64_out.m"
            MR_Word ll_backend__x86_64_out__Reg_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)));

#line 1052 "x86_64_out.m"
            if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 10))
#line 1062 "x86_64_out.m"
              *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r10";
#line 1052 "x86_64_out.m"
            else
#line 1052 "x86_64_out.m"
              if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 11))
#line 1063 "x86_64_out.m"
                *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r11";
#line 1052 "x86_64_out.m"
              else
#line 1052 "x86_64_out.m"
                if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 12))
#line 1064 "x86_64_out.m"
                  *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r12";
#line 1052 "x86_64_out.m"
                else
#line 1052 "x86_64_out.m"
                  if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 13))
#line 1065 "x86_64_out.m"
                    *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r13";
#line 1052 "x86_64_out.m"
                  else
#line 1052 "x86_64_out.m"
                    if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 14))
#line 1066 "x86_64_out.m"
                      *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r14";
#line 1052 "x86_64_out.m"
                    else
#line 1052 "x86_64_out.m"
                      if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 15))
#line 1067 "x86_64_out.m"
                        *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r15";
#line 1052 "x86_64_out.m"
                      else
#line 1052 "x86_64_out.m"
                        if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 8))
#line 1060 "x86_64_out.m"
                          *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r8";
#line 1052 "x86_64_out.m"
                        else
#line 1052 "x86_64_out.m"
                          if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 9))
#line 1061 "x86_64_out.m"
                            *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%r9";
#line 1052 "x86_64_out.m"
                          else
#line 1052 "x86_64_out.m"
                            if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 0))
#line 1052 "x86_64_out.m"
                              *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rax";
#line 1052 "x86_64_out.m"
                            else
#line 1052 "x86_64_out.m"
                              if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 4))
#line 1056 "x86_64_out.m"
                                *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rbp";
#line 1052 "x86_64_out.m"
                              else
#line 1052 "x86_64_out.m"
                                if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 1))
#line 1053 "x86_64_out.m"
                                  *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rbx";
#line 1052 "x86_64_out.m"
                                else
#line 1052 "x86_64_out.m"
                                  if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 2))
#line 1054 "x86_64_out.m"
                                    *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rcx";
#line 1052 "x86_64_out.m"
                                  else
#line 1052 "x86_64_out.m"
                                    if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 6))
#line 1058 "x86_64_out.m"
                                      *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rdi";
#line 1052 "x86_64_out.m"
                                    else
#line 1052 "x86_64_out.m"
                                      if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 3))
#line 1055 "x86_64_out.m"
                                        *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rdx";
#line 1052 "x86_64_out.m"
                                      else
#line 1052 "x86_64_out.m"
                                        if ((ll_backend__x86_64_out__Reg_3 == (MR_Integer) 5))
#line 1057 "x86_64_out.m"
                                          *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rsi";
#line 1052 "x86_64_out.m"
                                        else
#line 1059 "x86_64_out.m"
                                          *ll_backend__x86_64_out__HeadVar__2_2 = (MR_String) "%rsp";
#line 1155 "x86_64_out.m"
          }
#line 1155 "x86_64_out.m"
        else
#line 1155 "x86_64_out.m"
          if (((((MR_tag((MR_Word) ll_backend__x86_64_out__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1163 "x86_64_out.m"
            *ll_backend__x86_64_out__HeadVar__2_2 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 1)));
#line 1155 "x86_64_out.m"
          else
#line 1161 "x86_64_out.m"
            {
#line 1161 "x86_64_out.m"
              MR_Word ll_backend__x86_64_out__RelOffset_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__x86_64_out__HeadVar__1_1, (MR_Integer) 1)));

#line 1162 "x86_64_out.m"
              {
#line 1162 "x86_64_out.m"
                ll_backend__x86_64_out__rel_offset_to_string_2_p_0(ll_backend__x86_64_out__RelOffset_9, ll_backend__x86_64_out__HeadVar__2_2);
#line 1162 "x86_64_out.m"
                return;
              }
#line 1161 "x86_64_out.m"
            }
#line 1155 "x86_64_out.m"
  }
#line 39 "x86_64_out.m"
}

#line 505 "x86_64_out.m"
static void MR_CALL 
ll_backend__x86_64_out__output_x86_64_instruction_4_p_0_1(
#line 505 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__closure_arg,
#line 505 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__wrapper_arg_1,
#line 505 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__wrapper_arg_2,
#line 505 "x86_64_out.m"
  MR_Box * ll_backend__x86_64_out__wrapper_arg_3)
#line 505 "x86_64_out.m"
{
#line 505 "x86_64_out.m"
  {
#line 505 "x86_64_out.m"
    MR_Box ll_backend__x86_64_out__closure = ll_backend__x86_64_out__closure_arg;

#line 505 "x86_64_out.m"
    {
#line 505 "x86_64_out.m"
      ll_backend__x86_64_out__output_x86_64_instr_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__closure, (MR_Integer) 4)), ((MR_Word) ll_backend__x86_64_out__wrapper_arg_1));
#line 505 "x86_64_out.m"
      return;
    }
#line 505 "x86_64_out.m"
  }
#line 505 "x86_64_out.m"
}

#line 36 "x86_64_out.m"
void MR_CALL 
ll_backend__x86_64_out__output_x86_64_instruction_4_p_0(
#line 36 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__TypeClassInfo_for_writer_15,
#line 36 "x86_64_out.m"
  MR_Box ll_backend__x86_64_out__Stream_5,
#line 36 "x86_64_out.m"
  MR_Word ll_backend__x86_64_out__HeadVar__2_2)
#line 36 "x86_64_out.m"
{
#line 496 "x86_64_out.m"
  {
#line 496 "x86_64_out.m"
    MR_bool ll_backend__x86_64_out__succeeded;
#line 496 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__Instr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 0)));
#line 496 "x86_64_out.m"
    MR_String ll_backend__x86_64_out__Comment_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__HeadVar__2_2, (MR_Integer) 1)));
#line 496 "x86_64_out.m"
    MR_Word ll_backend__x86_64_out__V_31_31;
#line 9935 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_4)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9937 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_11_11;
#line 505 "x86_64_out.m"
    MR_Box ll_backend__x86_64_out__conv6_STATE_VARIABLE_IO_12_12;
#line 9941 "ll_backend.x86_64_out.c"
    void MR_CALL (* ll_backend__x86_64_out__func_7)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9943 "ll_backend.x86_64_out.c"
    MR_Box ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_10;

#line 1026 "x86_64_out.m"
    ll_backend__x86_64_out__succeeded = (strcmp(ll_backend__x86_64_out__Comment_7, (MR_String) "") == 0);
#line 1026 "x86_64_out.m"
    ll_backend__x86_64_out__succeeded = !(ll_backend__x86_64_out__succeeded);
#line 1029 "x86_64_out.m"
    if (ll_backend__x86_64_out__succeeded)
#line 1027 "x86_64_out.m"
      {
#line 9954 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9956 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_11_22;
#line 9958 "ll_backend.x86_64_out.c"
        void MR_CALL (* ll_backend__x86_64_out__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9960 "ll_backend.x86_64_out.c"
        MR_Box ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_12_23;

#line 9963 "ll_backend.x86_64_out.c"
        {
#line 9965 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_0(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_15), ll_backend__x86_64_out__Stream_5, ((MR_Box) ((MR_String) "\t# ")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv1_STATE_VARIABLE_IO_11_22);
        }
#line 9968 "ll_backend.x86_64_out.c"
        ll_backend__x86_64_out__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9970 "ll_backend.x86_64_out.c"
        {
#line 9972 "ll_backend.x86_64_out.c"
          ll_backend__x86_64_out__func_2(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_15), ll_backend__x86_64_out__Stream_5, ((MR_Box) (ll_backend__x86_64_out__Comment_7)), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv3_STATE_VARIABLE_IO_12_23);
        }
#line 1027 "x86_64_out.m"
      }
#line 1029 "x86_64_out.m"
    else
#line 1028 "x86_64_out.m"
      {
#line 1028 "x86_64_out.m"
      }
#line 9983 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_4 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9985 "ll_backend.x86_64_out.c"
    {
#line 9987 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_4(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_15), ll_backend__x86_64_out__Stream_5, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv5_STATE_VARIABLE_IO_11_11);
    }
#line 505 "x86_64_out.m"
    {
#line 505 "x86_64_out.m"
      ll_backend__x86_64_out__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 505 "x86_64_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__V_31_31, 0) = ((MR_Box) (&ll_backend__x86_64_out_scalar_common_2[0]));
#line 505 "x86_64_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__V_31_31, 1) = ((MR_Box) (ll_backend__x86_64_out__output_x86_64_instruction_4_p_0_1));
#line 505 "x86_64_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 505 "x86_64_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__V_31_31, 3) = ((MR_Box) (ll_backend__x86_64_out__TypeClassInfo_for_writer_15));
#line 505 "x86_64_out.m"
      MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__V_31_31, 4) = ll_backend__x86_64_out__Stream_5;
#line 505 "x86_64_out.m"
    }
#line 505 "x86_64_out.m"
    {
#line 505 "x86_64_out.m"
      mercury__list__foldl_4_p_2((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, (MR_Word) &mercury__io__io__type_ctor_info_state_0, ll_backend__x86_64_out__V_31_31, ll_backend__x86_64_out__Instr_6, ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv6_STATE_VARIABLE_IO_12_12);
    }
#line 10011 "ll_backend.x86_64_out.c"
    ll_backend__x86_64_out__func_7 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), ll_backend__x86_64_out__TypeClassInfo_for_writer_15, (MR_Integer) 0)), (MR_Integer) 5)));
#line 10013 "ll_backend.x86_64_out.c"
    {
#line 10015 "ll_backend.x86_64_out.c"
      ll_backend__x86_64_out__func_7(((MR_Box) ll_backend__x86_64_out__TypeClassInfo_for_writer_15), ll_backend__x86_64_out__Stream_5, ((MR_Box) ((MR_String) "\n")), ((MR_Box) ((MR_Integer) 0)), &ll_backend__x86_64_out__conv8_STATE_VARIABLE_IO_10);
    }
#line 496 "x86_64_out.m"
  }
#line 36 "x86_64_out.m"
}

void mercury__ll_backend__x86_64_out__init(void)
{
}

void mercury__ll_backend__x86_64_out__init_type_tables(void)
{
}

void mercury__ll_backend__x86_64_out__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.x86_64_out. */
