/*
** Automatically generated from `code_util.m'
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


/* :- module ll_backend.code_util. */
/* :- implementation. */

/*
INIT mercury__ll_backend__code_util__init
ENDINIT
*/

#include "ll_backend.code_util.mih"


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
#include "backend_libs.proc_label.mih"
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




#line 142 "ll_backend.code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0;

#line 145 "ll_backend.code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

#line 148 "ll_backend.code_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_util__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 151 "ll_backend.code_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_util__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

#line 154 "ll_backend.code_util.c"
static MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0_10001(
#line 157 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_1,
#line 159 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_2);

#line 162 "ll_backend.code_util.c"
static void MR_CALL 
ll_backend__code_util____Compare____immed_0_0_10001(
#line 165 "ll_backend.code_util.c"
  MR_Box * ll_backend__code_util__wrapper_arg_1,
#line 167 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_2,
#line 169 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_3);

#line 625 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
#line 625 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1);

#line 615 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
#line 615 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1);

#line 578 "code_util.m"
static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
#line 578 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 578 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2,
#line 578 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__3_3);

#line 566 "code_util.m"
static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
#line 566 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 566 "code_util.m"
  MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_0_12,
#line 566 "code_util.m"
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Rvals_13,
#line 566 "code_util.m"
  MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_0_14,
#line 566 "code_util.m"
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Lvals_15);

#line 430 "code_util.m"
static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
#line 430 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 430 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2);

#line 415 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__lvals_in_mem_ref_1_f_0(
#line 415 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1);

#line 310 "code_util.m"
static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
#line 310 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 310 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2);

#line 300 "code_util.m"
static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
#line 300 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 300 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2);

#line 257 "code_util.m"
static void MR_CALL 
ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(
#line 257 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 257 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2);

#line 234 "code_util.m"
static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
#line 234 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 234 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
#line 234 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
#line 234 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
#line 234 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5);

#line 213 "code_util.m"
static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
#line 213 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 213 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
#line 213 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
#line 213 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
#line 213 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5);

#line 142 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(
#line 142 "code_util.m"
  MR_Word ll_backend__code_util__RttiProcLabel_4,
#line 142 "code_util.m"
  MR_Word ll_backend__code_util__Immed_5);

#line 563 "code_util.m"
static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__closure_arg,
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__wrapper_arg_1,
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__wrapper_arg_2,
#line 563 "code_util.m"
  MR_Box * ll_backend__code_util__wrapper_arg_3,
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__wrapper_arg_4,
#line 563 "code_util.m"
  MR_Box * ll_backend__code_util__wrapper_arg_5);


static /* final */ const MR_Box ll_backend__code_util_scalar_common_1[4][2];

static /* final */ const MR_Box ll_backend__code_util_scalar_common_2[2][3];

static /* final */ const MR_Box ll_backend__code_util_scalar_common_3[1][8];




static /* final */ const MR_Box ll_backend__code_util_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__term__term__type_ctor_info_var_1)),
    ((MR_Box) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&ll_backend__code_util_scalar_common_2[0]))
  },
};

static /* final */ const MR_Box ll_backend__code_util_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__code_util_scalar_common_3[0])),
    ((MR_Box) (ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__code_util_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0)),
    ((MR_Box) (&ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0))
  },
};



#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 377 "ll_backend.code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

#line 385 "ll_backend.code_util.c"
static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

#line 393 "ll_backend.code_util.c"
static const MR_FA_TypeInfo_Struct2 ll_backend__code_util__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 402 "ll_backend.code_util.c"
static const MR_FA_TypeInfo_Struct1 ll_backend__code_util__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_util__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

#line 410 "ll_backend.code_util.c"
const MR_TypeCtorInfo_Struct ll_backend__code_util__ll_backend__code_util__type_ctor_info_immed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__code_util____Unify____immed_0_0_10001)),
  ((MR_Box) (ll_backend__code_util____Compare____immed_0_0_10001)),
  (MR_String) "ll_backend.code_util",
  (MR_String) "immed",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &ll_backend__code_util__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 431 "ll_backend.code_util.c"
static MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0_10001(
#line 434 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_1,
#line 436 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_2)
#line 438 "ll_backend.code_util.c"
{
#line 440 "ll_backend.code_util.c"
  {
#line 442 "ll_backend.code_util.c"
    MR_bool ll_backend__code_util__succeeded;

#line 445 "ll_backend.code_util.c"
    {
#line 447 "ll_backend.code_util.c"
      ll_backend__code_util__succeeded = ll_backend__code_util____Unify____immed_0_0(((MR_Word) ll_backend__code_util__wrapper_arg_1), ((MR_Word) ll_backend__code_util__wrapper_arg_2));
    }
#line 450 "ll_backend.code_util.c"
    return ll_backend__code_util__succeeded;
#line 452 "ll_backend.code_util.c"
  }
#line 454 "ll_backend.code_util.c"
}

#line 457 "ll_backend.code_util.c"
static void MR_CALL 
ll_backend__code_util____Compare____immed_0_0_10001(
#line 460 "ll_backend.code_util.c"
  MR_Box * ll_backend__code_util__wrapper_arg_1,
#line 462 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_2,
#line 464 "ll_backend.code_util.c"
  MR_Box ll_backend__code_util__wrapper_arg_3)
#line 466 "ll_backend.code_util.c"
{
#line 468 "ll_backend.code_util.c"
  {
#line 470 "ll_backend.code_util.c"
    MR_Word ll_backend__code_util__conv0_HeadVar__1_1;

#line 473 "ll_backend.code_util.c"
    {
#line 475 "ll_backend.code_util.c"
      ll_backend__code_util____Compare____immed_0_0(&ll_backend__code_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_util__wrapper_arg_2), ((MR_Word) ll_backend__code_util__wrapper_arg_3));
    }
#line 478 "ll_backend.code_util.c"
    *ll_backend__code_util__wrapper_arg_1 = ((MR_Box) (ll_backend__code_util__conv0_HeadVar__1_1));
#line 480 "ll_backend.code_util.c"
  }
#line 482 "ll_backend.code_util.c"
}

#line 44 "code_util.m"
void MR_CALL 
ll_backend__code_util____Compare____immed_0_0(
#line 44 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__1_1,
#line 44 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__2_2,
#line 44 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__3_3)
#line 44 "code_util.m"
{
#line 44 "code_util.m"
  {
#line 44 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 44 "code_util.m"
    MR_Word ll_backend__code_util__Cast_HeadVar1_4 = ll_backend__code_util__HeadVar__2_2;
#line 44 "code_util.m"
    MR_Word ll_backend__code_util__Cast_HeadVar2_5 = ll_backend__code_util__HeadVar__3_3;

#line 44 "code_util.m"
    {
#line 44 "code_util.m"
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[3], ll_backend__code_util__HeadVar__1_1, ((MR_Box) (ll_backend__code_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__code_util__Cast_HeadVar2_5)));
#line 44 "code_util.m"
      return;
    }
#line 44 "code_util.m"
  }
#line 44 "code_util.m"
}

#line 44 "code_util.m"
MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0(
#line 44 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 44 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__2_2)
#line 44 "code_util.m"
{
#line 44 "code_util.m"
  {
#line 44 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 44 "code_util.m"
    MR_Word ll_backend__code_util__Cast_HeadVar1_3 = ll_backend__code_util__HeadVar__1_1;
#line 44 "code_util.m"
    MR_Word ll_backend__code_util__Cast_HeadVar2_4 = ll_backend__code_util__HeadVar__2_2;

#line 44 "code_util.m"
    {
#line 44 "code_util.m"
      return ll_backend__code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[3], ((MR_Box) (ll_backend__code_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__code_util__Cast_HeadVar2_4)));
    }
#line 44 "code_util.m"
    return ll_backend__code_util__succeeded;
#line 44 "code_util.m"
  }
#line 44 "code_util.m"
}

#line 625 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
#line 625 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 625 "code_util.m"
{
#line 627 "code_util.m"
  {
#line 627 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 627 "code_util.m"
    MR_Word ll_backend__code_util__HeadVar__2_2;

#line 627 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 627 "code_util.m"
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "code_util.m"
    else
#line 628 "code_util.m"
      {
#line 628 "code_util.m"
        MR_Word ll_backend__code_util__Output_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 628 "code_util.m"
        MR_Word ll_backend__code_util__Outputs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "code_util.m"
        MR_Word ll_backend__code_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 0)));
#line 628 "code_util.m"
        MR_Word ll_backend__code_util__Lvals_6;
#line 629 "code_util.m"
        MR_Word ll_backend__code_util___VarType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 1)));
#line 629 "code_util.m"
        MR_Word ll_backend__code_util___IsDummy_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 2)));
#line 629 "code_util.m"
        MR_Word ll_backend__code_util___OrigType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 3)));
#line 629 "code_util.m"
        MR_String ll_backend__code_util___Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 4)));
#line 629 "code_util.m"
        MR_Word ll_backend__code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 5)));
#line 629 "code_util.m"
        MR_Word ll_backend__code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 6)));

#line 631 "code_util.m"
        {
#line 631 "code_util.m"
          ll_backend__code_util__Lvals_6 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(ll_backend__code_util__Outputs_4);
        }
#line 628 "code_util.m"
        {
#line 628 "code_util.m"
          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__code_util__Lval_5));
#line 628 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__code_util__Lvals_6));
#line 628 "code_util.m"
        }
#line 628 "code_util.m"
      }
#line 627 "code_util.m"
    return ll_backend__code_util__HeadVar__2_2;
#line 627 "code_util.m"
  }
#line 625 "code_util.m"
}

#line 615 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
#line 615 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 615 "code_util.m"
{
#line 617 "code_util.m"
  {
#line 617 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 617 "code_util.m"
    MR_Word ll_backend__code_util__HeadVar__2_2;

#line 617 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 617 "code_util.m"
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 617 "code_util.m"
    else
#line 618 "code_util.m"
      {
#line 618 "code_util.m"
        MR_Word ll_backend__code_util__Input_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 618 "code_util.m"
        MR_Word ll_backend__code_util__Inputs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "code_util.m"
        MR_Word ll_backend__code_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 4)));
#line 618 "code_util.m"
        MR_Word ll_backend__code_util__Rvals_6;
#line 619 "code_util.m"
        MR_String ll_backend__code_util___Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 0)));
#line 619 "code_util.m"
        MR_Word ll_backend__code_util___VarType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 1)));
#line 619 "code_util.m"
        MR_Word ll_backend__code_util___IsDummy_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 2)));
#line 619 "code_util.m"
        MR_Word ll_backend__code_util___OrigType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 3)));
#line 619 "code_util.m"
        MR_Word ll_backend__code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 5)));
#line 619 "code_util.m"
        MR_Word ll_backend__code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 6)));

#line 621 "code_util.m"
        {
#line 621 "code_util.m"
          ll_backend__code_util__Rvals_6 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(ll_backend__code_util__Inputs_4);
        }
#line 618 "code_util.m"
        {
#line 618 "code_util.m"
          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__code_util__Rval_5));
#line 618 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__code_util__Rvals_6));
#line 618 "code_util.m"
        }
#line 618 "code_util.m"
      }
#line 617 "code_util.m"
    return ll_backend__code_util__HeadVar__2_2;
#line 617 "code_util.m"
  }
#line 615 "code_util.m"
}

#line 578 "code_util.m"
static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
#line 578 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 578 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2,
#line 578 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__3_3)
#line 578 "code_util.m"
{
#line 582 "code_util.m"
  {
#line 582 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;

#line 582 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 582 "code_util.m"
      {
#line 582 "code_util.m"
        *ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "code_util.m"
        *ll_backend__code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 582 "code_util.m"
      }
#line 582 "code_util.m"
    else
#line 584 "code_util.m"
      {
#line 584 "code_util.m"
        MR_Word ll_backend__code_util__Comp_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 584 "code_util.m"
        MR_Word ll_backend__code_util__Comps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "code_util.m"
        MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 584 "code_util.m"
        MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;

#line 585 "code_util.m"
        {
#line 585 "code_util.m"
          ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(ll_backend__code_util__Comps_5, &ll_backend__code_util__STATE_VARIABLE_Rvals_10_10, &ll_backend__code_util__STATE_VARIABLE_Lvals_11_11);
        }
#line 595 "code_util.m"
        if ((ll_backend__code_util__Comp_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 610 "code_util.m"
          {
#line 610 "code_util.m"
            *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
#line 610 "code_util.m"
            *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 610 "code_util.m"
          }
#line 595 "code_util.m"
        else
#line 595 "code_util.m"
          if (((MR_tag((MR_Word) ll_backend__code_util__Comp_4)) == (MR_mktag((MR_Integer) 1))))
#line 595 "code_util.m"
            {
#line 595 "code_util.m"
              MR_Word ll_backend__code_util__Inputs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Comp_4, (MR_Integer) 0)));
#line 595 "code_util.m"
              MR_Word ll_backend__code_util__NewRvals_17;

#line 596 "code_util.m"
              {
#line 596 "code_util.m"
                ll_backend__code_util__NewRvals_17 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(ll_backend__code_util__Inputs_14);
              }
#line 597 "code_util.m"
              {
#line 597 "code_util.m"
                mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__NewRvals_17, ll_backend__code_util__STATE_VARIABLE_Rvals_10_10, ll_backend__code_util__HeadVar__2_2);
              }
#line 595 "code_util.m"
              *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
#line 595 "code_util.m"
            }
#line 595 "code_util.m"
          else
#line 595 "code_util.m"
            if (((MR_tag((MR_Word) ll_backend__code_util__Comp_4)) == (MR_mktag((MR_Integer) 2))))
#line 599 "code_util.m"
              {
#line 599 "code_util.m"
                MR_Word ll_backend__code_util__Outputs_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__Comp_4, (MR_Integer) 0)));
#line 599 "code_util.m"
                MR_Word ll_backend__code_util__NewLvals_26;

#line 600 "code_util.m"
                {
#line 600 "code_util.m"
                  ll_backend__code_util__NewLvals_26 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(ll_backend__code_util__Outputs_23);
                }
#line 601 "code_util.m"
                {
#line 601 "code_util.m"
                  mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__NewLvals_26, ll_backend__code_util__STATE_VARIABLE_Lvals_11_11, ll_backend__code_util__HeadVar__3_3);
                }
#line 599 "code_util.m"
                *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 599 "code_util.m"
              }
#line 595 "code_util.m"
            else
#line 595 "code_util.m"
              if (((((MR_tag((MR_Word) ll_backend__code_util__Comp_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Comp_4, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 608 "code_util.m"
                {
#line 608 "code_util.m"
                  *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
#line 608 "code_util.m"
                  *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 608 "code_util.m"
                }
#line 595 "code_util.m"
              else
#line 595 "code_util.m"
                if (((((MR_tag((MR_Word) ll_backend__code_util__Comp_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Comp_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 606 "code_util.m"
                  {
#line 606 "code_util.m"
                    *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
#line 606 "code_util.m"
                    *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 606 "code_util.m"
                  }
#line 595 "code_util.m"
                else
#line 595 "code_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__code_util__Comp_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Comp_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 604 "code_util.m"
                    {
#line 604 "code_util.m"
                      *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
#line 604 "code_util.m"
                      *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 604 "code_util.m"
                    }
#line 595 "code_util.m"
                  else
#line 602 "code_util.m"
                    {
#line 602 "code_util.m"
                      *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
#line 602 "code_util.m"
                      *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
#line 602 "code_util.m"
                    }
#line 584 "code_util.m"
      }
#line 582 "code_util.m"
  }
#line 578 "code_util.m"
}

#line 566 "code_util.m"
static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
#line 566 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 566 "code_util.m"
  MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_0_12,
#line 566 "code_util.m"
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Rvals_13,
#line 566 "code_util.m"
  MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_0_14,
#line 566 "code_util.m"
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Lvals_15)
#line 566 "code_util.m"
{
#line 569 "code_util.m"
  {
#line 569 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 569 "code_util.m"
    MR_Word ll_backend__code_util__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 569 "code_util.m"
    MR_Word ll_backend__code_util__NewRvals_10;
#line 569 "code_util.m"
    MR_Word ll_backend__code_util__NewLvals_11;
#line 569 "code_util.m"
    MR_String ll_backend__code_util__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 570 "code_util.m"
    {
#line 570 "code_util.m"
      ll_backend__code_util__instr_rvals_and_lvals_3_p_0(ll_backend__code_util__Uinstr_6, &ll_backend__code_util__NewRvals_10, &ll_backend__code_util__NewLvals_11);
    }
#line 573 "code_util.m"
    {
#line 573 "code_util.m"
      mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__STATE_VARIABLE_Rvals_0_12, ll_backend__code_util__NewRvals_10, ll_backend__code_util__STATE_VARIABLE_Rvals_13);
    }
#line 574 "code_util.m"
    {
#line 574 "code_util.m"
      mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__STATE_VARIABLE_Lvals_0_14, ll_backend__code_util__NewLvals_11, ll_backend__code_util__STATE_VARIABLE_Lvals_15);
#line 574 "code_util.m"
      return;
    }
#line 569 "code_util.m"
  }
#line 566 "code_util.m"
}

#line 430 "code_util.m"
static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
#line 430 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 430 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2)
#line 430 "code_util.m"
{
#line 433 "code_util.m"
  {
#line 433 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;

#line 433 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 433 "code_util.m"
      *ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 433 "code_util.m"
    else
#line 434 "code_util.m"
      {
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__V_3;
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__Arg_4;
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__Rest0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__Loc_7;
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__Mode_8;
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__VarArgs0_10;
#line 434 "code_util.m"
        MR_Word ll_backend__code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 434 "code_util.m"
        ll_backend__code_util__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_11_11, (MR_Integer) 0)));
#line 434 "code_util.m"
        ll_backend__code_util__Arg_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_11_11, (MR_Integer) 1)));
#line 435 "code_util.m"
        ll_backend__code_util__Loc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Arg_4, (MR_Integer) 0)));
#line 435 "code_util.m"
        ll_backend__code_util__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Arg_4, (MR_Integer) 1)));
#line 446 "code_util.m"
        {
#line 446 "code_util.m"
          ll_backend__code_util__build_input_arg_list_2_2_p_0(ll_backend__code_util__Rest0_5, &ll_backend__code_util__VarArgs0_10);
        }
#line 440 "code_util.m"
        if ((ll_backend__code_util__Mode_8 == (MR_Integer) 0))
#line 437 "code_util.m"
          {
#line 437 "code_util.m"
            MR_Word ll_backend__code_util__Reg_9;
#line 437 "code_util.m"
            MR_Word ll_backend__code_util__V_12_12;
#line 437 "code_util.m"
            MR_Word ll_backend__code_util__RegType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Loc_7, (MR_Integer) 0)));
#line 437 "code_util.m"
            MR_Integer ll_backend__code_util__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Loc_7, (MR_Integer) 1)));

#line 206 "code_util.m"
            {
#line 206 "code_util.m"
              ll_backend__code_util__Reg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "code_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_util__Reg_9, 0) = ((MR_Box) (ll_backend__code_util__RegType_13));
#line 206 "code_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_util__Reg_9, 1) = ((MR_Box) (ll_backend__code_util__N_14));
#line 206 "code_util.m"
            }
#line 439 "code_util.m"
            {
#line 439 "code_util.m"
              ll_backend__code_util__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 439 "code_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__code_util__V_12_12, 0) = ((MR_Box) (ll_backend__code_util__V_3));
#line 439 "code_util.m"
              MR_hl_field(MR_mktag(0), ll_backend__code_util__V_12_12, 1) = ((MR_Box) (ll_backend__code_util__Reg_9));
#line 439 "code_util.m"
            }
#line 439 "code_util.m"
            {
#line 439 "code_util.m"
              MR_Word base;
#line 439 "code_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 439 "code_util.m"
              *ll_backend__code_util__HeadVar__2_2 = base;
#line 439 "code_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__V_12_12));
#line 439 "code_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__code_util__VarArgs0_10));
#line 439 "code_util.m"
            }
#line 437 "code_util.m"
          }
#line 440 "code_util.m"
        else
#line 444 "code_util.m"
          *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__VarArgs0_10;
#line 434 "code_util.m"
      }
#line 433 "code_util.m"
  }
#line 430 "code_util.m"
}

#line 415 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__lvals_in_mem_ref_1_f_0(
#line 415 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 415 "code_util.m"
{
#line 417 "code_util.m"
  {
#line 417 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 417 "code_util.m"
    MR_Word ll_backend__code_util__HeadVar__2_2;

#line 417 "code_util.m"
    if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 418 "code_util.m"
      {
#line 418 "code_util.m"
        MR_Word ll_backend__code_util__Rval_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 418 "code_util.m"
        {
#line 418 "code_util.m"
          return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_4);
        }
#line 418 "code_util.m"
      }
#line 417 "code_util.m"
    else
#line 417 "code_util.m"
      if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 419 "code_util.m"
        {
#line 419 "code_util.m"
          MR_Word ll_backend__code_util__Rval1_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "code_util.m"
          MR_Word ll_backend__code_util__Rval2_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 419 "code_util.m"
          MR_Word ll_backend__code_util__V_8_8;
#line 419 "code_util.m"
          MR_Word ll_backend__code_util__V_9_9;
#line 419 "code_util.m"
          MR_Word ll_backend__code_util__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 420 "code_util.m"
          {
#line 420 "code_util.m"
            ll_backend__code_util__V_8_8 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval1_5);
          }
#line 420 "code_util.m"
          {
#line 420 "code_util.m"
            ll_backend__code_util__V_9_9 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval2_7);
          }
#line 419 "code_util.m"
          {
#line 419 "code_util.m"
            ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__V_8_8, ll_backend__code_util__V_9_9);
          }
#line 419 "code_util.m"
        }
#line 417 "code_util.m"
      else
#line 417 "code_util.m"
        {
#line 417 "code_util.m"
          MR_Word ll_backend__code_util__Rval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 417 "code_util.m"
          {
#line 417 "code_util.m"
            return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_3);
          }
#line 417 "code_util.m"
        }
#line 417 "code_util.m"
    return ll_backend__code_util__HeadVar__2_2;
#line 417 "code_util.m"
  }
#line 415 "code_util.m"
}

#line 310 "code_util.m"
static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
#line 310 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 310 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2)
#line 310 "code_util.m"
{
#line 312 "code_util.m"
  while (MR_TRUE)
#line 312 "code_util.m"
    {
#line 312 "code_util.m"
      /* tailcall optimized into a loop */
#line 312 "code_util.m"
      {
#line 312 "code_util.m"
        MR_bool ll_backend__code_util__succeeded;

#line 312 "code_util.m"
        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 312 "code_util.m"
          *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
#line 312 "code_util.m"
        else
#line 313 "code_util.m"
          {
#line 313 "code_util.m"
            MR_Word ll_backend__code_util__Goal_5;
#line 313 "code_util.m"
            MR_Word ll_backend__code_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "code_util.m"
            MR_Word ll_backend__code_util__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "code_util.m"
            MR_Word ll_backend__code_util__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_8_8, (MR_Integer) 0)));
#line 313 "code_util.m"
            MR_Word ll_backend__code_util__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_8_8, (MR_Integer) 1)));
#line 314 "code_util.m"
            MR_Word ll_backend__code_util__V_10_10;
#line 314 "code_util.m"
            MR_Word ll_backend__code_util__GoalExpr_12;
#line 254 "code_util.m"
            MR_Word ll_backend__code_util___GoalInfo_13;

#line 313 "code_util.m"
            ll_backend__code_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_8_8, (MR_Integer) 2)));
#line 254 "code_util.m"
            ll_backend__code_util__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_5, (MR_Integer) 0)));
#line 254 "code_util.m"
            ll_backend__code_util___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_5, (MR_Integer) 1)));
#line 255 "code_util.m"
            {
#line 255 "code_util.m"
              ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(ll_backend__code_util__GoalExpr_12, &ll_backend__code_util__V_10_10);
            }
#line 314 "code_util.m"
            ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__V_10_10);
#line 316 "code_util.m"
            if (ll_backend__code_util__succeeded)
#line 315 "code_util.m"
              *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 316 "code_util.m"
            else
#line 317 "code_util.m"
              {
#line 317 "code_util.m"
                /* direct tailcall eliminated */
#line 317 "code_util.m"
                {
#line 317 "code_util.m"
                  MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__Cases_6;

#line 317 "code_util.m"
                  ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 317 "code_util.m"
                }
#line 317 "code_util.m"
                continue;
#line 317 "code_util.m"
              }
#line 313 "code_util.m"
          }
#line 312 "code_util.m"
      }
#line 312 "code_util.m"
      break;
#line 312 "code_util.m"
    }
#line 310 "code_util.m"
}

#line 300 "code_util.m"
static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
#line 300 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 300 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2)
#line 300 "code_util.m"
{
#line 302 "code_util.m"
  while (MR_TRUE)
#line 302 "code_util.m"
    {
#line 302 "code_util.m"
      /* tailcall optimized into a loop */
#line 302 "code_util.m"
      {
#line 302 "code_util.m"
        MR_bool ll_backend__code_util__succeeded;

#line 302 "code_util.m"
        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 302 "code_util.m"
          *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
#line 302 "code_util.m"
        else
#line 303 "code_util.m"
          {
#line 303 "code_util.m"
            MR_Word ll_backend__code_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 303 "code_util.m"
            MR_Word ll_backend__code_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 304 "code_util.m"
            MR_Word ll_backend__code_util__V_7_7;
#line 304 "code_util.m"
            MR_Word ll_backend__code_util__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_3, (MR_Integer) 0)));
#line 254 "code_util.m"
            MR_Word ll_backend__code_util___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_3, (MR_Integer) 1)));

#line 255 "code_util.m"
            {
#line 255 "code_util.m"
              ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(ll_backend__code_util__GoalExpr_9, &ll_backend__code_util__V_7_7);
            }
#line 304 "code_util.m"
            ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__V_7_7);
#line 306 "code_util.m"
            if (ll_backend__code_util__succeeded)
#line 305 "code_util.m"
              *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 306 "code_util.m"
            else
#line 307 "code_util.m"
              {
#line 307 "code_util.m"
                /* direct tailcall eliminated */
#line 307 "code_util.m"
                {
#line 307 "code_util.m"
                  MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__Goals_4;

#line 307 "code_util.m"
                  ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 307 "code_util.m"
                }
#line 307 "code_util.m"
                continue;
#line 307 "code_util.m"
              }
#line 303 "code_util.m"
          }
#line 302 "code_util.m"
      }
#line 302 "code_util.m"
      break;
#line 302 "code_util.m"
    }
#line 300 "code_util.m"
}

#line 257 "code_util.m"
static void MR_CALL 
ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(
#line 257 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 257 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2)
#line 257 "code_util.m"
{
#line 260 "code_util.m"
  while (MR_TRUE)
#line 260 "code_util.m"
    {
#line 260 "code_util.m"
      /* tailcall optimized into a loop */
#line 260 "code_util.m"
      {
#line 260 "code_util.m"
        MR_bool ll_backend__code_util__succeeded;

#line 260 "code_util.m"
        if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 280 "code_util.m"
          {
#line 280 "code_util.m"
            MR_Word ll_backend__code_util__Goal_32 = (MR_Word) MR_body(((MR_Word) ll_backend__code_util__HeadVar__1_1), (MR_Integer) 0);
#line 280 "code_util.m"
            MR_Word ll_backend__code_util__GoalExpr_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_32, (MR_Integer) 0)));
#line 254 "code_util.m"
            MR_Word ll_backend__code_util___GoalInfo_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_32, (MR_Integer) 1)));

#line 255 "code_util.m"
            /* direct tailcall eliminated */
#line 255 "code_util.m"
            {
#line 255 "code_util.m"
              MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__GoalExpr_67;

#line 255 "code_util.m"
              ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 255 "code_util.m"
            }
#line 255 "code_util.m"
            continue;
#line 280 "code_util.m"
          }
#line 260 "code_util.m"
        else
#line 260 "code_util.m"
          if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 261 "code_util.m"
            *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
#line 260 "code_util.m"
          else
#line 260 "code_util.m"
            if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 262 "code_util.m"
              *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
#line 260 "code_util.m"
            else
#line 260 "code_util.m"
              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 267 "code_util.m"
                *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 260 "code_util.m"
              else
#line 260 "code_util.m"
                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 282 "code_util.m"
                  {
#line 282 "code_util.m"
                    MR_Word ll_backend__code_util__Goals_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 282 "code_util.m"
                    MR_Word ll_backend__code_util___ConjType_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 283 "code_util.m"
                    {
#line 283 "code_util.m"
                      ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__Goals_35, ll_backend__code_util__HeadVar__2_2);
#line 283 "code_util.m"
                      return;
                    }
#line 282 "code_util.m"
                  }
#line 260 "code_util.m"
                else
#line 260 "code_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 284 "code_util.m"
                    {
#line 284 "code_util.m"
                      MR_Word ll_backend__code_util__Goals_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 285 "code_util.m"
                      {
#line 285 "code_util.m"
                        ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__Goals_37, ll_backend__code_util__HeadVar__2_2);
#line 285 "code_util.m"
                        return;
                      }
#line 284 "code_util.m"
                    }
#line 260 "code_util.m"
                  else
#line 260 "code_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 260 "code_util.m"
                      *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
#line 260 "code_util.m"
                    else
#line 260 "code_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 288 "code_util.m"
                        {
#line 288 "code_util.m"
                          MR_Word ll_backend__code_util__C_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 288 "code_util.m"
                          MR_Word ll_backend__code_util__T_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 288 "code_util.m"
                          MR_Word ll_backend__code_util__E_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
#line 288 "code_util.m"
                          MR_Word ll_backend__code_util___Vars_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 289 "code_util.m"
                          MR_Word ll_backend__code_util__V_55_55;
#line 289 "code_util.m"
                          MR_Word ll_backend__code_util__GoalExpr_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__C_44, (MR_Integer) 0)));
#line 254 "code_util.m"
                          MR_Word ll_backend__code_util___GoalInfo_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__C_44, (MR_Integer) 1)));

#line 255 "code_util.m"
                          {
#line 255 "code_util.m"
                            ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(ll_backend__code_util__GoalExpr_58, &ll_backend__code_util__V_55_55);
                          }
#line 289 "code_util.m"
                          ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__V_55_55);
#line 291 "code_util.m"
                          if (ll_backend__code_util__succeeded)
#line 290 "code_util.m"
                            *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 291 "code_util.m"
                          else
#line 293 "code_util.m"
                            {
#line 291 "code_util.m"
                              MR_Word ll_backend__code_util__V_56_56;
#line 291 "code_util.m"
                              MR_Word ll_backend__code_util__GoalExpr_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__T_45, (MR_Integer) 0)));
#line 254 "code_util.m"
                              MR_Word ll_backend__code_util___GoalInfo_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__T_45, (MR_Integer) 1)));

#line 255 "code_util.m"
                              {
#line 255 "code_util.m"
                                ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(ll_backend__code_util__GoalExpr_61, &ll_backend__code_util__V_56_56);
                              }
#line 291 "code_util.m"
                              ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__V_56_56);
#line 293 "code_util.m"
                              if (ll_backend__code_util__succeeded)
#line 292 "code_util.m"
                                *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 293 "code_util.m"
                              else
#line 254 "code_util.m"
                                {
#line 254 "code_util.m"
                                  MR_Word ll_backend__code_util__GoalExpr_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__E_46, (MR_Integer) 0)));
#line 254 "code_util.m"
                                  MR_Word ll_backend__code_util___GoalInfo_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__E_46, (MR_Integer) 1)));

#line 255 "code_util.m"
                                  /* direct tailcall eliminated */
#line 255 "code_util.m"
                                  {
#line 255 "code_util.m"
                                    MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__GoalExpr_64;

#line 255 "code_util.m"
                                    ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 255 "code_util.m"
                                  }
#line 255 "code_util.m"
                                  continue;
#line 254 "code_util.m"
                                }
#line 293 "code_util.m"
                            }
#line 288 "code_util.m"
                        }
#line 260 "code_util.m"
                      else
#line 260 "code_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 268 "code_util.m"
                          {
#line 268 "code_util.m"
                            MR_Word ll_backend__code_util__Goal_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 268 "code_util.m"
                            MR_Word ll_backend__code_util__GoalInfo_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_27, (MR_Integer) 1)));
#line 268 "code_util.m"
                            MR_Word ll_backend__code_util__CodeModel_31;
#line 268 "code_util.m"
                            MR_Word ll_backend__code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 269 "code_util.m"
                            MR_Word ll_backend__code_util__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_27, (MR_Integer) 0)));

#line 270 "code_util.m"
                            {
#line 270 "code_util.m"
                              ll_backend__code_util__CodeModel_31 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_util__GoalInfo_30);
                            }
#line 274 "code_util.m"
                            if ((ll_backend__code_util__CodeModel_31 == (MR_Integer) 2))
#line 273 "code_util.m"
                              *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
#line 274 "code_util.m"
                            else
#line 254 "code_util.m"
                              {
#line 254 "code_util.m"
                                MR_Word ll_backend__code_util__GoalExpr_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_27, (MR_Integer) 0)));
#line 254 "code_util.m"
                                MR_Word ll_backend__code_util___GoalInfo_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_27, (MR_Integer) 1)));

#line 255 "code_util.m"
                                /* direct tailcall eliminated */
#line 255 "code_util.m"
                                {
#line 255 "code_util.m"
                                  MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__GoalExpr_70;

#line 255 "code_util.m"
                                  ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 255 "code_util.m"
                                }
#line 255 "code_util.m"
                                continue;
#line 254 "code_util.m"
                              }
#line 268 "code_util.m"
                          }
#line 260 "code_util.m"
                        else
#line 260 "code_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 296 "code_util.m"
                            {
#line 298 "code_util.m"
                              {
#line 298 "code_util.m"
                                mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.goal_may_alloc_temp_frame_2\'/2", (MR_String) "shorthand");
#line 298 "code_util.m"
                                return;
                              }
#line 296 "code_util.m"
                            }
#line 260 "code_util.m"
                          else
#line 286 "code_util.m"
                            {
#line 286 "code_util.m"
                              MR_Word ll_backend__code_util__Cases_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 286 "code_util.m"
                              MR_Word ll_backend__code_util___Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "code_util.m"
                              MR_Word ll_backend__code_util___Det_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 287 "code_util.m"
                              {
#line 287 "code_util.m"
                                ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(ll_backend__code_util__Cases_41, ll_backend__code_util__HeadVar__2_2);
#line 287 "code_util.m"
                                return;
                              }
#line 286 "code_util.m"
                            }
#line 260 "code_util.m"
      }
#line 260 "code_util.m"
      break;
#line 260 "code_util.m"
    }
#line 257 "code_util.m"
}

#line 234 "code_util.m"
static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
#line 234 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 234 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
#line 234 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
#line 234 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
#line 234 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5)
#line 234 "code_util.m"
{
#line 237 "code_util.m"
  while (MR_TRUE)
#line 237 "code_util.m"
    {
#line 237 "code_util.m"
      /* tailcall optimized into a loop */
#line 237 "code_util.m"
      {
#line 237 "code_util.m"
        MR_bool ll_backend__code_util__succeeded;

#line 237 "code_util.m"
        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "code_util.m"
          {
#line 237 "code_util.m"
            *ll_backend__code_util__STATE_VARIABLE_MaxRegF_5 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
#line 237 "code_util.m"
            *ll_backend__code_util__STATE_VARIABLE_MaxRegR_3 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
#line 237 "code_util.m"
          }
#line 237 "code_util.m"
        else
#line 238 "code_util.m"
          {
#line 238 "code_util.m"
            MR_Word ll_backend__code_util__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "code_util.m"
            MR_Word ll_backend__code_util__Lvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "code_util.m"
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;
#line 238 "code_util.m"
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
#line 247 "code_util.m"
            MR_Word ll_backend__code_util__RegType_16;
#line 247 "code_util.m"
            MR_Integer ll_backend__code_util__N_17;

#line 239 "code_util.m"
            ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__Lval_12)) == (MR_mktag((MR_Integer) 1)));
#line 239 "code_util.m"
            if (ll_backend__code_util__succeeded)
#line 239 "code_util.m"
              {
#line 239 "code_util.m"
                ll_backend__code_util__RegType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 0)));
#line 239 "code_util.m"
                ll_backend__code_util__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 1)));
#line 243 "code_util.m"
                if ((ll_backend__code_util__RegType_16 == (MR_Integer) 1))
#line 244 "code_util.m"
                  {
#line 245 "code_util.m"
                    {
#line 245 "code_util.m"
                      mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4, &ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22);
                    }
#line 245 "code_util.m"
                    ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
#line 244 "code_util.m"
                  }
#line 243 "code_util.m"
                else
#line 241 "code_util.m"
                  {
#line 242 "code_util.m"
                    {
#line 242 "code_util.m"
                      mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2, &ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23);
                    }
#line 242 "code_util.m"
                    ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
#line 241 "code_util.m"
                  }
#line 239 "code_util.m"
              }
#line 239 "code_util.m"
            else
#line 248 "code_util.m"
              {
#line 248 "code_util.m"
                ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
#line 248 "code_util.m"
                ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
#line 248 "code_util.m"
              }
#line 250 "code_util.m"
            /* direct tailcall eliminated */
#line 250 "code_util.m"
            {
#line 250 "code_util.m"
              MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__Lvals_13;
#line 250 "code_util.m"
              MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0__tmp_copy_2 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
#line 250 "code_util.m"
              MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0__tmp_copy_4 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;

#line 250 "code_util.m"
              ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0__tmp_copy_4;
#line 250 "code_util.m"
              ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0__tmp_copy_2;
#line 250 "code_util.m"
              ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 250 "code_util.m"
            }
#line 250 "code_util.m"
            continue;
#line 238 "code_util.m"
          }
#line 237 "code_util.m"
      }
#line 237 "code_util.m"
      break;
#line 237 "code_util.m"
    }
#line 234 "code_util.m"
}

#line 213 "code_util.m"
static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
#line 213 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 213 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
#line 213 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
#line 213 "code_util.m"
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
#line 213 "code_util.m"
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5)
#line 213 "code_util.m"
{
#line 216 "code_util.m"
  while (MR_TRUE)
#line 216 "code_util.m"
    {
#line 216 "code_util.m"
      /* tailcall optimized into a loop */
#line 216 "code_util.m"
      {
#line 216 "code_util.m"
        MR_bool ll_backend__code_util__succeeded;

#line 216 "code_util.m"
        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 216 "code_util.m"
          {
#line 216 "code_util.m"
            *ll_backend__code_util__STATE_VARIABLE_MaxRegF_5 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
#line 216 "code_util.m"
            *ll_backend__code_util__STATE_VARIABLE_MaxRegR_3 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
#line 216 "code_util.m"
          }
#line 216 "code_util.m"
        else
#line 217 "code_util.m"
          {
#line 217 "code_util.m"
            MR_Word ll_backend__code_util__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "code_util.m"
            MR_Word ll_backend__code_util__Lvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "code_util.m"
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;
#line 217 "code_util.m"
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
#line 226 "code_util.m"
            MR_Word ll_backend__code_util__RegType_16;
#line 226 "code_util.m"
            MR_Integer ll_backend__code_util__N_17;

#line 218 "code_util.m"
            ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__Lval_12)) == (MR_mktag((MR_Integer) 1)));
#line 218 "code_util.m"
            if (ll_backend__code_util__succeeded)
#line 218 "code_util.m"
              {
#line 218 "code_util.m"
                ll_backend__code_util__RegType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 0)));
#line 218 "code_util.m"
                ll_backend__code_util__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 1)));
#line 222 "code_util.m"
                if ((ll_backend__code_util__RegType_16 == (MR_Integer) 1))
#line 223 "code_util.m"
                  {
#line 224 "code_util.m"
                    {
#line 224 "code_util.m"
                      mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4, &ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22);
                    }
#line 224 "code_util.m"
                    ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
#line 223 "code_util.m"
                  }
#line 222 "code_util.m"
                else
#line 220 "code_util.m"
                  {
#line 221 "code_util.m"
                    {
#line 221 "code_util.m"
                      mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2, &ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23);
                    }
#line 221 "code_util.m"
                    ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
#line 220 "code_util.m"
                  }
#line 218 "code_util.m"
              }
#line 218 "code_util.m"
            else
#line 227 "code_util.m"
              {
#line 227 "code_util.m"
                ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
#line 227 "code_util.m"
                ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
#line 227 "code_util.m"
              }
#line 229 "code_util.m"
            /* direct tailcall eliminated */
#line 229 "code_util.m"
            {
#line 229 "code_util.m"
              MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__Lvals_13;
#line 229 "code_util.m"
              MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0__tmp_copy_2 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
#line 229 "code_util.m"
              MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0__tmp_copy_4 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;

#line 229 "code_util.m"
              ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0__tmp_copy_4;
#line 229 "code_util.m"
              ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0__tmp_copy_2;
#line 229 "code_util.m"
              ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 229 "code_util.m"
            }
#line 229 "code_util.m"
            continue;
#line 217 "code_util.m"
          }
#line 216 "code_util.m"
      }
#line 216 "code_util.m"
      break;
#line 216 "code_util.m"
    }
#line 213 "code_util.m"
}

#line 142 "code_util.m"
static MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(
#line 142 "code_util.m"
  MR_Word ll_backend__code_util__RttiProcLabel_4,
#line 142 "code_util.m"
  MR_Word ll_backend__code_util__Immed_5)
#line 142 "code_util.m"
{
#line 144 "code_util.m"
  {
#line 144 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 144 "code_util.m"
    MR_Word ll_backend__code_util__Label_6;
#line 144 "code_util.m"
    MR_Word ll_backend__code_util__ProcLabel_7;
#line 144 "code_util.m"
    MR_Word ll_backend__code_util__V_63_63;
#line 144 "code_util.m"
    MR_Integer ll_backend__code_util__V_70_70;
#line 144 "code_util.m"
    MR_Word ll_backend__code_util__V_71_71;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_62_62;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_64_64;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_65_65;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_66_66;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_67_67;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_68_68;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_69_69;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_72_72;
#line 151 "code_util.m"
    MR_Integer ll_backend__code_util__V_73_73;
#line 151 "code_util.m"
    MR_String ll_backend__code_util__V_74_74;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_75_75;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_76_76;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_77_77;

#line 145 "code_util.m"
    {
#line 145 "code_util.m"
      ll_backend__code_util__ProcLabel_7 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_4);
    }
#line 151 "code_util.m"
    ll_backend__code_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 0)));
#line 151 "code_util.m"
    ll_backend__code_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 1)));
#line 151 "code_util.m"
    ll_backend__code_util__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 2)));
#line 151 "code_util.m"
    ll_backend__code_util__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 3)));
#line 151 "code_util.m"
    ll_backend__code_util__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 4)));
#line 151 "code_util.m"
    ll_backend__code_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 5)));
#line 151 "code_util.m"
    ll_backend__code_util__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 6)));
#line 151 "code_util.m"
    ll_backend__code_util__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 7)));
#line 151 "code_util.m"
    ll_backend__code_util__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 8)));
#line 151 "code_util.m"
    ll_backend__code_util__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 9)));
#line 151 "code_util.m"
    ll_backend__code_util__V_67_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 151 "code_util.m"
    ll_backend__code_util__V_66_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 151 "code_util.m"
    ll_backend__code_util__V_65_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 151 "code_util.m"
    ll_backend__code_util__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 11)));
#line 151 "code_util.m"
    ll_backend__code_util__V_63_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 151 "code_util.m"
    ll_backend__code_util__V_62_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 160 "code_util.m"
    if ((ll_backend__code_util__Immed_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "code_util.m"
      {
#line 147 "code_util.m"
        MR_Word ll_backend__code_util__EntryType_9;

#line 155 "code_util.m"
        if ((ll_backend__code_util__V_63_63 == (MR_Integer) 0))
#line 156 "code_util.m"
          ll_backend__code_util__EntryType_9 = (MR_Integer) 1;
#line 155 "code_util.m"
        else
#line 153 "code_util.m"
          ll_backend__code_util__EntryType_9 = (MR_Integer) 2;
#line 159 "code_util.m"
        {
#line 159 "code_util.m"
          ll_backend__code_util__Label_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 0) = ((MR_Box) (ll_backend__code_util__EntryType_9));
#line 159 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_7));
#line 159 "code_util.m"
        }
#line 147 "code_util.m"
      }
#line 160 "code_util.m"
    else
#line 161 "code_util.m"
      {
#line 161 "code_util.m"
        MR_Integer ll_backend__code_util__ProcsPerFunc_10;
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__CurPredId_11;
#line 161 "code_util.m"
        MR_Integer ll_backend__code_util__CurProcId_12;
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Immed_5, (MR_Integer) 0)));
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__V_14_14;
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__EntryType_85;

#line 161 "code_util.m"
        ll_backend__code_util__ProcsPerFunc_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_13_13, (MR_Integer) 0)));
#line 161 "code_util.m"
        ll_backend__code_util__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_13_13, (MR_Integer) 1)));
#line 161 "code_util.m"
        ll_backend__code_util__CurPredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_14_14, (MR_Integer) 0)));
#line 161 "code_util.m"
        ll_backend__code_util__CurProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_14_14, (MR_Integer) 1)));
#line 177 "code_util.m"
        ll_backend__code_util__succeeded = (ll_backend__code_util__ProcsPerFunc_10 == (MR_Integer) 0);
#line 178 "code_util.m"
        if (!(ll_backend__code_util__succeeded))
#line 179 "code_util.m"
          {
#line 179 "code_util.m"
            {
#line 179 "code_util.m"
              ll_backend__code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_util__V_71_71, ll_backend__code_util__CurPredId_11);
            }
#line 179 "code_util.m"
            if (ll_backend__code_util__succeeded)
#line 180 "code_util.m"
              ll_backend__code_util__succeeded = (ll_backend__code_util__V_70_70 == ll_backend__code_util__CurProcId_12);
#line 179 "code_util.m"
          }
#line 184 "code_util.m"
        if (ll_backend__code_util__succeeded)
#line 183 "code_util.m"
          ll_backend__code_util__EntryType_85 = (MR_Integer) 0;
#line 184 "code_util.m"
        else
#line 185 "code_util.m"
          ll_backend__code_util__EntryType_85 = (MR_Integer) 1;
#line 187 "code_util.m"
        {
#line 187 "code_util.m"
          ll_backend__code_util__Label_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 0) = ((MR_Box) (ll_backend__code_util__EntryType_85));
#line 187 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_7));
#line 187 "code_util.m"
        }
#line 161 "code_util.m"
      }
#line 144 "code_util.m"
    return ll_backend__code_util__Label_6;
#line 144 "code_util.m"
  }
#line 142 "code_util.m"
}

#line 563 "code_util.m"
static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__closure_arg,
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__wrapper_arg_1,
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__wrapper_arg_2,
#line 563 "code_util.m"
  MR_Box * ll_backend__code_util__wrapper_arg_3,
#line 563 "code_util.m"
  MR_Box ll_backend__code_util__wrapper_arg_4,
#line 563 "code_util.m"
  MR_Box * ll_backend__code_util__wrapper_arg_5)
#line 563 "code_util.m"
{
#line 563 "code_util.m"
  {
#line 563 "code_util.m"
    MR_Box ll_backend__code_util__closure = ll_backend__code_util__closure_arg;
#line 563 "code_util.m"
    MR_Word ll_backend__code_util__conv1_STATE_VARIABLE_Rvals_13;
#line 563 "code_util.m"
    MR_Word ll_backend__code_util__conv0_STATE_VARIABLE_Lvals_15;

#line 563 "code_util.m"
    {
#line 563 "code_util.m"
      ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(((MR_Word) ll_backend__code_util__wrapper_arg_1), ((MR_Word) ll_backend__code_util__wrapper_arg_2), &ll_backend__code_util__conv1_STATE_VARIABLE_Rvals_13, ((MR_Word) ll_backend__code_util__wrapper_arg_4), &ll_backend__code_util__conv0_STATE_VARIABLE_Lvals_15);
    }
#line 563 "code_util.m"
    *ll_backend__code_util__wrapper_arg_3 = ((MR_Box) (ll_backend__code_util__conv1_STATE_VARIABLE_Rvals_13));
#line 563 "code_util.m"
    *ll_backend__code_util__wrapper_arg_5 = ((MR_Box) (ll_backend__code_util__conv0_STATE_VARIABLE_Lvals_15));
#line 563 "code_util.m"
  }
#line 563 "code_util.m"
}

#line 104 "code_util.m"
void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(
#line 104 "code_util.m"
  MR_Word ll_backend__code_util__Instrs_4,
#line 104 "code_util.m"
  MR_Word * ll_backend__code_util__Rvals_5,
#line 104 "code_util.m"
  MR_Word * ll_backend__code_util__Lvals_6)
#line 104 "code_util.m"
{
#line 562 "code_util.m"
  {
#line 562 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 562 "code_util.m"
    MR_Word ll_backend__code_util__V_8_8;
#line 562 "code_util.m"
    MR_Word ll_backend__code_util__V_9_9;
#line 563 "code_util.m"
    MR_Box ll_backend__code_util__conv3_Rvals_5;
#line 563 "code_util.m"
    MR_Box ll_backend__code_util__conv2_Lvals_6;

#line 563 "code_util.m"
    {
#line 563 "code_util.m"
      ll_backend__code_util__V_8_8 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    }
#line 563 "code_util.m"
    {
#line 563 "code_util.m"
      ll_backend__code_util__V_9_9 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
#line 563 "code_util.m"
    {
#line 563 "code_util.m"
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__code_util_scalar_common_1[1], (MR_Word) &ll_backend__code_util_scalar_common_1[2], (MR_Word) &ll_backend__code_util_scalar_common_2[1], ll_backend__code_util__Instrs_4, ((MR_Box) (ll_backend__code_util__V_8_8)), &ll_backend__code_util__conv3_Rvals_5, ((MR_Box) (ll_backend__code_util__V_9_9)), &ll_backend__code_util__conv2_Lvals_6);
    }
#line 563 "code_util.m"
    *ll_backend__code_util__Rvals_5 = ((MR_Word) ll_backend__code_util__conv3_Rvals_5);
#line 563 "code_util.m"
    *ll_backend__code_util__Lvals_6 = ((MR_Word) ll_backend__code_util__conv2_Lvals_6);
#line 562 "code_util.m"
  }
#line 104 "code_util.m"
}

#line 101 "code_util.m"
void MR_CALL 
ll_backend__code_util__instr_rvals_and_lvals_3_p_0(
#line 101 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 101 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2,
#line 101 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__3_3)
#line 101 "code_util.m"
{
#line 470 "code_util.m"
  {
#line 470 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;

#line 470 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 533 "code_util.m"
      {
#line 533 "code_util.m"
        {
#line 533 "code_util.m"
          *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
        }
#line 533 "code_util.m"
        {
#line 533 "code_util.m"
          *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
        }
#line 533 "code_util.m"
      }
#line 470 "code_util.m"
    else
#line 470 "code_util.m"
      if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 534 "code_util.m"
        {
#line 534 "code_util.m"
          {
#line 534 "code_util.m"
            *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
          }
#line 534 "code_util.m"
          {
#line 534 "code_util.m"
            *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
#line 534 "code_util.m"
        }
#line 470 "code_util.m"
      else
#line 470 "code_util.m"
        if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 470 "code_util.m"
          {
#line 470 "code_util.m"
            {
#line 470 "code_util.m"
              *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            }
#line 470 "code_util.m"
            {
#line 470 "code_util.m"
              *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
            }
#line 470 "code_util.m"
          }
#line 470 "code_util.m"
        else
#line 470 "code_util.m"
          if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 471 "code_util.m"
            {
#line 471 "code_util.m"
              {
#line 471 "code_util.m"
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
#line 471 "code_util.m"
              {
#line 471 "code_util.m"
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
#line 471 "code_util.m"
            }
#line 470 "code_util.m"
          else
#line 470 "code_util.m"
            if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 484 "code_util.m"
              {
#line 484 "code_util.m"
                {
#line 484 "code_util.m"
                  *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                }
#line 484 "code_util.m"
                {
#line 484 "code_util.m"
                  *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                }
#line 484 "code_util.m"
              }
#line 470 "code_util.m"
            else
#line 470 "code_util.m"
              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 474 "code_util.m"
                {
#line 474 "code_util.m"
                  MR_Word ll_backend__code_util__Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 474 "code_util.m"
                  MR_Word ll_backend__code_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 474 "code_util.m"
                  {
#line 474 "code_util.m"
                    *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_12)));
                  }
#line 474 "code_util.m"
                  {
#line 474 "code_util.m"
                    *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_11)));
                  }
#line 474 "code_util.m"
                }
#line 470 "code_util.m"
              else
#line 470 "code_util.m"
                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 472 "code_util.m"
                  {
#line 472 "code_util.m"
                    MR_Word ll_backend__code_util__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 472 "code_util.m"
                    MR_Integer ll_backend__code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "code_util.m"
                    MR_Integer ll_backend__code_util__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 473 "code_util.m"
                    {
#line 473 "code_util.m"
                      ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(ll_backend__code_util__Instrs_8, ll_backend__code_util__HeadVar__2_2, ll_backend__code_util__HeadVar__3_3);
#line 473 "code_util.m"
                      return;
                    }
#line 472 "code_util.m"
                  }
#line 470 "code_util.m"
                else
#line 470 "code_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 482 "code_util.m"
                    {
#line 482 "code_util.m"
                      MR_Word ll_backend__code_util__Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 482 "code_util.m"
                      MR_Word ll_backend__code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 482 "code_util.m"
                      {
#line 482 "code_util.m"
                        *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_25)));
                      }
#line 482 "code_util.m"
                      {
#line 482 "code_util.m"
                        *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                      }
#line 482 "code_util.m"
                    }
#line 470 "code_util.m"
                  else
#line 470 "code_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 540 "code_util.m"
                      {
#line 540 "code_util.m"
                        {
#line 540 "code_util.m"
                          *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                        }
#line 540 "code_util.m"
                        {
#line 540 "code_util.m"
                          *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                        }
#line 540 "code_util.m"
                      }
#line 470 "code_util.m"
                    else
#line 470 "code_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 541 "code_util.m"
                        {
#line 541 "code_util.m"
                          {
#line 541 "code_util.m"
                            *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                          }
#line 541 "code_util.m"
                          {
#line 541 "code_util.m"
                            *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                          }
#line 541 "code_util.m"
                        }
#line 470 "code_util.m"
                      else
#line 470 "code_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 543 "code_util.m"
                          {
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__Cs_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__Rvals_91;
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__Lvals_92;
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 5)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 6)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 7)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 8)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 9)));
#line 543 "code_util.m"
                            MR_Word ll_backend__code_util__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 10)));

#line 544 "code_util.m"
                            {
#line 544 "code_util.m"
                              ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(ll_backend__code_util__Cs_82, &ll_backend__code_util__Rvals_91, &ll_backend__code_util__Lvals_92);
                            }
#line 543 "code_util.m"
                            {
#line 543 "code_util.m"
                              *ll_backend__code_util__HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__Rvals_91);
                            }
#line 543 "code_util.m"
                            {
#line 543 "code_util.m"
                              *ll_backend__code_util__HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__Lvals_92);
                            }
#line 543 "code_util.m"
                          }
#line 470 "code_util.m"
                        else
#line 470 "code_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 547 "code_util.m"
                            {
#line 547 "code_util.m"
                              MR_Word ll_backend__code_util__Lval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 547 "code_util.m"
                              MR_Word ll_backend__code_util__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 547 "code_util.m"
                              {
#line 547 "code_util.m"
                                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                              }
#line 547 "code_util.m"
                              {
#line 547 "code_util.m"
                                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_96)));
                              }
#line 547 "code_util.m"
                            }
#line 470 "code_util.m"
                          else
#line 470 "code_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 516 "code_util.m"
                              {
#line 516 "code_util.m"
                                MR_Word ll_backend__code_util__Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 516 "code_util.m"
                                {
#line 516 "code_util.m"
                                  *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_55)));
                                }
#line 516 "code_util.m"
                                {
#line 516 "code_util.m"
                                  *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                }
#line 516 "code_util.m"
                              }
#line 470 "code_util.m"
                            else
#line 470 "code_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 481 "code_util.m"
                                {
#line 481 "code_util.m"
                                  {
#line 481 "code_util.m"
                                    *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                  }
#line 481 "code_util.m"
                                  {
#line 481 "code_util.m"
                                    *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                  }
#line 481 "code_util.m"
                                }
#line 470 "code_util.m"
                              else
#line 470 "code_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 485 "code_util.m"
                                  {
#line 485 "code_util.m"
                                    MR_Word ll_backend__code_util__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 485 "code_util.m"
                                    MR_Word ll_backend__code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 485 "code_util.m"
                                    {
#line 485 "code_util.m"
                                      *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_30)));
                                    }
#line 485 "code_util.m"
                                    {
#line 485 "code_util.m"
                                      *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                    }
#line 485 "code_util.m"
                                  }
#line 470 "code_util.m"
                                else
#line 470 "code_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 489 "code_util.m"
                                    {
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__TypeCtorInfo_143_143;
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__Lval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__SizeRval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 7)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 8)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_48_48;
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_49_49;
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_50_50;
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 5)));
#line 489 "code_util.m"
                                      MR_Word ll_backend__code_util__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 6)));

#line 491 "code_util.m"
                                      {
#line 491 "code_util.m"
                                        ll_backend__code_util__STATE_VARIABLE_Rvals_48_48 = mercury__set__make_singleton_set_1_f_0(ll_backend__code_util__TypeCtorInfo_142_142, ((MR_Box) (ll_backend__code_util__SizeRval_37)));
                                      }
#line 2455 "ll_backend.code_util.c"
                                      ll_backend__code_util__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
#line 492 "code_util.m"
                                      {
#line 492 "code_util.m"
                                        ll_backend__code_util__STATE_VARIABLE_Lvals_49_49 = mercury__set__make_singleton_set_1_f_0(ll_backend__code_util__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__code_util__Lval_34)));
                                      }
#line 496 "code_util.m"
                                      if ((ll_backend__code_util__MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 497 "code_util.m"
                                        ll_backend__code_util__STATE_VARIABLE_Rvals_50_50 = ll_backend__code_util__STATE_VARIABLE_Rvals_48_48;
#line 496 "code_util.m"
                                      else
#line 494 "code_util.m"
                                        {
#line 494 "code_util.m"
                                          MR_Word ll_backend__code_util__RegionRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeRegionRval_40, (MR_Integer) 0)));

#line 495 "code_util.m"
                                          {
#line 495 "code_util.m"
                                            mercury__set__insert_3_p_0(ll_backend__code_util__TypeCtorInfo_142_142, ((MR_Box) (ll_backend__code_util__RegionRval_44)), ll_backend__code_util__STATE_VARIABLE_Rvals_48_48, &ll_backend__code_util__STATE_VARIABLE_Rvals_50_50);
                                          }
#line 494 "code_util.m"
                                        }
#line 508 "code_util.m"
                                      if ((ll_backend__code_util__MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 509 "code_util.m"
                                        {
#line 509 "code_util.m"
                                          *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_50_50;
#line 509 "code_util.m"
                                          *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_49_49;
#line 509 "code_util.m"
                                        }
#line 508 "code_util.m"
                                      else
#line 500 "code_util.m"
                                        {
#line 500 "code_util.m"
                                          MR_Word ll_backend__code_util__ReuseRval_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeReuse_41, (MR_Integer) 0)));
#line 500 "code_util.m"
                                          MR_Word ll_backend__code_util__MaybeFlagLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeReuse_41, (MR_Integer) 1)));

#line 501 "code_util.m"
                                          {
#line 501 "code_util.m"
                                            mercury__set__insert_3_p_0(ll_backend__code_util__TypeCtorInfo_142_142, ((MR_Box) (ll_backend__code_util__ReuseRval_45)), ll_backend__code_util__STATE_VARIABLE_Rvals_50_50, ll_backend__code_util__HeadVar__2_2);
                                          }
#line 505 "code_util.m"
                                          if ((ll_backend__code_util__MaybeFlagLval_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "code_util.m"
                                            *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_49_49;
#line 505 "code_util.m"
                                          else
#line 503 "code_util.m"
                                            {
#line 503 "code_util.m"
                                              MR_Word ll_backend__code_util__FlagLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeFlagLval_46, (MR_Integer) 0)));

#line 504 "code_util.m"
                                              {
#line 504 "code_util.m"
                                                mercury__set__insert_3_p_0(ll_backend__code_util__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__code_util__FlagLval_47)), ll_backend__code_util__STATE_VARIABLE_Lvals_49_49, ll_backend__code_util__HeadVar__3_3);
#line 504 "code_util.m"
                                                return;
                                              }
#line 503 "code_util.m"
                                            }
#line 500 "code_util.m"
                                        }
#line 489 "code_util.m"
                                    }
#line 470 "code_util.m"
                                  else
#line 470 "code_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 539 "code_util.m"
                                      {
#line 539 "code_util.m"
                                        {
#line 539 "code_util.m"
                                          *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                        }
#line 539 "code_util.m"
                                        {
#line 539 "code_util.m"
                                          *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                        }
#line 539 "code_util.m"
                                      }
#line 470 "code_util.m"
                                    else
#line 470 "code_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 545 "code_util.m"
                                        {
#line 545 "code_util.m"
                                          MR_Word ll_backend__code_util__Lval_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 545 "code_util.m"
                                          MR_Integer ll_backend__code_util__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 545 "code_util.m"
                                          MR_Integer ll_backend__code_util__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));

#line 545 "code_util.m"
                                          {
#line 545 "code_util.m"
                                            *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                          }
#line 545 "code_util.m"
                                          {
#line 545 "code_util.m"
                                            *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_93)));
                                          }
#line 545 "code_util.m"
                                        }
#line 470 "code_util.m"
                                      else
#line 470 "code_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 549 "code_util.m"
                                          {
#line 549 "code_util.m"
                                            MR_Word ll_backend__code_util__Lval_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 549 "code_util.m"
                                            MR_Word ll_backend__code_util__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 549 "code_util.m"
                                            {
#line 549 "code_util.m"
                                              *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                            }
#line 549 "code_util.m"
                                            {
#line 549 "code_util.m"
                                              *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_98)));
                                            }
#line 549 "code_util.m"
                                          }
#line 470 "code_util.m"
                                        else
#line 470 "code_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 476 "code_util.m"
                                            {
#line 476 "code_util.m"
                                              MR_Word ll_backend__code_util__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 476 "code_util.m"
                                              MR_Word ll_backend__code_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 476 "code_util.m"
                                              {
#line 476 "code_util.m"
                                                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_14)));
                                              }
#line 476 "code_util.m"
                                              {
#line 476 "code_util.m"
                                                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_13)));
                                              }
#line 476 "code_util.m"
                                            }
#line 470 "code_util.m"
                                          else
#line 470 "code_util.m"
                                            if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 480 "code_util.m"
                                              {
#line 480 "code_util.m"
                                                {
#line 480 "code_util.m"
                                                  *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                }
#line 480 "code_util.m"
                                                {
#line 480 "code_util.m"
                                                  *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                }
#line 480 "code_util.m"
                                              }
#line 470 "code_util.m"
                                            else
#line 470 "code_util.m"
                                              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 551 "code_util.m"
                                                {
#line 551 "code_util.m"
                                                  MR_Word ll_backend__code_util__Lval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 551 "code_util.m"
                                                  MR_Integer ll_backend__code_util__V_100_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 551 "code_util.m"
                                                  {
#line 551 "code_util.m"
                                                    *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                  }
#line 551 "code_util.m"
                                                  {
#line 551 "code_util.m"
                                                    *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_101)));
                                                  }
#line 551 "code_util.m"
                                                }
#line 470 "code_util.m"
                                              else
#line 470 "code_util.m"
                                                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 557 "code_util.m"
                                                  {
#line 557 "code_util.m"
                                                    MR_Word ll_backend__code_util__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 557 "code_util.m"
                                                    MR_Word ll_backend__code_util__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 557 "code_util.m"
                                                    MR_Word ll_backend__code_util__V_113_113;
#line 557 "code_util.m"
                                                    MR_Word ll_backend__code_util__V_114_114;

#line 558 "code_util.m"
                                                    {
#line 558 "code_util.m"
                                                      ll_backend__code_util__V_114_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "code_util.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__code_util__V_114_114, 0) = ((MR_Box) (ll_backend__code_util__LCSRval_112));
#line 558 "code_util.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__code_util__V_114_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 558 "code_util.m"
                                                    }
#line 558 "code_util.m"
                                                    {
#line 558 "code_util.m"
                                                      ll_backend__code_util__V_113_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 558 "code_util.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__code_util__V_113_113, 0) = ((MR_Box) (ll_backend__code_util__LCRval_111));
#line 558 "code_util.m"
                                                      MR_hl_field(MR_mktag(1), ll_backend__code_util__V_113_113, 1) = ((MR_Box) (ll_backend__code_util__V_114_114));
#line 558 "code_util.m"
                                                    }
#line 557 "code_util.m"
                                                    {
#line 557 "code_util.m"
                                                      *ll_backend__code_util__HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__V_113_113);
                                                    }
#line 557 "code_util.m"
                                                    {
#line 557 "code_util.m"
                                                      *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                    }
#line 557 "code_util.m"
                                                  }
#line 470 "code_util.m"
                                                else
#line 470 "code_util.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 555 "code_util.m"
                                                    {
#line 555 "code_util.m"
                                                      MR_Word ll_backend__code_util__LCRval_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 555 "code_util.m"
                                                      MR_Word ll_backend__code_util__LCSRval_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 555 "code_util.m"
                                                      MR_Word ll_backend__code_util__V_108_108;
#line 555 "code_util.m"
                                                      MR_Word ll_backend__code_util__V_109_109;
#line 555 "code_util.m"
                                                      MR_Word ll_backend__code_util__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));

#line 556 "code_util.m"
                                                      {
#line 556 "code_util.m"
                                                        ll_backend__code_util__V_109_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "code_util.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_109_109, 0) = ((MR_Box) (ll_backend__code_util__LCSRval_106));
#line 556 "code_util.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_109_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "code_util.m"
                                                      }
#line 556 "code_util.m"
                                                      {
#line 556 "code_util.m"
                                                        ll_backend__code_util__V_108_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 556 "code_util.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_108_108, 0) = ((MR_Box) (ll_backend__code_util__LCRval_105));
#line 556 "code_util.m"
                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_108_108, 1) = ((MR_Box) (ll_backend__code_util__V_109_109));
#line 556 "code_util.m"
                                                      }
#line 555 "code_util.m"
                                                      {
#line 555 "code_util.m"
                                                        *ll_backend__code_util__HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__V_108_108);
                                                      }
#line 555 "code_util.m"
                                                      {
#line 555 "code_util.m"
                                                        *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                      }
#line 555 "code_util.m"
                                                    }
#line 470 "code_util.m"
                                                  else
#line 470 "code_util.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 553 "code_util.m"
                                                      {
#line 553 "code_util.m"
                                                        MR_Word ll_backend__code_util__Rval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 553 "code_util.m"
                                                        MR_Word ll_backend__code_util__Lval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 553 "code_util.m"
                                                        MR_Word ll_backend__code_util__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));

#line 553 "code_util.m"
                                                        {
#line 553 "code_util.m"
                                                          *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_102)));
                                                        }
#line 553 "code_util.m"
                                                        {
#line 553 "code_util.m"
                                                          *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_103)));
                                                        }
#line 553 "code_util.m"
                                                      }
#line 470 "code_util.m"
                                                    else
#line 470 "code_util.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 478 "code_util.m"
                                                        {
#line 478 "code_util.m"
                                                          {
#line 478 "code_util.m"
                                                            *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                          }
#line 478 "code_util.m"
                                                          {
#line 478 "code_util.m"
                                                            *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                          }
#line 478 "code_util.m"
                                                        }
#line 470 "code_util.m"
                                                      else
#line 470 "code_util.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 514 "code_util.m"
                                                          {
#line 514 "code_util.m"
                                                            MR_Word ll_backend__code_util__Lval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 514 "code_util.m"
                                                            {
#line 514 "code_util.m"
                                                              *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                            }
#line 514 "code_util.m"
                                                            {
#line 514 "code_util.m"
                                                              *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_53)));
                                                            }
#line 514 "code_util.m"
                                                          }
#line 470 "code_util.m"
                                                        else
#line 470 "code_util.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 535 "code_util.m"
                                                            {
#line 535 "code_util.m"
                                                              MR_Word ll_backend__code_util__Lval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 535 "code_util.m"
                                                              {
#line 535 "code_util.m"
                                                                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                              }
#line 535 "code_util.m"
                                                              {
#line 535 "code_util.m"
                                                                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_74)));
                                                              }
#line 535 "code_util.m"
                                                            }
#line 470 "code_util.m"
                                                          else
#line 470 "code_util.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 479 "code_util.m"
                                                              {
#line 479 "code_util.m"
                                                                {
#line 479 "code_util.m"
                                                                  *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                }
#line 479 "code_util.m"
                                                                {
#line 479 "code_util.m"
                                                                  *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                }
#line 479 "code_util.m"
                                                              }
#line 470 "code_util.m"
                                                            else
#line 470 "code_util.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 537 "code_util.m"
                                                                {
#line 537 "code_util.m"
                                                                  MR_Word ll_backend__code_util__Rval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 537 "code_util.m"
                                                                  {
#line 537 "code_util.m"
                                                                    *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_75)));
                                                                  }
#line 537 "code_util.m"
                                                                  {
#line 537 "code_util.m"
                                                                    *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                  }
#line 537 "code_util.m"
                                                                }
#line 470 "code_util.m"
                                                              else
#line 470 "code_util.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 523 "code_util.m"
                                                                  {
#line 523 "code_util.m"
                                                                    {
#line 523 "code_util.m"
                                                                      *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                    }
#line 523 "code_util.m"
                                                                    {
#line 523 "code_util.m"
                                                                      *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                    }
#line 523 "code_util.m"
                                                                  }
#line 470 "code_util.m"
                                                                else
#line 470 "code_util.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 524 "code_util.m"
                                                                    {
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__IdRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__NumLval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__AddrLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 5)));
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__V_63_63;
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__V_64_64;
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 524 "code_util.m"
                                                                      MR_Word ll_backend__code_util__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 524 "code_util.m"
                                                                      {
#line 524 "code_util.m"
                                                                        *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__IdRval_60)));
                                                                      }
#line 525 "code_util.m"
                                                                      {
#line 525 "code_util.m"
                                                                        ll_backend__code_util__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "code_util.m"
                                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_64_64, 0) = ((MR_Box) (ll_backend__code_util__AddrLval_62));
#line 525 "code_util.m"
                                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_64_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "code_util.m"
                                                                      }
#line 525 "code_util.m"
                                                                      {
#line 525 "code_util.m"
                                                                        ll_backend__code_util__V_63_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 525 "code_util.m"
                                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_63_63, 0) = ((MR_Box) (ll_backend__code_util__NumLval_61));
#line 525 "code_util.m"
                                                                        MR_hl_field(MR_mktag(1), ll_backend__code_util__V_63_63, 1) = ((MR_Box) (ll_backend__code_util__V_64_64));
#line 525 "code_util.m"
                                                                      }
#line 524 "code_util.m"
                                                                      {
#line 524 "code_util.m"
                                                                        *ll_backend__code_util__HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__V_63_63);
                                                                      }
#line 524 "code_util.m"
                                                                    }
#line 470 "code_util.m"
                                                                  else
#line 470 "code_util.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 526 "code_util.m"
                                                                      {
#line 526 "code_util.m"
                                                                        MR_Word ll_backend__code_util__ValueRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 526 "code_util.m"
                                                                        MR_Word ll_backend__code_util__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 526 "code_util.m"
                                                                        MR_Word ll_backend__code_util__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 526 "code_util.m"
                                                                        {
#line 526 "code_util.m"
                                                                          *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__ValueRval_68)));
                                                                        }
#line 526 "code_util.m"
                                                                        {
#line 526 "code_util.m"
                                                                          *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                        }
#line 526 "code_util.m"
                                                                      }
#line 470 "code_util.m"
                                                                    else
#line 470 "code_util.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 531 "code_util.m"
                                                                        {
#line 531 "code_util.m"
                                                                          MR_Word ll_backend__code_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 531 "code_util.m"
                                                                          MR_Word ll_backend__code_util___Reason_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

#line 531 "code_util.m"
                                                                          {
#line 531 "code_util.m"
                                                                            *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_72)));
                                                                          }
#line 531 "code_util.m"
                                                                          {
#line 531 "code_util.m"
                                                                            *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                          }
#line 531 "code_util.m"
                                                                        }
#line 470 "code_util.m"
                                                                      else
#line 470 "code_util.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 515 "code_util.m"
                                                                          {
#line 515 "code_util.m"
                                                                            MR_Word ll_backend__code_util__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 515 "code_util.m"
                                                                            {
#line 515 "code_util.m"
                                                                              *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_54)));
                                                                            }
#line 515 "code_util.m"
                                                                            {
#line 515 "code_util.m"
                                                                              *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                            }
#line 515 "code_util.m"
                                                                          }
#line 470 "code_util.m"
                                                                        else
#line 470 "code_util.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 487 "code_util.m"
                                                                            {
#line 487 "code_util.m"
                                                                              MR_Word ll_backend__code_util__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 487 "code_util.m"
                                                                              {
#line 487 "code_util.m"
                                                                                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                              }
#line 487 "code_util.m"
                                                                              {
#line 487 "code_util.m"
                                                                                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_33)));
                                                                              }
#line 487 "code_util.m"
                                                                            }
#line 470 "code_util.m"
                                                                          else
#line 470 "code_util.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 486 "code_util.m"
                                                                              {
#line 486 "code_util.m"
                                                                                MR_Word ll_backend__code_util__Lval_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 486 "code_util.m"
                                                                                {
#line 486 "code_util.m"
                                                                                  *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                                }
#line 486 "code_util.m"
                                                                                {
#line 486 "code_util.m"
                                                                                  *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_32)));
                                                                                }
#line 486 "code_util.m"
                                                                              }
#line 470 "code_util.m"
                                                                            else
#line 470 "code_util.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 530 "code_util.m"
                                                                                {
#line 530 "code_util.m"
                                                                                  MR_Word ll_backend__code_util__Lval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 530 "code_util.m"
                                                                                  {
#line 530 "code_util.m"
                                                                                    *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                                  }
#line 530 "code_util.m"
                                                                                  {
#line 530 "code_util.m"
                                                                                    *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_71)));
                                                                                  }
#line 530 "code_util.m"
                                                                                }
#line 470 "code_util.m"
                                                                              else
#line 528 "code_util.m"
                                                                                {
#line 528 "code_util.m"
                                                                                  {
#line 528 "code_util.m"
                                                                                    *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
                                                                                  }
#line 528 "code_util.m"
                                                                                  {
#line 528 "code_util.m"
                                                                                    *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
                                                                                  }
#line 528 "code_util.m"
                                                                                }
#line 470 "code_util.m"
  }
#line 101 "code_util.m"
}

#line 97 "code_util.m"
MR_Integer MR_CALL 
ll_backend__code_util__size_of_cell_args_1_f_0(
#line 97 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 97 "code_util.m"
{
#line 454 "code_util.m"
  {
#line 454 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 454 "code_util.m"
    MR_Integer ll_backend__code_util__HeadVar__2_2;

#line 454 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 454 "code_util.m"
      ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
#line 454 "code_util.m"
    else
#line 455 "code_util.m"
      {
#line 455 "code_util.m"
        MR_Word ll_backend__code_util__CellArg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 455 "code_util.m"
        MR_Word ll_backend__code_util__CellArgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "code_util.m"
        MR_Integer ll_backend__code_util__Size_5;
#line 455 "code_util.m"
        MR_Integer ll_backend__code_util__Sizes_6;

#line 462 "code_util.m"
        if (((MR_tag((MR_Word) ll_backend__code_util__CellArg_3)) == (MR_mktag((MR_Integer) 2))))
#line 464 "code_util.m"
          ll_backend__code_util__Size_5 = (MR_Integer) 2;
#line 462 "code_util.m"
        else
#line 461 "code_util.m"
          ll_backend__code_util__Size_5 = (MR_Integer) 1;
#line 466 "code_util.m"
        {
#line 466 "code_util.m"
          ll_backend__code_util__Sizes_6 = ll_backend__code_util__size_of_cell_args_1_f_0(ll_backend__code_util__CellArgs_4);
        }
#line 455 "code_util.m"
        ll_backend__code_util__HeadVar__2_2 = (ll_backend__code_util__Size_5 + ll_backend__code_util__Sizes_6);
#line 455 "code_util.m"
      }
#line 454 "code_util.m"
    return ll_backend__code_util__HeadVar__2_2;
#line 454 "code_util.m"
  }
#line 97 "code_util.m"
}

#line 95 "code_util.m"
MR_Integer MR_CALL 
ll_backend__code_util__encode_num_generic_call_vars_2_f_0(
#line 95 "code_util.m"
  MR_Integer ll_backend__code_util__NumR_4,
#line 95 "code_util.m"
  MR_Integer ll_backend__code_util__NumF_5)
#line 95 "code_util.m"
{
#line 450 "code_util.m"
  {
#line 450 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 450 "code_util.m"
    MR_Integer ll_backend__code_util__HeadVar__3_3;
#line 450 "code_util.m"
    MR_Integer ll_backend__code_util__V_6_6;

#line 450 "code_util.m"
    {
#line 450 "code_util.m"
      ll_backend__code_util__V_6_6 = mercury__int__f_60_60_2_f_0(ll_backend__code_util__NumF_5, (MR_Integer) 16);
    }
#line 450 "code_util.m"
    ll_backend__code_util__HeadVar__3_3 = (ll_backend__code_util__NumR_4 | ll_backend__code_util__V_6_6);
#line 450 "code_util.m"
    return ll_backend__code_util__HeadVar__3_3;
#line 450 "code_util.m"
  }
#line 95 "code_util.m"
}

#line 88 "code_util.m"
void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_p_0(
#line 88 "code_util.m"
  MR_Word ll_backend__code_util__ProcInfo_3,
#line 88 "code_util.m"
  MR_Word * ll_backend__code_util__VarLvals_4)
#line 88 "code_util.m"
{
#line 424 "code_util.m"
  {
#line 424 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 424 "code_util.m"
    MR_Word ll_backend__code_util__HeadVars_5;
#line 424 "code_util.m"
    MR_Word ll_backend__code_util__ArgInfos_6;
#line 424 "code_util.m"
    MR_Word ll_backend__code_util__VarArgInfos_7;

#line 425 "code_util.m"
    {
#line 425 "code_util.m"
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__code_util__ProcInfo_3, &ll_backend__code_util__HeadVars_5);
    }
#line 426 "code_util.m"
    {
#line 426 "code_util.m"
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_util__ProcInfo_3, &ll_backend__code_util__ArgInfos_6);
    }
#line 427 "code_util.m"
    {
#line 427 "code_util.m"
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__code_util__HeadVars_5, ll_backend__code_util__ArgInfos_6, &ll_backend__code_util__VarArgInfos_7);
    }
#line 428 "code_util.m"
    {
#line 428 "code_util.m"
      ll_backend__code_util__build_input_arg_list_2_2_p_0(ll_backend__code_util__VarArgInfos_7, ll_backend__code_util__VarLvals_4);
#line 428 "code_util.m"
      return;
    }
#line 424 "code_util.m"
  }
#line 88 "code_util.m"
}

#line 83 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lvals_1_f_0(
#line 83 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 83 "code_util.m"
{
#line 377 "code_util.m"
  {
#line 377 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 377 "code_util.m"
    MR_Word ll_backend__code_util__HeadVar__2_2;

#line 377 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "code_util.m"
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 377 "code_util.m"
    else
#line 378 "code_util.m"
      {
#line 378 "code_util.m"
        MR_Word ll_backend__code_util__First_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 378 "code_util.m"
        MR_Word ll_backend__code_util__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 378 "code_util.m"
        MR_Word ll_backend__code_util__FirstLvals_5;
#line 378 "code_util.m"
        MR_Word ll_backend__code_util__RestLvals_6;

#line 379 "code_util.m"
        {
#line 379 "code_util.m"
          ll_backend__code_util__FirstLvals_5 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__code_util__First_3);
        }
#line 380 "code_util.m"
        {
#line 380 "code_util.m"
          ll_backend__code_util__RestLvals_6 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__code_util__Rest_4);
        }
#line 378 "code_util.m"
        {
#line 378 "code_util.m"
          ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__FirstLvals_5, ll_backend__code_util__RestLvals_6);
        }
#line 378 "code_util.m"
      }
#line 377 "code_util.m"
    return ll_backend__code_util__HeadVar__2_2;
#line 377 "code_util.m"
  }
#line 83 "code_util.m"
}

#line 82 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lval_1_f_0(
#line 82 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 82 "code_util.m"
{
#line 392 "code_util.m"
  {
#line 392 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 392 "code_util.m"
    MR_Word ll_backend__code_util__HeadVar__2_2;

#line 392 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 399 "code_util.m"
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
    else
#line 392 "code_util.m"
      if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 405 "code_util.m"
        ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
      else
#line 392 "code_util.m"
        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 398 "code_util.m"
          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
        else
#line 392 "code_util.m"
          if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 407 "code_util.m"
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
          else
#line 392 "code_util.m"
            if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 406 "code_util.m"
              ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
            else
#line 392 "code_util.m"
              if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "code_util.m"
                ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
              else
#line 392 "code_util.m"
                if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 392 "code_util.m"
                  ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                else
#line 392 "code_util.m"
                  if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 411 "code_util.m"
                    ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                  else
#line 392 "code_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 396 "code_util.m"
                      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                    else
#line 392 "code_util.m"
                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 408 "code_util.m"
                        {
#line 408 "code_util.m"
                          MR_Word ll_backend__code_util__Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 408 "code_util.m"
                          MR_Word ll_backend__code_util__Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 408 "code_util.m"
                          MR_Word ll_backend__code_util__V_18_18;
#line 408 "code_util.m"
                          MR_Word ll_backend__code_util__V_19_19;
#line 408 "code_util.m"
                          MR_Word ll_backend__code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 409 "code_util.m"
                          {
#line 409 "code_util.m"
                            ll_backend__code_util__V_18_18 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval1_16);
                          }
#line 409 "code_util.m"
                          {
#line 409 "code_util.m"
                            ll_backend__code_util__V_19_19 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval2_17);
                          }
#line 408 "code_util.m"
                          {
#line 408 "code_util.m"
                            ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__V_18_18, ll_backend__code_util__V_19_19);
                          }
#line 408 "code_util.m"
                        }
#line 392 "code_util.m"
                      else
#line 392 "code_util.m"
                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 395 "code_util.m"
                          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                        else
#line 392 "code_util.m"
                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 413 "code_util.m"
                            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                          else
#line 392 "code_util.m"
                            if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 410 "code_util.m"
                              ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                            else
#line 392 "code_util.m"
                              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 412 "code_util.m"
                                {
#line 412 "code_util.m"
                                  MR_Word ll_backend__code_util__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 412 "code_util.m"
                                  {
#line 412 "code_util.m"
                                    return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_23);
                                  }
#line 412 "code_util.m"
                                }
#line 392 "code_util.m"
                              else
#line 392 "code_util.m"
                                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 394 "code_util.m"
                                  ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                                else
#line 392 "code_util.m"
                                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 404 "code_util.m"
                                    {
#line 404 "code_util.m"
                                      MR_Word ll_backend__code_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 404 "code_util.m"
                                      {
#line 404 "code_util.m"
                                        return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_14);
                                      }
#line 404 "code_util.m"
                                    }
#line 392 "code_util.m"
                                  else
#line 392 "code_util.m"
                                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 401 "code_util.m"
                                      {
#line 401 "code_util.m"
                                        MR_Word ll_backend__code_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 401 "code_util.m"
                                        {
#line 401 "code_util.m"
                                          return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_11);
                                        }
#line 401 "code_util.m"
                                      }
#line 392 "code_util.m"
                                    else
#line 392 "code_util.m"
                                      if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 402 "code_util.m"
                                        {
#line 402 "code_util.m"
                                          MR_Word ll_backend__code_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 402 "code_util.m"
                                          {
#line 402 "code_util.m"
                                            return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_12);
                                          }
#line 402 "code_util.m"
                                        }
#line 392 "code_util.m"
                                      else
#line 392 "code_util.m"
                                        if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 393 "code_util.m"
                                          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 392 "code_util.m"
                                        else
#line 392 "code_util.m"
                                          if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 403 "code_util.m"
                                            {
#line 403 "code_util.m"
                                              MR_Word ll_backend__code_util__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 403 "code_util.m"
                                              {
#line 403 "code_util.m"
                                                return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_13);
                                              }
#line 403 "code_util.m"
                                            }
#line 392 "code_util.m"
                                          else
#line 400 "code_util.m"
                                            {
#line 400 "code_util.m"
                                              MR_Word ll_backend__code_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 400 "code_util.m"
                                              {
#line 400 "code_util.m"
                                                return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_10);
                                              }
#line 400 "code_util.m"
                                            }
#line 392 "code_util.m"
    return ll_backend__code_util__HeadVar__2_2;
#line 392 "code_util.m"
  }
#line 82 "code_util.m"
}

#line 81 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__lvals_in_rval_1_f_0(
#line 81 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1)
#line 81 "code_util.m"
{
#line 382 "code_util.m"
  while (MR_TRUE)
#line 382 "code_util.m"
    {
#line 382 "code_util.m"
      /* tailcall optimized into a loop */
#line 382 "code_util.m"
      {
#line 382 "code_util.m"
        MR_bool ll_backend__code_util__succeeded;
#line 382 "code_util.m"
        MR_Word ll_backend__code_util__HeadVar__2_2;

#line 382 "code_util.m"
        if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 382 "code_util.m"
          {
#line 382 "code_util.m"
            MR_Word ll_backend__code_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 382 "code_util.m"
            MR_Word ll_backend__code_util__V_4_4;

#line 382 "code_util.m"
            {
#line 382 "code_util.m"
              ll_backend__code_util__V_4_4 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__code_util__Lval_3);
            }
#line 382 "code_util.m"
            {
#line 382 "code_util.m"
              ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 382 "code_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__code_util__Lval_3));
#line 382 "code_util.m"
              MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__code_util__V_4_4));
#line 382 "code_util.m"
            }
#line 382 "code_util.m"
          }
#line 382 "code_util.m"
        else
#line 382 "code_util.m"
          if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 384 "code_util.m"
            {
#line 384 "code_util.m"
              MR_Word ll_backend__code_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 384 "code_util.m"
              MR_Integer ll_backend__code_util__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));

#line 384 "code_util.m"
              /* direct tailcall eliminated */
#line 384 "code_util.m"
              {
#line 384 "code_util.m"
                MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__Rval_7;

#line 384 "code_util.m"
                ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 384 "code_util.m"
              }
#line 384 "code_util.m"
              continue;
#line 384 "code_util.m"
            }
#line 382 "code_util.m"
          else
#line 382 "code_util.m"
            if (((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 383 "code_util.m"
              ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "code_util.m"
            else
#line 382 "code_util.m"
              if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 388 "code_util.m"
                {
#line 388 "code_util.m"
                  MR_Word ll_backend__code_util__Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 388 "code_util.m"
                  MR_Word ll_backend__code_util__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
#line 388 "code_util.m"
                  MR_Word ll_backend__code_util__V_15_15;
#line 388 "code_util.m"
                  MR_Word ll_backend__code_util__V_16_16;
#line 388 "code_util.m"
                  MR_Word ll_backend__code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 389 "code_util.m"
                  {
#line 389 "code_util.m"
                    ll_backend__code_util__V_15_15 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval1_13);
                  }
#line 389 "code_util.m"
                  {
#line 389 "code_util.m"
                    ll_backend__code_util__V_16_16 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval2_14);
                  }
#line 388 "code_util.m"
                  {
#line 388 "code_util.m"
                    ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__V_15_15, ll_backend__code_util__V_16_16);
                  }
#line 388 "code_util.m"
                }
#line 382 "code_util.m"
              else
#line 382 "code_util.m"
                if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 386 "code_util.m"
                  ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "code_util.m"
                else
#line 382 "code_util.m"
                  if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 390 "code_util.m"
                    {
#line 390 "code_util.m"
                      MR_Word ll_backend__code_util__MemRef_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 390 "code_util.m"
                      {
#line 390 "code_util.m"
                        return ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_mem_ref_1_f_0(ll_backend__code_util__MemRef_17);
                      }
#line 390 "code_util.m"
                    }
#line 382 "code_util.m"
                  else
#line 382 "code_util.m"
                    if (((((MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 385 "code_util.m"
                      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 382 "code_util.m"
                    else
#line 387 "code_util.m"
                      {
#line 387 "code_util.m"
                        MR_Word ll_backend__code_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
#line 387 "code_util.m"
                        MR_Word ll_backend__code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 387 "code_util.m"
                        /* direct tailcall eliminated */
#line 387 "code_util.m"
                        {
#line 387 "code_util.m"
                          MR_Word ll_backend__code_util__HeadVar__1__tmp_copy_1 = ll_backend__code_util__Rval_11;

#line 387 "code_util.m"
                          ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__HeadVar__1__tmp_copy_1;
#line 387 "code_util.m"
                        }
#line 387 "code_util.m"
                        continue;
#line 387 "code_util.m"
                      }
#line 382 "code_util.m"
        return ll_backend__code_util__HeadVar__2_2;
#line 382 "code_util.m"
      }
#line 382 "code_util.m"
      break;
#line 382 "code_util.m"
    }
#line 81 "code_util.m"
}

#line 75 "code_util.m"
void MR_CALL 
ll_backend__code_util__negate_the_test_2_p_0(
#line 75 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 75 "code_util.m"
  MR_Word * ll_backend__code_util__Instrs_2)
#line 75 "code_util.m"
{
#line 364 "code_util.m"
  {
#line 364 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;

#line 364 "code_util.m"
    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 364 "code_util.m"
      {
#line 365 "code_util.m"
        {
#line 365 "code_util.m"
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.negate_the_test\'/2", (MR_String) "empty list");
#line 365 "code_util.m"
          return;
        }
#line 364 "code_util.m"
      }
#line 364 "code_util.m"
    else
#line 366 "code_util.m"
      {
#line 366 "code_util.m"
        MR_Word ll_backend__code_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 366 "code_util.m"
        MR_Word ll_backend__code_util__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
#line 370 "code_util.m"
        MR_Word ll_backend__code_util__Test_10;
#line 370 "code_util.m"
        MR_Word ll_backend__code_util__Target_11;
#line 370 "code_util.m"
        MR_String ll_backend__code_util__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Instr0_7, (MR_Integer) 1)));
#line 367 "code_util.m"
        MR_Word ll_backend__code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Instr0_7, (MR_Integer) 0)));

#line 367 "code_util.m"
        ll_backend__code_util__succeeded = ((((MR_tag((MR_Word) ll_backend__code_util__V_15_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__V_15_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 367 "code_util.m"
        if (ll_backend__code_util__succeeded)
#line 367 "code_util.m"
          {
#line 367 "code_util.m"
            ll_backend__code_util__Test_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__V_15_15, (MR_Integer) 1)));
#line 367 "code_util.m"
            ll_backend__code_util__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__V_15_15, (MR_Integer) 2)));
#line 368 "code_util.m"
            {
#line 368 "code_util.m"
              MR_Word ll_backend__code_util__NewTest_13;
#line 368 "code_util.m"
              MR_Word ll_backend__code_util__V_16_16;
#line 368 "code_util.m"
              MR_Word ll_backend__code_util__V_17_17;

#line 368 "code_util.m"
              {
#line 368 "code_util.m"
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__code_util__Test_10, &ll_backend__code_util__NewTest_13);
              }
#line 369 "code_util.m"
              {
#line 369 "code_util.m"
                ll_backend__code_util__V_17_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(3), ll_backend__code_util__V_17_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(3), ll_backend__code_util__V_17_17, 1) = ((MR_Box) (ll_backend__code_util__NewTest_13));
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(3), ll_backend__code_util__V_17_17, 2) = ((MR_Box) (ll_backend__code_util__Target_11));
#line 369 "code_util.m"
              }
#line 369 "code_util.m"
              {
#line 369 "code_util.m"
                ll_backend__code_util__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(0), ll_backend__code_util__V_16_16, 0) = ((MR_Box) (ll_backend__code_util__V_17_17));
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(0), ll_backend__code_util__V_16_16, 1) = ((MR_Box) (ll_backend__code_util__Comment_12));
#line 369 "code_util.m"
              }
#line 369 "code_util.m"
              {
#line 369 "code_util.m"
                MR_Word base;
#line 369 "code_util.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 369 "code_util.m"
                *ll_backend__code_util__Instrs_2 = base;
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__V_16_16));
#line 369 "code_util.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 369 "code_util.m"
              }
#line 368 "code_util.m"
            }
#line 367 "code_util.m"
          }
#line 367 "code_util.m"
        else
#line 371 "code_util.m"
          {
#line 371 "code_util.m"
            MR_Word ll_backend__code_util__Instrs1_14;

#line 371 "code_util.m"
            {
#line 371 "code_util.m"
              ll_backend__code_util__negate_the_test_2_p_0(ll_backend__code_util__Instrs0_8, &ll_backend__code_util__Instrs1_14);
            }
#line 372 "code_util.m"
            {
#line 372 "code_util.m"
              MR_Word base;
#line 372 "code_util.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 372 "code_util.m"
              *ll_backend__code_util__Instrs_2 = base;
#line 372 "code_util.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__Instr0_7));
#line 372 "code_util.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__code_util__Instrs1_14));
#line 372 "code_util.m"
            }
#line 371 "code_util.m"
          }
#line 366 "code_util.m"
      }
#line 364 "code_util.m"
  }
#line 75 "code_util.m"
}

#line 73 "code_util.m"
void MR_CALL 
ll_backend__code_util__neg_rval_2_p_0(
#line 73 "code_util.m"
  MR_Word ll_backend__code_util__Rval_3,
#line 73 "code_util.m"
  MR_Word * ll_backend__code_util__NegRval_4)
#line 73 "code_util.m"
{
#line 325 "code_util.m"
  {
#line 325 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 325 "code_util.m"
    MR_Word ll_backend__code_util__NegRval0_5;

#line 331 "code_util.m"
    if (((((MR_tag((MR_Word) ll_backend__code_util__Rval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 340 "code_util.m"
      {
#line 340 "code_util.m"
        MR_Word ll_backend__code_util__Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 1)));
#line 340 "code_util.m"
        MR_Word ll_backend__code_util__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 2)));
#line 340 "code_util.m"
        MR_Word ll_backend__code_util__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 3)));
#line 340 "code_util.m"
        MR_Word ll_backend__code_util__NegOp_14;

#line 345 "code_util.m"
        if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 345 "code_util.m"
          {
#line 345 "code_util.m"
            ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
#line 345 "code_util.m"
            ll_backend__code_util__succeeded = MR_TRUE;
#line 345 "code_util.m"
          }
#line 345 "code_util.m"
        else
#line 345 "code_util.m"
          if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 357 "code_util.m"
            {
#line 357 "code_util.m"
              ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32));
#line 357 "code_util.m"
              ll_backend__code_util__succeeded = MR_TRUE;
#line 357 "code_util.m"
            }
#line 345 "code_util.m"
          else
#line 345 "code_util.m"
            if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 362 "code_util.m"
              {
#line 362 "code_util.m"
                ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33));
#line 362 "code_util.m"
                ll_backend__code_util__succeeded = MR_TRUE;
#line 362 "code_util.m"
              }
#line 345 "code_util.m"
            else
#line 345 "code_util.m"
              if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 361 "code_util.m"
                {
#line 361 "code_util.m"
                  ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35));
#line 361 "code_util.m"
                  ll_backend__code_util__succeeded = MR_TRUE;
#line 361 "code_util.m"
                }
#line 345 "code_util.m"
              else
#line 345 "code_util.m"
                if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 360 "code_util.m"
                  {
#line 360 "code_util.m"
                    ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34));
#line 360 "code_util.m"
                    ll_backend__code_util__succeeded = MR_TRUE;
#line 360 "code_util.m"
                  }
#line 345 "code_util.m"
                else
#line 345 "code_util.m"
                  if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 359 "code_util.m"
                    {
#line 359 "code_util.m"
                      ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36));
#line 359 "code_util.m"
                      ll_backend__code_util__succeeded = MR_TRUE;
#line 359 "code_util.m"
                    }
#line 345 "code_util.m"
                  else
#line 345 "code_util.m"
                    if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 358 "code_util.m"
                      {
#line 358 "code_util.m"
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31));
#line 358 "code_util.m"
                        ll_backend__code_util__succeeded = MR_TRUE;
#line 358 "code_util.m"
                      }
#line 345 "code_util.m"
                    else
#line 345 "code_util.m"
                      if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 350 "code_util.m"
                        {
#line 350 "code_util.m"
                          ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22));
#line 350 "code_util.m"
                          ll_backend__code_util__succeeded = MR_TRUE;
#line 350 "code_util.m"
                        }
#line 345 "code_util.m"
                      else
#line 345 "code_util.m"
                        if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 349 "code_util.m"
                          {
#line 349 "code_util.m"
                            ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
#line 349 "code_util.m"
                            ll_backend__code_util__succeeded = MR_TRUE;
#line 349 "code_util.m"
                          }
#line 345 "code_util.m"
                        else
#line 345 "code_util.m"
                          if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 348 "code_util.m"
                            {
#line 348 "code_util.m"
                              ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
#line 348 "code_util.m"
                              ll_backend__code_util__succeeded = MR_TRUE;
#line 348 "code_util.m"
                            }
#line 345 "code_util.m"
                          else
#line 345 "code_util.m"
                            if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 347 "code_util.m"
                              {
#line 347 "code_util.m"
                                ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
#line 347 "code_util.m"
                                ll_backend__code_util__succeeded = MR_TRUE;
#line 347 "code_util.m"
                              }
#line 345 "code_util.m"
                            else
#line 345 "code_util.m"
                              if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 346 "code_util.m"
                                {
#line 346 "code_util.m"
                                  ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
#line 346 "code_util.m"
                                  ll_backend__code_util__succeeded = MR_TRUE;
#line 346 "code_util.m"
                                }
#line 345 "code_util.m"
                              else
#line 345 "code_util.m"
                                if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 351 "code_util.m"
                                  {
#line 351 "code_util.m"
                                    ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
#line 351 "code_util.m"
                                    ll_backend__code_util__succeeded = MR_TRUE;
#line 351 "code_util.m"
                                  }
#line 345 "code_util.m"
                                else
#line 345 "code_util.m"
                                  if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 356 "code_util.m"
                                    {
#line 356 "code_util.m"
                                      ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
#line 356 "code_util.m"
                                      ll_backend__code_util__succeeded = MR_TRUE;
#line 356 "code_util.m"
                                    }
#line 345 "code_util.m"
                                  else
#line 345 "code_util.m"
                                    if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 355 "code_util.m"
                                      {
#line 355 "code_util.m"
                                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19));
#line 355 "code_util.m"
                                        ll_backend__code_util__succeeded = MR_TRUE;
#line 355 "code_util.m"
                                      }
#line 345 "code_util.m"
                                    else
#line 345 "code_util.m"
                                      if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 354 "code_util.m"
                                        {
#line 354 "code_util.m"
                                          ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18));
#line 354 "code_util.m"
                                          ll_backend__code_util__succeeded = MR_TRUE;
#line 354 "code_util.m"
                                        }
#line 345 "code_util.m"
                                      else
#line 345 "code_util.m"
                                        if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 353 "code_util.m"
                                          {
#line 353 "code_util.m"
                                            ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20));
#line 353 "code_util.m"
                                            ll_backend__code_util__succeeded = MR_TRUE;
#line 353 "code_util.m"
                                          }
#line 345 "code_util.m"
                                        else
#line 345 "code_util.m"
                                          if ((ll_backend__code_util__Op_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 352 "code_util.m"
                                            {
#line 352 "code_util.m"
                                              ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15));
#line 352 "code_util.m"
                                              ll_backend__code_util__succeeded = MR_TRUE;
#line 352 "code_util.m"
                                            }
#line 345 "code_util.m"
                                          else
#line 345 "code_util.m"
                                            ll_backend__code_util__succeeded = MR_FALSE;
#line 340 "code_util.m"
        if (ll_backend__code_util__succeeded)
#line 340 "code_util.m"
          {
#line 340 "code_util.m"
            {
#line 340 "code_util.m"
              ll_backend__code_util__NegRval0_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 340 "code_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 340 "code_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 1) = ((MR_Box) (ll_backend__code_util__NegOp_14));
#line 340 "code_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 2) = ((MR_Box) (ll_backend__code_util__X_12));
#line 340 "code_util.m"
              MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 3) = ((MR_Box) (ll_backend__code_util__Y_13));
#line 340 "code_util.m"
            }
#line 340 "code_util.m"
            ll_backend__code_util__succeeded = MR_TRUE;
#line 340 "code_util.m"
          }
#line 340 "code_util.m"
      }
#line 331 "code_util.m"
    else
#line 331 "code_util.m"
      if (((((MR_tag((MR_Word) ll_backend__code_util__Rval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 331 "code_util.m"
        {
#line 331 "code_util.m"
          MR_Word ll_backend__code_util__Const_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 1)));
#line 331 "code_util.m"
          MR_Word ll_backend__code_util__NegConst_8;

#line 335 "code_util.m"
          if ((ll_backend__code_util__Const_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 337 "code_util.m"
            {
#line 337 "code_util.m"
              ll_backend__code_util__NegConst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 337 "code_util.m"
              ll_backend__code_util__succeeded = MR_TRUE;
#line 337 "code_util.m"
            }
#line 335 "code_util.m"
          else
#line 335 "code_util.m"
            if ((ll_backend__code_util__Const_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "code_util.m"
              {
#line 334 "code_util.m"
                ll_backend__code_util__NegConst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 334 "code_util.m"
                ll_backend__code_util__succeeded = MR_TRUE;
#line 334 "code_util.m"
              }
#line 335 "code_util.m"
            else
#line 335 "code_util.m"
              ll_backend__code_util__succeeded = MR_FALSE;
#line 331 "code_util.m"
          if (ll_backend__code_util__succeeded)
#line 331 "code_util.m"
            {
#line 331 "code_util.m"
              {
#line 331 "code_util.m"
                ll_backend__code_util__NegRval0_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 331 "code_util.m"
                MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 331 "code_util.m"
                MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 1) = ((MR_Box) (ll_backend__code_util__NegConst_8));
#line 331 "code_util.m"
              }
#line 331 "code_util.m"
              ll_backend__code_util__succeeded = MR_TRUE;
#line 331 "code_util.m"
            }
#line 331 "code_util.m"
        }
#line 331 "code_util.m"
      else
#line 331 "code_util.m"
        if (((((MR_tag((MR_Word) ll_backend__code_util__Rval_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 339 "code_util.m"
          {
#line 339 "code_util.m"
            MR_Word ll_backend__code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 1)));

#line 339 "code_util.m"
            ll_backend__code_util__NegRval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 2)));
#line 339 "code_util.m"
            ll_backend__code_util__succeeded = (ll_backend__code_util__V_10_10 == (MR_Integer) 7);
#line 339 "code_util.m"
          }
#line 331 "code_util.m"
        else
#line 331 "code_util.m"
          ll_backend__code_util__succeeded = MR_FALSE;
#line 325 "code_util.m"
    if (ll_backend__code_util__succeeded)
#line 324 "code_util.m"
      *ll_backend__code_util__NegRval_4 = ll_backend__code_util__NegRval0_5;
#line 325 "code_util.m"
    else
#line 326 "code_util.m"
      {
#line 326 "code_util.m"
        {
#line 326 "code_util.m"
          MR_Word base;
#line 326 "code_util.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 326 "code_util.m"
          *ll_backend__code_util__NegRval_4 = base;
#line 326 "code_util.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 326 "code_util.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 7));
#line 326 "code_util.m"
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__code_util__Rval_3));
#line 326 "code_util.m"
        }
#line 326 "code_util.m"
      }
#line 325 "code_util.m"
  }
#line 73 "code_util.m"
}

#line 68 "code_util.m"
void MR_CALL 
ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(
#line 68 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 68 "code_util.m"
  MR_Word * ll_backend__code_util__May_5)
#line 68 "code_util.m"
{
#line 254 "code_util.m"
  {
#line 254 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 254 "code_util.m"
    MR_Word ll_backend__code_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 254 "code_util.m"
    MR_Word ll_backend__code_util___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 255 "code_util.m"
    {
#line 255 "code_util.m"
      ll_backend__code_util__goal_may_alloc_temp_frame_2_2_p_0(ll_backend__code_util__GoalExpr_3, ll_backend__code_util__May_5);
#line 255 "code_util.m"
      return;
    }
#line 254 "code_util.m"
  }
#line 68 "code_util.m"
}

#line 66 "code_util.m"
void MR_CALL 
ll_backend__code_util__max_mentioned_abs_regs_3_p_0(
#line 66 "code_util.m"
  MR_Word ll_backend__code_util__Lvals_4,
#line 66 "code_util.m"
  MR_Integer * ll_backend__code_util__MaxRegR_5,
#line 66 "code_util.m"
  MR_Integer * ll_backend__code_util__MaxRegF_6)
#line 66 "code_util.m"
{
#line 231 "code_util.m"
  {
#line 231 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;

#line 232 "code_util.m"
    {
#line 232 "code_util.m"
      ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(ll_backend__code_util__Lvals_4, (MR_Integer) 0, ll_backend__code_util__MaxRegR_5, (MR_Integer) 0, ll_backend__code_util__MaxRegF_6);
#line 232 "code_util.m"
      return;
    }
#line 231 "code_util.m"
  }
#line 66 "code_util.m"
}

#line 65 "code_util.m"
void MR_CALL 
ll_backend__code_util__max_mentioned_regs_3_p_0(
#line 65 "code_util.m"
  MR_Word ll_backend__code_util__Lvals_4,
#line 65 "code_util.m"
  MR_Integer * ll_backend__code_util__MaxRegR_5,
#line 65 "code_util.m"
  MR_Integer * ll_backend__code_util__MaxRegF_6)
#line 65 "code_util.m"
{
#line 210 "code_util.m"
  {
#line 210 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;

#line 211 "code_util.m"
    {
#line 211 "code_util.m"
      ll_backend__code_util__max_mentioned_reg_2_5_p_0(ll_backend__code_util__Lvals_4, (MR_Integer) 0, ll_backend__code_util__MaxRegR_5, (MR_Integer) 0, ll_backend__code_util__MaxRegF_6);
#line 211 "code_util.m"
      return;
    }
#line 210 "code_util.m"
  }
#line 65 "code_util.m"
}

#line 63 "code_util.m"
void MR_CALL 
ll_backend__code_util__arg_loc_to_register_2_p_0(
#line 63 "code_util.m"
  MR_Word ll_backend__code_util__HeadVar__1_1,
#line 63 "code_util.m"
  MR_Word * ll_backend__code_util__HeadVar__2_2)
#line 63 "code_util.m"
{
#line 206 "code_util.m"
  {
#line 206 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 206 "code_util.m"
    MR_Word ll_backend__code_util__RegType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
#line 206 "code_util.m"
    MR_Integer ll_backend__code_util__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

#line 206 "code_util.m"
    {
#line 206 "code_util.m"
      MR_Word base;
#line 206 "code_util.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 206 "code_util.m"
      *ll_backend__code_util__HeadVar__2_2 = base;
#line 206 "code_util.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__RegType_3));
#line 206 "code_util.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__code_util__N_4));
#line 206 "code_util.m"
    }
#line 206 "code_util.m"
  }
#line 63 "code_util.m"
}

#line 61 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(
#line 61 "code_util.m"
  MR_Word ll_backend__code_util__CodeAddr_3)
#line 61 "code_util.m"
{
#line 198 "code_util.m"
  {
#line 198 "code_util.m"
    MR_bool ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__CodeAddr_3)) == (MR_mktag((MR_Integer) 1)));
#line 198 "code_util.m"
    MR_Word ll_backend__code_util__ProcLabel_4;
#line 198 "code_util.m"
    MR_Word ll_backend__code_util__Label_5;

#line 196 "code_util.m"
    if (ll_backend__code_util__succeeded)
#line 196 "code_util.m"
      {
#line 196 "code_util.m"
        ll_backend__code_util__Label_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__CodeAddr_3, (MR_Integer) 0)));
#line 197 "code_util.m"
        {
#line 197 "code_util.m"
          return ll_backend__code_util__ProcLabel_4 = ll_backend__llds__get_proc_label_1_f_0(ll_backend__code_util__Label_5);
        }
#line 196 "code_util.m"
      }
#line 196 "code_util.m"
    else
#line 200 "code_util.m"
      {
#line 200 "code_util.m"
        MR_Word ll_backend__code_util__ProcLabelPrime_6;

#line 198 "code_util.m"
        ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__CodeAddr_3)) == (MR_mktag((MR_Integer) 2)));
#line 198 "code_util.m"
        if (ll_backend__code_util__succeeded)
#line 198 "code_util.m"
          {
#line 198 "code_util.m"
            ll_backend__code_util__ProcLabelPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__CodeAddr_3, (MR_Integer) 0)));
#line 199 "code_util.m"
            ll_backend__code_util__ProcLabel_4 = ll_backend__code_util__ProcLabelPrime_6;
#line 198 "code_util.m"
          }
#line 198 "code_util.m"
        else
#line 201 "code_util.m"
          {
#line 201 "code_util.m"
            {
#line 201 "code_util.m"
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "function \140ll_backend.code_util.extract_proc_label_from_code_addr\'/1", (MR_String) "failed");
            }
#line 201 "code_util.m"
          }
#line 200 "code_util.m"
      }
#line 198 "code_util.m"
    return ll_backend__code_util__ProcLabel_4;
#line 198 "code_util.m"
  }
#line 61 "code_util.m"
}

#line 59 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__make_internal_label_4_f_0(
#line 59 "code_util.m"
  MR_Word ll_backend__code_util__ModuleInfo_6,
#line 59 "code_util.m"
  MR_Word ll_backend__code_util__PredId_7,
#line 59 "code_util.m"
  MR_Integer ll_backend__code_util__ProcId_8,
#line 59 "code_util.m"
  MR_Integer ll_backend__code_util__LabelNum_9)
#line 59 "code_util.m"
{
#line 191 "code_util.m"
  {
#line 191 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 191 "code_util.m"
    MR_Word ll_backend__code_util__Label_10;
#line 191 "code_util.m"
    MR_Word ll_backend__code_util__ProcLabel_11;

#line 192 "code_util.m"
    {
#line 192 "code_util.m"
      ll_backend__code_util__ProcLabel_11 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__code_util__ModuleInfo_6, ll_backend__code_util__PredId_7, ll_backend__code_util__ProcId_8);
    }
#line 193 "code_util.m"
    {
#line 193 "code_util.m"
      ll_backend__code_util__Label_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 193 "code_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_util__Label_10, 0) = ((MR_Box) (ll_backend__code_util__LabelNum_9));
#line 193 "code_util.m"
      MR_hl_field(MR_mktag(0), ll_backend__code_util__Label_10, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_11));
#line 193 "code_util.m"
    }
#line 191 "code_util.m"
    return ll_backend__code_util__Label_10;
#line 191 "code_util.m"
  }
#line 59 "code_util.m"
}

#line 55 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_4_f_0(
#line 55 "code_util.m"
  MR_Word ll_backend__code_util__ModuleInfo_6,
#line 55 "code_util.m"
  MR_Word ll_backend__code_util__PredId_7,
#line 55 "code_util.m"
  MR_Integer ll_backend__code_util__ProcId_8,
#line 55 "code_util.m"
  MR_Word ll_backend__code_util__Immed_9)
#line 55 "code_util.m"
{
#line 138 "code_util.m"
  {
#line 138 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 138 "code_util.m"
    MR_Word ll_backend__code_util__Label_10;
#line 138 "code_util.m"
    MR_Word ll_backend__code_util__RttiProcLabel_11;
#line 138 "code_util.m"
    MR_Word ll_backend__code_util__ProcLabel_15;
#line 138 "code_util.m"
    MR_Word ll_backend__code_util__V_71_71;
#line 138 "code_util.m"
    MR_Integer ll_backend__code_util__V_78_78;
#line 138 "code_util.m"
    MR_Word ll_backend__code_util__V_79_79;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_70_70;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_72_72;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_73_73;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_74_74;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_75_75;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_76_76;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_77_77;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_80_80;
#line 151 "code_util.m"
    MR_Integer ll_backend__code_util__V_81_81;
#line 151 "code_util.m"
    MR_String ll_backend__code_util__V_82_82;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_83_83;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_84_84;
#line 151 "code_util.m"
    MR_Word ll_backend__code_util__V_85_85;

#line 139 "code_util.m"
    {
#line 139 "code_util.m"
      ll_backend__code_util__RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__code_util__ModuleInfo_6, ll_backend__code_util__PredId_7, ll_backend__code_util__ProcId_8);
    }
#line 145 "code_util.m"
    {
#line 145 "code_util.m"
      ll_backend__code_util__ProcLabel_15 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_11);
    }
#line 151 "code_util.m"
    ll_backend__code_util__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 0)));
#line 151 "code_util.m"
    ll_backend__code_util__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 1)));
#line 151 "code_util.m"
    ll_backend__code_util__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 2)));
#line 151 "code_util.m"
    ll_backend__code_util__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 3)));
#line 151 "code_util.m"
    ll_backend__code_util__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 4)));
#line 151 "code_util.m"
    ll_backend__code_util__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 5)));
#line 151 "code_util.m"
    ll_backend__code_util__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 6)));
#line 151 "code_util.m"
    ll_backend__code_util__V_78_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 7)));
#line 151 "code_util.m"
    ll_backend__code_util__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 8)));
#line 151 "code_util.m"
    ll_backend__code_util__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 9)));
#line 151 "code_util.m"
    ll_backend__code_util__V_75_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 151 "code_util.m"
    ll_backend__code_util__V_74_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 151 "code_util.m"
    ll_backend__code_util__V_73_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 151 "code_util.m"
    ll_backend__code_util__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 11)));
#line 151 "code_util.m"
    ll_backend__code_util__V_71_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 151 "code_util.m"
    ll_backend__code_util__V_70_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 160 "code_util.m"
    if ((ll_backend__code_util__Immed_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 147 "code_util.m"
      {
#line 147 "code_util.m"
        MR_Word ll_backend__code_util__EntryType_17;

#line 155 "code_util.m"
        if ((ll_backend__code_util__V_71_71 == (MR_Integer) 0))
#line 156 "code_util.m"
          ll_backend__code_util__EntryType_17 = (MR_Integer) 1;
#line 155 "code_util.m"
        else
#line 153 "code_util.m"
          ll_backend__code_util__EntryType_17 = (MR_Integer) 2;
#line 159 "code_util.m"
        {
#line 159 "code_util.m"
          ll_backend__code_util__Label_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 159 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 0) = ((MR_Box) (ll_backend__code_util__EntryType_17));
#line 159 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_15));
#line 159 "code_util.m"
        }
#line 147 "code_util.m"
      }
#line 160 "code_util.m"
    else
#line 161 "code_util.m"
      {
#line 161 "code_util.m"
        MR_Integer ll_backend__code_util__ProcsPerFunc_18;
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__CurPredId_19;
#line 161 "code_util.m"
        MR_Integer ll_backend__code_util__CurProcId_20;
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Immed_9, (MR_Integer) 0)));
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__V_22_22;
#line 161 "code_util.m"
        MR_Word ll_backend__code_util__EntryType_93;

#line 161 "code_util.m"
        ll_backend__code_util__ProcsPerFunc_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_21_21, (MR_Integer) 0)));
#line 161 "code_util.m"
        ll_backend__code_util__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_21_21, (MR_Integer) 1)));
#line 161 "code_util.m"
        ll_backend__code_util__CurPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_22_22, (MR_Integer) 0)));
#line 161 "code_util.m"
        ll_backend__code_util__CurProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__V_22_22, (MR_Integer) 1)));
#line 177 "code_util.m"
        ll_backend__code_util__succeeded = (ll_backend__code_util__ProcsPerFunc_18 == (MR_Integer) 0);
#line 178 "code_util.m"
        if (!(ll_backend__code_util__succeeded))
#line 179 "code_util.m"
          {
#line 179 "code_util.m"
            {
#line 179 "code_util.m"
              ll_backend__code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_util__V_79_79, ll_backend__code_util__CurPredId_19);
            }
#line 179 "code_util.m"
            if (ll_backend__code_util__succeeded)
#line 180 "code_util.m"
              ll_backend__code_util__succeeded = (ll_backend__code_util__V_78_78 == ll_backend__code_util__CurProcId_20);
#line 179 "code_util.m"
          }
#line 184 "code_util.m"
        if (ll_backend__code_util__succeeded)
#line 183 "code_util.m"
          ll_backend__code_util__EntryType_93 = (MR_Integer) 0;
#line 184 "code_util.m"
        else
#line 185 "code_util.m"
          ll_backend__code_util__EntryType_93 = (MR_Integer) 1;
#line 187 "code_util.m"
        {
#line 187 "code_util.m"
          ll_backend__code_util__Label_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 187 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 0) = ((MR_Box) (ll_backend__code_util__EntryType_93));
#line 187 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_15));
#line 187 "code_util.m"
        }
#line 161 "code_util.m"
      }
#line 138 "code_util.m"
    return ll_backend__code_util__Label_10;
#line 138 "code_util.m"
  }
#line 55 "code_util.m"
}

#line 47 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_from_rtti_2_f_0(
#line 47 "code_util.m"
  MR_Word ll_backend__code_util__RttiProcLabel_4,
#line 47 "code_util.m"
  MR_Word ll_backend__code_util__Immed_5)
#line 47 "code_util.m"
{
#line 126 "code_util.m"
  {
#line 126 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 126 "code_util.m"
    MR_Word ll_backend__code_util__ProcAddr_6;
#line 126 "code_util.m"
    MR_Word ll_backend__code_util__ProcIsImported_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 0)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 1)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 2)));
#line 127 "code_util.m"
    MR_String ll_backend__code_util__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 3)));
#line 127 "code_util.m"
    MR_Integer ll_backend__code_util__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 4)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 5)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 6)));
#line 127 "code_util.m"
    MR_Integer ll_backend__code_util__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 7)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 8)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 9)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_20_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_21_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 11)));
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_24_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);

#line 132 "code_util.m"
    if ((ll_backend__code_util__ProcIsImported_7 == (MR_Integer) 0))
#line 133 "code_util.m"
      {
#line 133 "code_util.m"
        MR_Word ll_backend__code_util__Label_9;

#line 134 "code_util.m"
        {
#line 134 "code_util.m"
          ll_backend__code_util__Label_9 = ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(ll_backend__code_util__RttiProcLabel_4, ll_backend__code_util__Immed_5);
        }
#line 135 "code_util.m"
        {
#line 135 "code_util.m"
          ll_backend__code_util__ProcAddr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 135 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__ProcAddr_6, 0) = ((MR_Box) (ll_backend__code_util__Label_9));
#line 135 "code_util.m"
        }
#line 133 "code_util.m"
      }
#line 132 "code_util.m"
    else
#line 129 "code_util.m"
      {
#line 129 "code_util.m"
        MR_Word ll_backend__code_util__ProcLabel_8;

#line 130 "code_util.m"
        {
#line 130 "code_util.m"
          ll_backend__code_util__ProcLabel_8 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_4);
        }
#line 131 "code_util.m"
        {
#line 131 "code_util.m"
          ll_backend__code_util__ProcAddr_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 131 "code_util.m"
          MR_hl_field(MR_mktag(2), ll_backend__code_util__ProcAddr_6, 0) = ((MR_Box) (ll_backend__code_util__ProcLabel_8));
#line 131 "code_util.m"
        }
#line 129 "code_util.m"
      }
#line 126 "code_util.m"
    return ll_backend__code_util__ProcAddr_6;
#line 126 "code_util.m"
  }
#line 47 "code_util.m"
}

#line 45 "code_util.m"
MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_4_f_0(
#line 45 "code_util.m"
  MR_Word ll_backend__code_util__ModuleInfo_6,
#line 45 "code_util.m"
  MR_Word ll_backend__code_util__PredId_7,
#line 45 "code_util.m"
  MR_Integer ll_backend__code_util__ProcId_8,
#line 45 "code_util.m"
  MR_Word ll_backend__code_util__Immed_9)
#line 45 "code_util.m"
{
#line 122 "code_util.m"
  {
#line 122 "code_util.m"
    MR_bool ll_backend__code_util__succeeded;
#line 122 "code_util.m"
    MR_Word ll_backend__code_util__ProcAddr_10;
#line 122 "code_util.m"
    MR_Word ll_backend__code_util__RttiProcLabel_11;
#line 122 "code_util.m"
    MR_Word ll_backend__code_util__ProcIsImported_15;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_18_18;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_19_19;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_20_20;
#line 127 "code_util.m"
    MR_String ll_backend__code_util__V_21_21;
#line 127 "code_util.m"
    MR_Integer ll_backend__code_util__V_22_22;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_23_23;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_24_24;
#line 127 "code_util.m"
    MR_Integer ll_backend__code_util__V_25_25;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_26_26;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_27_27;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_28_28;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_29_29;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_30_30;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_31_31;
#line 127 "code_util.m"
    MR_Word ll_backend__code_util__V_32_32;

#line 123 "code_util.m"
    {
#line 123 "code_util.m"
      ll_backend__code_util__RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__code_util__ModuleInfo_6, ll_backend__code_util__PredId_7, ll_backend__code_util__ProcId_8);
    }
#line 127 "code_util.m"
    ll_backend__code_util__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 0)));
#line 127 "code_util.m"
    ll_backend__code_util__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 1)));
#line 127 "code_util.m"
    ll_backend__code_util__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 2)));
#line 127 "code_util.m"
    ll_backend__code_util__V_21_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 3)));
#line 127 "code_util.m"
    ll_backend__code_util__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 4)));
#line 127 "code_util.m"
    ll_backend__code_util__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 5)));
#line 127 "code_util.m"
    ll_backend__code_util__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 6)));
#line 127 "code_util.m"
    ll_backend__code_util__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 7)));
#line 127 "code_util.m"
    ll_backend__code_util__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 8)));
#line 127 "code_util.m"
    ll_backend__code_util__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 9)));
#line 127 "code_util.m"
    ll_backend__code_util__V_28_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
#line 127 "code_util.m"
    ll_backend__code_util__V_29_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
#line 127 "code_util.m"
    ll_backend__code_util__V_30_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 127 "code_util.m"
    ll_backend__code_util__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 11)));
#line 127 "code_util.m"
    ll_backend__code_util__V_32_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
#line 127 "code_util.m"
    ll_backend__code_util__ProcIsImported_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 132 "code_util.m"
    if ((ll_backend__code_util__ProcIsImported_15 == (MR_Integer) 0))
#line 133 "code_util.m"
      {
#line 133 "code_util.m"
        MR_Word ll_backend__code_util__Label_17;

#line 134 "code_util.m"
        {
#line 134 "code_util.m"
          ll_backend__code_util__Label_17 = ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(ll_backend__code_util__RttiProcLabel_11, ll_backend__code_util__Immed_9);
        }
#line 135 "code_util.m"
        {
#line 135 "code_util.m"
          ll_backend__code_util__ProcAddr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 135 "code_util.m"
          MR_hl_field(MR_mktag(1), ll_backend__code_util__ProcAddr_10, 0) = ((MR_Box) (ll_backend__code_util__Label_17));
#line 135 "code_util.m"
        }
#line 133 "code_util.m"
      }
#line 132 "code_util.m"
    else
#line 129 "code_util.m"
      {
#line 129 "code_util.m"
        MR_Word ll_backend__code_util__ProcLabel_16;

#line 130 "code_util.m"
        {
#line 130 "code_util.m"
          ll_backend__code_util__ProcLabel_16 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_11);
        }
#line 131 "code_util.m"
        {
#line 131 "code_util.m"
          ll_backend__code_util__ProcAddr_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 131 "code_util.m"
          MR_hl_field(MR_mktag(2), ll_backend__code_util__ProcAddr_10, 0) = ((MR_Box) (ll_backend__code_util__ProcLabel_16));
#line 131 "code_util.m"
        }
#line 129 "code_util.m"
      }
#line 122 "code_util.m"
    return ll_backend__code_util__ProcAddr_10;
#line 122 "code_util.m"
  }
#line 45 "code_util.m"
}

void mercury__ll_backend__code_util__init(void)
{
}

void mercury__ll_backend__code_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&ll_backend__code_util__ll_backend__code_util__type_ctor_info_immed_0);
}

void mercury__ll_backend__code_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.code_util. */
