/*
** Automatically generated from `code_util.m'
** by the Mercury compiler,
** version rotd-2017-10-24
** configured for x86_64-pc-linux-gnu.
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


// :- module ll_backend.code_util.
// :- implementation.

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
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
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

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rvals_0_12,
  MR_Word * STATE_VARIABLE_Rvals_13,
  MR_Word STATE_VARIABLE_Lvals_0_14,
  MR_Word * STATE_VARIABLE_Lvals_15);

static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
  MR_Word HeadVar__1_1);

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5);

static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5);

static MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(
  MR_Word RttiProcLabel_4,
  MR_Word Immed_5);

static MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
ll_backend__code_util____Compare____immed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


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
  MR_TYPECTOR_REP_EQUIV_GROUND,
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

void MR_CALL 
ll_backend__code_util____Compare____immed_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[3], HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[3], ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Rvals_0_12,
  MR_Word * STATE_VARIABLE_Rvals_13,
  MR_Word STATE_VARIABLE_Lvals_0_14,
  MR_Word * STATE_VARIABLE_Lvals_15)
{
  {
    MR_Word Uinstr_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word NewRvals_10;
    MR_Word NewLvals_11;
    MR_String Var_7 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    ll_backend__code_util__instr_rvals_and_lvals_3_p_0(Uinstr_6, &NewRvals_10, &NewLvals_11);
    mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, STATE_VARIABLE_Rvals_0_12, NewRvals_10, STATE_VARIABLE_Rvals_13);
    mercury__set__union_3_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, STATE_VARIABLE_Lvals_0_14, NewLvals_11, STATE_VARIABLE_Lvals_15);
  }
}

void MR_CALL 
ll_backend__code_util__instr_rvals_and_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 1:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
        *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
      }
      break;
    case (MR_Integer) 2:
      {
        *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
        *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Instrs_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
            MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer Var_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(Instrs_8, HeadVar__2_2, HeadVar__3_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_12)));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_11)));
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_14)));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_13)));
          }
          break;
        case (MR_Integer) 3:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 4:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 5:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 6:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Rval_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_25)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 8:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word Rval_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_30)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word Lval_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_32)));
          }
          break;
        case (MR_Integer) 11:
          {
            MR_Word Lval_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_33)));
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word TypeCtorInfo_142_142 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0;
            MR_Word TypeCtorInfo_143_143;
            MR_Word Lval_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word SizeRval_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
            MR_Word MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7)));
            MR_Word MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 8)));
            MR_Word STATE_VARIABLE_Rvals_48_48;
            MR_Word STATE_VARIABLE_Lvals_49_49;
            MR_Word STATE_VARIABLE_Rvals_50_50;
            MR_Word Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6)));

            STATE_VARIABLE_Rvals_48_48 = mercury__set__make_singleton_set_1_f_0(TypeCtorInfo_142_142, ((MR_Box) (SizeRval_37)));
            TypeCtorInfo_143_143 = (MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0;
            STATE_VARIABLE_Lvals_49_49 = mercury__set__make_singleton_set_1_f_0(TypeCtorInfo_143_143, ((MR_Box) (Lval_34)));
            if ((MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              STATE_VARIABLE_Rvals_50_50 = STATE_VARIABLE_Rvals_48_48;
            else
            {
              MR_Word RegionRval_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRegionRval_40, (MR_Integer) 0)));

              mercury__set__insert_3_p_0(TypeCtorInfo_142_142, ((MR_Box) (RegionRval_44)), STATE_VARIABLE_Rvals_48_48, &STATE_VARIABLE_Rvals_50_50);
            }
            if ((MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_50_50;
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_49_49;
            }
            else
            {
              MR_Word ReuseRval_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse_41, (MR_Integer) 0)));
              MR_Word MaybeFlagLval_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse_41, (MR_Integer) 1)));

              mercury__set__insert_3_p_0(TypeCtorInfo_142_142, ((MR_Box) (ReuseRval_45)), STATE_VARIABLE_Rvals_50_50, HeadVar__2_2);
              if ((MaybeFlagLval_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *HeadVar__3_3 = STATE_VARIABLE_Lvals_49_49;
              else
              {
                MR_Word FlagLval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFlagLval_46, (MR_Integer) 0)));

                mercury__set__insert_3_p_0(TypeCtorInfo_143_143, ((MR_Box) (FlagLval_47)), STATE_VARIABLE_Lvals_49_49, HeadVar__3_3);
              }
            }
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word Lval_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_53)));
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Word Rval_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_54)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_Word Rval_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_55)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 16:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word IdRval_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word NumLval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
            MR_Word AddrLval_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
            MR_Word Var_63;
            MR_Word Var_64;
            MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (IdRval_60)));
            {
              Var_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_64, 0) = ((MR_Box) (AddrLval_62));
              MR_hl_field(MR_mktag(1), Var_64, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (NumLval_61));
              MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) (Var_64));
            }
            *HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Var_63);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word ValueRval_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (ValueRval_68)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 19:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_Word Lval_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_71)));
          }
          break;
        case (MR_Integer) 21:
          {
            MR_Word Rval_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word _Reason_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_72)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_Word Lval_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_74)));
          }
          break;
        case (MR_Integer) 23:
          {
            MR_Word Rval_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_75)));
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 24:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 25:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 26:
          {
            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Cs_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word Rvals_91;
            MR_Word Lvals_92;
            MR_Word Var_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 4)));
            MR_Word Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 5)));
            MR_Word Var_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 6)));
            MR_Word Var_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 7)));
            MR_Word Var_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 8)));
            MR_Word Var_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 9)));
            MR_Word Var_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 10)));

            ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(Cs_82, &Rvals_91, &Lvals_92);
            *HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, Rvals_91);
            *HeadVar__3_3 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Lvals_92);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Word Lval_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer Var_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer Var_95 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_93)));
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Lval_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_96)));
          }
          break;
        case (MR_Integer) 30:
          {
            MR_Word Lval_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Var_99 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_98)));
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Word Lval_101 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Integer Var_100 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

            *HeadVar__2_2 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_101)));
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word Rval_102 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word Lval_103 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word Var_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));

            *HeadVar__2_2 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, ((MR_Box) (Rval_102)));
            *HeadVar__3_3 = mercury__set__make_singleton_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ((MR_Box) (Lval_103)));
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCRval_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word LCSRval_106 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word Var_108;
            MR_Word Var_109;
            MR_Word Var_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));

            {
              Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (LCSRval_106));
              MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_108 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_108, 0) = ((MR_Box) (LCRval_105));
              MR_hl_field(MR_mktag(1), Var_108, 1) = ((MR_Box) (Var_109));
            }
            *HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, Var_108);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_Word LCRval_111 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word LCSRval_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word Var_113;
            MR_Word Var_114;

            {
              Var_114 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_114, 0) = ((MR_Box) (LCSRval_112));
              MR_hl_field(MR_mktag(1), Var_114, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            }
            {
              Var_113 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_113, 0) = ((MR_Box) (LCRval_111));
              MR_hl_field(MR_mktag(1), Var_113, 1) = ((MR_Box) (Var_114));
            }
            *HeadVar__2_2 = mercury__set__list_to_set_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, Var_113);
            *HeadVar__3_3 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
  else
  {
    MR_Word Comp_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word Comps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word STATE_VARIABLE_Rvals_10_10;
    MR_Word STATE_VARIABLE_Lvals_11_11;

    ll_backend__code_util__foreign_proc_components_get_rvals_and_lvals_3_p_0(Comps_5, &STATE_VARIABLE_Rvals_10_10, &STATE_VARIABLE_Lvals_11_11);
    switch (MR_tag((MR_Word) Comp_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__3_3 = STATE_VARIABLE_Lvals_11_11;
          *HeadVar__2_2 = STATE_VARIABLE_Rvals_10_10;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Inputs_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Comp_4, (MR_Integer) 0)));
          MR_Word NewRvals_17;

          NewRvals_17 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(Inputs_14);
          mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0, NewRvals_17, STATE_VARIABLE_Rvals_10_10, HeadVar__2_2);
          *HeadVar__3_3 = STATE_VARIABLE_Lvals_11_11;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Outputs_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), Comp_4, (MR_Integer) 0)));
          MR_Word NewLvals_26;

          NewLvals_26 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(Outputs_23);
          mercury__list__append_3_p_1((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, NewLvals_26, STATE_VARIABLE_Lvals_11_11, HeadVar__3_3);
          *HeadVar__2_2 = STATE_VARIABLE_Rvals_10_10;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Comp_4, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_11_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_10_10;
            }
            break;
          case (MR_Integer) 1:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_11_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_10_10;
            }
            break;
          case (MR_Integer) 2:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_11_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_10_10;
            }
            break;
          case (MR_Integer) 3:
            {
              *HeadVar__3_3 = STATE_VARIABLE_Lvals_11_11;
              *HeadVar__2_2 = STATE_VARIABLE_Rvals_10_10;
            }
            break;
        }
        break;
    }
  }
}

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Output_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Outputs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 0)));
      MR_Word Lvals_6;
      MR_Word _VarType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 1)));
      MR_Word _IsDummy_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 2)));
      MR_Word _OrigType_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 3)));
      MR_String _Name_10 = ((MR_String) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 4)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 5)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Output_3, (MR_Integer) 6)));

      Lvals_6 = ll_backend__code_util__foreign_proc_outputs_get_lvals_1_f_0(Outputs_4);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Lval_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Lvals_6));
      }
    }
    return HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Input_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Inputs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Rval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 4)));
      MR_Word Rvals_6;
      MR_String _Name_7 = ((MR_String) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 0)));
      MR_Word _VarType_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 1)));
      MR_Word _IsDummy_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 2)));
      MR_Word _OrigType_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 3)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 5)));
      MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_3, (MR_Integer) 6)));

      Rvals_6 = ll_backend__code_util__foreign_proc_inputs_get_rvals_1_f_0(Inputs_4);
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Rval_5));
        MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Rvals_6));
      }
    }
    return HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_STATE_VARIABLE_Rvals_13;
    MR_Word conv0_STATE_VARIABLE_Lvals_15;

    ll_backend__code_util__instrs_rvals_and_lvals_acc_5_p_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), &conv1_STATE_VARIABLE_Rvals_13, ((MR_Word) wrapper_arg_4), &conv0_STATE_VARIABLE_Lvals_15);
    *wrapper_arg_3 = ((MR_Box) (conv1_STATE_VARIABLE_Rvals_13));
    *wrapper_arg_5 = ((MR_Box) (conv0_STATE_VARIABLE_Lvals_15));
  }
}

void MR_CALL 
ll_backend__code_util__instrs_rvals_and_lvals_3_p_0(
  MR_Word Instrs_4,
  MR_Word * Rvals_5,
  MR_Word * Lvals_6)
{
  {
    MR_Word Var_8;
    MR_Word Var_9;
    MR_Box conv3_Rvals_5;
    MR_Box conv2_Lvals_6;

    Var_8 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_rval_0);
    Var_9 = mercury__set__init_0_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0);
    mercury__list__foldl2_6_p_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_instruction_0, (MR_Word) &ll_backend__code_util_scalar_common_1[1], (MR_Word) &ll_backend__code_util_scalar_common_1[2], (MR_Word) &ll_backend__code_util_scalar_common_2[1], Instrs_4, ((MR_Box) (Var_8)), &conv3_Rvals_5, ((MR_Box) (Var_9)), &conv2_Lvals_6);
    *Rvals_5 = ((MR_Word) conv3_Rvals_5);
    *Lvals_6 = ((MR_Word) conv2_Lvals_6);
  }
}

MR_Integer MR_CALL 
ll_backend__code_util__size_of_cell_args_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Integer HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word CellArg_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word CellArgs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer Size_5;
      MR_Integer Sizes_6;

      switch (MR_tag((MR_Word) CellArg_3)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Size_5 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 3:
          Size_5 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          Size_5 = (MR_Integer) 2;
          break;
      }
      Sizes_6 = ll_backend__code_util__size_of_cell_args_1_f_0(CellArgs_4);
      HeadVar__2_2 = (Size_5 + Sizes_6);
    }
    return HeadVar__2_2;
  }
}

MR_Integer MR_CALL 
ll_backend__code_util__encode_num_generic_call_vars_2_f_0(
  MR_Integer NumR_4,
  MR_Integer NumF_5)
{
  {
    MR_Integer HeadVar__3_3;
    MR_Integer Var_6;

    Var_6 = mercury__int__f_60_60_2_f_0(NumF_5, (MR_Integer) 16);
    HeadVar__3_3 = (NumR_4 | Var_6);
    return HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_p_0(
  MR_Word ProcInfo_3,
  MR_Word * VarLvals_4)
{
  {
    MR_Word HeadVars_5;
    MR_Word ArgInfos_6;
    MR_Word VarArgInfos_7;

    hlds__hlds_pred__proc_info_get_headvars_2_p_0(ProcInfo_3, &HeadVars_5);
    hlds__hlds_pred__proc_info_arg_info_2_p_0(ProcInfo_3, &ArgInfos_6);
    mercury__assoc_list__from_corresponding_lists_3_p_0((MR_Word) &ll_backend__code_util_scalar_common_1[0], (MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_arg_info_0, HeadVars_5, ArgInfos_6, &VarArgInfos_7);
    ll_backend__code_util__build_input_arg_list_2_2_p_0(VarArgInfos_7, VarLvals_4);
  }
}

static void MR_CALL 
ll_backend__code_util__build_input_arg_list_2_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word V_3;
    MR_Word Arg_4;
    MR_Word Rest0_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    MR_Word Loc_7;
    MR_Word Mode_8;
    MR_Word VarArgs0_10;
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));

    V_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 0)));
    Arg_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_11, (MR_Integer) 1)));
    Loc_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 0)));
    Mode_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Arg_4, (MR_Integer) 1)));
    ll_backend__code_util__build_input_arg_list_2_2_p_0(Rest0_5, &VarArgs0_10);
    switch (Mode_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Reg_9;
          MR_Word Var_12;
          MR_Word RegType_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Loc_7, (MR_Integer) 0)));
          MR_Integer N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Loc_7, (MR_Integer) 1)));

          {
            Reg_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Reg_9, 0) = ((MR_Box) (RegType_13));
            MR_hl_field(MR_mktag(1), Reg_9, 1) = ((MR_Box) (N_14));
          }
          {
            Var_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_12, 0) = ((MR_Box) (V_3));
            MR_hl_field(MR_mktag(0), Var_12, 1) = ((MR_Box) (Reg_9));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__2_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (VarArgs0_10));
          }
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *HeadVar__2_2 = VarArgs0_10;
        break;
    }
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lvals_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word First_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Rest_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word FirstLvals_5;
      MR_Word RestLvals_6;

      FirstLvals_5 = ll_backend__code_util__lvals_in_lval_1_f_0(First_3);
      RestLvals_6 = ll_backend__code_util__lvals_in_lvals_1_f_0(Rest_4);
      HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, FirstLvals_5, RestLvals_6);
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_lval_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 4:
            {
              MR_Word Rval_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_10);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Rval_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_13);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Rval_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_12);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_11);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word Rval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_14);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word Rval1_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_Word Rval2_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
              MR_Word Var_18;
              MR_Word Var_19;
              MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              Var_18 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval1_16);
              Var_19 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval2_17);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Var_18, Var_19);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_Word Rval_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              HeadVar__2_2 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval_23);
            }
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__lvals_in_rval_1_f_0(
  MR_Word HeadVar__1_1)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__2_2;

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word Var_4;

          Var_4 = ll_backend__code_util__lvals_in_lval_1_f_0(Lval_3);
          {
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Lval_3));
            MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Var_4));
          }
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_Word Rval_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
          MR_Integer Var_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
          MR_Word next_value_of_HeadVar__1_1 = Rval_7;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 2:
            {
              MR_Word Rval_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_Word next_value_of_HeadVar__1_1 = Rval_11;

              // direct tailcall eliminated
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Rval1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
              MR_Word Rval2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
              MR_Word Var_15;
              MR_Word Var_16;
              MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              Var_15 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval1_13);
              Var_16 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval2_14);
              HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Var_15, Var_16);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word MemRef_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              switch (MR_tag((MR_Word) MemRef_17)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Rval_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_17, (MR_Integer) 0)));
                    MR_Word next_value_of_HeadVar__1_1 = Rval_19;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Rval_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_17, (MR_Integer) 0)));
                    MR_Word next_value_of_HeadVar__1_1 = Rval_20;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Rval1_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 0)));
                    MR_Word Rval2_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 2)));
                    MR_Word Var_24;
                    MR_Word Var_25;
                    MR_Word Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_17, (MR_Integer) 1)));

                    Var_24 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval1_21);
                    Var_25 = ll_backend__code_util__lvals_in_rval_1_f_0(Rval2_23);
                    HeadVar__2_2 = mercury__list__f_43_43_2_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Var_24, Var_25);
                  }
                  break;
              }
            }
            break;
        }
        break;
    }
    return HeadVar__2_2;
    break;
  }
}

void MR_CALL 
ll_backend__code_util__negate_the_test_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * Instrs_2)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "predicate \140ll_backend.code_util.negate_the_test\'/2", (MR_String) "empty list");
        return;
      }
    }
    else
    {
      MR_Word Instr0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Test_10;
      MR_Word Target_11;
      MR_String Comment_12 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 1)));
      MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr0_7, (MR_Integer) 0)));

      succeeded = ((((MR_tag((MR_Word) Var_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 0)))) == (MR_Integer) 9)));
      if (succeeded)
      {
        Test_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 1)));
        Target_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_15, (MR_Integer) 2)));
        {
          MR_Word NewTest_13;
          MR_Word Var_16;
          MR_Word Var_17;

          ll_backend__code_util__neg_rval_2_p_0(Test_10, &NewTest_13);
          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Var_17, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
            MR_hl_field(MR_mktag(3), Var_17, 1) = ((MR_Box) (NewTest_13));
            MR_hl_field(MR_mktag(3), Var_17, 2) = ((MR_Box) (Target_11));
          }
          {
            Var_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_16, 0) = ((MR_Box) (Var_17));
            MR_hl_field(MR_mktag(0), Var_16, 1) = ((MR_Box) (Comment_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *Instrs_2 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
        }
      }
      else
      {
        MR_Word Instrs1_14;

        ll_backend__code_util__negate_the_test_2_p_0(Instrs0_8, &Instrs1_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *Instrs_2 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Instr0_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Instrs1_14));
        }
      }
    }
  }
}

void MR_CALL 
ll_backend__code_util__neg_rval_2_p_0(
  MR_Word Rval_3,
  MR_Word * NegRval_4)
{
  {
    MR_bool succeeded;
    MR_Word NegRval0_5;

    switch (MR_tag((MR_Word) Rval_3)) {
      default:
        succeeded = MR_FALSE;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 0)))) {
          default:
            succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word Const_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));
              MR_Word NegConst_8;

              if ((Const_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
              {
                NegConst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                succeeded = MR_TRUE;
              }
              else
              if ((Const_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                NegConst_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
                succeeded = MR_TRUE;
              }
              else
                succeeded = MR_FALSE;
              if (succeeded)
              {
                {
                  NegRval0_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NegRval0_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), NegRval0_5, 1) = ((MR_Box) (NegConst_8));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));

              NegRval0_5 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2)));
              succeeded = (Var_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Op_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 1)));
              MR_Word X_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 2)));
              MR_Word Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_3, (MR_Integer) 3)));
              MR_Word NegOp_14;

              switch (MR_tag((MR_Word) Op_11)) {
                default:
                  succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 0:
                  switch (MR_unmkbody(Op_11)) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 4:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 5:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 6:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 7:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 8:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 16:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 17:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 18:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 19:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 20:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19));
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 21:
                      {
                        NegOp_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18));
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 0)))) {
                    default:
                      succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 8:
                      {
                        MR_Word T_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                        {
                          NegOp_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NegOp_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                          MR_hl_field(MR_mktag(3), NegOp_14, 1) = ((MR_Box) (T_15));
                        }
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 9:
                      {
                        MR_Word T_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                        {
                          NegOp_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NegOp_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
                          MR_hl_field(MR_mktag(3), NegOp_14, 1) = ((MR_Box) (T_16));
                        }
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 12:
                      {
                        MR_Word T_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                        {
                          NegOp_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NegOp_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 15));
                          MR_hl_field(MR_mktag(3), NegOp_14, 1) = ((MR_Box) (T_17));
                        }
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 13:
                      {
                        MR_Word T_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                        {
                          NegOp_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NegOp_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 14));
                          MR_hl_field(MR_mktag(3), NegOp_14, 1) = ((MR_Box) (T_19));
                        }
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 14:
                      {
                        MR_Word T_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                        {
                          NegOp_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NegOp_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 13));
                          MR_hl_field(MR_mktag(3), NegOp_14, 1) = ((MR_Box) (T_18));
                        }
                        succeeded = MR_TRUE;
                      }
                      break;
                    case (MR_Integer) 15:
                      {
                        MR_Word T_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Op_11, (MR_Integer) 1)));

                        {
                          NegOp_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), NegOp_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 12));
                          MR_hl_field(MR_mktag(3), NegOp_14, 1) = ((MR_Box) (T_20));
                        }
                        succeeded = MR_TRUE;
                      }
                      break;
                  }
                  break;
              }
              if (succeeded)
              {
                {
                  NegRval0_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), NegRval0_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), NegRval0_5, 1) = ((MR_Box) (NegOp_14));
                  MR_hl_field(MR_mktag(3), NegRval0_5, 2) = ((MR_Box) (X_12));
                  MR_hl_field(MR_mktag(3), NegRval0_5, 3) = ((MR_Box) (Y_13));
                }
                succeeded = MR_TRUE;
              }
            }
            break;
        }
        break;
    }
    if (succeeded)
      *NegRval_4 = NegRval0_5;
    else
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        *NegRval_4 = base;
        MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
        MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (Rval_3));
      }
    }
  }
}

void MR_CALL 
ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * May_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word GoalExpr_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word _GoalInfo_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    // setup for model_det tailcalls optimized into a loop
    switch (MR_tag((MR_Word) GoalExpr_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SubGoal_51 = (MR_Word) MR_body(((MR_Word) GoalExpr_3), (MR_Integer) 0);
          MR_Word next_value_of_HeadVar__1_1 = SubGoal_51;

          // direct tailcall eliminated
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          continue;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        *May_5 = (MR_Integer) 0;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *May_5 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *May_5 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word SubGoals_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
              MR_Word _ConjType_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));

              ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_37, May_5);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word SubGoals_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));

              ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_54, May_5);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word Cases_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
              MR_Word _Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word _Det_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));

              ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(Cases_40, May_5);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word SubGoal_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
              MR_Word SubGoalInfo_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_32, (MR_Integer) 1)));
              MR_Word SubCodeModel_35;
              MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_32, (MR_Integer) 0)));

              SubCodeModel_35 = hlds__code_model__goal_info_get_code_model_1_f_0(SubGoalInfo_34);
              switch (SubCodeModel_35) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                case (MR_Integer) 1:
                  {
                    MR_Word next_value_of_HeadVar__1_1 = SubGoal_32;

                    // direct tailcall eliminated
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    continue;
                  }
                  break;
                case (MR_Integer) 2:
                  *May_5 = (MR_Integer) 1;
                  break;
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word C_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 2)));
              MR_Word T_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 3)));
              MR_Word E_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 4)));
              MR_Word _Vars_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_3, (MR_Integer) 1)));
              MR_Word Var_52;

              ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(C_42, &Var_52);
              succeeded = ((MR_Integer) 1 == Var_52);
              if (succeeded)
                *May_5 = (MR_Integer) 1;
              else
              {
                MR_Word Var_53;

                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(T_43, &Var_53);
                succeeded = ((MR_Integer) 1 == Var_53);
                if (succeeded)
                  *May_5 = (MR_Integer) 1;
                else
                {
                  MR_Word next_value_of_HeadVar__1_1 = E_44;

                  // direct tailcall eliminated
                  HeadVar__1_1 = next_value_of_HeadVar__1_1;
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
    break;
  }
}

static void MR_CALL 
ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_5;
      MR_Word Cases_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Var_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0)));
      MR_Word Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1)));
      MR_Word GoalExpr_12;
      MR_Word _GoalInfo_13;

      Goal_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 2)));
      GoalExpr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 0)));
      _GoalInfo_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_5, (MR_Integer) 1)));
      switch (MR_tag((MR_Word) GoalExpr_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_59 = (MR_Word) MR_body(((MR_Word) GoalExpr_12), (MR_Integer) 0);
            MR_Word Var_80;

            ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_59, &Var_80);
            succeeded = ((MR_Integer) 1 == Var_80);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoals_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word Var_68;
                MR_Word _ConjType_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_45, &Var_68);
                succeeded = ((MR_Integer) 1 == Var_68);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoals_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word Var_69;

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_62, &Var_69);
                succeeded = ((MR_Integer) 1 == Var_69);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word Var_86;
                MR_Word _Var_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word _Det_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));

                ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(Cases_48, &Var_86);
                succeeded = ((MR_Integer) 1 == Var_86);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word SubGoalInfo_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_40, (MR_Integer) 1)));
                MR_Word SubCodeModel_43;
                MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_40, (MR_Integer) 0)));

                SubCodeModel_43 = hlds__code_model__goal_info_get_code_model_1_f_0(SubGoalInfo_42);
                switch (SubCodeModel_43) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_81;

                      ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_40, &Var_81);
                      succeeded = ((MR_Integer) 1 == Var_81);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word C_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 2)));
                MR_Word T_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 3)));
                MR_Word E_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 4)));
                MR_Word _Vars_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_12, (MR_Integer) 1)));
                MR_Word Var_60;

                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(C_50, &Var_60);
                succeeded = ((MR_Integer) 1 == Var_60);
                if (succeeded)
                {
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_61;

                  ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(T_51, &Var_61);
                  succeeded = ((MR_Integer) 1 == Var_61);
                  if (succeeded)
                  {
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_76;

                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(E_52, &Var_76);
                    succeeded = ((MR_Integer) 1 == Var_76);
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
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Cases_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Goal_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Goals_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word GoalExpr_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 0)));
      MR_Word _GoalInfo_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Goal_3, (MR_Integer) 1)));

      switch (MR_tag((MR_Word) GoalExpr_9)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word SubGoal_56 = (MR_Word) MR_body(((MR_Word) GoalExpr_9), (MR_Integer) 0);
            MR_Word Var_77;

            ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_56, &Var_77);
            succeeded = ((MR_Integer) 1 == Var_77);
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
              }
              break;
            case (MR_Integer) 1:
              {
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word SubGoals_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2)));
                MR_Word Var_65;
                MR_Word _ConjType_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1)));

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_42, &Var_65);
                succeeded = ((MR_Integer) 1 == Var_65);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word SubGoals_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1)));
                MR_Word Var_66;

                ll_backend__code_util__goal_list_may_alloc_temp_frame_2_p_0(SubGoals_59, &Var_66);
                succeeded = ((MR_Integer) 1 == Var_66);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word Cases_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3)));
                MR_Word Var_83;
                MR_Word _Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1)));
                MR_Word _Det_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2)));

                ll_backend__code_util__cases_may_alloc_temp_frame_2_p_0(Cases_45, &Var_83);
                succeeded = ((MR_Integer) 1 == Var_83);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Word SubGoal_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2)));
                MR_Word SubGoalInfo_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_37, (MR_Integer) 1)));
                MR_Word SubCodeModel_40;
                MR_Word Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1)));
                MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), SubGoal_37, (MR_Integer) 0)));

                SubCodeModel_40 = hlds__code_model__goal_info_get_code_model_1_f_0(SubGoalInfo_39);
                switch (SubCodeModel_40) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                  case (MR_Integer) 1:
                    {
                      MR_Word Var_78;

                      ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(SubGoal_37, &Var_78);
                      succeeded = ((MR_Integer) 1 == Var_78);
                    }
                    break;
                  case (MR_Integer) 2:
                    {
                      succeeded = MR_TRUE;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 6:
              {
                MR_Word C_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 2)));
                MR_Word T_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 3)));
                MR_Word E_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 4)));
                MR_Word _Vars_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), GoalExpr_9, (MR_Integer) 1)));
                MR_Word Var_57;

                ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(C_47, &Var_57);
                succeeded = ((MR_Integer) 1 == Var_57);
                if (succeeded)
                {
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Word Var_58;

                  ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(T_48, &Var_58);
                  succeeded = ((MR_Integer) 1 == Var_58);
                  if (succeeded)
                  {
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word Var_73;

                    ll_backend__code_util__goal_may_alloc_temp_frame_2_p_0(E_49, &Var_73);
                    succeeded = ((MR_Integer) 1 == Var_73);
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
                succeeded = MR_TRUE;
              }
              break;
          }
          break;
      }
      if (succeeded)
        *HeadVar__2_2 = (MR_Integer) 1;
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = Goals_4;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_util__max_mentioned_abs_regs_3_p_0(
  MR_Word Lvals_4,
  MR_Integer * MaxRegR_5,
  MR_Integer * MaxRegF_6)
{
  {
    ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(Lvals_4, (MR_Integer) 0, MaxRegR_5, (MR_Integer) 0, MaxRegF_6);
  }
}

static void MR_CALL 
ll_backend__code_util__max_mentioned_abs_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_MaxRegF_5 = STATE_VARIABLE_MaxRegF_0_4;
      *STATE_VARIABLE_MaxRegR_3 = STATE_VARIABLE_MaxRegR_0_2;
    }
    else
    {
      MR_Word Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Lvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer STATE_VARIABLE_MaxRegF_22_22;
      MR_Integer STATE_VARIABLE_MaxRegR_23_23;
      MR_Word RegType_16;
      MR_Integer N_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegF_0_4;

      succeeded = ((MR_tag((MR_Word) Lval_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        RegType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_12, (MR_Integer) 0)));
        N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_12, (MR_Integer) 1)));
        switch (RegType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegF_0_4, &STATE_VARIABLE_MaxRegF_22_22);
              STATE_VARIABLE_MaxRegR_23_23 = STATE_VARIABLE_MaxRegR_0_2;
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegR_0_2, &STATE_VARIABLE_MaxRegR_23_23);
              STATE_VARIABLE_MaxRegF_22_22 = STATE_VARIABLE_MaxRegF_0_4;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_MaxRegF_22_22 = STATE_VARIABLE_MaxRegF_0_4;
        STATE_VARIABLE_MaxRegR_23_23 = STATE_VARIABLE_MaxRegR_0_2;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Lvals_13;
      next_value_of_STATE_VARIABLE_MaxRegR_0_2 = STATE_VARIABLE_MaxRegR_23_23;
      next_value_of_STATE_VARIABLE_MaxRegF_0_4 = STATE_VARIABLE_MaxRegF_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxRegR_0_2 = next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      STATE_VARIABLE_MaxRegF_0_4 = next_value_of_STATE_VARIABLE_MaxRegF_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_util__max_mentioned_regs_3_p_0(
  MR_Word Lvals_4,
  MR_Integer * MaxRegR_5,
  MR_Integer * MaxRegF_6)
{
  {
    ll_backend__code_util__max_mentioned_reg_2_5_p_0(Lvals_4, (MR_Integer) 0, MaxRegR_5, (MR_Integer) 0, MaxRegF_6);
  }
}

static void MR_CALL 
ll_backend__code_util__max_mentioned_reg_2_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer STATE_VARIABLE_MaxRegR_0_2,
  MR_Integer * STATE_VARIABLE_MaxRegR_3,
  MR_Integer STATE_VARIABLE_MaxRegF_0_4,
  MR_Integer * STATE_VARIABLE_MaxRegF_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_MaxRegF_5 = STATE_VARIABLE_MaxRegF_0_4;
      *STATE_VARIABLE_MaxRegR_3 = STATE_VARIABLE_MaxRegR_0_2;
    }
    else
    {
      MR_Word Lval_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Lvals_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer STATE_VARIABLE_MaxRegF_22_22;
      MR_Integer STATE_VARIABLE_MaxRegR_23_23;
      MR_Word RegType_16;
      MR_Integer N_17;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      MR_Integer next_value_of_STATE_VARIABLE_MaxRegF_0_4;

      succeeded = ((MR_tag((MR_Word) Lval_12)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        RegType_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_12, (MR_Integer) 0)));
        N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_12, (MR_Integer) 1)));
        switch (RegType_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegF_0_4, &STATE_VARIABLE_MaxRegF_22_22);
              STATE_VARIABLE_MaxRegR_23_23 = STATE_VARIABLE_MaxRegR_0_2;
            }
            break;
          case (MR_Integer) 0:
            {
              mercury__int__max_3_p_0(N_17, STATE_VARIABLE_MaxRegR_0_2, &STATE_VARIABLE_MaxRegR_23_23);
              STATE_VARIABLE_MaxRegF_22_22 = STATE_VARIABLE_MaxRegF_0_4;
            }
            break;
        }
      }
      else
      {
        STATE_VARIABLE_MaxRegF_22_22 = STATE_VARIABLE_MaxRegF_0_4;
        STATE_VARIABLE_MaxRegR_23_23 = STATE_VARIABLE_MaxRegR_0_2;
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Lvals_13;
      next_value_of_STATE_VARIABLE_MaxRegR_0_2 = STATE_VARIABLE_MaxRegR_23_23;
      next_value_of_STATE_VARIABLE_MaxRegF_0_4 = STATE_VARIABLE_MaxRegF_22_22;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_MaxRegR_0_2 = next_value_of_STATE_VARIABLE_MaxRegR_0_2;
      STATE_VARIABLE_MaxRegF_0_4 = next_value_of_STATE_VARIABLE_MaxRegF_0_4;
      continue;
    }
    break;
  }
}

void MR_CALL 
ll_backend__code_util__arg_loc_to_register_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word RegType_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (RegType_3));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_4));
    }
  }
}

MR_Word MR_CALL 
ll_backend__code_util__extract_proc_label_from_code_addr_1_f_0(
  MR_Word CodeAddr_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) CodeAddr_3)) == (MR_mktag((MR_Integer) 1)));
    MR_Word ProcLabel_4;
    MR_Word Label_5;

    if (succeeded)
    {
      Label_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddr_3, (MR_Integer) 0)));
      ProcLabel_4 = ll_backend__llds__get_proc_label_1_f_0(Label_5);
    }
    else
    {
      MR_Word ProcLabelPrime_6;

      succeeded = ((MR_tag((MR_Word) CodeAddr_3)) == (MR_mktag((MR_Integer) 2)));
      if (succeeded)
      {
        ProcLabelPrime_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), CodeAddr_3, (MR_Integer) 0)));
        ProcLabel_4 = ProcLabelPrime_6;
      }
      else
      {
        mercury__require__unexpected_3_p_0((MR_String) "ll_backend.code_util", (MR_String) "function \140ll_backend.code_util.extract_proc_label_from_code_addr\'/1", (MR_String) "failed");
      }
    }
    return ProcLabel_4;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_internal_label_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Integer LabelNum_9)
{
  {
    MR_Word Label_10;
    MR_Word ProcLabel_11;

    ProcLabel_11 = backend_libs__proc_label__make_proc_label_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
    {
      Label_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Label_10, 0) = ((MR_Box) (LabelNum_9));
      MR_hl_field(MR_mktag(0), Label_10, 1) = ((MR_Box) (ProcLabel_11));
    }
    return Label_10;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word Immed_9)
{
  {
    MR_bool succeeded;
    MR_Word Label_10;
    MR_Word RttiProcLabel_11;
    MR_Word ProcLabel_15;
    MR_Word Var_71;
    MR_Integer Var_78;
    MR_Word Var_79;
    MR_Word Var_70;
    MR_Word Var_72;
    MR_Word Var_73;
    MR_Word Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;
    MR_Word Var_80;
    MR_Integer Var_81;
    MR_String Var_82;
    MR_Word Var_83;
    MR_Word Var_84;
    MR_Word Var_85;

    RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
    ProcLabel_15 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_11);
    Var_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 0)));
    Var_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 1)));
    Var_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 2)));
    Var_82 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 3)));
    Var_81 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 4)));
    Var_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 5)));
    Var_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 6)));
    Var_78 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 7)));
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 8)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 9)));
    Var_75 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
    Var_74 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_73 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 11)));
    Var_71 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    Var_70 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    if ((Immed_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word EntryType_17;

      switch (Var_71) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          EntryType_17 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          EntryType_17 = (MR_Integer) 2;
          break;
      }
      {
        Label_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Label_10, 0) = ((MR_Box) (EntryType_17));
        MR_hl_field(MR_mktag(1), Label_10, 1) = ((MR_Box) (ProcLabel_15));
      }
    }
    else
    {
      MR_Integer ProcsPerFunc_18;
      MR_Word CurPredId_19;
      MR_Integer CurProcId_20;
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Immed_9, (MR_Integer) 0)));
      MR_Word Var_22;
      MR_Word EntryType_93;

      ProcsPerFunc_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 0)));
      Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_21, (MR_Integer) 1)));
      CurPredId_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 0)));
      CurProcId_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_22, (MR_Integer) 1)));
      succeeded = (ProcsPerFunc_18 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(Var_79, CurPredId_19);
        if (succeeded)
          succeeded = (Var_78 == CurProcId_20);
      }
      if (succeeded)
        EntryType_93 = (MR_Integer) 0;
      else
        EntryType_93 = (MR_Integer) 1;
      {
        Label_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Label_10, 0) = ((MR_Box) (EntryType_93));
        MR_hl_field(MR_mktag(1), Label_10, 1) = ((MR_Box) (ProcLabel_15));
      }
    }
    return Label_10;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_from_rtti_2_f_0(
  MR_Word RttiProcLabel_4,
  MR_Word Immed_5)
{
  {
    MR_Word ProcAddr_6;
    MR_Word ProcIsImported_7 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    MR_Word Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 0)));
    MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 1)));
    MR_Word Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 2)));
    MR_String Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 3)));
    MR_Integer Var_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 4)));
    MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 5)));
    MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 6)));
    MR_Integer Var_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 7)));
    MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 8)));
    MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 9)));
    MR_Word Var_20 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
    MR_Word Var_21 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    MR_Word Var_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    MR_Word Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 11)));
    MR_Word Var_24 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);

    switch (ProcIsImported_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Label_9;

          Label_9 = ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(RttiProcLabel_4, Immed_5);
          {
            ProcAddr_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ProcAddr_6, 0) = ((MR_Box) (Label_9));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcLabel_8;

          ProcLabel_8 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_4);
          {
            ProcAddr_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ProcAddr_6, 0) = ((MR_Box) (ProcLabel_8));
          }
        }
        break;
    }
    return ProcAddr_6;
  }
}

MR_Word MR_CALL 
ll_backend__code_util__make_entry_label_4_f_0(
  MR_Word ModuleInfo_6,
  MR_Word PredId_7,
  MR_Integer ProcId_8,
  MR_Word Immed_9)
{
  {
    MR_Word ProcAddr_10;
    MR_Word RttiProcLabel_11;
    MR_Word ProcIsImported_15;
    MR_Word Var_18;
    MR_Word Var_19;
    MR_Word Var_20;
    MR_String Var_21;
    MR_Integer Var_22;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Integer Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word Var_28;
    MR_Word Var_29;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_32;

    RttiProcLabel_11 = hlds__hlds_rtti__make_rtti_proc_label_3_f_0(ModuleInfo_6, PredId_7, ProcId_8);
    Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 0)));
    Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 1)));
    Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 2)));
    Var_21 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 3)));
    Var_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 4)));
    Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 5)));
    Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 6)));
    Var_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 7)));
    Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 8)));
    Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 9)));
    Var_28 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 10)))) & (MR_Integer) 7);
    Var_29 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_30 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 11)));
    Var_32 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 12)))) & (MR_Integer) 1);
    ProcIsImported_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_11, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    switch (ProcIsImported_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Label_17;

          Label_17 = ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(RttiProcLabel_11, Immed_9);
          {
            ProcAddr_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), ProcAddr_10, 0) = ((MR_Box) (Label_17));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcLabel_16;

          ProcLabel_16 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_11);
          {
            ProcAddr_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), ProcAddr_10, 0) = ((MR_Box) (ProcLabel_16));
          }
        }
        break;
    }
    return ProcAddr_10;
  }
}

static MR_Word MR_CALL 
ll_backend__code_util__make_local_entry_label_from_rtti_2_f_0(
  MR_Word RttiProcLabel_4,
  MR_Word Immed_5)
{
  {
    MR_bool succeeded;
    MR_Word Label_6;
    MR_Word ProcLabel_7;
    MR_Word Var_63;
    MR_Integer Var_70;
    MR_Word Var_71;
    MR_Word Var_62;
    MR_Word Var_64;
    MR_Word Var_65;
    MR_Word Var_66;
    MR_Word Var_67;
    MR_Word Var_68;
    MR_Word Var_69;
    MR_Word Var_72;
    MR_Integer Var_73;
    MR_String Var_74;
    MR_Word Var_75;
    MR_Word Var_76;
    MR_Word Var_77;

    ProcLabel_7 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_4);
    Var_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 0)));
    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 1)));
    Var_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 2)));
    Var_74 = ((MR_String) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 3)));
    Var_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 4)));
    Var_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 5)));
    Var_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 6)));
    Var_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 7)));
    Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 8)));
    Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 9)));
    Var_67 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 10)))) & (MR_Integer) 7);
    Var_66 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 3)) & (MR_Integer) 1);
    Var_65 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 10)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
    Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 11)));
    Var_63 = ((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 12)))) & (MR_Integer) 1);
    Var_62 = ((((((MR_Word) (MR_hl_field(MR_mktag(0), RttiProcLabel_4, (MR_Integer) 12)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
    if ((Immed_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word EntryType_9;

      switch (Var_63) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          EntryType_9 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          EntryType_9 = (MR_Integer) 2;
          break;
      }
      {
        Label_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Label_6, 0) = ((MR_Box) (EntryType_9));
        MR_hl_field(MR_mktag(1), Label_6, 1) = ((MR_Box) (ProcLabel_7));
      }
    }
    else
    {
      MR_Integer ProcsPerFunc_10;
      MR_Word CurPredId_11;
      MR_Integer CurProcId_12;
      MR_Word Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Immed_5, (MR_Integer) 0)));
      MR_Word Var_14;
      MR_Word EntryType_85;

      ProcsPerFunc_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 0)));
      Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_13, (MR_Integer) 1)));
      CurPredId_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 0)));
      CurProcId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Var_14, (MR_Integer) 1)));
      succeeded = (ProcsPerFunc_10 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = hlds__hlds_pred____Unify____pred_id_0_0(Var_71, CurPredId_11);
        if (succeeded)
          succeeded = (Var_70 == CurProcId_12);
      }
      if (succeeded)
        EntryType_85 = (MR_Integer) 0;
      else
        EntryType_85 = (MR_Integer) 1;
      {
        Label_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Label_6, 0) = ((MR_Box) (EntryType_85));
        MR_hl_field(MR_mktag(1), Label_6, 1) = ((MR_Box) (ProcLabel_7));
      }
    }
    return Label_6;
  }
}

static MR_bool MR_CALL 
ll_backend__code_util____Unify____immed_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = ll_backend__code_util____Unify____immed_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
ll_backend__code_util____Compare____immed_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    ll_backend__code_util____Compare____immed_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

// :- end_module ll_backend.code_util.
