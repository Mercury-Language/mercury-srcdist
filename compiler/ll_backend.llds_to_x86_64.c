/*
** Automatically generated from `llds_to_x86_64.m'
** by the Mercury compiler,
** version rotd-14.01.1-2014-05-28, configured for x86_64-apple-darwin13.1.0.
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


/* :- module ll_backend.llds_to_x86_64. */
/* :- implementation. */

/*
INIT mercury__ll_backend__llds_to_x86_64__init
ENDINIT
*/

#include "ll_backend.llds_to_x86_64.mih"


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
#include "set_tree234.mih"
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "ll_backend.x86_64_instrs.mih"
#include "ll_backend.x86_64_out.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 148 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_0[2];

#line 151 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0;

#line 154 "ll_backend.llds_to_x86_64.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_to_x86_64__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;

#line 157 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_1[2];

#line 160 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1;

#line 163 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_2[2];

#line 166 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2;

#line 169 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_3[2];

#line 172 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3;

#line 175 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_0[1];

#line 178 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_1[1];

#line 181 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_2[1];

#line 184 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_3[1];

#line 187 "ll_backend.llds_to_x86_64.c"
static const MR_DuPtagLayout ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_ptag_ordered_binop_0[4];

#line 190 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_name_ordered_binop_0[4];

#line 193 "ll_backend.llds_to_x86_64.c"
static const MR_Integer ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__functor_number_map_binop_0[4];

#line 196 "ll_backend.llds_to_x86_64.c"
static MR_bool MR_CALL 
ll_backend__llds_to_x86_64____Unify____binop_0_0_10001(
#line 199 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_1,
#line 201 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_2);

#line 204 "ll_backend.llds_to_x86_64.c"
static void MR_CALL 
ll_backend__llds_to_x86_64____Compare____binop_0_0_10001(
#line 207 "ll_backend.llds_to_x86_64.c"
  MR_Box * ll_backend__llds_to_x86_64__wrapper_arg_1,
#line 209 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_2,
#line 211 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_3);

#line 69 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64____Compare____binop_0_0(
#line 69 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__3_3);

#line 69 "llds_to_x86_64.m"
static MR_bool MR_CALL 
ll_backend__llds_to_x86_64____Unify____binop_0_0(
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2);

#line 1039 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__maybe_labels_to_string_3_p_0(
#line 1039 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 1039 "llds_to_x86_64.m"
  MR_String ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 1039 "llds_to_x86_64.m"
  MR_String * ll_backend__llds_to_x86_64__Str_3);

#line 971 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(
#line 971 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Instrs_3,
#line 971 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Op_4);

#line 942 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__code_addr_type_2_p_0(
#line 942 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 942 "llds_to_x86_64.m"
  MR_String * ll_backend__llds_to_x86_64__CodeAddr_2);

#line 892 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__binop_instr_4_p_0(
#line 892 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 892 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op1_2,
#line 892 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op2_3,
#line 892 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4);

#line 860 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__unop_instrs_4_p_0(
#line 860 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 860 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op_2,
#line 860 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Instrs0_3,
#line 860 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4);

#line 838 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__binop_instrs_3_p_0(
#line 838 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 838 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op_2,
#line 838 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instrs_3);

#line 816 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(
#line 816 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__RegMap_5,
#line 816 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Lval_6,
#line 816 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Op_7,
#line 816 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instr_8);

#line 627 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_rval_5_p_0(
#line 627 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 627 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2,
#line 627 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__3_3,
#line 627 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4,
#line 627 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__5_5);

#line 486 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_lval_5_p_0(
#line 486 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 486 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2,
#line 486 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__3_3,
#line 486 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4,
#line 486 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__5_5);

#line 184 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__instr_to_x86_64_4_p_0(
#line 184 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131,
#line 184 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132,
#line 184 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Uinstr_6,
#line 184 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instrs_7);

#line 160 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_livevals_3_p_0(
#line 160 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 160 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 160 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3);

#line 144 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_block_instr_list_3_p_0(
#line 144 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 144 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 144 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3);

#line 135 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_block_instr_3_p_0(
#line 135 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__RegMap_4,
#line 135 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__CInstrs_5,
#line 135 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instrs_6);

#line 118 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_c_instr_list_3_p_0(
#line 118 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 118 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 118 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3);

#line 96 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_c_proc_list_3_p_0(
#line 96 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__RegMap_1,
#line 96 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 96 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3);


static /* final */ const MR_Box ll_backend__llds_to_x86_64_scalar_common_1[76][2];

static /* final */ const MR_Box ll_backend__llds_to_x86_64_scalar_common_2[73][1];




static /* final */ const MR_Box ll_backend__llds_to_x86_64_scalar_common_1[76][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<liveval>>"))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[0])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 3 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[1])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[2])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[4])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[5])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 7 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[6])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &ll_backend__llds_to_x86_64_scalar_common_2[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 9 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[8])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 10 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[9])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[10])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[11])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[12])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[13])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[14])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 16 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[15])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 17 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[16])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 18 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[17])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 19 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[18])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 20 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[19])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 21 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[20])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 22 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[21])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 23 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[22])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 24 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[23])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 25 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[24])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 26 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[25])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 27 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[26])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 28 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[27])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 29 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<lvar>>"))
  },
  /* row 30 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[29])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<var>>"))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<llconst_false>>"))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<llconst_true>>"))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<llconst_data_addr>>"))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<llconst_float>>"))
  },
  /* row 36 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<llconst_multi_string>>"))
  },
  /* row 37 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[36])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 38 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[37])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 39 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[38])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 40 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[39])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 41 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[40])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 42 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[41])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 43 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[42])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 44 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[43])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 45 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[44])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 46 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[45])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 47 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[46])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 48 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[47])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 49 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[48])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 50 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[49])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 51 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[50])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 52 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[51])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 53 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[52])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 54 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[53])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 55 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[54])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 56 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[55])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 57 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[56])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 58 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[57])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 59 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[58])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 60 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[59])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 61 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[60])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 62 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[61])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 63 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<int_div>>"))
  },
  /* row 64 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[62])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 65 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[63])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 66 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[64])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 67 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[65])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 68 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[66])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 69 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[67])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 70 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[68])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 71 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[69])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 72 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[70])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 73 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[71])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 74 */
  {
    ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[72])),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 75 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_String) "<<directive>>"))
  },
};

static /* final */ const MR_Box ll_backend__llds_to_x86_64_scalar_common_2[73][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "<<discard_ticket>>"))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "<<prune_ticket>>"))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_String) "<<arbitrary_c_code>>"))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_String) "<<decr_sp>> "))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_String) "<<foreign_proc_code>>"))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "<<fork_new_child>>"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "<<free_heap>>"))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8))))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "<<init_sync_term>>"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "<<join_and_continue>>"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "<<lc_create_loop_control>>"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "<<lc_join_and_terminate>>"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "<<lc_spawn_off>>"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "<<lc_wait_free_slot>>"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "<<mark_hp>>"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "<<mark_ticket_stack>>"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "<<mkframe>>"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "<<prune_tickets_to>>"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "<<push_region_frame>>"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "<<region_fill_frame>>"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "<<region_set_fixed_slot>>"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "<<reset_ticket>>"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "<<restore_hp>>"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "<<restore_maxfr>>"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "<<save_maxfr>>"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "<<store_ticket>>"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "<<use_and_maybe_pop_region_frame>>"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "<<field>>"))
  },
  /* row 28 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[29])))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "<<mkword>>"))
  },
  /* row 30 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[31])))
  },
  /* row 31 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[32])))
  },
  /* row 32 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[33])))
  },
  /* row 33 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[34])))
  },
  /* row 34 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[35])))
  },
  /* row 35 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[36])))
  },
  /* row 36 */
  {
    ((MR_Box) ((MR_String) "<<hash_string>>"))
  },
  /* row 37 */
  {
    ((MR_Box) ((MR_String) "<<hash_string2>>"))
  },
  /* row 38 */
  {
    ((MR_Box) ((MR_String) "<<hash_string3>>"))
  },
  /* row 39 */
  {
    ((MR_Box) ((MR_String) "<<logical_not>>"))
  },
  /* row 40 */
  {
    ((MR_Box) ((MR_String) "<<mkbody>>"))
  },
  /* row 41 */
  {
    ((MR_Box) ((MR_String) "<<mktag>>"))
  },
  /* row 42 */
  {
    ((MR_Box) ((MR_String) "<<strip_tag>>"))
  },
  /* row 43 */
  {
    ((MR_Box) ((MR_String) "<<tag>>"))
  },
  /* row 44 */
  {
    ((MR_Box) ((MR_String) "<<unmkbody>>"))
  },
  /* row 45 */
  {
    ((MR_Box) ((MR_String) "<<unmktag>>"))
  },
  /* row 46 */
  {
    ((MR_Box) ((MR_String) "<<bitwise_or>>"))
  },
  /* row 47 */
  {
    ((MR_Box) ((MR_String) "<<body>>"))
  },
  /* row 48 */
  {
    ((MR_Box) ((MR_String) "<<compound_eq>>"))
  },
  /* row 49 */
  {
    ((MR_Box) ((MR_String) "<<compound_lt>>"))
  },
  /* row 50 */
  {
    ((MR_Box) ((MR_String) "<<float_divide>>"))
  },
  /* row 51 */
  {
    ((MR_Box) ((MR_String) "<<float_eq>>"))
  },
  /* row 52 */
  {
    ((MR_Box) ((MR_String) "<<float_from_dword>>"))
  },
  /* row 53 */
  {
    ((MR_Box) ((MR_String) "<<float_ge>>"))
  },
  /* row 54 */
  {
    ((MR_Box) ((MR_String) "<<float_gt>>"))
  },
  /* row 55 */
  {
    ((MR_Box) ((MR_String) "<<float_le>>"))
  },
  /* row 56 */
  {
    ((MR_Box) ((MR_String) "<<float_lt>>"))
  },
  /* row 57 */
  {
    ((MR_Box) ((MR_String) "<<float_minus>>"))
  },
  /* row 58 */
  {
    ((MR_Box) ((MR_String) "<<float_ne>>"))
  },
  /* row 59 */
  {
    ((MR_Box) ((MR_String) "<<float_plus>>"))
  },
  /* row 60 */
  {
    ((MR_Box) ((MR_String) "<<float_times>>"))
  },
  /* row 61 */
  {
    ((MR_Box) ((MR_String) "<<float_word_bits>>"))
  },
  /* row 62 */
  {
    ((MR_Box) ((MR_String) "<<int_mod>>"))
  },
  /* row 63 */
  {
    ((MR_Box) ((MR_String) "<<logical_and>>"))
  },
  /* row 64 */
  {
    ((MR_Box) ((MR_String) "<<logical_or>>"))
  },
  /* row 65 */
  {
    ((MR_Box) ((MR_String) "<<str_cmp>>"))
  },
  /* row 66 */
  {
    ((MR_Box) ((MR_String) "<<str_eq>>"))
  },
  /* row 67 */
  {
    ((MR_Box) ((MR_String) "<<str_ge>>"))
  },
  /* row 68 */
  {
    ((MR_Box) ((MR_String) "<<str_gt>>"))
  },
  /* row 69 */
  {
    ((MR_Box) ((MR_String) "<<str_le>>"))
  },
  /* row 70 */
  {
    ((MR_Box) ((MR_String) "<<str_lt>>"))
  },
  /* row 71 */
  {
    ((MR_Box) ((MR_String) "<<str_ne>>"))
  },
  /* row 72 */
  {
    ((MR_Box) ((MR_String) "<<array_index>>"))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 1097 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_0[2] = {
  (MR_PseudoTypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_operand_0,
  (MR_PseudoTypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

#line 1103 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0 = {
  (MR_String) "binop_simple_operands",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_0,
  NULL,
  NULL,
  NULL
};

#line 1118 "ll_backend.llds_to_x86_64.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__llds_to_x86_64__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
  }
};

#line 1126 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_1[2] = {
  (MR_PseudoTypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_operand_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_to_x86_64__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
};

#line 1132 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1 = {
  (MR_String) "binop_simple_and_compound_operands",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_1,
  NULL,
  NULL,
  NULL
};

#line 1147 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_2[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds_to_x86_64__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
  (MR_PseudoTypeInfo) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_operand_0
};

#line 1153 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2 = {
  (MR_String) "binop_compound_and_simple_operands",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_2,
  NULL,
  NULL,
  NULL
};

#line 1168 "ll_backend.llds_to_x86_64.c"
static const MR_PseudoTypeInfo ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_3[2] = {
  (MR_PseudoTypeInfo) &ll_backend__llds_to_x86_64__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0,
  (MR_PseudoTypeInfo) &ll_backend__llds_to_x86_64__list__ti_list_1ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0
};

#line 1174 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDesc ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3 = {
  (MR_String) "binop_compound_operands",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__field_types_binop_0_3,
  NULL,
  NULL,
  NULL
};

#line 1189 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_0[1] = {
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0
};

#line 1194 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_1[1] = {
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1
};

#line 1199 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_2[1] = {
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2
};

#line 1204 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_3[1] = {
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3
};

#line 1209 "ll_backend.llds_to_x86_64.c"
static const MR_DuPtagLayout ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_ptag_ordered_binop_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_stag_ordered_binop_0_3
  }
};

#line 1233 "ll_backend.llds_to_x86_64.c"
static const MR_DuFunctorDescPtr ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_name_ordered_binop_0[4] = {
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_2,
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_3,
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_1,
  &ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_functor_desc_binop_0_0
};

#line 1241 "ll_backend.llds_to_x86_64.c"
static const MR_Integer ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__functor_number_map_binop_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1249 "ll_backend.llds_to_x86_64.c"
const MR_TypeCtorInfo_Struct ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__type_ctor_info_binop_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (ll_backend__llds_to_x86_64____Unify____binop_0_0_10001)),
  ((MR_Box) (ll_backend__llds_to_x86_64____Compare____binop_0_0_10001)),
  (MR_String) "ll_backend.llds_to_x86_64",
  (MR_String) "binop",
  {
    ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_name_ordered_binop_0
  },
  {
    ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__du_ptag_ordered_binop_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__functor_number_map_binop_0
};

#line 1270 "ll_backend.llds_to_x86_64.c"
static MR_bool MR_CALL 
ll_backend__llds_to_x86_64____Unify____binop_0_0_10001(
#line 1273 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_1,
#line 1275 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_2)
#line 1277 "ll_backend.llds_to_x86_64.c"
{
#line 1279 "ll_backend.llds_to_x86_64.c"
  {
#line 1281 "ll_backend.llds_to_x86_64.c"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 1284 "ll_backend.llds_to_x86_64.c"
    {
#line 1286 "ll_backend.llds_to_x86_64.c"
      ll_backend__llds_to_x86_64__succeeded = ll_backend__llds_to_x86_64____Unify____binop_0_0(((MR_Word) ll_backend__llds_to_x86_64__wrapper_arg_1), ((MR_Word) ll_backend__llds_to_x86_64__wrapper_arg_2));
    }
#line 1289 "ll_backend.llds_to_x86_64.c"
    return ll_backend__llds_to_x86_64__succeeded;
#line 1291 "ll_backend.llds_to_x86_64.c"
  }
#line 1293 "ll_backend.llds_to_x86_64.c"
}

#line 1296 "ll_backend.llds_to_x86_64.c"
static void MR_CALL 
ll_backend__llds_to_x86_64____Compare____binop_0_0_10001(
#line 1299 "ll_backend.llds_to_x86_64.c"
  MR_Box * ll_backend__llds_to_x86_64__wrapper_arg_1,
#line 1301 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_2,
#line 1303 "ll_backend.llds_to_x86_64.c"
  MR_Box ll_backend__llds_to_x86_64__wrapper_arg_3)
#line 1305 "ll_backend.llds_to_x86_64.c"
{
#line 1307 "ll_backend.llds_to_x86_64.c"
  {
#line 1309 "ll_backend.llds_to_x86_64.c"
    MR_Word ll_backend__llds_to_x86_64__conv0_HeadVar__1_1;

#line 1312 "ll_backend.llds_to_x86_64.c"
    {
#line 1314 "ll_backend.llds_to_x86_64.c"
      ll_backend__llds_to_x86_64____Compare____binop_0_0(&ll_backend__llds_to_x86_64__conv0_HeadVar__1_1, ((MR_Word) ll_backend__llds_to_x86_64__wrapper_arg_2), ((MR_Word) ll_backend__llds_to_x86_64__wrapper_arg_3));
    }
#line 1317 "ll_backend.llds_to_x86_64.c"
    *ll_backend__llds_to_x86_64__wrapper_arg_1 = ((MR_Box) (ll_backend__llds_to_x86_64__conv0_HeadVar__1_1));
#line 1319 "ll_backend.llds_to_x86_64.c"
  }
#line 1321 "ll_backend.llds_to_x86_64.c"
}

#line 42 "llds_to_x86_64.m"
void MR_CALL 
ll_backend__llds_to_x86_64__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_p_0(
#line 42 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__CProcs_5,
#line 42 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__AsmProcs_6)
#line 42 "llds_to_x86_64.m"
{
#line 89 "llds_to_x86_64.m"
  {
#line 89 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;
#line 89 "llds_to_x86_64.m"
    MR_Word ll_backend__llds_to_x86_64__RegLocnList_7;
#line 89 "llds_to_x86_64.m"
    MR_Word ll_backend__llds_to_x86_64__RegMap_8;

#line 90 "llds_to_x86_64.m"
    {
#line 90 "llds_to_x86_64.m"
      ll_backend__x86_64_regs__default_x86_64_reg_mapping_1_p_0(&ll_backend__llds_to_x86_64__RegLocnList_7);
    }
#line 91 "llds_to_x86_64.m"
    {
#line 91 "llds_to_x86_64.m"
      ll_backend__llds_to_x86_64__RegMap_8 = ll_backend__x86_64_regs__reg_map_init_1_f_0(ll_backend__llds_to_x86_64__RegLocnList_7);
    }
#line 92 "llds_to_x86_64.m"
    {
#line 92 "llds_to_x86_64.m"
      ll_backend__llds_to_x86_64__transform_c_proc_list_3_p_0(ll_backend__llds_to_x86_64__RegMap_8, ll_backend__llds_to_x86_64__CProcs_5, ll_backend__llds_to_x86_64__AsmProcs_6);
#line 92 "llds_to_x86_64.m"
      return;
    }
#line 89 "llds_to_x86_64.m"
  }
#line 42 "llds_to_x86_64.m"
}

#line 69 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64____Compare____binop_0_0(
#line 69 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__3_3)
#line 69 "llds_to_x86_64.m"
{
#line 69 "llds_to_x86_64.m"
  {
#line 69 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;
#line 69 "llds_to_x86_64.m"
    MR_Integer ll_backend__llds_to_x86_64__CastX_72 = (MR_Integer) ll_backend__llds_to_x86_64__HeadVar__2_2;
#line 69 "llds_to_x86_64.m"
    MR_Integer ll_backend__llds_to_x86_64__CastY_73 = (MR_Integer) ll_backend__llds_to_x86_64__HeadVar__3_3;

#line 69 "llds_to_x86_64.m"
    ll_backend__llds_to_x86_64__succeeded = (ll_backend__llds_to_x86_64__CastX_72 == ll_backend__llds_to_x86_64__CastY_73);
#line 69 "llds_to_x86_64.m"
    if (ll_backend__llds_to_x86_64__succeeded)
#line 1388 "ll_backend.llds_to_x86_64.c"
      *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 0;
#line 69 "llds_to_x86_64.m"
    else
#line 69 "llds_to_x86_64.m"
      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 69 "llds_to_x86_64.m"
        {
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));

#line 69 "llds_to_x86_64.m"
          if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 69 "llds_to_x86_64.m"
            {
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_50_50;

#line 69 "llds_to_x86_64.m"
              {
#line 69 "llds_to_x86_64.m"
                mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0], &ll_backend__llds_to_x86_64__V_50_50, ((MR_Box) (ll_backend__llds_to_x86_64__V_83_83)), ((MR_Box) (ll_backend__llds_to_x86_64__V_48_48)));
              }
#line 1417 "ll_backend.llds_to_x86_64.c"
              ll_backend__llds_to_x86_64__succeeded = (ll_backend__llds_to_x86_64__V_50_50 == (MR_Integer) 0);
#line 69 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__succeeded = !(ll_backend__llds_to_x86_64__succeeded);
#line 69 "llds_to_x86_64.m"
              if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                *ll_backend__llds_to_x86_64__HeadVar__1_1 = ll_backend__llds_to_x86_64__V_50_50;
#line 69 "llds_to_x86_64.m"
              else
#line 69 "llds_to_x86_64.m"
                {
#line 69 "llds_to_x86_64.m"
                  ll_backend__x86_64_instrs____Compare____operand_0_0(ll_backend__llds_to_x86_64__HeadVar__1_1, ll_backend__llds_to_x86_64__V_82_82, ll_backend__llds_to_x86_64__V_49_49);
#line 69 "llds_to_x86_64.m"
                  return;
                }
#line 69 "llds_to_x86_64.m"
            }
#line 69 "llds_to_x86_64.m"
          else
#line 69 "llds_to_x86_64.m"
            if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1440 "ll_backend.llds_to_x86_64.c"
              *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "llds_to_x86_64.m"
            else
#line 69 "llds_to_x86_64.m"
              if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1446 "ll_backend.llds_to_x86_64.c"
                *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "llds_to_x86_64.m"
              else
#line 1450 "ll_backend.llds_to_x86_64.c"
                *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "llds_to_x86_64.m"
        }
#line 69 "llds_to_x86_64.m"
      else
#line 69 "llds_to_x86_64.m"
        if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 69 "llds_to_x86_64.m"
          {
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));

#line 69 "llds_to_x86_64.m"
            if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1467 "ll_backend.llds_to_x86_64.c"
              *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "llds_to_x86_64.m"
            else
#line 69 "llds_to_x86_64.m"
              if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 69 "llds_to_x86_64.m"
                {
#line 69 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__V_71_71;

#line 69 "llds_to_x86_64.m"
                  {
#line 69 "llds_to_x86_64.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0], &ll_backend__llds_to_x86_64__V_71_71, ((MR_Box) (ll_backend__llds_to_x86_64__V_85_85)), ((MR_Box) (ll_backend__llds_to_x86_64__V_69_69)));
                  }
#line 1487 "ll_backend.llds_to_x86_64.c"
                  ll_backend__llds_to_x86_64__succeeded = (ll_backend__llds_to_x86_64__V_71_71 == (MR_Integer) 0);
#line 69 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__succeeded = !(ll_backend__llds_to_x86_64__succeeded);
#line 69 "llds_to_x86_64.m"
                  if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__HeadVar__1_1 = ll_backend__llds_to_x86_64__V_71_71;
#line 69 "llds_to_x86_64.m"
                  else
#line 69 "llds_to_x86_64.m"
                    {
#line 69 "llds_to_x86_64.m"
                      {
#line 69 "llds_to_x86_64.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0], ll_backend__llds_to_x86_64__HeadVar__1_1, ((MR_Box) (ll_backend__llds_to_x86_64__V_84_84)), ((MR_Box) (ll_backend__llds_to_x86_64__V_70_70)));
#line 69 "llds_to_x86_64.m"
                        return;
                      }
#line 69 "llds_to_x86_64.m"
                    }
#line 69 "llds_to_x86_64.m"
                }
#line 69 "llds_to_x86_64.m"
              else
#line 69 "llds_to_x86_64.m"
                if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1514 "ll_backend.llds_to_x86_64.c"
                  *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "llds_to_x86_64.m"
                else
#line 1518 "ll_backend.llds_to_x86_64.c"
                  *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "llds_to_x86_64.m"
          }
#line 69 "llds_to_x86_64.m"
        else
#line 69 "llds_to_x86_64.m"
          if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 69 "llds_to_x86_64.m"
            {
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));

#line 69 "llds_to_x86_64.m"
              if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1535 "ll_backend.llds_to_x86_64.c"
                *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "llds_to_x86_64.m"
              else
#line 69 "llds_to_x86_64.m"
                if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1541 "ll_backend.llds_to_x86_64.c"
                  *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "llds_to_x86_64.m"
                else
#line 69 "llds_to_x86_64.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 69 "llds_to_x86_64.m"
                    {
#line 69 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_29_29;

#line 69 "llds_to_x86_64.m"
                      {
#line 69 "llds_to_x86_64.m"
                        ll_backend__x86_64_instrs____Compare____operand_0_0(&ll_backend__llds_to_x86_64__V_29_29, ll_backend__llds_to_x86_64__V_87_87, ll_backend__llds_to_x86_64__V_27_27);
                      }
#line 1561 "ll_backend.llds_to_x86_64.c"
                      ll_backend__llds_to_x86_64__succeeded = (ll_backend__llds_to_x86_64__V_29_29 == (MR_Integer) 0);
#line 69 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__succeeded = !(ll_backend__llds_to_x86_64__succeeded);
#line 69 "llds_to_x86_64.m"
                      if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__1_1 = ll_backend__llds_to_x86_64__V_29_29;
#line 69 "llds_to_x86_64.m"
                      else
#line 69 "llds_to_x86_64.m"
                        {
#line 69 "llds_to_x86_64.m"
                          {
#line 69 "llds_to_x86_64.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0], ll_backend__llds_to_x86_64__HeadVar__1_1, ((MR_Box) (ll_backend__llds_to_x86_64__V_86_86)), ((MR_Box) (ll_backend__llds_to_x86_64__V_28_28)));
#line 69 "llds_to_x86_64.m"
                            return;
                          }
#line 69 "llds_to_x86_64.m"
                        }
#line 69 "llds_to_x86_64.m"
                    }
#line 69 "llds_to_x86_64.m"
                  else
#line 1586 "ll_backend.llds_to_x86_64.c"
                    *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 2;
#line 69 "llds_to_x86_64.m"
            }
#line 69 "llds_to_x86_64.m"
          else
#line 69 "llds_to_x86_64.m"
            {
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));

#line 69 "llds_to_x86_64.m"
              if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 1601 "ll_backend.llds_to_x86_64.c"
                *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "llds_to_x86_64.m"
              else
#line 69 "llds_to_x86_64.m"
                if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 1607 "ll_backend.llds_to_x86_64.c"
                  *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "llds_to_x86_64.m"
                else
#line 69 "llds_to_x86_64.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 1613 "ll_backend.llds_to_x86_64.c"
                    *ll_backend__llds_to_x86_64__HeadVar__1_1 = (MR_Integer) 1;
#line 69 "llds_to_x86_64.m"
                  else
#line 69 "llds_to_x86_64.m"
                    {
#line 69 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_8_8;

#line 69 "llds_to_x86_64.m"
                      {
#line 69 "llds_to_x86_64.m"
                        ll_backend__x86_64_instrs____Compare____operand_0_0(&ll_backend__llds_to_x86_64__V_8_8, ll_backend__llds_to_x86_64__V_89_89, ll_backend__llds_to_x86_64__V_6_6);
                      }
#line 1631 "ll_backend.llds_to_x86_64.c"
                      ll_backend__llds_to_x86_64__succeeded = (ll_backend__llds_to_x86_64__V_8_8 == (MR_Integer) 0);
#line 69 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__succeeded = !(ll_backend__llds_to_x86_64__succeeded);
#line 69 "llds_to_x86_64.m"
                      if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__1_1 = ll_backend__llds_to_x86_64__V_8_8;
#line 69 "llds_to_x86_64.m"
                      else
#line 69 "llds_to_x86_64.m"
                        {
#line 69 "llds_to_x86_64.m"
                          ll_backend__x86_64_instrs____Compare____operand_0_0(ll_backend__llds_to_x86_64__HeadVar__1_1, ll_backend__llds_to_x86_64__V_88_88, ll_backend__llds_to_x86_64__V_7_7);
#line 69 "llds_to_x86_64.m"
                          return;
                        }
#line 69 "llds_to_x86_64.m"
                    }
#line 69 "llds_to_x86_64.m"
            }
#line 69 "llds_to_x86_64.m"
  }
#line 69 "llds_to_x86_64.m"
}

#line 69 "llds_to_x86_64.m"
static MR_bool MR_CALL 
ll_backend__llds_to_x86_64____Unify____binop_0_0(
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 69 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2)
#line 69 "llds_to_x86_64.m"
{
#line 69 "llds_to_x86_64.m"
  {
#line 69 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;
#line 69 "llds_to_x86_64.m"
    MR_Integer ll_backend__llds_to_x86_64__CastX_19 = (MR_Integer) ll_backend__llds_to_x86_64__HeadVar__1_1;
#line 69 "llds_to_x86_64.m"
    MR_Integer ll_backend__llds_to_x86_64__CastY_20 = (MR_Integer) ll_backend__llds_to_x86_64__HeadVar__2_2;

#line 69 "llds_to_x86_64.m"
    ll_backend__llds_to_x86_64__succeeded = (ll_backend__llds_to_x86_64__CastX_19 == ll_backend__llds_to_x86_64__CastY_20);
#line 69 "llds_to_x86_64.m"
    if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
      ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 69 "llds_to_x86_64.m"
    else
#line 69 "llds_to_x86_64.m"
      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 69 "llds_to_x86_64.m"
        {
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__TypeInfo_21_21;
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_13_13;
#line 69 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_14_14;

#line 69 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__succeeded = ((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 69 "llds_to_x86_64.m"
          if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
            {
#line 69 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 1708 "ll_backend.llds_to_x86_64.c"
              ll_backend__llds_to_x86_64__TypeInfo_21_21 = (MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0];
#line 1710 "ll_backend.llds_to_x86_64.c"
              {
#line 1712 "ll_backend.llds_to_x86_64.c"
                ll_backend__llds_to_x86_64__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_to_x86_64__TypeInfo_21_21, ((MR_Box) (ll_backend__llds_to_x86_64__V_11_11)), ((MR_Box) (ll_backend__llds_to_x86_64__V_13_13)));
              }
#line 69 "llds_to_x86_64.m"
              if (ll_backend__llds_to_x86_64__succeeded)
#line 1717 "ll_backend.llds_to_x86_64.c"
                {
#line 1719 "ll_backend.llds_to_x86_64.c"
                  return ll_backend__llds_to_x86_64__succeeded = ll_backend__x86_64_instrs____Unify____operand_0_0(ll_backend__llds_to_x86_64__V_12_12, ll_backend__llds_to_x86_64__V_14_14);
                }
#line 69 "llds_to_x86_64.m"
            }
#line 69 "llds_to_x86_64.m"
        }
#line 69 "llds_to_x86_64.m"
      else
#line 69 "llds_to_x86_64.m"
        if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 69 "llds_to_x86_64.m"
          {
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__TypeInfo_23_23;
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__TypeInfo_24_24;
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_17_17;
#line 69 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_18_18;

#line 69 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__succeeded = ((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 69 "llds_to_x86_64.m"
            if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
              {
#line 69 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 1755 "ll_backend.llds_to_x86_64.c"
                ll_backend__llds_to_x86_64__TypeInfo_23_23 = (MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0];
#line 1757 "ll_backend.llds_to_x86_64.c"
                {
#line 1759 "ll_backend.llds_to_x86_64.c"
                  ll_backend__llds_to_x86_64__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_to_x86_64__TypeInfo_23_23, ((MR_Box) (ll_backend__llds_to_x86_64__V_15_15)), ((MR_Box) (ll_backend__llds_to_x86_64__V_17_17)));
                }
#line 69 "llds_to_x86_64.m"
                if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                  {
#line 1766 "ll_backend.llds_to_x86_64.c"
                    ll_backend__llds_to_x86_64__TypeInfo_24_24 = (MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0];
#line 1768 "ll_backend.llds_to_x86_64.c"
                    {
#line 1770 "ll_backend.llds_to_x86_64.c"
                      return ll_backend__llds_to_x86_64__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_to_x86_64__TypeInfo_24_24, ((MR_Box) (ll_backend__llds_to_x86_64__V_16_16)), ((MR_Box) (ll_backend__llds_to_x86_64__V_18_18)));
                    }
#line 69 "llds_to_x86_64.m"
                  }
#line 69 "llds_to_x86_64.m"
              }
#line 69 "llds_to_x86_64.m"
          }
#line 69 "llds_to_x86_64.m"
        else
#line 69 "llds_to_x86_64.m"
          if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 69 "llds_to_x86_64.m"
            {
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__TypeInfo_26_26;
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_9_9;
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_10_10;

#line 69 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__succeeded = ((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
              if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                {
#line 69 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 1806 "ll_backend.llds_to_x86_64.c"
                  {
#line 1808 "ll_backend.llds_to_x86_64.c"
                    ll_backend__llds_to_x86_64__succeeded = ll_backend__x86_64_instrs____Unify____operand_0_0(ll_backend__llds_to_x86_64__V_7_7, ll_backend__llds_to_x86_64__V_9_9);
                  }
#line 69 "llds_to_x86_64.m"
                  if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                    {
#line 1815 "ll_backend.llds_to_x86_64.c"
                      ll_backend__llds_to_x86_64__TypeInfo_26_26 = (MR_Word) &ll_backend__llds_to_x86_64_scalar_common_1[0];
#line 1817 "ll_backend.llds_to_x86_64.c"
                      {
#line 1819 "ll_backend.llds_to_x86_64.c"
                        return ll_backend__llds_to_x86_64__succeeded = mercury__builtin__unify_2_p_0(ll_backend__llds_to_x86_64__TypeInfo_26_26, ((MR_Box) (ll_backend__llds_to_x86_64__V_8_8)), ((MR_Box) (ll_backend__llds_to_x86_64__V_10_10)));
                      }
#line 69 "llds_to_x86_64.m"
                    }
#line 69 "llds_to_x86_64.m"
                }
#line 69 "llds_to_x86_64.m"
            }
#line 69 "llds_to_x86_64.m"
          else
#line 69 "llds_to_x86_64.m"
            {
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_5_5;
#line 69 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__V_6_6;

#line 69 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__succeeded = ((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
              if (ll_backend__llds_to_x86_64__succeeded)
#line 69 "llds_to_x86_64.m"
                {
#line 69 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 69 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 1851 "ll_backend.llds_to_x86_64.c"
                  {
#line 1853 "ll_backend.llds_to_x86_64.c"
                    ll_backend__llds_to_x86_64__succeeded = ll_backend__x86_64_instrs____Unify____operand_0_0(ll_backend__llds_to_x86_64__V_3_3, ll_backend__llds_to_x86_64__V_5_5);
                  }
#line 69 "llds_to_x86_64.m"
                  if (ll_backend__llds_to_x86_64__succeeded)
#line 1858 "ll_backend.llds_to_x86_64.c"
                    {
#line 1860 "ll_backend.llds_to_x86_64.c"
                      return ll_backend__llds_to_x86_64__succeeded = ll_backend__x86_64_instrs____Unify____operand_0_0(ll_backend__llds_to_x86_64__V_4_4, ll_backend__llds_to_x86_64__V_6_6);
                    }
#line 69 "llds_to_x86_64.m"
                }
#line 69 "llds_to_x86_64.m"
            }
#line 69 "llds_to_x86_64.m"
    return ll_backend__llds_to_x86_64__succeeded;
#line 69 "llds_to_x86_64.m"
  }
#line 69 "llds_to_x86_64.m"
}

#line 1039 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__maybe_labels_to_string_3_p_0(
#line 1039 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 1039 "llds_to_x86_64.m"
  MR_String ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 1039 "llds_to_x86_64.m"
  MR_String * ll_backend__llds_to_x86_64__Str_3)
#line 1039 "llds_to_x86_64.m"
{
#line 1042 "llds_to_x86_64.m"
  while (MR_TRUE)
#line 1042 "llds_to_x86_64.m"
    {
#line 1042 "llds_to_x86_64.m"
      /* tailcall optimized into a loop */
#line 1042 "llds_to_x86_64.m"
      {
#line 1042 "llds_to_x86_64.m"
        MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 1042 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1042 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Str_3 = ll_backend__llds_to_x86_64__HeadVar__2_2;
#line 1042 "llds_to_x86_64.m"
        else
#line 1043 "llds_to_x86_64.m"
          {
#line 1043 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__MaybeLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 1043 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__MaybeLabels_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 1043 "llds_to_x86_64.m"
            MR_String ll_backend__llds_to_x86_64__LabelStr_10;
#line 1043 "llds_to_x86_64.m"
            MR_String ll_backend__llds_to_x86_64__V_12_12;

#line 1047 "llds_to_x86_64.m"
            if ((ll_backend__llds_to_x86_64__MaybeLabel_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1049 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__LabelStr_10 = (MR_String) "<<do_not_reached>>";
#line 1047 "llds_to_x86_64.m"
            else
#line 1045 "llds_to_x86_64.m"
              {
#line 1045 "llds_to_x86_64.m"
                MR_Word ll_backend__llds_to_x86_64__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__MaybeLabel_5, (MR_Integer) 0)));

#line 1046 "llds_to_x86_64.m"
                {
#line 1046 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__LabelStr_10 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_to_x86_64__Label_9, (MR_Integer) 0);
                }
#line 1045 "llds_to_x86_64.m"
              }
#line 1051 "llds_to_x86_64.m"
            {
#line 1051 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__llds_to_x86_64__HeadVar__2_2, ll_backend__llds_to_x86_64__LabelStr_10);
            }
#line 1051 "llds_to_x86_64.m"
            /* direct tailcall eliminated */
#line 1051 "llds_to_x86_64.m"
            {
#line 1051 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__HeadVar__1__tmp_copy_1 = ll_backend__llds_to_x86_64__MaybeLabels_6;
#line 1051 "llds_to_x86_64.m"
              MR_String ll_backend__llds_to_x86_64__HeadVar__2__tmp_copy_2 = ll_backend__llds_to_x86_64__V_12_12;

#line 1051 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__HeadVar__2_2 = ll_backend__llds_to_x86_64__HeadVar__2__tmp_copy_2;
#line 1051 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__HeadVar__1_1 = ll_backend__llds_to_x86_64__HeadVar__1__tmp_copy_1;
#line 1051 "llds_to_x86_64.m"
            }
#line 1051 "llds_to_x86_64.m"
            continue;
#line 1043 "llds_to_x86_64.m"
          }
#line 1042 "llds_to_x86_64.m"
      }
#line 1042 "llds_to_x86_64.m"
      break;
#line 1042 "llds_to_x86_64.m"
    }
#line 1039 "llds_to_x86_64.m"
}

#line 971 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(
#line 971 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Instrs_3,
#line 971 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Op_4)
#line 971 "llds_to_x86_64.m"
{
#line 973 "llds_to_x86_64.m"
  {
#line 973 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;
#line 973 "llds_to_x86_64.m"
    MR_Word ll_backend__llds_to_x86_64__LastInstr_5;
#line 974 "llds_to_x86_64.m"
    MR_Box ll_backend__llds_to_x86_64__conv0_LastInstr_5;

#line 974 "llds_to_x86_64.m"
    {
#line 974 "llds_to_x86_64.m"
      mercury__list__det_last_2_p_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__Instrs_3, &ll_backend__llds_to_x86_64__conv0_LastInstr_5);
    }
#line 974 "llds_to_x86_64.m"
    ll_backend__llds_to_x86_64__LastInstr_5 = ((MR_Word) ll_backend__llds_to_x86_64__conv0_LastInstr_5);
#line 978 "llds_to_x86_64.m"
    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__LastInstr_5)) == (MR_mktag((MR_Integer) 0))))
#line 976 "llds_to_x86_64.m"
      {
#line 976 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__Comment_6 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__LastInstr_5, (MR_Integer) 0)));

#line 977 "llds_to_x86_64.m"
        {
#line 977 "llds_to_x86_64.m"
          MR_Word base;
#line 977 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 977 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Op_4 = base;
#line 977 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 977 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Comment_6));
#line 977 "llds_to_x86_64.m"
        }
#line 976 "llds_to_x86_64.m"
      }
#line 978 "llds_to_x86_64.m"
    else
#line 978 "llds_to_x86_64.m"
      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__LastInstr_5)) == (MR_mktag((MR_Integer) 2))))
#line 989 "llds_to_x86_64.m"
        {
#line 990 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Op_4 = (MR_Word) MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[75]);
#line 989 "llds_to_x86_64.m"
        }
#line 978 "llds_to_x86_64.m"
      else
#line 978 "llds_to_x86_64.m"
        if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__LastInstr_5)) == (MR_mktag((MR_Integer) 3))))
#line 982 "llds_to_x86_64.m"
          {
#line 982 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__Instr_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LastInstr_5, (MR_Integer) 0)));
#line 985 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__OpPrime_9;

#line 997 "llds_to_x86_64.m"
            if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 1))))
#line 997 "llds_to_x86_64.m"
              {
#line 997 "llds_to_x86_64.m"
                MR_Word ll_backend__llds_to_x86_64__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)));

#line 997 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 997 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 997 "llds_to_x86_64.m"
              }
#line 997 "llds_to_x86_64.m"
            else
#line 997 "llds_to_x86_64.m"
              if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 2))))
#line 998 "llds_to_x86_64.m"
                {
#line 998 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)));

#line 998 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 998 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 998 "llds_to_x86_64.m"
                }
#line 997 "llds_to_x86_64.m"
              else
#line 997 "llds_to_x86_64.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 999 "llds_to_x86_64.m"
                  {
#line 999 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 999 "llds_to_x86_64.m"
                    ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 999 "llds_to_x86_64.m"
                    ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 999 "llds_to_x86_64.m"
                  }
#line 997 "llds_to_x86_64.m"
                else
#line 997 "llds_to_x86_64.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1000 "llds_to_x86_64.m"
                    {
#line 1000 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1000 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_24_24;

#line 1000 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1000 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 3)));
#line 1000 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1000 "llds_to_x86_64.m"
                    }
#line 997 "llds_to_x86_64.m"
                  else
#line 997 "llds_to_x86_64.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1001 "llds_to_x86_64.m"
                      {
#line 1001 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1001 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1001 "llds_to_x86_64.m"
                      }
#line 997 "llds_to_x86_64.m"
                    else
#line 997 "llds_to_x86_64.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1002 "llds_to_x86_64.m"
                        {
#line 1002 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1002 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_28_28;

#line 1002 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1002 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 3)));
#line 1002 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1002 "llds_to_x86_64.m"
                        }
#line 997 "llds_to_x86_64.m"
                      else
#line 997 "llds_to_x86_64.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1003 "llds_to_x86_64.m"
                          {
#line 1003 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1003 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1003 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1003 "llds_to_x86_64.m"
                          }
#line 997 "llds_to_x86_64.m"
                        else
#line 997 "llds_to_x86_64.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1004 "llds_to_x86_64.m"
                            {
#line 1004 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1004 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1004 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1004 "llds_to_x86_64.m"
                            }
#line 997 "llds_to_x86_64.m"
                          else
#line 997 "llds_to_x86_64.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 1005 "llds_to_x86_64.m"
                              {
#line 1005 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1005 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1005 "llds_to_x86_64.m"
                              }
#line 997 "llds_to_x86_64.m"
                            else
#line 997 "llds_to_x86_64.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 1006 "llds_to_x86_64.m"
                                {
#line 1006 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1006 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1006 "llds_to_x86_64.m"
                                }
#line 997 "llds_to_x86_64.m"
                              else
#line 997 "llds_to_x86_64.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 1007 "llds_to_x86_64.m"
                                  {
#line 1007 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1007 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1007 "llds_to_x86_64.m"
                                  }
#line 997 "llds_to_x86_64.m"
                                else
#line 997 "llds_to_x86_64.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 1008 "llds_to_x86_64.m"
                                    {
#line 1008 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1008 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1008 "llds_to_x86_64.m"
                                    }
#line 997 "llds_to_x86_64.m"
                                  else
#line 997 "llds_to_x86_64.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 1009 "llds_to_x86_64.m"
                                      {
#line 1009 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1009 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1009 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 3)));

#line 1009 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__succeeded = ((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1009 "llds_to_x86_64.m"
                                        if (ll_backend__llds_to_x86_64__succeeded)
#line 1009 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_40_40, (MR_Integer) 0)));
#line 1009 "llds_to_x86_64.m"
                                      }
#line 997 "llds_to_x86_64.m"
                                    else
#line 997 "llds_to_x86_64.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 1010 "llds_to_x86_64.m"
                                        {
#line 1010 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1010 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1010 "llds_to_x86_64.m"
                                        }
#line 997 "llds_to_x86_64.m"
                                      else
#line 997 "llds_to_x86_64.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1012 "llds_to_x86_64.m"
                                          {
#line 1012 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1012 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1012 "llds_to_x86_64.m"
                                          }
#line 997 "llds_to_x86_64.m"
                                        else
#line 997 "llds_to_x86_64.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 1011 "llds_to_x86_64.m"
                                            {
#line 1011 "llds_to_x86_64.m"
                                              ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1011 "llds_to_x86_64.m"
                                              ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1011 "llds_to_x86_64.m"
                                            }
#line 997 "llds_to_x86_64.m"
                                          else
#line 997 "llds_to_x86_64.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1013 "llds_to_x86_64.m"
                                              {
#line 1013 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1013 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1013 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1013 "llds_to_x86_64.m"
                                              }
#line 997 "llds_to_x86_64.m"
                                            else
#line 997 "llds_to_x86_64.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1014 "llds_to_x86_64.m"
                                                {
#line 1014 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1014 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1014 "llds_to_x86_64.m"
                                                }
#line 997 "llds_to_x86_64.m"
                                              else
#line 997 "llds_to_x86_64.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1015 "llds_to_x86_64.m"
                                                  {
#line 1015 "llds_to_x86_64.m"
                                                    ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1015 "llds_to_x86_64.m"
                                                    ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1015 "llds_to_x86_64.m"
                                                  }
#line 997 "llds_to_x86_64.m"
                                                else
#line 997 "llds_to_x86_64.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1016 "llds_to_x86_64.m"
                                                    {
#line 1016 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1016 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1016 "llds_to_x86_64.m"
                                                    }
#line 997 "llds_to_x86_64.m"
                                                  else
#line 997 "llds_to_x86_64.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1017 "llds_to_x86_64.m"
                                                      {
#line 1017 "llds_to_x86_64.m"
                                                        ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1017 "llds_to_x86_64.m"
                                                        ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1017 "llds_to_x86_64.m"
                                                      }
#line 997 "llds_to_x86_64.m"
                                                    else
#line 997 "llds_to_x86_64.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1018 "llds_to_x86_64.m"
                                                        {
#line 1018 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1018 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1018 "llds_to_x86_64.m"
                                                        }
#line 997 "llds_to_x86_64.m"
                                                      else
#line 997 "llds_to_x86_64.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1019 "llds_to_x86_64.m"
                                                          {
#line 1019 "llds_to_x86_64.m"
                                                            MR_Word ll_backend__llds_to_x86_64__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1019 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1019 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1019 "llds_to_x86_64.m"
                                                          }
#line 997 "llds_to_x86_64.m"
                                                        else
#line 997 "llds_to_x86_64.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1020 "llds_to_x86_64.m"
                                                            {
#line 1020 "llds_to_x86_64.m"
                                                              ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1020 "llds_to_x86_64.m"
                                                              ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1020 "llds_to_x86_64.m"
                                                            }
#line 997 "llds_to_x86_64.m"
                                                          else
#line 997 "llds_to_x86_64.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1022 "llds_to_x86_64.m"
                                                              {
#line 1022 "llds_to_x86_64.m"
                                                                MR_Word ll_backend__llds_to_x86_64__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1022 "llds_to_x86_64.m"
                                                                ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1022 "llds_to_x86_64.m"
                                                                ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1022 "llds_to_x86_64.m"
                                                              }
#line 997 "llds_to_x86_64.m"
                                                            else
#line 997 "llds_to_x86_64.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1023 "llds_to_x86_64.m"
                                                                {
#line 1023 "llds_to_x86_64.m"
                                                                  ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1023 "llds_to_x86_64.m"
                                                                  ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1023 "llds_to_x86_64.m"
                                                                }
#line 997 "llds_to_x86_64.m"
                                                              else
#line 997 "llds_to_x86_64.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1024 "llds_to_x86_64.m"
                                                                  {
#line 1024 "llds_to_x86_64.m"
                                                                    ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1024 "llds_to_x86_64.m"
                                                                    ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1024 "llds_to_x86_64.m"
                                                                  }
#line 997 "llds_to_x86_64.m"
                                                                else
#line 997 "llds_to_x86_64.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1025 "llds_to_x86_64.m"
                                                                    {
#line 1025 "llds_to_x86_64.m"
                                                                      MR_Word ll_backend__llds_to_x86_64__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1025 "llds_to_x86_64.m"
                                                                      MR_String ll_backend__llds_to_x86_64__V_61_61;

#line 1025 "llds_to_x86_64.m"
                                                                      ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1025 "llds_to_x86_64.m"
                                                                      ll_backend__llds_to_x86_64__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 3)));
#line 1025 "llds_to_x86_64.m"
                                                                      ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1025 "llds_to_x86_64.m"
                                                                    }
#line 997 "llds_to_x86_64.m"
                                                                  else
#line 997 "llds_to_x86_64.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 36))))
#line 1026 "llds_to_x86_64.m"
                                                                      {
#line 1026 "llds_to_x86_64.m"
                                                                        MR_Word ll_backend__llds_to_x86_64__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1026 "llds_to_x86_64.m"
                                                                        MR_String ll_backend__llds_to_x86_64__V_64_64;

#line 1026 "llds_to_x86_64.m"
                                                                        ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1026 "llds_to_x86_64.m"
                                                                        ll_backend__llds_to_x86_64__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 3)));
#line 1026 "llds_to_x86_64.m"
                                                                        ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1026 "llds_to_x86_64.m"
                                                                      }
#line 997 "llds_to_x86_64.m"
                                                                    else
#line 997 "llds_to_x86_64.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 37))))
#line 1027 "llds_to_x86_64.m"
                                                                        {
#line 1027 "llds_to_x86_64.m"
                                                                          MR_Word ll_backend__llds_to_x86_64__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1027 "llds_to_x86_64.m"
                                                                          ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1027 "llds_to_x86_64.m"
                                                                          ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1027 "llds_to_x86_64.m"
                                                                        }
#line 997 "llds_to_x86_64.m"
                                                                      else
#line 997 "llds_to_x86_64.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 39))))
#line 1029 "llds_to_x86_64.m"
                                                                          {
#line 1029 "llds_to_x86_64.m"
                                                                            MR_Word ll_backend__llds_to_x86_64__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1029 "llds_to_x86_64.m"
                                                                            ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1029 "llds_to_x86_64.m"
                                                                            ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1029 "llds_to_x86_64.m"
                                                                          }
#line 997 "llds_to_x86_64.m"
                                                                        else
#line 997 "llds_to_x86_64.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 40))))
#line 1030 "llds_to_x86_64.m"
                                                                            {
#line 1030 "llds_to_x86_64.m"
                                                                              MR_Word ll_backend__llds_to_x86_64__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1030 "llds_to_x86_64.m"
                                                                              ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1030 "llds_to_x86_64.m"
                                                                              ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1030 "llds_to_x86_64.m"
                                                                            }
#line 997 "llds_to_x86_64.m"
                                                                          else
#line 997 "llds_to_x86_64.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 41))))
#line 1031 "llds_to_x86_64.m"
                                                                              {
#line 1031 "llds_to_x86_64.m"
                                                                                MR_Word ll_backend__llds_to_x86_64__V_74_74;

#line 1031 "llds_to_x86_64.m"
                                                                                ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1031 "llds_to_x86_64.m"
                                                                                ll_backend__llds_to_x86_64__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1031 "llds_to_x86_64.m"
                                                                                ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1031 "llds_to_x86_64.m"
                                                                              }
#line 997 "llds_to_x86_64.m"
                                                                            else
#line 997 "llds_to_x86_64.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 38))))
#line 1028 "llds_to_x86_64.m"
                                                                                {
#line 1028 "llds_to_x86_64.m"
                                                                                  MR_Word ll_backend__llds_to_x86_64__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1028 "llds_to_x86_64.m"
                                                                                  ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1028 "llds_to_x86_64.m"
                                                                                  ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1028 "llds_to_x86_64.m"
                                                                                }
#line 997 "llds_to_x86_64.m"
                                                                              else
#line 997 "llds_to_x86_64.m"
                                                                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 43))))
#line 1032 "llds_to_x86_64.m"
                                                                                  {
#line 1032 "llds_to_x86_64.m"
                                                                                    MR_Word ll_backend__llds_to_x86_64__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1032 "llds_to_x86_64.m"
                                                                                    ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1032 "llds_to_x86_64.m"
                                                                                    ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1032 "llds_to_x86_64.m"
                                                                                  }
#line 997 "llds_to_x86_64.m"
                                                                                else
#line 997 "llds_to_x86_64.m"
                                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 45))))
#line 1033 "llds_to_x86_64.m"
                                                                                    {
#line 1033 "llds_to_x86_64.m"
                                                                                      MR_Word ll_backend__llds_to_x86_64__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1033 "llds_to_x86_64.m"
                                                                                      ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1033 "llds_to_x86_64.m"
                                                                                      ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1033 "llds_to_x86_64.m"
                                                                                    }
#line 997 "llds_to_x86_64.m"
                                                                                  else
#line 997 "llds_to_x86_64.m"
                                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1021 "llds_to_x86_64.m"
                                                                                      {
#line 1021 "llds_to_x86_64.m"
                                                                                        ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));
#line 1021 "llds_to_x86_64.m"
                                                                                        ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1021 "llds_to_x86_64.m"
                                                                                      }
#line 997 "llds_to_x86_64.m"
                                                                                    else
#line 997 "llds_to_x86_64.m"
                                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 47))))
#line 1034 "llds_to_x86_64.m"
                                                                                        {
#line 1034 "llds_to_x86_64.m"
                                                                                          MR_Word ll_backend__llds_to_x86_64__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1034 "llds_to_x86_64.m"
                                                                                          ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1034 "llds_to_x86_64.m"
                                                                                          ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1034 "llds_to_x86_64.m"
                                                                                        }
#line 997 "llds_to_x86_64.m"
                                                                                      else
#line 997 "llds_to_x86_64.m"
                                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Instr_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 0)))) == (MR_Integer) 49))))
#line 1035 "llds_to_x86_64.m"
                                                                                          {
#line 1035 "llds_to_x86_64.m"
                                                                                            MR_Word ll_backend__llds_to_x86_64__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 1)));

#line 1035 "llds_to_x86_64.m"
                                                                                            ll_backend__llds_to_x86_64__OpPrime_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, (MR_Integer) 2)));
#line 1035 "llds_to_x86_64.m"
                                                                                            ll_backend__llds_to_x86_64__succeeded = MR_TRUE;
#line 1035 "llds_to_x86_64.m"
                                                                                          }
#line 997 "llds_to_x86_64.m"
                                                                                        else
#line 997 "llds_to_x86_64.m"
                                                                                          ll_backend__llds_to_x86_64__succeeded = MR_FALSE;
#line 985 "llds_to_x86_64.m"
            if (ll_backend__llds_to_x86_64__succeeded)
#line 984 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__Op_4 = ll_backend__llds_to_x86_64__OpPrime_9;
#line 985 "llds_to_x86_64.m"
            else
#line 986 "llds_to_x86_64.m"
              {
#line 986 "llds_to_x86_64.m"
                {
#line 986 "llds_to_x86_64.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.get_last_instr_operand\'/2", (MR_String) "last_instr_dest failed");
#line 986 "llds_to_x86_64.m"
                  return;
                }
#line 986 "llds_to_x86_64.m"
              }
#line 982 "llds_to_x86_64.m"
          }
#line 978 "llds_to_x86_64.m"
        else
#line 979 "llds_to_x86_64.m"
          {
#line 979 "llds_to_x86_64.m"
            MR_String ll_backend__llds_to_x86_64__Label_7 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__LastInstr_5, (MR_Integer) 0)));

#line 980 "llds_to_x86_64.m"
            {
#line 980 "llds_to_x86_64.m"
              MR_Word base;
#line 980 "llds_to_x86_64.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 980 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__Op_4 = base;
#line 980 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 980 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Label_7));
#line 980 "llds_to_x86_64.m"
            }
#line 979 "llds_to_x86_64.m"
          }
#line 973 "llds_to_x86_64.m"
  }
#line 971 "llds_to_x86_64.m"
}

#line 942 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__code_addr_type_2_p_0(
#line 942 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 942 "llds_to_x86_64.m"
  MR_String * ll_backend__llds_to_x86_64__CodeAddr_2)
#line 942 "llds_to_x86_64.m"
{
#line 944 "llds_to_x86_64.m"
  {
#line 944 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 944 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "llds_to_x86_64.m"
      *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<code_succip>>";
#line 944 "llds_to_x86_64.m"
    else
#line 944 "llds_to_x86_64.m"
      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 956 "llds_to_x86_64.m"
        *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_fail>>";
#line 944 "llds_to_x86_64.m"
      else
#line 944 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 966 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_not_reached>>";
#line 944 "llds_to_x86_64.m"
        else
#line 944 "llds_to_x86_64.m"
          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 954 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_redo>>";
#line 944 "llds_to_x86_64.m"
          else
#line 944 "llds_to_x86_64.m"
            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 960 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_trace_redo_fail_deep>>";
#line 944 "llds_to_x86_64.m"
            else
#line 944 "llds_to_x86_64.m"
              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 958 "llds_to_x86_64.m"
                *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_trace_redo_fail_shallow>>";
#line 944 "llds_to_x86_64.m"
              else
#line 944 "llds_to_x86_64.m"
                if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 946 "llds_to_x86_64.m"
                  {
#line 946 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 946 "llds_to_x86_64.m"
                    MR_String ll_backend__llds_to_x86_64__V_11_11;

#line 947 "llds_to_x86_64.m"
                    {
#line 947 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__V_11_11 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_to_x86_64__ProcLabel_8, (MR_Integer) 0);
                    }
#line 947 "llds_to_x86_64.m"
                    {
#line 947 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__CodeAddr_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__llds_to_x86_64__V_11_11);
                    }
#line 946 "llds_to_x86_64.m"
                  }
#line 944 "llds_to_x86_64.m"
                else
#line 944 "llds_to_x86_64.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 944 "llds_to_x86_64.m"
                    {
#line 944 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Label_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 944 "llds_to_x86_64.m"
                      MR_String ll_backend__llds_to_x86_64__V_6_6;

#line 945 "llds_to_x86_64.m"
                      {
#line 945 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_6_6 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_to_x86_64__Label_3, (MR_Integer) 0);
                      }
#line 945 "llds_to_x86_64.m"
                      {
#line 945 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__CodeAddr_2 = mercury__string__f_43_43_2_f_0((MR_String) "\044", ll_backend__llds_to_x86_64__V_6_6);
                      }
#line 944 "llds_to_x86_64.m"
                    }
#line 944 "llds_to_x86_64.m"
                  else
#line 944 "llds_to_x86_64.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 964 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_call_class_method>>";
#line 944 "llds_to_x86_64.m"
                    else
#line 944 "llds_to_x86_64.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 962 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_call_closure>>";
#line 944 "llds_to_x86_64.m"
                      else
#line 952 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__CodeAddr_2 = (MR_String) "<<do_succeed>>";
#line 944 "llds_to_x86_64.m"
  }
#line 942 "llds_to_x86_64.m"
}

#line 892 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__binop_instr_4_p_0(
#line 892 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 892 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op1_2,
#line 892 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op2_3,
#line 892 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4)
#line 892 "llds_to_x86_64.m"
{
#line 895 "llds_to_x86_64.m"
  {
#line 895 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 895 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 904 "llds_to_x86_64.m"
      {
#line 904 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_50_50;
#line 904 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_51_51;

#line 904 "llds_to_x86_64.m"
        {
#line 904 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 904 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_51_51, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 904 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_51_51, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 904 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_51_51, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 904 "llds_to_x86_64.m"
        }
#line 904 "llds_to_x86_64.m"
        {
#line 904 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 904 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_50_50, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_51_51));
#line 904 "llds_to_x86_64.m"
        }
#line 904 "llds_to_x86_64.m"
        {
#line 904 "llds_to_x86_64.m"
          MR_Word base;
#line 904 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 904 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 904 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_50_50));
#line 904 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 904 "llds_to_x86_64.m"
        }
#line 904 "llds_to_x86_64.m"
      }
#line 895 "llds_to_x86_64.m"
    else
#line 895 "llds_to_x86_64.m"
      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 905 "llds_to_x86_64.m"
        {
#line 905 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[47]);
#line 905 "llds_to_x86_64.m"
        }
#line 895 "llds_to_x86_64.m"
      else
#line 895 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 906 "llds_to_x86_64.m"
          {
#line 906 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_60_60;
#line 906 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_61_61;

#line 906 "llds_to_x86_64.m"
            {
#line 906 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_61_61 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 906 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_61_61, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 49));
#line 906 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_61_61, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 906 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_61_61, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 906 "llds_to_x86_64.m"
            }
#line 906 "llds_to_x86_64.m"
            {
#line 906 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_60_60 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 906 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_60_60, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_61_61));
#line 906 "llds_to_x86_64.m"
            }
#line 906 "llds_to_x86_64.m"
            {
#line 906 "llds_to_x86_64.m"
              MR_Word base;
#line 906 "llds_to_x86_64.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 906 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 906 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_60_60));
#line 906 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 906 "llds_to_x86_64.m"
            }
#line 906 "llds_to_x86_64.m"
          }
#line 895 "llds_to_x86_64.m"
        else
#line 895 "llds_to_x86_64.m"
          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 911 "llds_to_x86_64.m"
            {
#line 911 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[48]);
#line 911 "llds_to_x86_64.m"
            }
#line 895 "llds_to_x86_64.m"
          else
#line 895 "llds_to_x86_64.m"
            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 937 "llds_to_x86_64.m"
              {
#line 937 "llds_to_x86_64.m"
                *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[49]);
#line 937 "llds_to_x86_64.m"
              }
#line 895 "llds_to_x86_64.m"
            else
#line 895 "llds_to_x86_64.m"
              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 938 "llds_to_x86_64.m"
                {
#line 938 "llds_to_x86_64.m"
                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[50]);
#line 938 "llds_to_x86_64.m"
                }
#line 895 "llds_to_x86_64.m"
              else
#line 895 "llds_to_x86_64.m"
                if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 909 "llds_to_x86_64.m"
                  {
#line 909 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__V_75_75;
#line 909 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__V_76_76;

#line 909 "llds_to_x86_64.m"
                    {
#line 909 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__V_76_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 909 "llds_to_x86_64.m"
                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_76_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 909 "llds_to_x86_64.m"
                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_76_76, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 909 "llds_to_x86_64.m"
                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_76_76, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 909 "llds_to_x86_64.m"
                    }
#line 909 "llds_to_x86_64.m"
                    {
#line 909 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__V_75_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 909 "llds_to_x86_64.m"
                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_75_75, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_76_76));
#line 909 "llds_to_x86_64.m"
                    }
#line 909 "llds_to_x86_64.m"
                    {
#line 909 "llds_to_x86_64.m"
                      MR_Word base;
#line 909 "llds_to_x86_64.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 909 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 909 "llds_to_x86_64.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_75_75));
#line 909 "llds_to_x86_64.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 909 "llds_to_x86_64.m"
                    }
#line 909 "llds_to_x86_64.m"
                  }
#line 895 "llds_to_x86_64.m"
                else
#line 895 "llds_to_x86_64.m"
                  if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 928 "llds_to_x86_64.m"
                    {
#line 928 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[51]);
#line 928 "llds_to_x86_64.m"
                    }
#line 895 "llds_to_x86_64.m"
                  else
#line 895 "llds_to_x86_64.m"
                    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 929 "llds_to_x86_64.m"
                      {
#line 929 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[52]);
#line 929 "llds_to_x86_64.m"
                      }
#line 895 "llds_to_x86_64.m"
                    else
#line 895 "llds_to_x86_64.m"
                      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 936 "llds_to_x86_64.m"
                        {
#line 936 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[53]);
#line 936 "llds_to_x86_64.m"
                        }
#line 895 "llds_to_x86_64.m"
                      else
#line 895 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 934 "llds_to_x86_64.m"
                          {
#line 934 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[54]);
#line 934 "llds_to_x86_64.m"
                          }
#line 895 "llds_to_x86_64.m"
                        else
#line 895 "llds_to_x86_64.m"
                          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 932 "llds_to_x86_64.m"
                            {
#line 932 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[55]);
#line 932 "llds_to_x86_64.m"
                            }
#line 895 "llds_to_x86_64.m"
                          else
#line 895 "llds_to_x86_64.m"
                            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 933 "llds_to_x86_64.m"
                              {
#line 933 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[56]);
#line 933 "llds_to_x86_64.m"
                              }
#line 895 "llds_to_x86_64.m"
                            else
#line 895 "llds_to_x86_64.m"
                              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 931 "llds_to_x86_64.m"
                                {
#line 931 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[57]);
#line 931 "llds_to_x86_64.m"
                                }
#line 895 "llds_to_x86_64.m"
                              else
#line 895 "llds_to_x86_64.m"
                                if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 926 "llds_to_x86_64.m"
                                  {
#line 926 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[58]);
#line 926 "llds_to_x86_64.m"
                                  }
#line 895 "llds_to_x86_64.m"
                                else
#line 895 "llds_to_x86_64.m"
                                  if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 930 "llds_to_x86_64.m"
                                    {
#line 930 "llds_to_x86_64.m"
                                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[59]);
#line 930 "llds_to_x86_64.m"
                                    }
#line 895 "llds_to_x86_64.m"
                                  else
#line 895 "llds_to_x86_64.m"
                                    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 925 "llds_to_x86_64.m"
                                      {
#line 925 "llds_to_x86_64.m"
                                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[60]);
#line 925 "llds_to_x86_64.m"
                                      }
#line 895 "llds_to_x86_64.m"
                                    else
#line 895 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 927 "llds_to_x86_64.m"
                                        {
#line 927 "llds_to_x86_64.m"
                                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[61]);
#line 927 "llds_to_x86_64.m"
                                        }
#line 895 "llds_to_x86_64.m"
                                      else
#line 895 "llds_to_x86_64.m"
                                        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 935 "llds_to_x86_64.m"
                                          {
#line 935 "llds_to_x86_64.m"
                                            *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[62]);
#line 935 "llds_to_x86_64.m"
                                          }
#line 895 "llds_to_x86_64.m"
                                        else
#line 895 "llds_to_x86_64.m"
                                          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 895 "llds_to_x86_64.m"
                                            {
#line 895 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__V_7_7;
#line 895 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__V_8_8;

#line 895 "llds_to_x86_64.m"
                                              {
#line 895 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "llds_to_x86_64.m"
                                                MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_8_8, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 895 "llds_to_x86_64.m"
                                                MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_8_8, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 895 "llds_to_x86_64.m"
                                              }
#line 895 "llds_to_x86_64.m"
                                              {
#line 895 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__V_7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "llds_to_x86_64.m"
                                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_7_7, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_8_8));
#line 895 "llds_to_x86_64.m"
                                              }
#line 895 "llds_to_x86_64.m"
                                              {
#line 895 "llds_to_x86_64.m"
                                                MR_Word base;
#line 895 "llds_to_x86_64.m"
                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "llds_to_x86_64.m"
                                                *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 895 "llds_to_x86_64.m"
                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_7_7));
#line 895 "llds_to_x86_64.m"
                                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 895 "llds_to_x86_64.m"
                                              }
#line 895 "llds_to_x86_64.m"
                                            }
#line 895 "llds_to_x86_64.m"
                                          else
#line 895 "llds_to_x86_64.m"
                                            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 899 "llds_to_x86_64.m"
                                              {
#line 899 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__LoadDividend_30;
#line 899 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__V_31_31;
#line 899 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__V_34_34;
#line 899 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__V_35_35;
#line 899 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__V_36_36;

#line 900 "llds_to_x86_64.m"
                                                {
#line 900 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__V_31_31 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 900 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_31_31, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 900 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_31_31, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 900 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_31_31, 2) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[63])));
#line 900 "llds_to_x86_64.m"
                                                }
#line 900 "llds_to_x86_64.m"
                                                {
#line 900 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__LoadDividend_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 900 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LoadDividend_30, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_31_31));
#line 900 "llds_to_x86_64.m"
                                                }
#line 901 "llds_to_x86_64.m"
                                                {
#line 901 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__V_36_36 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_36_36, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_36_36, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 901 "llds_to_x86_64.m"
                                                }
#line 901 "llds_to_x86_64.m"
                                                {
#line 901 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__V_35_35 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_35_35, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_36_36));
#line 901 "llds_to_x86_64.m"
                                                }
#line 901 "llds_to_x86_64.m"
                                                {
#line 901 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__V_34_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_34_34, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_35_35));
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_34_34, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 901 "llds_to_x86_64.m"
                                                }
#line 901 "llds_to_x86_64.m"
                                                {
#line 901 "llds_to_x86_64.m"
                                                  MR_Word base;
#line 901 "llds_to_x86_64.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 901 "llds_to_x86_64.m"
                                                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LoadDividend_30));
#line 901 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_34_34));
#line 901 "llds_to_x86_64.m"
                                                }
#line 899 "llds_to_x86_64.m"
                                              }
#line 895 "llds_to_x86_64.m"
                                            else
#line 895 "llds_to_x86_64.m"
                                              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 923 "llds_to_x86_64.m"
                                                {
#line 923 "llds_to_x86_64.m"
                                                  MR_Word ll_backend__llds_to_x86_64__V_146_146;
#line 923 "llds_to_x86_64.m"
                                                  MR_Word ll_backend__llds_to_x86_64__V_147_147;

#line 923 "llds_to_x86_64.m"
                                                  {
#line 923 "llds_to_x86_64.m"
                                                    ll_backend__llds_to_x86_64__V_147_147 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 923 "llds_to_x86_64.m"
                                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_147_147, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 923 "llds_to_x86_64.m"
                                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_147_147, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 923 "llds_to_x86_64.m"
                                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_147_147, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 923 "llds_to_x86_64.m"
                                                  }
#line 923 "llds_to_x86_64.m"
                                                  {
#line 923 "llds_to_x86_64.m"
                                                    ll_backend__llds_to_x86_64__V_146_146 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 923 "llds_to_x86_64.m"
                                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_146_146, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_147_147));
#line 923 "llds_to_x86_64.m"
                                                  }
#line 923 "llds_to_x86_64.m"
                                                  {
#line 923 "llds_to_x86_64.m"
                                                    MR_Word base;
#line 923 "llds_to_x86_64.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 923 "llds_to_x86_64.m"
                                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 923 "llds_to_x86_64.m"
                                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_146_146));
#line 923 "llds_to_x86_64.m"
                                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 923 "llds_to_x86_64.m"
                                                  }
#line 923 "llds_to_x86_64.m"
                                                }
#line 895 "llds_to_x86_64.m"
                                              else
#line 895 "llds_to_x86_64.m"
                                                if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 921 "llds_to_x86_64.m"
                                                  {
#line 921 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_136_136;
#line 921 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_137_137;

#line 921 "llds_to_x86_64.m"
                                                    {
#line 921 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_137_137 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 921 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_137_137, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 921 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_137_137, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 921 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_137_137, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 921 "llds_to_x86_64.m"
                                                    }
#line 921 "llds_to_x86_64.m"
                                                    {
#line 921 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_136_136 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 921 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_136_136, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_137_137));
#line 921 "llds_to_x86_64.m"
                                                    }
#line 921 "llds_to_x86_64.m"
                                                    {
#line 921 "llds_to_x86_64.m"
                                                      MR_Word base;
#line 921 "llds_to_x86_64.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 921 "llds_to_x86_64.m"
                                                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 921 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_136_136));
#line 921 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 921 "llds_to_x86_64.m"
                                                    }
#line 921 "llds_to_x86_64.m"
                                                  }
#line 895 "llds_to_x86_64.m"
                                                else
#line 895 "llds_to_x86_64.m"
                                                  if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 922 "llds_to_x86_64.m"
                                                    {
#line 922 "llds_to_x86_64.m"
                                                      MR_Word ll_backend__llds_to_x86_64__V_141_141;
#line 922 "llds_to_x86_64.m"
                                                      MR_Word ll_backend__llds_to_x86_64__V_142_142;

#line 922 "llds_to_x86_64.m"
                                                      {
#line 922 "llds_to_x86_64.m"
                                                        ll_backend__llds_to_x86_64__V_142_142 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 922 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_142_142, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 922 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_142_142, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 922 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_142_142, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 922 "llds_to_x86_64.m"
                                                      }
#line 922 "llds_to_x86_64.m"
                                                      {
#line 922 "llds_to_x86_64.m"
                                                        ll_backend__llds_to_x86_64__V_141_141 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 922 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_141_141, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_142_142));
#line 922 "llds_to_x86_64.m"
                                                      }
#line 922 "llds_to_x86_64.m"
                                                      {
#line 922 "llds_to_x86_64.m"
                                                        MR_Word base;
#line 922 "llds_to_x86_64.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 922 "llds_to_x86_64.m"
                                                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 922 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_141_141));
#line 922 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 922 "llds_to_x86_64.m"
                                                      }
#line 922 "llds_to_x86_64.m"
                                                    }
#line 895 "llds_to_x86_64.m"
                                                  else
#line 895 "llds_to_x86_64.m"
                                                    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 920 "llds_to_x86_64.m"
                                                      {
#line 920 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__V_131_131;
#line 920 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__V_132_132;

#line 920 "llds_to_x86_64.m"
                                                        {
#line 920 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__V_132_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 920 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_132_132, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 920 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_132_132, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 920 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_132_132, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 920 "llds_to_x86_64.m"
                                                        }
#line 920 "llds_to_x86_64.m"
                                                        {
#line 920 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__V_131_131 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 920 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_131_131, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_132_132));
#line 920 "llds_to_x86_64.m"
                                                        }
#line 920 "llds_to_x86_64.m"
                                                        {
#line 920 "llds_to_x86_64.m"
                                                          MR_Word base;
#line 920 "llds_to_x86_64.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 920 "llds_to_x86_64.m"
                                                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 920 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_131_131));
#line 920 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 920 "llds_to_x86_64.m"
                                                        }
#line 920 "llds_to_x86_64.m"
                                                      }
#line 895 "llds_to_x86_64.m"
                                                    else
#line 895 "llds_to_x86_64.m"
                                                      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 898 "llds_to_x86_64.m"
                                                        {
#line 898 "llds_to_x86_64.m"
                                                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[64]);
#line 898 "llds_to_x86_64.m"
                                                        }
#line 895 "llds_to_x86_64.m"
                                                      else
#line 895 "llds_to_x86_64.m"
                                                        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 897 "llds_to_x86_64.m"
                                                          {
#line 897 "llds_to_x86_64.m"
                                                            MR_Word ll_backend__llds_to_x86_64__V_17_17;
#line 897 "llds_to_x86_64.m"
                                                            MR_Word ll_backend__llds_to_x86_64__V_18_18;
#line 897 "llds_to_x86_64.m"
                                                            MR_Word ll_backend__llds_to_x86_64__V_19_19;

#line 897 "llds_to_x86_64.m"
                                                            {
#line 897 "llds_to_x86_64.m"
                                                              ll_backend__llds_to_x86_64__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_19_19, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 897 "llds_to_x86_64.m"
                                                            }
#line 897 "llds_to_x86_64.m"
                                                            {
#line 897 "llds_to_x86_64.m"
                                                              ll_backend__llds_to_x86_64__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 16));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_18_18, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_18_18, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_19_19));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_18_18, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "llds_to_x86_64.m"
                                                            }
#line 897 "llds_to_x86_64.m"
                                                            {
#line 897 "llds_to_x86_64.m"
                                                              ll_backend__llds_to_x86_64__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_17_17, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_18_18));
#line 897 "llds_to_x86_64.m"
                                                            }
#line 897 "llds_to_x86_64.m"
                                                            {
#line 897 "llds_to_x86_64.m"
                                                              MR_Word base;
#line 897 "llds_to_x86_64.m"
                                                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "llds_to_x86_64.m"
                                                              *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_17_17));
#line 897 "llds_to_x86_64.m"
                                                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 897 "llds_to_x86_64.m"
                                                            }
#line 897 "llds_to_x86_64.m"
                                                          }
#line 895 "llds_to_x86_64.m"
                                                        else
#line 895 "llds_to_x86_64.m"
                                                          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 896 "llds_to_x86_64.m"
                                                            {
#line 896 "llds_to_x86_64.m"
                                                              MR_Word ll_backend__llds_to_x86_64__V_12_12;
#line 896 "llds_to_x86_64.m"
                                                              MR_Word ll_backend__llds_to_x86_64__V_13_13;

#line 896 "llds_to_x86_64.m"
                                                              {
#line 896 "llds_to_x86_64.m"
                                                                ll_backend__llds_to_x86_64__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 896 "llds_to_x86_64.m"
                                                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 45));
#line 896 "llds_to_x86_64.m"
                                                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_13_13, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 896 "llds_to_x86_64.m"
                                                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_13_13, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 896 "llds_to_x86_64.m"
                                                              }
#line 896 "llds_to_x86_64.m"
                                                              {
#line 896 "llds_to_x86_64.m"
                                                                ll_backend__llds_to_x86_64__V_12_12 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 896 "llds_to_x86_64.m"
                                                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_12_12, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_13_13));
#line 896 "llds_to_x86_64.m"
                                                              }
#line 896 "llds_to_x86_64.m"
                                                              {
#line 896 "llds_to_x86_64.m"
                                                                MR_Word base;
#line 896 "llds_to_x86_64.m"
                                                                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 896 "llds_to_x86_64.m"
                                                                *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 896 "llds_to_x86_64.m"
                                                                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_12_12));
#line 896 "llds_to_x86_64.m"
                                                                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 896 "llds_to_x86_64.m"
                                                              }
#line 896 "llds_to_x86_64.m"
                                                            }
#line 895 "llds_to_x86_64.m"
                                                          else
#line 895 "llds_to_x86_64.m"
                                                            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 907 "llds_to_x86_64.m"
                                                              {
#line 907 "llds_to_x86_64.m"
                                                                *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[65]);
#line 907 "llds_to_x86_64.m"
                                                              }
#line 895 "llds_to_x86_64.m"
                                                            else
#line 895 "llds_to_x86_64.m"
                                                              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 908 "llds_to_x86_64.m"
                                                                {
#line 908 "llds_to_x86_64.m"
                                                                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[66]);
#line 908 "llds_to_x86_64.m"
                                                                }
#line 895 "llds_to_x86_64.m"
                                                              else
#line 895 "llds_to_x86_64.m"
                                                                if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 910 "llds_to_x86_64.m"
                                                                  {
#line 910 "llds_to_x86_64.m"
                                                                    MR_Word ll_backend__llds_to_x86_64__V_80_80;
#line 910 "llds_to_x86_64.m"
                                                                    MR_Word ll_backend__llds_to_x86_64__V_81_81;

#line 910 "llds_to_x86_64.m"
                                                                    {
#line 910 "llds_to_x86_64.m"
                                                                      ll_backend__llds_to_x86_64__V_81_81 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 910 "llds_to_x86_64.m"
                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_81_81, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 910 "llds_to_x86_64.m"
                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_81_81, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 910 "llds_to_x86_64.m"
                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_81_81, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 910 "llds_to_x86_64.m"
                                                                    }
#line 910 "llds_to_x86_64.m"
                                                                    {
#line 910 "llds_to_x86_64.m"
                                                                      ll_backend__llds_to_x86_64__V_80_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 910 "llds_to_x86_64.m"
                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_80_80, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_81_81));
#line 910 "llds_to_x86_64.m"
                                                                    }
#line 910 "llds_to_x86_64.m"
                                                                    {
#line 910 "llds_to_x86_64.m"
                                                                      MR_Word base;
#line 910 "llds_to_x86_64.m"
                                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 910 "llds_to_x86_64.m"
                                                                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 910 "llds_to_x86_64.m"
                                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_80_80));
#line 910 "llds_to_x86_64.m"
                                                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 910 "llds_to_x86_64.m"
                                                                    }
#line 910 "llds_to_x86_64.m"
                                                                  }
#line 895 "llds_to_x86_64.m"
                                                                else
#line 895 "llds_to_x86_64.m"
                                                                  if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 919 "llds_to_x86_64.m"
                                                                    {
#line 919 "llds_to_x86_64.m"
                                                                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[67]);
#line 919 "llds_to_x86_64.m"
                                                                    }
#line 895 "llds_to_x86_64.m"
                                                                  else
#line 895 "llds_to_x86_64.m"
                                                                    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 913 "llds_to_x86_64.m"
                                                                      {
#line 913 "llds_to_x86_64.m"
                                                                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[68]);
#line 913 "llds_to_x86_64.m"
                                                                      }
#line 895 "llds_to_x86_64.m"
                                                                    else
#line 895 "llds_to_x86_64.m"
                                                                      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 918 "llds_to_x86_64.m"
                                                                        {
#line 918 "llds_to_x86_64.m"
                                                                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[69]);
#line 918 "llds_to_x86_64.m"
                                                                        }
#line 895 "llds_to_x86_64.m"
                                                                      else
#line 895 "llds_to_x86_64.m"
                                                                        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 916 "llds_to_x86_64.m"
                                                                          {
#line 916 "llds_to_x86_64.m"
                                                                            *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[70]);
#line 916 "llds_to_x86_64.m"
                                                                          }
#line 895 "llds_to_x86_64.m"
                                                                        else
#line 895 "llds_to_x86_64.m"
                                                                          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 917 "llds_to_x86_64.m"
                                                                            {
#line 917 "llds_to_x86_64.m"
                                                                              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[71]);
#line 917 "llds_to_x86_64.m"
                                                                            }
#line 895 "llds_to_x86_64.m"
                                                                          else
#line 895 "llds_to_x86_64.m"
                                                                            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 915 "llds_to_x86_64.m"
                                                                              {
#line 915 "llds_to_x86_64.m"
                                                                                *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[72]);
#line 915 "llds_to_x86_64.m"
                                                                              }
#line 895 "llds_to_x86_64.m"
                                                                            else
#line 895 "llds_to_x86_64.m"
                                                                              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 914 "llds_to_x86_64.m"
                                                                                {
#line 914 "llds_to_x86_64.m"
                                                                                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[73]);
#line 914 "llds_to_x86_64.m"
                                                                                }
#line 895 "llds_to_x86_64.m"
                                                                              else
#line 895 "llds_to_x86_64.m"
                                                                                if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 902 "llds_to_x86_64.m"
                                                                                  {
#line 902 "llds_to_x86_64.m"
                                                                                    MR_Word ll_backend__llds_to_x86_64__V_40_40;
#line 902 "llds_to_x86_64.m"
                                                                                    MR_Word ll_backend__llds_to_x86_64__V_41_41;

#line 902 "llds_to_x86_64.m"
                                                                                    {
#line 902 "llds_to_x86_64.m"
                                                                                      ll_backend__llds_to_x86_64__V_41_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 902 "llds_to_x86_64.m"
                                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_41_41, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 38));
#line 902 "llds_to_x86_64.m"
                                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_41_41, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 902 "llds_to_x86_64.m"
                                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_41_41, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 902 "llds_to_x86_64.m"
                                                                                    }
#line 902 "llds_to_x86_64.m"
                                                                                    {
#line 902 "llds_to_x86_64.m"
                                                                                      ll_backend__llds_to_x86_64__V_40_40 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 902 "llds_to_x86_64.m"
                                                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_40_40, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_41_41));
#line 902 "llds_to_x86_64.m"
                                                                                    }
#line 902 "llds_to_x86_64.m"
                                                                                    {
#line 902 "llds_to_x86_64.m"
                                                                                      MR_Word base;
#line 902 "llds_to_x86_64.m"
                                                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 902 "llds_to_x86_64.m"
                                                                                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 902 "llds_to_x86_64.m"
                                                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_40_40));
#line 902 "llds_to_x86_64.m"
                                                                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 902 "llds_to_x86_64.m"
                                                                                    }
#line 902 "llds_to_x86_64.m"
                                                                                  }
#line 895 "llds_to_x86_64.m"
                                                                                else
#line 895 "llds_to_x86_64.m"
                                                                                  if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 903 "llds_to_x86_64.m"
                                                                                    {
#line 903 "llds_to_x86_64.m"
                                                                                      MR_Word ll_backend__llds_to_x86_64__V_45_45;
#line 903 "llds_to_x86_64.m"
                                                                                      MR_Word ll_backend__llds_to_x86_64__V_46_46;

#line 903 "llds_to_x86_64.m"
                                                                                      {
#line 903 "llds_to_x86_64.m"
                                                                                        ll_backend__llds_to_x86_64__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 903 "llds_to_x86_64.m"
                                                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 43));
#line 903 "llds_to_x86_64.m"
                                                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_46_46, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 903 "llds_to_x86_64.m"
                                                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_46_46, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 903 "llds_to_x86_64.m"
                                                                                      }
#line 903 "llds_to_x86_64.m"
                                                                                      {
#line 903 "llds_to_x86_64.m"
                                                                                        ll_backend__llds_to_x86_64__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 903 "llds_to_x86_64.m"
                                                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_45_45, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_46_46));
#line 903 "llds_to_x86_64.m"
                                                                                      }
#line 903 "llds_to_x86_64.m"
                                                                                      {
#line 903 "llds_to_x86_64.m"
                                                                                        MR_Word base;
#line 903 "llds_to_x86_64.m"
                                                                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 903 "llds_to_x86_64.m"
                                                                                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 903 "llds_to_x86_64.m"
                                                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_45_45));
#line 903 "llds_to_x86_64.m"
                                                                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 903 "llds_to_x86_64.m"
                                                                                      }
#line 903 "llds_to_x86_64.m"
                                                                                    }
#line 895 "llds_to_x86_64.m"
                                                                                  else
#line 895 "llds_to_x86_64.m"
                                                                                    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 924 "llds_to_x86_64.m"
                                                                                      {
#line 924 "llds_to_x86_64.m"
                                                                                        MR_Word ll_backend__llds_to_x86_64__V_151_151;
#line 924 "llds_to_x86_64.m"
                                                                                        MR_Word ll_backend__llds_to_x86_64__V_152_152;

#line 924 "llds_to_x86_64.m"
                                                                                        {
#line 924 "llds_to_x86_64.m"
                                                                                          ll_backend__llds_to_x86_64__V_152_152 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 924 "llds_to_x86_64.m"
                                                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_152_152, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 924 "llds_to_x86_64.m"
                                                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_152_152, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Op1_2));
#line 924 "llds_to_x86_64.m"
                                                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_152_152, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op2_3));
#line 924 "llds_to_x86_64.m"
                                                                                        }
#line 924 "llds_to_x86_64.m"
                                                                                        {
#line 924 "llds_to_x86_64.m"
                                                                                          ll_backend__llds_to_x86_64__V_151_151 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 924 "llds_to_x86_64.m"
                                                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_151_151, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_152_152));
#line 924 "llds_to_x86_64.m"
                                                                                        }
#line 924 "llds_to_x86_64.m"
                                                                                        {
#line 924 "llds_to_x86_64.m"
                                                                                          MR_Word base;
#line 924 "llds_to_x86_64.m"
                                                                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 924 "llds_to_x86_64.m"
                                                                                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 924 "llds_to_x86_64.m"
                                                                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_151_151));
#line 924 "llds_to_x86_64.m"
                                                                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 924 "llds_to_x86_64.m"
                                                                                        }
#line 924 "llds_to_x86_64.m"
                                                                                      }
#line 895 "llds_to_x86_64.m"
                                                                                    else
#line 912 "llds_to_x86_64.m"
                                                                                      {
#line 912 "llds_to_x86_64.m"
                                                                                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[74]);
#line 912 "llds_to_x86_64.m"
                                                                                      }
#line 895 "llds_to_x86_64.m"
  }
#line 892 "llds_to_x86_64.m"
}

#line 860 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__unop_instrs_4_p_0(
#line 860 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 860 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op_2,
#line 860 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Instrs0_3,
#line 860 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4)
#line 860 "llds_to_x86_64.m"
{
#line 863 "llds_to_x86_64.m"
  {
#line 863 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 863 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 6))
#line 873 "llds_to_x86_64.m"
      if ((ll_backend__llds_to_x86_64__Op_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 879 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__Instrs0_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 880 "llds_to_x86_64.m"
          {
#line 881 "llds_to_x86_64.m"
            {
#line 881 "llds_to_x86_64.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.unop_instrs\'/4", (MR_String) "bitwise_complement: instruction operand Instrs0");
#line 881 "llds_to_x86_64.m"
              return;
            }
#line 880 "llds_to_x86_64.m"
          }
#line 879 "llds_to_x86_64.m"
        else
#line 876 "llds_to_x86_64.m"
          {
#line 876 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__InsRes_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Instrs0_3, (MR_Integer) 0)));
#line 876 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__LastOp_40;
#line 876 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_44_44;
#line 876 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_45_45;
#line 876 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_46_46;

#line 877 "llds_to_x86_64.m"
            {
#line 877 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__InsRes_39, &ll_backend__llds_to_x86_64__LastOp_40);
            }
#line 878 "llds_to_x86_64.m"
            {
#line 878 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_46_46 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_46_46, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 878 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_46_46, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__LastOp_40));
#line 878 "llds_to_x86_64.m"
            }
#line 878 "llds_to_x86_64.m"
            {
#line 878 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_45_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 878 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_45_45, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_46_46));
#line 878 "llds_to_x86_64.m"
            }
#line 878 "llds_to_x86_64.m"
            {
#line 878 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_44_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 878 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_44_44, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_45_45));
#line 878 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_44_44, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 878 "llds_to_x86_64.m"
            }
#line 878 "llds_to_x86_64.m"
            {
#line 878 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__HeadVar__4_4 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__InsRes_39, ll_backend__llds_to_x86_64__V_44_44);
            }
#line 876 "llds_to_x86_64.m"
          }
#line 873 "llds_to_x86_64.m"
      else
#line 871 "llds_to_x86_64.m"
        {
#line 871 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__OpRes_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Op_2, (MR_Integer) 0)));
#line 871 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_48_48;
#line 871 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_49_49;

#line 872 "llds_to_x86_64.m"
          {
#line 872 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_49_49, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 872 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_49_49, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__OpRes_38));
#line 872 "llds_to_x86_64.m"
          }
#line 872 "llds_to_x86_64.m"
          {
#line 872 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 872 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_48_48, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_49_49));
#line 872 "llds_to_x86_64.m"
          }
#line 872 "llds_to_x86_64.m"
          {
#line 872 "llds_to_x86_64.m"
            MR_Word base;
#line 872 "llds_to_x86_64.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 872 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 872 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_48_48));
#line 872 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 872 "llds_to_x86_64.m"
          }
#line 871 "llds_to_x86_64.m"
        }
#line 863 "llds_to_x86_64.m"
    else
#line 863 "llds_to_x86_64.m"
      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 8))
#line 886 "llds_to_x86_64.m"
        {
#line 886 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[37]);
#line 886 "llds_to_x86_64.m"
        }
#line 863 "llds_to_x86_64.m"
      else
#line 863 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 9))
#line 887 "llds_to_x86_64.m"
          {
#line 887 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[38]);
#line 887 "llds_to_x86_64.m"
          }
#line 863 "llds_to_x86_64.m"
        else
#line 863 "llds_to_x86_64.m"
          if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 10))
#line 888 "llds_to_x86_64.m"
            {
#line 888 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[39]);
#line 888 "llds_to_x86_64.m"
            }
#line 863 "llds_to_x86_64.m"
          else
#line 863 "llds_to_x86_64.m"
            if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 7))
#line 885 "llds_to_x86_64.m"
              {
#line 885 "llds_to_x86_64.m"
                *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[40]);
#line 885 "llds_to_x86_64.m"
              }
#line 863 "llds_to_x86_64.m"
            else
#line 863 "llds_to_x86_64.m"
              if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 4))
#line 867 "llds_to_x86_64.m"
                {
#line 867 "llds_to_x86_64.m"
                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[41]);
#line 867 "llds_to_x86_64.m"
                }
#line 863 "llds_to_x86_64.m"
              else
#line 863 "llds_to_x86_64.m"
                if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 0))
#line 863 "llds_to_x86_64.m"
                  {
#line 863 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[42]);
#line 863 "llds_to_x86_64.m"
                  }
#line 863 "llds_to_x86_64.m"
                else
#line 863 "llds_to_x86_64.m"
                  if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 3))
#line 866 "llds_to_x86_64.m"
                    {
#line 866 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[43]);
#line 866 "llds_to_x86_64.m"
                    }
#line 863 "llds_to_x86_64.m"
                  else
#line 863 "llds_to_x86_64.m"
                    if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 1))
#line 864 "llds_to_x86_64.m"
                      {
#line 864 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[44]);
#line 864 "llds_to_x86_64.m"
                      }
#line 863 "llds_to_x86_64.m"
                    else
#line 863 "llds_to_x86_64.m"
                      if ((ll_backend__llds_to_x86_64__HeadVar__1_1 == (MR_Integer) 5))
#line 868 "llds_to_x86_64.m"
                        {
#line 868 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[45]);
#line 868 "llds_to_x86_64.m"
                        }
#line 863 "llds_to_x86_64.m"
                      else
#line 865 "llds_to_x86_64.m"
                        {
#line 865 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[46]);
#line 865 "llds_to_x86_64.m"
                        }
#line 863 "llds_to_x86_64.m"
  }
#line 860 "llds_to_x86_64.m"
}

#line 838 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__binop_instrs_3_p_0(
#line 838 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_1,
#line 838 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Op_2,
#line 838 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instrs_3)
#line 838 "llds_to_x86_64.m"
{
#line 840 "llds_to_x86_64.m"
  {
#line 840 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 840 "llds_to_x86_64.m"
    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 846 "llds_to_x86_64.m"
      {
#line 846 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__InstrsOp_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 846 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Op2_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 846 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__LastOp_18;
#line 846 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Instrs0_19;

#line 847 "llds_to_x86_64.m"
        {
#line 847 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__InstrsOp_14, &ll_backend__llds_to_x86_64__LastOp_18);
        }
#line 848 "llds_to_x86_64.m"
        {
#line 848 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__binop_instr_4_p_0(ll_backend__llds_to_x86_64__Op_2, ll_backend__llds_to_x86_64__LastOp_18, ll_backend__llds_to_x86_64__Op2_15, &ll_backend__llds_to_x86_64__Instrs0_19);
        }
#line 849 "llds_to_x86_64.m"
        {
#line 849 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Instrs_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__InstrsOp_14, ll_backend__llds_to_x86_64__Instrs0_19);
        }
#line 846 "llds_to_x86_64.m"
      }
#line 840 "llds_to_x86_64.m"
    else
#line 840 "llds_to_x86_64.m"
      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 850 "llds_to_x86_64.m"
        {
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_30_30;
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__InstrsOp1_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__InstrsOp2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__LastOp1_24;
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__LastOp2_25;
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__Instrs0_26;
#line 850 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_27_27;

#line 851 "llds_to_x86_64.m"
          {
#line 851 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__InstrsOp1_20, &ll_backend__llds_to_x86_64__LastOp1_24);
          }
#line 852 "llds_to_x86_64.m"
          {
#line 852 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__InstrsOp2_21, &ll_backend__llds_to_x86_64__LastOp2_25);
          }
#line 853 "llds_to_x86_64.m"
          {
#line 853 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__binop_instr_4_p_0(ll_backend__llds_to_x86_64__Op_2, ll_backend__llds_to_x86_64__LastOp1_24, ll_backend__llds_to_x86_64__LastOp2_25, &ll_backend__llds_to_x86_64__Instrs0_26);
          }
#line 4113 "ll_backend.llds_to_x86_64.c"
          ll_backend__llds_to_x86_64__TypeCtorInfo_30_30 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 854 "llds_to_x86_64.m"
          {
#line 854 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_27_27 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_30_30, ll_backend__llds_to_x86_64__InstrsOp2_21, ll_backend__llds_to_x86_64__Instrs0_26);
          }
#line 854 "llds_to_x86_64.m"
          {
#line 854 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__Instrs_3 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_30_30, ll_backend__llds_to_x86_64__InstrsOp1_20, ll_backend__llds_to_x86_64__V_27_27);
          }
#line 850 "llds_to_x86_64.m"
        }
#line 840 "llds_to_x86_64.m"
      else
#line 840 "llds_to_x86_64.m"
        if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 842 "llds_to_x86_64.m"
          {
#line 842 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__Op1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 842 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__InstrsOp_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));
#line 842 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__LastOp_12;
#line 842 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__Instrs0_13;

#line 843 "llds_to_x86_64.m"
            {
#line 843 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__InstrsOp_9, &ll_backend__llds_to_x86_64__LastOp_12);
            }
#line 844 "llds_to_x86_64.m"
            {
#line 844 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__binop_instr_4_p_0(ll_backend__llds_to_x86_64__Op_2, ll_backend__llds_to_x86_64__Op1_8, ll_backend__llds_to_x86_64__LastOp_12, &ll_backend__llds_to_x86_64__Instrs0_13);
            }
#line 845 "llds_to_x86_64.m"
            {
#line 845 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__Instrs_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__InstrsOp_9, ll_backend__llds_to_x86_64__Instrs0_13);
            }
#line 842 "llds_to_x86_64.m"
          }
#line 840 "llds_to_x86_64.m"
        else
#line 840 "llds_to_x86_64.m"
          {
#line 840 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__Op1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 0)));
#line 840 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__Op2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__1_1, (MR_Integer) 1)));

#line 841 "llds_to_x86_64.m"
            {
#line 841 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__binop_instr_4_p_0(ll_backend__llds_to_x86_64__Op_2, ll_backend__llds_to_x86_64__Op1_4, ll_backend__llds_to_x86_64__Op2_5, ll_backend__llds_to_x86_64__Instrs_3);
#line 841 "llds_to_x86_64.m"
              return;
            }
#line 840 "llds_to_x86_64.m"
          }
#line 840 "llds_to_x86_64.m"
  }
#line 838 "llds_to_x86_64.m"
}

#line 816 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(
#line 816 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__RegMap_5,
#line 816 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Lval_6,
#line 816 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Op_7,
#line 816 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instr_8)
#line 816 "llds_to_x86_64.m"
{
#line 819 "llds_to_x86_64.m"
  {
#line 819 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;
#line 819 "llds_to_x86_64.m"
    MR_Word ll_backend__llds_to_x86_64__RegLocn_9;

#line 820 "llds_to_x86_64.m"
    {
#line 820 "llds_to_x86_64.m"
      ll_backend__llds_to_x86_64__RegLocn_9 = ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_f_0(ll_backend__llds_to_x86_64__RegMap_5, ll_backend__llds_to_x86_64__Lval_6);
    }
#line 825 "llds_to_x86_64.m"
    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__RegLocn_9)) == (MR_mktag((MR_Integer) 0))))
#line 822 "llds_to_x86_64.m"
      {
#line 822 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Reg_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__RegLocn_9, (MR_Integer) 0)));
#line 822 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_26_26;

#line 823 "llds_to_x86_64.m"
        {
#line 823 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 823 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_26_26, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Reg_10));
#line 823 "llds_to_x86_64.m"
        }
#line 823 "llds_to_x86_64.m"
        {
#line 823 "llds_to_x86_64.m"
          MR_Word base;
#line 823 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 823 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Op_7 = base;
#line 823 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_26_26));
#line 823 "llds_to_x86_64.m"
        }
#line 824 "llds_to_x86_64.m"
        *ll_backend__llds_to_x86_64__Instr_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 822 "llds_to_x86_64.m"
      }
#line 825 "llds_to_x86_64.m"
    else
#line 826 "llds_to_x86_64.m"
      {
#line 826 "llds_to_x86_64.m"
        MR_Integer ll_backend__llds_to_x86_64__SlotNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__RegLocn_9, (MR_Integer) 0)));
#line 826 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__FakeRegVal_12;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__ScratchReg_13;
#line 826 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_15_15;
#line 826 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_16_16;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_18_18;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_19_19;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_20_20;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_21_21;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_22_22;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_23_23;
#line 826 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_24_24;

#line 827 "llds_to_x86_64.m"
        *ll_backend__llds_to_x86_64__Op_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 828 "llds_to_x86_64.m"
        {
#line 828 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__llds_to_x86_64__SlotNum_11);
        }
#line 828 "llds_to_x86_64.m"
        {
#line 828 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__llds_to_x86_64__V_16_16, (MR_String) ")");
        }
#line 828 "llds_to_x86_64.m"
        {
#line 828 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__FakeRegVal_12 = mercury__string__f_43_43_2_f_0((MR_String) "fake_reg(", ll_backend__llds_to_x86_64__V_15_15);
        }
#line 829 "llds_to_x86_64.m"
        {
#line 829 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__ScratchReg_13 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__RegMap_5);
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_23_23, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__FakeRegVal_12));
#line 830 "llds_to_x86_64.m"
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_22_22, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_23_23));
#line 830 "llds_to_x86_64.m"
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_21_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_21_21, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_22_22));
#line 830 "llds_to_x86_64.m"
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_24_24, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_13));
#line 830 "llds_to_x86_64.m"
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_20_20, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_20_20, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_21_21));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_20_20, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_24_24));
#line 830 "llds_to_x86_64.m"
        }
#line 831 "llds_to_x86_64.m"
        {
#line 831 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 831 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_20_20));
#line 831 "llds_to_x86_64.m"
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_18_18, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_19_19));
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_18_18, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 830 "llds_to_x86_64.m"
        }
#line 830 "llds_to_x86_64.m"
        {
#line 830 "llds_to_x86_64.m"
          MR_Word base;
#line 830 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 830 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Instr_8 = base;
#line 830 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_18_18));
#line 830 "llds_to_x86_64.m"
        }
#line 826 "llds_to_x86_64.m"
      }
#line 819 "llds_to_x86_64.m"
  }
#line 816 "llds_to_x86_64.m"
}

#line 627 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_rval_5_p_0(
#line 627 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 627 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2,
#line 627 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__3_3,
#line 627 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4,
#line 627 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__5_5)
#line 627 "llds_to_x86_64.m"
{
#line 630 "llds_to_x86_64.m"
  {
#line 630 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 630 "llds_to_x86_64.m"
    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 630 "llds_to_x86_64.m"
      {
#line 630 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Lval0_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));

#line 631 "llds_to_x86_64.m"
        {
#line 631 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_lval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Lval0_7, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 631 "llds_to_x86_64.m"
          return;
        }
#line 630 "llds_to_x86_64.m"
      }
#line 630 "llds_to_x86_64.m"
    else
#line 630 "llds_to_x86_64.m"
      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 633 "llds_to_x86_64.m"
        {
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_300_300;
#line 633 "llds_to_x86_64.m"
          MR_Integer ll_backend__llds_to_x86_64__Tag_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__Rval_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__Res0_23;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__Res1_24;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__RvalOp_25;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__Instr0_26;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__ScratchReg_28;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__TempReg_29;
#line 633 "llds_to_x86_64.m"
          MR_String ll_backend__llds_to_x86_64__RvalStr_30;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__MemRef_31;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__LoadAddr_32;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__SetTag_33;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_36_36;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_48_48;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_49_49;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_50_50;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_51_51;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_52_52;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_53_53;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_54_54;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_55_55;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_56_56;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_57_57;
#line 633 "llds_to_x86_64.m"
          MR_Word ll_backend__llds_to_x86_64__V_59_59;

#line 633 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 634 "llds_to_x86_64.m"
          {
#line 634 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_36_36, ll_backend__llds_to_x86_64__Rval_21, &ll_backend__llds_to_x86_64__Res0_23, &ll_backend__llds_to_x86_64__Res1_24);
          }
#line 638 "llds_to_x86_64.m"
          if ((ll_backend__llds_to_x86_64__Res0_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "llds_to_x86_64.m"
            if ((ll_backend__llds_to_x86_64__Res1_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 645 "llds_to_x86_64.m"
              {
#line 646 "llds_to_x86_64.m"
                {
#line 646 "llds_to_x86_64.m"
                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "mkword Rval");
#line 646 "llds_to_x86_64.m"
                  return;
                }
#line 645 "llds_to_x86_64.m"
              }
#line 639 "llds_to_x86_64.m"
            else
#line 641 "llds_to_x86_64.m"
              {
#line 641 "llds_to_x86_64.m"
                MR_Word ll_backend__llds_to_x86_64__RvalInstrs_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_24, (MR_Integer) 0)));

#line 642 "llds_to_x86_64.m"
                {
#line 642 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_27, &ll_backend__llds_to_x86_64__RvalOp_25);
                }
#line 643 "llds_to_x86_64.m"
                {
#line 643 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__Instr0_26 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__RvalInstrs_27, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[30]));
                }
#line 641 "llds_to_x86_64.m"
              }
#line 638 "llds_to_x86_64.m"
          else
#line 636 "llds_to_x86_64.m"
            {
#line 636 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__RvalOp_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_23, (MR_Integer) 0)));
#line 637 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__Instr0_26 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[30]);
#line 636 "llds_to_x86_64.m"
            }
#line 649 "llds_to_x86_64.m"
          {
#line 649 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__ScratchReg_28 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_36_36);
          }
#line 650 "llds_to_x86_64.m"
          {
#line 650 "llds_to_x86_64.m"
            ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_36_36, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
          }
#line 651 "llds_to_x86_64.m"
          {
#line 651 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__TempReg_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 651 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__TempReg_29, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_28));
#line 651 "llds_to_x86_64.m"
          }
#line 652 "llds_to_x86_64.m"
          {
#line 652 "llds_to_x86_64.m"
            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__llds_to_x86_64__RvalOp_25, &ll_backend__llds_to_x86_64__RvalStr_30);
          }
#line 653 "llds_to_x86_64.m"
          {
#line 653 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_49_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_49_49, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalStr_30));
#line 653 "llds_to_x86_64.m"
          }
#line 653 "llds_to_x86_64.m"
          {
#line 653 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 653 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_48_48, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_49_49));
#line 653 "llds_to_x86_64.m"
          }
#line 653 "llds_to_x86_64.m"
          {
#line 653 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__MemRef_31 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__MemRef_31, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_48_48));
#line 653 "llds_to_x86_64.m"
          }
#line 654 "llds_to_x86_64.m"
          {
#line 654 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 654 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_50_50, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 654 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_50_50, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__MemRef_31));
#line 654 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_50_50, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_29));
#line 654 "llds_to_x86_64.m"
          }
#line 654 "llds_to_x86_64.m"
          {
#line 654 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__LoadAddr_32 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LoadAddr_32, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_50_50));
#line 654 "llds_to_x86_64.m"
          }
#line 655 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_54_54 = (MR_Word) ll_backend__llds_to_x86_64__Tag_20;
#line 655 "llds_to_x86_64.m"
          {
#line 655 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_53_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_53_53, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_54_54));
#line 655 "llds_to_x86_64.m"
          }
#line 655 "llds_to_x86_64.m"
          {
#line 655 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_52_52, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_53_53));
#line 655 "llds_to_x86_64.m"
          }
#line 655 "llds_to_x86_64.m"
          {
#line 655 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_51_51 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 655 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_51_51, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_52_52));
#line 655 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_51_51, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_29));
#line 655 "llds_to_x86_64.m"
          }
#line 655 "llds_to_x86_64.m"
          {
#line 655 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__SetTag_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__SetTag_33, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_51_51));
#line 655 "llds_to_x86_64.m"
          }
#line 4619 "ll_backend.llds_to_x86_64.c"
          ll_backend__llds_to_x86_64__TypeCtorInfo_300_300 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 656 "llds_to_x86_64.m"
          {
#line 656 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_57_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_57_57, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LoadAddr_32));
#line 656 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_57_57, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "llds_to_x86_64.m"
          }
#line 656 "llds_to_x86_64.m"
          {
#line 656 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_59_59, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__SetTag_33));
#line 656 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_59_59, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 656 "llds_to_x86_64.m"
          }
#line 656 "llds_to_x86_64.m"
          {
#line 656 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_56_56 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_300_300, ll_backend__llds_to_x86_64__V_57_57, ll_backend__llds_to_x86_64__V_59_59);
          }
#line 656 "llds_to_x86_64.m"
          {
#line 656 "llds_to_x86_64.m"
            ll_backend__llds_to_x86_64__V_55_55 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_300_300, ll_backend__llds_to_x86_64__Instr0_26, ll_backend__llds_to_x86_64__V_56_56);
          }
#line 656 "llds_to_x86_64.m"
          {
#line 656 "llds_to_x86_64.m"
            MR_Word base;
#line 656 "llds_to_x86_64.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 656 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 656 "llds_to_x86_64.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_55_55));
#line 656 "llds_to_x86_64.m"
          }
#line 633 "llds_to_x86_64.m"
        }
#line 630 "llds_to_x86_64.m"
      else
#line 630 "llds_to_x86_64.m"
        if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 632 "llds_to_x86_64.m"
          {
#line 632 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[30]);
#line 632 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 632 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 632 "llds_to_x86_64.m"
          }
#line 630 "llds_to_x86_64.m"
        else
#line 630 "llds_to_x86_64.m"
          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 695 "llds_to_x86_64.m"
            {
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Op_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Rval1_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 2)));
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Rval2_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 3)));
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Res1_173;
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Res2_174;
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Res3_175;
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__Res4_176;
#line 695 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_184_184;

#line 695 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 696 "llds_to_x86_64.m"
              {
#line 696 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_184_184, ll_backend__llds_to_x86_64__Rval1_170, &ll_backend__llds_to_x86_64__Res1_173, &ll_backend__llds_to_x86_64__Res2_174);
              }
#line 697 "llds_to_x86_64.m"
              {
#line 697 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_184_184, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval2_171, &ll_backend__llds_to_x86_64__Res3_175, &ll_backend__llds_to_x86_64__Res4_176);
              }
#line 717 "llds_to_x86_64.m"
              if ((ll_backend__llds_to_x86_64__Res1_173 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 718 "llds_to_x86_64.m"
                if ((ll_backend__llds_to_x86_64__Res2_174 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 741 "llds_to_x86_64.m"
                  {
#line 742 "llds_to_x86_64.m"
                    {
#line 742 "llds_to_x86_64.m"
                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "binop: Rval1");
#line 742 "llds_to_x86_64.m"
                      return;
                    }
#line 741 "llds_to_x86_64.m"
                  }
#line 718 "llds_to_x86_64.m"
                else
#line 720 "llds_to_x86_64.m"
                  {
#line 720 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__RvalInstr1_181 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_174, (MR_Integer) 0)));

#line 727 "llds_to_x86_64.m"
                    if ((ll_backend__llds_to_x86_64__Res3_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 728 "llds_to_x86_64.m"
                      if ((ll_backend__llds_to_x86_64__Res4_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 736 "llds_to_x86_64.m"
                        {
#line 737 "llds_to_x86_64.m"
                          {
#line 737 "llds_to_x86_64.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "binop: Rval2");
#line 737 "llds_to_x86_64.m"
                            return;
                          }
#line 736 "llds_to_x86_64.m"
                        }
#line 728 "llds_to_x86_64.m"
                      else
#line 730 "llds_to_x86_64.m"
                        {
#line 730 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_192_192;
#line 730 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__Instrs0_201;
#line 730 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__RvalInstr2_202 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res4_176, (MR_Integer) 0)));

#line 731 "llds_to_x86_64.m"
                          {
#line 731 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_192_192 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 731 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_192_192, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalInstr1_181));
#line 731 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_192_192, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalInstr2_202));
#line 731 "llds_to_x86_64.m"
                          }
#line 731 "llds_to_x86_64.m"
                          {
#line 731 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__binop_instrs_3_p_0(ll_backend__llds_to_x86_64__V_192_192, ll_backend__llds_to_x86_64__Op_169, &ll_backend__llds_to_x86_64__Instrs0_201);
                          }
#line 734 "llds_to_x86_64.m"
                          {
#line 734 "llds_to_x86_64.m"
                            MR_Word base;
#line 734 "llds_to_x86_64.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 734 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 734 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs0_201));
#line 734 "llds_to_x86_64.m"
                          }
#line 730 "llds_to_x86_64.m"
                        }
#line 727 "llds_to_x86_64.m"
                    else
#line 722 "llds_to_x86_64.m"
                      {
#line 722 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_193_193;
#line 722 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Val2_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_175, (MR_Integer) 0)));
#line 722 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instrs0_200;

#line 723 "llds_to_x86_64.m"
                        {
#line 723 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_193_193 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_193_193, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalInstr1_181));
#line 723 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_193_193, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Val2_199));
#line 723 "llds_to_x86_64.m"
                        }
#line 723 "llds_to_x86_64.m"
                        {
#line 723 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__binop_instrs_3_p_0(ll_backend__llds_to_x86_64__V_193_193, ll_backend__llds_to_x86_64__Op_169, &ll_backend__llds_to_x86_64__Instrs0_200);
                        }
#line 726 "llds_to_x86_64.m"
                        {
#line 726 "llds_to_x86_64.m"
                          MR_Word base;
#line 726 "llds_to_x86_64.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 726 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 726 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs0_200));
#line 726 "llds_to_x86_64.m"
                        }
#line 722 "llds_to_x86_64.m"
                      }
#line 720 "llds_to_x86_64.m"
                  }
#line 717 "llds_to_x86_64.m"
              else
#line 699 "llds_to_x86_64.m"
                {
#line 699 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Val1_177 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_173, (MR_Integer) 0)));

#line 704 "llds_to_x86_64.m"
                  if ((ll_backend__llds_to_x86_64__Res3_175 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 705 "llds_to_x86_64.m"
                    if ((ll_backend__llds_to_x86_64__Res4_176 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 705 "llds_to_x86_64.m"
                    else
#line 707 "llds_to_x86_64.m"
                      {
#line 707 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__RvalInstr2_180 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res4_176, (MR_Integer) 0)));
#line 707 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_194_194;
#line 707 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instrs0_196;

#line 708 "llds_to_x86_64.m"
                        {
#line 708 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_194_194 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 708 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_194_194, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Val1_177));
#line 708 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_194_194, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalInstr2_180));
#line 708 "llds_to_x86_64.m"
                        }
#line 708 "llds_to_x86_64.m"
                        {
#line 708 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__binop_instrs_3_p_0(ll_backend__llds_to_x86_64__V_194_194, ll_backend__llds_to_x86_64__Op_169, &ll_backend__llds_to_x86_64__Instrs0_196);
                        }
#line 711 "llds_to_x86_64.m"
                        {
#line 711 "llds_to_x86_64.m"
                          MR_Word base;
#line 711 "llds_to_x86_64.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 711 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 711 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs0_196));
#line 711 "llds_to_x86_64.m"
                        }
#line 707 "llds_to_x86_64.m"
                      }
#line 704 "llds_to_x86_64.m"
                  else
#line 701 "llds_to_x86_64.m"
                    {
#line 701 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Val2_178 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_175, (MR_Integer) 0)));
#line 701 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Instrs0_179;
#line 701 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_195_195;

#line 702 "llds_to_x86_64.m"
                      {
#line 702 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_195_195 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 702 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_195_195, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Val1_177));
#line 702 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_195_195, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Val2_178));
#line 702 "llds_to_x86_64.m"
                      }
#line 702 "llds_to_x86_64.m"
                      {
#line 702 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__binop_instrs_3_p_0(ll_backend__llds_to_x86_64__V_195_195, ll_backend__llds_to_x86_64__Op_169, &ll_backend__llds_to_x86_64__Instrs0_179);
                      }
#line 703 "llds_to_x86_64.m"
                      {
#line 703 "llds_to_x86_64.m"
                        MR_Word base;
#line 703 "llds_to_x86_64.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 703 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 703 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs0_179));
#line 703 "llds_to_x86_64.m"
                      }
#line 701 "llds_to_x86_64.m"
                    }
#line 699 "llds_to_x86_64.m"
                }
#line 695 "llds_to_x86_64.m"
            }
#line 630 "llds_to_x86_64.m"
          else
#line 630 "llds_to_x86_64.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 630 "llds_to_x86_64.m"
              {
#line 630 "llds_to_x86_64.m"
                MR_Word ll_backend__llds_to_x86_64__V_303_303 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 630 "llds_to_x86_64.m"
                if ((ll_backend__llds_to_x86_64__V_303_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 661 "llds_to_x86_64.m"
                  {
#line 661 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 662 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[31]);
#line 661 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 661 "llds_to_x86_64.m"
                  }
#line 630 "llds_to_x86_64.m"
                else
#line 630 "llds_to_x86_64.m"
                  if ((ll_backend__llds_to_x86_64__V_303_303 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 659 "llds_to_x86_64.m"
                    {
#line 659 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 660 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[32]);
#line 659 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 659 "llds_to_x86_64.m"
                    }
#line 630 "llds_to_x86_64.m"
                  else
#line 630 "llds_to_x86_64.m"
                    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_303_303)) == (MR_mktag((MR_Integer) 2))))
#line 665 "llds_to_x86_64.m"
                      {
#line 666 "llds_to_x86_64.m"
                        {
#line 666 "llds_to_x86_64.m"
                          mercury__require__sorry_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "x86_64 backend and foreign tags.");
#line 666 "llds_to_x86_64.m"
                          return;
                        }
#line 665 "llds_to_x86_64.m"
                      }
#line 630 "llds_to_x86_64.m"
                    else
#line 630 "llds_to_x86_64.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_303_303)) == (MR_mktag((MR_Integer) 1))))
#line 663 "llds_to_x86_64.m"
                        {
#line 663 "llds_to_x86_64.m"
                          MR_Integer ll_backend__llds_to_x86_64__Val_85 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 0)));
#line 663 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_90_90;
#line 663 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_91_91;
#line 663 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_92_92;

#line 663 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 664 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_92_92 = (MR_Word) ll_backend__llds_to_x86_64__Val_85;
#line 664 "llds_to_x86_64.m"
                          {
#line 664 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_91_91 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_91_91, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_92_92));
#line 664 "llds_to_x86_64.m"
                          }
#line 664 "llds_to_x86_64.m"
                          {
#line 664 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_90_90 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_90_90, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_91_91));
#line 664 "llds_to_x86_64.m"
                          }
#line 664 "llds_to_x86_64.m"
                          {
#line 664 "llds_to_x86_64.m"
                            MR_Word base;
#line 664 "llds_to_x86_64.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 664 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 664 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_90_90));
#line 664 "llds_to_x86_64.m"
                          }
#line 663 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 663 "llds_to_x86_64.m"
                        }
#line 630 "llds_to_x86_64.m"
                      else
#line 630 "llds_to_x86_64.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_303_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 673 "llds_to_x86_64.m"
                          {
#line 673 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__CodeAddr_132 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 1)));
#line 673 "llds_to_x86_64.m"
                            MR_String ll_backend__llds_to_x86_64__CodeAddrType_134;
#line 673 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_138_138;

#line 673 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 674 "llds_to_x86_64.m"
                            {
#line 674 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__code_addr_type_2_p_0(ll_backend__llds_to_x86_64__CodeAddr_132, &ll_backend__llds_to_x86_64__CodeAddrType_134);
                            }
#line 675 "llds_to_x86_64.m"
                            {
#line 675 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 675 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_138_138, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 675 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_138_138, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__CodeAddrType_134));
#line 675 "llds_to_x86_64.m"
                            }
#line 675 "llds_to_x86_64.m"
                            {
#line 675 "llds_to_x86_64.m"
                              MR_Word base;
#line 675 "llds_to_x86_64.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 675 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 675 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_138_138));
#line 675 "llds_to_x86_64.m"
                            }
#line 673 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 673 "llds_to_x86_64.m"
                          }
#line 630 "llds_to_x86_64.m"
                        else
#line 630 "llds_to_x86_64.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_303_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 676 "llds_to_x86_64.m"
                            {
#line 676 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 677 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[33]);
#line 676 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 676 "llds_to_x86_64.m"
                            }
#line 630 "llds_to_x86_64.m"
                          else
#line 630 "llds_to_x86_64.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_303_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 667 "llds_to_x86_64.m"
                              {
#line 667 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 668 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[34]);
#line 667 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 667 "llds_to_x86_64.m"
                              }
#line 630 "llds_to_x86_64.m"
                            else
#line 630 "llds_to_x86_64.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_303_303)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 671 "llds_to_x86_64.m"
                                {
#line 671 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 672 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[35]);
#line 671 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 671 "llds_to_x86_64.m"
                                }
#line 630 "llds_to_x86_64.m"
                              else
#line 669 "llds_to_x86_64.m"
                                {
#line 669 "llds_to_x86_64.m"
                                  MR_String ll_backend__llds_to_x86_64__String_113 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_303_303, (MR_Integer) 1)));
#line 669 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__Op_114;
#line 669 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_118_118;
#line 669 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_119_119;
#line 669 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_120_120;

#line 669 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 670 "llds_to_x86_64.m"
                                  {
#line 670 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_120_120 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_120_120, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__String_113));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_120_120, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "llds_to_x86_64.m"
                                  }
#line 670 "llds_to_x86_64.m"
                                  {
#line 670 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_119_119 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_119_119, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 56));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_119_119, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_120_120));
#line 670 "llds_to_x86_64.m"
                                  }
#line 670 "llds_to_x86_64.m"
                                  {
#line 670 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_118_118 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_118_118, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_119_119));
#line 670 "llds_to_x86_64.m"
                                  }
#line 670 "llds_to_x86_64.m"
                                  {
#line 670 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__Op_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Op_114, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_118_118));
#line 670 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Op_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 670 "llds_to_x86_64.m"
                                  }
#line 669 "llds_to_x86_64.m"
                                  {
#line 669 "llds_to_x86_64.m"
                                    MR_Word base;
#line 669 "llds_to_x86_64.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 669 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 669 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Op_114));
#line 669 "llds_to_x86_64.m"
                                  }
#line 669 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 669 "llds_to_x86_64.m"
                                }
#line 630 "llds_to_x86_64.m"
              }
#line 630 "llds_to_x86_64.m"
            else
#line 630 "llds_to_x86_64.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 630 "llds_to_x86_64.m"
                {
#line 630 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__V_304_304 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 630 "llds_to_x86_64.m"
                  if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_304_304)) == (MR_mktag((MR_Integer) 1))))
#line 747 "llds_to_x86_64.m"
                    {
#line 747 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Rval_228 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_304_304, (MR_Integer) 0)));
#line 748 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_230_230;

#line 747 "llds_to_x86_64.m"
                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 748 "llds_to_x86_64.m"
                      {
#line 748 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_228, ll_backend__llds_to_x86_64__HeadVar__4_4, &ll_backend__llds_to_x86_64__V_230_230);
                      }
#line 747 "llds_to_x86_64.m"
                    }
#line 630 "llds_to_x86_64.m"
                  else
#line 630 "llds_to_x86_64.m"
                    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__V_304_304)) == (MR_mktag((MR_Integer) 2))))
#line 750 "llds_to_x86_64.m"
                      {
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_302_302;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Rval1_236 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_304_304, (MR_Integer) 0)));
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__MaybeTag_237 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_304_304, (MR_Integer) 1)));
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Rval2_238 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_304_304, (MR_Integer) 2)));
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Res0_240;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Res1_241;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Res2_242;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Res3_243;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Rval1Op_244;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Rval2Op_245;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instrs0_246;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__ScratchReg_249;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__TempReg_250;
#line 750 "llds_to_x86_64.m"
                        MR_String ll_backend__llds_to_x86_64__Rval1Str_251;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__MemRef_252;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__LoadAddr_253;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instr0_254;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instr1_256;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_260_260;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_261_261;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_272_272;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_273_273;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_274_274;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_275_275;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_283_283;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_284_284;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_285_285;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_287_287;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_288_288;
#line 750 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_290_290;

#line 750 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 751 "llds_to_x86_64.m"
                        {
#line 751 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_260_260, ll_backend__llds_to_x86_64__Rval1_236, &ll_backend__llds_to_x86_64__Res0_240, &ll_backend__llds_to_x86_64__Res1_241);
                        }
#line 752 "llds_to_x86_64.m"
                        {
#line 752 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_260_260, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_261_261, ll_backend__llds_to_x86_64__Rval2_238, &ll_backend__llds_to_x86_64__Res2_242, &ll_backend__llds_to_x86_64__Res3_243);
                        }
#line 769 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__Res0_240 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "llds_to_x86_64.m"
                          if ((ll_backend__llds_to_x86_64__Res1_241 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 789 "llds_to_x86_64.m"
                            {
#line 790 "llds_to_x86_64.m"
                              {
#line 790 "llds_to_x86_64.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "mem_addr(heap_ref): Rval1");
#line 790 "llds_to_x86_64.m"
                                return;
                              }
#line 789 "llds_to_x86_64.m"
                            }
#line 770 "llds_to_x86_64.m"
                          else
#line 772 "llds_to_x86_64.m"
                            {
#line 772 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Rval1Instr_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_241, (MR_Integer) 0)));

#line 773 "llds_to_x86_64.m"
                              {
#line 773 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__Rval1Instr_248, &ll_backend__llds_to_x86_64__Rval1Op_244);
                              }
#line 777 "llds_to_x86_64.m"
                              if ((ll_backend__llds_to_x86_64__Res2_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 778 "llds_to_x86_64.m"
                                if ((ll_backend__llds_to_x86_64__Res3_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "llds_to_x86_64.m"
                                  {
#line 785 "llds_to_x86_64.m"
                                    {
#line 785 "llds_to_x86_64.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "mem_addr(heap_ref): Rval2");
#line 785 "llds_to_x86_64.m"
                                      return;
                                    }
#line 784 "llds_to_x86_64.m"
                                  }
#line 778 "llds_to_x86_64.m"
                                else
#line 780 "llds_to_x86_64.m"
                                  {
#line 780 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__Rval2Instr_292 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_243, (MR_Integer) 0)));

#line 781 "llds_to_x86_64.m"
                                    {
#line 781 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__Rval2Instr_292, &ll_backend__llds_to_x86_64__Rval2Op_245);
                                    }
#line 782 "llds_to_x86_64.m"
                                    {
#line 782 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__Instrs0_246 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__Rval1Instr_248, ll_backend__llds_to_x86_64__Rval2Instr_292);
                                    }
#line 780 "llds_to_x86_64.m"
                                  }
#line 777 "llds_to_x86_64.m"
                              else
#line 775 "llds_to_x86_64.m"
                                {
#line 775 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__Rval2Op_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_242, (MR_Integer) 0)));
#line 776 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__Instrs0_246 = ll_backend__llds_to_x86_64__Rval1Instr_248;
#line 775 "llds_to_x86_64.m"
                                }
#line 772 "llds_to_x86_64.m"
                            }
#line 769 "llds_to_x86_64.m"
                        else
#line 754 "llds_to_x86_64.m"
                          {
#line 754 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__Rval1Op_244 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_240, (MR_Integer) 0)));
#line 758 "llds_to_x86_64.m"
                            if ((ll_backend__llds_to_x86_64__Res2_242 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 759 "llds_to_x86_64.m"
                              if ((ll_backend__llds_to_x86_64__Res3_243 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 765 "llds_to_x86_64.m"
                                {
#line 766 "llds_to_x86_64.m"
                                  {
#line 766 "llds_to_x86_64.m"
                                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "mem_addr(heap_ref): Rval2");
#line 766 "llds_to_x86_64.m"
                                    return;
                                  }
#line 765 "llds_to_x86_64.m"
                                }
#line 759 "llds_to_x86_64.m"
                              else
#line 761 "llds_to_x86_64.m"
                                {
#line 761 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__Instrs0_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_243, (MR_Integer) 0)));
#line 763 "llds_to_x86_64.m"
                                  {
#line 763 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__Instrs0_246, &ll_backend__llds_to_x86_64__Rval2Op_245);
                                  }
#line 761 "llds_to_x86_64.m"
                                }
#line 758 "llds_to_x86_64.m"
                            else
#line 756 "llds_to_x86_64.m"
                              {
#line 756 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__Rval2Op_245 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_242, (MR_Integer) 0)));
#line 757 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__Instrs0_246 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 756 "llds_to_x86_64.m"
                              }
#line 754 "llds_to_x86_64.m"
                          }
#line 793 "llds_to_x86_64.m"
                        {
#line 793 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__ScratchReg_249 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_261_261);
                        }
#line 794 "llds_to_x86_64.m"
                        {
#line 794 "llds_to_x86_64.m"
                          ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_261_261, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
                        }
#line 795 "llds_to_x86_64.m"
                        {
#line 795 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__TempReg_250 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 795 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__TempReg_250, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_249));
#line 795 "llds_to_x86_64.m"
                        }
#line 796 "llds_to_x86_64.m"
                        {
#line 796 "llds_to_x86_64.m"
                          ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__llds_to_x86_64__Rval1Op_244, &ll_backend__llds_to_x86_64__Rval1Str_251);
                        }
#line 797 "llds_to_x86_64.m"
                        {
#line 797 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_273_273 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_273_273, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Rval1Str_251));
#line 797 "llds_to_x86_64.m"
                        }
#line 797 "llds_to_x86_64.m"
                        {
#line 797 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_272_272 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 797 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_272_272, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_273_273));
#line 797 "llds_to_x86_64.m"
                        }
#line 797 "llds_to_x86_64.m"
                        {
#line 797 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__MemRef_252 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 797 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__MemRef_252, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_272_272));
#line 797 "llds_to_x86_64.m"
                        }
#line 798 "llds_to_x86_64.m"
                        {
#line 798 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_274_274 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 798 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_274_274, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 798 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_274_274, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__MemRef_252));
#line 798 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_274_274, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_250));
#line 798 "llds_to_x86_64.m"
                        }
#line 798 "llds_to_x86_64.m"
                        {
#line 798 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__LoadAddr_253 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 798 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LoadAddr_253, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_274_274));
#line 798 "llds_to_x86_64.m"
                        }
#line 799 "llds_to_x86_64.m"
                        {
#line 799 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_275_275 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 799 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_275_275, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 45));
#line 799 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_275_275, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Rval2Op_245));
#line 799 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_275_275, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_250));
#line 799 "llds_to_x86_64.m"
                        }
#line 799 "llds_to_x86_64.m"
                        {
#line 799 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__Instr0_254 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 799 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr0_254, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_275_275));
#line 799 "llds_to_x86_64.m"
                        }
#line 803 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__MaybeTag_237 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 804 "llds_to_x86_64.m"
                          {
#line 805 "llds_to_x86_64.m"
                            {
#line 805 "llds_to_x86_64.m"
                              mercury__require__sorry_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "unknown tag");
#line 805 "llds_to_x86_64.m"
                              return;
                            }
#line 804 "llds_to_x86_64.m"
                          }
#line 803 "llds_to_x86_64.m"
                        else
#line 801 "llds_to_x86_64.m"
                          {
#line 801 "llds_to_x86_64.m"
                            MR_Integer ll_backend__llds_to_x86_64__Tag_255 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__MaybeTag_237, (MR_Integer) 0)));
#line 801 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_279_279;
#line 801 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_280_280;
#line 801 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_281_281;
#line 801 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_282_282 = (MR_Word) ll_backend__llds_to_x86_64__Tag_255;

#line 802 "llds_to_x86_64.m"
                            {
#line 802 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_281_281 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_281_281, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_282_282));
#line 802 "llds_to_x86_64.m"
                            }
#line 802 "llds_to_x86_64.m"
                            {
#line 802 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_280_280 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_280_280, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_281_281));
#line 802 "llds_to_x86_64.m"
                            }
#line 802 "llds_to_x86_64.m"
                            {
#line 802 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_279_279 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 802 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_279_279, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_280_280));
#line 802 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_279_279, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_250));
#line 802 "llds_to_x86_64.m"
                            }
#line 802 "llds_to_x86_64.m"
                            {
#line 802 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__Instr1_256 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 802 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_256, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_279_279));
#line 802 "llds_to_x86_64.m"
                            }
#line 801 "llds_to_x86_64.m"
                          }
#line 5568 "ll_backend.llds_to_x86_64.c"
                        ll_backend__llds_to_x86_64__TypeCtorInfo_302_302 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_285_285 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_285_285, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LoadAddr_253));
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_285_285, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "llds_to_x86_64.m"
                        }
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_288_288 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_288_288, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr0_254));
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_288_288, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "llds_to_x86_64.m"
                        }
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_290_290 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_290_290, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_256));
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_290_290, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 807 "llds_to_x86_64.m"
                        }
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_287_287 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_302_302, ll_backend__llds_to_x86_64__V_288_288, ll_backend__llds_to_x86_64__V_290_290);
                        }
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_284_284 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_302_302, ll_backend__llds_to_x86_64__V_285_285, ll_backend__llds_to_x86_64__V_287_287);
                        }
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_283_283 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_302_302, ll_backend__llds_to_x86_64__Instrs0_246, ll_backend__llds_to_x86_64__V_284_284);
                        }
#line 807 "llds_to_x86_64.m"
                        {
#line 807 "llds_to_x86_64.m"
                          MR_Word base;
#line 807 "llds_to_x86_64.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 807 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 807 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_283_283));
#line 807 "llds_to_x86_64.m"
                        }
#line 750 "llds_to_x86_64.m"
                      }
#line 630 "llds_to_x86_64.m"
                    else
#line 745 "llds_to_x86_64.m"
                      {
#line 745 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Rval_220 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_304_304, (MR_Integer) 0)));
#line 746 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_222_222;

#line 745 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 746 "llds_to_x86_64.m"
                        {
#line 746 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_220, ll_backend__llds_to_x86_64__HeadVar__4_4, &ll_backend__llds_to_x86_64__V_222_222);
                        }
#line 745 "llds_to_x86_64.m"
                      }
#line 630 "llds_to_x86_64.m"
                }
#line 630 "llds_to_x86_64.m"
              else
#line 630 "llds_to_x86_64.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 657 "llds_to_x86_64.m"
                  {
#line 658 "llds_to_x86_64.m"
                    {
#line 658 "llds_to_x86_64.m"
                      mercury__require__sorry_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "mkword_hole");
#line 658 "llds_to_x86_64.m"
                      return;
                    }
#line 657 "llds_to_x86_64.m"
                  }
#line 630 "llds_to_x86_64.m"
                else
#line 678 "llds_to_x86_64.m"
                  {
#line 678 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__Op_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 678 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__Rval_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 2)));
#line 678 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__Res0_152;
#line 678 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__Res1_153;

#line 678 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 679 "llds_to_x86_64.m"
                    {
#line 679 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_150, &ll_backend__llds_to_x86_64__Res0_152, &ll_backend__llds_to_x86_64__Res1_153);
                    }
#line 684 "llds_to_x86_64.m"
                    if ((ll_backend__llds_to_x86_64__Res0_152 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "llds_to_x86_64.m"
                      if ((ll_backend__llds_to_x86_64__Res1_153 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "llds_to_x86_64.m"
                        {
#line 692 "llds_to_x86_64.m"
                          {
#line 692 "llds_to_x86_64.m"
                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_rval\'/5", (MR_String) "unop: Rval");
#line 692 "llds_to_x86_64.m"
                            return;
                          }
#line 691 "llds_to_x86_64.m"
                        }
#line 685 "llds_to_x86_64.m"
                      else
#line 687 "llds_to_x86_64.m"
                        {
#line 687 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__Instrs0_165;

#line 688 "llds_to_x86_64.m"
                          {
#line 688 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__unop_instrs_4_p_0(ll_backend__llds_to_x86_64__Op_149, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__llds_to_x86_64__Res1_153, &ll_backend__llds_to_x86_64__Instrs0_165);
                          }
#line 689 "llds_to_x86_64.m"
                          {
#line 689 "llds_to_x86_64.m"
                            MR_Word base;
#line 689 "llds_to_x86_64.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 689 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 689 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs0_165));
#line 689 "llds_to_x86_64.m"
                          }
#line 687 "llds_to_x86_64.m"
                        }
#line 684 "llds_to_x86_64.m"
                    else
#line 681 "llds_to_x86_64.m"
                      {
#line 681 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instrs0_155;

#line 682 "llds_to_x86_64.m"
                        {
#line 682 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__unop_instrs_4_p_0(ll_backend__llds_to_x86_64__Op_149, ll_backend__llds_to_x86_64__Res0_152, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_to_x86_64__Instrs0_155);
                        }
#line 683 "llds_to_x86_64.m"
                        {
#line 683 "llds_to_x86_64.m"
                          MR_Word base;
#line 683 "llds_to_x86_64.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 683 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 683 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs0_155));
#line 683 "llds_to_x86_64.m"
                        }
#line 681 "llds_to_x86_64.m"
                      }
#line 678 "llds_to_x86_64.m"
                  }
#line 630 "llds_to_x86_64.m"
  }
#line 627 "llds_to_x86_64.m"
}

#line 486 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_lval_5_p_0(
#line 486 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 486 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2,
#line 486 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__3_3,
#line 486 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__4_4,
#line 486 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__5_5)
#line 486 "llds_to_x86_64.m"
{
#line 489 "llds_to_x86_64.m"
  while (MR_TRUE)
#line 489 "llds_to_x86_64.m"
    {
#line 489 "llds_to_x86_64.m"
      /* tailcall optimized into a loop */
#line 489 "llds_to_x86_64.m"
      {
#line 489 "llds_to_x86_64.m"
        MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 489 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 506 "llds_to_x86_64.m"
          {
#line 507 "llds_to_x86_64.m"
            {
#line 507 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)), ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
            }
#line 508 "llds_to_x86_64.m"
            {
#line 508 "llds_to_x86_64.m"
              ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
#line 508 "llds_to_x86_64.m"
              return;
            }
#line 506 "llds_to_x86_64.m"
          }
#line 489 "llds_to_x86_64.m"
        else
#line 489 "llds_to_x86_64.m"
          if ((ll_backend__llds_to_x86_64__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 509 "llds_to_x86_64.m"
            {
#line 510 "llds_to_x86_64.m"
              {
#line 510 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
              }
#line 511 "llds_to_x86_64.m"
              {
#line 511 "llds_to_x86_64.m"
                ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
#line 511 "llds_to_x86_64.m"
                return;
              }
#line 509 "llds_to_x86_64.m"
            }
#line 489 "llds_to_x86_64.m"
          else
#line 489 "llds_to_x86_64.m"
            if ((ll_backend__llds_to_x86_64__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 503 "llds_to_x86_64.m"
              {
#line 504 "llds_to_x86_64.m"
                {
#line 504 "llds_to_x86_64.m"
                  ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
                }
#line 505 "llds_to_x86_64.m"
                {
#line 505 "llds_to_x86_64.m"
                  ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
#line 505 "llds_to_x86_64.m"
                  return;
                }
#line 503 "llds_to_x86_64.m"
              }
#line 489 "llds_to_x86_64.m"
            else
#line 489 "llds_to_x86_64.m"
              if ((ll_backend__llds_to_x86_64__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 515 "llds_to_x86_64.m"
                {
#line 516 "llds_to_x86_64.m"
                  {
#line 516 "llds_to_x86_64.m"
                    mercury__require__sorry_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", (MR_String) "parallelism is not supported");
#line 516 "llds_to_x86_64.m"
                    return;
                  }
#line 515 "llds_to_x86_64.m"
                }
#line 489 "llds_to_x86_64.m"
              else
#line 489 "llds_to_x86_64.m"
                if ((ll_backend__llds_to_x86_64__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 512 "llds_to_x86_64.m"
                  {
#line 513 "llds_to_x86_64.m"
                    {
#line 513 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)), ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
                    }
#line 514 "llds_to_x86_64.m"
                    {
#line 514 "llds_to_x86_64.m"
                      ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
#line 514 "llds_to_x86_64.m"
                      return;
                    }
#line 512 "llds_to_x86_64.m"
                  }
#line 489 "llds_to_x86_64.m"
                else
#line 489 "llds_to_x86_64.m"
                  if ((ll_backend__llds_to_x86_64__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 500 "llds_to_x86_64.m"
                    {
#line 501 "llds_to_x86_64.m"
                      {
#line 501 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
                      }
#line 502 "llds_to_x86_64.m"
                      {
#line 502 "llds_to_x86_64.m"
                        ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
#line 502 "llds_to_x86_64.m"
                        return;
                      }
#line 500 "llds_to_x86_64.m"
                    }
#line 489 "llds_to_x86_64.m"
                  else
#line 489 "llds_to_x86_64.m"
                    if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 489 "llds_to_x86_64.m"
                      {
#line 489 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__CReg_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 489 "llds_to_x86_64.m"
                        MR_Integer ll_backend__llds_to_x86_64__CRegNum_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 496 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__CReg_7 == (MR_Integer) 1))
#line 497 "llds_to_x86_64.m"
                          {
#line 498 "llds_to_x86_64.m"
                            {
#line 498 "llds_to_x86_64.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", (MR_String) "llds reg_f");
#line 498 "llds_to_x86_64.m"
                              return;
                            }
#line 497 "llds_to_x86_64.m"
                          }
#line 496 "llds_to_x86_64.m"
                        else
#line 491 "llds_to_x86_64.m"
                          {
#line 494 "llds_to_x86_64.m"
                            {
#line 494 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__HeadVar__3_3, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
                            }
#line 495 "llds_to_x86_64.m"
                            {
#line 495 "llds_to_x86_64.m"
                              ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
#line 495 "llds_to_x86_64.m"
                              return;
                            }
#line 491 "llds_to_x86_64.m"
                          }
#line 489 "llds_to_x86_64.m"
                      }
#line 489 "llds_to_x86_64.m"
                    else
#line 489 "llds_to_x86_64.m"
                      if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 517 "llds_to_x86_64.m"
                        {
#line 517 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__CReg_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)));
#line 517 "llds_to_x86_64.m"
                          MR_Integer ll_backend__llds_to_x86_64__CRegNum_63 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 517 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_69_69;

#line 518 "llds_to_x86_64.m"
                          {
#line 518 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_69_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_69_69, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__CReg_62));
#line 518 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_69_69, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__CRegNum_63));
#line 518 "llds_to_x86_64.m"
                          }
#line 518 "llds_to_x86_64.m"
                          /* direct tailcall eliminated */
#line 518 "llds_to_x86_64.m"
                          {
#line 518 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__HeadVar__3__tmp_copy_3 = ll_backend__llds_to_x86_64__V_69_69;

#line 518 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__HeadVar__3_3 = ll_backend__llds_to_x86_64__HeadVar__3__tmp_copy_3;
#line 518 "llds_to_x86_64.m"
                          }
#line 518 "llds_to_x86_64.m"
                          continue;
#line 517 "llds_to_x86_64.m"
                        }
#line 489 "llds_to_x86_64.m"
                      else
#line 489 "llds_to_x86_64.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 559 "llds_to_x86_64.m"
                          {
#line 560 "llds_to_x86_64.m"
                            {
#line 560 "llds_to_x86_64.m"
                              mercury__require__sorry_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", (MR_String) "double_stackvar");
#line 560 "llds_to_x86_64.m"
                              return;
                            }
#line 559 "llds_to_x86_64.m"
                          }
#line 489 "llds_to_x86_64.m"
                        else
#line 489 "llds_to_x86_64.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 576 "llds_to_x86_64.m"
                            {
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_270_270;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Tag0_211 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Rval1_212 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 2)));
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Rval2_213 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 3)));
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Res0_215;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Res1_216;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Res2_217;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Res3_218;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__RvalOp1_219;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Instrs1_220;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__RvalOp2_222;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Instrs2_223;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__ScratchReg_225;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__TempReg1_226;
#line 576 "llds_to_x86_64.m"
                              MR_String ll_backend__llds_to_x86_64__RvalStr1_227;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__MemRef_228;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__LoadAddr_229;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__FieldNum_230;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Instrs3_231;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_236_236;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_237_237;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_245_245;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_246_246;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_247_247;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_248_248;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_249_249;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_250_250;
#line 576 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_255_255;

#line 576 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 577 "llds_to_x86_64.m"
                              {
#line 577 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_236_236, ll_backend__llds_to_x86_64__Rval1_212, &ll_backend__llds_to_x86_64__Res0_215, &ll_backend__llds_to_x86_64__Res1_216);
                              }
#line 578 "llds_to_x86_64.m"
                              {
#line 578 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_236_236, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_237_237, ll_backend__llds_to_x86_64__Rval2_213, &ll_backend__llds_to_x86_64__Res2_217, &ll_backend__llds_to_x86_64__Res3_218);
                              }
#line 582 "llds_to_x86_64.m"
                              if ((ll_backend__llds_to_x86_64__Res0_215 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 588 "llds_to_x86_64.m"
                                if ((ll_backend__llds_to_x86_64__Res1_216 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 589 "llds_to_x86_64.m"
                                  {
#line 590 "llds_to_x86_64.m"
                                    {
#line 590 "llds_to_x86_64.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", (MR_String) "field: Rval1");
#line 590 "llds_to_x86_64.m"
                                      return;
                                    }
#line 589 "llds_to_x86_64.m"
                                  }
#line 588 "llds_to_x86_64.m"
                                else
#line 585 "llds_to_x86_64.m"
                                  {
#line 585 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__Instrs1_220 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_216, (MR_Integer) 0)));
#line 586 "llds_to_x86_64.m"
                                    {
#line 586 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__Instrs1_220, &ll_backend__llds_to_x86_64__RvalOp1_219);
                                    }
#line 585 "llds_to_x86_64.m"
                                  }
#line 582 "llds_to_x86_64.m"
                              else
#line 580 "llds_to_x86_64.m"
                                {
#line 580 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__RvalOp1_219 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_215, (MR_Integer) 0)));
#line 581 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__Instrs1_220 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 580 "llds_to_x86_64.m"
                                }
#line 596 "llds_to_x86_64.m"
                              if ((ll_backend__llds_to_x86_64__Res2_217 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 602 "llds_to_x86_64.m"
                                if ((ll_backend__llds_to_x86_64__Res3_218 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 603 "llds_to_x86_64.m"
                                  {
#line 604 "llds_to_x86_64.m"
                                    {
#line 604 "llds_to_x86_64.m"
                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", (MR_String) "field: Rval2");
#line 604 "llds_to_x86_64.m"
                                      return;
                                    }
#line 603 "llds_to_x86_64.m"
                                  }
#line 602 "llds_to_x86_64.m"
                                else
#line 599 "llds_to_x86_64.m"
                                  {
#line 599 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__Instrs2_223 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_218, (MR_Integer) 0)));
#line 600 "llds_to_x86_64.m"
                                    {
#line 600 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__Instrs2_223, &ll_backend__llds_to_x86_64__RvalOp2_222);
                                    }
#line 599 "llds_to_x86_64.m"
                                  }
#line 596 "llds_to_x86_64.m"
                              else
#line 594 "llds_to_x86_64.m"
                                {
#line 594 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__RvalOp2_222 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_217, (MR_Integer) 0)));
#line 595 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__Instrs2_223 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 594 "llds_to_x86_64.m"
                                }
#line 607 "llds_to_x86_64.m"
                              {
#line 607 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__ScratchReg_225 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_237_237);
                              }
#line 608 "llds_to_x86_64.m"
                              {
#line 608 "llds_to_x86_64.m"
                                ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_237_237, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
                              }
#line 609 "llds_to_x86_64.m"
                              {
#line 609 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__TempReg1_226 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 609 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__TempReg1_226, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_225));
#line 609 "llds_to_x86_64.m"
                              }
#line 610 "llds_to_x86_64.m"
                              {
#line 610 "llds_to_x86_64.m"
                                ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__llds_to_x86_64__RvalOp1_219, &ll_backend__llds_to_x86_64__RvalStr1_227);
                              }
#line 611 "llds_to_x86_64.m"
                              {
#line 611 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_246_246 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_246_246, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalStr1_227));
#line 611 "llds_to_x86_64.m"
                              }
#line 611 "llds_to_x86_64.m"
                              {
#line 611 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_245_245 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 611 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_245_245, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_246_246));
#line 611 "llds_to_x86_64.m"
                              }
#line 611 "llds_to_x86_64.m"
                              {
#line 611 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__MemRef_228 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 611 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__MemRef_228, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_245_245));
#line 611 "llds_to_x86_64.m"
                              }
#line 612 "llds_to_x86_64.m"
                              {
#line 612 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_247_247 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 612 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_247_247, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 612 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_247_247, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__MemRef_228));
#line 612 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_247_247, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg1_226));
#line 612 "llds_to_x86_64.m"
                              }
#line 612 "llds_to_x86_64.m"
                              {
#line 612 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__LoadAddr_229 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 612 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LoadAddr_229, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_247_247));
#line 612 "llds_to_x86_64.m"
                              }
#line 613 "llds_to_x86_64.m"
                              {
#line 613 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_248_248 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_248_248, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp2_222));
#line 613 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_248_248, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg1_226));
#line 613 "llds_to_x86_64.m"
                              }
#line 613 "llds_to_x86_64.m"
                              {
#line 613 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__FieldNum_230 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 613 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__FieldNum_230, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_248_248));
#line 613 "llds_to_x86_64.m"
                              }
#line 6230 "ll_backend.llds_to_x86_64.c"
                              ll_backend__llds_to_x86_64__TypeCtorInfo_270_270 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 614 "llds_to_x86_64.m"
                              {
#line 614 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_255_255 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 614 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_255_255, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LoadAddr_229));
#line 614 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_255_255, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 614 "llds_to_x86_64.m"
                              }
#line 614 "llds_to_x86_64.m"
                              {
#line 614 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_250_250 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_270_270, (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[28]), ll_backend__llds_to_x86_64__V_255_255);
                              }
#line 614 "llds_to_x86_64.m"
                              {
#line 614 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_249_249 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_270_270, ll_backend__llds_to_x86_64__Instrs2_223, ll_backend__llds_to_x86_64__V_250_250);
                              }
#line 614 "llds_to_x86_64.m"
                              {
#line 614 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__Instrs3_231 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_270_270, ll_backend__llds_to_x86_64__Instrs1_220, ll_backend__llds_to_x86_64__V_249_249);
                              }
#line 620 "llds_to_x86_64.m"
                              if ((ll_backend__llds_to_x86_64__Tag0_211 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "llds_to_x86_64.m"
                                {
#line 621 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_257_257;
#line 621 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_258_258;

#line 622 "llds_to_x86_64.m"
                                  {
#line 622 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_258_258 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 622 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_258_258, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__FieldNum_230));
#line 622 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_258_258, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 622 "llds_to_x86_64.m"
                                  }
#line 622 "llds_to_x86_64.m"
                                  {
#line 622 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_257_257 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_270_270, ll_backend__llds_to_x86_64__Instrs3_231, ll_backend__llds_to_x86_64__V_258_258);
                                  }
#line 622 "llds_to_x86_64.m"
                                  {
#line 622 "llds_to_x86_64.m"
                                    MR_Word base;
#line 622 "llds_to_x86_64.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 622 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 622 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_257_257));
#line 622 "llds_to_x86_64.m"
                                  }
#line 621 "llds_to_x86_64.m"
                                }
#line 620 "llds_to_x86_64.m"
                              else
#line 617 "llds_to_x86_64.m"
                                {
#line 617 "llds_to_x86_64.m"
                                  MR_Integer ll_backend__llds_to_x86_64__Tag_232 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Tag0_211, (MR_Integer) 0)));
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__Mrbody_233;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_260_260;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_261_261;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_262_262;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_263_263 = (MR_Word) ll_backend__llds_to_x86_64__Tag_232;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_264_264;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_265_265;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_266_266;
#line 617 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_268_268;

#line 618 "llds_to_x86_64.m"
                                  {
#line 618 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_262_262 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_262_262, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_263_263));
#line 618 "llds_to_x86_64.m"
                                  }
#line 618 "llds_to_x86_64.m"
                                  {
#line 618 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_261_261 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_261_261, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_262_262));
#line 618 "llds_to_x86_64.m"
                                  }
#line 618 "llds_to_x86_64.m"
                                  {
#line 618 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_260_260 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 618 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_260_260, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 45));
#line 618 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_260_260, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_261_261));
#line 618 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_260_260, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg1_226));
#line 618 "llds_to_x86_64.m"
                                  }
#line 618 "llds_to_x86_64.m"
                                  {
#line 618 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__Mrbody_233 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 618 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Mrbody_233, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_260_260));
#line 618 "llds_to_x86_64.m"
                                  }
#line 619 "llds_to_x86_64.m"
                                  {
#line 619 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_266_266 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_266_266, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Mrbody_233));
#line 619 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_266_266, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "llds_to_x86_64.m"
                                  }
#line 619 "llds_to_x86_64.m"
                                  {
#line 619 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_268_268, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__FieldNum_230));
#line 619 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_268_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 619 "llds_to_x86_64.m"
                                  }
#line 619 "llds_to_x86_64.m"
                                  {
#line 619 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_265_265 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_270_270, ll_backend__llds_to_x86_64__V_266_266, ll_backend__llds_to_x86_64__V_268_268);
                                  }
#line 619 "llds_to_x86_64.m"
                                  {
#line 619 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_264_264 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_270_270, ll_backend__llds_to_x86_64__Instrs3_231, ll_backend__llds_to_x86_64__V_265_265);
                                  }
#line 619 "llds_to_x86_64.m"
                                  {
#line 619 "llds_to_x86_64.m"
                                    MR_Word base;
#line 619 "llds_to_x86_64.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 619 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 619 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_264_264));
#line 619 "llds_to_x86_64.m"
                                  }
#line 617 "llds_to_x86_64.m"
                                }
#line 576 "llds_to_x86_64.m"
                            }
#line 489 "llds_to_x86_64.m"
                          else
#line 489 "llds_to_x86_64.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 538 "llds_to_x86_64.m"
                              {
#line 538 "llds_to_x86_64.m"
                                MR_Integer ll_backend__llds_to_x86_64__Offset_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 538 "llds_to_x86_64.m"
                                MR_Word ll_backend__llds_to_x86_64__ScratchReg_116;
#line 538 "llds_to_x86_64.m"
                                MR_Word ll_backend__llds_to_x86_64__RegLocn_117;

#line 541 "llds_to_x86_64.m"
                                {
#line 541 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__ScratchReg_116 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1);
                                }
#line 542 "llds_to_x86_64.m"
                                {
#line 542 "llds_to_x86_64.m"
                                  ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
                                }
#line 543 "llds_to_x86_64.m"
                                {
#line 543 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__RegLocn_117 = ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_f_0(*ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)));
                                }
#line 551 "llds_to_x86_64.m"
                                if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__RegLocn_117)) == (MR_mktag((MR_Integer) 0))))
#line 547 "llds_to_x86_64.m"
                                  {
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__Reg_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__RegLocn_117, (MR_Integer) 0)));
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_137_137;
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_138_138;
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_139_139;
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_140_140;
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_141_141;
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_142_142;
#line 547 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_143_143;

#line 548 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 550 "llds_to_x86_64.m"
                                    {
#line 550 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_142_142 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 550 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_142_142, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Offset_113));
#line 550 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_142_142, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Reg_118));
#line 550 "llds_to_x86_64.m"
                                    }
#line 549 "llds_to_x86_64.m"
                                    {
#line 549 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_141_141 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_141_141, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_142_142));
#line 549 "llds_to_x86_64.m"
                                    }
#line 549 "llds_to_x86_64.m"
                                    {
#line 549 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_140_140 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_140_140, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_141_141));
#line 549 "llds_to_x86_64.m"
                                    }
#line 549 "llds_to_x86_64.m"
                                    {
#line 549 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_143_143 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_143_143, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_116));
#line 549 "llds_to_x86_64.m"
                                    }
#line 549 "llds_to_x86_64.m"
                                    {
#line 549 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_139_139 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_139_139, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_139_139, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_140_140));
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_139_139, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_143_143));
#line 549 "llds_to_x86_64.m"
                                    }
#line 550 "llds_to_x86_64.m"
                                    {
#line 550 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_138_138 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 550 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_138_138, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_139_139));
#line 550 "llds_to_x86_64.m"
                                    }
#line 549 "llds_to_x86_64.m"
                                    {
#line 549 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_137_137 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_137_137, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_138_138));
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_137_137, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 549 "llds_to_x86_64.m"
                                    }
#line 549 "llds_to_x86_64.m"
                                    {
#line 549 "llds_to_x86_64.m"
                                      MR_Word base;
#line 549 "llds_to_x86_64.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 549 "llds_to_x86_64.m"
                                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 549 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_137_137));
#line 549 "llds_to_x86_64.m"
                                    }
#line 547 "llds_to_x86_64.m"
                                  }
#line 551 "llds_to_x86_64.m"
                                else
#line 552 "llds_to_x86_64.m"
                                  {
#line 552 "llds_to_x86_64.m"
                                    MR_Integer ll_backend__llds_to_x86_64__SlotNum_119 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__RegLocn_117, (MR_Integer) 0)));
#line 552 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__FakeRegVal_120;
#line 552 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__V_126_126;
#line 552 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__V_127_127;
#line 552 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__V_128_128;
#line 552 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__V_130_130;
#line 552 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_131_131;
#line 552 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_132_132;
#line 552 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_133_133;
#line 552 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_134_134;
#line 552 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_135_135;

#line 553 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 554 "llds_to_x86_64.m"
                                    {
#line 554 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_127_127 = mercury__string__int_to_string_1_f_0(ll_backend__llds_to_x86_64__SlotNum_119);
                                    }
#line 555 "llds_to_x86_64.m"
                                    {
#line 555 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_130_130 = mercury__string__int_to_string_1_f_0(ll_backend__llds_to_x86_64__Offset_113);
                                    }
#line 554 "llds_to_x86_64.m"
                                    {
#line 554 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_128_128 = mercury__string__f_43_43_2_f_0((MR_String) ") + ", ll_backend__llds_to_x86_64__V_130_130);
                                    }
#line 554 "llds_to_x86_64.m"
                                    {
#line 554 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_126_126 = mercury__string__f_43_43_2_f_0(ll_backend__llds_to_x86_64__V_127_127, ll_backend__llds_to_x86_64__V_128_128);
                                    }
#line 554 "llds_to_x86_64.m"
                                    {
#line 554 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__FakeRegVal_120 = mercury__string__f_43_43_2_f_0((MR_String) "\044virtual_reg(", ll_backend__llds_to_x86_64__V_126_126);
                                    }
#line 556 "llds_to_x86_64.m"
                                    {
#line 556 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_134_134 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_134_134, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_134_134, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__FakeRegVal_120));
#line 556 "llds_to_x86_64.m"
                                    }
#line 556 "llds_to_x86_64.m"
                                    {
#line 556 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_135_135, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_116));
#line 556 "llds_to_x86_64.m"
                                    }
#line 556 "llds_to_x86_64.m"
                                    {
#line 556 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_133_133 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_133_133, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_133_133, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_134_134));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_133_133, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_135_135));
#line 556 "llds_to_x86_64.m"
                                    }
#line 557 "llds_to_x86_64.m"
                                    {
#line 557 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_132_132 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 557 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_132_132, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_133_133));
#line 557 "llds_to_x86_64.m"
                                    }
#line 556 "llds_to_x86_64.m"
                                    {
#line 556 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_131_131 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_131_131, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_132_132));
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_131_131, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "llds_to_x86_64.m"
                                    }
#line 556 "llds_to_x86_64.m"
                                    {
#line 556 "llds_to_x86_64.m"
                                      MR_Word base;
#line 556 "llds_to_x86_64.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 556 "llds_to_x86_64.m"
                                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 556 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_131_131));
#line 556 "llds_to_x86_64.m"
                                    }
#line 552 "llds_to_x86_64.m"
                                  }
#line 538 "llds_to_x86_64.m"
                              }
#line 489 "llds_to_x86_64.m"
                            else
#line 489 "llds_to_x86_64.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 573 "llds_to_x86_64.m"
                                {
#line 573 "llds_to_x86_64.m"
                                  MR_String ll_backend__llds_to_x86_64__Name_198;
#line 573 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_202_202 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 573 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_203_203;

#line 573 "llds_to_x86_64.m"
                                  ll_backend__llds_to_x86_64__Name_198 = (MR_String) ll_backend__llds_to_x86_64__V_202_202;
#line 573 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 574 "llds_to_x86_64.m"
                                  {
#line 574 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_203_203 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 574 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_203_203, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 574 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_203_203, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Name_198));
#line 574 "llds_to_x86_64.m"
                                  }
#line 574 "llds_to_x86_64.m"
                                  {
#line 574 "llds_to_x86_64.m"
                                    MR_Word base;
#line 574 "llds_to_x86_64.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 574 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = base;
#line 574 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_203_203));
#line 574 "llds_to_x86_64.m"
                                  }
#line 573 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 573 "llds_to_x86_64.m"
                                }
#line 489 "llds_to_x86_64.m"
                              else
#line 489 "llds_to_x86_64.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 575 "llds_to_x86_64.m"
                                  {
#line 575 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_2[28]);
#line 575 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 575 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1;
#line 575 "llds_to_x86_64.m"
                                  }
#line 489 "llds_to_x86_64.m"
                                else
#line 489 "llds_to_x86_64.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 571 "llds_to_x86_64.m"
                                    {
#line 571 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Rval_191 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 572 "llds_to_x86_64.m"
                                      {
#line 572 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_191, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 572 "llds_to_x86_64.m"
                                        return;
                                      }
#line 571 "llds_to_x86_64.m"
                                    }
#line 489 "llds_to_x86_64.m"
                                  else
#line 489 "llds_to_x86_64.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 536 "llds_to_x86_64.m"
                                      {
#line 537 "llds_to_x86_64.m"
                                        {
#line 537 "llds_to_x86_64.m"
                                          mercury__require__sorry_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_lval\'/5", (MR_String) "parallelism is not supported");
#line 537 "llds_to_x86_64.m"
                                          return;
                                        }
#line 536 "llds_to_x86_64.m"
                                      }
#line 489 "llds_to_x86_64.m"
                                    else
#line 489 "llds_to_x86_64.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 569 "llds_to_x86_64.m"
                                        {
#line 569 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__Rval_184 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 570 "llds_to_x86_64.m"
                                          {
#line 570 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_184, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 570 "llds_to_x86_64.m"
                                            return;
                                          }
#line 569 "llds_to_x86_64.m"
                                        }
#line 489 "llds_to_x86_64.m"
                                      else
#line 489 "llds_to_x86_64.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 565 "llds_to_x86_64.m"
                                          {
#line 565 "llds_to_x86_64.m"
                                            MR_Word ll_backend__llds_to_x86_64__Rval_170 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 566 "llds_to_x86_64.m"
                                            {
#line 566 "llds_to_x86_64.m"
                                              ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_170, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 566 "llds_to_x86_64.m"
                                              return;
                                            }
#line 565 "llds_to_x86_64.m"
                                          }
#line 489 "llds_to_x86_64.m"
                                        else
#line 489 "llds_to_x86_64.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 563 "llds_to_x86_64.m"
                                            {
#line 563 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Rval_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 564 "llds_to_x86_64.m"
                                              {
#line 564 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_163, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 564 "llds_to_x86_64.m"
                                                return;
                                              }
#line 563 "llds_to_x86_64.m"
                                            }
#line 489 "llds_to_x86_64.m"
                                          else
#line 489 "llds_to_x86_64.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 519 "llds_to_x86_64.m"
                                              {
#line 519 "llds_to_x86_64.m"
                                                MR_Integer ll_backend__llds_to_x86_64__Offset_71 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));
#line 519 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__ScratchReg_74;
#line 519 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__RegLocn_75;

#line 520 "llds_to_x86_64.m"
                                                {
#line 520 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__ScratchReg_74 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1);
                                                }
#line 521 "llds_to_x86_64.m"
                                                {
#line 521 "llds_to_x86_64.m"
                                                  ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2);
                                                }
#line 522 "llds_to_x86_64.m"
                                                {
#line 522 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__RegLocn_75 = ll_backend__x86_64_regs__reg_map_lookup_reg_locn_2_f_0(*ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)));
                                                }
#line 528 "llds_to_x86_64.m"
                                                if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__RegLocn_75)) == (MR_mktag((MR_Integer) 0))))
#line 524 "llds_to_x86_64.m"
                                                  {
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__Reg_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__RegLocn_75, (MR_Integer) 0)));
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_95_95;
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_96_96;
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_97_97;
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_98_98;
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_99_99;
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_100_100;
#line 524 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_101_101;

#line 525 "llds_to_x86_64.m"
                                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 527 "llds_to_x86_64.m"
                                                    {
#line 527 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_100_100 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 527 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_100_100, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Offset_71));
#line 527 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_100_100, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Reg_76));
#line 527 "llds_to_x86_64.m"
                                                    }
#line 526 "llds_to_x86_64.m"
                                                    {
#line 526 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_99_99, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_100_100));
#line 526 "llds_to_x86_64.m"
                                                    }
#line 526 "llds_to_x86_64.m"
                                                    {
#line 526 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_98_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_98_98, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_99_99));
#line 526 "llds_to_x86_64.m"
                                                    }
#line 526 "llds_to_x86_64.m"
                                                    {
#line 526 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_101_101 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_101_101, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_74));
#line 526 "llds_to_x86_64.m"
                                                    }
#line 526 "llds_to_x86_64.m"
                                                    {
#line 526 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_97_97 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_97_97, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_97_97, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_98_98));
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_97_97, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_101_101));
#line 526 "llds_to_x86_64.m"
                                                    }
#line 527 "llds_to_x86_64.m"
                                                    {
#line 527 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_96_96 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 527 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_96_96, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_97_97));
#line 527 "llds_to_x86_64.m"
                                                    }
#line 526 "llds_to_x86_64.m"
                                                    {
#line 526 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_95_95, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_96_96));
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_95_95, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 526 "llds_to_x86_64.m"
                                                    }
#line 526 "llds_to_x86_64.m"
                                                    {
#line 526 "llds_to_x86_64.m"
                                                      MR_Word base;
#line 526 "llds_to_x86_64.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 526 "llds_to_x86_64.m"
                                                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 526 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_95_95));
#line 526 "llds_to_x86_64.m"
                                                    }
#line 524 "llds_to_x86_64.m"
                                                  }
#line 528 "llds_to_x86_64.m"
                                                else
#line 529 "llds_to_x86_64.m"
                                                  {
#line 529 "llds_to_x86_64.m"
                                                    MR_Integer ll_backend__llds_to_x86_64__SlotNum_77 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__RegLocn_75, (MR_Integer) 0)));
#line 529 "llds_to_x86_64.m"
                                                    MR_String ll_backend__llds_to_x86_64__FakeRegVal_78;
#line 529 "llds_to_x86_64.m"
                                                    MR_String ll_backend__llds_to_x86_64__V_84_84;
#line 529 "llds_to_x86_64.m"
                                                    MR_String ll_backend__llds_to_x86_64__V_85_85;
#line 529 "llds_to_x86_64.m"
                                                    MR_String ll_backend__llds_to_x86_64__V_86_86;
#line 529 "llds_to_x86_64.m"
                                                    MR_String ll_backend__llds_to_x86_64__V_88_88;
#line 529 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_89_89;
#line 529 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_90_90;
#line 529 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_91_91;
#line 529 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_92_92;
#line 529 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__V_93_93;

#line 530 "llds_to_x86_64.m"
                                                    *ll_backend__llds_to_x86_64__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "llds_to_x86_64.m"
                                                    {
#line 531 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_85_85 = mercury__string__int_to_string_1_f_0(ll_backend__llds_to_x86_64__SlotNum_77);
                                                    }
#line 532 "llds_to_x86_64.m"
                                                    {
#line 532 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_88_88 = mercury__string__int_to_string_1_f_0(ll_backend__llds_to_x86_64__Offset_71);
                                                    }
#line 531 "llds_to_x86_64.m"
                                                    {
#line 531 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ") + ", ll_backend__llds_to_x86_64__V_88_88);
                                                    }
#line 531 "llds_to_x86_64.m"
                                                    {
#line 531 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__llds_to_x86_64__V_85_85, ll_backend__llds_to_x86_64__V_86_86);
                                                    }
#line 531 "llds_to_x86_64.m"
                                                    {
#line 531 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__FakeRegVal_78 = mercury__string__f_43_43_2_f_0((MR_String) "\044virtual_reg(", ll_backend__llds_to_x86_64__V_84_84);
                                                    }
#line 533 "llds_to_x86_64.m"
                                                    {
#line 533 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_92_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_92_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_92_92, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__FakeRegVal_78));
#line 533 "llds_to_x86_64.m"
                                                    }
#line 533 "llds_to_x86_64.m"
                                                    {
#line 533 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_93_93, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_74));
#line 533 "llds_to_x86_64.m"
                                                    }
#line 533 "llds_to_x86_64.m"
                                                    {
#line 533 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_91_91 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_91_91, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_91_91, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_92_92));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_91_91, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_93_93));
#line 533 "llds_to_x86_64.m"
                                                    }
#line 534 "llds_to_x86_64.m"
                                                    {
#line 534 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_90_90 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 534 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_90_90, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_91_91));
#line 534 "llds_to_x86_64.m"
                                                    }
#line 533 "llds_to_x86_64.m"
                                                    {
#line 533 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__V_89_89 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_89_89, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_90_90));
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_89_89, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 533 "llds_to_x86_64.m"
                                                    }
#line 533 "llds_to_x86_64.m"
                                                    {
#line 533 "llds_to_x86_64.m"
                                                      MR_Word base;
#line 533 "llds_to_x86_64.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 533 "llds_to_x86_64.m"
                                                      *ll_backend__llds_to_x86_64__HeadVar__5_5 = base;
#line 533 "llds_to_x86_64.m"
                                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_89_89));
#line 533 "llds_to_x86_64.m"
                                                    }
#line 529 "llds_to_x86_64.m"
                                                  }
#line 519 "llds_to_x86_64.m"
                                              }
#line 489 "llds_to_x86_64.m"
                                            else
#line 489 "llds_to_x86_64.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 567 "llds_to_x86_64.m"
                                                {
#line 567 "llds_to_x86_64.m"
                                                  MR_Word ll_backend__llds_to_x86_64__Rval_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 568 "llds_to_x86_64.m"
                                                  {
#line 568 "llds_to_x86_64.m"
                                                    ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_177, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 568 "llds_to_x86_64.m"
                                                    return;
                                                  }
#line 567 "llds_to_x86_64.m"
                                                }
#line 489 "llds_to_x86_64.m"
                                              else
#line 561 "llds_to_x86_64.m"
                                                {
#line 561 "llds_to_x86_64.m"
                                                  MR_Word ll_backend__llds_to_x86_64__Rval_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__HeadVar__3_3, (MR_Integer) 1)));

#line 562 "llds_to_x86_64.m"
                                                  {
#line 562 "llds_to_x86_64.m"
                                                    ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_2, ll_backend__llds_to_x86_64__Rval_156, ll_backend__llds_to_x86_64__HeadVar__4_4, ll_backend__llds_to_x86_64__HeadVar__5_5);
#line 562 "llds_to_x86_64.m"
                                                    return;
                                                  }
#line 561 "llds_to_x86_64.m"
                                                }
#line 489 "llds_to_x86_64.m"
      }
#line 489 "llds_to_x86_64.m"
      break;
#line 489 "llds_to_x86_64.m"
    }
#line 486 "llds_to_x86_64.m"
}

#line 184 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__instr_to_x86_64_4_p_0(
#line 184 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131,
#line 184 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132,
#line 184 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__Uinstr_6,
#line 184 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instrs_7)
#line 184 "llds_to_x86_64.m"
{
#line 189 "llds_to_x86_64.m"
  {
#line 189 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 189 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__Uinstr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 434 "llds_to_x86_64.m"
      {
#line 435 "llds_to_x86_64.m"
        *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[2]);
#line 435 "llds_to_x86_64.m"
        *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 434 "llds_to_x86_64.m"
      }
#line 189 "llds_to_x86_64.m"
    else
#line 189 "llds_to_x86_64.m"
      if ((ll_backend__llds_to_x86_64__Uinstr_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 431 "llds_to_x86_64.m"
        {
#line 432 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[3]);
#line 432 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 431 "llds_to_x86_64.m"
        }
#line 189 "llds_to_x86_64.m"
      else
#line 189 "llds_to_x86_64.m"
        if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 1))))
#line 189 "llds_to_x86_64.m"
          {
#line 189 "llds_to_x86_64.m"
            MR_String ll_backend__llds_to_x86_64__Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)));
#line 189 "llds_to_x86_64.m"
            MR_Word ll_backend__llds_to_x86_64__V_345_345;

#line 190 "llds_to_x86_64.m"
            {
#line 190 "llds_to_x86_64.m"
              ll_backend__llds_to_x86_64__V_345_345 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 190 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_345_345, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Comment_8));
#line 190 "llds_to_x86_64.m"
            }
#line 190 "llds_to_x86_64.m"
            {
#line 190 "llds_to_x86_64.m"
              MR_Word base;
#line 190 "llds_to_x86_64.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 190 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 190 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_345_345));
#line 190 "llds_to_x86_64.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 190 "llds_to_x86_64.m"
            }
#line 190 "llds_to_x86_64.m"
            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 189 "llds_to_x86_64.m"
          }
#line 189 "llds_to_x86_64.m"
        else
#line 189 "llds_to_x86_64.m"
          if (((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 2))))
#line 192 "llds_to_x86_64.m"
            {
#line 192 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__RegsAndStackLocs_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)));
#line 192 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__List_10;

#line 193 "llds_to_x86_64.m"
              {
#line 193 "llds_to_x86_64.m"
                mercury__set__to_sorted_list_2_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__llds_to_x86_64__RegsAndStackLocs_9, &ll_backend__llds_to_x86_64__List_10);
              }
#line 194 "llds_to_x86_64.m"
              {
#line 194 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__transform_livevals_3_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, ll_backend__llds_to_x86_64__List_10, ll_backend__llds_to_x86_64__Instrs_7);
              }
#line 194 "llds_to_x86_64.m"
              *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 192 "llds_to_x86_64.m"
            }
#line 189 "llds_to_x86_64.m"
          else
#line 189 "llds_to_x86_64.m"
            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 306 "llds_to_x86_64.m"
              {
#line 307 "llds_to_x86_64.m"
                *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[4]);
#line 307 "llds_to_x86_64.m"
                *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 306 "llds_to_x86_64.m"
              }
#line 189 "llds_to_x86_64.m"
            else
#line 189 "llds_to_x86_64.m"
              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 201 "llds_to_x86_64.m"
                {
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Res0_16;
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Res1_17;
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Res2_18;
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__Res3_19;
#line 201 "llds_to_x86_64.m"
                  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_321_321;

#line 202 "llds_to_x86_64.m"
                  {
#line 202 "llds_to_x86_64.m"
                    ll_backend__llds_to_x86_64__transform_lval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_321_321, ll_backend__llds_to_x86_64__Lval_14, &ll_backend__llds_to_x86_64__Res0_16, &ll_backend__llds_to_x86_64__Res1_17);
                  }
#line 203 "llds_to_x86_64.m"
                  {
#line 203 "llds_to_x86_64.m"
                    ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_321_321, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132, ll_backend__llds_to_x86_64__Rval_15, &ll_backend__llds_to_x86_64__Res2_18, &ll_backend__llds_to_x86_64__Res3_19);
                  }
#line 221 "llds_to_x86_64.m"
                  if ((ll_backend__llds_to_x86_64__Res0_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "llds_to_x86_64.m"
                    if ((ll_backend__llds_to_x86_64__Res1_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "llds_to_x86_64.m"
                      {
#line 244 "llds_to_x86_64.m"
                        {
#line 244 "llds_to_x86_64.m"
                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "assign: unexpected: Lval");
#line 244 "llds_to_x86_64.m"
                          return;
                        }
#line 243 "llds_to_x86_64.m"
                      }
#line 242 "llds_to_x86_64.m"
                    else
#line 224 "llds_to_x86_64.m"
                      {
#line 224 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__LvalInstrs_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_17, (MR_Integer) 0)));
#line 224 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__LvalLastOp_26;

#line 225 "llds_to_x86_64.m"
                        {
#line 225 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__LvalInstrs_25, &ll_backend__llds_to_x86_64__LvalLastOp_26);
                        }
#line 230 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__Res2_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "llds_to_x86_64.m"
                          if ((ll_backend__llds_to_x86_64__Res3_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "llds_to_x86_64.m"
                            {
#line 239 "llds_to_x86_64.m"
                              {
#line 239 "llds_to_x86_64.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "assign: unexpected: Rval");
#line 239 "llds_to_x86_64.m"
                                return;
                              }
#line 238 "llds_to_x86_64.m"
                            }
#line 237 "llds_to_x86_64.m"
                          else
#line 233 "llds_to_x86_64.m"
                            {
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_414_414;
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__RvalLastOp_28;
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_329_329;
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_330_330;
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__V_331_331;
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__RvalInstrs_348 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_19, (MR_Integer) 0)));
#line 233 "llds_to_x86_64.m"
                              MR_Word ll_backend__llds_to_x86_64__Instr1_349;

#line 234 "llds_to_x86_64.m"
                              {
#line 234 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_348, &ll_backend__llds_to_x86_64__RvalLastOp_28);
                              }
#line 235 "llds_to_x86_64.m"
                              {
#line 235 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_329_329 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 235 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_329_329, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 235 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_329_329, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalLastOp_28));
#line 235 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_329_329, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalLastOp_26));
#line 235 "llds_to_x86_64.m"
                              }
#line 235 "llds_to_x86_64.m"
                              {
#line 235 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__Instr1_349 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 235 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_349, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_329_329));
#line 235 "llds_to_x86_64.m"
                              }
#line 7316 "ll_backend.llds_to_x86_64.c"
                              ll_backend__llds_to_x86_64__TypeCtorInfo_414_414 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 236 "llds_to_x86_64.m"
                              {
#line 236 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_331_331 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_331_331, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_349));
#line 236 "llds_to_x86_64.m"
                                MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_331_331, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "llds_to_x86_64.m"
                              }
#line 236 "llds_to_x86_64.m"
                              {
#line 236 "llds_to_x86_64.m"
                                ll_backend__llds_to_x86_64__V_330_330 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_414_414, ll_backend__llds_to_x86_64__RvalInstrs_348, ll_backend__llds_to_x86_64__V_331_331);
                              }
#line 236 "llds_to_x86_64.m"
                              {
#line 236 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_414_414, ll_backend__llds_to_x86_64__LvalInstrs_25, ll_backend__llds_to_x86_64__V_330_330);
                              }
#line 233 "llds_to_x86_64.m"
                            }
#line 230 "llds_to_x86_64.m"
                        else
#line 227 "llds_to_x86_64.m"
                          {
#line 227 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__Instr1_27;
#line 227 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_333_333;
#line 227 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_334_334;
#line 227 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__RvalOp_347 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_18, (MR_Integer) 0)));

#line 228 "llds_to_x86_64.m"
                            {
#line 228 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_333_333 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 228 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_333_333, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 228 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_333_333, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp_347));
#line 228 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_333_333, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalLastOp_26));
#line 228 "llds_to_x86_64.m"
                            }
#line 228 "llds_to_x86_64.m"
                            {
#line 228 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__Instr1_27 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_27, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_333_333));
#line 228 "llds_to_x86_64.m"
                            }
#line 229 "llds_to_x86_64.m"
                            {
#line 229 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_334_334 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_334_334, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_27));
#line 229 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_334_334, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "llds_to_x86_64.m"
                            }
#line 229 "llds_to_x86_64.m"
                            {
#line 229 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__LvalInstrs_25, ll_backend__llds_to_x86_64__V_334_334);
                            }
#line 227 "llds_to_x86_64.m"
                          }
#line 224 "llds_to_x86_64.m"
                      }
#line 221 "llds_to_x86_64.m"
                  else
#line 205 "llds_to_x86_64.m"
                    {
#line 205 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__LvalOp_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_16, (MR_Integer) 0)));

#line 209 "llds_to_x86_64.m"
                      if ((ll_backend__llds_to_x86_64__Res2_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__Res3_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "llds_to_x86_64.m"
                          {
#line 218 "llds_to_x86_64.m"
                            {
#line 218 "llds_to_x86_64.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "assign: unexpected: Rval");
#line 218 "llds_to_x86_64.m"
                              return;
                            }
#line 217 "llds_to_x86_64.m"
                          }
#line 216 "llds_to_x86_64.m"
                        else
#line 212 "llds_to_x86_64.m"
                          {
#line 212 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__RvalInstrs_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_19, (MR_Integer) 0)));
#line 212 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__LastOp_23;
#line 212 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__LastInstr_24;
#line 212 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_339_339;
#line 212 "llds_to_x86_64.m"
                            MR_Word ll_backend__llds_to_x86_64__V_340_340;

#line 213 "llds_to_x86_64.m"
                            {
#line 213 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_22, &ll_backend__llds_to_x86_64__LastOp_23);
                            }
#line 214 "llds_to_x86_64.m"
                            {
#line 214 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_339_339 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 214 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_339_339, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 214 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_339_339, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__LastOp_23));
#line 214 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_339_339, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalOp_20));
#line 214 "llds_to_x86_64.m"
                            }
#line 214 "llds_to_x86_64.m"
                            {
#line 214 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__LastInstr_24 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LastInstr_24, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_339_339));
#line 214 "llds_to_x86_64.m"
                            }
#line 215 "llds_to_x86_64.m"
                            {
#line 215 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__V_340_340 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_340_340, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LastInstr_24));
#line 215 "llds_to_x86_64.m"
                              MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_340_340, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "llds_to_x86_64.m"
                            }
#line 215 "llds_to_x86_64.m"
                            {
#line 215 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__RvalInstrs_22, ll_backend__llds_to_x86_64__V_340_340);
                            }
#line 212 "llds_to_x86_64.m"
                          }
#line 209 "llds_to_x86_64.m"
                      else
#line 207 "llds_to_x86_64.m"
                        {
#line 207 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__RvalOp_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_18, (MR_Integer) 0)));
#line 207 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_342_342;
#line 207 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_343_343;

#line 208 "llds_to_x86_64.m"
                          {
#line 208 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_343_343 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 208 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_343_343, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 208 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_343_343, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp_21));
#line 208 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_343_343, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalOp_20));
#line 208 "llds_to_x86_64.m"
                          }
#line 208 "llds_to_x86_64.m"
                          {
#line 208 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_342_342 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_342_342, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_343_343));
#line 208 "llds_to_x86_64.m"
                          }
#line 208 "llds_to_x86_64.m"
                          {
#line 208 "llds_to_x86_64.m"
                            MR_Word base;
#line 208 "llds_to_x86_64.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 208 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_342_342));
#line 208 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "llds_to_x86_64.m"
                          }
#line 207 "llds_to_x86_64.m"
                        }
#line 205 "llds_to_x86_64.m"
                    }
#line 201 "llds_to_x86_64.m"
                }
#line 189 "llds_to_x86_64.m"
              else
#line 189 "llds_to_x86_64.m"
                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 196 "llds_to_x86_64.m"
                  {
#line 196 "llds_to_x86_64.m"
                    MR_Word ll_backend__llds_to_x86_64__CInstrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 3)));
#line 196 "llds_to_x86_64.m"
                    MR_Integer ll_backend__llds_to_x86_64__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 196 "llds_to_x86_64.m"
                    MR_Integer ll_backend__llds_to_x86_64__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));

#line 197 "llds_to_x86_64.m"
                    {
#line 197 "llds_to_x86_64.m"
                      ll_backend__llds_to_x86_64__transform_block_instr_3_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, ll_backend__llds_to_x86_64__CInstrs_13, ll_backend__llds_to_x86_64__Instrs_7);
                    }
#line 197 "llds_to_x86_64.m"
                    *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 196 "llds_to_x86_64.m"
                  }
#line 189 "llds_to_x86_64.m"
                else
#line 189 "llds_to_x86_64.m"
                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 280 "llds_to_x86_64.m"
                    {
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_415_415;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Labels_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__ScratchReg_49;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__TempReg_50;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_280_280;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_286_286;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_287_287;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_288_288;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_289_289;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_290_290;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_291_291;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_292_292;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_293_293;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_295_295;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_296_296;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__V_298_298;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Rval_364 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Res0_365;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Res1_366;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__RvalOp_367;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__RvalInstrs_368;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Instr1_369;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Instr0_370;
#line 280 "llds_to_x86_64.m"
                      MR_Word ll_backend__llds_to_x86_64__Instr2_371;
#line 280 "llds_to_x86_64.m"
                      MR_String ll_backend__llds_to_x86_64__LabelStr_372;

#line 281 "llds_to_x86_64.m"
                      {
#line 281 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_280_280, ll_backend__llds_to_x86_64__Rval_364, &ll_backend__llds_to_x86_64__Res0_365, &ll_backend__llds_to_x86_64__Res1_366);
                      }
#line 285 "llds_to_x86_64.m"
                      if ((ll_backend__llds_to_x86_64__Res0_365 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 291 "llds_to_x86_64.m"
                        if ((ll_backend__llds_to_x86_64__Res1_366 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 292 "llds_to_x86_64.m"
                          {
#line 293 "llds_to_x86_64.m"
                            {
#line 293 "llds_to_x86_64.m"
                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "computed_goto: Rval");
#line 293 "llds_to_x86_64.m"
                              return;
                            }
#line 292 "llds_to_x86_64.m"
                          }
#line 291 "llds_to_x86_64.m"
                        else
#line 288 "llds_to_x86_64.m"
                          {
#line 288 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__RvalInstrs_368 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_366, (MR_Integer) 0)));
#line 289 "llds_to_x86_64.m"
                            {
#line 289 "llds_to_x86_64.m"
                              ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_368, &ll_backend__llds_to_x86_64__RvalOp_367);
                            }
#line 288 "llds_to_x86_64.m"
                          }
#line 285 "llds_to_x86_64.m"
                      else
#line 283 "llds_to_x86_64.m"
                        {
#line 283 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__RvalOp_367 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_365, (MR_Integer) 0)));
#line 284 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__RvalInstrs_368 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 283 "llds_to_x86_64.m"
                        }
#line 296 "llds_to_x86_64.m"
                      {
#line 296 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__maybe_labels_to_string_3_p_0(ll_backend__llds_to_x86_64__Labels_47, (MR_String) "", &ll_backend__llds_to_x86_64__LabelStr_372);
                      }
#line 297 "llds_to_x86_64.m"
                      {
#line 297 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__ScratchReg_49 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_280_280);
                      }
#line 298 "llds_to_x86_64.m"
                      {
#line 298 "llds_to_x86_64.m"
                        ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_280_280, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132);
                      }
#line 299 "llds_to_x86_64.m"
                      {
#line 299 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__TempReg_50 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 299 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__TempReg_50, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_49));
#line 299 "llds_to_x86_64.m"
                      }
#line 301 "llds_to_x86_64.m"
                      {
#line 301 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_289_289 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_289_289, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LabelStr_372));
#line 301 "llds_to_x86_64.m"
                      }
#line 301 "llds_to_x86_64.m"
                      {
#line 301 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_288_288 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 301 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_288_288, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_289_289));
#line 301 "llds_to_x86_64.m"
                      }
#line 301 "llds_to_x86_64.m"
                      {
#line 301 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_287_287 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 301 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_287_287, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_288_288));
#line 301 "llds_to_x86_64.m"
                      }
#line 300 "llds_to_x86_64.m"
                      {
#line 300 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_286_286 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 300 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_286_286, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 300 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_286_286, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_287_287));
#line 300 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_286_286, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_50));
#line 300 "llds_to_x86_64.m"
                      }
#line 300 "llds_to_x86_64.m"
                      {
#line 300 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__Instr0_370 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 300 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr0_370, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_286_286));
#line 300 "llds_to_x86_64.m"
                      }
#line 302 "llds_to_x86_64.m"
                      {
#line 302 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_290_290 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 302 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_290_290, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp_367));
#line 302 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_290_290, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_50));
#line 302 "llds_to_x86_64.m"
                      }
#line 302 "llds_to_x86_64.m"
                      {
#line 302 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__Instr1_369 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 302 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_369, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_290_290));
#line 302 "llds_to_x86_64.m"
                      }
#line 303 "llds_to_x86_64.m"
                      {
#line 303 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_291_291 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 303 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_291_291, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 303 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_291_291, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg_50));
#line 303 "llds_to_x86_64.m"
                      }
#line 303 "llds_to_x86_64.m"
                      {
#line 303 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__Instr2_371 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 303 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr2_371, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_291_291));
#line 303 "llds_to_x86_64.m"
                      }
#line 7747 "ll_backend.llds_to_x86_64.c"
                      ll_backend__llds_to_x86_64__TypeCtorInfo_415_415 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 304 "llds_to_x86_64.m"
                      {
#line 304 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_293_293 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_293_293, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr0_370));
#line 304 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_293_293, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "llds_to_x86_64.m"
                      }
#line 304 "llds_to_x86_64.m"
                      {
#line 304 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_296_296 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_296_296, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_369));
#line 304 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_296_296, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "llds_to_x86_64.m"
                      }
#line 304 "llds_to_x86_64.m"
                      {
#line 304 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_298_298 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 304 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_298_298, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr2_371));
#line 304 "llds_to_x86_64.m"
                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_298_298, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 304 "llds_to_x86_64.m"
                      }
#line 304 "llds_to_x86_64.m"
                      {
#line 304 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_295_295 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_415_415, ll_backend__llds_to_x86_64__V_296_296, ll_backend__llds_to_x86_64__V_298_298);
                      }
#line 304 "llds_to_x86_64.m"
                      {
#line 304 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_292_292 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_415_415, ll_backend__llds_to_x86_64__V_293_293, ll_backend__llds_to_x86_64__V_295_295);
                      }
#line 304 "llds_to_x86_64.m"
                      {
#line 304 "llds_to_x86_64.m"
                        *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_415_415, ll_backend__llds_to_x86_64__RvalInstrs_368, ll_backend__llds_to_x86_64__V_292_292);
                      }
#line 280 "llds_to_x86_64.m"
                    }
#line 189 "llds_to_x86_64.m"
                  else
#line 189 "llds_to_x86_64.m"
                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 448 "llds_to_x86_64.m"
                      {
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__DecrOp_103;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_162_162;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_163_163;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_165_165;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_166_166;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__V_169_169;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__Instr_407;
#line 448 "llds_to_x86_64.m"
                        MR_Word ll_backend__llds_to_x86_64__ScratchReg_408;
#line 448 "llds_to_x86_64.m"
                        MR_Integer ll_backend__llds_to_x86_64__NumSlots_409 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));

#line 449 "llds_to_x86_64.m"
                        ll_backend__llds_to_x86_64__V_163_163 = (MR_Word) ll_backend__llds_to_x86_64__NumSlots_409;
#line 449 "llds_to_x86_64.m"
                        {
#line 449 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_162_162 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_162_162, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_163_163));
#line 449 "llds_to_x86_64.m"
                        }
#line 449 "llds_to_x86_64.m"
                        {
#line 449 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__DecrOp_103 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 449 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__DecrOp_103, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_162_162));
#line 449 "llds_to_x86_64.m"
                        }
#line 450 "llds_to_x86_64.m"
                        {
#line 450 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__ScratchReg_408 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131);
                        }
#line 451 "llds_to_x86_64.m"
                        {
#line 451 "llds_to_x86_64.m"
                          ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132);
                        }
#line 452 "llds_to_x86_64.m"
                        {
#line 452 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_166_166 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 452 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_166_166, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg_408));
#line 452 "llds_to_x86_64.m"
                        }
#line 452 "llds_to_x86_64.m"
                        {
#line 452 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_165_165 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 452 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_165_165, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 45));
#line 452 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_165_165, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__DecrOp_103));
#line 452 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_165_165, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_166_166));
#line 452 "llds_to_x86_64.m"
                        }
#line 452 "llds_to_x86_64.m"
                        {
#line 452 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__Instr_407 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 452 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_407, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_165_165));
#line 452 "llds_to_x86_64.m"
                        }
#line 453 "llds_to_x86_64.m"
                        {
#line 453 "llds_to_x86_64.m"
                          ll_backend__llds_to_x86_64__V_169_169 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_169_169, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr_407));
#line 453 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_169_169, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 453 "llds_to_x86_64.m"
                        }
#line 453 "llds_to_x86_64.m"
                        {
#line 453 "llds_to_x86_64.m"
                          MR_Word base;
#line 453 "llds_to_x86_64.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 453 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 453 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (&ll_backend__llds_to_x86_64_scalar_common_2[3]));
#line 453 "llds_to_x86_64.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_169_169));
#line 453 "llds_to_x86_64.m"
                        }
#line 448 "llds_to_x86_64.m"
                      }
#line 189 "llds_to_x86_64.m"
                    else
#line 189 "llds_to_x86_64.m"
                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 455 "llds_to_x86_64.m"
                        {
#line 455 "llds_to_x86_64.m"
                          MR_Word ll_backend__llds_to_x86_64__V_157_157;
#line 455 "llds_to_x86_64.m"
                          MR_String ll_backend__llds_to_x86_64__V_158_158;
#line 455 "llds_to_x86_64.m"
                          MR_String ll_backend__llds_to_x86_64__V_160_160;
#line 455 "llds_to_x86_64.m"
                          MR_Integer ll_backend__llds_to_x86_64__NumSlots_410 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));

#line 456 "llds_to_x86_64.m"
                          {
#line 456 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_160_160 = mercury__string__int_to_string_1_f_0(ll_backend__llds_to_x86_64__NumSlots_410);
                          }
#line 456 "llds_to_x86_64.m"
                          {
#line 456 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_158_158 = mercury__string__f_43_43_2_f_0((MR_String) "<<decr_sp_and_return>> ", ll_backend__llds_to_x86_64__V_160_160);
                          }
#line 457 "llds_to_x86_64.m"
                          {
#line 457 "llds_to_x86_64.m"
                            ll_backend__llds_to_x86_64__V_157_157 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 457 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_157_157, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_158_158));
#line 457 "llds_to_x86_64.m"
                          }
#line 456 "llds_to_x86_64.m"
                          {
#line 456 "llds_to_x86_64.m"
                            MR_Word base;
#line 456 "llds_to_x86_64.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 456 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 456 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_157_157));
#line 456 "llds_to_x86_64.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 456 "llds_to_x86_64.m"
                          }
#line 457 "llds_to_x86_64.m"
                          *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 455 "llds_to_x86_64.m"
                        }
#line 189 "llds_to_x86_64.m"
                      else
#line 189 "llds_to_x86_64.m"
                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 459 "llds_to_x86_64.m"
                          {
#line 460 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[5]);
#line 460 "llds_to_x86_64.m"
                            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 459 "llds_to_x86_64.m"
                          }
#line 189 "llds_to_x86_64.m"
                        else
#line 189 "llds_to_x86_64.m"
                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 465 "llds_to_x86_64.m"
                            {
#line 466 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[6]);
#line 466 "llds_to_x86_64.m"
                              *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 465 "llds_to_x86_64.m"
                            }
#line 189 "llds_to_x86_64.m"
                          else
#line 189 "llds_to_x86_64.m"
                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 410 "llds_to_x86_64.m"
                              {
#line 411 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[7]);
#line 411 "llds_to_x86_64.m"
                                *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 410 "llds_to_x86_64.m"
                              }
#line 189 "llds_to_x86_64.m"
                            else
#line 189 "llds_to_x86_64.m"
                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 276 "llds_to_x86_64.m"
                                {
#line 276 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__CodeAddr_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 276 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_300_300;
#line 276 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_301_301;
#line 276 "llds_to_x86_64.m"
                                  MR_Word ll_backend__llds_to_x86_64__V_302_302;
#line 276 "llds_to_x86_64.m"
                                  MR_String ll_backend__llds_to_x86_64__Label_363;

#line 277 "llds_to_x86_64.m"
                                  {
#line 277 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__code_addr_type_2_p_0(ll_backend__llds_to_x86_64__CodeAddr_46, &ll_backend__llds_to_x86_64__Label_363);
                                  }
#line 278 "llds_to_x86_64.m"
                                  {
#line 278 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_302_302 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_302_302, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_302_302, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Label_363));
#line 278 "llds_to_x86_64.m"
                                  }
#line 278 "llds_to_x86_64.m"
                                  {
#line 278 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_301_301 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_301_301, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_301_301, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_302_302));
#line 278 "llds_to_x86_64.m"
                                  }
#line 278 "llds_to_x86_64.m"
                                  {
#line 278 "llds_to_x86_64.m"
                                    ll_backend__llds_to_x86_64__V_300_300 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_300_300, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_301_301));
#line 278 "llds_to_x86_64.m"
                                  }
#line 278 "llds_to_x86_64.m"
                                  {
#line 278 "llds_to_x86_64.m"
                                    MR_Word base;
#line 278 "llds_to_x86_64.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 278 "llds_to_x86_64.m"
                                    *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_300_300));
#line 278 "llds_to_x86_64.m"
                                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 278 "llds_to_x86_64.m"
                                  }
#line 278 "llds_to_x86_64.m"
                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 276 "llds_to_x86_64.m"
                                }
#line 189 "llds_to_x86_64.m"
                              else
#line 189 "llds_to_x86_64.m"
                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 309 "llds_to_x86_64.m"
                                  {
#line 309 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__Target_54;
#line 309 "llds_to_x86_64.m"
                                    MR_String ll_backend__llds_to_x86_64__RvalStr_55;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_266_266;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_267_267;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_268_268;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_269_269;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_270_270;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__V_271_271;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__Rval_377 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__Res0_378;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__Res1_379;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__RvalOp_380;
#line 309 "llds_to_x86_64.m"
                                    MR_Word ll_backend__llds_to_x86_64__CodeAddr_382 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));

#line 310 "llds_to_x86_64.m"
                                    {
#line 310 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__code_addr_type_2_p_0(ll_backend__llds_to_x86_64__CodeAddr_382, &ll_backend__llds_to_x86_64__Target_54);
                                    }
#line 311 "llds_to_x86_64.m"
                                    {
#line 311 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132, ll_backend__llds_to_x86_64__Rval_377, &ll_backend__llds_to_x86_64__Res0_378, &ll_backend__llds_to_x86_64__Res1_379);
                                    }
#line 314 "llds_to_x86_64.m"
                                    if ((ll_backend__llds_to_x86_64__Res0_378 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 319 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__Res1_379 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 320 "llds_to_x86_64.m"
                                        {
#line 321 "llds_to_x86_64.m"
                                          {
#line 321 "llds_to_x86_64.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "if_val: Rval");
#line 321 "llds_to_x86_64.m"
                                            return;
                                          }
#line 320 "llds_to_x86_64.m"
                                        }
#line 319 "llds_to_x86_64.m"
                                      else
#line 317 "llds_to_x86_64.m"
                                        {
#line 317 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__RvalInstrs_373 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_379, (MR_Integer) 0)));

#line 318 "llds_to_x86_64.m"
                                          {
#line 318 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_373, &ll_backend__llds_to_x86_64__RvalOp_380);
                                          }
#line 317 "llds_to_x86_64.m"
                                        }
#line 314 "llds_to_x86_64.m"
                                    else
#line 313 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__RvalOp_380 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_378, (MR_Integer) 0)));
#line 324 "llds_to_x86_64.m"
                                    {
#line 324 "llds_to_x86_64.m"
                                      ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__llds_to_x86_64__RvalOp_380, &ll_backend__llds_to_x86_64__RvalStr_55);
                                    }
#line 325 "llds_to_x86_64.m"
                                    {
#line 325 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_267_267 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_267_267, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 19));
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_267_267, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalStr_55));
#line 325 "llds_to_x86_64.m"
                                    }
#line 325 "llds_to_x86_64.m"
                                    {
#line 325 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_266_266 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_266_266, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_267_267));
#line 325 "llds_to_x86_64.m"
                                    }
#line 326 "llds_to_x86_64.m"
                                    {
#line 326 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_271_271 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 326 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_271_271, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 326 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_271_271, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Target_54));
#line 326 "llds_to_x86_64.m"
                                    }
#line 326 "llds_to_x86_64.m"
                                    {
#line 326 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_270_270 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_270_270, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 326 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_270_270, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_271_271));
#line 326 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_270_270, 2) = ((MR_Box) ((MR_Integer) 9));
#line 326 "llds_to_x86_64.m"
                                    }
#line 326 "llds_to_x86_64.m"
                                    {
#line 326 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_269_269 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 326 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_269_269, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_270_270));
#line 326 "llds_to_x86_64.m"
                                    }
#line 325 "llds_to_x86_64.m"
                                    {
#line 325 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_268_268 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_268_268, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_269_269));
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_268_268, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[8])));
#line 325 "llds_to_x86_64.m"
                                    }
#line 325 "llds_to_x86_64.m"
                                    {
#line 325 "llds_to_x86_64.m"
                                      MR_Word base;
#line 325 "llds_to_x86_64.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 325 "llds_to_x86_64.m"
                                      *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_266_266));
#line 325 "llds_to_x86_64.m"
                                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_268_268));
#line 325 "llds_to_x86_64.m"
                                    }
#line 309 "llds_to_x86_64.m"
                                  }
#line 189 "llds_to_x86_64.m"
                                else
#line 189 "llds_to_x86_64.m"
                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 335 "llds_to_x86_64.m"
                                    {
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_416_416;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Tag0_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Words0_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 3)));
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__MaybeRegionRval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 7)));
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__MaybeReuse_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 8)));
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__IncrAddrInstrs_74;
#line 335 "llds_to_x86_64.m"
                                      MR_Integer ll_backend__llds_to_x86_64__Tag_75;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__ScratchReg1_76;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__TempReg2_77;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__ImmToReg_78;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__SetTag_79;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_224_224;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_225_225;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_234_234;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_242_242;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_243_243;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_244_244;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_245_245;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_246_246;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_247_247;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_248_248;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_249_249;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_251_251;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_252_252;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_254_254;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Lval_393 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Rval_394 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 4)));
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Res0_395;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Res1_396;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Res2_397;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Res3_398;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__LvalOp_399;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__RvalOp_400;
#line 335 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__Instr1_403;
#line 334 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 5)));
#line 334 "llds_to_x86_64.m"
                                      MR_Word ll_backend__llds_to_x86_64__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 6)));

#line 338 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__MaybeRegionRval_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "llds_to_x86_64.m"
                                        {
#line 337 "llds_to_x86_64.m"
                                        }
#line 338 "llds_to_x86_64.m"
                                      else
#line 339 "llds_to_x86_64.m"
                                        {
#line 340 "llds_to_x86_64.m"
                                          {
#line 340 "llds_to_x86_64.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "region");
#line 340 "llds_to_x86_64.m"
                                            return;
                                          }
#line 339 "llds_to_x86_64.m"
                                        }
#line 344 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__MaybeReuse_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 343 "llds_to_x86_64.m"
                                        {
#line 343 "llds_to_x86_64.m"
                                        }
#line 344 "llds_to_x86_64.m"
                                      else
#line 345 "llds_to_x86_64.m"
                                        {
#line 346 "llds_to_x86_64.m"
                                          {
#line 346 "llds_to_x86_64.m"
                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "reuse");
#line 346 "llds_to_x86_64.m"
                                            return;
                                          }
#line 345 "llds_to_x86_64.m"
                                        }
#line 348 "llds_to_x86_64.m"
                                      {
#line 348 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_224_224, ll_backend__llds_to_x86_64__Rval_394, &ll_backend__llds_to_x86_64__Res0_395, &ll_backend__llds_to_x86_64__Res1_396);
                                      }
#line 349 "llds_to_x86_64.m"
                                      {
#line 349 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__transform_lval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_224_224, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_225_225, ll_backend__llds_to_x86_64__Lval_393, &ll_backend__llds_to_x86_64__Res2_397, &ll_backend__llds_to_x86_64__Res3_398);
                                      }
#line 352 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__Res0_395 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "llds_to_x86_64.m"
                                        if ((ll_backend__llds_to_x86_64__Res1_396 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 358 "llds_to_x86_64.m"
                                          {
#line 359 "llds_to_x86_64.m"
                                            {
#line 359 "llds_to_x86_64.m"
                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "incr_hp: Rval");
#line 359 "llds_to_x86_64.m"
                                              return;
                                            }
#line 358 "llds_to_x86_64.m"
                                          }
#line 357 "llds_to_x86_64.m"
                                        else
#line 355 "llds_to_x86_64.m"
                                          {
#line 355 "llds_to_x86_64.m"
                                            MR_Word ll_backend__llds_to_x86_64__RvalInstrs_383 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_396, (MR_Integer) 0)));

#line 356 "llds_to_x86_64.m"
                                            {
#line 356 "llds_to_x86_64.m"
                                              ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_383, &ll_backend__llds_to_x86_64__RvalOp_400);
                                            }
#line 355 "llds_to_x86_64.m"
                                          }
#line 352 "llds_to_x86_64.m"
                                      else
#line 351 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__RvalOp_400 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_395, (MR_Integer) 0)));
#line 364 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__Res2_397 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 369 "llds_to_x86_64.m"
                                        if ((ll_backend__llds_to_x86_64__Res3_398 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 370 "llds_to_x86_64.m"
                                          {
#line 371 "llds_to_x86_64.m"
                                            {
#line 371 "llds_to_x86_64.m"
                                              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "incr_hp: Lval");
#line 371 "llds_to_x86_64.m"
                                              return;
                                            }
#line 370 "llds_to_x86_64.m"
                                          }
#line 369 "llds_to_x86_64.m"
                                        else
#line 367 "llds_to_x86_64.m"
                                          {
#line 367 "llds_to_x86_64.m"
                                            MR_Word ll_backend__llds_to_x86_64__LvalInstrs_387 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_398, (MR_Integer) 0)));

#line 368 "llds_to_x86_64.m"
                                            {
#line 368 "llds_to_x86_64.m"
                                              ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__LvalInstrs_387, &ll_backend__llds_to_x86_64__LvalOp_399);
                                            }
#line 367 "llds_to_x86_64.m"
                                          }
#line 364 "llds_to_x86_64.m"
                                      else
#line 363 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__LvalOp_399 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_397, (MR_Integer) 0)));
#line 386 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__Words0_59 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 387 "llds_to_x86_64.m"
                                        {
#line 388 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__IncrAddrInstrs_74 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 388 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_234_234 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_225_225;
#line 387 "llds_to_x86_64.m"
                                        }
#line 386 "llds_to_x86_64.m"
                                      else
#line 375 "llds_to_x86_64.m"
                                        {
#line 375 "llds_to_x86_64.m"
                                          MR_Integer ll_backend__llds_to_x86_64__Words_67 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Words0_59, (MR_Integer) 0)));
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__IncrVal_68;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__ScratchReg0_69;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__TempReg1_70;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__MemRef_71;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__LoadAddr_72;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__IncrAddInstr_73;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_232_232;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_233_233 = (MR_Word) ll_backend__llds_to_x86_64__Words_67;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_235_235;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_236_236;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_237_237;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_238_238;
#line 375 "llds_to_x86_64.m"
                                          MR_Word ll_backend__llds_to_x86_64__V_239_239;
#line 375 "llds_to_x86_64.m"
                                          MR_String ll_backend__llds_to_x86_64__RvalStr_391;

#line 376 "llds_to_x86_64.m"
                                          {
#line 376 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__V_232_232 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_232_232, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_233_233));
#line 376 "llds_to_x86_64.m"
                                          }
#line 376 "llds_to_x86_64.m"
                                          {
#line 376 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__IncrVal_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 376 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__IncrVal_68, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_232_232));
#line 376 "llds_to_x86_64.m"
                                          }
#line 377 "llds_to_x86_64.m"
                                          {
#line 377 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__ScratchReg0_69 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_225_225);
                                          }
#line 379 "llds_to_x86_64.m"
                                          {
#line 379 "llds_to_x86_64.m"
                                            ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_225_225, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_234_234);
                                          }
#line 380 "llds_to_x86_64.m"
                                          {
#line 380 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__TempReg1_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 380 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__TempReg1_70, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg0_69));
#line 380 "llds_to_x86_64.m"
                                          }
#line 381 "llds_to_x86_64.m"
                                          {
#line 381 "llds_to_x86_64.m"
                                            ll_backend__x86_64_out__operand_to_string_2_p_0(ll_backend__llds_to_x86_64__RvalOp_400, &ll_backend__llds_to_x86_64__RvalStr_391);
                                          }
#line 382 "llds_to_x86_64.m"
                                          {
#line 382 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__V_236_236 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_236_236, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalStr_391));
#line 382 "llds_to_x86_64.m"
                                          }
#line 382 "llds_to_x86_64.m"
                                          {
#line 382 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__V_235_235 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 382 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__V_235_235, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_236_236));
#line 382 "llds_to_x86_64.m"
                                          }
#line 382 "llds_to_x86_64.m"
                                          {
#line 382 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__MemRef_71 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 382 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__MemRef_71, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_235_235));
#line 382 "llds_to_x86_64.m"
                                          }
#line 383 "llds_to_x86_64.m"
                                          {
#line 383 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__V_237_237 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 383 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_237_237, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 383 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_237_237, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__MemRef_71));
#line 383 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_237_237, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg1_70));
#line 383 "llds_to_x86_64.m"
                                          }
#line 383 "llds_to_x86_64.m"
                                          {
#line 383 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__LoadAddr_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 383 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LoadAddr_72, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_237_237));
#line 383 "llds_to_x86_64.m"
                                          }
#line 384 "llds_to_x86_64.m"
                                          {
#line 384 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__V_238_238 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 384 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_238_238, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__IncrVal_68));
#line 384 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_238_238, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg1_70));
#line 384 "llds_to_x86_64.m"
                                          }
#line 384 "llds_to_x86_64.m"
                                          {
#line 384 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__IncrAddInstr_73 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 384 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__IncrAddInstr_73, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_238_238));
#line 384 "llds_to_x86_64.m"
                                          }
#line 385 "llds_to_x86_64.m"
                                          {
#line 385 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__V_239_239 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_239_239, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__IncrAddInstr_73));
#line 385 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_239_239, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 385 "llds_to_x86_64.m"
                                          }
#line 385 "llds_to_x86_64.m"
                                          {
#line 385 "llds_to_x86_64.m"
                                            ll_backend__llds_to_x86_64__IncrAddrInstrs_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 385 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__IncrAddrInstrs_74, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LoadAddr_72));
#line 385 "llds_to_x86_64.m"
                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__IncrAddrInstrs_74, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_239_239));
#line 385 "llds_to_x86_64.m"
                                          }
#line 375 "llds_to_x86_64.m"
                                        }
#line 392 "llds_to_x86_64.m"
                                      if ((ll_backend__llds_to_x86_64__Tag0_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__Tag_75 = (MR_Integer) 0;
#line 392 "llds_to_x86_64.m"
                                      else
#line 391 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__Tag_75 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Tag0_58, (MR_Integer) 0)));
#line 396 "llds_to_x86_64.m"
                                      {
#line 396 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__ScratchReg1_76 = ll_backend__x86_64_regs__reg_map_get_scratch_reg_1_f_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_234_234);
                                      }
#line 397 "llds_to_x86_64.m"
                                      {
#line 397 "llds_to_x86_64.m"
                                        ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_234_234, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132);
                                      }
#line 398 "llds_to_x86_64.m"
                                      {
#line 398 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__TempReg2_77 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 398 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__TempReg2_77, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ScratchReg1_76));
#line 398 "llds_to_x86_64.m"
                                      }
#line 399 "llds_to_x86_64.m"
                                      {
#line 399 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_242_242 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 399 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_242_242, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 399 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_242_242, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp_400));
#line 399 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_242_242, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg2_77));
#line 399 "llds_to_x86_64.m"
                                      }
#line 399 "llds_to_x86_64.m"
                                      {
#line 399 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__ImmToReg_78 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 399 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__ImmToReg_78, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_242_242));
#line 399 "llds_to_x86_64.m"
                                      }
#line 400 "llds_to_x86_64.m"
                                      ll_backend__llds_to_x86_64__V_246_246 = (MR_Word) ll_backend__llds_to_x86_64__Tag_75;
#line 400 "llds_to_x86_64.m"
                                      {
#line 400 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_245_245 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__V_245_245, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_246_246));
#line 400 "llds_to_x86_64.m"
                                      }
#line 400 "llds_to_x86_64.m"
                                      {
#line 400 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_244_244 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_244_244, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_245_245));
#line 400 "llds_to_x86_64.m"
                                      }
#line 400 "llds_to_x86_64.m"
                                      {
#line 400 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_243_243 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 400 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_243_243, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 400 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_243_243, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_244_244));
#line 400 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_243_243, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg2_77));
#line 400 "llds_to_x86_64.m"
                                      }
#line 400 "llds_to_x86_64.m"
                                      {
#line 400 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__SetTag_79 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 400 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__SetTag_79, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_243_243));
#line 400 "llds_to_x86_64.m"
                                      }
#line 401 "llds_to_x86_64.m"
                                      {
#line 401 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_247_247 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 401 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_247_247, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 401 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_247_247, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__TempReg2_77));
#line 401 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_247_247, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalOp_399));
#line 401 "llds_to_x86_64.m"
                                      }
#line 401 "llds_to_x86_64.m"
                                      {
#line 401 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__Instr1_403 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_403, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_247_247));
#line 401 "llds_to_x86_64.m"
                                      }
#line 8678 "ll_backend.llds_to_x86_64.c"
                                      ll_backend__llds_to_x86_64__TypeCtorInfo_416_416 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 402 "llds_to_x86_64.m"
                                      {
#line 402 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_249_249 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_249_249, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ImmToReg_78));
#line 402 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_249_249, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "llds_to_x86_64.m"
                                      }
#line 402 "llds_to_x86_64.m"
                                      {
#line 402 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_252_252 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_252_252, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__SetTag_79));
#line 402 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_252_252, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "llds_to_x86_64.m"
                                      }
#line 402 "llds_to_x86_64.m"
                                      {
#line 402 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_254_254 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_254_254, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_403));
#line 402 "llds_to_x86_64.m"
                                        MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_254_254, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 402 "llds_to_x86_64.m"
                                      }
#line 402 "llds_to_x86_64.m"
                                      {
#line 402 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_251_251 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_416_416, ll_backend__llds_to_x86_64__V_252_252, ll_backend__llds_to_x86_64__V_254_254);
                                      }
#line 402 "llds_to_x86_64.m"
                                      {
#line 402 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_248_248 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_416_416, ll_backend__llds_to_x86_64__V_249_249, ll_backend__llds_to_x86_64__V_251_251);
                                      }
#line 402 "llds_to_x86_64.m"
                                      {
#line 402 "llds_to_x86_64.m"
                                        *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_416_416, ll_backend__llds_to_x86_64__IncrAddrInstrs_74, ll_backend__llds_to_x86_64__V_248_248);
                                      }
#line 335 "llds_to_x86_64.m"
                                    }
#line 189 "llds_to_x86_64.m"
                                  else
#line 189 "llds_to_x86_64.m"
                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 443 "llds_to_x86_64.m"
                                      {
#line 443 "llds_to_x86_64.m"
                                        MR_Integer ll_backend__llds_to_x86_64__NumSlots_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 443 "llds_to_x86_64.m"
                                        MR_String ll_backend__llds_to_x86_64__ProcName_101 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));
#line 443 "llds_to_x86_64.m"
                                        MR_String ll_backend__llds_to_x86_64__V_171_171;
#line 443 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_173_173;
#line 443 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_174_174;
#line 443 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_177_177;
#line 443 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__Instr1_405;
#line 443 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__Instr2_406;
#line 443 "llds_to_x86_64.m"
                                        MR_Word ll_backend__llds_to_x86_64__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 3)));

#line 444 "llds_to_x86_64.m"
                                        {
#line 444 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__V_171_171 = mercury__string__f_43_43_2_f_0((MR_String) "<<incr_sp>> ", ll_backend__llds_to_x86_64__ProcName_101);
                                        }
#line 444 "llds_to_x86_64.m"
                                        {
#line 444 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__Instr1_405 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 444 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__Instr1_405, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_171_171));
#line 444 "llds_to_x86_64.m"
                                        }
#line 445 "llds_to_x86_64.m"
                                        ll_backend__llds_to_x86_64__V_174_174 = (MR_Word) ll_backend__llds_to_x86_64__NumSlots_100;
#line 445 "llds_to_x86_64.m"
                                        {
#line 445 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__V_173_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 445 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_173_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 445 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_173_173, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_174_174));
#line 445 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_173_173, 2) = ((MR_Box) (((MR_Box) ((MR_Integer) 0))));
#line 445 "llds_to_x86_64.m"
                                        }
#line 445 "llds_to_x86_64.m"
                                        {
#line 445 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__Instr2_406 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 445 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr2_406, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_173_173));
#line 445 "llds_to_x86_64.m"
                                        }
#line 446 "llds_to_x86_64.m"
                                        {
#line 446 "llds_to_x86_64.m"
                                          ll_backend__llds_to_x86_64__V_177_177 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_177_177, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr2_406));
#line 446 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_177_177, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 446 "llds_to_x86_64.m"
                                        }
#line 446 "llds_to_x86_64.m"
                                        {
#line 446 "llds_to_x86_64.m"
                                          MR_Word base;
#line 446 "llds_to_x86_64.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 446 "llds_to_x86_64.m"
                                          *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 446 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_405));
#line 446 "llds_to_x86_64.m"
                                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_177_177));
#line 446 "llds_to_x86_64.m"
                                        }
#line 446 "llds_to_x86_64.m"
                                        *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 443 "llds_to_x86_64.m"
                                      }
#line 189 "llds_to_x86_64.m"
                                    else
#line 189 "llds_to_x86_64.m"
                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 462 "llds_to_x86_64.m"
                                        {
#line 463 "llds_to_x86_64.m"
                                          *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[9]);
#line 463 "llds_to_x86_64.m"
                                          *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 462 "llds_to_x86_64.m"
                                        }
#line 189 "llds_to_x86_64.m"
                                      else
#line 189 "llds_to_x86_64.m"
                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 468 "llds_to_x86_64.m"
                                          {
#line 469 "llds_to_x86_64.m"
                                            *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[10]);
#line 469 "llds_to_x86_64.m"
                                            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 468 "llds_to_x86_64.m"
                                          }
#line 189 "llds_to_x86_64.m"
                                        else
#line 189 "llds_to_x86_64.m"
                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 201 "llds_to_x86_64.m"
                                            {
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Lval_639 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Rval_640 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Res0_641;
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Res1_642;
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Res2_643;
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__Res3_644;
#line 201 "llds_to_x86_64.m"
                                              MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_321_654;

#line 202 "llds_to_x86_64.m"
                                              {
#line 202 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__transform_lval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_321_654, ll_backend__llds_to_x86_64__Lval_639, &ll_backend__llds_to_x86_64__Res0_641, &ll_backend__llds_to_x86_64__Res1_642);
                                              }
#line 203 "llds_to_x86_64.m"
                                              {
#line 203 "llds_to_x86_64.m"
                                                ll_backend__llds_to_x86_64__transform_rval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_321_654, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132, ll_backend__llds_to_x86_64__Rval_640, &ll_backend__llds_to_x86_64__Res2_643, &ll_backend__llds_to_x86_64__Res3_644);
                                              }
#line 221 "llds_to_x86_64.m"
                                              if ((ll_backend__llds_to_x86_64__Res0_641 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 242 "llds_to_x86_64.m"
                                                if ((ll_backend__llds_to_x86_64__Res1_642 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 243 "llds_to_x86_64.m"
                                                  {
#line 244 "llds_to_x86_64.m"
                                                    {
#line 244 "llds_to_x86_64.m"
                                                      mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "assign: unexpected: Lval");
#line 244 "llds_to_x86_64.m"
                                                      return;
                                                    }
#line 243 "llds_to_x86_64.m"
                                                  }
#line 242 "llds_to_x86_64.m"
                                                else
#line 224 "llds_to_x86_64.m"
                                                  {
#line 224 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__LvalInstrs_476 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_642, (MR_Integer) 0)));
#line 224 "llds_to_x86_64.m"
                                                    MR_Word ll_backend__llds_to_x86_64__LvalLastOp_477;

#line 225 "llds_to_x86_64.m"
                                                    {
#line 225 "llds_to_x86_64.m"
                                                      ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__LvalInstrs_476, &ll_backend__llds_to_x86_64__LvalLastOp_477);
                                                    }
#line 230 "llds_to_x86_64.m"
                                                    if ((ll_backend__llds_to_x86_64__Res2_643 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "llds_to_x86_64.m"
                                                      if ((ll_backend__llds_to_x86_64__Res3_644 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "llds_to_x86_64.m"
                                                        {
#line 239 "llds_to_x86_64.m"
                                                          {
#line 239 "llds_to_x86_64.m"
                                                            mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "assign: unexpected: Rval");
#line 239 "llds_to_x86_64.m"
                                                            return;
                                                          }
#line 238 "llds_to_x86_64.m"
                                                        }
#line 237 "llds_to_x86_64.m"
                                                      else
#line 233 "llds_to_x86_64.m"
                                                        {
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__TypeCtorInfo_414_430;
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__RvalLastOp_423;
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_424_424;
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_425_425;
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_426_426;
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__RvalInstrs_428 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_644, (MR_Integer) 0)));
#line 233 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Instr1_429;

#line 234 "llds_to_x86_64.m"
                                                          {
#line 234 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_428, &ll_backend__llds_to_x86_64__RvalLastOp_423);
                                                          }
#line 235 "llds_to_x86_64.m"
                                                          {
#line 235 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_424_424 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 235 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_424_424, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 235 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_424_424, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalLastOp_423));
#line 235 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_424_424, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalLastOp_477));
#line 235 "llds_to_x86_64.m"
                                                          }
#line 235 "llds_to_x86_64.m"
                                                          {
#line 235 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__Instr1_429 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 235 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_429, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_424_424));
#line 235 "llds_to_x86_64.m"
                                                          }
#line 8958 "ll_backend.llds_to_x86_64.c"
                                                          ll_backend__llds_to_x86_64__TypeCtorInfo_414_430 = (MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0;
#line 236 "llds_to_x86_64.m"
                                                          {
#line 236 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_426_426 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 236 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_426_426, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_429));
#line 236 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_426_426, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 236 "llds_to_x86_64.m"
                                                          }
#line 236 "llds_to_x86_64.m"
                                                          {
#line 236 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_425_425 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_414_430, ll_backend__llds_to_x86_64__RvalInstrs_428, ll_backend__llds_to_x86_64__V_426_426);
                                                          }
#line 236 "llds_to_x86_64.m"
                                                          {
#line 236 "llds_to_x86_64.m"
                                                            *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0(ll_backend__llds_to_x86_64__TypeCtorInfo_414_430, ll_backend__llds_to_x86_64__LvalInstrs_476, ll_backend__llds_to_x86_64__V_425_425);
                                                          }
#line 233 "llds_to_x86_64.m"
                                                        }
#line 230 "llds_to_x86_64.m"
                                                    else
#line 227 "llds_to_x86_64.m"
                                                      {
#line 227 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__Instr1_453;
#line 227 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__V_454_454;
#line 227 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__V_455_455;
#line 227 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__RvalOp_457 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_643, (MR_Integer) 0)));

#line 228 "llds_to_x86_64.m"
                                                        {
#line 228 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__V_454_454 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 228 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_454_454, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 228 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_454_454, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp_457));
#line 228 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_454_454, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalLastOp_477));
#line 228 "llds_to_x86_64.m"
                                                        }
#line 228 "llds_to_x86_64.m"
                                                        {
#line 228 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__Instr1_453 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 228 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_453, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_454_454));
#line 228 "llds_to_x86_64.m"
                                                        }
#line 229 "llds_to_x86_64.m"
                                                        {
#line 229 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__V_455_455 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 229 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_455_455, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_453));
#line 229 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_455_455, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 229 "llds_to_x86_64.m"
                                                        }
#line 229 "llds_to_x86_64.m"
                                                        {
#line 229 "llds_to_x86_64.m"
                                                          *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__LvalInstrs_476, ll_backend__llds_to_x86_64__V_455_455);
                                                        }
#line 227 "llds_to_x86_64.m"
                                                      }
#line 224 "llds_to_x86_64.m"
                                                  }
#line 221 "llds_to_x86_64.m"
                                              else
#line 205 "llds_to_x86_64.m"
                                                {
#line 205 "llds_to_x86_64.m"
                                                  MR_Word ll_backend__llds_to_x86_64__LvalOp_587 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_641, (MR_Integer) 0)));

#line 209 "llds_to_x86_64.m"
                                                  if ((ll_backend__llds_to_x86_64__Res2_643 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "llds_to_x86_64.m"
                                                    if ((ll_backend__llds_to_x86_64__Res3_644 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 217 "llds_to_x86_64.m"
                                                      {
#line 218 "llds_to_x86_64.m"
                                                        {
#line 218 "llds_to_x86_64.m"
                                                          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "assign: unexpected: Rval");
#line 218 "llds_to_x86_64.m"
                                                          return;
                                                        }
#line 217 "llds_to_x86_64.m"
                                                      }
#line 216 "llds_to_x86_64.m"
                                                    else
#line 212 "llds_to_x86_64.m"
                                                      {
#line 212 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__RvalInstrs_542 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res3_644, (MR_Integer) 0)));
#line 212 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__LastOp_543;
#line 212 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__LastInstr_544;
#line 212 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__V_545_545;
#line 212 "llds_to_x86_64.m"
                                                        MR_Word ll_backend__llds_to_x86_64__V_546_546;

#line 213 "llds_to_x86_64.m"
                                                        {
#line 213 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__RvalInstrs_542, &ll_backend__llds_to_x86_64__LastOp_543);
                                                        }
#line 214 "llds_to_x86_64.m"
                                                        {
#line 214 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__V_545_545 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 214 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_545_545, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 214 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_545_545, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__LastOp_543));
#line 214 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_545_545, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalOp_587));
#line 214 "llds_to_x86_64.m"
                                                        }
#line 214 "llds_to_x86_64.m"
                                                        {
#line 214 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__LastInstr_544 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 214 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__LastInstr_544, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_545_545));
#line 214 "llds_to_x86_64.m"
                                                        }
#line 215 "llds_to_x86_64.m"
                                                        {
#line 215 "llds_to_x86_64.m"
                                                          ll_backend__llds_to_x86_64__V_546_546 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 215 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_546_546, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LastInstr_544));
#line 215 "llds_to_x86_64.m"
                                                          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_546_546, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 215 "llds_to_x86_64.m"
                                                        }
#line 215 "llds_to_x86_64.m"
                                                        {
#line 215 "llds_to_x86_64.m"
                                                          *ll_backend__llds_to_x86_64__Instrs_7 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__RvalInstrs_542, ll_backend__llds_to_x86_64__V_546_546);
                                                        }
#line 212 "llds_to_x86_64.m"
                                                      }
#line 209 "llds_to_x86_64.m"
                                                  else
#line 207 "llds_to_x86_64.m"
                                                    {
#line 207 "llds_to_x86_64.m"
                                                      MR_Word ll_backend__llds_to_x86_64__RvalOp_569 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res2_643, (MR_Integer) 0)));
#line 207 "llds_to_x86_64.m"
                                                      MR_Word ll_backend__llds_to_x86_64__V_570_570;
#line 207 "llds_to_x86_64.m"
                                                      MR_Word ll_backend__llds_to_x86_64__V_571_571;

#line 208 "llds_to_x86_64.m"
                                                      {
#line 208 "llds_to_x86_64.m"
                                                        ll_backend__llds_to_x86_64__V_571_571 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 208 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_571_571, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 208 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_571_571, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__RvalOp_569));
#line 208 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_571_571, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalOp_587));
#line 208 "llds_to_x86_64.m"
                                                      }
#line 208 "llds_to_x86_64.m"
                                                      {
#line 208 "llds_to_x86_64.m"
                                                        ll_backend__llds_to_x86_64__V_570_570 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 208 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_570_570, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_571_571));
#line 208 "llds_to_x86_64.m"
                                                      }
#line 208 "llds_to_x86_64.m"
                                                      {
#line 208 "llds_to_x86_64.m"
                                                        MR_Word base;
#line 208 "llds_to_x86_64.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 208 "llds_to_x86_64.m"
                                                        *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 208 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_570_570));
#line 208 "llds_to_x86_64.m"
                                                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 208 "llds_to_x86_64.m"
                                                      }
#line 207 "llds_to_x86_64.m"
                                                    }
#line 205 "llds_to_x86_64.m"
                                                }
#line 201 "llds_to_x86_64.m"
                                            }
#line 189 "llds_to_x86_64.m"
                                          else
#line 189 "llds_to_x86_64.m"
                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 272 "llds_to_x86_64.m"
                                              {
#line 272 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__Label_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 272 "llds_to_x86_64.m"
                                                MR_String ll_backend__llds_to_x86_64__LabelStr_45;
#line 272 "llds_to_x86_64.m"
                                                MR_Word ll_backend__llds_to_x86_64__V_305_305;

#line 273 "llds_to_x86_64.m"
                                                {
#line 273 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__LabelStr_45 = ll_backend__llds_out__llds_out_code_addr__label_to_c_string_2_f_0(ll_backend__llds_to_x86_64__Label_44, (MR_Integer) 0);
                                                }
#line 274 "llds_to_x86_64.m"
                                                {
#line 274 "llds_to_x86_64.m"
                                                  ll_backend__llds_to_x86_64__V_305_305 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 274 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_305_305, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__LabelStr_45));
#line 274 "llds_to_x86_64.m"
                                                }
#line 274 "llds_to_x86_64.m"
                                                {
#line 274 "llds_to_x86_64.m"
                                                  MR_Word base;
#line 274 "llds_to_x86_64.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 274 "llds_to_x86_64.m"
                                                  *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 274 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_305_305));
#line 274 "llds_to_x86_64.m"
                                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 274 "llds_to_x86_64.m"
                                                }
#line 274 "llds_to_x86_64.m"
                                                *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 272 "llds_to_x86_64.m"
                                              }
#line 189 "llds_to_x86_64.m"
                                            else
#line 189 "llds_to_x86_64.m"
                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 471 "llds_to_x86_64.m"
                                                {
#line 472 "llds_to_x86_64.m"
                                                  *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[11]);
#line 472 "llds_to_x86_64.m"
                                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 471 "llds_to_x86_64.m"
                                                }
#line 189 "llds_to_x86_64.m"
                                              else
#line 189 "llds_to_x86_64.m"
                                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 480 "llds_to_x86_64.m"
                                                  {
#line 481 "llds_to_x86_64.m"
                                                    *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[12]);
#line 481 "llds_to_x86_64.m"
                                                    *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 480 "llds_to_x86_64.m"
                                                  }
#line 189 "llds_to_x86_64.m"
                                                else
#line 189 "llds_to_x86_64.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 477 "llds_to_x86_64.m"
                                                    {
#line 478 "llds_to_x86_64.m"
                                                      *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[13]);
#line 478 "llds_to_x86_64.m"
                                                      *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 477 "llds_to_x86_64.m"
                                                    }
#line 189 "llds_to_x86_64.m"
                                                  else
#line 189 "llds_to_x86_64.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 474 "llds_to_x86_64.m"
                                                      {
#line 475 "llds_to_x86_64.m"
                                                        *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[14]);
#line 475 "llds_to_x86_64.m"
                                                        *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 474 "llds_to_x86_64.m"
                                                      }
#line 189 "llds_to_x86_64.m"
                                                    else
#line 189 "llds_to_x86_64.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 248 "llds_to_x86_64.m"
                                                        {
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Target0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 1)));
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Continuation0_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 2)));
#line 248 "llds_to_x86_64.m"
                                                          MR_String ll_backend__llds_to_x86_64__Target1_35;
#line 248 "llds_to_x86_64.m"
                                                          MR_String ll_backend__llds_to_x86_64__Continuation1_36;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Op0_37;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Instr0_38;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Op_39;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Instr2_41;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_315_315;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_316_316;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_317_317;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_318_318;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_319_319;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__Instr1_362;
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 3)));
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 4)));
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 5)));
#line 248 "llds_to_x86_64.m"
                                                          MR_Word ll_backend__llds_to_x86_64__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 6)));

#line 249 "llds_to_x86_64.m"
                                                          {
#line 249 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__code_addr_type_2_p_0(ll_backend__llds_to_x86_64__Target0_29, &ll_backend__llds_to_x86_64__Target1_35);
                                                          }
#line 250 "llds_to_x86_64.m"
                                                          {
#line 250 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__code_addr_type_2_p_0(ll_backend__llds_to_x86_64__Continuation0_30, &ll_backend__llds_to_x86_64__Continuation1_36);
                                                          }
#line 251 "llds_to_x86_64.m"
                                                          {
#line 251 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__lval_reg_locn_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &ll_backend__llds_to_x86_64__Op0_37, &ll_backend__llds_to_x86_64__Instr0_38);
                                                          }
#line 252 "llds_to_x86_64.m"
                                                          {
#line 252 "llds_to_x86_64.m"
                                                            ll_backend__x86_64_regs__reg_map_remove_scratch_reg_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131, ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132);
                                                          }
#line 255 "llds_to_x86_64.m"
                                                          if ((ll_backend__llds_to_x86_64__Op0_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 260 "llds_to_x86_64.m"
                                                            if ((ll_backend__llds_to_x86_64__Instr0_38 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "llds_to_x86_64.m"
                                                              {
#line 262 "llds_to_x86_64.m"
                                                                {
#line 262 "llds_to_x86_64.m"
                                                                  mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.instr_to_x86_64\'/4", (MR_String) "llcall: lval_reg_locn failed");
#line 262 "llds_to_x86_64.m"
                                                                  return;
                                                                }
#line 261 "llds_to_x86_64.m"
                                                              }
#line 260 "llds_to_x86_64.m"
                                                            else
#line 258 "llds_to_x86_64.m"
                                                              {
#line 258 "llds_to_x86_64.m"
                                                                MR_Word ll_backend__llds_to_x86_64__Instr_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Instr0_38, (MR_Integer) 0)));

#line 259 "llds_to_x86_64.m"
                                                                {
#line 259 "llds_to_x86_64.m"
                                                                  ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__Instr_40, &ll_backend__llds_to_x86_64__Op_39);
                                                                }
#line 258 "llds_to_x86_64.m"
                                                              }
#line 255 "llds_to_x86_64.m"
                                                          else
#line 254 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__Op_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Op0_37, (MR_Integer) 0)));
#line 265 "llds_to_x86_64.m"
                                                          {
#line 265 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_316_316 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 265 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_316_316, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 265 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_316_316, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Continuation1_36));
#line 265 "llds_to_x86_64.m"
                                                          }
#line 265 "llds_to_x86_64.m"
                                                          {
#line 265 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_315_315 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 265 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_315_315, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 265 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_315_315, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_316_316));
#line 265 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_315_315, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__Op_39));
#line 265 "llds_to_x86_64.m"
                                                          }
#line 265 "llds_to_x86_64.m"
                                                          {
#line 265 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__Instr1_362 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 265 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr1_362, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_315_315));
#line 265 "llds_to_x86_64.m"
                                                          }
#line 266 "llds_to_x86_64.m"
                                                          {
#line 266 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_318_318 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_318_318, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 266 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_318_318, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Target1_35));
#line 266 "llds_to_x86_64.m"
                                                          }
#line 266 "llds_to_x86_64.m"
                                                          {
#line 266 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_317_317 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 266 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_317_317, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 266 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_317_317, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_318_318));
#line 266 "llds_to_x86_64.m"
                                                          }
#line 266 "llds_to_x86_64.m"
                                                          {
#line 266 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__Instr2_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 266 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr2_41, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_317_317));
#line 266 "llds_to_x86_64.m"
                                                          }
#line 267 "llds_to_x86_64.m"
                                                          {
#line 267 "llds_to_x86_64.m"
                                                            ll_backend__llds_to_x86_64__V_319_319 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_319_319, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr2_41));
#line 267 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_319_319, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 267 "llds_to_x86_64.m"
                                                          }
#line 267 "llds_to_x86_64.m"
                                                          {
#line 267 "llds_to_x86_64.m"
                                                            MR_Word base;
#line 267 "llds_to_x86_64.m"
                                                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 267 "llds_to_x86_64.m"
                                                            *ll_backend__llds_to_x86_64__Instrs_7 = base;
#line 267 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr1_362));
#line 267 "llds_to_x86_64.m"
                                                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_319_319));
#line 267 "llds_to_x86_64.m"
                                                          }
#line 248 "llds_to_x86_64.m"
                                                        }
#line 189 "llds_to_x86_64.m"
                                                      else
#line 189 "llds_to_x86_64.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 404 "llds_to_x86_64.m"
                                                          {
#line 405 "llds_to_x86_64.m"
                                                            *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[15]);
#line 405 "llds_to_x86_64.m"
                                                            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 404 "llds_to_x86_64.m"
                                                          }
#line 189 "llds_to_x86_64.m"
                                                        else
#line 189 "llds_to_x86_64.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 437 "llds_to_x86_64.m"
                                                            {
#line 438 "llds_to_x86_64.m"
                                                              *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[16]);
#line 438 "llds_to_x86_64.m"
                                                              *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 437 "llds_to_x86_64.m"
                                                            }
#line 189 "llds_to_x86_64.m"
                                                          else
#line 189 "llds_to_x86_64.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 269 "llds_to_x86_64.m"
                                                              {
#line 270 "llds_to_x86_64.m"
                                                                *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[17]);
#line 270 "llds_to_x86_64.m"
                                                                *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 269 "llds_to_x86_64.m"
                                                              }
#line 189 "llds_to_x86_64.m"
                                                            else
#line 189 "llds_to_x86_64.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 440 "llds_to_x86_64.m"
                                                                {
#line 441 "llds_to_x86_64.m"
                                                                  *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[18]);
#line 441 "llds_to_x86_64.m"
                                                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 440 "llds_to_x86_64.m"
                                                                }
#line 189 "llds_to_x86_64.m"
                                                              else
#line 189 "llds_to_x86_64.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 413 "llds_to_x86_64.m"
                                                                  {
#line 414 "llds_to_x86_64.m"
                                                                    *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[19]);
#line 414 "llds_to_x86_64.m"
                                                                    *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 413 "llds_to_x86_64.m"
                                                                  }
#line 189 "llds_to_x86_64.m"
                                                                else
#line 189 "llds_to_x86_64.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 416 "llds_to_x86_64.m"
                                                                    {
#line 417 "llds_to_x86_64.m"
                                                                      *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[20]);
#line 417 "llds_to_x86_64.m"
                                                                      *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 416 "llds_to_x86_64.m"
                                                                    }
#line 189 "llds_to_x86_64.m"
                                                                  else
#line 189 "llds_to_x86_64.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 419 "llds_to_x86_64.m"
                                                                      {
#line 420 "llds_to_x86_64.m"
                                                                        *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[21]);
#line 420 "llds_to_x86_64.m"
                                                                        *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 419 "llds_to_x86_64.m"
                                                                      }
#line 189 "llds_to_x86_64.m"
                                                                    else
#line 189 "llds_to_x86_64.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 428 "llds_to_x86_64.m"
                                                                        {
#line 429 "llds_to_x86_64.m"
                                                                          *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[22]);
#line 429 "llds_to_x86_64.m"
                                                                          *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 428 "llds_to_x86_64.m"
                                                                        }
#line 189 "llds_to_x86_64.m"
                                                                      else
#line 189 "llds_to_x86_64.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 407 "llds_to_x86_64.m"
                                                                          {
#line 408 "llds_to_x86_64.m"
                                                                            *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[23]);
#line 408 "llds_to_x86_64.m"
                                                                            *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 407 "llds_to_x86_64.m"
                                                                          }
#line 189 "llds_to_x86_64.m"
                                                                        else
#line 189 "llds_to_x86_64.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 331 "llds_to_x86_64.m"
                                                                            {
#line 332 "llds_to_x86_64.m"
                                                                              *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[24]);
#line 332 "llds_to_x86_64.m"
                                                                              *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 331 "llds_to_x86_64.m"
                                                                            }
#line 189 "llds_to_x86_64.m"
                                                                          else
#line 189 "llds_to_x86_64.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 328 "llds_to_x86_64.m"
                                                                              {
#line 329 "llds_to_x86_64.m"
                                                                                *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[25]);
#line 329 "llds_to_x86_64.m"
                                                                                *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 328 "llds_to_x86_64.m"
                                                                              }
#line 189 "llds_to_x86_64.m"
                                                                            else
#line 189 "llds_to_x86_64.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__llds_to_x86_64__Uinstr_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Uinstr_6, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 425 "llds_to_x86_64.m"
                                                                                {
#line 426 "llds_to_x86_64.m"
                                                                                  *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[26]);
#line 426 "llds_to_x86_64.m"
                                                                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 425 "llds_to_x86_64.m"
                                                                                }
#line 189 "llds_to_x86_64.m"
                                                                              else
#line 422 "llds_to_x86_64.m"
                                                                                {
#line 423 "llds_to_x86_64.m"
                                                                                  *ll_backend__llds_to_x86_64__Instrs_7 = (MR_Word) MR_mkword(MR_mktag(1), &ll_backend__llds_to_x86_64_scalar_common_1[27]);
#line 423 "llds_to_x86_64.m"
                                                                                  *ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_132 = ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_131;
#line 422 "llds_to_x86_64.m"
                                                                                }
#line 189 "llds_to_x86_64.m"
  }
#line 184 "llds_to_x86_64.m"
}

#line 160 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_livevals_3_p_0(
#line 160 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 160 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 160 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3)
#line 160 "llds_to_x86_64.m"
{
#line 163 "llds_to_x86_64.m"
  {
#line 163 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 163 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 163 "llds_to_x86_64.m"
      *ll_backend__llds_to_x86_64__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 163 "llds_to_x86_64.m"
    else
#line 164 "llds_to_x86_64.m"
      {
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Lval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Lvals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Instr_8;
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Instrs_9;
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Res0_10;
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Res1_11;
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__LvalOp_12;
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_15_15;
#line 164 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_19_19;

#line 165 "llds_to_x86_64.m"
        {
#line 165 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_lval_5_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_15_15, ll_backend__llds_to_x86_64__Lval_6, &ll_backend__llds_to_x86_64__Res0_10, &ll_backend__llds_to_x86_64__Res1_11);
        }
#line 168 "llds_to_x86_64.m"
        if ((ll_backend__llds_to_x86_64__Res0_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 173 "llds_to_x86_64.m"
          if ((ll_backend__llds_to_x86_64__Res1_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 174 "llds_to_x86_64.m"
            {
#line 175 "llds_to_x86_64.m"
              {
#line 175 "llds_to_x86_64.m"
                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.llds_to_x86_64", (MR_String) "predicate \140ll_backend.llds_to_x86_64.transform_livevals\'/3", (MR_String) "no results");
#line 175 "llds_to_x86_64.m"
                return;
              }
#line 174 "llds_to_x86_64.m"
            }
#line 173 "llds_to_x86_64.m"
          else
#line 171 "llds_to_x86_64.m"
            {
#line 171 "llds_to_x86_64.m"
              MR_Word ll_backend__llds_to_x86_64__LvalInstrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res1_11, (MR_Integer) 0)));

#line 172 "llds_to_x86_64.m"
              {
#line 172 "llds_to_x86_64.m"
                ll_backend__llds_to_x86_64__get_last_instr_operand_2_p_0(ll_backend__llds_to_x86_64__LvalInstrs_13, &ll_backend__llds_to_x86_64__LvalOp_12);
              }
#line 171 "llds_to_x86_64.m"
            }
#line 168 "llds_to_x86_64.m"
        else
#line 167 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__LvalOp_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__Res0_10, (MR_Integer) 0)));
#line 178 "llds_to_x86_64.m"
        {
#line 178 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 178 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 178 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(3), &ll_backend__llds_to_x86_64_scalar_common_1[1])));
#line 178 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__LvalOp_12));
#line 178 "llds_to_x86_64.m"
        }
#line 178 "llds_to_x86_64.m"
        {
#line 178 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__Instr_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 178 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__Instr_8, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_19_19));
#line 178 "llds_to_x86_64.m"
        }
#line 179 "llds_to_x86_64.m"
        {
#line 179 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_livevals_3_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_15_15, ll_backend__llds_to_x86_64__Lvals_7, &ll_backend__llds_to_x86_64__Instrs_9);
        }
#line 164 "llds_to_x86_64.m"
        {
#line 164 "llds_to_x86_64.m"
          MR_Word base;
#line 164 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 164 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__3_3 = base;
#line 164 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr_8));
#line 164 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Instrs_9));
#line 164 "llds_to_x86_64.m"
        }
#line 164 "llds_to_x86_64.m"
      }
#line 163 "llds_to_x86_64.m"
  }
#line 160 "llds_to_x86_64.m"
}

#line 144 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_block_instr_list_3_p_0(
#line 144 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 144 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 144 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3)
#line 144 "llds_to_x86_64.m"
{
#line 147 "llds_to_x86_64.m"
  {
#line 147 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 147 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "llds_to_x86_64.m"
      *ll_backend__llds_to_x86_64__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 147 "llds_to_x86_64.m"
    else
#line 149 "llds_to_x86_64.m"
      {
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CInstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CInstr0s_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Instr0_8;
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__Instr0s_9;
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CInstr_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CInstr0_6, (MR_Integer) 0)));
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_13_13;
#line 149 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_14_14;
#line 150 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CInstr0_6, (MR_Integer) 1)));

#line 151 "llds_to_x86_64.m"
        {
#line 151 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__instr_to_x86_64_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_13_13, ll_backend__llds_to_x86_64__CInstr_10, &ll_backend__llds_to_x86_64__Instr0_8);
        }
#line 152 "llds_to_x86_64.m"
        {
#line 152 "llds_to_x86_64.m"
          ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_13_13, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_14_14);
        }
#line 153 "llds_to_x86_64.m"
        {
#line 153 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_block_instr_list_3_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_14_14, ll_backend__llds_to_x86_64__CInstr0s_7, &ll_backend__llds_to_x86_64__Instr0s_9);
        }
#line 149 "llds_to_x86_64.m"
        {
#line 149 "llds_to_x86_64.m"
          MR_Word base;
#line 149 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 149 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__3_3 = base;
#line 149 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr0_8));
#line 149 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Instr0s_9));
#line 149 "llds_to_x86_64.m"
        }
#line 149 "llds_to_x86_64.m"
      }
#line 147 "llds_to_x86_64.m"
  }
#line 144 "llds_to_x86_64.m"
}

#line 135 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_block_instr_3_p_0(
#line 135 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__RegMap_4,
#line 135 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__CInstrs_5,
#line 135 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__Instrs_6)
#line 135 "llds_to_x86_64.m"
{
#line 138 "llds_to_x86_64.m"
  {
#line 138 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;
#line 138 "llds_to_x86_64.m"
    MR_Word ll_backend__llds_to_x86_64__ListInstrs_7;

#line 139 "llds_to_x86_64.m"
    {
#line 139 "llds_to_x86_64.m"
      ll_backend__llds_to_x86_64__transform_block_instr_list_3_p_0(ll_backend__llds_to_x86_64__RegMap_4, ll_backend__llds_to_x86_64__CInstrs_5, &ll_backend__llds_to_x86_64__ListInstrs_7);
    }
#line 140 "llds_to_x86_64.m"
    {
#line 140 "llds_to_x86_64.m"
      mercury__list__condense_2_p_0((MR_Word) &ll_backend__x86_64_instrs__ll_backend__x86_64_instrs__type_ctor_info_x86_64_instr_0, ll_backend__llds_to_x86_64__ListInstrs_7, ll_backend__llds_to_x86_64__Instrs_6);
#line 140 "llds_to_x86_64.m"
      return;
    }
#line 138 "llds_to_x86_64.m"
  }
#line 135 "llds_to_x86_64.m"
}

#line 118 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_c_instr_list_3_p_0(
#line 118 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1,
#line 118 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 118 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3)
#line 118 "llds_to_x86_64.m"
{
#line 121 "llds_to_x86_64.m"
  {
#line 121 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 121 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 121 "llds_to_x86_64.m"
      *ll_backend__llds_to_x86_64__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 121 "llds_to_x86_64.m"
    else
#line 123 "llds_to_x86_64.m"
      {
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CInstr0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CInstr0s_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmInstr_8;
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmInstrs_9;
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CInstr1_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CInstr0_6, (MR_Integer) 0)));
#line 123 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CInstr0_6, (MR_Integer) 1)));
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmInstrList_12;
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_16_16;
#line 123 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_17_17;
#line 127 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmInstr0_13;

#line 125 "llds_to_x86_64.m"
        {
#line 125 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__instr_to_x86_64_4_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_0_1, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_16_16, ll_backend__llds_to_x86_64__CInstr1_10, &ll_backend__llds_to_x86_64__AsmInstrList_12);
        }
#line 126 "llds_to_x86_64.m"
        {
#line 126 "llds_to_x86_64.m"
          ll_backend__x86_64_regs__reg_map_reset_scratch_reg_info_2_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_16_16, &ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_17_17);
        }
#line 127 "llds_to_x86_64.m"
        {
#line 127 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__AsmInstr0_13 = ll_backend__x86_64_instrs__init_x86_64_instruction_0_f_0();
        }
#line 129 "llds_to_x86_64.m"
        {
#line 129 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__AsmInstr_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 129 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmInstr_8, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmInstrList_12));
#line 129 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmInstr_8, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__Comment_11));
#line 129 "llds_to_x86_64.m"
        }
#line 130 "llds_to_x86_64.m"
        {
#line 130 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_c_instr_list_3_p_0(ll_backend__llds_to_x86_64__STATE_VARIABLE_RegMap_17_17, ll_backend__llds_to_x86_64__CInstr0s_7, &ll_backend__llds_to_x86_64__AsmInstrs_9);
        }
#line 123 "llds_to_x86_64.m"
        {
#line 123 "llds_to_x86_64.m"
          MR_Word base;
#line 123 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 123 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__3_3 = base;
#line 123 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmInstr_8));
#line 123 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmInstrs_9));
#line 123 "llds_to_x86_64.m"
        }
#line 123 "llds_to_x86_64.m"
      }
#line 121 "llds_to_x86_64.m"
  }
#line 118 "llds_to_x86_64.m"
}

#line 96 "llds_to_x86_64.m"
static void MR_CALL 
ll_backend__llds_to_x86_64__transform_c_proc_list_3_p_0(
#line 96 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__RegMap_1,
#line 96 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__2_2,
#line 96 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__HeadVar__3_3)
#line 96 "llds_to_x86_64.m"
{
#line 99 "llds_to_x86_64.m"
  {
#line 99 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 99 "llds_to_x86_64.m"
    if ((ll_backend__llds_to_x86_64__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 99 "llds_to_x86_64.m"
      *ll_backend__llds_to_x86_64__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 99 "llds_to_x86_64.m"
    else
#line 100 "llds_to_x86_64.m"
      {
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CProc_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 0)));
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__CProcs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmProc_8;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmProcs_9;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmProc0_10;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__ProcInstr0_11;
#line 100 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__ProcStr_12;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__ProcName_13;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__ProcInstr_14;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmInstr0_15;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__AsmInstr_16;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_17_17;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_19_19;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_21_21;
#line 100 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_23_23;
#line 107 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_24_24;
#line 107 "llds_to_x86_64.m"
        MR_Integer ll_backend__llds_to_x86_64__V_25_25;
#line 107 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_26_26;
#line 107 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_27_27;
#line 107 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_28_28;
#line 107 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_29_29;
#line 107 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_30_30;
#line 107 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_31_31;
#line 110 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_33_33;
#line 110 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_32_32;
#line 111 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_34_34;
#line 111 "llds_to_x86_64.m"
        MR_Integer ll_backend__llds_to_x86_64__V_35_35;
#line 111 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_36_36;
#line 111 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_37_37;
#line 111 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_38_38;
#line 111 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_39_39;
#line 111 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_40_40;
#line 111 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_41_41;
#line 113 "llds_to_x86_64.m"
        MR_String ll_backend__llds_to_x86_64__V_42_42;
#line 113 "llds_to_x86_64.m"
        MR_Integer ll_backend__llds_to_x86_64__V_43_43;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_44_44;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_45_45;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_47_47;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_48_48;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_49_49;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_50_50;
#line 113 "llds_to_x86_64.m"
        MR_Word ll_backend__llds_to_x86_64__V_46_46;

#line 101 "llds_to_x86_64.m"
        {
#line 101 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__AsmProc0_10 = ll_backend__x86_64_instrs__init_x86_64_proc_1_f_0(ll_backend__llds_to_x86_64__CProc_6);
        }
#line 102 "llds_to_x86_64.m"
        {
#line 102 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__ProcInstr0_11 = ll_backend__x86_64_instrs__init_x86_64_instruction_0_f_0();
        }
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_24_24 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 0)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 1)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 2)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 3)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 4)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 5)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 6)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 7)));
#line 107 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 8)));
#line 107 "llds_to_x86_64.m"
        {
#line 107 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__ProcStr_12 = backend_libs__name_mangle__proc_label_to_c_string_2_f_0(ll_backend__llds_to_x86_64__V_17_17, (MR_Integer) 0);
        }
#line 109 "llds_to_x86_64.m"
        {
#line 109 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_19_19 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 109 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 63));
#line 109 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__ProcStr_12));
#line 109 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(3), ll_backend__llds_to_x86_64__V_19_19, 2) = ((MR_Box) ((MR_Integer) 0));
#line 109 "llds_to_x86_64.m"
        }
#line 109 "llds_to_x86_64.m"
        {
#line 109 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__ProcName_13 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 109 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(2), ll_backend__llds_to_x86_64__ProcName_13, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_19_19));
#line 109 "llds_to_x86_64.m"
        }
#line 110 "llds_to_x86_64.m"
        {
#line 110 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__V_21_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 110 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_21_21, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ProcName_13));
#line 110 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__V_21_21, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 110 "llds_to_x86_64.m"
        }
#line 110 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__ProcInstr0_11, (MR_Integer) 0)));
#line 110 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_33_33 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__ProcInstr0_11, (MR_Integer) 1)));
#line 110 "llds_to_x86_64.m"
        {
#line 110 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__ProcInstr_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 110 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__ProcInstr_14, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_21_21));
#line 110 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__ProcInstr_14, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_33_33));
#line 110 "llds_to_x86_64.m"
        }
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_34_34 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 0)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 1)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 2)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 3)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 4)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 5)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 6)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 7)));
#line 111 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__CProc_6, (MR_Integer) 8)));
#line 111 "llds_to_x86_64.m"
        {
#line 111 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_c_instr_list_3_p_0(ll_backend__llds_to_x86_64__RegMap_1, ll_backend__llds_to_x86_64__V_23_23, &ll_backend__llds_to_x86_64__AsmInstr0_15);
        }
#line 112 "llds_to_x86_64.m"
        {
#line 112 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__AsmInstr_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 112 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__AsmInstr_16, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__ProcInstr_14));
#line 112 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), ll_backend__llds_to_x86_64__AsmInstr_16, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmInstr0_15));
#line 112 "llds_to_x86_64.m"
        }
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 0)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 1)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 2)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 3)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 4)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 5)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 6)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 7)));
#line 113 "llds_to_x86_64.m"
        ll_backend__llds_to_x86_64__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc0_10, (MR_Integer) 8)));
#line 113 "llds_to_x86_64.m"
        {
#line 113 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__AsmProc_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL);
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__V_42_42));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__V_43_43));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 2) = ((MR_Box) (ll_backend__llds_to_x86_64__V_44_44));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 3) = ((MR_Box) (ll_backend__llds_to_x86_64__V_45_45));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 4) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmInstr_16));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 5) = ((MR_Box) (ll_backend__llds_to_x86_64__V_47_47));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 6) = ((MR_Box) (ll_backend__llds_to_x86_64__V_48_48));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 7) = ((MR_Box) (ll_backend__llds_to_x86_64__V_49_49));
#line 113 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(0), ll_backend__llds_to_x86_64__AsmProc_8, 8) = ((MR_Box) (ll_backend__llds_to_x86_64__V_50_50));
#line 113 "llds_to_x86_64.m"
        }
#line 114 "llds_to_x86_64.m"
        {
#line 114 "llds_to_x86_64.m"
          ll_backend__llds_to_x86_64__transform_c_proc_list_3_p_0(ll_backend__llds_to_x86_64__RegMap_1, ll_backend__llds_to_x86_64__CProcs_7, &ll_backend__llds_to_x86_64__AsmProcs_9);
        }
#line 100 "llds_to_x86_64.m"
        {
#line 100 "llds_to_x86_64.m"
          MR_Word base;
#line 100 "llds_to_x86_64.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 100 "llds_to_x86_64.m"
          *ll_backend__llds_to_x86_64__HeadVar__3_3 = base;
#line 100 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmProc_8));
#line 100 "llds_to_x86_64.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__llds_to_x86_64__AsmProcs_9));
#line 100 "llds_to_x86_64.m"
        }
#line 100 "llds_to_x86_64.m"
      }
#line 99 "llds_to_x86_64.m"
  }
#line 96 "llds_to_x86_64.m"
}

#line 42 "llds_to_x86_64.m"
void MR_CALL 
ll_backend__llds_to_x86_64__llds_to_x86_64_asm_3_p_0(
#line 42 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__HeadVar__1_4,
#line 42 "llds_to_x86_64.m"
  MR_Word ll_backend__llds_to_x86_64__CProcs_5,
#line 42 "llds_to_x86_64.m"
  MR_Word * ll_backend__llds_to_x86_64__AsmProcs_6)
#line 42 "llds_to_x86_64.m"
{
#line 89 "llds_to_x86_64.m"
  {
#line 89 "llds_to_x86_64.m"
    MR_bool ll_backend__llds_to_x86_64__succeeded;

#line 89 "llds_to_x86_64.m"
    {
#line 89 "llds_to_x86_64.m"
      ll_backend__llds_to_x86_64__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_108_108_100_115_95_116_111_95_120_56_54_95_54_52_95_97_115_109_95_95_91_49_93_95_48_3_p_0(ll_backend__llds_to_x86_64__CProcs_5, ll_backend__llds_to_x86_64__AsmProcs_6);
#line 89 "llds_to_x86_64.m"
      return;
    }
#line 89 "llds_to_x86_64.m"
  }
#line 42 "llds_to_x86_64.m"
}

void mercury__ll_backend__llds_to_x86_64__init(void)
{
}

void mercury__ll_backend__llds_to_x86_64__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__llds_to_x86_64__ll_backend__llds_to_x86_64__type_ctor_info_binop_0);
}

void mercury__ll_backend__llds_to_x86_64__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.llds_to_x86_64. */
