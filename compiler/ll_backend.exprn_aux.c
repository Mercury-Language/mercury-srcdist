/*
** Automatically generated from `exprn_aux.m'
** by the Mercury compiler,
** version rotd-2016-02-08
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
#include "ll_backend.llds.mih"
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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_VA_PseudoTypeInfo_Struct4 ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1;

static MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0_10001(
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3);

static void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0_10001(
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box ll_backend__exprn_aux__wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(
  MR_Word ll_backend__exprn_aux__V_26_26,
  MR_Word ll_backend__exprn_aux__V_27_27,
  MR_Word ll_backend__exprn_aux__MemRef0_7,
  MR_Word * ll_backend__exprn_aux__MemRef_8,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);

static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(
  MR_Word ll_backend__exprn_aux__V_37_37,
  MR_Word ll_backend__exprn_aux__V_38_38,
  MR_Word ll_backend__exprn_aux__Rval0_7,
  MR_Word * ll_backend__exprn_aux__Rval_8,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);

static void MR_CALL 
ll_backend__exprn_aux__mem_ref_addrs_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3);

static MR_bool MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_2_p_0(
  MR_Word ll_backend__exprn_aux__Rval0_3,
  MR_Word * ll_backend__exprn_aux__Rval_4);

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2,
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_3);

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Integer ll_backend__exprn_aux__N0_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
  MR_Word * ll_backend__exprn_aux__HeadVar__4_4);

static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_lval_4_p_0(
  MR_Word ll_backend__exprn_aux__OldRval_5,
  MR_Word ll_backend__exprn_aux__NewRval_6,
  MR_Word ll_backend__exprn_aux__Lval0_7,
  MR_Word * ll_backend__exprn_aux__Lval_8);

static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_p_0(
  MR_Word ll_backend__exprn_aux__OldRval_5,
  MR_Word ll_backend__exprn_aux__NewRval_6,
  MR_Word ll_backend__exprn_aux__MemRef0_7,
  MR_Word * ll_backend__exprn_aux__MemRef_8);

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_7,
  MR_Word ll_backend__exprn_aux__NewLval_8,
  MR_Word ll_backend__exprn_aux__Lval0_9,
  MR_Word * ll_backend__exprn_aux__Lval_10,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_26,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_27);

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_7,
  MR_Word ll_backend__exprn_aux__NewLval_8,
  MR_Word ll_backend__exprn_aux__Lval0_9,
  MR_Word * ll_backend__exprn_aux__Lval_10,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_12,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_13);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_mem_ref_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_25,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__MemRef0_7,
  MR_Word * ll_backend__exprn_aux__MemRef_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Out0_7,
  MR_Word * ll_backend__exprn_aux__Out_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Out0_7,
  MR_Word * ll_backend__exprn_aux__Out_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_19,
  MR_Word ll_backend__exprn_aux__Transform_1,
  MR_Word ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_5);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_31,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Component0_7,
  MR_Word * ll_backend__exprn_aux__Component_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4);

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_185,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Uinstr0_7,
  MR_Word * ll_backend__exprn_aux__Uinstr_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);

static void MR_CALL 
ll_backend__exprn_aux__vars_in_mem_ref_2_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2);

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
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
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



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

const MR_TypeCtorInfo_Struct ll_backend__exprn_aux__ll_backend__exprn_aux__type_ctor_info_transform_lval_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (ll_backend__exprn_aux____Unify____transform_lval_1_0_10001)),
  ((MR_Box) (ll_backend__exprn_aux____Compare____transform_lval_1_0_10001)),
  (MR_String) "ll_backend.exprn_aux",
  (MR_String) "transform_lval",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__exprn_aux____vpti_pred_4__plain_ll_backend__llds__type_ctor_info_lval_0__plain_ll_backend__llds__type_ctor_info_lval_0__pseudo_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0_10001(
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    {
      ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux____Unify____transform_lval_1_0(((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_2), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_3));
    }
    return ll_backend__exprn_aux__succeeded;
  }
}

static void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0_10001(
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box ll_backend__exprn_aux__wrapper_arg_4)
{
  {
    MR_Word ll_backend__exprn_aux__conv0_HeadVar__1_1;

    {
      ll_backend__exprn_aux____Compare____transform_lval_1_0(((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv0_HeadVar__1_1, ((MR_Word) ll_backend__exprn_aux__wrapper_arg_3), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_4));
    }
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(
  MR_Word ll_backend__exprn_aux__V_26_26,
  MR_Word ll_backend__exprn_aux__V_27_27,
  MR_Word ll_backend__exprn_aux__MemRef0_7,
  MR_Word * ll_backend__exprn_aux__MemRef_8,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__exprn_aux__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Rval_11;

          {
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__Rval0_10, &ll_backend__exprn_aux__Rval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__exprn_aux__Rval0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Rval_24;

          {
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__Rval0_23, &ll_backend__exprn_aux__Rval_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_24));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__BaseRval0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__MaybeTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 1)));
          MR_Word ll_backend__exprn_aux__FieldRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 2)));
          MR_Word ll_backend__exprn_aux__BaseRval_15;
          MR_Word ll_backend__exprn_aux__FieldRval_16;
          MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19;

          {
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__BaseRval0_12, &ll_backend__exprn_aux__BaseRval_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19);
          }
          {
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_26_26, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__FieldRval0_14, &ll_backend__exprn_aux__FieldRval_16, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__BaseRval_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_13));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__exprn_aux__FieldRval_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(
  MR_Word ll_backend__exprn_aux__V_37_37,
  MR_Word ll_backend__exprn_aux__V_38_38,
  MR_Word ll_backend__exprn_aux__Rval0_7,
  MR_Word * ll_backend__exprn_aux__Rval_8,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__exprn_aux__Lval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Lval_11;

          {
            ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__exprn_aux__Lval0_10, ll_backend__exprn_aux__V_37_37);
          }
          if (ll_backend__exprn_aux__succeeded)
            {
              ll_backend__exprn_aux__Lval_11 = ll_backend__exprn_aux__V_38_38;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = (ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24 + (MR_Integer) 1);
            }
          else
            {
              ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Lval0_10, &ll_backend__exprn_aux__Lval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
            }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__exprn_aux__Rval_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
          *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__exprn_aux__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
          MR_Word ll_backend__exprn_aux__Rval2_15;

          {
            ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval1_14, &ll_backend__exprn_aux__Rval2_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__Rval_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Tag_13));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_15));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__exprn_aux__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval2_33;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval1_32, &ll_backend__exprn_aux__Rval2_33, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Unop_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_33));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__exprn_aux__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval3_20;
              MR_Word ll_backend__exprn_aux__Rval4_21;
              MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27;
              MR_Word ll_backend__exprn_aux__Rval1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 3)));

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval1_34, &ll_backend__exprn_aux__Rval3_20, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27);
              }
              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__Rval2_35, &ll_backend__exprn_aux__Rval4_21, ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Binop_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_21));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__exprn_aux__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__MemRef_23;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_109_101_109_95_114_101_102_95_95_104_111_51_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__V_37_37, ll_backend__exprn_aux__V_38_38, ll_backend__exprn_aux__MemRef0_22, &ll_backend__exprn_aux__MemRef_23, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MemRef_23));
              }
            }
            break;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_f_0(
  MR_Word ll_backend__exprn_aux__Lval_5)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__HeadVar__3_3;

    {
      ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__3_3, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_5));
    }
    return ll_backend__exprn_aux__HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__exprn_aux____Compare____transform_lval_1_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_6,
  MR_Word * ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word ll_backend__exprn_aux__HeadVar__3_3)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__Cast_HeadVar1_4 = ll_backend__exprn_aux__HeadVar__2_2;
    MR_Word ll_backend__exprn_aux__Cast_HeadVar2_5 = ll_backend__exprn_aux__HeadVar__3_3;

    {
      mercury__private_builtin__builtin_compare_pred_3_p_0(ll_backend__exprn_aux__HeadVar__1_1, (MR_Word) ll_backend__exprn_aux__Cast_HeadVar1_4, (MR_Word) ll_backend__exprn_aux__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
ll_backend__exprn_aux____Unify____transform_lval_1_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_5,
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word ll_backend__exprn_aux__HeadVar__2_2)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__Cast_HeadVar1_3 = ll_backend__exprn_aux__HeadVar__1_1;
    MR_Word ll_backend__exprn_aux__Cast_HeadVar2_4 = ll_backend__exprn_aux__HeadVar__2_2;

    {
      ll_backend__exprn_aux__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ll_backend__exprn_aux__Cast_HeadVar1_3, (MR_Word) ll_backend__exprn_aux__Cast_HeadVar2_4);
    }
    return ll_backend__exprn_aux__succeeded;
  }
}

static void MR_CALL 
ll_backend__exprn_aux__mem_ref_addrs_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux___MaybeTag_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word ll_backend__exprn_aux___FieldNum_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));

          {
            ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_6, ll_backend__exprn_aux__HeadVar__2_2, ll_backend__exprn_aux__HeadVar__3_3);
          }
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_2_p_0(
  MR_Word ll_backend__exprn_aux__Rval0_3,
  MR_Word * ll_backend__exprn_aux__Rval_4)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded = ((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 0)));
    MR_Word ll_backend__exprn_aux__MaybeTag_5;
    MR_Word ll_backend__exprn_aux__Num_7;
    MR_Word ll_backend__exprn_aux__Rval2_8;
    MR_Word ll_backend__exprn_aux__Rval1_6;
    MR_Word ll_backend__exprn_aux__V_12_12;

    if (ll_backend__exprn_aux__succeeded)
      {
        ll_backend__exprn_aux__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)));
        ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__V_12_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__exprn_aux__succeeded)
          {
            ll_backend__exprn_aux__MaybeTag_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 1)));
            ll_backend__exprn_aux__Rval1_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 2)));
            ll_backend__exprn_aux__Num_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_12_12, (MR_Integer) 3)));
            {
              ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval1_6, &ll_backend__exprn_aux__Rval2_8);
            }
          }
      }
    if (ll_backend__exprn_aux__succeeded)
      {
        MR_Word ll_backend__exprn_aux__V_13_13;

        {
          ll_backend__exprn_aux__V_13_13 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_5));
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_8));
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_13_13, 3) = ((MR_Box) (ll_backend__exprn_aux__Num_7));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *ll_backend__exprn_aux__Rval_4 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__V_13_13));
        }
        ll_backend__exprn_aux__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word ll_backend__exprn_aux__UnOp_9;
        MR_Word ll_backend__exprn_aux__Rval2_24;
        MR_Word ll_backend__exprn_aux__Rval1_14;

        ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
        if (ll_backend__exprn_aux__succeeded)
          {
            ll_backend__exprn_aux__UnOp_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 1)));
            ll_backend__exprn_aux__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 2)));
            {
              ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval1_14, &ll_backend__exprn_aux__Rval2_24);
            }
          }
        if (ll_backend__exprn_aux__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__exprn_aux__Rval_4 = base;
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__UnOp_9));
              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_24));
            }
            ll_backend__exprn_aux__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word ll_backend__exprn_aux__BinOp_10;
            MR_Word ll_backend__exprn_aux__Rval3_11;
            MR_Word ll_backend__exprn_aux__Rval2_22;
            MR_Word ll_backend__exprn_aux__Rval1_15;

            ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
            if (ll_backend__exprn_aux__succeeded)
              {
                ll_backend__exprn_aux__BinOp_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 1)));
                ll_backend__exprn_aux__Rval1_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 2)));
                ll_backend__exprn_aux__Rval2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 3)));
                {
                  ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval1_15, &ll_backend__exprn_aux__Rval3_11);
                }
              }
            if (ll_backend__exprn_aux__succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__exprn_aux__Rval_4 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__BinOp_10));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_11));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval2_22));
                }
                ll_backend__exprn_aux__succeeded = MR_TRUE;
              }
            else
              {
                MR_Word ll_backend__exprn_aux__Rval2_16;
                MR_Word ll_backend__exprn_aux__Rval1_17;
                MR_Word ll_backend__exprn_aux__BinOp_19;
                MR_Word ll_backend__exprn_aux__Rval3_20;

                ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (ll_backend__exprn_aux__succeeded)
                  {
                    ll_backend__exprn_aux__BinOp_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 1)));
                    ll_backend__exprn_aux__Rval1_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 2)));
                    ll_backend__exprn_aux__Rval2_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_3, (MR_Integer) 3)));
                    {
                      ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval2_16, &ll_backend__exprn_aux__Rval3_20);
                    }
                    if (ll_backend__exprn_aux__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *ll_backend__exprn_aux__Rval_4 = base;
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__BinOp_19));
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval1_17));
                          MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval3_20));
                        }
                        ll_backend__exprn_aux__succeeded = MR_TRUE;
                      }
                  }
              }
          }
      }
    return ll_backend__exprn_aux__succeeded;
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2,
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__exprn_aux__succeeded;

        if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__exprn_aux__STATE_VARIABLE_Rval_3 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2;
        else
          {
            MR_Word ll_backend__exprn_aux__Left_7;
            MR_Word ll_backend__exprn_aux__Right_8;
            MR_Word ll_backend__exprn_aux__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__exprn_aux__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_14_14;

            ll_backend__exprn_aux__Left_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 0)));
            ll_backend__exprn_aux__Right_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 1)));
            {
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__Left_7, ll_backend__exprn_aux__Right_8, ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2, &ll_backend__exprn_aux__STATE_VARIABLE_Rval_14_14);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rest_9;
              MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_14_14;

              ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2;
              ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Integer ll_backend__exprn_aux__N0_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
  MR_Word * ll_backend__exprn_aux__HeadVar__4_4)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__exprn_aux__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__exprn_aux__Rval1_6;
        MR_Word ll_backend__exprn_aux__Rval2_7;
        MR_Word ll_backend__exprn_aux__RvalPairList_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__exprn_aux__Uniq_10;
        MR_Word ll_backend__exprn_aux__RvalUniqList_11;
        MR_Word ll_backend__exprn_aux__UniqRvalList_12;
        MR_Integer ll_backend__exprn_aux__N1_13;
        MR_Word ll_backend__exprn_aux__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__exprn_aux__V_15_15;
        MR_Word ll_backend__exprn_aux__V_16_16;
        MR_Word ll_backend__exprn_aux__V_18_18;

        ll_backend__exprn_aux__Rval1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, (MR_Integer) 0)));
        ll_backend__exprn_aux__Rval2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, (MR_Integer) 1)));
        ll_backend__exprn_aux__N1_13 = (ll_backend__exprn_aux__N0_2 - (MR_Integer) 1);
        {
          ll_backend__exprn_aux__V_18_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_18_18, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__V_18_18, 1) = ((MR_Box) (ll_backend__exprn_aux__N1_13));
        }
        {
          ll_backend__exprn_aux__Uniq_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Uniq_10, 0) = ((MR_Box) (ll_backend__exprn_aux__V_18_18));
        }
        {
          ll_backend__exprn_aux__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_15_15, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval1_6));
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_15_15, 1) = ((MR_Box) (ll_backend__exprn_aux__Uniq_10));
        }
        {
          ll_backend__exprn_aux__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_16_16, 0) = ((MR_Box) (ll_backend__exprn_aux__Uniq_10));
          MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_16_16, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_7));
        }
        {
          ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(ll_backend__exprn_aux__RvalPairList_8, ll_backend__exprn_aux__N1_13, &ll_backend__exprn_aux__RvalUniqList_11, &ll_backend__exprn_aux__UniqRvalList_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__exprn_aux__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__V_15_15));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__exprn_aux__RvalUniqList_11));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__exprn_aux__HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__V_16_16));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__exprn_aux__UniqRvalList_12));
        }
      }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_lval_4_p_0(
  MR_Word ll_backend__exprn_aux__OldRval_5,
  MR_Word ll_backend__exprn_aux__NewRval_6,
  MR_Word ll_backend__exprn_aux__Lval0_7,
  MR_Word * ll_backend__exprn_aux__Lval_8)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__exprn_aux__Lval_8 = ll_backend__exprn_aux__Lval0_7;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__exprn_aux__Lval_8 = ll_backend__exprn_aux__Lval0_7;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            *ll_backend__exprn_aux__Lval_8 = ll_backend__exprn_aux__Lval0_7;
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__exprn_aux__Rval0_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_21;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_20, &ll_backend__exprn_aux__Rval_21);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_21));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__exprn_aux__Rval0_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_32;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_31, &ll_backend__exprn_aux__Rval_32);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_32));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__exprn_aux__Rval0_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_28;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_27, &ll_backend__exprn_aux__Rval_28);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_28));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__exprn_aux__Rval0_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_30;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_29, &ll_backend__exprn_aux__Rval_30);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_30));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__exprn_aux__Rval0_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_34;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_33, &ll_backend__exprn_aux__Rval_34);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_34));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__exprn_aux__Tag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval2_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__Rval3_25;
              MR_Word ll_backend__exprn_aux__Rval4_26;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_23, &ll_backend__exprn_aux__Rval3_25);
              }
              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval2_24, &ll_backend__exprn_aux__Rval4_26);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Tag_22));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_25));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_26));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__exprn_aux__Rval0_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_36;

              {
                ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_35, &ll_backend__exprn_aux__Rval_36);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_36));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_p_0(
  MR_Word ll_backend__exprn_aux__OldRval_5,
  MR_Word ll_backend__exprn_aux__NewRval_6,
  MR_Word ll_backend__exprn_aux__MemRef0_7,
  MR_Word * ll_backend__exprn_aux__MemRef_8)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__exprn_aux__MemRef_8 = ll_backend__exprn_aux__MemRef0_7;
        break;
      case (MR_Integer) 1:
        *ll_backend__exprn_aux__MemRef_8 = ll_backend__exprn_aux__MemRef0_7;
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__MaybeTag_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 1)));
          MR_Word ll_backend__exprn_aux__Rval_12;
          MR_Word ll_backend__exprn_aux__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 2)));

          {
            ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval0_10, &ll_backend__exprn_aux__Rval_12);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_12));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_11));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__exprn_aux__N_14));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_7,
  MR_Word ll_backend__exprn_aux__NewLval_8,
  MR_Word ll_backend__exprn_aux__Lval0_9,
  MR_Word * ll_backend__exprn_aux__Lval_10,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_26,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_27)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Lval0_9)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__exprn_aux__Lval_10 = ll_backend__exprn_aux__Lval0_9;
          *ll_backend__exprn_aux__STATE_VARIABLE_N_27 = ll_backend__exprn_aux__STATE_VARIABLE_N_0_26;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *ll_backend__exprn_aux__Lval_10 = ll_backend__exprn_aux__Lval0_9;
          *ll_backend__exprn_aux__STATE_VARIABLE_N_27 = ll_backend__exprn_aux__STATE_VARIABLE_N_0_26;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            {
              *ll_backend__exprn_aux__Lval_10 = ll_backend__exprn_aux__Lval0_9;
              *ll_backend__exprn_aux__STATE_VARIABLE_N_27 = ll_backend__exprn_aux__STATE_VARIABLE_N_0_26;
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__exprn_aux__Rval0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_20;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_19, &ll_backend__exprn_aux__Rval_20, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_20));
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__exprn_aux__Rval0_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_46;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_45, &ll_backend__exprn_aux__Rval_46, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_46));
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__exprn_aux__Rval0_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_42;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_41, &ll_backend__exprn_aux__Rval_42, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_42));
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__exprn_aux__Rval0_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_44;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_43, &ll_backend__exprn_aux__Rval_44, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_44));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__exprn_aux__Rval0_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_48;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_47, &ll_backend__exprn_aux__Rval_48, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_48));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__exprn_aux__Tag_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval1_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval2_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__Rval3_24;
              MR_Word ll_backend__exprn_aux__Rval4_25;
              MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_29_29;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval1_22, &ll_backend__exprn_aux__Rval3_24, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, &ll_backend__exprn_aux__STATE_VARIABLE_N_29_29);
              }
              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval2_23, &ll_backend__exprn_aux__Rval4_25, ll_backend__exprn_aux__STATE_VARIABLE_N_29_29, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Tag_21));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_24));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_25));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__exprn_aux__Rval0_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval0_9, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_50;

              {
                ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Rval0_49, &ll_backend__exprn_aux__Rval_50, ll_backend__exprn_aux__STATE_VARIABLE_N_0_26, ll_backend__exprn_aux__STATE_VARIABLE_N_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Lval_10 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_50));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_7,
  MR_Word ll_backend__exprn_aux__NewLval_8,
  MR_Word ll_backend__exprn_aux__Lval0_9,
  MR_Word * ll_backend__exprn_aux__Lval_10,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_12,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_13)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    {
      ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__exprn_aux__Lval0_9, ll_backend__exprn_aux__OldLval_7);
    }
    if (ll_backend__exprn_aux__succeeded)
      {
        *ll_backend__exprn_aux__Lval_10 = ll_backend__exprn_aux__NewLval_8;
        *ll_backend__exprn_aux__STATE_VARIABLE_N_13 = (ll_backend__exprn_aux__STATE_VARIABLE_N_0_12 + (MR_Integer) 1);
      }
    else
      {
        ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(ll_backend__exprn_aux__OldLval_7, ll_backend__exprn_aux__NewLval_8, ll_backend__exprn_aux__Lval0_9, ll_backend__exprn_aux__Lval_10, ll_backend__exprn_aux__STATE_VARIABLE_N_0_12, ll_backend__exprn_aux__STATE_VARIABLE_N_13);
      }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_mem_ref_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_25,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__MemRef0_7,
  MR_Word * ll_backend__exprn_aux__MemRef_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_18)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__MemRef0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__exprn_aux__Rval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Rval_11;

          {
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_10, &ll_backend__exprn_aux__Rval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__exprn_aux__Rval0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Rval_24;

          {
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_23, &ll_backend__exprn_aux__Rval_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Rval_24));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__BaseRval0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__MaybeTag_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 1)));
          MR_Word ll_backend__exprn_aux__FieldRval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__MemRef0_7, (MR_Integer) 2)));
          MR_Word ll_backend__exprn_aux__BaseRval_15;
          MR_Word ll_backend__exprn_aux__FieldRval_16;
          MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19;

          {
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__BaseRval0_12, &ll_backend__exprn_aux__BaseRval_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_17, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19);
          }
          {
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_25, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__FieldRval0_14, &ll_backend__exprn_aux__FieldRval_16, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19_19, ll_backend__exprn_aux__STATE_VARIABLE_Acc_18);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__MemRef_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__BaseRval_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_13));
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (ll_backend__exprn_aux__FieldRval_16));
          }
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Out0_7,
  MR_Word * ll_backend__exprn_aux__Out_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__Lval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 0)));
    MR_Word ll_backend__exprn_aux__VarType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 1)));
    MR_Word ll_backend__exprn_aux__IsDummy_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 2)));
    MR_Word ll_backend__exprn_aux__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 3)));
    MR_String ll_backend__exprn_aux__Name_14 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 4)));
    MR_Word ll_backend__exprn_aux__MaybeForeign_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 5)));
    MR_Word ll_backend__exprn_aux__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 6)));
    MR_Word ll_backend__exprn_aux__Lval_17;
    void MR_CALL (* ll_backend__exprn_aux__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
    MR_Box ll_backend__exprn_aux__conv1_Lval_17;

    {
      ll_backend__exprn_aux__func_0(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_10)), &ll_backend__exprn_aux__conv1_Lval_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);
    }
    ll_backend__exprn_aux__Lval_17 = ((MR_Word) ll_backend__exprn_aux__conv1_Lval_17);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__exprn_aux__Out_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_17));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__VarType_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__exprn_aux__IsDummy_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__exprn_aux__OrigType_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Name_14));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__exprn_aux__MaybeForeign_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__exprn_aux__BoxPolicy_16));
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_21,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Out0_7,
  MR_Word * ll_backend__exprn_aux__Out_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_19)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_String ll_backend__exprn_aux__Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 0)));
    MR_Word ll_backend__exprn_aux__VarType_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 1)));
    MR_Word ll_backend__exprn_aux__IsDummy_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 2)));
    MR_Word ll_backend__exprn_aux__OrigType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 3)));
    MR_Word ll_backend__exprn_aux__Rval0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 4)));
    MR_Word ll_backend__exprn_aux__MaybeForeign_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 5)));
    MR_Word ll_backend__exprn_aux__BoxPolicy_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Out0_7, (MR_Integer) 6)));
    MR_Word ll_backend__exprn_aux__Rval_17;

    {
      ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_21, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_14, &ll_backend__exprn_aux__Rval_17, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_18, ll_backend__exprn_aux__STATE_VARIABLE_Acc_19);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__exprn_aux__Out_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Name_10));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__VarType_11));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (ll_backend__exprn_aux__IsDummy_12));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (ll_backend__exprn_aux__OrigType_13));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Rval_17));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (ll_backend__exprn_aux__MaybeForeign_15));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (ll_backend__exprn_aux__BoxPolicy_16));
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_19,
  MR_Word ll_backend__exprn_aux__Transform_1,
  MR_Word ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_5)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    if ((ll_backend__exprn_aux__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__exprn_aux__STATE_VARIABLE_Acc_5 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4;
      }
    else
      {
        MR_Word ll_backend__exprn_aux__TypeCtorInfo_20_20 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
        MR_Word ll_backend__exprn_aux__LvalSet0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__exprn_aux__LvalSet_12;
        MR_Word ll_backend__exprn_aux__Lvals0_14;
        MR_Word ll_backend__exprn_aux__Lvals_15;

        {
          ll_backend__exprn_aux__Lvals0_14 = mercury__set__to_sorted_list_1_f_0(ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__LvalSet0_11);
        }
        {
          mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__TypeInfo_for_T_19, ll_backend__exprn_aux__Transform_1, ll_backend__exprn_aux__Lvals0_14, &ll_backend__exprn_aux__Lvals_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_4, ll_backend__exprn_aux__STATE_VARIABLE_Acc_5);
        }
        {
          mercury__set__list_to_set_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_20, ll_backend__exprn_aux__Lvals_15, &ll_backend__exprn_aux__LvalSet_12);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__exprn_aux__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_12));
        }
      }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
{
  {
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
    MR_Word ll_backend__exprn_aux__conv1_Out_8;

    {
      ll_backend__exprn_aux__transform_lval_in_foreign_proc_output_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv1_Out_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv1_Out_8));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
{
  {
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
    MR_Word ll_backend__exprn_aux__conv0_Out_8;

    {
      ll_backend__exprn_aux__transform_lval_in_foreign_proc_input_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv0_Out_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv0_Out_8));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_component_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_31,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Component0_7,
  MR_Word * ll_backend__exprn_aux__Component_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Component0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
          *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__exprn_aux__TypeCtorInfo_36_36;
          MR_Word ll_backend__exprn_aux__Inputs0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Inputs_11;
          MR_Word ll_backend__exprn_aux__V_29_29;

          {
            ll_backend__exprn_aux__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[3]));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_1));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_31));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_29_29, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
          }
          ll_backend__exprn_aux__TypeCtorInfo_36_36 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_input_0;
          {
            mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_36_36, ll_backend__exprn_aux__TypeCtorInfo_36_36, ll_backend__exprn_aux__TypeInfo_for_T_31, ll_backend__exprn_aux__V_29_29, ll_backend__exprn_aux__Inputs0_10, &ll_backend__exprn_aux__Inputs_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__Component_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Inputs_11));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__TypeCtorInfo_41_41;
          MR_Word ll_backend__exprn_aux__Outputs0_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Outputs_13;
          MR_Word ll_backend__exprn_aux__V_27_27;

          {
            ll_backend__exprn_aux__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[4]));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_component_5_p_0_2));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_31));
            MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_27_27, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
          }
          ll_backend__exprn_aux__TypeCtorInfo_41_41 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_output_0;
          {
            mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_41_41, ll_backend__exprn_aux__TypeCtorInfo_41_41, ll_backend__exprn_aux__TypeInfo_for_T_31, ll_backend__exprn_aux__V_27_27, ll_backend__exprn_aux__Outputs0_12, &ll_backend__exprn_aux__Outputs_13, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__Component_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Outputs_13));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__exprn_aux__CanBranchAway_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__AffectsLiveness_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__LvalSet0_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 3)));
              MR_String ll_backend__exprn_aux__Code_20 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Component0_7, (MR_Integer) 4)));
              MR_Word ll_backend__exprn_aux__LvalSet_21;

              if ((ll_backend__exprn_aux__LvalSet0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__exprn_aux__LvalSet_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
                }
              else
                {
                  MR_Word ll_backend__exprn_aux__TypeCtorInfo_20_55 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
                  MR_Word ll_backend__exprn_aux__LvalSet0_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__LvalSet0_19, (MR_Integer) 0)));
                  MR_Word ll_backend__exprn_aux__LvalSet_48;
                  MR_Word ll_backend__exprn_aux__Lvals0_50;
                  MR_Word ll_backend__exprn_aux__Lvals_51;

                  {
                    ll_backend__exprn_aux__Lvals0_50 = mercury__set__to_sorted_list_1_f_0(ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__LvalSet0_47);
                  }
                  {
                    mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__TypeInfo_for_T_31, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Lvals0_50, &ll_backend__exprn_aux__Lvals_51, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
                  }
                  {
                    mercury__set__list_to_set_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_20_55, ll_backend__exprn_aux__Lvals_51, &ll_backend__exprn_aux__LvalSet_48);
                  }
                  {
                    ll_backend__exprn_aux__LvalSet_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__LvalSet_21, 0) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_48));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Component_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__CanBranchAway_17));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__AffectsLiveness_18));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_21));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Code_20));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
          case (MR_Integer) 3:
            {
              *ll_backend__exprn_aux__Component_8 = ll_backend__exprn_aux__Component0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
{
  {
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
    MR_Word ll_backend__exprn_aux__conv3_Component_8;

    {
      ll_backend__exprn_aux__transform_lval_in_component_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv3_Component_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv3_Component_8));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
{
  {
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
    MR_Word ll_backend__exprn_aux__conv2_Instr_8;

    {
      ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv2_Instr_8, ll_backend__exprn_aux__wrapper_arg_3, ll_backend__exprn_aux__wrapper_arg_4);
    }
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv2_Instr_8));
  }
}

static void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_185,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Uinstr0_7,
  MR_Word * ll_backend__exprn_aux__Uinstr_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_98)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Uinstr0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
          *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
          *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__TypeCtorInfo_186_186 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
          MR_Word ll_backend__exprn_aux__LvalSet0_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Lvals0_29;
          MR_Word ll_backend__exprn_aux__Lvals_30;
          MR_Word ll_backend__exprn_aux__LvalSet_31;

          {
            mercury__set__to_sorted_list_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__LvalSet0_28, &ll_backend__exprn_aux__Lvals0_29);
          }
          {
            mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Lvals0_29, &ll_backend__exprn_aux__Lvals_30, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
          }
          {
            mercury__set__list_to_set_2_p_0(ll_backend__exprn_aux__TypeCtorInfo_186_186, ll_backend__exprn_aux__Lvals_30, &ll_backend__exprn_aux__LvalSet_31);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__Uinstr_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__LvalSet_31));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__exprn_aux__TypeCtorInfo_191_191;
              MR_Integer ll_backend__exprn_aux__TempR_32 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Integer ll_backend__exprn_aux__TempF_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Instrs0_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__Instrs_35;
              MR_Word ll_backend__exprn_aux__V_135_135;

              {
                ll_backend__exprn_aux__V_135_135 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[1]));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_1));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_185));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_135_135, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
              }
              ll_backend__exprn_aux__TypeCtorInfo_191_191 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0;
              {
                mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_191_191, ll_backend__exprn_aux__TypeCtorInfo_191_191, ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__V_135_135, ll_backend__exprn_aux__Instrs0_34, &ll_backend__exprn_aux__Instrs_35, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__TempR_32));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__TempF_33));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Instrs_35));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__exprn_aux__Lval0_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval0_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Lval_38;
              MR_Word ll_backend__exprn_aux__Rval_39;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_133_133;
              void MR_CALL (* ll_backend__exprn_aux__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv1_Lval_38;

              {
                ll_backend__exprn_aux__func_0(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_36)), &ll_backend__exprn_aux__conv1_Lval_38, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_133_133);
              }
              ll_backend__exprn_aux__Lval_38 = ((MR_Word) ll_backend__exprn_aux__conv1_Lval_38);
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_37, &ll_backend__exprn_aux__Rval_39, ll_backend__exprn_aux__STATE_VARIABLE_Acc_133_133, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_38));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval_39));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_131_131;
              MR_Word ll_backend__exprn_aux__Lval0_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval0_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Lval_140;
              MR_Word ll_backend__exprn_aux__Rval_141;
              void MR_CALL (* ll_backend__exprn_aux__func_12)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv13_Lval_140;

              {
                ll_backend__exprn_aux__func_12(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_138)), &ll_backend__exprn_aux__conv13_Lval_140, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_131_131);
              }
              ll_backend__exprn_aux__Lval_140 = ((MR_Word) ll_backend__exprn_aux__conv13_Lval_140);
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_139, &ll_backend__exprn_aux__Rval_141, ll_backend__exprn_aux__STATE_VARIABLE_Acc_131_131, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_140));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval_141));
              }
            }
            break;
          case (MR_Integer) 3:
          case (MR_Integer) 4:
          case (MR_Integer) 5:
          case (MR_Integer) 6:
          case (MR_Integer) 24:
          case (MR_Integer) 25:
          case (MR_Integer) 26:
          case (MR_Integer) 29:
            {
              *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__exprn_aux__Labels_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval0_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_143;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_142, &ll_backend__exprn_aux__Rval_143, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_143));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Labels_40));
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__exprn_aux__AffectsLiveness_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__LiveLvals0_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_String ll_backend__exprn_aux__Code_43 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__LiveLvals_44;

              {
                ll_backend__exprn_aux__transform_lval_in_live_lval_info_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LiveLvals0_42, &ll_backend__exprn_aux__LiveLvals_44, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__AffectsLiveness_41));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LiveLvals_44));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Code_43));
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__exprn_aux__CodeAddr_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval0_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_145;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_144, &ll_backend__exprn_aux__Rval_145, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_145));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__CodeAddr_45));
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__exprn_aux__Lval0_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_147;
              void MR_CALL (* ll_backend__exprn_aux__func_28)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv29_Lval_147;

              {
                ll_backend__exprn_aux__func_28(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_146)), &ll_backend__exprn_aux__conv29_Lval_147, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_147 = ((MR_Word) ll_backend__exprn_aux__conv29_Lval_147);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_147));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__exprn_aux__Lval0_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_149;
              void MR_CALL (* ll_backend__exprn_aux__func_26)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv27_Lval_149;

              {
                ll_backend__exprn_aux__func_26(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_148)), &ll_backend__exprn_aux__conv27_Lval_149, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_149 = ((MR_Word) ll_backend__exprn_aux__conv27_Lval_149);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 11));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_149));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__exprn_aux__MaybeTag_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__MO_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__TypeCtor_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 5)));
              MR_Word ll_backend__exprn_aux__MayUseAtomic_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 6)));
              MR_Word ll_backend__exprn_aux__MaybeRegionRval0_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 7)));
              MR_Word ll_backend__exprn_aux__MaybeReuse0_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 8)));
              MR_Word ll_backend__exprn_aux__MaybeRegionRval_52;
              MR_Word ll_backend__exprn_aux__MaybeReuse_55;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_121_121;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123;
              MR_Word ll_backend__exprn_aux__Lval0_150 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval0_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 4)));
              MR_Word ll_backend__exprn_aux__Lval_152;
              MR_Word ll_backend__exprn_aux__Rval_153;
              void MR_CALL (* ll_backend__exprn_aux__func_4)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv5_Lval_152;

              {
                ll_backend__exprn_aux__func_4(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_150)), &ll_backend__exprn_aux__conv5_Lval_152, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_121_121);
              }
              ll_backend__exprn_aux__Lval_152 = ((MR_Word) ll_backend__exprn_aux__conv5_Lval_152);
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_151, &ll_backend__exprn_aux__Rval_153, ll_backend__exprn_aux__STATE_VARIABLE_Acc_121_121, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122);
              }
              if ((ll_backend__exprn_aux__MaybeRegionRval0_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__exprn_aux__MaybeRegionRval_52 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122;
                }
              else
                {
                  MR_Word ll_backend__exprn_aux__RegionRval0_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeRegionRval0_50, (MR_Integer) 0)));
                  MR_Word ll_backend__exprn_aux__RegionRval_54;

                  {
                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__RegionRval0_53, &ll_backend__exprn_aux__RegionRval_54, ll_backend__exprn_aux__STATE_VARIABLE_Acc_122_122, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123);
                  }
                  {
                    ll_backend__exprn_aux__MaybeRegionRval_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeRegionRval_52, 0) = ((MR_Box) (ll_backend__exprn_aux__RegionRval_54));
                  }
                }
              if ((ll_backend__exprn_aux__MaybeReuse0_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__exprn_aux__MaybeReuse_55 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123;
                }
              else
                {
                  MR_Word ll_backend__exprn_aux__ReuseRval0_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse0_51, (MR_Integer) 0)));
                  MR_Word ll_backend__exprn_aux__MaybeFlagLval0_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse0_51, (MR_Integer) 1)));
                  MR_Word ll_backend__exprn_aux__ReuseRval_58;
                  MR_Word ll_backend__exprn_aux__MaybeFlagLval_59;
                  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124;

                  {
                    ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__ReuseRval0_56, &ll_backend__exprn_aux__ReuseRval_58, ll_backend__exprn_aux__STATE_VARIABLE_Acc_123_123, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124);
                  }
                  if ((ll_backend__exprn_aux__MaybeFlagLval0_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      ll_backend__exprn_aux__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                      *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124;
                    }
                  else
                    {
                      MR_Word ll_backend__exprn_aux__FlagLval0_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeFlagLval0_57, (MR_Integer) 0)));
                      MR_Word ll_backend__exprn_aux__FlagLval_61;
                      void MR_CALL (* ll_backend__exprn_aux__func_6)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
                      MR_Box ll_backend__exprn_aux__conv7_FlagLval_61;

                      {
                        ll_backend__exprn_aux__func_6(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__FlagLval0_60)), &ll_backend__exprn_aux__conv7_FlagLval_61, ll_backend__exprn_aux__STATE_VARIABLE_Acc_124_124, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
                      }
                      ll_backend__exprn_aux__FlagLval_61 = ((MR_Word) ll_backend__exprn_aux__conv7_FlagLval_61);
                      {
                        ll_backend__exprn_aux__MaybeFlagLval_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeFlagLval_59, 0) = ((MR_Box) (ll_backend__exprn_aux__FlagLval_61));
                      }
                    }
                  {
                    ll_backend__exprn_aux__MaybeReuse_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse_55, 0) = ((MR_Box) (ll_backend__exprn_aux__ReuseRval_58));
                    MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__MaybeReuse_55, 1) = ((MR_Box) (ll_backend__exprn_aux__MaybeFlagLval_59));
                  }
                }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 9 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_152));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__MaybeTag_46));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__MO_47));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__Rval_153));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__exprn_aux__TypeCtor_48));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__exprn_aux__MayUseAtomic_49));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__exprn_aux__MaybeRegionRval_52));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__exprn_aux__MaybeReuse_55));
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__exprn_aux__Lval0_154 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_155;
              void MR_CALL (* ll_backend__exprn_aux__func_18)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv19_Lval_155;

              {
                ll_backend__exprn_aux__func_18(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_154)), &ll_backend__exprn_aux__conv19_Lval_155, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_155 = ((MR_Word) ll_backend__exprn_aux__conv19_Lval_155);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_155));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__exprn_aux__Rval0_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_157;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_156, &ll_backend__exprn_aux__Rval_157, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_157));
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__exprn_aux__Rval0_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_159;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_158, &ll_backend__exprn_aux__Rval_159, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_159));
              }
            }
            break;
          case (MR_Integer) 16:
            {
              *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__exprn_aux__FillOp_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__IdRval0_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__NumLval0_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 4)));
              MR_Word ll_backend__exprn_aux__AddrLval0_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 5)));
              MR_Word ll_backend__exprn_aux__IdRval_68;
              MR_Word ll_backend__exprn_aux__NumLval_69;
              MR_Word ll_backend__exprn_aux__AddrLval_70;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_115_115;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_116_116;
              MR_Word ll_backend__exprn_aux__EmbeddedStackFrame_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              void MR_CALL (* ll_backend__exprn_aux__func_22)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
              MR_Box ll_backend__exprn_aux__conv23_NumLval_69;
              void MR_CALL (* ll_backend__exprn_aux__func_24)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
              MR_Box ll_backend__exprn_aux__conv25_AddrLval_70;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__IdRval0_65, &ll_backend__exprn_aux__IdRval_68, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_115_115);
              }
              ll_backend__exprn_aux__func_22 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              {
                ll_backend__exprn_aux__func_22(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__NumLval0_66)), &ll_backend__exprn_aux__conv23_NumLval_69, ll_backend__exprn_aux__STATE_VARIABLE_Acc_115_115, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_116_116);
              }
              ll_backend__exprn_aux__NumLval_69 = ((MR_Word) ll_backend__exprn_aux__conv23_NumLval_69);
              ll_backend__exprn_aux__func_24 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              {
                ll_backend__exprn_aux__func_24(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__AddrLval0_67)), &ll_backend__exprn_aux__conv25_AddrLval_70, ll_backend__exprn_aux__STATE_VARIABLE_Acc_116_116, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__AddrLval_70 = ((MR_Word) ll_backend__exprn_aux__conv25_AddrLval_70);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 17));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__FillOp_64));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__EmbeddedStackFrame_160));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__IdRval_68));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__NumLval_69));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__exprn_aux__AddrLval_70));
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__exprn_aux__SetOp_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__ValueRval0_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__ValueRval_73;
              MR_Word ll_backend__exprn_aux__EmbeddedStackFrame_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__ValueRval0_72, &ll_backend__exprn_aux__ValueRval_73, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 18));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__SetOp_71));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__EmbeddedStackFrame_161));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__ValueRval_73));
              }
            }
            break;
          case (MR_Integer) 19:
            {
              *ll_backend__exprn_aux__Uinstr_8 = ll_backend__exprn_aux__Uinstr0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_98 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97;
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__exprn_aux__Lval0_163 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_164;
              void MR_CALL (* ll_backend__exprn_aux__func_30)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv31_Lval_164;

              {
                ll_backend__exprn_aux__func_30(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_163)), &ll_backend__exprn_aux__conv31_Lval_164, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_164 = ((MR_Word) ll_backend__exprn_aux__conv31_Lval_164);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 20));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_164));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__exprn_aux__Reason_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval0_165 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_166;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_165, &ll_backend__exprn_aux__Rval_166, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 21));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_166));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Reason_75));
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__exprn_aux__Lval0_167 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_168;
              void MR_CALL (* ll_backend__exprn_aux__func_20)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv21_Lval_168;

              {
                ll_backend__exprn_aux__func_20(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_167)), &ll_backend__exprn_aux__conv21_Lval_168, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_168 = ((MR_Word) ll_backend__exprn_aux__conv21_Lval_168);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 22));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_168));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__exprn_aux__Rval0_169 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval_170;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval0_169, &ll_backend__exprn_aux__Rval_170, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 23));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval_170));
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__exprn_aux__TypeCtorInfo_196_196;
              MR_Word ll_backend__exprn_aux__Decls_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Components0_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__MayCallMercury_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__MaybeLabel1_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 4)));
              MR_Word ll_backend__exprn_aux__MaybeLabel2_80 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 5)));
              MR_Word ll_backend__exprn_aux__MaybeLabel3_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 6)));
              MR_Word ll_backend__exprn_aux__MaybeLabel4_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 7)));
              MR_Word ll_backend__exprn_aux__MaybeLabel5_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 8)));
              MR_Word ll_backend__exprn_aux__ReferStackSlot_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 9)));
              MR_Word ll_backend__exprn_aux__MayDupl_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 10)));
              MR_Word ll_backend__exprn_aux__Components_86;
              MR_Word ll_backend__exprn_aux__V_108_108;

              {
                ll_backend__exprn_aux__V_108_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[2]));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 1) = ((MR_Box) (ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0_2));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 3) = ((MR_Box) (ll_backend__exprn_aux__TypeInfo_for_T_185));
                MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_108_108, 4) = ((MR_Box) (ll_backend__exprn_aux__Transform_6));
              }
              ll_backend__exprn_aux__TypeCtorInfo_196_196 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_foreign_proc_component_0;
              {
                mercury__list__map_foldl_5_p_0(ll_backend__exprn_aux__TypeCtorInfo_196_196, ll_backend__exprn_aux__TypeCtorInfo_196_196, ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__V_108_108, ll_backend__exprn_aux__Components0_77, &ll_backend__exprn_aux__Components_86, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 11 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 27));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Decls_76));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Components_86));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__MayCallMercury_78));
                MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel1_79));
                MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel2_80));
                MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel3_81));
                MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel4_82));
                MR_hl_field(MR_mktag(3), base, 8) = ((MR_Box) (ll_backend__exprn_aux__MaybeLabel5_83));
                MR_hl_field(MR_mktag(3), base, 9) = ((MR_Box) (ll_backend__exprn_aux__ReferStackSlot_84));
                MR_hl_field(MR_mktag(3), base, 10) = ((MR_Box) (ll_backend__exprn_aux__MayDupl_85));
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer ll_backend__exprn_aux__BranchCount_87 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Integer ll_backend__exprn_aux__ConjId_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__Lval0_171 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_172;
              void MR_CALL (* ll_backend__exprn_aux__func_8)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv9_Lval_172;

              {
                ll_backend__exprn_aux__func_8(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_171)), &ll_backend__exprn_aux__conv9_Lval_172, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_172 = ((MR_Word) ll_backend__exprn_aux__conv9_Lval_172);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 28));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_172));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__BranchCount_87));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__ConjId_88));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__exprn_aux__Label_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Lval0_173 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval_174;
              void MR_CALL (* ll_backend__exprn_aux__func_10)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv11_Lval_174;

              {
                ll_backend__exprn_aux__func_10(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_173)), &ll_backend__exprn_aux__conv11_Lval_174, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_174 = ((MR_Word) ll_backend__exprn_aux__conv11_Lval_174);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 30));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Lval_174));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Label_89));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__exprn_aux__NumSlots_90 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Lval0_175 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Lval_176;
              void MR_CALL (* ll_backend__exprn_aux__func_14)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              MR_Box ll_backend__exprn_aux__conv15_Lval_176;

              {
                ll_backend__exprn_aux__func_14(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_175)), &ll_backend__exprn_aux__conv15_Lval_176, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__Lval_176 = ((MR_Word) ll_backend__exprn_aux__conv15_Lval_176);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 31));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__NumSlots_90));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Lval_176));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__exprn_aux__LCRval0_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__LCSLval0_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__LCRval_93;
              MR_Word ll_backend__exprn_aux__LCSLval_94;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_103_103;
              MR_Word ll_backend__exprn_aux__Label_177 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              void MR_CALL (* ll_backend__exprn_aux__func_16)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
              MR_Box ll_backend__exprn_aux__conv17_LCSLval_94;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCRval0_91, &ll_backend__exprn_aux__LCRval_93, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_103_103);
              }
              ll_backend__exprn_aux__func_16 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
              {
                ll_backend__exprn_aux__func_16(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__LCSLval0_92)), &ll_backend__exprn_aux__conv17_LCSLval_94, ll_backend__exprn_aux__STATE_VARIABLE_Acc_103_103, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              ll_backend__exprn_aux__LCSLval_94 = ((MR_Word) ll_backend__exprn_aux__conv17_LCSLval_94);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 32));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__LCRval_93));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LCSLval_94));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Label_177));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__exprn_aux__LCSRval0_95 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__LCSRval_96;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_101_101;
              MR_Word ll_backend__exprn_aux__Label_178 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__LCRval0_179 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__LCRval_180;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCRval0_179, &ll_backend__exprn_aux__LCRval_180, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_101_101);
              }
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCSRval0_95, &ll_backend__exprn_aux__LCSRval_96, ll_backend__exprn_aux__STATE_VARIABLE_Acc_101_101, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 33));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__LCRval_180));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LCSRval_96));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Label_178));
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_99_99;
              MR_Word ll_backend__exprn_aux__LCRval0_181 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__LCRval_182;
              MR_Word ll_backend__exprn_aux__LCSRval0_183 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Uinstr0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__LCSRval_184;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCRval0_181, &ll_backend__exprn_aux__LCRval_182, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_97, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_99_99);
              }
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_185, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__LCSRval0_183, &ll_backend__exprn_aux__LCSRval_184, ll_backend__exprn_aux__STATE_VARIABLE_Acc_99_99, ll_backend__exprn_aux__STATE_VARIABLE_Acc_98);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Uinstr_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 34));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__LCRval_182));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__LCSRval_184));
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__vars_in_mem_ref_2_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__exprn_aux__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

          {
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_3, ll_backend__exprn_aux__HeadVar__2_2);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__exprn_aux__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

          {
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_5, ll_backend__exprn_aux__HeadVar__2_2);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__exprn_aux__BaseRval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__FieldRval_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word ll_backend__exprn_aux__BaseVars_10;
          MR_Word ll_backend__exprn_aux__FieldVars_11;
          MR_Word ll_backend__exprn_aux___Tag_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

          {
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__BaseRval_7, &ll_backend__exprn_aux__BaseVars_10);
          }
          {
            ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__FieldRval_9, &ll_backend__exprn_aux__FieldVars_11);
          }
          {
            *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__exprn_aux_scalar_common_1[0], ll_backend__exprn_aux__BaseVars_10, ll_backend__exprn_aux__FieldVars_11);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__exprn_aux__lval_to_rval_1_f_0(
  MR_Word ll_backend__exprn_aux__Lval_3)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__HeadVar__2_2;

    {
      ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_3));
    }
    return ll_backend__exprn_aux__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__exprn_aux__var_lval_to_rval_2_f_0(
  MR_Word ll_backend__exprn_aux___Var_4,
  MR_Word ll_backend__exprn_aux__Lval_5)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__HeadVar__3_3;

    {
      ll_backend__exprn_aux__HeadVar__3_3 = ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_118_97_114_95_108_118_97_108_95_116_111_95_114_118_97_108_95_95_91_49_93_95_48_2_f_0(ll_backend__exprn_aux__Lval_5);
    }
    return ll_backend__exprn_aux__HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__exprn_aux__lval_addrs_3_p_0(
  MR_Word ll_backend__exprn_aux__Lval_4,
  MR_Word * ll_backend__exprn_aux__CodeAddrs_5,
  MR_Word * ll_backend__exprn_aux__DataIds_6)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Lval_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 3:
          case (MR_Integer) 11:
          case (MR_Integer) 12:
            {
              *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__exprn_aux__Rval_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_32, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__exprn_aux__Rval_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_31, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__exprn_aux__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_30, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__exprn_aux__Rval_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_29, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__exprn_aux__Rval_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_28, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__exprn_aux__SubRvalA_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__SubRvalB_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__CodeAddrsA_17;
              MR_Word ll_backend__exprn_aux__DataIdsA_18;
              MR_Word ll_backend__exprn_aux__CodeAddrsB_19;
              MR_Word ll_backend__exprn_aux__DataIdsB_20;
              MR_Word ll_backend__exprn_aux___Tag_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__SubRvalA_15, &ll_backend__exprn_aux__CodeAddrsA_17, &ll_backend__exprn_aux__DataIdsA_18);
              }
              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__SubRvalB_16, &ll_backend__exprn_aux__CodeAddrsB_19, &ll_backend__exprn_aux__DataIdsB_20);
              }
              {
                *ll_backend__exprn_aux__CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__CodeAddrsA_17, ll_backend__exprn_aux__CodeAddrsB_19);
              }
              {
                *ll_backend__exprn_aux__DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__DataIdsA_18, ll_backend__exprn_aux__DataIdsB_20);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__exprn_aux__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Lval_4, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_13, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__rval_addrs_3_p_0(
  MR_Word ll_backend__exprn_aux__Rval_4,
  MR_Word * ll_backend__exprn_aux__CodeAddrs_5,
  MR_Word * ll_backend__exprn_aux__DataIds_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__exprn_aux__succeeded;

        switch (MR_tag((MR_Word) ll_backend__exprn_aux__Rval_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__exprn_aux__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval_4, (MR_Integer) 0)));

              {
                ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__exprn_aux__Lval_7, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__exprn_aux__SubRval_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval_4, (MR_Integer) 1)));
              MR_Integer ll_backend__exprn_aux___Tag_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval_4, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__exprn_aux__Rval__tmp_copy_4 = ll_backend__exprn_aux__SubRval_10;

                ll_backend__exprn_aux__Rval_4 = ll_backend__exprn_aux__Rval__tmp_copy_4;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__exprn_aux__Const_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 1)));
                  MR_Word ll_backend__exprn_aux__CodeAddress_12;

                  ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_11, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (ll_backend__exprn_aux__succeeded)
                    {
                      ll_backend__exprn_aux__CodeAddress_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_11, (MR_Integer) 1)));
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        *ll_backend__exprn_aux__CodeAddrs_5 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__CodeAddress_12));
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                      }
                      *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    }
                  else
                    {
                      MR_Word ll_backend__exprn_aux__DataId_13;
                      MR_Word ll_backend__exprn_aux__V_14_14;

                      ll_backend__exprn_aux__succeeded = ((((MR_tag((MR_Word) ll_backend__exprn_aux__Const_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_11, (MR_Integer) 0)))) == (MR_Integer) 4)));
                      if (ll_backend__exprn_aux__succeeded)
                        {
                          ll_backend__exprn_aux__DataId_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_11, (MR_Integer) 1)));
                          ll_backend__exprn_aux__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_11, (MR_Integer) 2)));
                          *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                            *ll_backend__exprn_aux__DataIds_6 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__DataId_13));
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          }
                        }
                      else
                        {
                          *ll_backend__exprn_aux__CodeAddrs_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          *ll_backend__exprn_aux__DataIds_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__exprn_aux__SubRvalA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__exprn_aux___Unop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__exprn_aux__Rval__tmp_copy_4 = ll_backend__exprn_aux__SubRvalA_16;

                    ll_backend__exprn_aux__Rval_4 = ll_backend__exprn_aux__Rval__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__exprn_aux__SubRvalB_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 3)));
                  MR_Word ll_backend__exprn_aux__CodeAddrsA_19;
                  MR_Word ll_backend__exprn_aux__DataIdsA_20;
                  MR_Word ll_backend__exprn_aux__CodeAddrsB_21;
                  MR_Word ll_backend__exprn_aux__DataIdsB_22;
                  MR_Word ll_backend__exprn_aux__SubRvalA_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 2)));
                  MR_Word ll_backend__exprn_aux___Binop_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 1)));

                  {
                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__SubRvalA_27, &ll_backend__exprn_aux__CodeAddrsA_19, &ll_backend__exprn_aux__DataIdsA_20);
                  }
                  {
                    ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__SubRvalB_18, &ll_backend__exprn_aux__CodeAddrsB_21, &ll_backend__exprn_aux__DataIdsB_22);
                  }
                  {
                    *ll_backend__exprn_aux__CodeAddrs_5 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__CodeAddrsA_19, ll_backend__exprn_aux__CodeAddrsB_21);
                  }
                  {
                    *ll_backend__exprn_aux__DataIds_6 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__DataIdsA_20, ll_backend__exprn_aux__DataIdsB_22);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__exprn_aux__SubRval_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval_4, (MR_Integer) 1)));

                  {
                    ll_backend__exprn_aux__mem_ref_addrs_3_p_0(ll_backend__exprn_aux__SubRval_28, ll_backend__exprn_aux__CodeAddrs_5, ll_backend__exprn_aux__DataIds_6);
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

void MR_CALL 
ll_backend__exprn_aux__lval_list_addrs_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__exprn_aux__Lval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__exprn_aux__Lvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__exprn_aux__HeadCodeAddrs_8;
        MR_Word ll_backend__exprn_aux__HeadDataIds_9;
        MR_Word ll_backend__exprn_aux__TailCodeAddrs_10;
        MR_Word ll_backend__exprn_aux__TailDataIds_11;

        {
          ll_backend__exprn_aux__lval_addrs_3_p_0(ll_backend__exprn_aux__Lval_4, &ll_backend__exprn_aux__HeadCodeAddrs_8, &ll_backend__exprn_aux__HeadDataIds_9);
        }
        {
          ll_backend__exprn_aux__lval_list_addrs_3_p_0(ll_backend__exprn_aux__Lvals_5, &ll_backend__exprn_aux__TailCodeAddrs_10, &ll_backend__exprn_aux__TailDataIds_11);
        }
        {
          *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__HeadCodeAddrs_8, ll_backend__exprn_aux__TailCodeAddrs_10);
        }
        {
          *ll_backend__exprn_aux__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__HeadDataIds_9, ll_backend__exprn_aux__TailDataIds_11);
        }
      }
  }
}

void MR_CALL 
ll_backend__exprn_aux__rval_list_addrs_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2,
  MR_Word * ll_backend__exprn_aux__HeadVar__3_3)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__exprn_aux__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__exprn_aux__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__exprn_aux__Rvals_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__exprn_aux__HeadCodeAddrs_8;
        MR_Word ll_backend__exprn_aux__HeadDataIds_9;
        MR_Word ll_backend__exprn_aux__TailCodeAddrs_10;
        MR_Word ll_backend__exprn_aux__TailDataIds_11;

        {
          ll_backend__exprn_aux__rval_addrs_3_p_0(ll_backend__exprn_aux__Rval_4, &ll_backend__exprn_aux__HeadCodeAddrs_8, &ll_backend__exprn_aux__HeadDataIds_9);
        }
        {
          ll_backend__exprn_aux__rval_list_addrs_3_p_0(ll_backend__exprn_aux__Rvals_5, &ll_backend__exprn_aux__TailCodeAddrs_10, &ll_backend__exprn_aux__TailDataIds_11);
        }
        {
          *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_code_addr_0, ll_backend__exprn_aux__HeadCodeAddrs_8, ll_backend__exprn_aux__TailCodeAddrs_10);
        }
        {
          *ll_backend__exprn_aux__HeadVar__3_3 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_data_id_0, ll_backend__exprn_aux__HeadDataIds_9, ll_backend__exprn_aux__TailDataIds_11);
        }
      }
  }
}

void MR_CALL 
ll_backend__exprn_aux__simplify_rval_2_p_0(
  MR_Word ll_backend__exprn_aux__Rval0_3,
  MR_Word * ll_backend__exprn_aux__Rval_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__exprn_aux__succeeded;
        MR_Word ll_backend__exprn_aux__Rval1_5;

        {
          ll_backend__exprn_aux__succeeded = ll_backend__exprn_aux__simplify_rval_2_2_p_0(ll_backend__exprn_aux__Rval0_3, &ll_backend__exprn_aux__Rval1_5);
        }
        if (ll_backend__exprn_aux__succeeded)
          {
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__exprn_aux__Rval0__tmp_copy_3 = ll_backend__exprn_aux__Rval1_5;

              ll_backend__exprn_aux__Rval0_3 = ll_backend__exprn_aux__Rval0__tmp_copy_3;
            }
            continue;
          }
        else
          *ll_backend__exprn_aux__Rval_4 = ll_backend__exprn_aux__Rval0_3;
      }
      break;
    }
}

void MR_CALL 
ll_backend__exprn_aux__vars_in_rval_2_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__exprn_aux__succeeded;

        switch (MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__exprn_aux__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

              {
                ll_backend__exprn_aux__vars_in_lval_2_p_0(ll_backend__exprn_aux__Lval_3, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__exprn_aux__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Var_5));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__exprn_aux__Rval_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__exprn_aux__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rval_8;

                ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__exprn_aux__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__exprn_aux___Unop_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rval_13;

                    ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__exprn_aux__RvalA_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__exprn_aux__RvalB_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 3)));
                  MR_Word ll_backend__exprn_aux__VarsA_19;
                  MR_Word ll_backend__exprn_aux__VarsB_20;
                  MR_Word ll_backend__exprn_aux___Binop_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalA_16, &ll_backend__exprn_aux__VarsA_19);
                  }
                  {
                    ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalB_17, &ll_backend__exprn_aux__VarsB_20);
                  }
                  {
                    *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__exprn_aux_scalar_common_1[0], ll_backend__exprn_aux__VarsA_19, ll_backend__exprn_aux__VarsB_20);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__exprn_aux__MemRef_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__exprn_aux__vars_in_mem_ref_2_p_0(ll_backend__exprn_aux__MemRef_21, ll_backend__exprn_aux__HeadVar__2_2);
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

void MR_CALL 
ll_backend__exprn_aux__vars_in_lval_2_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word * ll_backend__exprn_aux__HeadVar__2_2)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__exprn_aux__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 5:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__exprn_aux__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_12, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__exprn_aux__Rval_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_18, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__exprn_aux__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_14, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__exprn_aux__Rval_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_16, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__exprn_aux__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_20, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__exprn_aux__RvalA_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__RvalB_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__exprn_aux__VarsA_26;
              MR_Word ll_backend__exprn_aux__VarsB_27;
              MR_Word ll_backend__exprn_aux___MaybeTag_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalA_23, &ll_backend__exprn_aux__VarsA_26);
              }
              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__RvalB_24, &ll_backend__exprn_aux__VarsB_27);
              }
              {
                *ll_backend__exprn_aux__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__exprn_aux_scalar_common_1[0], ll_backend__exprn_aux__VarsA_26, ll_backend__exprn_aux__VarsB_27);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__exprn_aux__Rval_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__exprn_aux__vars_in_rval_2_p_0(ll_backend__exprn_aux__Rval_28, ll_backend__exprn_aux__HeadVar__2_2);
              }
            }
            break;
          case (MR_Integer) 11:
            *ll_backend__exprn_aux__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__exprn_aux__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Var_31));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_rvals_in_rval_3_p_0(
  MR_Word ll_backend__exprn_aux__RvalPairs_4,
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_8,
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_9)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__RvalUniqPairs_6;
    MR_Word ll_backend__exprn_aux__UniqRvalPairs_7;
    MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_11_11;

    {
      ll_backend__exprn_aux__substitute_rvals_in_rval_1_4_p_0(ll_backend__exprn_aux__RvalPairs_4, (MR_Integer) 0, &ll_backend__exprn_aux__RvalUniqPairs_6, &ll_backend__exprn_aux__UniqRvalPairs_7);
    }
    {
      ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(ll_backend__exprn_aux__RvalUniqPairs_6, ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_8, &ll_backend__exprn_aux__STATE_VARIABLE_Rval_11_11);
    }
    {
      ll_backend__exprn_aux__substitute_rvals_in_rval_2_3_p_0(ll_backend__exprn_aux__UniqRvalPairs_7, ll_backend__exprn_aux__STATE_VARIABLE_Rval_11_11, ll_backend__exprn_aux__STATE_VARIABLE_Rval_9);
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_vars_in_rval_3_p_0(
  MR_Word ll_backend__exprn_aux__HeadVar__1_1,
  MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2,
  MR_Word * ll_backend__exprn_aux__STATE_VARIABLE_Rval_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__exprn_aux__succeeded;

        if ((ll_backend__exprn_aux__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__exprn_aux__STATE_VARIABLE_Rval_3 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2;
        else
          {
            MR_Word ll_backend__exprn_aux__Var_7;
            MR_Word ll_backend__exprn_aux__Sub_8;
            MR_Word ll_backend__exprn_aux__Rest_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__exprn_aux__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__exprn_aux__V_14_14;
            MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_15_15;

            ll_backend__exprn_aux__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 0)));
            ll_backend__exprn_aux__Sub_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_13_13, (MR_Integer) 1)));
            {
              ll_backend__exprn_aux__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__V_14_14, 0) = ((MR_Box) (ll_backend__exprn_aux__Var_7));
            }
            {
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__V_14_14, ll_backend__exprn_aux__Sub_8, ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2, &ll_backend__exprn_aux__STATE_VARIABLE_Rval_15_15);
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__exprn_aux__HeadVar__1__tmp_copy_1 = ll_backend__exprn_aux__Rest_9;
              MR_Word ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_15_15;

              ll_backend__exprn_aux__STATE_VARIABLE_Rval_0_2 = ll_backend__exprn_aux__STATE_VARIABLE_Rval_0__tmp_copy_2;
              ll_backend__exprn_aux__HeadVar__1_1 = ll_backend__exprn_aux__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(
  MR_Word ll_backend__exprn_aux__OldRval_5,
  MR_Word ll_backend__exprn_aux__NewRval_6,
  MR_Word ll_backend__exprn_aux__Rval0_7,
  MR_Word * ll_backend__exprn_aux__Rval_8)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    {
      ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____rval_0_0(ll_backend__exprn_aux__Rval0_7, ll_backend__exprn_aux__OldRval_5);
    }
    if (ll_backend__exprn_aux__succeeded)
      *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__NewRval_6;
    else
      switch (MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ll_backend__exprn_aux__Lval0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
            MR_Word ll_backend__exprn_aux__Lval_10;

            {
              ll_backend__exprn_aux__substitute_rval_in_lval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Lval0_9, &ll_backend__exprn_aux__Lval_10);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *ll_backend__exprn_aux__Rval_8 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_10));
            }
          }
          break;
        case (MR_Integer) 1:
          *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ll_backend__exprn_aux__Tag_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
            MR_Word ll_backend__exprn_aux__Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
            MR_Word ll_backend__exprn_aux__Rval2_14;

            {
              ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_13, &ll_backend__exprn_aux__Rval2_14);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__exprn_aux__Rval_8 = base;
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Tag_12));
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_14));
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
              break;
            case (MR_Integer) 1:
              *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
              break;
            case (MR_Integer) 2:
              {
                MR_Word ll_backend__exprn_aux__Unop_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
                MR_Word ll_backend__exprn_aux__Rval1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
                MR_Word ll_backend__exprn_aux__Rval2_24;

                {
                  ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_23, &ll_backend__exprn_aux__Rval2_24);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__exprn_aux__Rval_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Unop_17));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_24));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word ll_backend__exprn_aux__Binop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
                MR_Word ll_backend__exprn_aux__Rval3_19;
                MR_Word ll_backend__exprn_aux__Rval4_20;
                MR_Word ll_backend__exprn_aux__Rval1_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
                MR_Word ll_backend__exprn_aux__Rval2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 3)));

                {
                  ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval1_25, &ll_backend__exprn_aux__Rval3_19);
                }
                {
                  ll_backend__exprn_aux__substitute_rval_in_rval_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__Rval2_26, &ll_backend__exprn_aux__Rval4_20);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__exprn_aux__Rval_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Binop_18));
                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_19));
                  MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_20));
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word ll_backend__exprn_aux__MemRef1_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
                MR_Word ll_backend__exprn_aux__MemRef2_22;

                {
                  ll_backend__exprn_aux__substitute_rval_in_mem_ref_4_p_0(ll_backend__exprn_aux__OldRval_5, ll_backend__exprn_aux__NewRval_6, ll_backend__exprn_aux__MemRef1_21, &ll_backend__exprn_aux__MemRef2_22);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *ll_backend__exprn_aux__Rval_8 = base;
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MemRef2_22));
                }
              }
              break;
          }
          break;
      }
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_rval_4_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_5,
  MR_Word ll_backend__exprn_aux__NewLval_6,
  MR_Word ll_backend__exprn_aux__Rval0_7,
  MR_Word * ll_backend__exprn_aux__Rval_8)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Integer ll_backend__exprn_aux___SubstCount_9;

    {
      ll_backend__exprn_aux__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_116_114_97_110_115_102_111_114_109_95_108_118_97_108_95_105_110_95_114_118_97_108_95_95_104_111_49_95_95_91_51_93_95_48_5_p_0(ll_backend__exprn_aux__OldLval_5, ll_backend__exprn_aux__NewLval_6, ll_backend__exprn_aux__Rval0_7, ll_backend__exprn_aux__Rval_8, (MR_Integer) 0, &ll_backend__exprn_aux___SubstCount_9);
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_lval_4_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_5,
  MR_Word ll_backend__exprn_aux__NewLval_6,
  MR_Word ll_backend__exprn_aux__Lval0_7,
  MR_Word * ll_backend__exprn_aux__Lval_8)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    {
      ll_backend__exprn_aux__succeeded = ll_backend__llds____Unify____lval_0_0(ll_backend__exprn_aux__Lval0_7, ll_backend__exprn_aux__OldLval_5);
    }
    if (ll_backend__exprn_aux__succeeded)
      {
        *ll_backend__exprn_aux__Lval_8 = ll_backend__exprn_aux__NewLval_6;
      }
    else
      {
        MR_Integer ll_backend__exprn_aux___SubstCount_22;

        {
          ll_backend__exprn_aux__substitute_lval_in_lval_count_2_6_p_0(ll_backend__exprn_aux__OldLval_5, ll_backend__exprn_aux__NewLval_6, ll_backend__exprn_aux__Lval0_7, ll_backend__exprn_aux__Lval_8, (MR_Integer) 0, &ll_backend__exprn_aux___SubstCount_22);
        }
      }
  }
}

static void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1(
  MR_Box ll_backend__exprn_aux__closure_arg,
  MR_Box ll_backend__exprn_aux__wrapper_arg_1,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_2,
  MR_Box ll_backend__exprn_aux__wrapper_arg_3,
  MR_Box * ll_backend__exprn_aux__wrapper_arg_4)
{
  {
    MR_Box ll_backend__exprn_aux__closure = ll_backend__exprn_aux__closure_arg;
    MR_Word ll_backend__exprn_aux__conv1_Lval_10;
    MR_Integer ll_backend__exprn_aux__conv0_STATE_VARIABLE_N_13;

    {
      ll_backend__exprn_aux__substitute_lval_in_lval_count_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__closure, (MR_Integer) 4))), ((MR_Word) ll_backend__exprn_aux__wrapper_arg_1), &ll_backend__exprn_aux__conv1_Lval_10, ((MR_Integer) ll_backend__exprn_aux__wrapper_arg_3), &ll_backend__exprn_aux__conv0_STATE_VARIABLE_N_13);
    }
    *ll_backend__exprn_aux__wrapper_arg_2 = ((MR_Box) (ll_backend__exprn_aux__conv1_Lval_10));
    *ll_backend__exprn_aux__wrapper_arg_4 = ((MR_Box) (ll_backend__exprn_aux__conv0_STATE_VARIABLE_N_13));
  }
}

void MR_CALL 
ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0(
  MR_Word ll_backend__exprn_aux__OldLval_7,
  MR_Word ll_backend__exprn_aux__NewLval_8,
  MR_Word ll_backend__exprn_aux__Instr0_9,
  MR_Word * ll_backend__exprn_aux__Instr_10,
  MR_Integer ll_backend__exprn_aux__STATE_VARIABLE_N_0_12,
  MR_Integer * ll_backend__exprn_aux__STATE_VARIABLE_N_13)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__V_14_14;
    MR_Word ll_backend__exprn_aux__Uinstr0_27;
    MR_String ll_backend__exprn_aux__Comment_28;
    MR_Word ll_backend__exprn_aux__Uinstr_29;
    MR_Box ll_backend__exprn_aux__conv2_STATE_VARIABLE_N_13;

    {
      ll_backend__exprn_aux__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 0) = ((MR_Box) (&ll_backend__exprn_aux_scalar_common_2[0]));
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 1) = ((MR_Box) (ll_backend__exprn_aux__substitute_lval_in_instr_6_p_0_1));
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 3) = ((MR_Box) (ll_backend__exprn_aux__OldLval_7));
      MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__V_14_14, 4) = ((MR_Box) (ll_backend__exprn_aux__NewLval_8));
    }
    ll_backend__exprn_aux__Uinstr0_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_9, (MR_Integer) 0)));
    ll_backend__exprn_aux__Comment_28 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_9, (MR_Integer) 1)));
    {
      ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ll_backend__exprn_aux__V_14_14, ll_backend__exprn_aux__Uinstr0_27, &ll_backend__exprn_aux__Uinstr_29, ((MR_Box) (ll_backend__exprn_aux__STATE_VARIABLE_N_0_12)), &ll_backend__exprn_aux__conv2_STATE_VARIABLE_N_13);
    }
    *ll_backend__exprn_aux__STATE_VARIABLE_N_13 = ((MR_Integer) ll_backend__exprn_aux__conv2_STATE_VARIABLE_N_13);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__exprn_aux__Instr_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Uinstr_29));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Comment_28));
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_36,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Rval0_7,
  MR_Word * ll_backend__exprn_aux__Rval_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_25)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Rval0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__exprn_aux__Lval0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Lval_11;
          void MR_CALL (* ll_backend__exprn_aux__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Transform_6, (MR_Integer) 1)));
          MR_Box ll_backend__exprn_aux__conv1_Lval_11;

          {
            ll_backend__exprn_aux__func_0(((MR_Box) ll_backend__exprn_aux__Transform_6), ((MR_Box) (ll_backend__exprn_aux__Lval0_10)), &ll_backend__exprn_aux__conv1_Lval_11, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
          ll_backend__exprn_aux__Lval_11 = ((MR_Word) ll_backend__exprn_aux__conv1_Lval_11);
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *ll_backend__exprn_aux__Rval_8 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Lval_11));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
          *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__exprn_aux__Tag_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)));
          MR_Word ll_backend__exprn_aux__Rval1_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
          MR_Word ll_backend__exprn_aux__Rval2_15;

          {
            ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval1_14, &ll_backend__exprn_aux__Rval2_15, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *ll_backend__exprn_aux__Rval_8 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Tag_13));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Rval2_15));
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
          case (MR_Integer) 1:
            {
              *ll_backend__exprn_aux__Rval_8 = ll_backend__exprn_aux__Rval0_7;
              *ll_backend__exprn_aux__STATE_VARIABLE_Acc_25 = ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__exprn_aux__Unop_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval1_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval2_33;

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval1_32, &ll_backend__exprn_aux__Rval2_33, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Unop_18));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval2_33));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__exprn_aux__Binop_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__Rval3_20;
              MR_Word ll_backend__exprn_aux__Rval4_21;
              MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27;
              MR_Word ll_backend__exprn_aux__Rval1_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 2)));
              MR_Word ll_backend__exprn_aux__Rval2_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 3)));

              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval1_34, &ll_backend__exprn_aux__Rval3_20, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, &ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27);
              }
              {
                ll_backend__exprn_aux__transform_lval_in_rval_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Rval2_35, &ll_backend__exprn_aux__Rval4_21, ll_backend__exprn_aux__STATE_VARIABLE_Acc_27_27, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Binop_19));
                MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__exprn_aux__Rval3_20));
                MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (ll_backend__exprn_aux__Rval4_21));
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__exprn_aux__MemRef0_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Rval0_7, (MR_Integer) 1)));
              MR_Word ll_backend__exprn_aux__MemRef_23;

              {
                ll_backend__exprn_aux__transform_lval_in_mem_ref_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_36, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__MemRef0_22, &ll_backend__exprn_aux__MemRef_23, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_24, ll_backend__exprn_aux__STATE_VARIABLE_Acc_25);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__exprn_aux__Rval_8 = base;
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (ll_backend__exprn_aux__MemRef_23));
              }
            }
            break;
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__transform_lval_in_instr_5_p_0(
  MR_Word ll_backend__exprn_aux__TypeInfo_for_T_16,
  MR_Word ll_backend__exprn_aux__Transform_6,
  MR_Word ll_backend__exprn_aux__Instr0_7,
  MR_Word * ll_backend__exprn_aux__Instr_8,
  MR_Box ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_13,
  MR_Box * ll_backend__exprn_aux__STATE_VARIABLE_Acc_14)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;
    MR_Word ll_backend__exprn_aux__Uinstr0_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_7, (MR_Integer) 0)));
    MR_String ll_backend__exprn_aux__Comment_11 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__Instr0_7, (MR_Integer) 1)));
    MR_Word ll_backend__exprn_aux__Uinstr_12;

    {
      ll_backend__exprn_aux__transform_lval_in_uinstr_5_p_0(ll_backend__exprn_aux__TypeInfo_for_T_16, ll_backend__exprn_aux__Transform_6, ll_backend__exprn_aux__Uinstr0_10, &ll_backend__exprn_aux__Uinstr_12, ll_backend__exprn_aux__STATE_VARIABLE_Acc_0_13, ll_backend__exprn_aux__STATE_VARIABLE_Acc_14);
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *ll_backend__exprn_aux__Instr_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (ll_backend__exprn_aux__Uinstr_12));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (ll_backend__exprn_aux__Comment_11));
    }
  }
}

void MR_CALL 
ll_backend__exprn_aux__const_is_constant_3_p_0(
  MR_Word ll_backend__exprn_aux__Const_4,
  MR_Word ll_backend__exprn_aux__ExprnOpts_5,
  MR_Word * ll_backend__exprn_aux__IsConst_6)
{
  {
    MR_bool ll_backend__exprn_aux__succeeded;

    switch (MR_tag((MR_Word) ll_backend__exprn_aux__Const_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__exprn_aux__SGFloats_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_17_17 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_18_18 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_19_19 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_20_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
              MR_Word ll_backend__exprn_aux__V_23_23 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);

              switch (ll_backend__exprn_aux__SGFloats_15) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 0:
                  *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
          case (MR_Integer) 4:
            *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__exprn_aux__CodeAddr_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__exprn_aux__Const_4, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) ll_backend__exprn_aux__CodeAddr_16)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__exprn_aux__Label_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__CodeAddr_16, (MR_Integer) 0)));

                    if (((MR_tag((MR_Word) ll_backend__exprn_aux__Label_27)) == (MR_mktag((MR_Integer) 1))))
                      {
                        MR_Word ll_backend__exprn_aux__EntryLabelType_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__Label_27, (MR_Integer) 0)));
                        MR_Word ll_backend__exprn_aux__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__exprn_aux__Label_27, (MR_Integer) 1)));

                        switch (ll_backend__exprn_aux__EntryLabelType_43) {
                          default: /*NOTREACHED*/ MR_assert(0);
                          case (MR_Integer) 0:
                            *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
                            break;
                          case (MR_Integer) 2:
                          case (MR_Integer) 1:
                            {
                              MR_Word ll_backend__exprn_aux__StaticCodeAddrs_45 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_48_48 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_49_49 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_50_50 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_51_51 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_52_52 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_53_53 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                              MR_Word ll_backend__exprn_aux__V_54_54 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

                              switch (ll_backend__exprn_aux__StaticCodeAddrs_45) {
                                default: /*NOTREACHED*/ MR_assert(0);
                                case (MR_Integer) 1:
                                  *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
                                  break;
                                case (MR_Integer) 0:
                                  *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
                                  break;
                              }
                            }
                            break;
                        }
                      }
                    else
                      *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__exprn_aux__StaticCodeAddrs_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 7)) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_33_33 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_34_34 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_35_35 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_36_36 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_37_37 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 5)) & (MR_Integer) 1);
                    MR_Word ll_backend__exprn_aux__V_39_39 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__exprn_aux__ExprnOpts_5, (MR_Integer) 0)))) >> (MR_Integer) 6)) & (MR_Integer) 1);

                    switch (ll_backend__exprn_aux__StaticCodeAddrs_29) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
                        break;
                      case (MR_Integer) 0:
                        *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 1;
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 3:
                  *ll_backend__exprn_aux__IsConst_6 = (MR_Integer) 0;
                  break;
              }
            }
            break;
        }
        break;
    }
  }
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
