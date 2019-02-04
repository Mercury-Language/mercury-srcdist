/*
** Automatically generated from `code_util.m'
** by the Mercury compiler,
** version rotd-2017-06-22
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


/* :- module ll_backend.code_util. */
/* :- implementation. */

/*
INIT mercury__ll_backend__code_util__init
ENDINIT
*/

#include "ll_backend.code_util.mih"


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
#include "mdbcomp.feedback.automatic_parallelism.mih"




static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0;

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0;

static const MR_FA_TypeInfo_Struct2 ll_backend__code_util__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static const MR_FA_TypeInfo_Struct1 ll_backend__code_util__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0;

static MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0_10001(
  MR_Box ll_backend__code_util__wrapper_arg_1,
  MR_Box ll_backend__code_util__wrapper_arg_2);

static void MR_CALL 
ll_backend__code_util____Compare____immed_0_0_10001(
  MR_Box * ll_backend__code_util__wrapper_arg_1,
  MR_Box ll_backend__code_util__wrapper_arg_2,
  MR_Box ll_backend__code_util__wrapper_arg_3);

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1);

static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2,
  MR_Word * ll_backend__code_util__HeadVar__3_3);

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_0_12,
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Rvals_13,
  MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_0_14,
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Lvals_15);

static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5);

static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5);

static MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(
  MR_Word ll_backend__code_util__RttiProcLabel_4,
  MR_Word ll_backend__code_util__Immed_5);

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
  MR_Box ll_backend__code_util__closure_arg,
  MR_Box ll_backend__code_util__wrapper_arg_1,
  MR_Box ll_backend__code_util__wrapper_arg_2,
  MR_Box * ll_backend__code_util__wrapper_arg_3,
  MR_Box ll_backend__code_util__wrapper_arg_4,
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_rval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 ll_backend__code_util__set_ordlist__pti_set_ordlist_1__plain_ll_backend__llds__type_ctor_info_lval_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0
  }
};

static const MR_FA_TypeInfo_Struct2 ll_backend__code_util__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

static const MR_FA_TypeInfo_Struct1 ll_backend__code_util__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &ll_backend__code_util__pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0
  }
};

const MR_TypeCtorInfo_Struct ll_backend__code_util__ll_backend__code_util__type_ctor_info_immed_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (ll_backend__code_util____Unify____immed_0_0_10001)),
  ((MR_Box) (ll_backend__code_util____Compare____immed_0_0_10001)),
  (MR_String) "ll_backend.code_util",
  (MR_String) "immed",
  {     NULL },
  {     (MR_PseudoTypeInfo) &ll_backend__code_util__maybe__ti_maybe_1pair__ti_pair_2builtin__type_ctor_info_int_0hlds__hlds_pred__type_ctor_info_pred_proc_id_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0_10001(
  MR_Box ll_backend__code_util__wrapper_arg_1,
  MR_Box ll_backend__code_util__wrapper_arg_2)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    {
      ll_backend__code_util__succeeded = ll_backend__code_util____Unify____immed_0_0(((MR_Word) ll_backend__code_util__wrapper_arg_1), ((MR_Word) ll_backend__code_util__wrapper_arg_2));
    }
    return ll_backend__code_util__succeeded;
  }
}

static void MR_CALL 
ll_backend__code_util____Compare____immed_0_0_10001(
  MR_Box * ll_backend__code_util__wrapper_arg_1,
  MR_Box ll_backend__code_util__wrapper_arg_2,
  MR_Box ll_backend__code_util__wrapper_arg_3)
{
  {
    MR_Word ll_backend__code_util__conv0_HeadVar__1_1;

    {
      ll_backend__code_util____Compare____immed_0_0(&ll_backend__code_util__conv0_HeadVar__1_1, ((MR_Word) ll_backend__code_util__wrapper_arg_2), ((MR_Word) ll_backend__code_util__wrapper_arg_3));
    }
    *ll_backend__code_util__wrapper_arg_1 = ((MR_Box) (ll_backend__code_util__conv0_HeadVar__1_1));
  }
}

void MR_CALL 
ll_backend__code_util____Compare____immed_0_0(
  MR_Word * ll_backend__code_util__HeadVar__1_1,
  MR_Word ll_backend__code_util__HeadVar__2_2,
  MR_Word ll_backend__code_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Cast_HeadVar1_4 = ll_backend__code_util__HeadVar__2_2;
    MR_Word ll_backend__code_util__Cast_HeadVar2_5 = ll_backend__code_util__HeadVar__3_3;

    {
      mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[3], ll_backend__code_util__HeadVar__1_1, ((MR_Box) (ll_backend__code_util__Cast_HeadVar1_4)), ((MR_Box) (ll_backend__code_util__Cast_HeadVar2_5)));
    }
  }
}

MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word ll_backend__code_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Cast_HeadVar1_3 = ll_backend__code_util__HeadVar__1_1;
    MR_Word ll_backend__code_util__Cast_HeadVar2_4 = ll_backend__code_util__HeadVar__2_2;

    {
      ll_backend__code_util__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[3], ((MR_Box) (ll_backend__code_util__Cast_HeadVar1_3)), ((MR_Box) (ll_backend__code_util__Cast_HeadVar2_4)));
    }
    return ll_backend__code_util__succeeded;
  }
}

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__HeadVar__2_2;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__code_util__Output_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Outputs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Lvals_6;
        MR_Word ll_backend__code_util___VarType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 1)));
        MR_Word ll_backend__code_util___IsDummy_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 2)));
        MR_Word ll_backend__code_util___OrigType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 3)));
        MR_String ll_backend__code_util___Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 4)));
        MR_Word ll_backend__code_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 5)));
        MR_Word ll_backend__code_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Output_3, (MR_Integer) 6)));

        {
          ll_backend__code_util__Lvals_6 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(ll_backend__code_util__Outputs_4);
        }
        {
          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__code_util__Lval_5));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__code_util__Lvals_6));
        }
      }
    return ll_backend__code_util__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__HeadVar__2_2;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__code_util__Input_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Inputs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 4)));
        MR_Word ll_backend__code_util__Rvals_6;
        MR_String ll_backend__code_util___Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 0)));
        MR_Word ll_backend__code_util___VarType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 1)));
        MR_Word ll_backend__code_util___IsDummy_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 2)));
        MR_Word ll_backend__code_util___OrigType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 3)));
        MR_Word ll_backend__code_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 5)));
        MR_Word ll_backend__code_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Input_3, (MR_Integer) 6)));

        {
          ll_backend__code_util__Rvals_6 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(ll_backend__code_util__Inputs_4);
        }
        {
          ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__code_util__Rval_5));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__code_util__Rvals_6));
        }
      }
    return ll_backend__code_util__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2,
  MR_Word * ll_backend__code_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *ll_backend__code_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word ll_backend__code_util__Comp_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Comps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
        MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;

        {
          ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(ll_backend__code_util__Comps_5, &ll_backend__code_util__STATE_VARIABLE_Rvals_10_10, &ll_backend__code_util__STATE_VARIABLE_Lvals_11_11);
        }
        switch (MR_tag((MR_Word) ll_backend__code_util__Comp_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
              *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__code_util__Inputs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Comp_4, (MR_Integer) 0)));
              MR_Word ll_backend__code_util__NewRvals_17;

              {
                ll_backend__code_util__NewRvals_17 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(ll_backend__code_util__Inputs_14);
              }
              {
                mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__NewRvals_17, ll_backend__code_util__STATE_VARIABLE_Rvals_10_10, ll_backend__code_util__HeadVar__2_2);
              }
              *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__code_util__Outputs_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__Comp_4, (MR_Integer) 0)));
              MR_Word ll_backend__code_util__NewLvals_26;

              {
                ll_backend__code_util__NewLvals_26 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(ll_backend__code_util__Outputs_23);
              }
              {
                mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__NewLvals_26, ll_backend__code_util__STATE_VARIABLE_Lvals_11_11, ll_backend__code_util__HeadVar__3_3);
              }
              *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Comp_4, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
                  *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
                }
                break;
              case (MR_Integer) 1:
                {
                  *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
                  *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
                }
                break;
              case (MR_Integer) 2:
                {
                  *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
                  *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
                }
                break;
              case (MR_Integer) 3:
                {
                  *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_11_11;
                  *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_10_10;
                }
                break;
            }
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_0_12,
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Rvals_13,
  MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_0_14,
  MR_Word * ll_backend__code_util__STATE_VARIABLE_Lvals_15)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word ll_backend__code_util__NewRvals_10;
    MR_Word ll_backend__code_util__NewLvals_11;
    MR_String ll_backend__code_util__Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

    {
      ll_backend__code_util__instr_rvals_and_lvals_3_p_0(ll_backend__code_util__Uinstr_6, &ll_backend__code_util__NewRvals_10, &ll_backend__code_util__NewLvals_11);
    }
    {
      mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__STATE_VARIABLE_Rvals_0_12, ll_backend__code_util__NewRvals_10, ll_backend__code_util__STATE_VARIABLE_Rvals_13);
    }
    {
      mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__STATE_VARIABLE_Lvals_0_14, ll_backend__code_util__NewLvals_11, ll_backend__code_util__STATE_VARIABLE_Lvals_15);
    }
  }
}

static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__code_util__V_3;
        MR_Word ll_backend__code_util__Arg_4;
        MR_Word ll_backend__code_util__Rest0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__Loc_7;
        MR_Word ll_backend__code_util__Mode_8;
        MR_Word ll_backend__code_util__VarArgs0_10;
        MR_Word ll_backend__code_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));

        ll_backend__code_util__V_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_11, (MR_Integer) 0)));
        ll_backend__code_util__Arg_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_11, (MR_Integer) 1)));
        ll_backend__code_util__Loc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Arg_4, (MR_Integer) 0)));
        ll_backend__code_util__Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Arg_4, (MR_Integer) 1)));
        {
          ll_backend__code_util__build_input_arg_list_2_2_p_0(ll_backend__code_util__Rest0_5, &ll_backend__code_util__VarArgs0_10);
        }
        switch (ll_backend__code_util__Mode_8) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__code_util__Reg_9;
              MR_Word ll_backend__code_util__Var_12;
              MR_Word ll_backend__code_util__RegType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Loc_7, (MR_Integer) 0)));
              MR_Integer ll_backend__code_util__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Loc_7, (MR_Integer) 1)));

              {
                ll_backend__code_util__Reg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Reg_9, 0) = ((MR_Box) (ll_backend__code_util__RegType_13));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Reg_9, 1) = ((MR_Box) (ll_backend__code_util__N_14));
              }
              {
                ll_backend__code_util__Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_12, 0) = ((MR_Box) (ll_backend__code_util__V_3));
                MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_12, 1) = ((MR_Box) (ll_backend__code_util__Reg_9));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__code_util__HeadVar__2_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__Var_12));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__code_util__VarArgs0_10));
              }
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__VarArgs0_10;
            break;
        }
      }
  }
}

static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_util__succeeded;

        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__code_util__Goal_5;
            MR_Word ll_backend__code_util__Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__code_util__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__code_util__Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_8, (MR_Integer) 0)));
            MR_Word ll_backend__code_util__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_8, (MR_Integer) 1)));
            MR_Word ll_backend__code_util__GoalExpr_12;
            MR_Word ll_backend__code_util___GoalInfo_13;

            ll_backend__code_util__Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_8, (MR_Integer) 2)));
            ll_backend__code_util__GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_5, (MR_Integer) 0)));
            ll_backend__code_util___GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_5, (MR_Integer) 1)));
            switch (MR_tag((MR_Word) ll_backend__code_util__GoalExpr_12)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__code_util__SubGoal_59 = (MR_Word) MR_body(((MR_Word) ll_backend__code_util__GoalExpr_12), (MR_Integer) 0);
                  MR_Word ll_backend__code_util__Var_80;

                  {
                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoal_59, &ll_backend__code_util__Var_80);
                  }
                  ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_80);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__code_util__SubGoals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 2)));
                      MR_Word ll_backend__code_util__Var_68;
                      MR_Word ll_backend__code_util___ConjType_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 1)));

                      {
                        ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoals_45, &ll_backend__code_util__Var_68);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_68);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ll_backend__code_util__SubGoals_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__Var_69;

                      {
                        ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoals_62, &ll_backend__code_util__Var_69);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_69);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ll_backend__code_util__Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 3)));
                      MR_Word ll_backend__code_util__Var_86;
                      MR_Word ll_backend__code_util___Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util___Det_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 2)));

                      {
                        ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(ll_backend__code_util__Cases_48, &ll_backend__code_util__Var_86);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_86);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ll_backend__code_util__SubGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 2)));
                      MR_Word ll_backend__code_util__SubGoalInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__SubGoal_40, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__SubCodeModel_43;
                      MR_Word ll_backend__code_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__SubGoal_40, (MR_Integer) 0)));

                      {
                        ll_backend__code_util__SubCodeModel_43 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_util__SubGoalInfo_42);
                      }
                      switch (ll_backend__code_util__SubCodeModel_43) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            MR_Word ll_backend__code_util__Var_81;

                            {
                              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoal_40, &ll_backend__code_util__Var_81);
                            }
                            ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_81);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ll_backend__code_util__C_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 2)));
                      MR_Word ll_backend__code_util__T_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 3)));
                      MR_Word ll_backend__code_util__E_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 4)));
                      MR_Word ll_backend__code_util___Vars_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_12, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__Var_60;

                      {
                        ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__C_50, &ll_backend__code_util__Var_60);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_60);
                      if (ll_backend__code_util__succeeded)
                        {
                          ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                      else
                        {
                          MR_Word ll_backend__code_util__Var_61;

                          {
                            ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__T_51, &ll_backend__code_util__Var_61);
                          }
                          ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_61);
                          if (ll_backend__code_util__succeeded)
                            {
                              ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                            }
                          else
                            {
                              MR_Word ll_backend__code_util__Var_76;

                              {
                                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__E_52, &ll_backend__code_util__Var_76);
                              }
                              ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_76);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.goal_expr_may_alloc_temp_frame\'/2", (MR_String) "shorthand");
                        return;
                      }
                      ll_backend__code_util__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            if (ll_backend__code_util__succeeded)
              *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Cases_6;

                  ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_util__succeeded;

        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
        else
          {
            MR_Word ll_backend__code_util__Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__code_util__Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__code_util__GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_3, (MR_Integer) 0)));
            MR_Word ll_backend__code_util___GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Goal_3, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) ll_backend__code_util__GoalExpr_9)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__code_util__SubGoal_56 = (MR_Word) MR_body(((MR_Word) ll_backend__code_util__GoalExpr_9), (MR_Integer) 0);
                  MR_Word ll_backend__code_util__Var_77;

                  {
                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoal_56, &ll_backend__code_util__Var_77);
                  }
                  ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_77);
                }
                break;
              case (MR_Integer) 1:
              case (MR_Integer) 2:
                {
                  ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word ll_backend__code_util__SubGoals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 2)));
                      MR_Word ll_backend__code_util__Var_65;
                      MR_Word ll_backend__code_util___ConjType_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 1)));

                      {
                        ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoals_42, &ll_backend__code_util__Var_65);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_65);
                    }
                    break;
                  case (MR_Integer) 3:
                    {
                      MR_Word ll_backend__code_util__SubGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__Var_66;

                      {
                        ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoals_59, &ll_backend__code_util__Var_66);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_66);
                    }
                    break;
                  case (MR_Integer) 4:
                    {
                      MR_Word ll_backend__code_util__Cases_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 3)));
                      MR_Word ll_backend__code_util__Var_83;
                      MR_Word ll_backend__code_util___Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util___Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 2)));

                      {
                        ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(ll_backend__code_util__Cases_45, &ll_backend__code_util__Var_83);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_83);
                    }
                    break;
                  case (MR_Integer) 5:
                    {
                      MR_Word ll_backend__code_util__SubGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 2)));
                      MR_Word ll_backend__code_util__SubGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__SubGoal_37, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__SubCodeModel_40;
                      MR_Word ll_backend__code_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__SubGoal_37, (MR_Integer) 0)));

                      {
                        ll_backend__code_util__SubCodeModel_40 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_util__SubGoalInfo_39);
                      }
                      switch (ll_backend__code_util__SubCodeModel_40) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                        case (MR_Integer) 1:
                          {
                            MR_Word ll_backend__code_util__Var_78;

                            {
                              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoal_37, &ll_backend__code_util__Var_78);
                            }
                            ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_78);
                          }
                          break;
                        case (MR_Integer) 2:
                          {
                            ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                          }
                          break;
                      }
                    }
                    break;
                  case (MR_Integer) 6:
                    {
                      MR_Word ll_backend__code_util__C_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 2)));
                      MR_Word ll_backend__code_util__T_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 3)));
                      MR_Word ll_backend__code_util__E_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 4)));
                      MR_Word ll_backend__code_util___Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_9, (MR_Integer) 1)));
                      MR_Word ll_backend__code_util__Var_57;

                      {
                        ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__C_47, &ll_backend__code_util__Var_57);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_57);
                      if (ll_backend__code_util__succeeded)
                        {
                          ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                        }
                      else
                        {
                          MR_Word ll_backend__code_util__Var_58;

                          {
                            ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__T_48, &ll_backend__code_util__Var_58);
                          }
                          ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_58);
                          if (ll_backend__code_util__succeeded)
                            {
                              ll_backend__code_util__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
                            }
                          else
                            {
                              MR_Word ll_backend__code_util__Var_73;

                              {
                                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__E_49, &ll_backend__code_util__Var_73);
                              }
                              ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_73);
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 7:
                    {
                      {
                        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.goal_expr_may_alloc_temp_frame\'/2", (MR_String) "shorthand");
                        return;
                      }
                      ll_backend__code_util__succeeded = MR_TRUE;
                    }
                    break;
                }
                break;
            }
            if (ll_backend__code_util__succeeded)
              *ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 1;
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Goals_4;

                  ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_util__succeeded;

        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__code_util__STATE_VARIABLE_MaxRegF_5 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
            *ll_backend__code_util__STATE_VARIABLE_MaxRegR_3 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
          }
        else
          {
            MR_Word ll_backend__code_util__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__code_util__Lvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
            MR_Word ll_backend__code_util__RegType_16;
            MR_Integer ll_backend__code_util__N_17;

            ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__Lval_12)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__code_util__succeeded)
              {
                ll_backend__code_util__RegType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 0)));
                ll_backend__code_util__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 1)));
                switch (ll_backend__code_util__RegType_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4, &ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22);
                      }
                      ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2, &ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23);
                      }
                      ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
                    }
                    break;
                }
              }
            else
              {
                ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
                ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Lvals_13;
              MR_Integer ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegR_0_2 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
              MR_Integer ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegF_0_4 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;

              ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4 = ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegF_0_4;
              ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2 = ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegR_0_2;
              ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegR_3,
  MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * ll_backend__code_util__STATE_VARIABLE_MaxRegF_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_util__succeeded;

        if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *ll_backend__code_util__STATE_VARIABLE_MaxRegF_5 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
            *ll_backend__code_util__STATE_VARIABLE_MaxRegR_3 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
          }
        else
          {
            MR_Word ll_backend__code_util__Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__code_util__Lvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;
            MR_Integer ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
            MR_Word ll_backend__code_util__RegType_16;
            MR_Integer ll_backend__code_util__N_17;

            ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__Lval_12)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__code_util__succeeded)
              {
                ll_backend__code_util__RegType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 0)));
                ll_backend__code_util__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Lval_12, (MR_Integer) 1)));
                switch (ll_backend__code_util__RegType_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 1:
                    {
                      {
                        mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4, &ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22);
                      }
                      ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
                    }
                    break;
                  case (MR_Integer) 0:
                    {
                      {
                        mercury__int__max_3_p_0(ll_backend__code_util__N_17, ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2, &ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23);
                      }
                      ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
                    }
                    break;
                }
              }
            else
              {
                ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4;
                ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2;
              }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Lvals_13;
              MR_Integer ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegR_0_2 = ll_backend__code_util__STATE_VARIABLE_MaxRegR_23_23;
              MR_Integer ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegF_0_4 = ll_backend__code_util__STATE_VARIABLE_MaxRegF_22_22;

              ll_backend__code_util__STATE_VARIABLE_MaxRegF_0_4 = ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegF_0_4;
              ll_backend__code_util__STATE_VARIABLE_MaxRegR_0_2 = ll_backend__code_util__next_value_of_STATE_VARIABLE_MaxRegR_0_2;
              ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(
  MR_Word ll_backend__code_util__RttiProcLabel_4,
  MR_Word ll_backend__code_util__Immed_5)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Label_6;
    MR_Word ll_backend__code_util__ProcLabel_7;
    MR_Word ll_backend__code_util__Var_63;
    MR_Integer ll_backend__code_util__Var_70;
    MR_Word ll_backend__code_util__Var_71;
    MR_Word ll_backend__code_util__Var_62;
    MR_Word ll_backend__code_util__Var_64;
    MR_Word ll_backend__code_util__Var_65;
    MR_Word ll_backend__code_util__Var_66;
    MR_Word ll_backend__code_util__Var_67;
    MR_Word ll_backend__code_util__Var_68;
    MR_Word ll_backend__code_util__Var_69;
    MR_Word ll_backend__code_util__Var_72;
    MR_Integer ll_backend__code_util__Var_73;
    MR_String ll_backend__code_util__Var_74;
    MR_Word ll_backend__code_util__Var_75;
    MR_Word ll_backend__code_util__Var_76;
    MR_Word ll_backend__code_util__Var_77;

    {
      ll_backend__code_util__ProcLabel_7 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_4);
    }
    ll_backend__code_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 0)));
    ll_backend__code_util__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 1)));
    ll_backend__code_util__Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 2)));
    ll_backend__code_util__Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 3)));
    ll_backend__code_util__Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 4)));
    ll_backend__code_util__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 5)));
    ll_backend__code_util__Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 6)));
    ll_backend__code_util__Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 7)));
    ll_backend__code_util__Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 8)));
    ll_backend__code_util__Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 9)));
    ll_backend__code_util__Var_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
    ll_backend__code_util__Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_util__Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_util__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 11)));
    ll_backend__code_util__Var_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_util__Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    if ((ll_backend__code_util__Immed_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__code_util__EntryType_9;

        switch (ll_backend__code_util__Var_63) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_util__EntryType_9 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__code_util__EntryType_9 = (MR_Integer) 2;
            break;
        }
        {
          ll_backend__code_util__Label_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 0) = ((MR_Box) (ll_backend__code_util__EntryType_9));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_7));
        }
      }
    else
      {
        MR_Integer ll_backend__code_util__ProcsPerFunc_10;
        MR_Word ll_backend__code_util__CurPredId_11;
        MR_Integer ll_backend__code_util__CurProcId_12;
        MR_Word ll_backend__code_util__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Immed_5, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Var_14;
        MR_Word ll_backend__code_util__EntryType_85;

        ll_backend__code_util__ProcsPerFunc_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_13, (MR_Integer) 0)));
        ll_backend__code_util__Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_13, (MR_Integer) 1)));
        ll_backend__code_util__CurPredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_14, (MR_Integer) 0)));
        ll_backend__code_util__CurProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_14, (MR_Integer) 1)));
        ll_backend__code_util__succeeded = (ll_backend__code_util__ProcsPerFunc_10 == (MR_Integer) 0);
        if (!(ll_backend__code_util__succeeded))
          {
            {
              ll_backend__code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_util__Var_71, ll_backend__code_util__CurPredId_11);
            }
            if (ll_backend__code_util__succeeded)
              ll_backend__code_util__succeeded = (ll_backend__code_util__Var_70 == ll_backend__code_util__CurProcId_12);
          }
        if (ll_backend__code_util__succeeded)
          ll_backend__code_util__EntryType_85 = (MR_Integer) 0;
        else
          ll_backend__code_util__EntryType_85 = (MR_Integer) 1;
        {
          ll_backend__code_util__Label_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 0) = ((MR_Box) (ll_backend__code_util__EntryType_85));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_6, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_7));
        }
      }
    return ll_backend__code_util__Label_6;
  }
}

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
  MR_Box ll_backend__code_util__closure_arg,
  MR_Box ll_backend__code_util__wrapper_arg_1,
  MR_Box ll_backend__code_util__wrapper_arg_2,
  MR_Box * ll_backend__code_util__wrapper_arg_3,
  MR_Box ll_backend__code_util__wrapper_arg_4,
  MR_Box * ll_backend__code_util__wrapper_arg_5)
{
  {
    MR_Box ll_backend__code_util__closure = ll_backend__code_util__closure_arg;
    MR_Word ll_backend__code_util__conv1_STATE_VARIABLE_Rvals_13;
    MR_Word ll_backend__code_util__conv0_STATE_VARIABLE_Lvals_15;

    {
      ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(((MR_Word) ll_backend__code_util__wrapper_arg_1), ((MR_Word) ll_backend__code_util__wrapper_arg_2), &ll_backend__code_util__conv1_STATE_VARIABLE_Rvals_13, ((MR_Word) ll_backend__code_util__wrapper_arg_4), &ll_backend__code_util__conv0_STATE_VARIABLE_Lvals_15);
    }
    *ll_backend__code_util__wrapper_arg_3 = ((MR_Box) (ll_backend__code_util__conv1_STATE_VARIABLE_Rvals_13));
    *ll_backend__code_util__wrapper_arg_5 = ((MR_Box) (ll_backend__code_util__conv0_STATE_VARIABLE_Lvals_15));
  }
}

void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(
  MR_Word ll_backend__code_util__Instrs_4,
  MR_Word * ll_backend__code_util__Rvals_5,
  MR_Word * ll_backend__code_util__Lvals_6)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Var_8;
    MR_Word ll_backend__code_util__Var_9;
    MR_Box ll_backend__code_util__conv3_Rvals_5;
    MR_Box ll_backend__code_util__conv2_Lvals_6;

    {
      ll_backend__code_util__Var_8 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    }
    {
      ll_backend__code_util__Var_9 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    }
    {
      mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__code_util_scalar_common_1[1], (MR_Word) &ll_backend__code_util_scalar_common_1[2], (MR_Word) &ll_backend__code_util_scalar_common_2[1], ll_backend__code_util__Instrs_4, ((MR_Box) (ll_backend__code_util__Var_8)), &ll_backend__code_util__conv3_Rvals_5, ((MR_Box) (ll_backend__code_util__Var_9)), &ll_backend__code_util__conv2_Lvals_6);
    }
    *ll_backend__code_util__Rvals_5 = ((MR_Word) ll_backend__code_util__conv3_Rvals_5);
    *ll_backend__code_util__Lvals_6 = ((MR_Word) ll_backend__code_util__conv2_Lvals_6);
  }
}

void MR_CALL 
ll_backend__code_util__instr_rvals_and_lvals_3_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2,
  MR_Word * ll_backend__code_util__HeadVar__3_3)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    switch (MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__code_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
          }
          {
            *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          {
            *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
          }
          {
            *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__code_util__Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Integer ll_backend__code_util__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__code_util__Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(ll_backend__code_util__Instrs_8, ll_backend__code_util__HeadVar__2_2, ll_backend__code_util__HeadVar__3_3);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__code_util__Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_12)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_11)));
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__code_util__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_14)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_13)));
              }
            }
            break;
          case (MR_Integer) 3:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__code_util__Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_25)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__code_util__Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_30)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__code_util__Lval_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_32)));
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word ll_backend__code_util__Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_33)));
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__code_util__TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
              MR_Word ll_backend__code_util__TypeCtorInfo_143_143;
              MR_Word ll_backend__code_util__Lval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__SizeRval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ll_backend__code_util__MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word ll_backend__code_util__MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 8)));
              MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_48_48;
              MR_Word ll_backend__code_util__STATE_VARIABLE_Lvals_49_49;
              MR_Word ll_backend__code_util__STATE_VARIABLE_Rvals_50_50;
              MR_Word ll_backend__code_util__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__code_util__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ll_backend__code_util__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 6)));

              {
                ll_backend__code_util__STATE_VARIABLE_Rvals_48_48 = mercury__set__make_singleton_set_1_f_0(ll_backend__code_util__TypeCtorInfo_142_142, ((MR_Box) (ll_backend__code_util__SizeRval_37)));
              }
              ll_backend__code_util__TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
              {
                ll_backend__code_util__STATE_VARIABLE_Lvals_49_49 = mercury__set__make_singleton_set_1_f_0(ll_backend__code_util__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__code_util__Lval_34)));
              }
              if ((ll_backend__code_util__MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__code_util__STATE_VARIABLE_Rvals_50_50 = ll_backend__code_util__STATE_VARIABLE_Rvals_48_48;
              else
                {
                  MR_Word ll_backend__code_util__RegionRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeRegionRval_40, (MR_Integer) 0)));

                  {
                    mercury__set__insert_3_p_0(ll_backend__code_util__TypeCtorInfo_142_142, ((MR_Box) (ll_backend__code_util__RegionRval_44)), ll_backend__code_util__STATE_VARIABLE_Rvals_48_48, &ll_backend__code_util__STATE_VARIABLE_Rvals_50_50);
                  }
                }
              if ((ll_backend__code_util__MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  *ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__STATE_VARIABLE_Rvals_50_50;
                  *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_49_49;
                }
              else
                {
                  MR_Word ll_backend__code_util__ReuseRval_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeReuse_41, (MR_Integer) 0)));
                  MR_Word ll_backend__code_util__MaybeFlagLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeReuse_41, (MR_Integer) 1)));

                  {
                    mercury__set__insert_3_p_0(ll_backend__code_util__TypeCtorInfo_142_142, ((MR_Box) (ll_backend__code_util__ReuseRval_45)), ll_backend__code_util__STATE_VARIABLE_Rvals_50_50, ll_backend__code_util__HeadVar__2_2);
                  }
                  if ((ll_backend__code_util__MaybeFlagLval_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *ll_backend__code_util__HeadVar__3_3 = ll_backend__code_util__STATE_VARIABLE_Lvals_49_49;
                  else
                    {
                      MR_Word ll_backend__code_util__FlagLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MaybeFlagLval_46, (MR_Integer) 0)));

                      {
                        mercury__set__insert_3_p_0(ll_backend__code_util__TypeCtorInfo_143_143, ((MR_Box) (ll_backend__code_util__FlagLval_47)), ll_backend__code_util__STATE_VARIABLE_Lvals_49_49, ll_backend__code_util__HeadVar__3_3);
                      }
                    }
                }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_Word ll_backend__code_util__Lval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_53)));
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_Word ll_backend__code_util__Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_54)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_Word ll_backend__code_util__Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_55)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__code_util__IdRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__code_util__NumLval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ll_backend__code_util__AddrLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ll_backend__code_util__Var_63;
              MR_Word ll_backend__code_util__Var_64;
              MR_Word ll_backend__code_util__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__IdRval_60)));
              }
              {
                ll_backend__code_util__Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_64, 0) = ((MR_Box) (ll_backend__code_util__AddrLval_62));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__code_util__Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_63, 0) = ((MR_Box) (ll_backend__code_util__NumLval_61));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_63, 1) = ((MR_Box) (ll_backend__code_util__Var_64));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__Var_63);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__code_util__ValueRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__code_util__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__ValueRval_68)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_Word ll_backend__code_util__Lval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_71)));
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_Word ll_backend__code_util__Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util___Reason_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_72)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_Word ll_backend__code_util__Lval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_74)));
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_Word ll_backend__code_util__Rval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_75)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 24:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 25:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 26:
            {
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__code_util__Cs_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Rvals_91;
              MR_Word ll_backend__code_util__Lvals_92;
              MR_Word ll_backend__code_util__Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__code_util__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 4)));
              MR_Word ll_backend__code_util__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 5)));
              MR_Word ll_backend__code_util__Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 6)));
              MR_Word ll_backend__code_util__Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 7)));
              MR_Word ll_backend__code_util__Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 8)));
              MR_Word ll_backend__code_util__Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 9)));
              MR_Word ll_backend__code_util__Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 10)));

              {
                ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(ll_backend__code_util__Cs_82, &ll_backend__code_util__Rvals_91, &ll_backend__code_util__Lvals_92);
              }
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__Rvals_91);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__Lvals_92);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Word ll_backend__code_util__Lval_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__code_util__Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__code_util__Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_93)));
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__code_util__Lval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_96)));
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_Word ll_backend__code_util__Lval_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_98)));
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Word ll_backend__code_util__Lval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Integer ll_backend__code_util__Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_101)));
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__code_util__Rval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__Lval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ll_backend__code_util__Rval_102)));
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (ll_backend__code_util__Lval_103)));
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__code_util__LCRval_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__LCSRval_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Var_108;
              MR_Word ll_backend__code_util__Var_109;
              MR_Word ll_backend__code_util__Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));

              {
                ll_backend__code_util__Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_109, 0) = ((MR_Box) (ll_backend__code_util__LCSRval_106));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__code_util__Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_108, 0) = ((MR_Box) (ll_backend__code_util__LCRval_105));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_108, 1) = ((MR_Box) (ll_backend__code_util__Var_109));
              }
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__Var_108);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_Word ll_backend__code_util__LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Var_113;
              MR_Word ll_backend__code_util__Var_114;

              {
                ll_backend__code_util__Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_114, 0) = ((MR_Box) (ll_backend__code_util__LCSRval_112));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              {
                ll_backend__code_util__Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_113, 0) = ((MR_Box) (ll_backend__code_util__LCRval_111));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__Var_113, 1) = ((MR_Box) (ll_backend__code_util__Var_114));
              }
              {
                *ll_backend__code_util__HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ll_backend__code_util__Var_113);
              }
              {
                *ll_backend__code_util__HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
              }
            }
            break;
        }
        break;
    }
  }
}

MR_Integer MR_CALL 
ll_backend__code_util__size_of_cell_args_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Integer ll_backend__code_util__HeadVar__2_2;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__code_util__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Word ll_backend__code_util__CellArg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__CellArgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Integer ll_backend__code_util__Size_5;
        MR_Integer ll_backend__code_util__Sizes_6;

        switch (MR_tag((MR_Word) ll_backend__code_util__CellArg_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_util__Size_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 3:
            ll_backend__code_util__Size_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            ll_backend__code_util__Size_5 = (MR_Integer) 2;
            break;
        }
        {
          ll_backend__code_util__Sizes_6 = ll_backend__code_util__size_of_cell_args_1_f_0(ll_backend__code_util__CellArgs_4);
        }
        ll_backend__code_util__HeadVar__2_2 = (ll_backend__code_util__Size_5 + ll_backend__code_util__Sizes_6);
      }
    return ll_backend__code_util__HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
ll_backend__code_util__encode_num_generic_call_vars_2_f_0(
  MR_Integer ll_backend__code_util__NumR_4,
  MR_Integer ll_backend__code_util__NumF_5)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Integer ll_backend__code_util__HeadVar__3_3;
    MR_Integer ll_backend__code_util__Var_6;

    {
      ll_backend__code_util__Var_6 = mercury__int__f_60_60_2_f_0(ll_backend__code_util__NumF_5, (MR_Integer) 16);
    }
    ll_backend__code_util__HeadVar__3_3 = (ll_backend__code_util__NumR_4 | ll_backend__code_util__Var_6);
    return ll_backend__code_util__HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_p_0(
  MR_Word ll_backend__code_util__ProcInfo_3,
  MR_Word * ll_backend__code_util__VarLvals_4)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__HeadVars_5;
    MR_Word ll_backend__code_util__ArgInfos_6;
    MR_Word ll_backend__code_util__VarArgInfos_7;

    {
      hlds__hlds_pred__proc_info_get_headvars_2_p_0(ll_backend__code_util__ProcInfo_3, &ll_backend__code_util__HeadVars_5);
    }
    {
      hlds__hlds_pred__proc_info_arg_info_2_p_0(ll_backend__code_util__ProcInfo_3, &ll_backend__code_util__ArgInfos_6);
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, ll_backend__code_util__HeadVars_5, ll_backend__code_util__ArgInfos_6, &ll_backend__code_util__VarArgInfos_7);
    }
    {
      ll_backend__code_util__build_input_arg_list_2_2_p_0(ll_backend__code_util__VarArgInfos_7, ll_backend__code_util__VarLvals_4);
    }
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lvals_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__HeadVar__2_2;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word ll_backend__code_util__First_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__FirstLvals_5;
        MR_Word ll_backend__code_util__RestLvals_6;

        {
          ll_backend__code_util__FirstLvals_5 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__code_util__First_3);
        }
        {
          ll_backend__code_util__RestLvals_6 = ll_backend__code_util__lvals_in_lvals_1_f_0(ll_backend__code_util__Rest_4);
        }
        {
          ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__FirstLvals_5, ll_backend__code_util__RestLvals_6);
        }
      }
    return ll_backend__code_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lval_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__code_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 5:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__code_util__Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_10);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__code_util__Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_13);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__code_util__Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_12);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__code_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_11);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__code_util__Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_14);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__code_util__Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word ll_backend__code_util__Var_18;
              MR_Word ll_backend__code_util__Var_19;
              MR_Word ll_backend__code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__Var_18 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval1_16);
              }
              {
                ll_backend__code_util__Var_19 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval2_17);
              }
              {
                ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__Var_18, ll_backend__code_util__Var_19);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word ll_backend__code_util__Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

              {
                ll_backend__code_util__HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval_23);
              }
            }
            break;
          case (MR_Integer) 11:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 12:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    return ll_backend__code_util__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_rval_1_f_0(
  MR_Word ll_backend__code_util__HeadVar__1_1)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_util__succeeded;
        MR_Word ll_backend__code_util__HeadVar__2_2;

        switch (MR_tag((MR_Word) ll_backend__code_util__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__code_util__Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
              MR_Word ll_backend__code_util__Var_4;

              {
                ll_backend__code_util__Var_4 = ll_backend__code_util__lvals_in_lval_1_f_0(ll_backend__code_util__Lval_3);
              }
              {
                ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 0) = ((MR_Box) (ll_backend__code_util__Lval_3));
                MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__2_2, 1) = ((MR_Box) (ll_backend__code_util__Var_4));
              }
            }
            break;
          case (MR_Integer) 1:
            ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__code_util__Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
              MR_Integer ll_backend__code_util__Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Rval_7;

                ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 1:
                ll_backend__code_util__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__code_util__Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__code_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Rval_11;

                    ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__code_util__Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 2)));
                  MR_Word ll_backend__code_util__Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 3)));
                  MR_Word ll_backend__code_util__Var_15;
                  MR_Word ll_backend__code_util__Var_16;
                  MR_Word ll_backend__code_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

                  {
                    ll_backend__code_util__Var_15 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval1_13);
                  }
                  {
                    ll_backend__code_util__Var_16 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval2_14);
                  }
                  {
                    ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__Var_15, ll_backend__code_util__Var_16);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__code_util__MemRef_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

                  switch (MR_tag((MR_Word) ll_backend__code_util__MemRef_17)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_Word ll_backend__code_util__Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__MemRef_17, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Rval_19;

                          ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word ll_backend__code_util__Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__MemRef_17, (MR_Integer) 0)));

                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__Rval_20;

                          ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word ll_backend__code_util__Rval1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__MemRef_17, (MR_Integer) 0)));
                        MR_Word ll_backend__code_util__Rval2_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__MemRef_17, (MR_Integer) 2)));
                        MR_Word ll_backend__code_util__Var_24;
                        MR_Word ll_backend__code_util__Var_25;
                        MR_Word ll_backend__code_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__MemRef_17, (MR_Integer) 1)));

                        {
                          ll_backend__code_util__Var_24 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval1_21);
                        }
                        {
                          ll_backend__code_util__Var_25 = ll_backend__code_util__lvals_in_rval_1_f_0(ll_backend__code_util__Rval2_23);
                        }
                        {
                          ll_backend__code_util__HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__code_util__Var_24, ll_backend__code_util__Var_25);
                        }
                      }
                      break;
                  }
                }
                break;
            }
            break;
        }
        return ll_backend__code_util__HeadVar__2_2;
      }
      break;
    }
}

void MR_CALL 
ll_backend__code_util__negate_the_test_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__Instrs_2)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    if ((ll_backend__code_util__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.negate_the_test\'/2", (MR_String) "empty list");
          return;
        }
      }
    else
      {
        MR_Word ll_backend__code_util__Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__Test_10;
        MR_Word ll_backend__code_util__Target_11;
        MR_String ll_backend__code_util__Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Instr0_7, (MR_Integer) 1)));
        MR_Word ll_backend__code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Instr0_7, (MR_Integer) 0)));

        ll_backend__code_util__succeeded = ((((MR_tag((MR_Word) ll_backend__code_util__Var_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Var_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
        if (ll_backend__code_util__succeeded)
          {
            ll_backend__code_util__Test_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Var_15, (MR_Integer) 1)));
            ll_backend__code_util__Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Var_15, (MR_Integer) 2)));
            {
              MR_Word ll_backend__code_util__NewTest_13;
              MR_Word ll_backend__code_util__Var_16;
              MR_Word ll_backend__code_util__Var_17;

              {
                ll_backend__code_util__neg_rval_2_p_0(ll_backend__code_util__Test_10, &ll_backend__code_util__NewTest_13);
              }
              {
                ll_backend__code_util__Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), ll_backend__code_util__Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                MR_hl_field(MR_mktag(3), ll_backend__code_util__Var_17, 1) = ((MR_Box) (ll_backend__code_util__NewTest_13));
                MR_hl_field(MR_mktag(3), ll_backend__code_util__Var_17, 2) = ((MR_Box) (ll_backend__code_util__Target_11));
              }
              {
                ll_backend__code_util__Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_16, 0) = ((MR_Box) (ll_backend__code_util__Var_17));
                MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_16, 1) = ((MR_Box) (ll_backend__code_util__Comment_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                *ll_backend__code_util__Instrs_2 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__Var_16));
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
            }
          }
        else
          {
            MR_Word ll_backend__code_util__Instrs1_14;

            {
              ll_backend__code_util__negate_the_test_2_p_0(ll_backend__code_util__Instrs0_8, &ll_backend__code_util__Instrs1_14);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *ll_backend__code_util__Instrs_2 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__Instr0_7));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__code_util__Instrs1_14));
            }
          }
      }
  }
}

void MR_CALL 
ll_backend__code_util__neg_rval_2_p_0(
  MR_Word ll_backend__code_util__Rval_3,
  MR_Word * ll_backend__code_util__NegRval_4)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__NegRval0_5;

    switch (MR_tag((MR_Word) ll_backend__code_util__Rval_3)) {
      default:
        ll_backend__code_util__succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 0)))) {
          default:
            ll_backend__code_util__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__code_util__Const_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__NegConst_8;

              if ((ll_backend__code_util__Const_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
                {
                  ll_backend__code_util__NegConst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  ll_backend__code_util__succeeded = MR_TRUE;
                }
              else
              if ((ll_backend__code_util__Const_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__code_util__NegConst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                  ll_backend__code_util__succeeded = MR_TRUE;
                }
              else
                ll_backend__code_util__succeeded = MR_FALSE;
              if (ll_backend__code_util__succeeded)
                {
                  {
                    ll_backend__code_util__NegRval0_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 1) = ((MR_Box) (ll_backend__code_util__NegConst_8));
                  }
                  ll_backend__code_util__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__code_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 1)));

              ll_backend__code_util__NegRval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 2)));
              ll_backend__code_util__succeeded = (ll_backend__code_util__Var_10 == (MR_Integer) 7);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__code_util__Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 1)));
              MR_Word ll_backend__code_util__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 2)));
              MR_Word ll_backend__code_util__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__Rval_3, (MR_Integer) 3)));
              MR_Word ll_backend__code_util__NegOp_14;

              switch (MR_tag((MR_Word) ll_backend__code_util__Op_11)) {
                default:
                  ll_backend__code_util__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__code_util__Op_11)) {
                    default:
                      ll_backend__code_util__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 12:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 23:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 24:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 25:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 26:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 48:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 49));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 49:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 48));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 50:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 53));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 51:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 52));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 52:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 51));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 53:
                      {
                        ll_backend__code_util__NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 50));
                        ll_backend__code_util__succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (ll_backend__code_util__succeeded)
                {
                  {
                    ll_backend__code_util__NegRval0_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 1) = ((MR_Box) (ll_backend__code_util__NegOp_14));
                    MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 2) = ((MR_Box) (ll_backend__code_util__X_12));
                    MR_hl_field(MR_mktag(3), ll_backend__code_util__NegRval0_5, 3) = ((MR_Box) (ll_backend__code_util__Y_13));
                  }
                  ll_backend__code_util__succeeded = MR_TRUE;
                }
            }
            break;
        }
        break;
    }
    if (ll_backend__code_util__succeeded)
      *ll_backend__code_util__NegRval_4 = ll_backend__code_util__NegRval0_5;
    else
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
          *ll_backend__code_util__NegRval_4 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) ((MR_Integer) 7));
          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (ll_backend__code_util__Rval_3));
        }
      }
  }
}

void MR_CALL 
ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__May_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__code_util__succeeded;
        MR_Word ll_backend__code_util__GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__code_util___GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

        switch (MR_tag((MR_Word) ll_backend__code_util__GoalExpr_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__code_util__SubGoal_51 = (MR_Word) MR_body(((MR_Word) ll_backend__code_util__GoalExpr_3), (MR_Integer) 0);

              /* direct tailcall eliminated */
              {
                MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__SubGoal_51;

                ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
              }
              continue;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            *ll_backend__code_util__May_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *ll_backend__code_util__May_5 = (MR_Integer) 0;
                break;
              case (MR_Integer) 1:
                *ll_backend__code_util__May_5 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__code_util__SubGoals_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word ll_backend__code_util___ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 1)));

                  {
                    ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoals_37, ll_backend__code_util__May_5);
                  }
                }
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ll_backend__code_util__SubGoals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 1)));

                  {
                    ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(ll_backend__code_util__SubGoals_54, ll_backend__code_util__May_5);
                  }
                }
                break;
              case (MR_Integer) 4:
                {
                  MR_Word ll_backend__code_util__Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word ll_backend__code_util___Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__code_util___Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 2)));

                  {
                    ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(ll_backend__code_util__Cases_40, ll_backend__code_util__May_5);
                  }
                }
                break;
              case (MR_Integer) 5:
                {
                  MR_Word ll_backend__code_util__SubGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word ll_backend__code_util__SubGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__SubGoal_32, (MR_Integer) 1)));
                  MR_Word ll_backend__code_util__SubCodeModel_35;
                  MR_Word ll_backend__code_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__code_util__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__SubGoal_32, (MR_Integer) 0)));

                  {
                    ll_backend__code_util__SubCodeModel_35 = hlds__code_model__goal_info_get_code_model_1_f_0(ll_backend__code_util__SubGoalInfo_34);
                  }
                  switch (ll_backend__code_util__SubCodeModel_35) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                    case (MR_Integer) 1:
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__SubGoal_32;

                          ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                        }
                        continue;
                      }
                      break;
                    case (MR_Integer) 2:
                      *ll_backend__code_util__May_5 = (MR_Integer) 1;
                      break;
                  }
                }
                break;
              case (MR_Integer) 6:
                {
                  MR_Word ll_backend__code_util__C_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 2)));
                  MR_Word ll_backend__code_util__T_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 3)));
                  MR_Word ll_backend__code_util__E_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 4)));
                  MR_Word ll_backend__code_util___Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__code_util__GoalExpr_3, (MR_Integer) 1)));
                  MR_Word ll_backend__code_util__Var_52;

                  {
                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__C_42, &ll_backend__code_util__Var_52);
                  }
                  ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_52);
                  if (ll_backend__code_util__succeeded)
                    *ll_backend__code_util__May_5 = (MR_Integer) 1;
                  else
                    {
                      MR_Word ll_backend__code_util__Var_53;

                      {
                        ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(ll_backend__code_util__T_43, &ll_backend__code_util__Var_53);
                      }
                      ll_backend__code_util__succeeded = ((MR_Integer) 1 == ll_backend__code_util__Var_53);
                      if (ll_backend__code_util__succeeded)
                        *ll_backend__code_util__May_5 = (MR_Integer) 1;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word ll_backend__code_util__next_value_of_HeadVar__1_1 = ll_backend__code_util__E_44;

                            ll_backend__code_util__HeadVar__1_1 = ll_backend__code_util__next_value_of_HeadVar__1_1;
                          }
                          continue;
                        }
                    }
                }
                break;
              case (MR_Integer) 7:
                {
                  {
                    mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.goal_expr_may_alloc_temp_frame\'/2", (MR_String) "shorthand");
                    return;
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
ll_backend__code_util__max_mentioned_abs_regs_3_p_0(
  MR_Word ll_backend__code_util__Lvals_4,
  MR_Integer * ll_backend__code_util__MaxRegR_5,
  MR_Integer * ll_backend__code_util__MaxRegF_6)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    {
      ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(ll_backend__code_util__Lvals_4, (MR_Integer) 0, ll_backend__code_util__MaxRegR_5, (MR_Integer) 0, ll_backend__code_util__MaxRegF_6);
    }
  }
}

void MR_CALL 
ll_backend__code_util__max_mentioned_regs_3_p_0(
  MR_Word ll_backend__code_util__Lvals_4,
  MR_Integer * ll_backend__code_util__MaxRegR_5,
  MR_Integer * ll_backend__code_util__MaxRegF_6)
{
  {
    MR_bool ll_backend__code_util__succeeded;

    {
      ll_backend__code_util__max_mentioned_reg_2_5_p_0(ll_backend__code_util__Lvals_4, (MR_Integer) 0, ll_backend__code_util__MaxRegR_5, (MR_Integer) 0, ll_backend__code_util__MaxRegF_6);
    }
  }
}

void MR_CALL 
ll_backend__code_util__arg_loc_to_register_2_p_0(
  MR_Word ll_backend__code_util__HeadVar__1_1,
  MR_Word * ll_backend__code_util__HeadVar__2_2)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__RegType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ll_backend__code_util__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__HeadVar__1_1, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *ll_backend__code_util__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ll_backend__code_util__RegType_3));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (ll_backend__code_util__N_4));
    }
  }
}

MR_Word MR_CALL 
ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(
  MR_Word ll_backend__code_util__CodeAddr_3)
{
  {
    MR_bool ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__CodeAddr_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ll_backend__code_util__ProcLabel_4;
    MR_Word ll_backend__code_util__Label_5;

    if (ll_backend__code_util__succeeded)
      {
        ll_backend__code_util__Label_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__CodeAddr_3, (MR_Integer) 0)));
        {
          ll_backend__code_util__ProcLabel_4 = ll_backend__llds__get_proc_label_1_f_0(ll_backend__code_util__Label_5);
        }
      }
    else
      {
        MR_Word ll_backend__code_util__ProcLabelPrime_6;

        ll_backend__code_util__succeeded = ((MR_tag((MR_Word) ll_backend__code_util__CodeAddr_3)) == (MR_mktag((MR_Integer) 2)));
        if (ll_backend__code_util__succeeded)
          {
            ll_backend__code_util__ProcLabelPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__code_util__CodeAddr_3, (MR_Integer) 0)));
            ll_backend__code_util__ProcLabel_4 = ll_backend__code_util__ProcLabelPrime_6;
          }
        else
          {
            {
              mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "function \140ll_backend.code_util.extract_proc_label_from_code_addr\'/1", (MR_String) "failed");
            }
          }
      }
    return ll_backend__code_util__ProcLabel_4;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_internal_label_4_f_0(
  MR_Word ll_backend__code_util__ModuleInfo_6,
  MR_Word ll_backend__code_util__PredId_7,
  MR_Integer ll_backend__code_util__ProcId_8,
  MR_Integer ll_backend__code_util__LabelNum_9)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Label_10;
    MR_Word ll_backend__code_util__ProcLabel_11;

    {
      ll_backend__code_util__ProcLabel_11 = backend_libs__proc_label__make_proc_label_3_f_0(ll_backend__code_util__ModuleInfo_6, ll_backend__code_util__PredId_7, ll_backend__code_util__ProcId_8);
    }
    {
      ll_backend__code_util__Label_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), ll_backend__code_util__Label_10, 0) = ((MR_Box) (ll_backend__code_util__LabelNum_9));
      MR_hl_field(MR_mktag(0), ll_backend__code_util__Label_10, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_11));
    }
    return ll_backend__code_util__Label_10;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_4_f_0(
  MR_Word ll_backend__code_util__ModuleInfo_6,
  MR_Word ll_backend__code_util__PredId_7,
  MR_Integer ll_backend__code_util__ProcId_8,
  MR_Word ll_backend__code_util__Immed_9)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__Label_10;
    MR_Word ll_backend__code_util__RttiProcLabel_11;
    MR_Word ll_backend__code_util__ProcLabel_15;
    MR_Word ll_backend__code_util__Var_71;
    MR_Integer ll_backend__code_util__Var_78;
    MR_Word ll_backend__code_util__Var_79;
    MR_Word ll_backend__code_util__Var_70;
    MR_Word ll_backend__code_util__Var_72;
    MR_Word ll_backend__code_util__Var_73;
    MR_Word ll_backend__code_util__Var_74;
    MR_Word ll_backend__code_util__Var_75;
    MR_Word ll_backend__code_util__Var_76;
    MR_Word ll_backend__code_util__Var_77;
    MR_Word ll_backend__code_util__Var_80;
    MR_Integer ll_backend__code_util__Var_81;
    MR_String ll_backend__code_util__Var_82;
    MR_Word ll_backend__code_util__Var_83;
    MR_Word ll_backend__code_util__Var_84;
    MR_Word ll_backend__code_util__Var_85;

    {
      ll_backend__code_util__RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__code_util__ModuleInfo_6, ll_backend__code_util__PredId_7, ll_backend__code_util__ProcId_8);
    }
    {
      ll_backend__code_util__ProcLabel_15 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_11);
    }
    ll_backend__code_util__Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 0)));
    ll_backend__code_util__Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 1)));
    ll_backend__code_util__Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 2)));
    ll_backend__code_util__Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 3)));
    ll_backend__code_util__Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 4)));
    ll_backend__code_util__Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 5)));
    ll_backend__code_util__Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 6)));
    ll_backend__code_util__Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 7)));
    ll_backend__code_util__Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 8)));
    ll_backend__code_util__Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 9)));
    ll_backend__code_util__Var_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
    ll_backend__code_util__Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_util__Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_util__Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 11)));
    ll_backend__code_util__Var_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_util__Var_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    if ((ll_backend__code_util__Immed_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word ll_backend__code_util__EntryType_17;

        switch (ll_backend__code_util__Var_71) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__code_util__EntryType_17 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            ll_backend__code_util__EntryType_17 = (MR_Integer) 2;
            break;
        }
        {
          ll_backend__code_util__Label_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 0) = ((MR_Box) (ll_backend__code_util__EntryType_17));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_15));
        }
      }
    else
      {
        MR_Integer ll_backend__code_util__ProcsPerFunc_18;
        MR_Word ll_backend__code_util__CurPredId_19;
        MR_Integer ll_backend__code_util__CurProcId_20;
        MR_Word ll_backend__code_util__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__code_util__Immed_9, (MR_Integer) 0)));
        MR_Word ll_backend__code_util__Var_22;
        MR_Word ll_backend__code_util__EntryType_93;

        ll_backend__code_util__ProcsPerFunc_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_21, (MR_Integer) 0)));
        ll_backend__code_util__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_21, (MR_Integer) 1)));
        ll_backend__code_util__CurPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_22, (MR_Integer) 0)));
        ll_backend__code_util__CurProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__Var_22, (MR_Integer) 1)));
        ll_backend__code_util__succeeded = (ll_backend__code_util__ProcsPerFunc_18 == (MR_Integer) 0);
        if (!(ll_backend__code_util__succeeded))
          {
            {
              ll_backend__code_util__succeeded = hlds__hlds_pred____Unify____pred_id_0_0(ll_backend__code_util__Var_79, ll_backend__code_util__CurPredId_19);
            }
            if (ll_backend__code_util__succeeded)
              ll_backend__code_util__succeeded = (ll_backend__code_util__Var_78 == ll_backend__code_util__CurProcId_20);
          }
        if (ll_backend__code_util__succeeded)
          ll_backend__code_util__EntryType_93 = (MR_Integer) 0;
        else
          ll_backend__code_util__EntryType_93 = (MR_Integer) 1;
        {
          ll_backend__code_util__Label_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 0) = ((MR_Box) (ll_backend__code_util__EntryType_93));
          MR_hl_field(MR_mktag(1), ll_backend__code_util__Label_10, 1) = ((MR_Box) (ll_backend__code_util__ProcLabel_15));
        }
      }
    return ll_backend__code_util__Label_10;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_from_rtti_2_f_0(
  MR_Word ll_backend__code_util__RttiProcLabel_4,
  MR_Word ll_backend__code_util__Immed_5)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__ProcAddr_6;
    MR_Word ll_backend__code_util__ProcIsImported_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word ll_backend__code_util__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 0)));
    MR_Word ll_backend__code_util__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 1)));
    MR_Word ll_backend__code_util__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 2)));
    MR_String ll_backend__code_util__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 3)));
    MR_Integer ll_backend__code_util__Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 4)));
    MR_Word ll_backend__code_util__Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 5)));
    MR_Word ll_backend__code_util__Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 6)));
    MR_Integer ll_backend__code_util__Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 7)));
    MR_Word ll_backend__code_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 8)));
    MR_Word ll_backend__code_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 9)));
    MR_Word ll_backend__code_util__Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word ll_backend__code_util__Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word ll_backend__code_util__Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word ll_backend__code_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 11)));
    MR_Word ll_backend__code_util__Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);

    switch (ll_backend__code_util__ProcIsImported_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__code_util__Label_9;

          {
            ll_backend__code_util__Label_9 = ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(ll_backend__code_util__RttiProcLabel_4, ll_backend__code_util__Immed_5);
          }
          {
            ll_backend__code_util__ProcAddr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__code_util__ProcAddr_6, 0) = ((MR_Box) (ll_backend__code_util__Label_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__code_util__ProcLabel_8;

          {
            ll_backend__code_util__ProcLabel_8 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_4);
          }
          {
            ll_backend__code_util__ProcAddr_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ll_backend__code_util__ProcAddr_6, 0) = ((MR_Box) (ll_backend__code_util__ProcLabel_8));
          }
        }
        break;
    }
    return ll_backend__code_util__ProcAddr_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_4_f_0(
  MR_Word ll_backend__code_util__ModuleInfo_6,
  MR_Word ll_backend__code_util__PredId_7,
  MR_Integer ll_backend__code_util__ProcId_8,
  MR_Word ll_backend__code_util__Immed_9)
{
  {
    MR_bool ll_backend__code_util__succeeded;
    MR_Word ll_backend__code_util__ProcAddr_10;
    MR_Word ll_backend__code_util__RttiProcLabel_11;
    MR_Word ll_backend__code_util__ProcIsImported_15;
    MR_Word ll_backend__code_util__Var_18;
    MR_Word ll_backend__code_util__Var_19;
    MR_Word ll_backend__code_util__Var_20;
    MR_String ll_backend__code_util__Var_21;
    MR_Integer ll_backend__code_util__Var_22;
    MR_Word ll_backend__code_util__Var_23;
    MR_Word ll_backend__code_util__Var_24;
    MR_Integer ll_backend__code_util__Var_25;
    MR_Word ll_backend__code_util__Var_26;
    MR_Word ll_backend__code_util__Var_27;
    MR_Word ll_backend__code_util__Var_28;
    MR_Word ll_backend__code_util__Var_29;
    MR_Word ll_backend__code_util__Var_30;
    MR_Word ll_backend__code_util__Var_31;
    MR_Word ll_backend__code_util__Var_32;

    {
      ll_backend__code_util__RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ll_backend__code_util__ModuleInfo_6, ll_backend__code_util__PredId_7, ll_backend__code_util__ProcId_8);
    }
    ll_backend__code_util__Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 0)));
    ll_backend__code_util__Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 1)));
    ll_backend__code_util__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 2)));
    ll_backend__code_util__Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 3)));
    ll_backend__code_util__Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 4)));
    ll_backend__code_util__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 5)));
    ll_backend__code_util__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 6)));
    ll_backend__code_util__Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 7)));
    ll_backend__code_util__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 8)));
    ll_backend__code_util__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 9)));
    ll_backend__code_util__Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
    ll_backend__code_util__Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    ll_backend__code_util__Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    ll_backend__code_util__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 11)));
    ll_backend__code_util__Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    ll_backend__code_util__ProcIsImported_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__code_util__RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    switch (ll_backend__code_util__ProcIsImported_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__code_util__Label_17;

          {
            ll_backend__code_util__Label_17 = ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(ll_backend__code_util__RttiProcLabel_11, ll_backend__code_util__Immed_9);
          }
          {
            ll_backend__code_util__ProcAddr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ll_backend__code_util__ProcAddr_10, 0) = ((MR_Box) (ll_backend__code_util__Label_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__code_util__ProcLabel_16;

          {
            ll_backend__code_util__ProcLabel_16 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__code_util__RttiProcLabel_11);
          }
          {
            ll_backend__code_util__ProcAddr_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ll_backend__code_util__ProcAddr_10, 0) = ((MR_Box) (ll_backend__code_util__ProcLabel_16));
          }
        }
        break;
    }
    return ll_backend__code_util__ProcAddr_10;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__code_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module ll_backend.code_util. */
