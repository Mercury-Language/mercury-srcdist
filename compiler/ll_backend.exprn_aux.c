/*
** Automatically generated from `exprn_aux.m'
** by the Mercury compiler,
** version rotd-2014-10-24
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


/* :- module ll_backend.exprn_aux. */
/* :- implementation. */

/*
INIT mercury__ll_backend__exprn_aux__init
ENDINIT
*/

#include "ll_backend.exprn_aux.mih"


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
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.rtti_access.mih"
#include "mdbcomp.sym_name.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 142 "ll_backend.exprn_aux.c"
static const MR_VA_PseudoTypeInfo_Struct4 ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1;

#line 145 "ll_backend.exprn_aux.c"
static MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0_10001(
#line 148 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 150 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_2,
#line 152 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3);

#line 155 "ll_backend.exprn_aux.c"
static void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0_10001(
#line 158 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 160 "ll_backend.exprn_aux.c"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 162 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 164 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_4);

#line 540 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_26_26,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_27_27,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__MemRef0_7,
#line 540 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__MemRef_8,
#line 540 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
#line 540 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);

#line 38 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_37_37,
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_38_38,
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_7,
#line 38 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_8,
#line 38 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
#line 38 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);

#line 908 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__mem_ref_addrs_3_p_0(
#line 908 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 908 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
#line 908 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3);

#line 787 "exprn_aux.m"
static MR_bool MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_2_p_0(
#line 787 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_3,
#line 787 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_4);

#line 770 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(
#line 770 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 770 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2,
#line 770 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_3);

#line 760 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(
#line 760 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 760 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__N0_2,
#line 760 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
#line 760 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__4_4);

#line 690 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_lval_4_p_0(
#line 690 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldRval_5,
#line 690 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewRval_6,
#line 690 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_7,
#line 690 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_8);

#line 674 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_p_0(
#line 674 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldRval_5,
#line 674 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewRval_6,
#line 674 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__MemRef0_7,
#line 674 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__MemRef_8);

#line 584 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(
#line 584 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_7,
#line 584 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_8,
#line 584 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_9,
#line 584 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_10,
#line 584 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_26,
#line 584 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_27);

#line 573 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(
#line 573 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_7,
#line 573 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_8,
#line 573 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_9,
#line 573 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_10,
#line 573 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_12,
#line 573 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_13);

#line 540 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_mem_ref_5_p_0(
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_25,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__MemRef0_7,
#line 540 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__MemRef_8,
#line 540 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
#line 540 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);

#line 496 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
#line 496 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
#line 496 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 496 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Out0_7,
#line 496 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Out_8,
#line 496 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
#line 496 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);

#line 485 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
#line 485 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
#line 485 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 485 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Out0_7,
#line 485 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Out_8,
#line 485 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
#line 485 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);

#line 474 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
#line 474 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_19,
#line 474 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_1,
#line 474 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__2_2,
#line 474 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
#line 474 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4,
#line 474 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_5);

#line 451 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2(
#line 451 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 451 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 451 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 451 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 451 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

#line 446 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1(
#line 446 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 446 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 446 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 446 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 446 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

#line 439 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
#line 439 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_31,
#line 439 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 439 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Component0_7,
#line 439 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Component_8,
#line 439 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
#line 439 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);

#line 405 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2(
#line 405 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 405 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 405 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 405 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 405 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

#line 283 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1(
#line 283 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 283 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 283 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 283 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 283 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

#line 257 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
#line 257 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_185,
#line 257 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 257 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Uinstr0_7,
#line 257 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Uinstr_8,
#line 257 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97,
#line 257 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);

#line 240 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__vars_in_mem_ref_2_p_0(
#line 240 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 240 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2);

#line 562 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1(
#line 562 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 562 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 562 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 562 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 562 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);


static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_2[5][9];

static /* final */ const MR_Integer ll_backend__exprn_aux_scalar_common_3[1][2];




static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
};

static /* final */ const MR_Box ll_backend__exprn_aux_scalar_common_2[5][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    NULL,
    ((MR_Box) (&ll_backend__exprn_aux_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1))
  },
};

static /* final */ const MR_Integer ll_backend__exprn_aux_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
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



#line 575 "ll_backend.exprn_aux.c"
static const MR_VA_PseudoTypeInfo_Struct4 ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 587 "ll_backend.exprn_aux.c"
const MR_TypeCtorInfo_Struct ll_backend__exprn_aux__ll_backend__exprn_aux__type_ctor_info_transform_lval_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (ll_backend__exprn_aux____Unify____transform_lval_1_0_10001)),
  ((MR_Box) (ll_backend__exprn_aux____Compare____transform_lval_1_0_10001)),
  (MR_String) "ll_backend.exprn_aux",
  (MR_String) "transform_lval",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 608 "ll_backend.exprn_aux.c"
static MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0_10001(
#line 611 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 613 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_2,
#line 615 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3)
#line 617 "ll_backend.exprn_aux.c"
{
#line 619 "ll_backend.exprn_aux.c"
  {
#line 621 "ll_backend.exprn_aux.c"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 624 "ll_backend.exprn_aux.c"
    {
#line 626 "ll_backend.exprn_aux.c"
      ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux____Unify____transform_lval_1_0(((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_2), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_3));
    }
#line 629 "ll_backend.exprn_aux.c"
    return ll_backend__exprn_aux__succeeded;
#line 631 "ll_backend.exprn_aux.c"
  }
#line 633 "ll_backend.exprn_aux.c"
}

#line 636 "ll_backend.exprn_aux.c"
static void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0_10001(
#line 639 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 641 "ll_backend.exprn_aux.c"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 643 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 645 "ll_backend.exprn_aux.c"
  MR_Box ll_backend__exprn_aux__wrapper_arg_4)
#line 647 "ll_backend.exprn_aux.c"
{
#line 649 "ll_backend.exprn_aux.c"
  {
#line 651 "ll_backend.exprn_aux.c"
    MR_Word ll_backend__exprn_aux__conv0_HeadVar__1_1;

#line 654 "ll_backend.exprn_aux.c"
    {
#line 656 "ll_backend.exprn_aux.c"
      ll_backend__exprn_aux____Compare____transform_lval_1_0(((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv0_HeadVar__1_1, ((MR_Word) ll_backend__exprn_aux__wrapper_arg_3), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_4));
    }
#line 659 "ll_backend.exprn_aux.c"
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv0_HeadVar__1_1));
#line 661 "ll_backend.exprn_aux.c"
  }
#line 663 "ll_backend.exprn_aux.c"
}

#line 540 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_26_26,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_27_27,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__MemRef0_7,
#line 540 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__MemRef_8,
#line 540 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
#line 540 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18)
#line 540 "exprn_aux.m"
{
#line 548 "exprn_aux.m"
  {
#line 548 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 548 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) == (MR_mktag((MR_Integer) 1))))
#line 549 "exprn_aux.m"
      {
#line 549 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 549 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval_24;

#line 550 "exprn_aux.m"
        {
#line 550 "exprn_aux.m"
          ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__Rval0_23, &ll_backend__exprn_aux__Rval_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
        }
#line 551 "exprn_aux.m"
        {
#line 551 "exprn_aux.m"
          MR_Word base;
#line 551 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 551 "exprn_aux.m"
          *ll_backend__exprn_aux__MemRef_8 = base;
#line 551 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_24));
#line 551 "exprn_aux.m"
        }
#line 549 "exprn_aux.m"
      }
#line 548 "exprn_aux.m"
    else
#line 548 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) == (MR_mktag((MR_Integer) 2))))
#line 553 "exprn_aux.m"
        {
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__BaseRval0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__MaybeTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 1)));
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__FieldRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 2)));
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__BaseRval_15;
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__FieldRval_16;
#line 553 "exprn_aux.m"
          MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19;

#line 554 "exprn_aux.m"
          {
#line 554 "exprn_aux.m"
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__BaseRval0_12, &ll_backend__exprn_aux__BaseRval_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19);
          }
#line 555 "exprn_aux.m"
          {
#line 555 "exprn_aux.m"
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__FieldRval0_14, &ll_backend__exprn_aux__FieldRval_16, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
#line 556 "exprn_aux.m"
          {
#line 556 "exprn_aux.m"
            MR_Word base;
#line 556 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "exprn_aux.m"
            *ll_backend__exprn_aux__MemRef_8 = base;
#line 556 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__BaseRval_15));
#line 556 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_13));
#line 556 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__exprn_aux__FieldRval_16));
#line 556 "exprn_aux.m"
          }
#line 553 "exprn_aux.m"
        }
#line 548 "exprn_aux.m"
      else
#line 545 "exprn_aux.m"
        {
#line 545 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 545 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_11;

#line 546 "exprn_aux.m"
          {
#line 546 "exprn_aux.m"
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__Rval0_10, &ll_backend__exprn_aux__Rval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
#line 547 "exprn_aux.m"
          {
#line 547 "exprn_aux.m"
            MR_Word base;
#line 547 "exprn_aux.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "exprn_aux.m"
            *ll_backend__exprn_aux__MemRef_8 = base;
#line 547 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_11));
#line 547 "exprn_aux.m"
          }
#line 545 "exprn_aux.m"
        }
#line 548 "exprn_aux.m"
  }
#line 540 "exprn_aux.m"
}

#line 38 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_37_37,
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__V_38_38,
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_7,
#line 38 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_8,
#line 38 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
#line 38 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25)
#line 38 "exprn_aux.m"
{
#line 512 "exprn_aux.m"
  {
#line 512 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 512 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 0))))
#line 509 "exprn_aux.m"
      {
#line 509 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
#line 509 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lval_11;

#line 577 "exprn_aux.m"
        {
#line 577 "exprn_aux.m"
          ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__exprn_aux__Lval0_10, ll_backend__exprn_aux__V_37_37);
        }
#line 580 "exprn_aux.m"
        if (ll_backend__exprn_aux__succeeded)
#line 578 "exprn_aux.m"
          {
#line 578 "exprn_aux.m"
            ll_backend__exprn_aux__Lval_11 = ll_backend__exprn_aux__V_38_38;
#line 579 "exprn_aux.m"
            *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = (ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24 + (MR_Integer) 1);
#line 578 "exprn_aux.m"
          }
#line 580 "exprn_aux.m"
        else
#line 581 "exprn_aux.m"
          {
#line 581 "exprn_aux.m"
            ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Lval0_10, &ll_backend__exprn_aux__Lval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
#line 511 "exprn_aux.m"
        {
#line 511 "exprn_aux.m"
          MR_Word base;
#line 511 "exprn_aux.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "exprn_aux.m"
          *ll_backend__exprn_aux__Rval_8 = base;
#line 511 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_11));
#line 511 "exprn_aux.m"
        }
#line 509 "exprn_aux.m"
      }
#line 512 "exprn_aux.m"
    else
#line 512 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 2))))
#line 516 "exprn_aux.m"
        {
#line 516 "exprn_aux.m"
          MR_Integer ll_backend__exprn_aux__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
#line 516 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 516 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval2_15;

#line 517 "exprn_aux.m"
          {
#line 517 "exprn_aux.m"
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval1_14, &ll_backend__exprn_aux__Rval2_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
#line 518 "exprn_aux.m"
          {
#line 518 "exprn_aux.m"
            MR_Word base;
#line 518 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "exprn_aux.m"
            *ll_backend__exprn_aux__Rval_8 = base;
#line 518 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Tag_13));
#line 518 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_15));
#line 518 "exprn_aux.m"
          }
#line 516 "exprn_aux.m"
        }
#line 512 "exprn_aux.m"
      else
#line 512 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 1))))
#line 513 "exprn_aux.m"
          {
#line 514 "exprn_aux.m"
            *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 514 "exprn_aux.m"
            *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 513 "exprn_aux.m"
          }
#line 512 "exprn_aux.m"
        else
#line 512 "exprn_aux.m"
          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 530 "exprn_aux.m"
            {
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval3_20;
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval4_21;
#line 530 "exprn_aux.m"
              MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27;
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 3)));

#line 531 "exprn_aux.m"
              {
#line 531 "exprn_aux.m"
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval1_34, &ll_backend__exprn_aux__Rval3_20, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27);
              }
#line 532 "exprn_aux.m"
              {
#line 532 "exprn_aux.m"
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval2_35, &ll_backend__exprn_aux__Rval4_21, ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
#line 533 "exprn_aux.m"
              {
#line 533 "exprn_aux.m"
                MR_Word base;
#line 533 "exprn_aux.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 533 "exprn_aux.m"
                *ll_backend__exprn_aux__Rval_8 = base;
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Binop_19));
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_20));
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_21));
#line 533 "exprn_aux.m"
              }
#line 530 "exprn_aux.m"
            }
#line 512 "exprn_aux.m"
          else
#line 512 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 523 "exprn_aux.m"
              {
#line 524 "exprn_aux.m"
                *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 524 "exprn_aux.m"
                *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 523 "exprn_aux.m"
              }
#line 512 "exprn_aux.m"
            else
#line 512 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 535 "exprn_aux.m"
                {
#line 535 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 535 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MemRef_23;

#line 536 "exprn_aux.m"
                  {
#line 536 "exprn_aux.m"
                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__MemRef0_22, &ll_backend__exprn_aux__MemRef_23, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
                  }
#line 537 "exprn_aux.m"
                  {
#line 537 "exprn_aux.m"
                    MR_Word base;
#line 537 "exprn_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "exprn_aux.m"
                    *ll_backend__exprn_aux__Rval_8 = base;
#line 537 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 537 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MemRef_23));
#line 537 "exprn_aux.m"
                  }
#line 535 "exprn_aux.m"
                }
#line 512 "exprn_aux.m"
              else
#line 512 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 520 "exprn_aux.m"
                  {
#line 521 "exprn_aux.m"
                    *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 521 "exprn_aux.m"
                    *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 520 "exprn_aux.m"
                  }
#line 512 "exprn_aux.m"
                else
#line 526 "exprn_aux.m"
                  {
#line 526 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 526 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
#line 526 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval2_33;

#line 527 "exprn_aux.m"
                    {
#line 527 "exprn_aux.m"
                      ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval1_32, &ll_backend__exprn_aux__Rval2_33, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
                    }
#line 528 "exprn_aux.m"
                    {
#line 528 "exprn_aux.m"
                      MR_Word base;
#line 528 "exprn_aux.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 528 "exprn_aux.m"
                      *ll_backend__exprn_aux__Rval_8 = base;
#line 528 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Unop_18));
#line 528 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_33));
#line 528 "exprn_aux.m"
                    }
#line 526 "exprn_aux.m"
                  }
#line 512 "exprn_aux.m"
  }
#line 38 "exprn_aux.m"
}

#line 92 "exprn_aux.m"
MR_Word MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_f_0(
#line 92 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval_5)
#line 92 "exprn_aux.m"
{
#line 935 "exprn_aux.m"
  {
#line 935 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 935 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__HeadVar__3_3;

#line 935 "exprn_aux.m"
    {
#line 935 "exprn_aux.m"
      ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 935 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_5));
#line 935 "exprn_aux.m"
    }
#line 935 "exprn_aux.m"
    return ll_backend__exprn_aux__HeadVar__3_3;
#line 935 "exprn_aux.m"
  }
#line 92 "exprn_aux.m"
}

#line 41 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0(
#line 41 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_6,
#line 41 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__1_1,
#line 41 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__2_2,
#line 41 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__3_3)
#line 41 "exprn_aux.m"
{
#line 41 "exprn_aux.m"
  {
#line 41 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 41 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Cast_HeadVar1_4 = ll_backend__exprn_aux__HeadVar__2_2;
#line 41 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Cast_HeadVar2_5 = ll_backend__exprn_aux__HeadVar__3_3;

#line 41 "exprn_aux.m"
    {
#line 41 "exprn_aux.m"
      mercury__private_builtin__builtin_compare_pred_3_p_0(ll_backend__exprn_aux__HeadVar__1_1, (MR_Word) ll_backend__exprn_aux__Cast_HeadVar1_4, (MR_Word) ll_backend__exprn_aux__Cast_HeadVar2_5);
#line 41 "exprn_aux.m"
      return;
    }
#line 41 "exprn_aux.m"
  }
#line 41 "exprn_aux.m"
}

#line 41 "exprn_aux.m"
MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0(
#line 41 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_5,
#line 41 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 41 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__2_2)
#line 41 "exprn_aux.m"
{
#line 41 "exprn_aux.m"
  {
#line 41 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 41 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Cast_HeadVar1_3 = ll_backend__exprn_aux__HeadVar__1_1;
#line 41 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Cast_HeadVar2_4 = ll_backend__exprn_aux__HeadVar__2_2;

#line 41 "exprn_aux.m"
    {
#line 41 "exprn_aux.m"
      return ll_backend__exprn_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ll_backend__exprn_aux__Cast_HeadVar1_3, (MR_Word) ll_backend__exprn_aux__Cast_HeadVar2_4);
    }
#line 41 "exprn_aux.m"
    return ll_backend__exprn_aux__succeeded;
#line 41 "exprn_aux.m"
  }
#line 41 "exprn_aux.m"
}

#line 908 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__mem_ref_addrs_3_p_0(
#line 908 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 908 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
#line 908 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
#line 908 "exprn_aux.m"
{
#line 911 "exprn_aux.m"
  {
#line 911 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 911 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 912 "exprn_aux.m"
      {
#line 912 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 912 "exprn_aux.m"
      }
#line 911 "exprn_aux.m"
    else
#line 911 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 913 "exprn_aux.m"
        {
#line 913 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 913 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 913 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux___FieldNum_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));

#line 914 "exprn_aux.m"
          {
#line 914 "exprn_aux.m"
            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_6, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 914 "exprn_aux.m"
            return;
          }
#line 913 "exprn_aux.m"
        }
#line 911 "exprn_aux.m"
      else
#line 911 "exprn_aux.m"
        {
#line 911 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 911 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 911 "exprn_aux.m"
        }
#line 911 "exprn_aux.m"
  }
#line 908 "exprn_aux.m"
}

#line 787 "exprn_aux.m"
static MR_bool MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_2_p_0(
#line 787 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_3,
#line 787 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_4)
#line 787 "exprn_aux.m"
{
#line 795 "exprn_aux.m"
  {
#line 795 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded = ((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 0)));
#line 795 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__MaybeTag_5;
#line 795 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Num_7;
#line 795 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Rval2_8;
#line 791 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Rval1_6;
#line 791 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__V_12_12;

#line 791 "exprn_aux.m"
    if (ll_backend__exprn_aux__succeeded)
#line 791 "exprn_aux.m"
      {
#line 791 "exprn_aux.m"
        ll_backend__exprn_aux__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)));
#line 791 "exprn_aux.m"
        ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 791 "exprn_aux.m"
        if (ll_backend__exprn_aux__succeeded)
#line 791 "exprn_aux.m"
          {
#line 791 "exprn_aux.m"
            ll_backend__exprn_aux__MaybeTag_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 1)));
#line 791 "exprn_aux.m"
            ll_backend__exprn_aux__Rval1_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 2)));
#line 791 "exprn_aux.m"
            ll_backend__exprn_aux__Num_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 3)));
#line 792 "exprn_aux.m"
            {
#line 792 "exprn_aux.m"
              ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval1_6, &ll_backend__exprn_aux__Rval2_8);
            }
#line 791 "exprn_aux.m"
          }
#line 791 "exprn_aux.m"
      }
#line 795 "exprn_aux.m"
    if (ll_backend__exprn_aux__succeeded)
#line 794 "exprn_aux.m"
      {
#line 794 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__V_13_13;

#line 794 "exprn_aux.m"
        {
#line 794 "exprn_aux.m"
          ll_backend__exprn_aux__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 794 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 794 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_5));
#line 794 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_8));
#line 794 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 3) = ((MR_Box) (ll_backend__exprn_aux__Num_7));
#line 794 "exprn_aux.m"
        }
#line 794 "exprn_aux.m"
        {
#line 794 "exprn_aux.m"
          MR_Word base;
#line 794 "exprn_aux.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 794 "exprn_aux.m"
          *ll_backend__exprn_aux__Rval_4 = base;
#line 794 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__V_13_13));
#line 794 "exprn_aux.m"
        }
#line 794 "exprn_aux.m"
        ll_backend__exprn_aux__succeeded = MR_TRUE;
#line 794 "exprn_aux.m"
      }
#line 795 "exprn_aux.m"
    else
#line 800 "exprn_aux.m"
      {
#line 800 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__UnOp_9;
#line 800 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval2_24;
#line 796 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval1_14;

#line 796 "exprn_aux.m"
        ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 796 "exprn_aux.m"
        if (ll_backend__exprn_aux__succeeded)
#line 796 "exprn_aux.m"
          {
#line 796 "exprn_aux.m"
            ll_backend__exprn_aux__UnOp_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 1)));
#line 796 "exprn_aux.m"
            ll_backend__exprn_aux__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 2)));
#line 797 "exprn_aux.m"
            {
#line 797 "exprn_aux.m"
              ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval1_14, &ll_backend__exprn_aux__Rval2_24);
            }
#line 796 "exprn_aux.m"
          }
#line 800 "exprn_aux.m"
        if (ll_backend__exprn_aux__succeeded)
#line 799 "exprn_aux.m"
          {
#line 799 "exprn_aux.m"
            {
#line 799 "exprn_aux.m"
              MR_Word base;
#line 799 "exprn_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 799 "exprn_aux.m"
              *ll_backend__exprn_aux__Rval_4 = base;
#line 799 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 799 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__UnOp_9));
#line 799 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_24));
#line 799 "exprn_aux.m"
            }
#line 799 "exprn_aux.m"
            ll_backend__exprn_aux__succeeded = MR_TRUE;
#line 799 "exprn_aux.m"
          }
#line 800 "exprn_aux.m"
        else
#line 805 "exprn_aux.m"
          {
#line 805 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__BinOp_10;
#line 805 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval3_11;
#line 805 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval2_22;
#line 801 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval1_15;

#line 801 "exprn_aux.m"
            ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 801 "exprn_aux.m"
            if (ll_backend__exprn_aux__succeeded)
#line 801 "exprn_aux.m"
              {
#line 801 "exprn_aux.m"
                ll_backend__exprn_aux__BinOp_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 1)));
#line 801 "exprn_aux.m"
                ll_backend__exprn_aux__Rval1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 2)));
#line 801 "exprn_aux.m"
                ll_backend__exprn_aux__Rval2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 3)));
#line 802 "exprn_aux.m"
                {
#line 802 "exprn_aux.m"
                  ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval1_15, &ll_backend__exprn_aux__Rval3_11);
                }
#line 801 "exprn_aux.m"
              }
#line 805 "exprn_aux.m"
            if (ll_backend__exprn_aux__succeeded)
#line 804 "exprn_aux.m"
              {
#line 804 "exprn_aux.m"
                {
#line 804 "exprn_aux.m"
                  MR_Word base;
#line 804 "exprn_aux.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 804 "exprn_aux.m"
                  *ll_backend__exprn_aux__Rval_4 = base;
#line 804 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 804 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__BinOp_10));
#line 804 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_11));
#line 804 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval2_22));
#line 804 "exprn_aux.m"
                }
#line 804 "exprn_aux.m"
                ll_backend__exprn_aux__succeeded = MR_TRUE;
#line 804 "exprn_aux.m"
              }
#line 805 "exprn_aux.m"
            else
#line 810 "exprn_aux.m"
              {
#line 810 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval2_16;
#line 810 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval1_17;
#line 810 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__BinOp_19;
#line 810 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval3_20;

#line 806 "exprn_aux.m"
                ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 806 "exprn_aux.m"
                if (ll_backend__exprn_aux__succeeded)
#line 806 "exprn_aux.m"
                  {
#line 806 "exprn_aux.m"
                    ll_backend__exprn_aux__BinOp_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 1)));
#line 806 "exprn_aux.m"
                    ll_backend__exprn_aux__Rval1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 2)));
#line 806 "exprn_aux.m"
                    ll_backend__exprn_aux__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 3)));
#line 807 "exprn_aux.m"
                    {
#line 807 "exprn_aux.m"
                      ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval2_16, &ll_backend__exprn_aux__Rval3_20);
                    }
#line 810 "exprn_aux.m"
                    if (ll_backend__exprn_aux__succeeded)
#line 810 "exprn_aux.m"
                      {
#line 809 "exprn_aux.m"
                        {
#line 809 "exprn_aux.m"
                          MR_Word base;
#line 809 "exprn_aux.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 809 "exprn_aux.m"
                          *ll_backend__exprn_aux__Rval_4 = base;
#line 809 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 809 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__BinOp_19));
#line 809 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval1_17));
#line 809 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval3_20));
#line 809 "exprn_aux.m"
                        }
#line 809 "exprn_aux.m"
                        ll_backend__exprn_aux__succeeded = MR_TRUE;
#line 810 "exprn_aux.m"
                      }
#line 806 "exprn_aux.m"
                  }
#line 810 "exprn_aux.m"
              }
#line 805 "exprn_aux.m"
          }
#line 800 "exprn_aux.m"
      }
#line 795 "exprn_aux.m"
    return ll_backend__exprn_aux__succeeded;
#line 795 "exprn_aux.m"
  }
#line 787 "exprn_aux.m"
}

#line 770 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(
#line 770 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 770 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2,
#line 770 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_3)
#line 770 "exprn_aux.m"
{
#line 773 "exprn_aux.m"
  while (MR_TRUE)
#line 773 "exprn_aux.m"
    {
#line 773 "exprn_aux.m"
      /* tailcall optimized into a loop */
#line 773 "exprn_aux.m"
      {
#line 773 "exprn_aux.m"
        MR_bool ll_backend__exprn_aux__succeeded;

#line 773 "exprn_aux.m"
        if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "exprn_aux.m"
          *ll_backend__exprn_aux__STATE_VARIABLE_Rval_3 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2;
#line 773 "exprn_aux.m"
        else
#line 774 "exprn_aux.m"
          {
#line 774 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Left_7;
#line 774 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Right_8;
#line 774 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 774 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 774 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_14_14;

#line 774 "exprn_aux.m"
            ll_backend__exprn_aux__Left_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 0)));
#line 774 "exprn_aux.m"
            ll_backend__exprn_aux__Right_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 1)));
#line 775 "exprn_aux.m"
            {
#line 775 "exprn_aux.m"
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__Left_7, ll_backend__exprn_aux__Right_8, ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2, &ll_backend__exprn_aux__STATE_VARIABLE_Rval_14_14);
            }
#line 776 "exprn_aux.m"
            /* direct tailcall eliminated */
#line 776 "exprn_aux.m"
            {
#line 776 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rest_9;
#line 776 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_14_14;

#line 776 "exprn_aux.m"
              ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2;
#line 776 "exprn_aux.m"
              ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
#line 776 "exprn_aux.m"
            }
#line 776 "exprn_aux.m"
            continue;
#line 774 "exprn_aux.m"
          }
#line 773 "exprn_aux.m"
      }
#line 773 "exprn_aux.m"
      break;
#line 773 "exprn_aux.m"
    }
#line 770 "exprn_aux.m"
}

#line 760 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(
#line 760 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 760 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__N0_2,
#line 760 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
#line 760 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__4_4)
#line 760 "exprn_aux.m"
{
#line 763 "exprn_aux.m"
  {
#line 763 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 763 "exprn_aux.m"
    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 763 "exprn_aux.m"
      {
#line 763 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 763 "exprn_aux.m"
      }
#line 763 "exprn_aux.m"
    else
#line 765 "exprn_aux.m"
      {
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval1_6;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval2_7;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__RvalPairList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Uniq_10;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__RvalUniqList_11;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__UniqRvalList_12;
#line 765 "exprn_aux.m"
        MR_Integer ll_backend__exprn_aux__N1_13;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__V_15_15;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__V_16_16;
#line 765 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__V_18_18;

#line 764 "exprn_aux.m"
        ll_backend__exprn_aux__Rval1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, (MR_Integer) 0)));
#line 764 "exprn_aux.m"
        ll_backend__exprn_aux__Rval2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, (MR_Integer) 1)));
#line 766 "exprn_aux.m"
        ll_backend__exprn_aux__N1_13 = (ll_backend__exprn_aux__N0_2 - (MR_Integer) 1);
#line 767 "exprn_aux.m"
        {
#line 767 "exprn_aux.m"
          ll_backend__exprn_aux__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 767 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 767 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_18_18, 1) = ((MR_Box) (ll_backend__exprn_aux__N1_13));
#line 767 "exprn_aux.m"
        }
#line 767 "exprn_aux.m"
        {
#line 767 "exprn_aux.m"
          ll_backend__exprn_aux__Uniq_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 767 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Uniq_10, 0) = ((MR_Box) (ll_backend__exprn_aux__V_18_18));
#line 767 "exprn_aux.m"
        }
#line 765 "exprn_aux.m"
        {
#line 765 "exprn_aux.m"
          ll_backend__exprn_aux__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_15_15, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval1_6));
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_15_15, 1) = ((MR_Box) (ll_backend__exprn_aux__Uniq_10));
#line 765 "exprn_aux.m"
        }
#line 765 "exprn_aux.m"
        {
#line 765 "exprn_aux.m"
          ll_backend__exprn_aux__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_16_16, 0) = ((MR_Box) (ll_backend__exprn_aux__Uniq_10));
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_16_16, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_7));
#line 765 "exprn_aux.m"
        }
#line 768 "exprn_aux.m"
        {
#line 768 "exprn_aux.m"
          ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(ll_backend__exprn_aux__RvalPairList_8, ll_backend__exprn_aux__N1_13, &ll_backend__exprn_aux__RvalUniqList_11, &ll_backend__exprn_aux__UniqRvalList_12);
        }
#line 765 "exprn_aux.m"
        {
#line 765 "exprn_aux.m"
          MR_Word base;
#line 765 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__3_3 = base;
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__V_15_15));
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__exprn_aux__RvalUniqList_11));
#line 765 "exprn_aux.m"
        }
#line 765 "exprn_aux.m"
        {
#line 765 "exprn_aux.m"
          MR_Word base;
#line 765 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 765 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__4_4 = base;
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__V_16_16));
#line 765 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__exprn_aux__UniqRvalList_12));
#line 765 "exprn_aux.m"
        }
#line 765 "exprn_aux.m"
      }
#line 763 "exprn_aux.m"
  }
#line 760 "exprn_aux.m"
}

#line 690 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_lval_4_p_0(
#line 690 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldRval_5,
#line 690 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewRval_6,
#line 690 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_7,
#line 690 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_8)
#line 690 "exprn_aux.m"
{
#line 709 "exprn_aux.m"
  {
#line 709 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 709 "exprn_aux.m"
    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 732 "exprn_aux.m"
      {
#line 732 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Tag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 732 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 2)));
#line 732 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 3)));
#line 732 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval3_25;
#line 732 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval4_26;

#line 733 "exprn_aux.m"
        {
#line 733 "exprn_aux.m"
          ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_23, &ll_backend__exprn_aux__Rval3_25);
        }
#line 734 "exprn_aux.m"
        {
#line 734 "exprn_aux.m"
          ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval2_24, &ll_backend__exprn_aux__Rval4_26);
        }
#line 735 "exprn_aux.m"
        {
#line 735 "exprn_aux.m"
          MR_Word base;
#line 735 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 735 "exprn_aux.m"
          *ll_backend__exprn_aux__Lval_8 = base;
#line 735 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 735 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Tag_22));
#line 735 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_25));
#line 735 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_26));
#line 735 "exprn_aux.m"
        }
#line 732 "exprn_aux.m"
      }
#line 709 "exprn_aux.m"
    else
#line 709 "exprn_aux.m"
      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 737 "exprn_aux.m"
        {
#line 737 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 737 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_36;

#line 738 "exprn_aux.m"
          {
#line 738 "exprn_aux.m"
            ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_35, &ll_backend__exprn_aux__Rval_36);
          }
#line 739 "exprn_aux.m"
          {
#line 739 "exprn_aux.m"
            MR_Word base;
#line 739 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 739 "exprn_aux.m"
            *ll_backend__exprn_aux__Lval_8 = base;
#line 739 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 739 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_36));
#line 739 "exprn_aux.m"
          }
#line 737 "exprn_aux.m"
        }
#line 709 "exprn_aux.m"
      else
#line 709 "exprn_aux.m"
        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 728 "exprn_aux.m"
          {
#line 728 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 728 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval_34;

#line 729 "exprn_aux.m"
            {
#line 729 "exprn_aux.m"
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_33, &ll_backend__exprn_aux__Rval_34);
            }
#line 730 "exprn_aux.m"
            {
#line 730 "exprn_aux.m"
              MR_Word base;
#line 730 "exprn_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 730 "exprn_aux.m"
              *ll_backend__exprn_aux__Lval_8 = base;
#line 730 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 730 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_34));
#line 730 "exprn_aux.m"
            }
#line 728 "exprn_aux.m"
          }
#line 709 "exprn_aux.m"
        else
#line 709 "exprn_aux.m"
          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 720 "exprn_aux.m"
            {
#line 720 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 720 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval_30;

#line 721 "exprn_aux.m"
              {
#line 721 "exprn_aux.m"
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_29, &ll_backend__exprn_aux__Rval_30);
              }
#line 722 "exprn_aux.m"
              {
#line 722 "exprn_aux.m"
                MR_Word base;
#line 722 "exprn_aux.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "exprn_aux.m"
                *ll_backend__exprn_aux__Lval_8 = base;
#line 722 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 722 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_30));
#line 722 "exprn_aux.m"
              }
#line 720 "exprn_aux.m"
            }
#line 709 "exprn_aux.m"
          else
#line 709 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 716 "exprn_aux.m"
              {
#line 716 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 716 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval_28;

#line 717 "exprn_aux.m"
                {
#line 717 "exprn_aux.m"
                  ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_27, &ll_backend__exprn_aux__Rval_28);
                }
#line 718 "exprn_aux.m"
                {
#line 718 "exprn_aux.m"
                  MR_Word base;
#line 718 "exprn_aux.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 718 "exprn_aux.m"
                  *ll_backend__exprn_aux__Lval_8 = base;
#line 718 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 718 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_28));
#line 718 "exprn_aux.m"
                }
#line 716 "exprn_aux.m"
              }
#line 709 "exprn_aux.m"
            else
#line 709 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 724 "exprn_aux.m"
                {
#line 724 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Rval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 724 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Rval_32;

#line 725 "exprn_aux.m"
                  {
#line 725 "exprn_aux.m"
                    ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_31, &ll_backend__exprn_aux__Rval_32);
                  }
#line 726 "exprn_aux.m"
                  {
#line 726 "exprn_aux.m"
                    MR_Word base;
#line 726 "exprn_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 726 "exprn_aux.m"
                    *ll_backend__exprn_aux__Lval_8 = base;
#line 726 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 726 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_32));
#line 726 "exprn_aux.m"
                  }
#line 724 "exprn_aux.m"
                }
#line 709 "exprn_aux.m"
              else
#line 709 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 712 "exprn_aux.m"
                  {
#line 712 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
#line 712 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval_21;

#line 713 "exprn_aux.m"
                    {
#line 713 "exprn_aux.m"
                      ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_20, &ll_backend__exprn_aux__Rval_21);
                    }
#line 714 "exprn_aux.m"
                    {
#line 714 "exprn_aux.m"
                      MR_Word base;
#line 714 "exprn_aux.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "exprn_aux.m"
                      *ll_backend__exprn_aux__Lval_8 = base;
#line 714 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 714 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_21));
#line 714 "exprn_aux.m"
                    }
#line 712 "exprn_aux.m"
                  }
#line 709 "exprn_aux.m"
                else
#line 710 "exprn_aux.m"
                  *ll_backend__exprn_aux__Lval_8 = ll_backend__exprn_aux__Lval0_7;
#line 709 "exprn_aux.m"
  }
#line 690 "exprn_aux.m"
}

#line 674 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_p_0(
#line 674 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldRval_5,
#line 674 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewRval_6,
#line 674 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__MemRef0_7,
#line 674 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__MemRef_8)
#line 674 "exprn_aux.m"
{
#line 679 "exprn_aux.m"
  {
#line 679 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 679 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) == (MR_mktag((MR_Integer) 1))))
#line 683 "exprn_aux.m"
      *ll_backend__exprn_aux__MemRef_8 = ll_backend__exprn_aux__MemRef0_7;
#line 679 "exprn_aux.m"
    else
#line 679 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) == (MR_mktag((MR_Integer) 2))))
#line 685 "exprn_aux.m"
        {
#line 685 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 685 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__MaybeTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 1)));
#line 685 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_12;
#line 685 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 2)));

#line 686 "exprn_aux.m"
          {
#line 686 "exprn_aux.m"
            ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_10, &ll_backend__exprn_aux__Rval_12);
          }
#line 687 "exprn_aux.m"
          {
#line 687 "exprn_aux.m"
            MR_Word base;
#line 687 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 687 "exprn_aux.m"
            *ll_backend__exprn_aux__MemRef_8 = base;
#line 687 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_12));
#line 687 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_11));
#line 687 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__exprn_aux__N_14));
#line 687 "exprn_aux.m"
          }
#line 685 "exprn_aux.m"
        }
#line 679 "exprn_aux.m"
      else
#line 680 "exprn_aux.m"
        *ll_backend__exprn_aux__MemRef_8 = ll_backend__exprn_aux__MemRef0_7;
#line 679 "exprn_aux.m"
  }
#line 674 "exprn_aux.m"
}

#line 584 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(
#line 584 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_7,
#line 584 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_8,
#line 584 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_9,
#line 584 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_10,
#line 584 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_26,
#line 584 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_27)
#line 584 "exprn_aux.m"
{
#line 606 "exprn_aux.m"
  {
#line 606 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 606 "exprn_aux.m"
    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 627 "exprn_aux.m"
      {
#line 627 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Tag_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 627 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 2)));
#line 627 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval2_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 3)));
#line 627 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval3_24;
#line 627 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval4_25;
#line 627 "exprn_aux.m"
        MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_29_29;

#line 628 "exprn_aux.m"
        {
#line 628 "exprn_aux.m"
          ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval1_22, &ll_backend__exprn_aux__Rval3_24, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, &ll_backend__exprn_aux__STATE_VARIABLE_N_29_29);
        }
#line 629 "exprn_aux.m"
        {
#line 629 "exprn_aux.m"
          ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval2_23, &ll_backend__exprn_aux__Rval4_25, ll_backend__exprn_aux__STATE_VARIABLE_N_29_29, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
        }
#line 630 "exprn_aux.m"
        {
#line 630 "exprn_aux.m"
          MR_Word base;
#line 630 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 630 "exprn_aux.m"
          *ll_backend__exprn_aux__Lval_10 = base;
#line 630 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 630 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Tag_21));
#line 630 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_24));
#line 630 "exprn_aux.m"
          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_25));
#line 630 "exprn_aux.m"
        }
#line 627 "exprn_aux.m"
      }
#line 606 "exprn_aux.m"
    else
#line 606 "exprn_aux.m"
      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 632 "exprn_aux.m"
        {
#line 632 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 632 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_50;

#line 633 "exprn_aux.m"
          {
#line 633 "exprn_aux.m"
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_49, &ll_backend__exprn_aux__Rval_50, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
          }
#line 634 "exprn_aux.m"
          {
#line 634 "exprn_aux.m"
            MR_Word base;
#line 634 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 634 "exprn_aux.m"
            *ll_backend__exprn_aux__Lval_10 = base;
#line 634 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 634 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_50));
#line 634 "exprn_aux.m"
          }
#line 632 "exprn_aux.m"
        }
#line 606 "exprn_aux.m"
      else
#line 606 "exprn_aux.m"
        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 623 "exprn_aux.m"
          {
#line 623 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 623 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval_48;

#line 624 "exprn_aux.m"
            {
#line 624 "exprn_aux.m"
              ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_47, &ll_backend__exprn_aux__Rval_48, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
            }
#line 625 "exprn_aux.m"
            {
#line 625 "exprn_aux.m"
              MR_Word base;
#line 625 "exprn_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "exprn_aux.m"
              *ll_backend__exprn_aux__Lval_10 = base;
#line 625 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 625 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_48));
#line 625 "exprn_aux.m"
            }
#line 623 "exprn_aux.m"
          }
#line 606 "exprn_aux.m"
        else
#line 606 "exprn_aux.m"
          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 615 "exprn_aux.m"
            {
#line 615 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 615 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval_44;

#line 616 "exprn_aux.m"
              {
#line 616 "exprn_aux.m"
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_43, &ll_backend__exprn_aux__Rval_44, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
#line 617 "exprn_aux.m"
              {
#line 617 "exprn_aux.m"
                MR_Word base;
#line 617 "exprn_aux.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "exprn_aux.m"
                *ll_backend__exprn_aux__Lval_10 = base;
#line 617 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 617 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_44));
#line 617 "exprn_aux.m"
              }
#line 615 "exprn_aux.m"
            }
#line 606 "exprn_aux.m"
          else
#line 606 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 611 "exprn_aux.m"
              {
#line 611 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 611 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval_42;

#line 612 "exprn_aux.m"
                {
#line 612 "exprn_aux.m"
                  ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_41, &ll_backend__exprn_aux__Rval_42, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
                }
#line 613 "exprn_aux.m"
                {
#line 613 "exprn_aux.m"
                  MR_Word base;
#line 613 "exprn_aux.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 613 "exprn_aux.m"
                  *ll_backend__exprn_aux__Lval_10 = base;
#line 613 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 613 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_42));
#line 613 "exprn_aux.m"
                }
#line 611 "exprn_aux.m"
              }
#line 606 "exprn_aux.m"
            else
#line 606 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 619 "exprn_aux.m"
                {
#line 619 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Rval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 619 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Rval_46;

#line 620 "exprn_aux.m"
                  {
#line 620 "exprn_aux.m"
                    ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_45, &ll_backend__exprn_aux__Rval_46, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
                  }
#line 621 "exprn_aux.m"
                  {
#line 621 "exprn_aux.m"
                    MR_Word base;
#line 621 "exprn_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 621 "exprn_aux.m"
                    *ll_backend__exprn_aux__Lval_10 = base;
#line 621 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 621 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_46));
#line 621 "exprn_aux.m"
                  }
#line 619 "exprn_aux.m"
                }
#line 606 "exprn_aux.m"
              else
#line 606 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 607 "exprn_aux.m"
                  {
#line 607 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
#line 607 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval_20;

#line 608 "exprn_aux.m"
                    {
#line 608 "exprn_aux.m"
                      ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_19, &ll_backend__exprn_aux__Rval_20, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
                    }
#line 609 "exprn_aux.m"
                    {
#line 609 "exprn_aux.m"
                      MR_Word base;
#line 609 "exprn_aux.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "exprn_aux.m"
                      *ll_backend__exprn_aux__Lval_10 = base;
#line 609 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 609 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_20));
#line 609 "exprn_aux.m"
                    }
#line 607 "exprn_aux.m"
                  }
#line 606 "exprn_aux.m"
                else
#line 604 "exprn_aux.m"
                  {
#line 605 "exprn_aux.m"
                    *ll_backend__exprn_aux__Lval_10 = ll_backend__exprn_aux__Lval0_9;
#line 605 "exprn_aux.m"
                    *ll_backend__exprn_aux__STATE_VARIABLE_N_27 = ll_backend__exprn_aux__STATE_VARIABLE_N_0_26;
#line 604 "exprn_aux.m"
                  }
#line 606 "exprn_aux.m"
  }
#line 584 "exprn_aux.m"
}

#line 573 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(
#line 573 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_7,
#line 573 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_8,
#line 573 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_9,
#line 573 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_10,
#line 573 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_12,
#line 573 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_13)
#line 573 "exprn_aux.m"
{
#line 580 "exprn_aux.m"
  {
#line 580 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 577 "exprn_aux.m"
    {
#line 577 "exprn_aux.m"
      ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__exprn_aux__Lval0_9, ll_backend__exprn_aux__OldLval_7);
    }
#line 580 "exprn_aux.m"
    if (ll_backend__exprn_aux__succeeded)
#line 578 "exprn_aux.m"
      {
#line 578 "exprn_aux.m"
        *ll_backend__exprn_aux__Lval_10 = ll_backend__exprn_aux__NewLval_8;
#line 579 "exprn_aux.m"
        *ll_backend__exprn_aux__STATE_VARIABLE_N_13 = (ll_backend__exprn_aux__STATE_VARIABLE_N_0_12 + (MR_Integer) 1);
#line 578 "exprn_aux.m"
      }
#line 580 "exprn_aux.m"
    else
#line 581 "exprn_aux.m"
      {
#line 581 "exprn_aux.m"
        ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Lval0_9, ll_backend__exprn_aux__Lval_10, ll_backend__exprn_aux__STATE_VARIABLE_N_0_12, ll_backend__exprn_aux__STATE_VARIABLE_N_13);
#line 581 "exprn_aux.m"
        return;
      }
#line 580 "exprn_aux.m"
  }
#line 573 "exprn_aux.m"
}

#line 540 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_mem_ref_5_p_0(
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_25,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 540 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__MemRef0_7,
#line 540 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__MemRef_8,
#line 540 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
#line 540 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18)
#line 540 "exprn_aux.m"
{
#line 548 "exprn_aux.m"
  {
#line 548 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 548 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) == (MR_mktag((MR_Integer) 1))))
#line 549 "exprn_aux.m"
      {
#line 549 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 549 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval_24;

#line 550 "exprn_aux.m"
        {
#line 550 "exprn_aux.m"
          ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_23, &ll_backend__exprn_aux__Rval_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
        }
#line 551 "exprn_aux.m"
        {
#line 551 "exprn_aux.m"
          MR_Word base;
#line 551 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 551 "exprn_aux.m"
          *ll_backend__exprn_aux__MemRef_8 = base;
#line 551 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_24));
#line 551 "exprn_aux.m"
        }
#line 549 "exprn_aux.m"
      }
#line 548 "exprn_aux.m"
    else
#line 548 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) == (MR_mktag((MR_Integer) 2))))
#line 553 "exprn_aux.m"
        {
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__BaseRval0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__MaybeTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 1)));
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__FieldRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 2)));
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__BaseRval_15;
#line 553 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__FieldRval_16;
#line 553 "exprn_aux.m"
          MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19;

#line 554 "exprn_aux.m"
          {
#line 554 "exprn_aux.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__BaseRval0_12, &ll_backend__exprn_aux__BaseRval_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19);
          }
#line 555 "exprn_aux.m"
          {
#line 555 "exprn_aux.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__FieldRval0_14, &ll_backend__exprn_aux__FieldRval_16, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
#line 556 "exprn_aux.m"
          {
#line 556 "exprn_aux.m"
            MR_Word base;
#line 556 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "exprn_aux.m"
            *ll_backend__exprn_aux__MemRef_8 = base;
#line 556 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__BaseRval_15));
#line 556 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_13));
#line 556 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__exprn_aux__FieldRval_16));
#line 556 "exprn_aux.m"
          }
#line 553 "exprn_aux.m"
        }
#line 548 "exprn_aux.m"
      else
#line 545 "exprn_aux.m"
        {
#line 545 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
#line 545 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_11;

#line 546 "exprn_aux.m"
          {
#line 546 "exprn_aux.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_10, &ll_backend__exprn_aux__Rval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
#line 547 "exprn_aux.m"
          {
#line 547 "exprn_aux.m"
            MR_Word base;
#line 547 "exprn_aux.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 547 "exprn_aux.m"
            *ll_backend__exprn_aux__MemRef_8 = base;
#line 547 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_11));
#line 547 "exprn_aux.m"
          }
#line 545 "exprn_aux.m"
        }
#line 548 "exprn_aux.m"
  }
#line 540 "exprn_aux.m"
}

#line 496 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
#line 496 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
#line 496 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 496 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Out0_7,
#line 496 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Out_8,
#line 496 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
#line 496 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19)
#line 496 "exprn_aux.m"
{
#line 500 "exprn_aux.m"
  {
#line 500 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Lval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 0)));
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__VarType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 1)));
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__IsDummy_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 2)));
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 3)));
#line 500 "exprn_aux.m"
    MR_String ll_backend__exprn_aux__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 4)));
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__MaybeForeign_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 5)));
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 6)));
#line 500 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Lval_17;
#line 503 "exprn_aux.m"
    void MR_CALL (* ll_backend__exprn_aux__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 503 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__conv1_Lval_17;

#line 503 "exprn_aux.m"
    {
#line 503 "exprn_aux.m"
      ll_backend__exprn_aux__func_0(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_10)), &ll_backend__exprn_aux__conv1_Lval_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);
    }
#line 503 "exprn_aux.m"
    ll_backend__exprn_aux__Lval_17 = ((MR_Word) ll_backend__exprn_aux__conv1_Lval_17);
#line 504 "exprn_aux.m"
    {
#line 504 "exprn_aux.m"
      MR_Word base;
#line 504 "exprn_aux.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 504 "exprn_aux.m"
      *ll_backend__exprn_aux__Out_8 = base;
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_17));
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__VarType_11));
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__exprn_aux__IsDummy_12));
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__exprn_aux__OrigType_13));
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Name_14));
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__exprn_aux__MaybeForeign_15));
#line 504 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__exprn_aux__BoxPolicy_16));
#line 504 "exprn_aux.m"
    }
#line 500 "exprn_aux.m"
  }
#line 496 "exprn_aux.m"
}

#line 485 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
#line 485 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
#line 485 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 485 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Out0_7,
#line 485 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Out_8,
#line 485 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
#line 485 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19)
#line 485 "exprn_aux.m"
{
#line 489 "exprn_aux.m"
  {
#line 489 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 489 "exprn_aux.m"
    MR_String ll_backend__exprn_aux__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 0)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__VarType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 1)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__IsDummy_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 2)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 3)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 4)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__MaybeForeign_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 5)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 6)));
#line 489 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Rval_17;

#line 492 "exprn_aux.m"
    {
#line 492 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_21, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_14, &ll_backend__exprn_aux__Rval_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);
    }
#line 493 "exprn_aux.m"
    {
#line 493 "exprn_aux.m"
      MR_Word base;
#line 493 "exprn_aux.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 493 "exprn_aux.m"
      *ll_backend__exprn_aux__Out_8 = base;
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Name_10));
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__VarType_11));
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__exprn_aux__IsDummy_12));
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__exprn_aux__OrigType_13));
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Rval_17));
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__exprn_aux__MaybeForeign_15));
#line 493 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__exprn_aux__BoxPolicy_16));
#line 493 "exprn_aux.m"
    }
#line 489 "exprn_aux.m"
  }
#line 485 "exprn_aux.m"
}

#line 474 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
#line 474 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_19,
#line 474 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_1,
#line 474 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__2_2,
#line 474 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
#line 474 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4,
#line 474 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_5)
#line 474 "exprn_aux.m"
{
#line 477 "exprn_aux.m"
  {
#line 477 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 477 "exprn_aux.m"
    if ((ll_backend__exprn_aux__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "exprn_aux.m"
      {
#line 478 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "exprn_aux.m"
        *ll_backend__exprn_aux__STATE_VARIABLE_Acc_5 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4;
#line 477 "exprn_aux.m"
      }
#line 477 "exprn_aux.m"
    else
#line 480 "exprn_aux.m"
      {
#line 480 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 480 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__LvalSet0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__2_2, (MR_Integer) 0)));
#line 480 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__LvalSet_12;
#line 480 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lvals0_14;
#line 480 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lvals_15;

#line 481 "exprn_aux.m"
        {
#line 481 "exprn_aux.m"
          ll_backend__exprn_aux__Lvals0_14 = mercury__set__to_sorted_list_1_f_0(ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__LvalSet0_11);
        }
#line 482 "exprn_aux.m"
        {
#line 482 "exprn_aux.m"
          mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__TypeInfo_for_T_19, ll_backend__exprn_aux__Transform_1, ll_backend__exprn_aux__Lvals0_14, &ll_backend__exprn_aux__Lvals_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4, ll_backend__exprn_aux__STATE_VARIABLE_Acc_5);
        }
#line 483 "exprn_aux.m"
        {
#line 483 "exprn_aux.m"
          mercury__set__list_to_set_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__Lvals_15, &ll_backend__exprn_aux__LvalSet_12);
        }
#line 480 "exprn_aux.m"
        {
#line 480 "exprn_aux.m"
          MR_Word base;
#line 480 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__3_3 = base;
#line 480 "exprn_aux.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_12));
#line 480 "exprn_aux.m"
        }
#line 480 "exprn_aux.m"
      }
#line 477 "exprn_aux.m"
  }
#line 474 "exprn_aux.m"
}

#line 451 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2(
#line 451 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 451 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 451 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 451 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 451 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
#line 451 "exprn_aux.m"
{
#line 451 "exprn_aux.m"
  {
#line 451 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
#line 451 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__conv1_Out_8;

#line 451 "exprn_aux.m"
    {
#line 451 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv1_Out_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
#line 451 "exprn_aux.m"
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv1_Out_8));
#line 451 "exprn_aux.m"
  }
#line 451 "exprn_aux.m"
}

#line 446 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1(
#line 446 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 446 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 446 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 446 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 446 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
#line 446 "exprn_aux.m"
{
#line 446 "exprn_aux.m"
  {
#line 446 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
#line 446 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__conv0_Out_8;

#line 446 "exprn_aux.m"
    {
#line 446 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv0_Out_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
#line 446 "exprn_aux.m"
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv0_Out_8));
#line 446 "exprn_aux.m"
  }
#line 446 "exprn_aux.m"
}

#line 439 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
#line 439 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_31,
#line 439 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 439 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Component0_7,
#line 439 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Component_8,
#line 439 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
#line 439 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25)
#line 439 "exprn_aux.m"
{
#line 449 "exprn_aux.m"
  {
#line 449 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 449 "exprn_aux.m"
    if ((ll_backend__exprn_aux__Component0_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 470 "exprn_aux.m"
      {
#line 471 "exprn_aux.m"
        *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
#line 471 "exprn_aux.m"
        *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 470 "exprn_aux.m"
      }
#line 449 "exprn_aux.m"
    else
#line 449 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__Component0_7)) == (MR_mktag((MR_Integer) 1))))
#line 445 "exprn_aux.m"
        {
#line 445 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__TypeCtorInfo_36_36;
#line 445 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Inputs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)));
#line 445 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Inputs_11;
#line 445 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_29_29;

#line 446 "exprn_aux.m"
          {
#line 446 "exprn_aux.m"
            ll_backend__exprn_aux__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 446 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[3]));
#line 446 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1));
#line 446 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 446 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_31));
#line 446 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
#line 446 "exprn_aux.m"
          }
#line 2849 "ll_backend.exprn_aux.c"
          ll_backend__exprn_aux__TypeCtorInfo_36_36 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0;
#line 446 "exprn_aux.m"
          {
#line 446 "exprn_aux.m"
            mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_36_36, ll_backend__exprn_aux__TypeCtorInfo_36_36, ll_backend__exprn_aux__TypeInfo_for_T_31, ll_backend__exprn_aux__V_29_29, ll_backend__exprn_aux__Inputs0_10, &ll_backend__exprn_aux__Inputs_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
#line 448 "exprn_aux.m"
          {
#line 448 "exprn_aux.m"
            MR_Word base;
#line 448 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "exprn_aux.m"
            *ll_backend__exprn_aux__Component_8 = base;
#line 448 "exprn_aux.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Inputs_11));
#line 448 "exprn_aux.m"
          }
#line 445 "exprn_aux.m"
        }
#line 449 "exprn_aux.m"
      else
#line 449 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__Component0_7)) == (MR_mktag((MR_Integer) 2))))
#line 450 "exprn_aux.m"
          {
#line 450 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__TypeCtorInfo_41_41;
#line 450 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Outputs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)));
#line 450 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Outputs_13;
#line 450 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_27_27;

#line 451 "exprn_aux.m"
            {
#line 451 "exprn_aux.m"
              ll_backend__exprn_aux__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 451 "exprn_aux.m"
              MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[4]));
#line 451 "exprn_aux.m"
              MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2));
#line 451 "exprn_aux.m"
              MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 451 "exprn_aux.m"
              MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_31));
#line 451 "exprn_aux.m"
              MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
#line 451 "exprn_aux.m"
            }
#line 2901 "ll_backend.exprn_aux.c"
            ll_backend__exprn_aux__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0;
#line 451 "exprn_aux.m"
            {
#line 451 "exprn_aux.m"
              mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_41_41, ll_backend__exprn_aux__TypeCtorInfo_41_41, ll_backend__exprn_aux__TypeInfo_for_T_31, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__Outputs0_12, &ll_backend__exprn_aux__Outputs_13, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
            }
#line 453 "exprn_aux.m"
            {
#line 453 "exprn_aux.m"
              MR_Word base;
#line 453 "exprn_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 453 "exprn_aux.m"
              *ll_backend__exprn_aux__Component_8 = base;
#line 453 "exprn_aux.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Outputs_13));
#line 453 "exprn_aux.m"
            }
#line 450 "exprn_aux.m"
          }
#line 449 "exprn_aux.m"
        else
#line 449 "exprn_aux.m"
          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Component0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 467 "exprn_aux.m"
            {
#line 468 "exprn_aux.m"
              *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
#line 468 "exprn_aux.m"
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 467 "exprn_aux.m"
            }
#line 449 "exprn_aux.m"
          else
#line 449 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Component0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 464 "exprn_aux.m"
              {
#line 465 "exprn_aux.m"
                *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
#line 465 "exprn_aux.m"
                *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 464 "exprn_aux.m"
              }
#line 449 "exprn_aux.m"
            else
#line 449 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Component0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 459 "exprn_aux.m"
                {
#line 459 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__CanBranchAway_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 1)));
#line 459 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__AffectsLiveness_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 2)));
#line 459 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__LvalSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 3)));
#line 459 "exprn_aux.m"
                  MR_String ll_backend__exprn_aux__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 4)));
#line 459 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__LvalSet_21;

#line 477 "exprn_aux.m"
                  if ((ll_backend__exprn_aux__LvalSet0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 477 "exprn_aux.m"
                    {
#line 478 "exprn_aux.m"
                      ll_backend__exprn_aux__LvalSet_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 478 "exprn_aux.m"
                      *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 477 "exprn_aux.m"
                    }
#line 477 "exprn_aux.m"
                  else
#line 480 "exprn_aux.m"
                    {
#line 480 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__TypeCtorInfo_20_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 480 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__LvalSet0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__LvalSet0_19, (MR_Integer) 0)));
#line 480 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__LvalSet_48;
#line 480 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Lvals0_50;
#line 480 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Lvals_51;

#line 481 "exprn_aux.m"
                      {
#line 481 "exprn_aux.m"
                        ll_backend__exprn_aux__Lvals0_50 = mercury__set__to_sorted_list_1_f_0(ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__LvalSet0_47);
                      }
#line 482 "exprn_aux.m"
                      {
#line 482 "exprn_aux.m"
                        mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__TypeInfo_for_T_31, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Lvals0_50, &ll_backend__exprn_aux__Lvals_51, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
                      }
#line 483 "exprn_aux.m"
                      {
#line 483 "exprn_aux.m"
                        mercury__set__list_to_set_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__Lvals_51, &ll_backend__exprn_aux__LvalSet_48);
                      }
#line 480 "exprn_aux.m"
                      {
#line 480 "exprn_aux.m"
                        ll_backend__exprn_aux__LvalSet_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 480 "exprn_aux.m"
                        MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__LvalSet_21, 0) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_48));
#line 480 "exprn_aux.m"
                      }
#line 480 "exprn_aux.m"
                    }
#line 461 "exprn_aux.m"
                  {
#line 461 "exprn_aux.m"
                    MR_Word base;
#line 461 "exprn_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 461 "exprn_aux.m"
                    *ll_backend__exprn_aux__Component_8 = base;
#line 461 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 461 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__CanBranchAway_17));
#line 461 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__AffectsLiveness_18));
#line 461 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_21));
#line 461 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Code_20));
#line 461 "exprn_aux.m"
                  }
#line 459 "exprn_aux.m"
                }
#line 449 "exprn_aux.m"
              else
#line 455 "exprn_aux.m"
                {
#line 456 "exprn_aux.m"
                  *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
#line 456 "exprn_aux.m"
                  *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 455 "exprn_aux.m"
                }
#line 449 "exprn_aux.m"
  }
#line 439 "exprn_aux.m"
}

#line 405 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2(
#line 405 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 405 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 405 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 405 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 405 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
#line 405 "exprn_aux.m"
{
#line 405 "exprn_aux.m"
  {
#line 405 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
#line 405 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__conv3_Component_8;

#line 405 "exprn_aux.m"
    {
#line 405 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_component_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv3_Component_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
#line 405 "exprn_aux.m"
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv3_Component_8));
#line 405 "exprn_aux.m"
  }
#line 405 "exprn_aux.m"
}

#line 283 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1(
#line 283 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 283 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 283 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 283 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 283 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
#line 283 "exprn_aux.m"
{
#line 283 "exprn_aux.m"
  {
#line 283 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
#line 283 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__conv2_Instr_8;

#line 283 "exprn_aux.m"
    {
#line 283 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv2_Instr_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
#line 283 "exprn_aux.m"
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv2_Instr_8));
#line 283 "exprn_aux.m"
  }
#line 283 "exprn_aux.m"
}

#line 257 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
#line 257 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_185,
#line 257 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 257 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Uinstr0_7,
#line 257 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Uinstr_8,
#line 257 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97,
#line 257 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_98)
#line 257 "exprn_aux.m"
{
#line 275 "exprn_aux.m"
  {
#line 275 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 275 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 2))))
#line 276 "exprn_aux.m"
      {
#line 276 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__TypeCtorInfo_186_186 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 276 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__LvalSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)));
#line 276 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lvals0_29;
#line 276 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lvals_30;
#line 276 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__LvalSet_31;

#line 277 "exprn_aux.m"
        {
#line 277 "exprn_aux.m"
          mercury__set__to_sorted_list_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__LvalSet0_28, &ll_backend__exprn_aux__Lvals0_29);
        }
#line 278 "exprn_aux.m"
        {
#line 278 "exprn_aux.m"
          mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Lvals0_29, &ll_backend__exprn_aux__Lvals_30, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
        }
#line 279 "exprn_aux.m"
        {
#line 279 "exprn_aux.m"
          mercury__set__list_to_set_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__Lvals_30, &ll_backend__exprn_aux__LvalSet_31);
        }
#line 280 "exprn_aux.m"
        {
#line 280 "exprn_aux.m"
          MR_Word base;
#line 280 "exprn_aux.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 280 "exprn_aux.m"
          *ll_backend__exprn_aux__Uinstr_8 = base;
#line 280 "exprn_aux.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_31));
#line 280 "exprn_aux.m"
        }
#line 276 "exprn_aux.m"
      }
#line 275 "exprn_aux.m"
    else
#line 275 "exprn_aux.m"
      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 301 "exprn_aux.m"
        {
#line 301 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__AffectsLiveness_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 301 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__LiveLvals0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 301 "exprn_aux.m"
          MR_String ll_backend__exprn_aux__Code_43 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 301 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__LiveLvals_44;

#line 302 "exprn_aux.m"
          {
#line 302 "exprn_aux.m"
            ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LiveLvals0_42, &ll_backend__exprn_aux__LiveLvals_44, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
          }
#line 304 "exprn_aux.m"
          {
#line 304 "exprn_aux.m"
            MR_Word base;
#line 304 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 304 "exprn_aux.m"
            *ll_backend__exprn_aux__Uinstr_8 = base;
#line 304 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 304 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__AffectsLiveness_41));
#line 304 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LiveLvals_44));
#line 304 "exprn_aux.m"
            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Code_43));
#line 304 "exprn_aux.m"
          }
#line 301 "exprn_aux.m"
        }
#line 275 "exprn_aux.m"
      else
#line 275 "exprn_aux.m"
        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 287 "exprn_aux.m"
          {
#line 287 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Lval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 287 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 287 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Lval_38;
#line 287 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval_39;
#line 287 "exprn_aux.m"
            MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_133_133;
#line 288 "exprn_aux.m"
            void MR_CALL (* ll_backend__exprn_aux__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 288 "exprn_aux.m"
            MR_Box ll_backend__exprn_aux__conv1_Lval_38;

#line 288 "exprn_aux.m"
            {
#line 288 "exprn_aux.m"
              ll_backend__exprn_aux__func_0(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_36)), &ll_backend__exprn_aux__conv1_Lval_38, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_133_133);
            }
#line 288 "exprn_aux.m"
            ll_backend__exprn_aux__Lval_38 = ((MR_Word) ll_backend__exprn_aux__conv1_Lval_38);
#line 289 "exprn_aux.m"
            {
#line 289 "exprn_aux.m"
              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_37, &ll_backend__exprn_aux__Rval_39, ll_backend__exprn_aux__STATE_VARIABLE_Acc_133_133, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
            }
#line 290 "exprn_aux.m"
            {
#line 290 "exprn_aux.m"
              MR_Word base;
#line 290 "exprn_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 290 "exprn_aux.m"
              *ll_backend__exprn_aux__Uinstr_8 = base;
#line 290 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 290 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_38));
#line 290 "exprn_aux.m"
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval_39));
#line 290 "exprn_aux.m"
            }
#line 287 "exprn_aux.m"
          }
#line 275 "exprn_aux.m"
        else
#line 275 "exprn_aux.m"
          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 282 "exprn_aux.m"
            {
#line 282 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__TypeCtorInfo_191_191;
#line 282 "exprn_aux.m"
              MR_Integer ll_backend__exprn_aux__TempR_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 282 "exprn_aux.m"
              MR_Integer ll_backend__exprn_aux__TempF_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 282 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Instrs0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 282 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Instrs_35;
#line 282 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__V_135_135;

#line 283 "exprn_aux.m"
              {
#line 283 "exprn_aux.m"
                ll_backend__exprn_aux__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 283 "exprn_aux.m"
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[1]));
#line 283 "exprn_aux.m"
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1));
#line 283 "exprn_aux.m"
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 283 "exprn_aux.m"
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_185));
#line 283 "exprn_aux.m"
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
#line 283 "exprn_aux.m"
              }
#line 3310 "ll_backend.exprn_aux.c"
              ll_backend__exprn_aux__TypeCtorInfo_191_191 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
#line 283 "exprn_aux.m"
              {
#line 283 "exprn_aux.m"
                mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_191_191, ll_backend__exprn_aux__TypeCtorInfo_191_191, ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__V_135_135, ll_backend__exprn_aux__Instrs0_34, &ll_backend__exprn_aux__Instrs_35, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
#line 285 "exprn_aux.m"
              {
#line 285 "exprn_aux.m"
                MR_Word base;
#line 285 "exprn_aux.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 285 "exprn_aux.m"
                *ll_backend__exprn_aux__Uinstr_8 = base;
#line 285 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 285 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__TempR_32));
#line 285 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__TempF_33));
#line 285 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Instrs_35));
#line 285 "exprn_aux.m"
              }
#line 282 "exprn_aux.m"
            }
#line 275 "exprn_aux.m"
          else
#line 275 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 297 "exprn_aux.m"
              {
#line 297 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Labels_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 297 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 297 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval_143;

#line 298 "exprn_aux.m"
                {
#line 298 "exprn_aux.m"
                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_142, &ll_backend__exprn_aux__Rval_143, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                }
#line 299 "exprn_aux.m"
                {
#line 299 "exprn_aux.m"
                  MR_Word base;
#line 299 "exprn_aux.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 299 "exprn_aux.m"
                  *ll_backend__exprn_aux__Uinstr_8 = base;
#line 299 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 299 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_143));
#line 299 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Labels_40));
#line 299 "exprn_aux.m"
                }
#line 297 "exprn_aux.m"
              }
#line 275 "exprn_aux.m"
            else
#line 275 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 404 "exprn_aux.m"
                {
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__TypeCtorInfo_196_196;
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Decls_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Components0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MayCallMercury_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MaybeLabel1_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 4)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MaybeLabel2_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 5)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MaybeLabel3_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 6)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MaybeLabel4_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 7)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MaybeLabel5_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 8)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__ReferStackSlot_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 9)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MayDupl_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 10)));
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__Components_86;
#line 404 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__V_108_108;

#line 405 "exprn_aux.m"
                  {
#line 405 "exprn_aux.m"
                    ll_backend__exprn_aux__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 405 "exprn_aux.m"
                    MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[2]));
#line 405 "exprn_aux.m"
                    MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2));
#line 405 "exprn_aux.m"
                    MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "exprn_aux.m"
                    MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_185));
#line 405 "exprn_aux.m"
                    MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
#line 405 "exprn_aux.m"
                  }
#line 3422 "ll_backend.exprn_aux.c"
                  ll_backend__exprn_aux__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
#line 405 "exprn_aux.m"
                  {
#line 405 "exprn_aux.m"
                    mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_196_196, ll_backend__exprn_aux__TypeCtorInfo_196_196, ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__V_108_108, ll_backend__exprn_aux__Components0_77, &ll_backend__exprn_aux__Components_86, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                  }
#line 407 "exprn_aux.m"
                  {
#line 407 "exprn_aux.m"
                    MR_Word base;
#line 407 "exprn_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
#line 407 "exprn_aux.m"
                    *ll_backend__exprn_aux__Uinstr_8 = base;
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Decls_76));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Components_86));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__MayCallMercury_78));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel1_79));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel2_80));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel3_81));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel4_82));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel5_83));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__exprn_aux__ReferStackSlot_84));
#line 407 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__exprn_aux__MayDupl_85));
#line 407 "exprn_aux.m"
                  }
#line 404 "exprn_aux.m"
                }
#line 275 "exprn_aux.m"
              else
#line 275 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 357 "exprn_aux.m"
                  {
#line 357 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 357 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval_159;

#line 358 "exprn_aux.m"
                    {
#line 358 "exprn_aux.m"
                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_158, &ll_backend__exprn_aux__Rval_159, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                    }
#line 359 "exprn_aux.m"
                    {
#line 359 "exprn_aux.m"
                      MR_Word base;
#line 359 "exprn_aux.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "exprn_aux.m"
                      *ll_backend__exprn_aux__Uinstr_8 = base;
#line 359 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
#line 359 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_159));
#line 359 "exprn_aux.m"
                    }
#line 357 "exprn_aux.m"
                  }
#line 275 "exprn_aux.m"
                else
#line 275 "exprn_aux.m"
                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 306 "exprn_aux.m"
                    {
#line 306 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__CodeAddr_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 306 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Rval0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 306 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Rval_145;

#line 307 "exprn_aux.m"
                      {
#line 307 "exprn_aux.m"
                        ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_144, &ll_backend__exprn_aux__Rval_145, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                      }
#line 308 "exprn_aux.m"
                      {
#line 308 "exprn_aux.m"
                        MR_Word base;
#line 308 "exprn_aux.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 308 "exprn_aux.m"
                        *ll_backend__exprn_aux__Uinstr_8 = base;
#line 308 "exprn_aux.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 308 "exprn_aux.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_145));
#line 308 "exprn_aux.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__CodeAddr_45));
#line 308 "exprn_aux.m"
                      }
#line 306 "exprn_aux.m"
                    }
#line 275 "exprn_aux.m"
                  else
#line 275 "exprn_aux.m"
                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 319 "exprn_aux.m"
                      {
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MaybeTag_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MO_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__TypeCtor_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 5)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MayUseAtomic_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 6)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MaybeRegionRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 7)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MaybeReuse0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 8)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MaybeRegionRval_52;
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__MaybeReuse_55;
#line 319 "exprn_aux.m"
                        MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_121_121;
#line 319 "exprn_aux.m"
                        MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122;
#line 319 "exprn_aux.m"
                        MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123;
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__Lval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__Rval0_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 4)));
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__Lval_152;
#line 319 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__Rval_153;
#line 320 "exprn_aux.m"
                        void MR_CALL (* ll_backend__exprn_aux__func_4)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 320 "exprn_aux.m"
                        MR_Box ll_backend__exprn_aux__conv5_Lval_152;

#line 320 "exprn_aux.m"
                        {
#line 320 "exprn_aux.m"
                          ll_backend__exprn_aux__func_4(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_150)), &ll_backend__exprn_aux__conv5_Lval_152, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_121_121);
                        }
#line 320 "exprn_aux.m"
                        ll_backend__exprn_aux__Lval_152 = ((MR_Word) ll_backend__exprn_aux__conv5_Lval_152);
#line 321 "exprn_aux.m"
                        {
#line 321 "exprn_aux.m"
                          ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_151, &ll_backend__exprn_aux__Rval_153, ll_backend__exprn_aux__STATE_VARIABLE_Acc_121_121, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122);
                        }
#line 325 "exprn_aux.m"
                        if ((ll_backend__exprn_aux__MaybeRegionRval0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 323 "exprn_aux.m"
                          {
#line 324 "exprn_aux.m"
                            ll_backend__exprn_aux__MaybeRegionRval_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 324 "exprn_aux.m"
                            ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122;
#line 323 "exprn_aux.m"
                          }
#line 325 "exprn_aux.m"
                        else
#line 326 "exprn_aux.m"
                          {
#line 326 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__RegionRval0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeRegionRval0_50, (MR_Integer) 0)));
#line 326 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__RegionRval_54;

#line 327 "exprn_aux.m"
                            {
#line 327 "exprn_aux.m"
                              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__RegionRval0_53, &ll_backend__exprn_aux__RegionRval_54, ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123);
                            }
#line 328 "exprn_aux.m"
                            {
#line 328 "exprn_aux.m"
                              ll_backend__exprn_aux__MaybeRegionRval_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 328 "exprn_aux.m"
                              MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeRegionRval_52, 0) = ((MR_Box) (ll_backend__exprn_aux__RegionRval_54));
#line 328 "exprn_aux.m"
                            }
#line 326 "exprn_aux.m"
                          }
#line 333 "exprn_aux.m"
                        if ((ll_backend__exprn_aux__MaybeReuse0_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 331 "exprn_aux.m"
                          {
#line 332 "exprn_aux.m"
                            ll_backend__exprn_aux__MaybeReuse_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 332 "exprn_aux.m"
                            *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123;
#line 331 "exprn_aux.m"
                          }
#line 333 "exprn_aux.m"
                        else
#line 334 "exprn_aux.m"
                          {
#line 334 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__ReuseRval0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse0_51, (MR_Integer) 0)));
#line 334 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__MaybeFlagLval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse0_51, (MR_Integer) 1)));
#line 334 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__ReuseRval_58;
#line 334 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__MaybeFlagLval_59;
#line 334 "exprn_aux.m"
                            MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124;

#line 335 "exprn_aux.m"
                            {
#line 335 "exprn_aux.m"
                              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__ReuseRval0_56, &ll_backend__exprn_aux__ReuseRval_58, ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124);
                            }
#line 339 "exprn_aux.m"
                            if ((ll_backend__exprn_aux__MaybeFlagLval0_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 337 "exprn_aux.m"
                              {
#line 338 "exprn_aux.m"
                                ll_backend__exprn_aux__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 338 "exprn_aux.m"
                                *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124;
#line 337 "exprn_aux.m"
                              }
#line 339 "exprn_aux.m"
                            else
#line 340 "exprn_aux.m"
                              {
#line 340 "exprn_aux.m"
                                MR_Word ll_backend__exprn_aux__FlagLval0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeFlagLval0_57, (MR_Integer) 0)));
#line 340 "exprn_aux.m"
                                MR_Word ll_backend__exprn_aux__FlagLval_61;
#line 341 "exprn_aux.m"
                                void MR_CALL (* ll_backend__exprn_aux__func_6)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 341 "exprn_aux.m"
                                MR_Box ll_backend__exprn_aux__conv7_FlagLval_61;

#line 341 "exprn_aux.m"
                                {
#line 341 "exprn_aux.m"
                                  ll_backend__exprn_aux__func_6(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__FlagLval0_60)), &ll_backend__exprn_aux__conv7_FlagLval_61, ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                }
#line 341 "exprn_aux.m"
                                ll_backend__exprn_aux__FlagLval_61 = ((MR_Word) ll_backend__exprn_aux__conv7_FlagLval_61);
#line 342 "exprn_aux.m"
                                {
#line 342 "exprn_aux.m"
                                  ll_backend__exprn_aux__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 342 "exprn_aux.m"
                                  MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeFlagLval_59, 0) = ((MR_Box) (ll_backend__exprn_aux__FlagLval_61));
#line 342 "exprn_aux.m"
                                }
#line 340 "exprn_aux.m"
                              }
#line 344 "exprn_aux.m"
                            {
#line 344 "exprn_aux.m"
                              ll_backend__exprn_aux__MaybeReuse_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "exprn_aux.m"
                              MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse_55, 0) = ((MR_Box) (ll_backend__exprn_aux__ReuseRval_58));
#line 344 "exprn_aux.m"
                              MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse_55, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeFlagLval_59));
#line 344 "exprn_aux.m"
                            }
#line 334 "exprn_aux.m"
                          }
#line 346 "exprn_aux.m"
                        {
#line 346 "exprn_aux.m"
                          MR_Word base;
#line 346 "exprn_aux.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
#line 346 "exprn_aux.m"
                          *ll_backend__exprn_aux__Uinstr_8 = base;
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_152));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_46));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__MO_47));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Rval_153));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__exprn_aux__TypeCtor_48));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__exprn_aux__MayUseAtomic_49));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__exprn_aux__MaybeRegionRval_52));
#line 346 "exprn_aux.m"
                          MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__exprn_aux__MaybeReuse_55));
#line 346 "exprn_aux.m"
                        }
#line 319 "exprn_aux.m"
                      }
#line 275 "exprn_aux.m"
                    else
#line 275 "exprn_aux.m"
                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 411 "exprn_aux.m"
                        {
#line 411 "exprn_aux.m"
                          MR_Integer ll_backend__exprn_aux__BranchCount_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 411 "exprn_aux.m"
                          MR_Integer ll_backend__exprn_aux__ConjId_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 411 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__Lval0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 411 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__Lval_172;
#line 412 "exprn_aux.m"
                          void MR_CALL (* ll_backend__exprn_aux__func_8)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 412 "exprn_aux.m"
                          MR_Box ll_backend__exprn_aux__conv9_Lval_172;

#line 412 "exprn_aux.m"
                          {
#line 412 "exprn_aux.m"
                            ll_backend__exprn_aux__func_8(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_171)), &ll_backend__exprn_aux__conv9_Lval_172, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                          }
#line 412 "exprn_aux.m"
                          ll_backend__exprn_aux__Lval_172 = ((MR_Word) ll_backend__exprn_aux__conv9_Lval_172);
#line 413 "exprn_aux.m"
                          {
#line 413 "exprn_aux.m"
                            MR_Word base;
#line 413 "exprn_aux.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 413 "exprn_aux.m"
                            *ll_backend__exprn_aux__Uinstr_8 = base;
#line 413 "exprn_aux.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
#line 413 "exprn_aux.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_172));
#line 413 "exprn_aux.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__BranchCount_87));
#line 413 "exprn_aux.m"
                            MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__ConjId_88));
#line 413 "exprn_aux.m"
                          }
#line 411 "exprn_aux.m"
                        }
#line 275 "exprn_aux.m"
                      else
#line 275 "exprn_aux.m"
                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 415 "exprn_aux.m"
                          {
#line 415 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__Label_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 415 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__Lval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 415 "exprn_aux.m"
                            MR_Word ll_backend__exprn_aux__Lval_174;
#line 416 "exprn_aux.m"
                            void MR_CALL (* ll_backend__exprn_aux__func_10)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 416 "exprn_aux.m"
                            MR_Box ll_backend__exprn_aux__conv11_Lval_174;

#line 416 "exprn_aux.m"
                            {
#line 416 "exprn_aux.m"
                              ll_backend__exprn_aux__func_10(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_173)), &ll_backend__exprn_aux__conv11_Lval_174, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                            }
#line 416 "exprn_aux.m"
                            ll_backend__exprn_aux__Lval_174 = ((MR_Word) ll_backend__exprn_aux__conv11_Lval_174);
#line 417 "exprn_aux.m"
                            {
#line 417 "exprn_aux.m"
                              MR_Word base;
#line 417 "exprn_aux.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 417 "exprn_aux.m"
                              *ll_backend__exprn_aux__Uinstr_8 = base;
#line 417 "exprn_aux.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
#line 417 "exprn_aux.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_174));
#line 417 "exprn_aux.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Label_89));
#line 417 "exprn_aux.m"
                            }
#line 415 "exprn_aux.m"
                          }
#line 275 "exprn_aux.m"
                        else
#line 275 "exprn_aux.m"
                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 292 "exprn_aux.m"
                            {
#line 292 "exprn_aux.m"
                              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_131_131;
#line 292 "exprn_aux.m"
                              MR_Word ll_backend__exprn_aux__Lval0_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 292 "exprn_aux.m"
                              MR_Word ll_backend__exprn_aux__Rval0_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 292 "exprn_aux.m"
                              MR_Word ll_backend__exprn_aux__Lval_140;
#line 292 "exprn_aux.m"
                              MR_Word ll_backend__exprn_aux__Rval_141;
#line 293 "exprn_aux.m"
                              void MR_CALL (* ll_backend__exprn_aux__func_12)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 293 "exprn_aux.m"
                              MR_Box ll_backend__exprn_aux__conv13_Lval_140;

#line 293 "exprn_aux.m"
                              {
#line 293 "exprn_aux.m"
                                ll_backend__exprn_aux__func_12(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_138)), &ll_backend__exprn_aux__conv13_Lval_140, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_131_131);
                              }
#line 293 "exprn_aux.m"
                              ll_backend__exprn_aux__Lval_140 = ((MR_Word) ll_backend__exprn_aux__conv13_Lval_140);
#line 294 "exprn_aux.m"
                              {
#line 294 "exprn_aux.m"
                                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_139, &ll_backend__exprn_aux__Rval_141, ll_backend__exprn_aux__STATE_VARIABLE_Acc_131_131, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                              }
#line 295 "exprn_aux.m"
                              {
#line 295 "exprn_aux.m"
                                MR_Word base;
#line 295 "exprn_aux.m"
                                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 295 "exprn_aux.m"
                                *ll_backend__exprn_aux__Uinstr_8 = base;
#line 295 "exprn_aux.m"
                                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 295 "exprn_aux.m"
                                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_140));
#line 295 "exprn_aux.m"
                                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval_141));
#line 295 "exprn_aux.m"
                              }
#line 292 "exprn_aux.m"
                            }
#line 275 "exprn_aux.m"
                          else
#line 275 "exprn_aux.m"
                            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 419 "exprn_aux.m"
                              {
#line 419 "exprn_aux.m"
                                MR_Integer ll_backend__exprn_aux__NumSlots_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 419 "exprn_aux.m"
                                MR_Word ll_backend__exprn_aux__Lval0_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 419 "exprn_aux.m"
                                MR_Word ll_backend__exprn_aux__Lval_176;
#line 420 "exprn_aux.m"
                                void MR_CALL (* ll_backend__exprn_aux__func_14)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 420 "exprn_aux.m"
                                MR_Box ll_backend__exprn_aux__conv15_Lval_176;

#line 420 "exprn_aux.m"
                                {
#line 420 "exprn_aux.m"
                                  ll_backend__exprn_aux__func_14(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_175)), &ll_backend__exprn_aux__conv15_Lval_176, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                }
#line 420 "exprn_aux.m"
                                ll_backend__exprn_aux__Lval_176 = ((MR_Word) ll_backend__exprn_aux__conv15_Lval_176);
#line 421 "exprn_aux.m"
                                {
#line 421 "exprn_aux.m"
                                  MR_Word base;
#line 421 "exprn_aux.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 421 "exprn_aux.m"
                                  *ll_backend__exprn_aux__Uinstr_8 = base;
#line 421 "exprn_aux.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
#line 421 "exprn_aux.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__NumSlots_90));
#line 421 "exprn_aux.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Lval_176));
#line 421 "exprn_aux.m"
                                }
#line 419 "exprn_aux.m"
                              }
#line 275 "exprn_aux.m"
                            else
#line 275 "exprn_aux.m"
                              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 433 "exprn_aux.m"
                                {
#line 433 "exprn_aux.m"
                                  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_99_99;
#line 433 "exprn_aux.m"
                                  MR_Word ll_backend__exprn_aux__LCRval0_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 433 "exprn_aux.m"
                                  MR_Word ll_backend__exprn_aux__LCRval_182;
#line 433 "exprn_aux.m"
                                  MR_Word ll_backend__exprn_aux__LCSRval0_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 433 "exprn_aux.m"
                                  MR_Word ll_backend__exprn_aux__LCSRval_184;

#line 434 "exprn_aux.m"
                                  {
#line 434 "exprn_aux.m"
                                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCRval0_181, &ll_backend__exprn_aux__LCRval_182, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_99_99);
                                  }
#line 435 "exprn_aux.m"
                                  {
#line 435 "exprn_aux.m"
                                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCSRval0_183, &ll_backend__exprn_aux__LCSRval_184, ll_backend__exprn_aux__STATE_VARIABLE_Acc_99_99, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                  }
#line 436 "exprn_aux.m"
                                  {
#line 436 "exprn_aux.m"
                                    MR_Word base;
#line 436 "exprn_aux.m"
                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 436 "exprn_aux.m"
                                    *ll_backend__exprn_aux__Uinstr_8 = base;
#line 436 "exprn_aux.m"
                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
#line 436 "exprn_aux.m"
                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__LCRval_182));
#line 436 "exprn_aux.m"
                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LCSRval_184));
#line 436 "exprn_aux.m"
                                  }
#line 433 "exprn_aux.m"
                                }
#line 275 "exprn_aux.m"
                              else
#line 275 "exprn_aux.m"
                                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 428 "exprn_aux.m"
                                  {
#line 428 "exprn_aux.m"
                                    MR_Word ll_backend__exprn_aux__LCSRval0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 428 "exprn_aux.m"
                                    MR_Word ll_backend__exprn_aux__LCSRval_96;
#line 428 "exprn_aux.m"
                                    MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_101_101;
#line 428 "exprn_aux.m"
                                    MR_Word ll_backend__exprn_aux__Label_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 428 "exprn_aux.m"
                                    MR_Word ll_backend__exprn_aux__LCRval0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 428 "exprn_aux.m"
                                    MR_Word ll_backend__exprn_aux__LCRval_180;

#line 429 "exprn_aux.m"
                                    {
#line 429 "exprn_aux.m"
                                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCRval0_179, &ll_backend__exprn_aux__LCRval_180, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_101_101);
                                    }
#line 430 "exprn_aux.m"
                                    {
#line 430 "exprn_aux.m"
                                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCSRval0_95, &ll_backend__exprn_aux__LCSRval_96, ll_backend__exprn_aux__STATE_VARIABLE_Acc_101_101, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                    }
#line 431 "exprn_aux.m"
                                    {
#line 431 "exprn_aux.m"
                                      MR_Word base;
#line 431 "exprn_aux.m"
                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 431 "exprn_aux.m"
                                      *ll_backend__exprn_aux__Uinstr_8 = base;
#line 431 "exprn_aux.m"
                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
#line 431 "exprn_aux.m"
                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__LCRval_180));
#line 431 "exprn_aux.m"
                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LCSRval_96));
#line 431 "exprn_aux.m"
                                      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Label_178));
#line 431 "exprn_aux.m"
                                    }
#line 428 "exprn_aux.m"
                                  }
#line 275 "exprn_aux.m"
                                else
#line 275 "exprn_aux.m"
                                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 423 "exprn_aux.m"
                                    {
#line 423 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__LCRval0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 423 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__LCSLval0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 423 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__LCRval_93;
#line 423 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__LCSLval_94;
#line 423 "exprn_aux.m"
                                      MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_103_103;
#line 423 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__Label_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 425 "exprn_aux.m"
                                      void MR_CALL (* ll_backend__exprn_aux__func_16)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 425 "exprn_aux.m"
                                      MR_Box ll_backend__exprn_aux__conv17_LCSLval_94;

#line 424 "exprn_aux.m"
                                      {
#line 424 "exprn_aux.m"
                                        ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCRval0_91, &ll_backend__exprn_aux__LCRval_93, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_103_103);
                                      }
#line 425 "exprn_aux.m"
                                      ll_backend__exprn_aux__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 425 "exprn_aux.m"
                                      {
#line 425 "exprn_aux.m"
                                        ll_backend__exprn_aux__func_16(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__LCSLval0_92)), &ll_backend__exprn_aux__conv17_LCSLval_94, ll_backend__exprn_aux__STATE_VARIABLE_Acc_103_103, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                      }
#line 425 "exprn_aux.m"
                                      ll_backend__exprn_aux__LCSLval_94 = ((MR_Word) ll_backend__exprn_aux__conv17_LCSLval_94);
#line 426 "exprn_aux.m"
                                      {
#line 426 "exprn_aux.m"
                                        MR_Word base;
#line 426 "exprn_aux.m"
                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 426 "exprn_aux.m"
                                        *ll_backend__exprn_aux__Uinstr_8 = base;
#line 426 "exprn_aux.m"
                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
#line 426 "exprn_aux.m"
                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__LCRval_93));
#line 426 "exprn_aux.m"
                                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LCSLval_94));
#line 426 "exprn_aux.m"
                                        MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Label_177));
#line 426 "exprn_aux.m"
                                      }
#line 423 "exprn_aux.m"
                                    }
#line 275 "exprn_aux.m"
                                  else
#line 275 "exprn_aux.m"
                                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 349 "exprn_aux.m"
                                      {
#line 349 "exprn_aux.m"
                                        MR_Word ll_backend__exprn_aux__Lval0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 349 "exprn_aux.m"
                                        MR_Word ll_backend__exprn_aux__Lval_155;
#line 350 "exprn_aux.m"
                                        void MR_CALL (* ll_backend__exprn_aux__func_18)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 350 "exprn_aux.m"
                                        MR_Box ll_backend__exprn_aux__conv19_Lval_155;

#line 350 "exprn_aux.m"
                                        {
#line 350 "exprn_aux.m"
                                          ll_backend__exprn_aux__func_18(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_154)), &ll_backend__exprn_aux__conv19_Lval_155, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                        }
#line 350 "exprn_aux.m"
                                        ll_backend__exprn_aux__Lval_155 = ((MR_Word) ll_backend__exprn_aux__conv19_Lval_155);
#line 351 "exprn_aux.m"
                                        {
#line 351 "exprn_aux.m"
                                          MR_Word base;
#line 351 "exprn_aux.m"
                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 351 "exprn_aux.m"
                                          *ll_backend__exprn_aux__Uinstr_8 = base;
#line 351 "exprn_aux.m"
                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
#line 351 "exprn_aux.m"
                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_155));
#line 351 "exprn_aux.m"
                                        }
#line 349 "exprn_aux.m"
                                      }
#line 275 "exprn_aux.m"
                                    else
#line 275 "exprn_aux.m"
                                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 389 "exprn_aux.m"
                                        {
#line 389 "exprn_aux.m"
                                          MR_Word ll_backend__exprn_aux__Lval0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 389 "exprn_aux.m"
                                          MR_Word ll_backend__exprn_aux__Lval_168;
#line 390 "exprn_aux.m"
                                          void MR_CALL (* ll_backend__exprn_aux__func_20)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 390 "exprn_aux.m"
                                          MR_Box ll_backend__exprn_aux__conv21_Lval_168;

#line 390 "exprn_aux.m"
                                          {
#line 390 "exprn_aux.m"
                                            ll_backend__exprn_aux__func_20(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_167)), &ll_backend__exprn_aux__conv21_Lval_168, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                          }
#line 390 "exprn_aux.m"
                                          ll_backend__exprn_aux__Lval_168 = ((MR_Word) ll_backend__exprn_aux__conv21_Lval_168);
#line 391 "exprn_aux.m"
                                          {
#line 391 "exprn_aux.m"
                                            MR_Word base;
#line 391 "exprn_aux.m"
                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 391 "exprn_aux.m"
                                            *ll_backend__exprn_aux__Uinstr_8 = base;
#line 391 "exprn_aux.m"
                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
#line 391 "exprn_aux.m"
                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_168));
#line 391 "exprn_aux.m"
                                          }
#line 389 "exprn_aux.m"
                                        }
#line 275 "exprn_aux.m"
                                      else
#line 275 "exprn_aux.m"
                                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 393 "exprn_aux.m"
                                          {
#line 393 "exprn_aux.m"
                                            MR_Word ll_backend__exprn_aux__Rval0_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 393 "exprn_aux.m"
                                            MR_Word ll_backend__exprn_aux__Rval_170;

#line 394 "exprn_aux.m"
                                            {
#line 394 "exprn_aux.m"
                                              ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_169, &ll_backend__exprn_aux__Rval_170, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                            }
#line 395 "exprn_aux.m"
                                            {
#line 395 "exprn_aux.m"
                                              MR_Word base;
#line 395 "exprn_aux.m"
                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 395 "exprn_aux.m"
                                              *ll_backend__exprn_aux__Uinstr_8 = base;
#line 395 "exprn_aux.m"
                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
#line 395 "exprn_aux.m"
                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_170));
#line 395 "exprn_aux.m"
                                            }
#line 393 "exprn_aux.m"
                                          }
#line 275 "exprn_aux.m"
                                        else
#line 275 "exprn_aux.m"
                                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 361 "exprn_aux.m"
                                            {
#line 362 "exprn_aux.m"
                                              *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
#line 362 "exprn_aux.m"
                                              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
#line 361 "exprn_aux.m"
                                            }
#line 275 "exprn_aux.m"
                                          else
#line 275 "exprn_aux.m"
                                            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 365 "exprn_aux.m"
                                              {
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__FillOp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__IdRval0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__NumLval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 4)));
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__AddrLval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 5)));
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__IdRval_68;
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__NumLval_69;
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__AddrLval_70;
#line 365 "exprn_aux.m"
                                                MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_115_115;
#line 365 "exprn_aux.m"
                                                MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_116_116;
#line 365 "exprn_aux.m"
                                                MR_Word ll_backend__exprn_aux__EmbeddedStackFrame_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 367 "exprn_aux.m"
                                                void MR_CALL (* ll_backend__exprn_aux__func_22)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 367 "exprn_aux.m"
                                                MR_Box ll_backend__exprn_aux__conv23_NumLval_69;
#line 368 "exprn_aux.m"
                                                void MR_CALL (* ll_backend__exprn_aux__func_24)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
#line 368 "exprn_aux.m"
                                                MR_Box ll_backend__exprn_aux__conv25_AddrLval_70;

#line 366 "exprn_aux.m"
                                                {
#line 366 "exprn_aux.m"
                                                  ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__IdRval0_65, &ll_backend__exprn_aux__IdRval_68, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_115_115);
                                                }
#line 367 "exprn_aux.m"
                                                ll_backend__exprn_aux__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 367 "exprn_aux.m"
                                                {
#line 367 "exprn_aux.m"
                                                  ll_backend__exprn_aux__func_22(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__NumLval0_66)), &ll_backend__exprn_aux__conv23_NumLval_69, ll_backend__exprn_aux__STATE_VARIABLE_Acc_115_115, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_116_116);
                                                }
#line 367 "exprn_aux.m"
                                                ll_backend__exprn_aux__NumLval_69 = ((MR_Word) ll_backend__exprn_aux__conv23_NumLval_69);
#line 368 "exprn_aux.m"
                                                ll_backend__exprn_aux__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 368 "exprn_aux.m"
                                                {
#line 368 "exprn_aux.m"
                                                  ll_backend__exprn_aux__func_24(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__AddrLval0_67)), &ll_backend__exprn_aux__conv25_AddrLval_70, ll_backend__exprn_aux__STATE_VARIABLE_Acc_116_116, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                }
#line 368 "exprn_aux.m"
                                                ll_backend__exprn_aux__AddrLval_70 = ((MR_Word) ll_backend__exprn_aux__conv25_AddrLval_70);
#line 369 "exprn_aux.m"
                                                {
#line 369 "exprn_aux.m"
                                                  MR_Word base;
#line 369 "exprn_aux.m"
                                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 369 "exprn_aux.m"
                                                  *ll_backend__exprn_aux__Uinstr_8 = base;
#line 369 "exprn_aux.m"
                                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
#line 369 "exprn_aux.m"
                                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__FillOp_64));
#line 369 "exprn_aux.m"
                                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__EmbeddedStackFrame_160));
#line 369 "exprn_aux.m"
                                                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__IdRval_68));
#line 369 "exprn_aux.m"
                                                  MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__NumLval_69));
#line 369 "exprn_aux.m"
                                                  MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__exprn_aux__AddrLval_70));
#line 369 "exprn_aux.m"
                                                }
#line 365 "exprn_aux.m"
                                              }
#line 275 "exprn_aux.m"
                                            else
#line 275 "exprn_aux.m"
                                              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 373 "exprn_aux.m"
                                                {
#line 373 "exprn_aux.m"
                                                  MR_Word ll_backend__exprn_aux__SetOp_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 373 "exprn_aux.m"
                                                  MR_Word ll_backend__exprn_aux__ValueRval0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
#line 373 "exprn_aux.m"
                                                  MR_Word ll_backend__exprn_aux__ValueRval_73;
#line 373 "exprn_aux.m"
                                                  MR_Word ll_backend__exprn_aux__EmbeddedStackFrame_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));

#line 374 "exprn_aux.m"
                                                  {
#line 374 "exprn_aux.m"
                                                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__ValueRval0_72, &ll_backend__exprn_aux__ValueRval_73, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                  }
#line 375 "exprn_aux.m"
                                                  {
#line 375 "exprn_aux.m"
                                                    MR_Word base;
#line 375 "exprn_aux.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 375 "exprn_aux.m"
                                                    *ll_backend__exprn_aux__Uinstr_8 = base;
#line 375 "exprn_aux.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
#line 375 "exprn_aux.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__SetOp_71));
#line 375 "exprn_aux.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__EmbeddedStackFrame_161));
#line 375 "exprn_aux.m"
                                                    MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__ValueRval_73));
#line 375 "exprn_aux.m"
                                                  }
#line 373 "exprn_aux.m"
                                                }
#line 275 "exprn_aux.m"
                                              else
#line 275 "exprn_aux.m"
                                                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 385 "exprn_aux.m"
                                                  {
#line 385 "exprn_aux.m"
                                                    MR_Word ll_backend__exprn_aux__Reason_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
#line 385 "exprn_aux.m"
                                                    MR_Word ll_backend__exprn_aux__Rval0_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 385 "exprn_aux.m"
                                                    MR_Word ll_backend__exprn_aux__Rval_166;

#line 386 "exprn_aux.m"
                                                    {
#line 386 "exprn_aux.m"
                                                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_165, &ll_backend__exprn_aux__Rval_166, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                    }
#line 387 "exprn_aux.m"
                                                    {
#line 387 "exprn_aux.m"
                                                      MR_Word base;
#line 387 "exprn_aux.m"
                                                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "exprn_aux.m"
                                                      *ll_backend__exprn_aux__Uinstr_8 = base;
#line 387 "exprn_aux.m"
                                                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
#line 387 "exprn_aux.m"
                                                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_166));
#line 387 "exprn_aux.m"
                                                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Reason_75));
#line 387 "exprn_aux.m"
                                                    }
#line 385 "exprn_aux.m"
                                                  }
#line 275 "exprn_aux.m"
                                                else
#line 275 "exprn_aux.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 353 "exprn_aux.m"
                                                    {
#line 353 "exprn_aux.m"
                                                      MR_Word ll_backend__exprn_aux__Rval0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 353 "exprn_aux.m"
                                                      MR_Word ll_backend__exprn_aux__Rval_157;

#line 354 "exprn_aux.m"
                                                      {
#line 354 "exprn_aux.m"
                                                        ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_156, &ll_backend__exprn_aux__Rval_157, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                      }
#line 355 "exprn_aux.m"
                                                      {
#line 355 "exprn_aux.m"
                                                        MR_Word base;
#line 355 "exprn_aux.m"
                                                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 355 "exprn_aux.m"
                                                        *ll_backend__exprn_aux__Uinstr_8 = base;
#line 355 "exprn_aux.m"
                                                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
#line 355 "exprn_aux.m"
                                                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_157));
#line 355 "exprn_aux.m"
                                                      }
#line 353 "exprn_aux.m"
                                                    }
#line 275 "exprn_aux.m"
                                                  else
#line 275 "exprn_aux.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 314 "exprn_aux.m"
                                                      {
#line 314 "exprn_aux.m"
                                                        MR_Word ll_backend__exprn_aux__Lval0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 314 "exprn_aux.m"
                                                        MR_Word ll_backend__exprn_aux__Lval_149;
#line 315 "exprn_aux.m"
                                                        void MR_CALL (* ll_backend__exprn_aux__func_26)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 315 "exprn_aux.m"
                                                        MR_Box ll_backend__exprn_aux__conv27_Lval_149;

#line 315 "exprn_aux.m"
                                                        {
#line 315 "exprn_aux.m"
                                                          ll_backend__exprn_aux__func_26(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_148)), &ll_backend__exprn_aux__conv27_Lval_149, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                        }
#line 315 "exprn_aux.m"
                                                        ll_backend__exprn_aux__Lval_149 = ((MR_Word) ll_backend__exprn_aux__conv27_Lval_149);
#line 316 "exprn_aux.m"
                                                        {
#line 316 "exprn_aux.m"
                                                          MR_Word base;
#line 316 "exprn_aux.m"
                                                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 316 "exprn_aux.m"
                                                          *ll_backend__exprn_aux__Uinstr_8 = base;
#line 316 "exprn_aux.m"
                                                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
#line 316 "exprn_aux.m"
                                                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_149));
#line 316 "exprn_aux.m"
                                                        }
#line 314 "exprn_aux.m"
                                                      }
#line 275 "exprn_aux.m"
                                                    else
#line 275 "exprn_aux.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 310 "exprn_aux.m"
                                                        {
#line 310 "exprn_aux.m"
                                                          MR_Word ll_backend__exprn_aux__Lval0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 310 "exprn_aux.m"
                                                          MR_Word ll_backend__exprn_aux__Lval_147;
#line 311 "exprn_aux.m"
                                                          void MR_CALL (* ll_backend__exprn_aux__func_28)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 311 "exprn_aux.m"
                                                          MR_Box ll_backend__exprn_aux__conv29_Lval_147;

#line 311 "exprn_aux.m"
                                                          {
#line 311 "exprn_aux.m"
                                                            ll_backend__exprn_aux__func_28(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_146)), &ll_backend__exprn_aux__conv29_Lval_147, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                          }
#line 311 "exprn_aux.m"
                                                          ll_backend__exprn_aux__Lval_147 = ((MR_Word) ll_backend__exprn_aux__conv29_Lval_147);
#line 312 "exprn_aux.m"
                                                          {
#line 312 "exprn_aux.m"
                                                            MR_Word base;
#line 312 "exprn_aux.m"
                                                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 312 "exprn_aux.m"
                                                            *ll_backend__exprn_aux__Uinstr_8 = base;
#line 312 "exprn_aux.m"
                                                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 312 "exprn_aux.m"
                                                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_147));
#line 312 "exprn_aux.m"
                                                          }
#line 310 "exprn_aux.m"
                                                        }
#line 275 "exprn_aux.m"
                                                      else
#line 275 "exprn_aux.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 381 "exprn_aux.m"
                                                          {
#line 381 "exprn_aux.m"
                                                            MR_Word ll_backend__exprn_aux__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
#line 381 "exprn_aux.m"
                                                            MR_Word ll_backend__exprn_aux__Lval_164;
#line 382 "exprn_aux.m"
                                                            void MR_CALL (* ll_backend__exprn_aux__func_30)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 382 "exprn_aux.m"
                                                            MR_Box ll_backend__exprn_aux__conv31_Lval_164;

#line 382 "exprn_aux.m"
                                                            {
#line 382 "exprn_aux.m"
                                                              ll_backend__exprn_aux__func_30(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_163)), &ll_backend__exprn_aux__conv31_Lval_164, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                                                            }
#line 382 "exprn_aux.m"
                                                            ll_backend__exprn_aux__Lval_164 = ((MR_Word) ll_backend__exprn_aux__conv31_Lval_164);
#line 383 "exprn_aux.m"
                                                            {
#line 383 "exprn_aux.m"
                                                              MR_Word base;
#line 383 "exprn_aux.m"
                                                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 383 "exprn_aux.m"
                                                              *ll_backend__exprn_aux__Uinstr_8 = base;
#line 383 "exprn_aux.m"
                                                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
#line 383 "exprn_aux.m"
                                                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_164));
#line 383 "exprn_aux.m"
                                                            }
#line 381 "exprn_aux.m"
                                                          }
#line 275 "exprn_aux.m"
                                                        else
#line 275 "exprn_aux.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) == (MR_Integer) 19))))
#line 378 "exprn_aux.m"
                                                            {
#line 379 "exprn_aux.m"
                                                              *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
#line 379 "exprn_aux.m"
                                                              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
#line 378 "exprn_aux.m"
                                                            }
#line 275 "exprn_aux.m"
                                                          else
#line 273 "exprn_aux.m"
                                                            {
#line 274 "exprn_aux.m"
                                                              *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
#line 274 "exprn_aux.m"
                                                              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
#line 273 "exprn_aux.m"
                                                            }
#line 275 "exprn_aux.m"
  }
#line 257 "exprn_aux.m"
}

#line 240 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__vars_in_mem_ref_2_p_0(
#line 240 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 240 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2)
#line 240 "exprn_aux.m"
{
#line 242 "exprn_aux.m"
  {
#line 242 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 242 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 244 "exprn_aux.m"
      {
#line 244 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 245 "exprn_aux.m"
        {
#line 245 "exprn_aux.m"
          ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_5, ll_backend__exprn_aux__HeadVar__2_2);
#line 245 "exprn_aux.m"
          return;
        }
#line 244 "exprn_aux.m"
      }
#line 242 "exprn_aux.m"
    else
#line 242 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 246 "exprn_aux.m"
        {
#line 246 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__BaseRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 246 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__FieldRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 246 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__BaseVars_10;
#line 246 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__FieldVars_11;
#line 246 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux___Tag_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 247 "exprn_aux.m"
          {
#line 247 "exprn_aux.m"
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__BaseRval_7, &ll_backend__exprn_aux__BaseVars_10);
          }
#line 248 "exprn_aux.m"
          {
#line 248 "exprn_aux.m"
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__FieldRval_9, &ll_backend__exprn_aux__FieldVars_11);
          }
#line 246 "exprn_aux.m"
          {
#line 246 "exprn_aux.m"
            *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__exprn_aux_scalar_common_1[0], ll_backend__exprn_aux__BaseVars_10, ll_backend__exprn_aux__FieldVars_11);
          }
#line 246 "exprn_aux.m"
        }
#line 242 "exprn_aux.m"
      else
#line 242 "exprn_aux.m"
        {
#line 242 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 243 "exprn_aux.m"
          {
#line 243 "exprn_aux.m"
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_3, ll_backend__exprn_aux__HeadVar__2_2);
#line 243 "exprn_aux.m"
            return;
          }
#line 242 "exprn_aux.m"
        }
#line 242 "exprn_aux.m"
  }
#line 240 "exprn_aux.m"
}

#line 94 "exprn_aux.m"
MR_Word MR_CALL 
ll_backend__exprn_aux__lval_to_rval_1_f_0(
#line 94 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval_3)
#line 94 "exprn_aux.m"
{
#line 937 "exprn_aux.m"
  {
#line 937 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 937 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__HeadVar__2_2;

#line 937 "exprn_aux.m"
    {
#line 937 "exprn_aux.m"
      ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 937 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_3));
#line 937 "exprn_aux.m"
    }
#line 937 "exprn_aux.m"
    return ll_backend__exprn_aux__HeadVar__2_2;
#line 937 "exprn_aux.m"
  }
#line 94 "exprn_aux.m"
}

#line 92 "exprn_aux.m"
MR_Word MR_CALL 
ll_backend__exprn_aux__var_lval_to_rval_2_f_0(
#line 92 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux___Var_4,
#line 92 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval_5)
#line 92 "exprn_aux.m"
{
#line 935 "exprn_aux.m"
  {
#line 935 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 935 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__HeadVar__3_3;

#line 935 "exprn_aux.m"
    {
#line 935 "exprn_aux.m"
      return ll_backend__exprn_aux__HeadVar__3_3 = ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_f_0(ll_backend__exprn_aux__Lval_5);
    }
#line 935 "exprn_aux.m"
    return ll_backend__exprn_aux__HeadVar__3_3;
#line 935 "exprn_aux.m"
  }
#line 92 "exprn_aux.m"
}

#line 89 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__lval_addrs_3_p_0(
#line 89 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 89 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
#line 89 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
#line 89 "exprn_aux.m"
{
#line 862 "exprn_aux.m"
  {
#line 862 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 862 "exprn_aux.m"
    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 869 "exprn_aux.m"
      {
#line 869 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 869 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 869 "exprn_aux.m"
      }
#line 862 "exprn_aux.m"
    else
#line 862 "exprn_aux.m"
      if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 880 "exprn_aux.m"
        {
#line 880 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 880 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 880 "exprn_aux.m"
        }
#line 862 "exprn_aux.m"
      else
#line 862 "exprn_aux.m"
        if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 868 "exprn_aux.m"
          {
#line 868 "exprn_aux.m"
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "exprn_aux.m"
            *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 868 "exprn_aux.m"
          }
#line 862 "exprn_aux.m"
        else
#line 862 "exprn_aux.m"
          if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 882 "exprn_aux.m"
            {
#line 882 "exprn_aux.m"
              *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 882 "exprn_aux.m"
              *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 882 "exprn_aux.m"
            }
#line 862 "exprn_aux.m"
          else
#line 862 "exprn_aux.m"
            if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 881 "exprn_aux.m"
              {
#line 881 "exprn_aux.m"
                *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "exprn_aux.m"
                *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 881 "exprn_aux.m"
              }
#line 862 "exprn_aux.m"
            else
#line 862 "exprn_aux.m"
              if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 867 "exprn_aux.m"
                {
#line 867 "exprn_aux.m"
                  *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "exprn_aux.m"
                  *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 867 "exprn_aux.m"
                }
#line 862 "exprn_aux.m"
              else
#line 862 "exprn_aux.m"
                if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 862 "exprn_aux.m"
                  {
#line 862 "exprn_aux.m"
                    *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 862 "exprn_aux.m"
                    *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 862 "exprn_aux.m"
                  }
#line 862 "exprn_aux.m"
                else
#line 862 "exprn_aux.m"
                  if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 889 "exprn_aux.m"
                    {
#line 889 "exprn_aux.m"
                      *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "exprn_aux.m"
                      *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 889 "exprn_aux.m"
                    }
#line 862 "exprn_aux.m"
                  else
#line 862 "exprn_aux.m"
                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 866 "exprn_aux.m"
                      {
#line 866 "exprn_aux.m"
                        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "exprn_aux.m"
                        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 866 "exprn_aux.m"
                      }
#line 862 "exprn_aux.m"
                    else
#line 862 "exprn_aux.m"
                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 883 "exprn_aux.m"
                        {
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__RvalA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__RvalB_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 3)));
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__CodeAddrsA_31;
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__DataIdsA_32;
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__CodeAddrsB_33;
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__DataIdsB_34;
#line 883 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux___Tag_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 884 "exprn_aux.m"
                          {
#line 884 "exprn_aux.m"
                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__RvalA_27, &ll_backend__exprn_aux__CodeAddrsA_31, &ll_backend__exprn_aux__DataIdsA_32);
                          }
#line 885 "exprn_aux.m"
                          {
#line 885 "exprn_aux.m"
                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__RvalB_28, &ll_backend__exprn_aux__CodeAddrsB_33, &ll_backend__exprn_aux__DataIdsB_34);
                          }
#line 886 "exprn_aux.m"
                          {
#line 886 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__CodeAddrsA_31, ll_backend__exprn_aux__CodeAddrsB_33);
                          }
#line 887 "exprn_aux.m"
                          {
#line 887 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__DataIdsA_32, ll_backend__exprn_aux__DataIdsB_34);
                          }
#line 883 "exprn_aux.m"
                        }
#line 862 "exprn_aux.m"
                      else
#line 862 "exprn_aux.m"
                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 865 "exprn_aux.m"
                          {
#line 865 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 865 "exprn_aux.m"
                          }
#line 862 "exprn_aux.m"
                        else
#line 862 "exprn_aux.m"
                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 892 "exprn_aux.m"
                            {
#line 892 "exprn_aux.m"
                              *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "exprn_aux.m"
                              *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 892 "exprn_aux.m"
                            }
#line 862 "exprn_aux.m"
                          else
#line 862 "exprn_aux.m"
                            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 888 "exprn_aux.m"
                              {
#line 888 "exprn_aux.m"
                                *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "exprn_aux.m"
                                *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 888 "exprn_aux.m"
                              }
#line 862 "exprn_aux.m"
                            else
#line 862 "exprn_aux.m"
                              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 890 "exprn_aux.m"
                                {
#line 890 "exprn_aux.m"
                                  MR_Word ll_backend__exprn_aux__Rval_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 891 "exprn_aux.m"
                                  {
#line 891 "exprn_aux.m"
                                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_38, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 891 "exprn_aux.m"
                                    return;
                                  }
#line 890 "exprn_aux.m"
                                }
#line 862 "exprn_aux.m"
                              else
#line 862 "exprn_aux.m"
                                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 864 "exprn_aux.m"
                                  {
#line 864 "exprn_aux.m"
                                    *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "exprn_aux.m"
                                    *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 864 "exprn_aux.m"
                                  }
#line 862 "exprn_aux.m"
                                else
#line 862 "exprn_aux.m"
                                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 870 "exprn_aux.m"
                                    {
#line 870 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 871 "exprn_aux.m"
                                      {
#line 871 "exprn_aux.m"
                                        ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_11, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 871 "exprn_aux.m"
                                        return;
                                      }
#line 870 "exprn_aux.m"
                                    }
#line 862 "exprn_aux.m"
                                  else
#line 862 "exprn_aux.m"
                                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 874 "exprn_aux.m"
                                      {
#line 874 "exprn_aux.m"
                                        MR_Word ll_backend__exprn_aux__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 875 "exprn_aux.m"
                                        {
#line 875 "exprn_aux.m"
                                          ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_17, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 875 "exprn_aux.m"
                                          return;
                                        }
#line 874 "exprn_aux.m"
                                      }
#line 862 "exprn_aux.m"
                                    else
#line 862 "exprn_aux.m"
                                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 876 "exprn_aux.m"
                                        {
#line 876 "exprn_aux.m"
                                          MR_Word ll_backend__exprn_aux__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 877 "exprn_aux.m"
                                          {
#line 877 "exprn_aux.m"
                                            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_20, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 877 "exprn_aux.m"
                                            return;
                                          }
#line 876 "exprn_aux.m"
                                        }
#line 862 "exprn_aux.m"
                                      else
#line 862 "exprn_aux.m"
                                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 863 "exprn_aux.m"
                                          {
#line 863 "exprn_aux.m"
                                            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "exprn_aux.m"
                                            *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 863 "exprn_aux.m"
                                          }
#line 862 "exprn_aux.m"
                                        else
#line 862 "exprn_aux.m"
                                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 872 "exprn_aux.m"
                                            {
#line 872 "exprn_aux.m"
                                              MR_Word ll_backend__exprn_aux__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 873 "exprn_aux.m"
                                              {
#line 873 "exprn_aux.m"
                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_14, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 873 "exprn_aux.m"
                                                return;
                                              }
#line 872 "exprn_aux.m"
                                            }
#line 862 "exprn_aux.m"
                                          else
#line 878 "exprn_aux.m"
                                            {
#line 878 "exprn_aux.m"
                                              MR_Word ll_backend__exprn_aux__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 879 "exprn_aux.m"
                                              {
#line 879 "exprn_aux.m"
                                                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_23, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 879 "exprn_aux.m"
                                                return;
                                              }
#line 878 "exprn_aux.m"
                                            }
#line 862 "exprn_aux.m"
  }
#line 89 "exprn_aux.m"
}

#line 86 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__rval_addrs_3_p_0(
#line 86 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 86 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
#line 86 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
#line 86 "exprn_aux.m"
{
#line 835 "exprn_aux.m"
  while (MR_TRUE)
#line 835 "exprn_aux.m"
    {
#line 835 "exprn_aux.m"
      /* tailcall optimized into a loop */
#line 835 "exprn_aux.m"
      {
#line 835 "exprn_aux.m"
        MR_bool ll_backend__exprn_aux__succeeded;

#line 835 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 835 "exprn_aux.m"
          {
#line 835 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 836 "exprn_aux.m"
            {
#line 836 "exprn_aux.m"
              ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__exprn_aux__Lval_4, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 836 "exprn_aux.m"
              return;
            }
#line 835 "exprn_aux.m"
          }
#line 835 "exprn_aux.m"
        else
#line 835 "exprn_aux.m"
          if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 838 "exprn_aux.m"
            {
#line 838 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 838 "exprn_aux.m"
              MR_Integer ll_backend__exprn_aux___Tag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 839 "exprn_aux.m"
              /* direct tailcall eliminated */
#line 839 "exprn_aux.m"
              {
#line 839 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rval_9;

#line 839 "exprn_aux.m"
                ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
#line 839 "exprn_aux.m"
              }
#line 839 "exprn_aux.m"
              continue;
#line 838 "exprn_aux.m"
            }
#line 835 "exprn_aux.m"
          else
#line 835 "exprn_aux.m"
            if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 837 "exprn_aux.m"
              {
#line 837 "exprn_aux.m"
                *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "exprn_aux.m"
                *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 837 "exprn_aux.m"
              }
#line 835 "exprn_aux.m"
            else
#line 835 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 854 "exprn_aux.m"
                {
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__RvalA_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__RvalB_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 3)));
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__CodeAddrsA_30;
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__DataIdsA_31;
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__CodeAddrsB_32;
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__DataIdsB_33;
#line 854 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux___Binop_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 855 "exprn_aux.m"
                  {
#line 855 "exprn_aux.m"
                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__RvalA_26, &ll_backend__exprn_aux__CodeAddrsA_30, &ll_backend__exprn_aux__DataIdsA_31);
                  }
#line 856 "exprn_aux.m"
                  {
#line 856 "exprn_aux.m"
                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__RvalB_27, &ll_backend__exprn_aux__CodeAddrsB_32, &ll_backend__exprn_aux__DataIdsB_33);
                  }
#line 857 "exprn_aux.m"
                  {
#line 857 "exprn_aux.m"
                    *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__CodeAddrsA_30, ll_backend__exprn_aux__CodeAddrsB_32);
                  }
#line 858 "exprn_aux.m"
                  {
#line 858 "exprn_aux.m"
                    *ll_backend__exprn_aux__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__DataIdsA_31, ll_backend__exprn_aux__DataIdsB_33);
                  }
#line 854 "exprn_aux.m"
                }
#line 835 "exprn_aux.m"
              else
#line 835 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 841 "exprn_aux.m"
                  {
#line 841 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Const_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 845 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__CodeAddress_16;

#line 842 "exprn_aux.m"
                    ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Const_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 842 "exprn_aux.m"
                    if (ll_backend__exprn_aux__succeeded)
#line 842 "exprn_aux.m"
                      {
#line 842 "exprn_aux.m"
                        ll_backend__exprn_aux__CodeAddress_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_13, (MR_Integer) 1)));
#line 843 "exprn_aux.m"
                        {
#line 843 "exprn_aux.m"
                          MR_Word base;
#line 843 "exprn_aux.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 843 "exprn_aux.m"
                          *ll_backend__exprn_aux__HeadVar__2_2 = base;
#line 843 "exprn_aux.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__CodeAddress_16));
#line 843 "exprn_aux.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 843 "exprn_aux.m"
                        }
#line 844 "exprn_aux.m"
                        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 842 "exprn_aux.m"
                      }
#line 842 "exprn_aux.m"
                    else
#line 848 "exprn_aux.m"
                      {
#line 848 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__DataId_17;
#line 845 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__V_18_18;

#line 845 "exprn_aux.m"
                        ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Const_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 845 "exprn_aux.m"
                        if (ll_backend__exprn_aux__succeeded)
#line 845 "exprn_aux.m"
                          {
#line 845 "exprn_aux.m"
                            ll_backend__exprn_aux__DataId_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_13, (MR_Integer) 1)));
#line 845 "exprn_aux.m"
                            ll_backend__exprn_aux__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_13, (MR_Integer) 2)));
#line 846 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 847 "exprn_aux.m"
                            {
#line 847 "exprn_aux.m"
                              MR_Word base;
#line 847 "exprn_aux.m"
                              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 847 "exprn_aux.m"
                              *ll_backend__exprn_aux__HeadVar__3_3 = base;
#line 847 "exprn_aux.m"
                              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__DataId_17));
#line 847 "exprn_aux.m"
                              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 847 "exprn_aux.m"
                            }
#line 845 "exprn_aux.m"
                          }
#line 845 "exprn_aux.m"
                        else
#line 849 "exprn_aux.m"
                          {
#line 849 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 850 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 849 "exprn_aux.m"
                          }
#line 848 "exprn_aux.m"
                      }
#line 841 "exprn_aux.m"
                  }
#line 835 "exprn_aux.m"
                else
#line 835 "exprn_aux.m"
                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 859 "exprn_aux.m"
                    {
#line 859 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Rval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 860 "exprn_aux.m"
                      {
#line 860 "exprn_aux.m"
                        ll_backend__exprn_aux__mem_ref_addrs_3_p_0(ll_backend__exprn_aux__Rval_34, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
#line 860 "exprn_aux.m"
                        return;
                      }
#line 859 "exprn_aux.m"
                    }
#line 835 "exprn_aux.m"
                  else
#line 835 "exprn_aux.m"
                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 840 "exprn_aux.m"
                      {
#line 840 "exprn_aux.m"
                        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "exprn_aux.m"
                        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 840 "exprn_aux.m"
                      }
#line 835 "exprn_aux.m"
                    else
#line 852 "exprn_aux.m"
                      {
#line 852 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__Rval_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 852 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux___Unop_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 853 "exprn_aux.m"
                        /* direct tailcall eliminated */
#line 853 "exprn_aux.m"
                        {
#line 853 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rval_22;

#line 853 "exprn_aux.m"
                          ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
#line 853 "exprn_aux.m"
                        }
#line 853 "exprn_aux.m"
                        continue;
#line 852 "exprn_aux.m"
                      }
#line 835 "exprn_aux.m"
      }
#line 835 "exprn_aux.m"
      break;
#line 835 "exprn_aux.m"
    }
#line 86 "exprn_aux.m"
}

#line 83 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__lval_list_addrs_3_p_0(
#line 83 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 83 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
#line 83 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
#line 83 "exprn_aux.m"
{
#line 901 "exprn_aux.m"
  {
#line 901 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 901 "exprn_aux.m"
    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 901 "exprn_aux.m"
      {
#line 901 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 901 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 901 "exprn_aux.m"
      }
#line 901 "exprn_aux.m"
    else
#line 902 "exprn_aux.m"
      {
#line 902 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 902 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 902 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__HeadCodeAddrs_8;
#line 902 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__HeadDataIds_9;
#line 902 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__TailCodeAddrs_10;
#line 902 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__TailDataIds_11;

#line 903 "exprn_aux.m"
        {
#line 903 "exprn_aux.m"
          ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__exprn_aux__Lval_4, &ll_backend__exprn_aux__HeadCodeAddrs_8, &ll_backend__exprn_aux__HeadDataIds_9);
        }
#line 904 "exprn_aux.m"
        {
#line 904 "exprn_aux.m"
          ll_backend__exprn_aux__lval_list_addrs_3_p_0(ll_backend__exprn_aux__Lvals_5, &ll_backend__exprn_aux__TailCodeAddrs_10, &ll_backend__exprn_aux__TailDataIds_11);
        }
#line 905 "exprn_aux.m"
        {
#line 905 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__HeadCodeAddrs_8, ll_backend__exprn_aux__TailCodeAddrs_10);
        }
#line 906 "exprn_aux.m"
        {
#line 906 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__HeadDataIds_9, ll_backend__exprn_aux__TailDataIds_11);
        }
#line 902 "exprn_aux.m"
      }
#line 901 "exprn_aux.m"
  }
#line 83 "exprn_aux.m"
}

#line 80 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__rval_list_addrs_3_p_0(
#line 80 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 80 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
#line 80 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
#line 80 "exprn_aux.m"
{
#line 894 "exprn_aux.m"
  {
#line 894 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 894 "exprn_aux.m"
    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "exprn_aux.m"
      {
#line 894 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 894 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 894 "exprn_aux.m"
      }
#line 894 "exprn_aux.m"
    else
#line 895 "exprn_aux.m"
      {
#line 895 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 895 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 895 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__HeadCodeAddrs_8;
#line 895 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__HeadDataIds_9;
#line 895 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__TailCodeAddrs_10;
#line 895 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__TailDataIds_11;

#line 896 "exprn_aux.m"
        {
#line 896 "exprn_aux.m"
          ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_4, &ll_backend__exprn_aux__HeadCodeAddrs_8, &ll_backend__exprn_aux__HeadDataIds_9);
        }
#line 897 "exprn_aux.m"
        {
#line 897 "exprn_aux.m"
          ll_backend__exprn_aux__rval_list_addrs_3_p_0(ll_backend__exprn_aux__Rvals_5, &ll_backend__exprn_aux__TailCodeAddrs_10, &ll_backend__exprn_aux__TailDataIds_11);
        }
#line 898 "exprn_aux.m"
        {
#line 898 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__HeadCodeAddrs_8, ll_backend__exprn_aux__TailCodeAddrs_10);
        }
#line 899 "exprn_aux.m"
        {
#line 899 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__HeadDataIds_9, ll_backend__exprn_aux__TailDataIds_11);
        }
#line 895 "exprn_aux.m"
      }
#line 894 "exprn_aux.m"
  }
#line 80 "exprn_aux.m"
}

#line 75 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_p_0(
#line 75 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_3,
#line 75 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_4)
#line 75 "exprn_aux.m"
{
#line 783 "exprn_aux.m"
  while (MR_TRUE)
#line 783 "exprn_aux.m"
    {
#line 783 "exprn_aux.m"
      /* tailcall optimized into a loop */
#line 783 "exprn_aux.m"
      {
#line 783 "exprn_aux.m"
        MR_bool ll_backend__exprn_aux__succeeded;
#line 783 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Rval1_5;

#line 781 "exprn_aux.m"
        {
#line 781 "exprn_aux.m"
          ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval0_3, &ll_backend__exprn_aux__Rval1_5);
        }
#line 783 "exprn_aux.m"
        if (ll_backend__exprn_aux__succeeded)
#line 782 "exprn_aux.m"
          {
#line 782 "exprn_aux.m"
            /* direct tailcall eliminated */
#line 782 "exprn_aux.m"
            {
#line 782 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval0__tmp_copy_3 = ll_backend__exprn_aux__Rval1_5;

#line 782 "exprn_aux.m"
              ll_backend__exprn_aux__Rval0_3 = ll_backend__exprn_aux__Rval0__tmp_copy_3;
#line 782 "exprn_aux.m"
            }
#line 782 "exprn_aux.m"
            continue;
#line 782 "exprn_aux.m"
          }
#line 783 "exprn_aux.m"
        else
#line 784 "exprn_aux.m"
          *ll_backend__exprn_aux__Rval_4 = ll_backend__exprn_aux__Rval0_3;
#line 783 "exprn_aux.m"
      }
#line 783 "exprn_aux.m"
      break;
#line 783 "exprn_aux.m"
    }
#line 75 "exprn_aux.m"
}

#line 73 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__vars_in_rval_2_p_0(
#line 73 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 73 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2)
#line 73 "exprn_aux.m"
{
#line 193 "exprn_aux.m"
  while (MR_TRUE)
#line 193 "exprn_aux.m"
    {
#line 193 "exprn_aux.m"
      /* tailcall optimized into a loop */
#line 193 "exprn_aux.m"
      {
#line 193 "exprn_aux.m"
        MR_bool ll_backend__exprn_aux__succeeded;

#line 193 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 193 "exprn_aux.m"
          {
#line 193 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 194 "exprn_aux.m"
            {
#line 194 "exprn_aux.m"
              ll_backend__exprn_aux__vars_in_lval_2_p_0(ll_backend__exprn_aux__Lval_3, ll_backend__exprn_aux__HeadVar__2_2);
#line 194 "exprn_aux.m"
              return;
            }
#line 193 "exprn_aux.m"
          }
#line 193 "exprn_aux.m"
        else
#line 193 "exprn_aux.m"
          if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 196 "exprn_aux.m"
            {
#line 196 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "exprn_aux.m"
              MR_Integer ll_backend__exprn_aux__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 197 "exprn_aux.m"
              /* direct tailcall eliminated */
#line 197 "exprn_aux.m"
              {
#line 197 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rval_8;

#line 197 "exprn_aux.m"
                ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
#line 197 "exprn_aux.m"
              }
#line 197 "exprn_aux.m"
              continue;
#line 196 "exprn_aux.m"
            }
#line 193 "exprn_aux.m"
          else
#line 193 "exprn_aux.m"
            if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 195 "exprn_aux.m"
              {
#line 195 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

#line 195 "exprn_aux.m"
                {
#line 195 "exprn_aux.m"
                  MR_Word base;
#line 195 "exprn_aux.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 195 "exprn_aux.m"
                  *ll_backend__exprn_aux__HeadVar__2_2 = base;
#line 195 "exprn_aux.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Var_5));
#line 195 "exprn_aux.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 195 "exprn_aux.m"
                }
#line 195 "exprn_aux.m"
              }
#line 193 "exprn_aux.m"
            else
#line 193 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 202 "exprn_aux.m"
                {
#line 202 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__RvalA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 202 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__RvalB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 3)));
#line 202 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__VarsA_19;
#line 202 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__VarsB_20;
#line 202 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux___Binop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 203 "exprn_aux.m"
                  {
#line 203 "exprn_aux.m"
                    ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalA_16, &ll_backend__exprn_aux__VarsA_19);
                  }
#line 204 "exprn_aux.m"
                  {
#line 204 "exprn_aux.m"
                    ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalB_17, &ll_backend__exprn_aux__VarsB_20);
                  }
#line 205 "exprn_aux.m"
                  {
#line 205 "exprn_aux.m"
                    *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__exprn_aux_scalar_common_1[0], ll_backend__exprn_aux__VarsA_19, ll_backend__exprn_aux__VarsB_20);
                  }
#line 202 "exprn_aux.m"
                }
#line 193 "exprn_aux.m"
              else
#line 193 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 199 "exprn_aux.m"
                  *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "exprn_aux.m"
                else
#line 193 "exprn_aux.m"
                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 206 "exprn_aux.m"
                    {
#line 206 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__MemRef_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 207 "exprn_aux.m"
                      {
#line 207 "exprn_aux.m"
                        ll_backend__exprn_aux__vars_in_mem_ref_2_p_0(ll_backend__exprn_aux__MemRef_21, ll_backend__exprn_aux__HeadVar__2_2);
#line 207 "exprn_aux.m"
                        return;
                      }
#line 206 "exprn_aux.m"
                    }
#line 193 "exprn_aux.m"
                  else
#line 193 "exprn_aux.m"
                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 198 "exprn_aux.m"
                      *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 193 "exprn_aux.m"
                    else
#line 200 "exprn_aux.m"
                      {
#line 200 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 200 "exprn_aux.m"
                        MR_Word ll_backend__exprn_aux___Unop_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 201 "exprn_aux.m"
                        /* direct tailcall eliminated */
#line 201 "exprn_aux.m"
                        {
#line 201 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rval_13;

#line 201 "exprn_aux.m"
                          ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
#line 201 "exprn_aux.m"
                        }
#line 201 "exprn_aux.m"
                        continue;
#line 200 "exprn_aux.m"
                      }
#line 193 "exprn_aux.m"
      }
#line 193 "exprn_aux.m"
      break;
#line 193 "exprn_aux.m"
    }
#line 73 "exprn_aux.m"
}

#line 71 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__vars_in_lval_2_p_0(
#line 71 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 71 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2)
#line 71 "exprn_aux.m"
{
#line 209 "exprn_aux.m"
  {
#line 209 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 209 "exprn_aux.m"
    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 213 "exprn_aux.m"
      *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
    else
#line 209 "exprn_aux.m"
      if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 214 "exprn_aux.m"
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
      else
#line 209 "exprn_aux.m"
        if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 212 "exprn_aux.m"
          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
        else
#line 209 "exprn_aux.m"
          if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 216 "exprn_aux.m"
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
          else
#line 209 "exprn_aux.m"
            if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 215 "exprn_aux.m"
              *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
            else
#line 209 "exprn_aux.m"
              if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 211 "exprn_aux.m"
                *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
              else
#line 209 "exprn_aux.m"
                if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 209 "exprn_aux.m"
                  *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                else
#line 209 "exprn_aux.m"
                  if (((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 210 "exprn_aux.m"
                    *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                  else
#line 209 "exprn_aux.m"
                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 220 "exprn_aux.m"
                      *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                    else
#line 209 "exprn_aux.m"
                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 231 "exprn_aux.m"
                        {
#line 231 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__RvalA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
#line 231 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__RvalB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 3)));
#line 231 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__VarsA_26;
#line 231 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux__VarsB_27;
#line 231 "exprn_aux.m"
                          MR_Word ll_backend__exprn_aux___MaybeTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 232 "exprn_aux.m"
                          {
#line 232 "exprn_aux.m"
                            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalA_23, &ll_backend__exprn_aux__VarsA_26);
                          }
#line 233 "exprn_aux.m"
                          {
#line 233 "exprn_aux.m"
                            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalB_24, &ll_backend__exprn_aux__VarsB_27);
                          }
#line 234 "exprn_aux.m"
                          {
#line 234 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__exprn_aux_scalar_common_1[0], ll_backend__exprn_aux__VarsA_26, ll_backend__exprn_aux__VarsB_27);
                          }
#line 231 "exprn_aux.m"
                        }
#line 209 "exprn_aux.m"
                      else
#line 209 "exprn_aux.m"
                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 219 "exprn_aux.m"
                          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                        else
#line 209 "exprn_aux.m"
                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 237 "exprn_aux.m"
                            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                          else
#line 209 "exprn_aux.m"
                            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 238 "exprn_aux.m"
                              {
#line 238 "exprn_aux.m"
                                MR_Word ll_backend__exprn_aux__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 238 "exprn_aux.m"
                                {
#line 238 "exprn_aux.m"
                                  MR_Word base;
#line 238 "exprn_aux.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 238 "exprn_aux.m"
                                  *ll_backend__exprn_aux__HeadVar__2_2 = base;
#line 238 "exprn_aux.m"
                                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Var_31));
#line 238 "exprn_aux.m"
                                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 238 "exprn_aux.m"
                                }
#line 238 "exprn_aux.m"
                              }
#line 209 "exprn_aux.m"
                            else
#line 209 "exprn_aux.m"
                              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 235 "exprn_aux.m"
                                {
#line 235 "exprn_aux.m"
                                  MR_Word ll_backend__exprn_aux__Rval_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 236 "exprn_aux.m"
                                  {
#line 236 "exprn_aux.m"
                                    ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_28, ll_backend__exprn_aux__HeadVar__2_2);
#line 236 "exprn_aux.m"
                                    return;
                                  }
#line 235 "exprn_aux.m"
                                }
#line 209 "exprn_aux.m"
                              else
#line 209 "exprn_aux.m"
                                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 218 "exprn_aux.m"
                                  *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                                else
#line 209 "exprn_aux.m"
                                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 229 "exprn_aux.m"
                                    {
#line 229 "exprn_aux.m"
                                      MR_Word ll_backend__exprn_aux__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 230 "exprn_aux.m"
                                      {
#line 230 "exprn_aux.m"
                                        ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_20, ll_backend__exprn_aux__HeadVar__2_2);
#line 230 "exprn_aux.m"
                                        return;
                                      }
#line 229 "exprn_aux.m"
                                    }
#line 209 "exprn_aux.m"
                                  else
#line 209 "exprn_aux.m"
                                    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 225 "exprn_aux.m"
                                      {
#line 225 "exprn_aux.m"
                                        MR_Word ll_backend__exprn_aux__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 226 "exprn_aux.m"
                                        {
#line 226 "exprn_aux.m"
                                          ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_16, ll_backend__exprn_aux__HeadVar__2_2);
#line 226 "exprn_aux.m"
                                          return;
                                        }
#line 225 "exprn_aux.m"
                                      }
#line 209 "exprn_aux.m"
                                    else
#line 209 "exprn_aux.m"
                                      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 223 "exprn_aux.m"
                                        {
#line 223 "exprn_aux.m"
                                          MR_Word ll_backend__exprn_aux__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 224 "exprn_aux.m"
                                          {
#line 224 "exprn_aux.m"
                                            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_14, ll_backend__exprn_aux__HeadVar__2_2);
#line 224 "exprn_aux.m"
                                            return;
                                          }
#line 223 "exprn_aux.m"
                                        }
#line 209 "exprn_aux.m"
                                      else
#line 209 "exprn_aux.m"
                                        if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 217 "exprn_aux.m"
                                          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 209 "exprn_aux.m"
                                        else
#line 209 "exprn_aux.m"
                                          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 227 "exprn_aux.m"
                                            {
#line 227 "exprn_aux.m"
                                              MR_Word ll_backend__exprn_aux__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 228 "exprn_aux.m"
                                              {
#line 228 "exprn_aux.m"
                                                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_18, ll_backend__exprn_aux__HeadVar__2_2);
#line 228 "exprn_aux.m"
                                                return;
                                              }
#line 227 "exprn_aux.m"
                                            }
#line 209 "exprn_aux.m"
                                          else
#line 221 "exprn_aux.m"
                                            {
#line 221 "exprn_aux.m"
                                              MR_Word ll_backend__exprn_aux__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

#line 222 "exprn_aux.m"
                                              {
#line 222 "exprn_aux.m"
                                                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_12, ll_backend__exprn_aux__HeadVar__2_2);
#line 222 "exprn_aux.m"
                                                return;
                                              }
#line 221 "exprn_aux.m"
                                            }
#line 209 "exprn_aux.m"
  }
#line 71 "exprn_aux.m"
}

#line 68 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_3_p_0(
#line 68 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__RvalPairs_4,
#line 68 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_8,
#line 68 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_9)
#line 68 "exprn_aux.m"
{
#line 749 "exprn_aux.m"
  {
#line 749 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 749 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__RvalUniqPairs_6;
#line 749 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__UniqRvalPairs_7;
#line 749 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_11_11;

#line 756 "exprn_aux.m"
    {
#line 756 "exprn_aux.m"
      ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(ll_backend__exprn_aux__RvalPairs_4, (MR_Integer) 0, &ll_backend__exprn_aux__RvalUniqPairs_6, &ll_backend__exprn_aux__UniqRvalPairs_7);
    }
#line 757 "exprn_aux.m"
    {
#line 757 "exprn_aux.m"
      ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(ll_backend__exprn_aux__RvalUniqPairs_6, ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_8, &ll_backend__exprn_aux__STATE_VARIABLE_Rval_11_11);
    }
#line 758 "exprn_aux.m"
    {
#line 758 "exprn_aux.m"
      ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(ll_backend__exprn_aux__UniqRvalPairs_7, ll_backend__exprn_aux__STATE_VARIABLE_Rval_11_11, ll_backend__exprn_aux__STATE_VARIABLE_Rval_9);
#line 758 "exprn_aux.m"
      return;
    }
#line 749 "exprn_aux.m"
  }
#line 68 "exprn_aux.m"
}

#line 65 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__substitute_vars_in_rval_3_p_0(
#line 65 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
#line 65 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2,
#line 65 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_3)
#line 65 "exprn_aux.m"
{
#line 744 "exprn_aux.m"
  while (MR_TRUE)
#line 744 "exprn_aux.m"
    {
#line 744 "exprn_aux.m"
      /* tailcall optimized into a loop */
#line 744 "exprn_aux.m"
      {
#line 744 "exprn_aux.m"
        MR_bool ll_backend__exprn_aux__succeeded;

#line 744 "exprn_aux.m"
        if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 744 "exprn_aux.m"
          *ll_backend__exprn_aux__STATE_VARIABLE_Rval_3 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2;
#line 744 "exprn_aux.m"
        else
#line 745 "exprn_aux.m"
          {
#line 745 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Var_7;
#line 745 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Sub_8;
#line 745 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
#line 745 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
#line 745 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_14_14;
#line 745 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_15_15;

#line 745 "exprn_aux.m"
            ll_backend__exprn_aux__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 0)));
#line 745 "exprn_aux.m"
            ll_backend__exprn_aux__Sub_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 1)));
#line 746 "exprn_aux.m"
            {
#line 746 "exprn_aux.m"
              ll_backend__exprn_aux__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 746 "exprn_aux.m"
              MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__V_14_14, 0) = ((MR_Box) (ll_backend__exprn_aux__Var_7));
#line 746 "exprn_aux.m"
            }
#line 746 "exprn_aux.m"
            {
#line 746 "exprn_aux.m"
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__V_14_14, ll_backend__exprn_aux__Sub_8, ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2, &ll_backend__exprn_aux__STATE_VARIABLE_Rval_15_15);
            }
#line 747 "exprn_aux.m"
            /* direct tailcall eliminated */
#line 747 "exprn_aux.m"
            {
#line 747 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rest_9;
#line 747 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_15_15;

#line 747 "exprn_aux.m"
              ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2;
#line 747 "exprn_aux.m"
              ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
#line 747 "exprn_aux.m"
            }
#line 747 "exprn_aux.m"
            continue;
#line 745 "exprn_aux.m"
          }
#line 744 "exprn_aux.m"
      }
#line 744 "exprn_aux.m"
      break;
#line 744 "exprn_aux.m"
    }
#line 65 "exprn_aux.m"
}

#line 62 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(
#line 62 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldRval_5,
#line 62 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewRval_6,
#line 62 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_7,
#line 62 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_8)
#line 62 "exprn_aux.m"
{
#line 640 "exprn_aux.m"
  {
#line 640 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 638 "exprn_aux.m"
    {
#line 638 "exprn_aux.m"
      ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__exprn_aux__Rval0_7, ll_backend__exprn_aux__OldRval_5);
    }
#line 640 "exprn_aux.m"
    if (ll_backend__exprn_aux__succeeded)
#line 639 "exprn_aux.m"
      *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__NewRval_6;
#line 640 "exprn_aux.m"
    else
#line 645 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 0))))
#line 642 "exprn_aux.m"
        {
#line 642 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Lval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
#line 642 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Lval_10;

#line 643 "exprn_aux.m"
          {
#line 643 "exprn_aux.m"
            ll_backend__exprn_aux__substitute_rval_in_lval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Lval0_9, &ll_backend__exprn_aux__Lval_10);
          }
#line 644 "exprn_aux.m"
          {
#line 644 "exprn_aux.m"
            MR_Word base;
#line 644 "exprn_aux.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 644 "exprn_aux.m"
            *ll_backend__exprn_aux__Rval_8 = base;
#line 644 "exprn_aux.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_10));
#line 644 "exprn_aux.m"
          }
#line 642 "exprn_aux.m"
        }
#line 645 "exprn_aux.m"
      else
#line 645 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 2))))
#line 649 "exprn_aux.m"
          {
#line 649 "exprn_aux.m"
            MR_Integer ll_backend__exprn_aux__Tag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
#line 649 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 649 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__Rval2_14;

#line 650 "exprn_aux.m"
            {
#line 650 "exprn_aux.m"
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_13, &ll_backend__exprn_aux__Rval2_14);
            }
#line 651 "exprn_aux.m"
            {
#line 651 "exprn_aux.m"
              MR_Word base;
#line 651 "exprn_aux.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 651 "exprn_aux.m"
              *ll_backend__exprn_aux__Rval_8 = base;
#line 651 "exprn_aux.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Tag_12));
#line 651 "exprn_aux.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_14));
#line 651 "exprn_aux.m"
            }
#line 649 "exprn_aux.m"
          }
#line 645 "exprn_aux.m"
        else
#line 645 "exprn_aux.m"
          if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 1))))
#line 647 "exprn_aux.m"
            *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 645 "exprn_aux.m"
          else
#line 645 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 663 "exprn_aux.m"
              {
#line 663 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Binop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 663 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval3_19;
#line 663 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval4_20;
#line 663 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
#line 663 "exprn_aux.m"
                MR_Word ll_backend__exprn_aux__Rval2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 3)));

#line 664 "exprn_aux.m"
                {
#line 664 "exprn_aux.m"
                  ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_25, &ll_backend__exprn_aux__Rval3_19);
                }
#line 665 "exprn_aux.m"
                {
#line 665 "exprn_aux.m"
                  ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval2_26, &ll_backend__exprn_aux__Rval4_20);
                }
#line 666 "exprn_aux.m"
                {
#line 666 "exprn_aux.m"
                  MR_Word base;
#line 666 "exprn_aux.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 666 "exprn_aux.m"
                  *ll_backend__exprn_aux__Rval_8 = base;
#line 666 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 666 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Binop_18));
#line 666 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_19));
#line 666 "exprn_aux.m"
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_20));
#line 666 "exprn_aux.m"
                }
#line 663 "exprn_aux.m"
              }
#line 645 "exprn_aux.m"
            else
#line 645 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 657 "exprn_aux.m"
                *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 645 "exprn_aux.m"
              else
#line 645 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 668 "exprn_aux.m"
                  {
#line 668 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__MemRef1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 668 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__MemRef2_22;

#line 669 "exprn_aux.m"
                    {
#line 669 "exprn_aux.m"
                      ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__MemRef1_21, &ll_backend__exprn_aux__MemRef2_22);
                    }
#line 670 "exprn_aux.m"
                    {
#line 670 "exprn_aux.m"
                      MR_Word base;
#line 670 "exprn_aux.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 670 "exprn_aux.m"
                      *ll_backend__exprn_aux__Rval_8 = base;
#line 670 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 670 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MemRef2_22));
#line 670 "exprn_aux.m"
                    }
#line 668 "exprn_aux.m"
                  }
#line 645 "exprn_aux.m"
                else
#line 645 "exprn_aux.m"
                  if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 654 "exprn_aux.m"
                    *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 645 "exprn_aux.m"
                  else
#line 659 "exprn_aux.m"
                    {
#line 659 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Unop_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 659 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Rval1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
#line 659 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__Rval2_24;

#line 660 "exprn_aux.m"
                      {
#line 660 "exprn_aux.m"
                        ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_23, &ll_backend__exprn_aux__Rval2_24);
                      }
#line 661 "exprn_aux.m"
                      {
#line 661 "exprn_aux.m"
                        MR_Word base;
#line 661 "exprn_aux.m"
                        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 661 "exprn_aux.m"
                        *ll_backend__exprn_aux__Rval_8 = base;
#line 661 "exprn_aux.m"
                        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 661 "exprn_aux.m"
                        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Unop_17));
#line 661 "exprn_aux.m"
                        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_24));
#line 661 "exprn_aux.m"
                      }
#line 659 "exprn_aux.m"
                    }
#line 640 "exprn_aux.m"
  }
#line 62 "exprn_aux.m"
}

#line 59 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(
#line 59 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_5,
#line 59 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_6,
#line 59 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_7,
#line 59 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_8)
#line 59 "exprn_aux.m"
{
#line 569 "exprn_aux.m"
  {
#line 569 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 570 "exprn_aux.m"
    MR_Integer ll_backend__exprn_aux___SubstCount_9;

#line 570 "exprn_aux.m"
    {
#line 570 "exprn_aux.m"
      ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_5, ll_backend__exprn_aux__NewLval_6, ll_backend__exprn_aux__Rval0_7, ll_backend__exprn_aux__Rval_8, (MR_Integer) 0, &ll_backend__exprn_aux___SubstCount_9);
    }
#line 569 "exprn_aux.m"
  }
#line 59 "exprn_aux.m"
}

#line 56 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(
#line 56 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_5,
#line 56 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_6,
#line 56 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Lval0_7,
#line 56 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Lval_8)
#line 56 "exprn_aux.m"
{
#line 565 "exprn_aux.m"
  {
#line 565 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 577 "exprn_aux.m"
    {
#line 577 "exprn_aux.m"
      ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__exprn_aux__Lval0_7, ll_backend__exprn_aux__OldLval_5);
    }
#line 580 "exprn_aux.m"
    if (ll_backend__exprn_aux__succeeded)
#line 578 "exprn_aux.m"
      *ll_backend__exprn_aux__Lval_8 = ll_backend__exprn_aux__NewLval_6;
#line 580 "exprn_aux.m"
    else
#line 581 "exprn_aux.m"
      {
#line 581 "exprn_aux.m"
        MR_Integer ll_backend__exprn_aux___SubstCount_22;

#line 581 "exprn_aux.m"
        {
#line 581 "exprn_aux.m"
          ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(ll_backend__exprn_aux__OldLval_5, ll_backend__exprn_aux__NewLval_6, ll_backend__exprn_aux__Lval0_7, ll_backend__exprn_aux__Lval_8, (MR_Integer) 0, &ll_backend__exprn_aux___SubstCount_22);
        }
#line 581 "exprn_aux.m"
      }
#line 565 "exprn_aux.m"
  }
#line 56 "exprn_aux.m"
}

#line 562 "exprn_aux.m"
static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1(
#line 562 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__closure_arg,
#line 562 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
#line 562 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
#line 562 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
#line 562 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
#line 562 "exprn_aux.m"
{
#line 562 "exprn_aux.m"
  {
#line 562 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
#line 562 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__conv1_Lval_10;
#line 562 "exprn_aux.m"
    MR_Integer ll_backend__exprn_aux__conv0_STATE_VARIABLE_N_13;

#line 562 "exprn_aux.m"
    {
#line 562 "exprn_aux.m"
      ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv1_Lval_10, ((MR_Integer) ll_backend__exprn_aux__wrapper_arg_3), &ll_backend__exprn_aux__conv0_STATE_VARIABLE_N_13);
    }
#line 562 "exprn_aux.m"
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv1_Lval_10));
#line 562 "exprn_aux.m"
    *ll_backend__exprn_aux__wrapper_arg_4 = ((MR_Box) (ll_backend__exprn_aux__conv0_STATE_VARIABLE_N_13));
#line 562 "exprn_aux.m"
  }
#line 562 "exprn_aux.m"
}

#line 53 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(
#line 53 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__OldLval_7,
#line 53 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__NewLval_8,
#line 53 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Instr0_9,
#line 53 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Instr_10,
#line 53 "exprn_aux.m"
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_12,
#line 53 "exprn_aux.m"
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_13)
#line 53 "exprn_aux.m"
{
#line 561 "exprn_aux.m"
  {
#line 561 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 561 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__V_14_14;
#line 561 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Uinstr0_27;
#line 561 "exprn_aux.m"
    MR_String ll_backend__exprn_aux__Comment_28;
#line 561 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Uinstr_29;
#line 254 "exprn_aux.m"
    MR_Box ll_backend__exprn_aux__conv2_STATE_VARIABLE_N_13;

#line 562 "exprn_aux.m"
    {
#line 562 "exprn_aux.m"
      ll_backend__exprn_aux__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 562 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[0]));
#line 562 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 1) = ((MR_Box) (ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1));
#line 562 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 562 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 3) = ((MR_Box) (ll_backend__exprn_aux__OldLval_7));
#line 562 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 4) = ((MR_Box) (ll_backend__exprn_aux__NewLval_8));
#line 562 "exprn_aux.m"
    }
#line 253 "exprn_aux.m"
    ll_backend__exprn_aux__Uinstr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_9, (MR_Integer) 0)));
#line 253 "exprn_aux.m"
    ll_backend__exprn_aux__Comment_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_9, (MR_Integer) 1)));
#line 254 "exprn_aux.m"
    {
#line 254 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__exprn_aux__V_14_14, ll_backend__exprn_aux__Uinstr0_27, &ll_backend__exprn_aux__Uinstr_29, ((MR_Box) (ll_backend__exprn_aux__STATE_VARIABLE_N_0_12)), &ll_backend__exprn_aux__conv2_STATE_VARIABLE_N_13);
    }
#line 254 "exprn_aux.m"
    *ll_backend__exprn_aux__STATE_VARIABLE_N_13 = ((MR_Integer) ll_backend__exprn_aux__conv2_STATE_VARIABLE_N_13);
#line 255 "exprn_aux.m"
    {
#line 255 "exprn_aux.m"
      MR_Word base;
#line 255 "exprn_aux.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "exprn_aux.m"
      *ll_backend__exprn_aux__Instr_10 = base;
#line 255 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Uinstr_29));
#line 255 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Comment_28));
#line 255 "exprn_aux.m"
    }
#line 561 "exprn_aux.m"
  }
#line 53 "exprn_aux.m"
}

#line 38 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_36,
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 38 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Rval0_7,
#line 38 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Rval_8,
#line 38 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
#line 38 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25)
#line 38 "exprn_aux.m"
{
#line 512 "exprn_aux.m"
  {
#line 512 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 512 "exprn_aux.m"
    if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 0))))
#line 509 "exprn_aux.m"
      {
#line 509 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
#line 509 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__Lval_11;
#line 510 "exprn_aux.m"
        void MR_CALL (* ll_backend__exprn_aux__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
#line 510 "exprn_aux.m"
        MR_Box ll_backend__exprn_aux__conv1_Lval_11;

#line 510 "exprn_aux.m"
        {
#line 510 "exprn_aux.m"
          ll_backend__exprn_aux__func_0(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_10)), &ll_backend__exprn_aux__conv1_Lval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
        }
#line 510 "exprn_aux.m"
        ll_backend__exprn_aux__Lval_11 = ((MR_Word) ll_backend__exprn_aux__conv1_Lval_11);
#line 511 "exprn_aux.m"
        {
#line 511 "exprn_aux.m"
          MR_Word base;
#line 511 "exprn_aux.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 511 "exprn_aux.m"
          *ll_backend__exprn_aux__Rval_8 = base;
#line 511 "exprn_aux.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_11));
#line 511 "exprn_aux.m"
        }
#line 509 "exprn_aux.m"
      }
#line 512 "exprn_aux.m"
    else
#line 512 "exprn_aux.m"
      if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 2))))
#line 516 "exprn_aux.m"
        {
#line 516 "exprn_aux.m"
          MR_Integer ll_backend__exprn_aux__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
#line 516 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 516 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__Rval2_15;

#line 517 "exprn_aux.m"
          {
#line 517 "exprn_aux.m"
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval1_14, &ll_backend__exprn_aux__Rval2_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
#line 518 "exprn_aux.m"
          {
#line 518 "exprn_aux.m"
            MR_Word base;
#line 518 "exprn_aux.m"
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 518 "exprn_aux.m"
            *ll_backend__exprn_aux__Rval_8 = base;
#line 518 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Tag_13));
#line 518 "exprn_aux.m"
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_15));
#line 518 "exprn_aux.m"
          }
#line 516 "exprn_aux.m"
        }
#line 512 "exprn_aux.m"
      else
#line 512 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 1))))
#line 513 "exprn_aux.m"
          {
#line 514 "exprn_aux.m"
            *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 514 "exprn_aux.m"
            *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 513 "exprn_aux.m"
          }
#line 512 "exprn_aux.m"
        else
#line 512 "exprn_aux.m"
          if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 530 "exprn_aux.m"
            {
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval3_20;
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval4_21;
#line 530 "exprn_aux.m"
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27;
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
#line 530 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Rval2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 3)));

#line 531 "exprn_aux.m"
              {
#line 531 "exprn_aux.m"
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval1_34, &ll_backend__exprn_aux__Rval3_20, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27);
              }
#line 532 "exprn_aux.m"
              {
#line 532 "exprn_aux.m"
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval2_35, &ll_backend__exprn_aux__Rval4_21, ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
#line 533 "exprn_aux.m"
              {
#line 533 "exprn_aux.m"
                MR_Word base;
#line 533 "exprn_aux.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 533 "exprn_aux.m"
                *ll_backend__exprn_aux__Rval_8 = base;
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Binop_19));
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_20));
#line 533 "exprn_aux.m"
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_21));
#line 533 "exprn_aux.m"
              }
#line 530 "exprn_aux.m"
            }
#line 512 "exprn_aux.m"
          else
#line 512 "exprn_aux.m"
            if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 523 "exprn_aux.m"
              {
#line 524 "exprn_aux.m"
                *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 524 "exprn_aux.m"
                *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 523 "exprn_aux.m"
              }
#line 512 "exprn_aux.m"
            else
#line 512 "exprn_aux.m"
              if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 535 "exprn_aux.m"
                {
#line 535 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 535 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__MemRef_23;

#line 536 "exprn_aux.m"
                  {
#line 536 "exprn_aux.m"
                    ll_backend__exprn_aux__transform_lval_in_mem_ref_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__MemRef0_22, &ll_backend__exprn_aux__MemRef_23, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
                  }
#line 537 "exprn_aux.m"
                  {
#line 537 "exprn_aux.m"
                    MR_Word base;
#line 537 "exprn_aux.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "exprn_aux.m"
                    *ll_backend__exprn_aux__Rval_8 = base;
#line 537 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 537 "exprn_aux.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MemRef_23));
#line 537 "exprn_aux.m"
                  }
#line 535 "exprn_aux.m"
                }
#line 512 "exprn_aux.m"
              else
#line 512 "exprn_aux.m"
                if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 520 "exprn_aux.m"
                  {
#line 521 "exprn_aux.m"
                    *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
#line 521 "exprn_aux.m"
                    *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
#line 520 "exprn_aux.m"
                  }
#line 512 "exprn_aux.m"
                else
#line 526 "exprn_aux.m"
                  {
#line 526 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
#line 526 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
#line 526 "exprn_aux.m"
                    MR_Word ll_backend__exprn_aux__Rval2_33;

#line 527 "exprn_aux.m"
                    {
#line 527 "exprn_aux.m"
                      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval1_32, &ll_backend__exprn_aux__Rval2_33, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
                    }
#line 528 "exprn_aux.m"
                    {
#line 528 "exprn_aux.m"
                      MR_Word base;
#line 528 "exprn_aux.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 528 "exprn_aux.m"
                      *ll_backend__exprn_aux__Rval_8 = base;
#line 528 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 528 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Unop_18));
#line 528 "exprn_aux.m"
                      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_33));
#line 528 "exprn_aux.m"
                    }
#line 526 "exprn_aux.m"
                  }
#line 512 "exprn_aux.m"
  }
#line 38 "exprn_aux.m"
}

#line 35 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(
#line 35 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_16,
#line 35 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Transform_6,
#line 35 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Instr0_7,
#line 35 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__Instr_8,
#line 35 "exprn_aux.m"
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_13,
#line 35 "exprn_aux.m"
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_14)
#line 35 "exprn_aux.m"
{
#line 252 "exprn_aux.m"
  {
#line 252 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;
#line 252 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_7, (MR_Integer) 0)));
#line 252 "exprn_aux.m"
    MR_String ll_backend__exprn_aux__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_7, (MR_Integer) 1)));
#line 252 "exprn_aux.m"
    MR_Word ll_backend__exprn_aux__Uinstr_12;

#line 254 "exprn_aux.m"
    {
#line 254 "exprn_aux.m"
      ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_16, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Uinstr0_10, &ll_backend__exprn_aux__Uinstr_12, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_13, ll_backend__exprn_aux__STATE_VARIABLE_Acc_14);
    }
#line 255 "exprn_aux.m"
    {
#line 255 "exprn_aux.m"
      MR_Word base;
#line 255 "exprn_aux.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 255 "exprn_aux.m"
      *ll_backend__exprn_aux__Instr_8 = base;
#line 255 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Uinstr_12));
#line 255 "exprn_aux.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Comment_11));
#line 255 "exprn_aux.m"
    }
#line 252 "exprn_aux.m"
  }
#line 35 "exprn_aux.m"
}

#line 28 "exprn_aux.m"
void MR_CALL 
ll_backend__exprn_aux__const_is_constant_3_p_0(
#line 28 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__Const_4,
#line 28 "exprn_aux.m"
  MR_Word ll_backend__exprn_aux__ExprnOpts_5,
#line 28 "exprn_aux.m"
  MR_Word * ll_backend__exprn_aux__IsConst_6)
#line 28 "exprn_aux.m"
{
#line 117 "exprn_aux.m"
  {
#line 117 "exprn_aux.m"
    MR_bool ll_backend__exprn_aux__succeeded;

#line 117 "exprn_aux.m"
    if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Const_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 130 "exprn_aux.m"
      {
#line 130 "exprn_aux.m"
        MR_Word ll_backend__exprn_aux__CodeAddr_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_4, (MR_Integer) 1)));

#line 138 "exprn_aux.m"
        if (((MR_tag((MR_Word) ll_backend__exprn_aux__CodeAddr_16)) == (MR_mktag((MR_Integer) 2))))
#line 141 "exprn_aux.m"
          {
#line 141 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__StaticCodeAddrs_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 142 "exprn_aux.m"
            MR_Word ll_backend__exprn_aux__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 146 "exprn_aux.m"
            if ((ll_backend__exprn_aux__StaticCodeAddrs_29 == (MR_Integer) 1))
#line 148 "exprn_aux.m"
              *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
#line 146 "exprn_aux.m"
            else
#line 145 "exprn_aux.m"
              *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
#line 141 "exprn_aux.m"
          }
#line 138 "exprn_aux.m"
        else
#line 138 "exprn_aux.m"
          if (((MR_tag((MR_Word) ll_backend__exprn_aux__CodeAddr_16)) == (MR_mktag((MR_Integer) 1))))
#line 138 "exprn_aux.m"
            {
#line 138 "exprn_aux.m"
              MR_Word ll_backend__exprn_aux__Label_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__CodeAddr_16, (MR_Integer) 0)));

#line 168 "exprn_aux.m"
              if (((MR_tag((MR_Word) ll_backend__exprn_aux__Label_27)) == (MR_mktag((MR_Integer) 1))))
#line 168 "exprn_aux.m"
                {
#line 168 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__EntryLabelType_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__Label_27, (MR_Integer) 0)));
#line 168 "exprn_aux.m"
                  MR_Word ll_backend__exprn_aux__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__Label_27, (MR_Integer) 1)));

#line 182 "exprn_aux.m"
                  if ((ll_backend__exprn_aux__EntryLabelType_43 == (MR_Integer) 0))
#line 184 "exprn_aux.m"
                    *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
#line 182 "exprn_aux.m"
                  else
#line 173 "exprn_aux.m"
                    {
#line 173 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__StaticCodeAddrs_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 174 "exprn_aux.m"
                      MR_Word ll_backend__exprn_aux__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

#line 178 "exprn_aux.m"
                      if ((ll_backend__exprn_aux__StaticCodeAddrs_45 == (MR_Integer) 1))
#line 180 "exprn_aux.m"
                        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
#line 178 "exprn_aux.m"
                      else
#line 177 "exprn_aux.m"
                        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
#line 173 "exprn_aux.m"
                    }
#line 168 "exprn_aux.m"
                }
#line 168 "exprn_aux.m"
              else
#line 188 "exprn_aux.m"
                *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
#line 138 "exprn_aux.m"
            }
#line 138 "exprn_aux.m"
          else
#line 161 "exprn_aux.m"
            *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
#line 130 "exprn_aux.m"
      }
#line 117 "exprn_aux.m"
    else
#line 117 "exprn_aux.m"
      if (((((MR_tag((MR_Word) ll_backend__exprn_aux__Const_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_4, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 120 "exprn_aux.m"
        {
#line 120 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__SGFloats_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
#line 121 "exprn_aux.m"
          MR_Word ll_backend__exprn_aux__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);

#line 125 "exprn_aux.m"
          if ((ll_backend__exprn_aux__SGFloats_15 == (MR_Integer) 1))
#line 127 "exprn_aux.m"
            *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
#line 125 "exprn_aux.m"
          else
#line 124 "exprn_aux.m"
            *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
#line 120 "exprn_aux.m"
        }
#line 117 "exprn_aux.m"
      else
#line 118 "exprn_aux.m"
        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
#line 117 "exprn_aux.m"
  }
#line 28 "exprn_aux.m"
}

void mercury__ll_backend__exprn_aux__init(void)
{
}

void mercury__ll_backend__exprn_aux__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__exprn_aux__ll_backend__exprn_aux__type_ctor_info_transform_lval_1);
}

void mercury__ll_backend__exprn_aux__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.exprn_aux. */
