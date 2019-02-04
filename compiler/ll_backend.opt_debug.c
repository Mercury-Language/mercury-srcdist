/*
** Automatically generated from `opt_debug.m'
** by the Mercury compiler,
** version rotd=2017-12-22
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


// :- module ll_backend.opt_debug.
// :- implementation.

/*
INIT mercury__ll_backend__opt_debug__init
ENDINIT
*/

#include "ll_backend.opt_debug.mih"


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
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
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




static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
  MR_Char C_4,
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7);

static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
  MR_Char C_4);

static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
  MR_String Msg_1,
  MR_Word HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
  MR_Word EmbeddedStackFrame_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2,
  MR_String Prefix_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
  MR_Word RttiProcLabel_3);

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[1][5];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][3];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][1];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[2][6];


/* sealed */ struct ll_backend__opt_debug__vector_common_type_6_0_s {
  const MR_String ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[5];



static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_2[0])),
    ((MR_Box) (ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_5[0])),
    ((MR_Box) (ll_backend__opt_debug__dump_instrs_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_5[1])),
    ((MR_Box) (ll_backend__opt_debug__write_instrs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[5] = {
  /* row 0 */   {     (MR_String) "ite_num_protects" },
  /* row 1 */   {     (MR_String) "ite_num_snapshots" },
  /* row 2 */   {     (MR_String) "disj_num_protects" },
  /* row 3 */   {     (MR_String) "disj_num_snapshots" },
  /* row 4 */   {     (MR_String) "commit_num_entries" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
  MR_Char C_4,
  MR_String STATE_VARIABLE_Str_0_6,
  MR_String * STATE_VARIABLE_Str_7)
{
  {
    MR_bool succeeded = (C_4 == (MR_Char) 10);

    if (succeeded)
    {
      *STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_0_6, (MR_String) "\n\t% ");
    }
    else
    {
      MR_String Var_11;

      Var_11 = mercury__string__char_to_string_1_f_0(C_4);
      *STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(STATE_VARIABLE_Str_0_6, Var_11);
    }
  }
}

static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
  MR_Char C_4)
{
  {
    MR_bool succeeded = (C_4 == (MR_Char) 10);

    if (succeeded)
    {
      mercury__io__write_string_3_p_0((MR_String) "\n\t% ");
    }
    else
      mercury__io__write_char_3_p_0(C_4);
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstrs_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_String HeadVar__4_4;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_String Var_11;
      MR_String Var_12;

      Var_11 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, HeadVar__2_2, Instr_9);
      Var_12 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(HeadVar__1_1, HeadVar__2_2, Instrs_10);
      HeadVar__4_4 = mercury__string__f_43_43_2_f_0(Var_11, Var_12);
    }
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstr_3_f_0(
  MR_Word MaybeProcLabel_5,
  MR_Word AutoComments_6,
  MR_Word HeadVar__3_3)
{
  {
    MR_String Str_9;
    MR_Word Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
    MR_String Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));

    switch (AutoComments_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_15;

          Var_15 = ll_backend__opt_debug__dump_instr_3_f_0(MaybeProcLabel_5, AutoComments_6, Uinstr_7);
          Str_9 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) "\n");
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_10;
          MR_String Var_11;
          MR_String Var_13;

          Var_10 = ll_backend__opt_debug__dump_instr_3_f_0(MaybeProcLabel_5, AutoComments_6, Uinstr_7);
          Var_13 = mercury__string__f_43_43_2_f_0(Comment_8, (MR_String) "\n");
          Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " - ", Var_13);
          Str_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
        }
        break;
    }
    return Str_9;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_model_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "model_det";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "model_non";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "model_semi";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "yes";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addrs_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Addr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Addrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_9;
      MR_String Var_10;
      MR_String Var_11;

      Var_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_1, Addr_6);
      Var_11 = ll_backend__opt_debug__dump_code_addrs_2_f_0(MaybeProcLabel_1, Addrs_7);
      Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_9);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_rvals_3_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2,
  MR_Integer N_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__4_4;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word MR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word MRs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

      succeeded = (N_3 > (MR_Integer) 0);
      if (succeeded)
      {
        MR_String MR_str_13;
        MR_String Var_15;
        MR_String Var_17;
        MR_Integer Var_18;

        if ((MR_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          MR_str_13 = (MR_String) "no";
        else
        {
          MR_Word R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), MR_8, (MR_Integer) 0)));

          MR_str_13 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_1, R_12);
        }
        Var_18 = (N_3 - (MR_Integer) 1);
        Var_17 = ll_backend__opt_debug__dump_maybe_rvals_3_f_0(MaybeProcLabel_1, MRs_9, Var_18);
        Var_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_17);
        HeadVar__4_4 = mercury__string__f_43_43_2_f_0(MR_str_13, Var_15);
      }
      else
        HeadVar__4_4 = (MR_String) "truncated";
    }
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_label_pairs_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word L1_6;
      MR_Word L2_7;
      MR_Word Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_String Var_11;
      MR_String Var_12;
      MR_String Var_13;
      MR_String Var_15;
      MR_String Var_16;
      MR_String Var_17;

      L1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
      L2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
      Var_12 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, L1_6);
      Var_16 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, L2_7);
      Var_17 = ll_backend__opt_debug__dump_label_pairs_2_f_0(MaybeProcLabel_1, Labels_8);
      Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "-", Var_15);
      Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_11);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_9;
      MR_String Var_10;
      MR_String Var_11;

      Var_10 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, Label_6);
      Var_11 = ll_backend__opt_debug__dump_labels_2_f_0(MaybeProcLabel_1, Labels_7);
      Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_9);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_slot_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String Str_5;
    MR_Word Array_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer Slot_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_String ArrayStr_6;
    MR_String SlotStr_7;
    MR_String Var_8;
    MR_String Var_10;

    ArrayStr_6 = ll_backend__opt_debug__dump_layout_array_name_1_f_0(Array_3);
    SlotStr_7 = mercury__string__int_to_string_1_f_0(Slot_4);
    Var_10 = mercury__string__f_43_43_2_f_0(SlotStr_7, (MR_String) "]");
    Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", Var_10);
    Str_5 = mercury__string__f_43_43_2_f_0(ArrayStr_6, Var_8);
    return Str_5;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_array_name_1_f_0(
  MR_Word ArrayName_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) ArrayName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ArrayName_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_4 = (MR_String) "pseudo_type_info_array";
            break;
          case (MR_Integer) 1:
            Str_4 = (MR_String) "hlds_var_nums_array";
            break;
          case (MR_Integer) 2:
            Str_4 = (MR_String) "short_locns_array";
            break;
          case (MR_Integer) 3:
            Str_4 = (MR_String) "long_locns_array";
            break;
          case (MR_Integer) 4:
            Str_4 = (MR_String) "user_event_layout_array";
            break;
          case (MR_Integer) 5:
            Str_4 = (MR_String) "user_event_var_nums_array";
            break;
          case (MR_Integer) 6:
            Str_4 = (MR_String) "proc_static_call_sites_array";
            break;
          case (MR_Integer) 7:
            Str_4 = (MR_String) "proc_static_cp_static_array";
            break;
          case (MR_Integer) 8:
            Str_4 = (MR_String) "proc_static_cp_dynamic_array";
            break;
          case (MR_Integer) 9:
            Str_4 = (MR_String) "proc_static_array";
            break;
          case (MR_Integer) 10:
            Str_4 = (MR_String) "proc_head_var_nums_array";
            break;
          case (MR_Integer) 11:
            Str_4 = (MR_String) "proc_var_names_array";
            break;
          case (MR_Integer) 12:
            Str_4 = (MR_String) "proc_body_bytecodes_array";
            break;
          case (MR_Integer) 13:
            Str_4 = (MR_String) "proc_table_io_entry_array";
            break;
          case (MR_Integer) 14:
            Str_4 = (MR_String) "proc_event_layouts_array";
            break;
          case (MR_Integer) 15:
            Str_4 = (MR_String) "proc_exec_trace_array";
            break;
          case (MR_Integer) 16:
            Str_4 = (MR_String) "threadscope_string_table_array";
            break;
          case (MR_Integer) 17:
            Str_4 = (MR_String) "alloc_site_array";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word LabelVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ArrayName_3, (MR_Integer) 0)));

          switch (LabelVars_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              Str_4 = (MR_String) "long_vars_label_layout_array";
              break;
            case (MR_Integer) 0:
              Str_4 = (MR_String) "no_vars_label_layout_array";
              break;
            case (MR_Integer) 1:
              Str_4 = (MR_String) "short_vars_label_layout_array";
              break;
          }
        }
        break;
    }
    return Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rvals_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Rvals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_8;
      MR_String Var_9;
      MR_String Var_11;

      Var_8 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_1, Rval_6);
      Var_11 = ll_backend__opt_debug__dump_rvals_2_f_0(MaybeProcLabel_1, Rvals_7);
      Var_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Lvals_5)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_4, Lvals_5, (MR_String) "");
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livemap_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Livemap_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__map__to_assoc_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__opt_debug_scalar_common_1[0], Livemap_5);
    HeadVar__3_3 = ll_backend__opt_debug__dump_livemaplist_2_f_0(MaybeProcLabel_4, Var_6);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livemaplist_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Label_6;
      MR_Word Lvalset_7;
      MR_Word Livemaplist_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_String Var_10;
      MR_String Var_11;
      MR_String Var_13;
      MR_String Var_14;
      MR_String Var_15;
      MR_String Var_17;
      MR_Word Var_20;

      Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 0)));
      Lvalset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_9, (MR_Integer) 1)));
      Var_10 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, Label_6);
      Var_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Lvalset_7);
      Var_14 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_1, Var_20, (MR_String) "");
      Var_17 = ll_backend__opt_debug__dump_livemaplist_2_f_0(MaybeProcLabel_1, Livemaplist_8);
      Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_17);
      Var_13 = mercury__string__f_43_43_2_f_0(Var_14, Var_15);
      Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " ->", Var_13);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_intlist_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_Integer H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String Var_6;
      MR_String Var_7;
      MR_String Var_8;

      Var_7 = mercury__string__int_to_string_1_f_0(H_3);
      Var_8 = ll_backend__opt_debug__dump_intlist_1_f_0(T_4);
      Var_6 = mercury__string__f_43_43_2_f_0(Var_7, Var_8);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_6);
    }
    return HeadVar__2_2;
  }
}

void MR_CALL 
ll_backend__opt_debug__maybe_write_instrs_6_p_0(
  MR_Word OptDebug_7,
  MR_Word AutoComments_8,
  MR_Word MaybeProcLabel_9,
  MR_Word Instrs_10)
{
  switch (OptDebug_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      ll_backend__opt_debug__write_instrs_5_p_0(Instrs_10, MaybeProcLabel_9, AutoComments_8);
      break;
  }
}

static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;

    ll_backend__opt_debug__print_comment_char_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1));
  }
}

void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if (!((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      MR_Word Instr_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word Uinstr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr_11, (MR_Integer) 0)));
      MR_String Comment_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr_11, (MR_Integer) 1)));
      MR_Word Var_18;
      MR_Word next_value_of_HeadVar__1_1;

      succeeded = ((((MR_tag((MR_Word) Uinstr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_16, (MR_Integer) 1)));
        {
          MR_String Var_22;

          Var_22 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__2_2, HeadVar__3_3, Uinstr_16);
          mercury__io__write_string_3_p_0(Var_22);
        }
      }
      else
      {
        MR_String InstrComment_19;

        succeeded = ((MR_tag((MR_Word) Uinstr_16)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          InstrComment_19 = ((MR_String) (MR_hl_field(MR_mktag(1), Uinstr_16, (MR_Integer) 0)));
          {
            MR_Box conv0_STATE_VARIABLE_IO_23_23;

            mercury__io__write_string_3_p_0((MR_String) "\t% ");
            mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[2], InstrComment_19, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_23_23);
          }
        }
        else
        {
          MR_String Var_30;

          mercury__io__write_string_3_p_0((MR_String) "\t");
          Var_30 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__2_2, HeadVar__3_3, Uinstr_16);
          mercury__io__write_string_3_p_0(Var_30);
        }
      }
      succeeded = (HeadVar__3_3 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (strcmp(Comment_17, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_String Var_32;

        Var_32 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", Comment_17);
        mercury__io__write_string_3_p_0(Var_32);
      }
      else
      {
      }
      mercury__io__nl_2_p_0();
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Instrs_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      continue;
    }
    break;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_instr_3_f_0(
  MR_Word MaybeProcLabel_5,
  MR_Word AutoComments_6,
  MR_Word Instr_7)
{
  {
    MR_String Str_8;

    switch (MR_tag((MR_Word) Instr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Instr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_8 = (MR_String) "prune_ticket";
            break;
          case (MR_Integer) 1:
            Str_8 = (MR_String) "discard_ticket";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(1), Instr_7, (MR_Integer) 0)));
          MR_String Var_399;

          Var_399 = mercury__string__f_43_43_2_f_0(Comment_9, (MR_String) ")");
          Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "comment(", Var_399);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Livevals_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Instr_7, (MR_Integer) 0)));
          MR_String Var_395;
          MR_String Var_396;

          Var_396 = ll_backend__opt_debug__dump_livevals_2_f_0(MaybeProcLabel_5, Livevals_10);
          Var_395 = mercury__string__f_43_43_2_f_0(Var_396, (MR_String) ")");
          Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "livevals(", Var_395);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer RTemps_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Integer FTemps_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_Word Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_String Var_383;
              MR_String Var_384;
              MR_String Var_385;
              MR_String Var_387;
              MR_String Var_388;
              MR_String Var_389;
              MR_String Var_391;
              MR_String Var_392;

              Var_384 = mercury__string__int_to_string_1_f_0(RTemps_11);
              Var_388 = mercury__string__int_to_string_1_f_0(FTemps_12);
              Var_392 = ll_backend__opt_debug__dump_instrs_3_f_0(MaybeProcLabel_5, AutoComments_6, Instrs_13);
              Var_391 = mercury__string__f_43_43_2_f_0(Var_392, (MR_String) "\t)");
              Var_389 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", Var_391);
              Var_387 = mercury__string__f_43_43_2_f_0(Var_388, Var_389);
              Var_385 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_387);
              Var_383 = mercury__string__f_43_43_2_f_0(Var_384, Var_385);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "block(", Var_383);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_378;
              MR_String Var_379;
              MR_String Var_381;

              Var_378 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_14);
              Var_381 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_15);
              Var_379 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_381);
              Str_8 = mercury__string__f_43_43_2_f_0(Var_378, Var_379);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_373;
              MR_String Var_374;
              MR_String Var_375;
              MR_String Var_377;
              MR_Word Lval_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word Rval_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_374 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_401);
              Var_377 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_402);
              Var_375 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_377);
              Var_373 = mercury__string__f_43_43_2_f_0(Var_374, Var_375);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "keep ", Var_373);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word ReturnLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_Word CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 6)));
              MR_String CallModelStr_22;
              MR_String Var_362;
              MR_String Var_363;
              MR_String Var_364;
              MR_String Var_366;
              MR_String Var_367;
              MR_String Var_368;
              MR_String Var_370;
              MR_Word _LiveInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_Word _Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 4)));
              MR_Word _GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) CallModel_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Var_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), CallModel_21, (MR_Integer) 0)));

                    switch (Var_433) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        CallModelStr_22 = (MR_String) "det";
                        break;
                      case (MR_Integer) 0:
                        CallModelStr_22 = (MR_String) "det_no_lco";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), CallModel_21, (MR_Integer) 0)));

                    switch (Var_435) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        CallModelStr_22 = (MR_String) "semidet";
                        break;
                      case (MR_Integer) 0:
                        CallModelStr_22 = (MR_String) "semidet_no_lco";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_434 = ((MR_Word) (MR_hl_field(MR_mktag(2), CallModel_21, (MR_Integer) 0)));

                    switch (Var_434) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        CallModelStr_22 = (MR_String) "nondet checked_tail_call";
                        break;
                      case (MR_Integer) 0:
                        CallModelStr_22 = (MR_String) "nondet no_tail_call";
                        break;
                      case (MR_Integer) 2:
                        CallModelStr_22 = (MR_String) "nondet unchecked_tail_call";
                        break;
                    }
                  }
                  break;
              }
              Var_363 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, Callee_16);
              Var_367 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, ReturnLabel_17);
              Var_370 = mercury__string__f_43_43_2_f_0(CallModelStr_22, (MR_String) ")");
              Var_368 = mercury__string__f_43_43_2_f_0((MR_String) ", ..., ", Var_370);
              Var_366 = mercury__string__f_43_43_2_f_0(Var_367, Var_368);
              Var_364 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_366);
              Var_362 = mercury__string__f_43_43_2_f_0(Var_363, Var_364);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "call(", Var_362);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word FrameInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word MaybeRedoip_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String R_str_26;

              if ((MaybeRedoip_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                R_str_26 = (MR_String) "no_redoip";
              else
              {
                MR_Word Redoip_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRedoip_24, (MR_Integer) 0)));

                R_str_26 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, Redoip_25);
              }
              if (((MR_tag((MR_Word) FrameInfo_23)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_String Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), FrameInfo_23, (MR_Integer) 0)));
                MR_Integer Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), FrameInfo_23, (MR_Integer) 1)));
                MR_String Var_345;
                MR_String Var_346;
                MR_String Var_348;
                MR_String Var_349;
                MR_String Var_350;
                MR_String Var_352;

                Var_349 = mercury__string__int_to_string_1_f_0(Size_28);
                Var_352 = mercury__string__f_43_43_2_f_0(R_str_26, (MR_String) ")");
                Var_350 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_352);
                Var_348 = mercury__string__f_43_43_2_f_0(Var_349, Var_350);
                Var_346 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_348);
                Var_345 = mercury__string__f_43_43_2_f_0(Name_27, Var_346);
                Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkframe(", Var_345);
              }
              else
              {
                MR_Word Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), FrameInfo_23, (MR_Integer) 0)));

                switch (Kind_29) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_String Var_339;

                      Var_339 = mercury__string__f_43_43_2_f_0(R_str_26, (MR_String) ")");
                      Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkdettempframe(", Var_339);
                    }
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_String Var_342;

                      Var_342 = mercury__string__f_43_43_2_f_0(R_str_26, (MR_String) ")");
                      Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mktempframe(", Var_342);
                    }
                    break;
                }
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word Label_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_String Var_336;

              Var_336 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_30);
              Str_8 = mercury__string__f_43_43_2_f_0(Var_336, (MR_String) ":");
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word CodeAddr_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_String Var_335;

              Var_335 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, CodeAddr_31);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", Var_335);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word MaybeLabels_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_329;
              MR_String Var_330;
              MR_String Var_331;
              MR_String Var_333;
              MR_Word Rval_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_330 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_403);
              Var_333 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(MaybeProcLabel_5, MaybeLabels_32);
              Var_331 = mercury__string__f_43_43_2_f_0((MR_String) ":", Var_333);
              Var_329 = mercury__string__f_43_43_2_f_0(Var_330, Var_331);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "computed_goto ", Var_329);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word AL_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_String Code_35 = ((MR_String) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_String Var_322;
              MR_String Var_323;
              MR_String Var_324;
              MR_String Var_326;
              MR_Word Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_323 = ll_backend__opt_debug__dump_affects_liveness_1_f_0(AL_33);
              Var_326 = mercury__string__f_43_43_2_f_0(Code_35, (MR_String) ")");
              Var_324 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_326);
              Var_322 = mercury__string__f_43_43_2_f_0(Var_323, Var_324);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "arbitrary_c_code(", Var_322);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String Var_316;
              MR_String Var_317;
              MR_String Var_318;
              MR_String Var_320;
              MR_Word Rval_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word CodeAddr_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_317 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_404);
              Var_320 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, CodeAddr_405);
              Var_318 = mercury__string__f_43_43_2_f_0((MR_String) ") goto ", Var_320);
              Var_316 = mercury__string__f_43_43_2_f_0(Var_317, Var_318);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "if (", Var_316);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String Var_312;
              MR_String Var_313;
              MR_Word Lval_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_313 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_406);
              Var_312 = mercury__string__f_43_43_2_f_0(Var_313, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "save_maxfr(", Var_312);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String Var_308;
              MR_String Var_309;
              MR_Word Lval_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_309 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_407);
              Var_308 = mercury__string__f_43_43_2_f_0(Var_309, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_maxfr(", Var_308);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_Word MaybeOffset_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_Word MayUseAtomic_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 6)));
              MR_Word MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 7)));
              MR_Word MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 8)));
              MR_String T_str_42;
              MR_String O_str_44;
              MR_String Region_str_46;
              MR_String Reuse_str_48;
              MR_String Flag_str_49;
              MR_String Var_281;
              MR_String Var_282;
              MR_String Var_283;
              MR_String Var_285;
              MR_String Var_286;
              MR_String Var_288;
              MR_String Var_289;
              MR_String Var_291;
              MR_String Var_292;
              MR_String Var_293;
              MR_String Var_295;
              MR_String Var_296;
              MR_String Var_297;
              MR_String Var_299;
              MR_String Var_300;
              MR_String Var_302;
              MR_String Var_303;
              MR_String Var_305;
              MR_Word Lval_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word Size_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 4)));
              MR_Word Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 5)));

              if ((MaybeTag_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                T_str_42 = (MR_String) "no";
              else
              {
                MR_Integer Tag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_36, (MR_Integer) 0)));

                mercury__string__int_to_string_2_p_0(Tag_43, &T_str_42);
              }
              if ((MaybeOffset_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                O_str_44 = (MR_String) "no";
              else
              {
                MR_Integer Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeOffset_37, (MR_Integer) 0)));

                mercury__string__int_to_string_2_p_0(Offset_45, &O_str_44);
              }
              if ((MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                Region_str_46 = (MR_String) "no";
              else
              {
                MR_Word RegionRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeRegionRval_40, (MR_Integer) 0)));

                Region_str_46 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), RegionRval_47);
              }
              if ((MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                Reuse_str_48 = (MR_String) "no";
                Flag_str_49 = (MR_String) "no";
              }
              else
              {
                MR_Word ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse_41, (MR_Integer) 0)));
                MR_Word MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeReuse_41, (MR_Integer) 1)));

                Reuse_str_48 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ReuseRval_50);
                if ((MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  Flag_str_49 = (MR_String) "no";
                else
                {
                  MR_Word FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeFlagLval_51, (MR_Integer) 0)));

                  Flag_str_49 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, FlagLval_52);
                }
              }
              Var_282 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_408);
              Var_292 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Size_409);
              Var_296 = ll_backend__opt_debug__dump_may_use_atomic_1_f_0(MayUseAtomic_39);
              Var_305 = mercury__string__f_43_43_2_f_0(Flag_str_49, (MR_String) ")");
              Var_303 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_305);
              Var_302 = mercury__string__f_43_43_2_f_0(Reuse_str_48, Var_303);
              Var_300 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_302);
              Var_299 = mercury__string__f_43_43_2_f_0(Region_str_46, Var_300);
              Var_297 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_299);
              Var_295 = mercury__string__f_43_43_2_f_0(Var_296, Var_297);
              Var_293 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_295);
              Var_291 = mercury__string__f_43_43_2_f_0(Var_292, Var_293);
              Var_289 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_291);
              Var_288 = mercury__string__f_43_43_2_f_0(O_str_44, Var_289);
              Var_286 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_288);
              Var_285 = mercury__string__f_43_43_2_f_0(T_str_42, Var_286);
              Var_283 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_285);
              Var_281 = mercury__string__f_43_43_2_f_0(Var_282, Var_283);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_hp(", Var_281);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String Var_275;
              MR_String Var_276;
              MR_Word Lval_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_276 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_410);
              Var_275 = mercury__string__f_43_43_2_f_0(Var_276, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_hp(", Var_275);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String Var_271;
              MR_String Var_272;
              MR_Word Rval_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_272 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_411);
              Var_271 = mercury__string__f_43_43_2_f_0(Var_272, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_hp(", Var_271);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String Var_267;
              MR_String Var_268;
              MR_Word Rval_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_268 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_412);
              Var_267 = mercury__string__f_43_43_2_f_0(Var_268, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "free_heap(", Var_267);
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word StackId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word EmbeddedStackFrame_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_259;
              MR_String Var_260;
              MR_String Var_261;
              MR_String Var_263;
              MR_String Var_264;

              Var_260 = ll_backend__llds__region_stack_id_to_string_1_f_0(StackId_53);
              Var_264 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_54);
              Var_263 = mercury__string__f_43_43_2_f_0(Var_264, (MR_String) ")");
              Var_261 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_263);
              Var_259 = mercury__string__f_43_43_2_f_0(Var_260, Var_261);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "push_region_frame(", Var_259);
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word IdRval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_Word NumLval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 4)));
              MR_Word AddrLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 5)));
              MR_String FillOpStr_59;
              MR_String Var_240;
              MR_String Var_241;
              MR_String Var_243;
              MR_String Var_244;
              MR_String Var_245;
              MR_String Var_247;
              MR_String Var_248;
              MR_String Var_249;
              MR_String Var_251;
              MR_String Var_252;
              MR_String Var_253;
              MR_String Var_255;
              MR_String Var_256;
              MR_Word EmbeddedStackFrame_413 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) FillOp_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(FillOp_55)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      FillOpStr_59 = (MR_String) "ite_protect";
                      break;
                    case (MR_Integer) 1:
                      FillOpStr_59 = (MR_String) "semi_disj_protect";
                      break;
                    case (MR_Integer) 2:
                      FillOpStr_59 = (MR_String) "disj_snapshot";
                      break;
                    case (MR_Integer) 3:
                      FillOpStr_59 = (MR_String) "commit";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), FillOp_55, (MR_Integer) 0)));

                    switch (Var_436) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        FillOpStr_59 = (MR_String) "ite_snapshot(not_removed_at_start_of_else)";
                        break;
                      case (MR_Integer) 0:
                        FillOpStr_59 = (MR_String) "ite_snapshot(removed_at_start_of_else)";
                        break;
                    }
                  }
                  break;
              }
              Var_244 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_413);
              Var_248 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, IdRval_56);
              Var_252 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, NumLval_57);
              Var_256 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, AddrLval_58);
              Var_255 = mercury__string__f_43_43_2_f_0(Var_256, (MR_String) ")");
              Var_253 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_255);
              Var_251 = mercury__string__f_43_43_2_f_0(Var_252, Var_253);
              Var_249 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_251);
              Var_247 = mercury__string__f_43_43_2_f_0(Var_248, Var_249);
              Var_245 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_247);
              Var_243 = mercury__string__f_43_43_2_f_0(Var_244, Var_245);
              Var_241 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_243);
              Var_240 = mercury__string__f_43_43_2_f_0(FillOpStr_59, Var_241);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_fill_frame(", Var_240);
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_String SetOpStr_62 = ((&ll_backend__opt_debug_vector_common_6[0 + SetOp_60]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
              MR_String Var_227;
              MR_String Var_228;
              MR_String Var_230;
              MR_String Var_231;
              MR_String Var_232;
              MR_String Var_234;
              MR_String Var_235;
              MR_Word EmbeddedStackFrame_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_231 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_414);
              Var_235 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, ValueRval_61);
              Var_234 = mercury__string__f_43_43_2_f_0(Var_235, (MR_String) ")");
              Var_232 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_234);
              Var_230 = mercury__string__f_43_43_2_f_0(Var_231, Var_232);
              Var_228 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_230);
              Var_227 = mercury__string__f_43_43_2_f_0(SetOpStr_62, Var_228);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_set_fixed_slot(", Var_227);
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word UseOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_String UseOpStr_64;
              MR_String Var_220;
              MR_String Var_221;
              MR_String Var_223;
              MR_String Var_224;
              MR_Word EmbeddedStackFrame_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) UseOp_63)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(UseOp_63)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      UseOpStr_64 = (MR_String) "region_ite_nondet_cond_fail";
                      break;
                    case (MR_Integer) 1:
                      UseOpStr_64 = (MR_String) "region_disj_later";
                      break;
                    case (MR_Integer) 2:
                      UseOpStr_64 = (MR_String) "region_disj_last";
                      break;
                    case (MR_Integer) 3:
                      UseOpStr_64 = (MR_String) "region_disj_nonlast_semi_commit";
                      break;
                    case (MR_Integer) 4:
                      UseOpStr_64 = (MR_String) "region_commit_success";
                      break;
                    case (MR_Integer) 5:
                      UseOpStr_64 = (MR_String) "region_commit_failure";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word Var_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), UseOp_63, (MR_Integer) 0)));

                    switch (Var_438) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        UseOpStr_64 = (MR_String) "region_ite_then(nondet)";
                        break;
                      case (MR_Integer) 0:
                        UseOpStr_64 = (MR_String) "region_ite_then(semidet)";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word Var_437 = ((MR_Word) (MR_hl_field(MR_mktag(2), UseOp_63, (MR_Integer) 0)));

                    switch (Var_437) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        UseOpStr_64 = (MR_String) "region_ite_else(nondet)";
                        break;
                      case (MR_Integer) 0:
                        UseOpStr_64 = (MR_String) "region_ite_else(semidet)";
                        break;
                    }
                  }
                  break;
              }
              Var_224 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_415);
              Var_223 = mercury__string__f_43_43_2_f_0(Var_224, (MR_String) ")");
              Var_221 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_223);
              Var_220 = mercury__string__f_43_43_2_f_0(UseOpStr_64, Var_221);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "use_and_maybe_pop_region_frame(", Var_220);
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String Var_212;
              MR_String Var_213;
              MR_Word Lval_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_213 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_416);
              Var_212 = mercury__string__f_43_43_2_f_0(Var_213, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "store_ticket(", Var_212);
            }
            break;
          case (MR_Integer) 21:
            {
              MR_String Var_208;
              MR_String Var_209;
              MR_Word Rval_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word _Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_209 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_417);
              Var_208 = mercury__string__f_43_43_2_f_0(Var_209, (MR_String) ", _)");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "reset_ticket(", Var_208);
            }
            break;
          case (MR_Integer) 22:
            {
              MR_String Var_204;
              MR_String Var_205;
              MR_Word Lval_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_205 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_418);
              Var_204 = mercury__string__f_43_43_2_f_0(Var_205, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_ticket_stack(", Var_204);
            }
            break;
          case (MR_Integer) 23:
            {
              MR_String Var_200;
              MR_String Var_201;
              MR_Word Rval_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_201 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_419);
              Var_200 = mercury__string__f_43_43_2_f_0(Var_201, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "prune_tickets_to(", Var_200);
            }
            break;
          case (MR_Integer) 24:
            {
              MR_String Var_192;
              MR_String Var_193;
              MR_String Var_194;
              MR_String Var_196;
              MR_String Var_197;
              MR_Integer Size_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word Kind_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_String Var_66 = ((MR_String) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_193 = mercury__string__int_to_string_1_f_0(Size_420);
              Var_197 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(Kind_421);
              Var_196 = mercury__string__f_43_43_2_f_0(Var_197, (MR_String) ")");
              Var_194 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_196);
              Var_192 = mercury__string__f_43_43_2_f_0(Var_193, Var_194);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_sp(", Var_192);
            }
            break;
          case (MR_Integer) 25:
            {
              MR_String Var_188;
              MR_String Var_189;
              MR_Integer Size_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_189 = mercury__string__int_to_string_1_f_0(Size_422);
              Var_188 = mercury__string__f_43_43_2_f_0(Var_189, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp(", Var_188);
            }
            break;
          case (MR_Integer) 26:
            {
              MR_String Var_184;
              MR_String Var_185;
              MR_Integer Size_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_185 = mercury__string__int_to_string_1_f_0(Size_423);
              Var_184 = mercury__string__f_43_43_2_f_0(Var_185, (MR_String) ")");
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp_and_return(", Var_184);
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word Decls_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word Comps_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_Word MCM_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_Word MFNL_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 4)));
              MR_Word MFL_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 5)));
              MR_Word MFOL_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 6)));
              MR_Word MNF_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 7)));
              MR_Word MDL_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 8)));
              MR_Word SSR_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 9)));
              MR_Word MD_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 10)));
              MR_String Var_148;
              MR_String Var_150;
              MR_String Var_151;
              MR_String Var_152;
              MR_String Var_154;
              MR_String Var_155;
              MR_String Var_156;
              MR_String Var_157;
              MR_String Var_158;
              MR_String Var_160;
              MR_String Var_161;
              MR_String Var_163;
              MR_String Var_164;
              MR_String Var_166;
              MR_String Var_167;
              MR_String Var_169;
              MR_String Var_170;
              MR_String Var_172;
              MR_String Var_173;
              MR_String Var_175;
              MR_String Var_176;
              MR_String Var_178;
              MR_String Var_179;

              Var_151 = ll_backend__opt_debug__dump_decls_1_f_0(Decls_67);
              Var_155 = ll_backend__opt_debug__dump_components_2_f_0(MaybeProcLabel_5, Comps_68);
              Var_157 = ll_backend__opt_debug__dump_may_call_mercury_1_f_0(MCM_69);
              Var_161 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix nolayout:", MaybeProcLabel_5, MFNL_70);
              Var_164 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix layout:", MaybeProcLabel_5, MFL_71);
              Var_167 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix onlylayout:", MaybeProcLabel_5, MFOL_72);
              Var_170 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "nofix:", MaybeProcLabel_5, MNF_73);
              Var_173 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "maybe def:", MaybeProcLabel_5, MDL_74);
              Var_176 = ll_backend__opt_debug__dump_bool_msg_2_f_0((MR_String) "stack slot ref:", SSR_75);
              Var_179 = ll_backend__opt_debug__dump_may_duplicate_1_f_0(MD_76);
              Var_178 = mercury__string__f_43_43_2_f_0(Var_179, (MR_String) "\n)");
              Var_175 = mercury__string__f_43_43_2_f_0(Var_176, Var_178);
              Var_172 = mercury__string__f_43_43_2_f_0(Var_173, Var_175);
              Var_169 = mercury__string__f_43_43_2_f_0(Var_170, Var_172);
              Var_166 = mercury__string__f_43_43_2_f_0(Var_167, Var_169);
              Var_163 = mercury__string__f_43_43_2_f_0(Var_164, Var_166);
              Var_160 = mercury__string__f_43_43_2_f_0(Var_161, Var_163);
              Var_158 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_160);
              Var_156 = mercury__string__f_43_43_2_f_0(Var_157, Var_158);
              Var_154 = mercury__string__f_43_43_2_f_0(Var_155, Var_156);
              Var_152 = mercury__string__f_43_43_2_f_0((MR_String) "components:\n", Var_154);
              Var_150 = mercury__string__f_43_43_2_f_0(Var_151, Var_152);
              Var_148 = mercury__string__f_43_43_2_f_0((MR_String) "declarations:\n", Var_150);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_proc_code(\n", Var_148);
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_Integer TSStringIndex_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_String Var_136;
              MR_String Var_137;
              MR_String Var_138;
              MR_String Var_140;
              MR_String Var_141;
              MR_String Var_142;
              MR_String Var_144;
              MR_String Var_145;
              MR_Word Lval_424 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_137 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_424);
              Var_141 = mercury__string__int_to_string_1_f_0(N_77);
              Var_145 = mercury__string__int_to_string_1_f_0(TSStringIndex_78);
              Var_144 = mercury__string__f_43_43_2_f_0(Var_145, (MR_String) ")");
              Var_142 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_144);
              Var_140 = mercury__string__f_43_43_2_f_0(Var_141, Var_142);
              Var_138 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_140);
              Var_136 = mercury__string__f_43_43_2_f_0(Var_137, Var_138);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "init_sync_term(", Var_136);
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word Child_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_128;
              MR_String Var_129;
              MR_String Var_130;
              MR_String Var_131;
              MR_Word Lval_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_129 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_425);
              Var_131 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Child_79);
              Var_130 = mercury__string__f_43_43_2_f_0(Var_131, (MR_String) ", )");
              Var_128 = mercury__string__f_43_43_2_f_0(Var_129, Var_130);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "fork_new_child(", Var_128);
            }
            break;
          case (MR_Integer) 30:
            {
              MR_String Var_120;
              MR_String Var_121;
              MR_String Var_122;
              MR_String Var_124;
              MR_String Var_125;
              MR_Word Lval_426 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word Label_427 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_121 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_426);
              Var_125 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_427);
              Var_124 = mercury__string__f_43_43_2_f_0(Var_125, (MR_String) ")");
              Var_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_124);
              Var_120 = mercury__string__f_43_43_2_f_0(Var_121, Var_122);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "join_and_continue(", Var_120);
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer NumSlots_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word LCLval_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_112;
              MR_String Var_113;
              MR_String Var_114;
              MR_String Var_116;
              MR_String Var_117;

              Var_113 = mercury__string__int_to_string_1_f_0(NumSlots_80);
              Var_117 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, LCLval_81);
              Var_116 = mercury__string__f_43_43_2_f_0(Var_117, (MR_String) ")");
              Var_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_116);
              Var_112 = mercury__string__f_43_43_2_f_0(Var_113, Var_114);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_create_loop_control(", Var_112);
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word LCRval_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word LCSLval_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_104;
              MR_String Var_105;
              MR_String Var_106;
              MR_String Var_107;
              MR_String Var_108;
              MR_String Var_109;
              MR_Word Label_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));

              Var_105 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCRval_82);
              Var_107 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, LCSLval_83);
              Var_109 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_428);
              Var_108 = mercury__string__f_43_43_2_f_0(Var_109, (MR_String) ")");
              Var_106 = mercury__string__f_43_43_2_f_0(Var_107, Var_108);
              Var_104 = mercury__string__f_43_43_2_f_0(Var_105, Var_106);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_wait_free_slot(", Var_104);
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word LCSRval_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));
              MR_String Var_92;
              MR_String Var_93;
              MR_String Var_94;
              MR_String Var_96;
              MR_String Var_97;
              MR_String Var_98;
              MR_String Var_100;
              MR_String Var_101;
              MR_Word Label_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 3)));
              MR_Word LCRval_430 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));

              Var_93 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCRval_430);
              Var_97 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCSRval_84);
              Var_101 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_429);
              Var_100 = mercury__string__f_43_43_2_f_0(Var_101, (MR_String) ")");
              Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_100);
              Var_96 = mercury__string__f_43_43_2_f_0(Var_97, Var_98);
              Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_96);
              Var_92 = mercury__string__f_43_43_2_f_0(Var_93, Var_94);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_spawn_off(", Var_92);
            }
            break;
          case (MR_Integer) 34:
            {
              MR_String Var_86;
              MR_String Var_87;
              MR_String Var_88;
              MR_String Var_89;
              MR_Word LCRval_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 1)));
              MR_Word LCSRval_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), Instr_7, (MR_Integer) 2)));

              Var_87 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCRval_431);
              Var_89 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCSRval_432);
              Var_88 = mercury__string__f_43_43_2_f_0(Var_89, (MR_String) ")");
              Var_86 = mercury__string__f_43_43_2_f_0(Var_87, Var_88);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_join_and_terminate(", Var_86);
            }
            break;
        }
        break;
    }
    return Str_8;
  }
}

static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_String conv0_STATE_VARIABLE_Str_7;

    ll_backend__opt_debug__dump_comment_char_3_p_0(((MR_Char) (MR_Word) wrapper_arg_1), ((MR_String) wrapper_arg_2), &conv0_STATE_VARIABLE_Str_7);
    *wrapper_arg_3 = ((MR_Box) (conv0_STATE_VARIABLE_Str_7));
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__4_4;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Instr_9, (MR_Integer) 0)));
      MR_String Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), Instr_9, (MR_Integer) 1)));
      MR_String InstrStr0_15;
      MR_String InstrStr_18;
      MR_String InstrsStr_19;
      MR_Word Var_14;

      succeeded = ((((MR_tag((MR_Word) Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Uinstr_12, (MR_Integer) 1)));
        InstrStr0_15 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__1_1, HeadVar__2_2, Uinstr_12);
      }
      else
      {
        MR_String InstrComment_16;

        succeeded = ((MR_tag((MR_Word) Uinstr_12)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          InstrComment_16 = ((MR_String) (MR_hl_field(MR_mktag(1), Uinstr_12, (MR_Integer) 0)));
          {
            MR_String InstrCommentStr_17;
            MR_Box conv1_InstrCommentStr_17;

            mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[1], InstrComment_16, ((MR_Box) ((MR_String) "")), &conv1_InstrCommentStr_17);
            InstrCommentStr_17 = ((MR_String) conv1_InstrCommentStr_17);
            InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t% ", InstrCommentStr_17);
          }
        }
        else
        {
          MR_String Var_24;

          Var_24 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__1_1, HeadVar__2_2, Uinstr_12);
          InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t", Var_24);
        }
      }
      succeeded = (HeadVar__2_2 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (strcmp(Comment_13, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        MR_String Var_25;
        MR_String Var_27;

        Var_27 = mercury__string__f_43_43_2_f_0(Comment_13, (MR_String) "\n");
        Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", Var_27);
        InstrStr_18 = mercury__string__f_43_43_2_f_0(InstrStr0_15, Var_25);
      }
      else
      {
        InstrStr_18 = mercury__string__f_43_43_2_f_0(InstrStr0_15, (MR_String) "\n");
      }
      InstrsStr_19 = ll_backend__opt_debug__dump_instrs_3_f_0(HeadVar__1_1, HeadVar__2_2, Instrs_10);
      HeadVar__4_4 = mercury__string__f_43_43_2_f_0(InstrStr_18, InstrsStr_19);
    }
    return HeadVar__4_4;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "affects_liveness";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "default_affects_liveness";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "does_not_affect_liveness";
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Comp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Comps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_8;
      MR_String Var_9;

      switch (MR_tag((MR_Word) Comp_6)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_8 = (MR_String) "";
          break;
        case (MR_Integer) 1:
          {
            MR_Word Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Comp_6, (MR_Integer) 0)));

            Var_8 = ll_backend__opt_debug__dump_input_components_2_f_0(MaybeProcLabel_1, Inputs_11);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), Comp_6, (MR_Integer) 0)));

            Var_8 = ll_backend__opt_debug__dump_output_components_2_f_0(MaybeProcLabel_1, Outputs_13);
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word AL_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 2)));
                MR_String Code_17 = ((MR_String) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 3)));
                MR_Word Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 1)));

                succeeded = (strcmp(Code_17, (MR_String) "") == 0);
                if (succeeded)
                {
                  MR_String Var_19;
                  MR_String Var_20;

                  switch (AL_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Var_20 = (MR_String) "affects_liveness";
                      break;
                    case (MR_Integer) 2:
                      Var_20 = (MR_String) "default_affects_liveness";
                      break;
                    case (MR_Integer) 1:
                      Var_20 = (MR_String) "does_not_affect_liveness";
                      break;
                  }
                  Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) "\n");
                  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty user_code: ", Var_19);
                }
                else
                {
                  MR_String Var_23;
                  MR_String Var_24;
                  MR_String Var_25;
                  MR_String Var_27;

                  switch (AL_16) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Var_24 = (MR_String) "affects_liveness";
                      break;
                    case (MR_Integer) 2:
                      Var_24 = (MR_String) "default_affects_liveness";
                      break;
                    case (MR_Integer) 1:
                      Var_24 = (MR_String) "does_not_affect_liveness";
                      break;
                  }
                  Var_27 = mercury__string__f_43_43_2_f_0(Code_17, (MR_String) "\n");
                  Var_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_27);
                  Var_23 = mercury__string__f_43_43_2_f_0(Var_24, Var_25);
                  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "user_code: ", Var_23);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word AL_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 2)));
                MR_String Code_33 = ((MR_String) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 4)));
                MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 1)));
                MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 3)));

                succeeded = (strcmp(Code_33, (MR_String) "") == 0);
                if (succeeded)
                {
                  MR_String Var_35;
                  MR_String Var_36;

                  switch (AL_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Var_36 = (MR_String) "affects_liveness";
                      break;
                    case (MR_Integer) 2:
                      Var_36 = (MR_String) "default_affects_liveness";
                      break;
                    case (MR_Integer) 1:
                      Var_36 = (MR_String) "does_not_affect_liveness";
                      break;
                  }
                  Var_35 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) "\n");
                  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty raw_code: ", Var_35);
                }
                else
                {
                  MR_String Var_39;
                  MR_String Var_40;
                  MR_String Var_41;
                  MR_String Var_43;

                  switch (AL_31) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      Var_40 = (MR_String) "affects_liveness";
                      break;
                    case (MR_Integer) 2:
                      Var_40 = (MR_String) "default_affects_liveness";
                      break;
                    case (MR_Integer) 1:
                      Var_40 = (MR_String) "does_not_affect_liveness";
                      break;
                  }
                  Var_43 = mercury__string__f_43_43_2_f_0(Code_33, (MR_String) "\n");
                  Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_43);
                  Var_39 = mercury__string__f_43_43_2_f_0(Var_40, Var_41);
                  Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "raw_code:\n", Var_39);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Label_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), Comp_6, (MR_Integer) 1)));
                MR_String Var_48;
                MR_String Var_49;

                Var_49 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, Label_46);
                Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) "\n");
                Var_8 = mercury__string__f_43_43_2_f_0((MR_String) "fail to ", Var_48);
              }
              break;
            case (MR_Integer) 3:
              Var_8 = (MR_String) "<alloc_id>";
              break;
          }
          break;
      }
      Var_9 = ll_backend__opt_debug__dump_components_2_f_0(MaybeProcLabel_1, Comps_7);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_8;
      MR_String Var_9;
      MR_String Var_11;
      MR_Word Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 0)));
      MR_Word Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 2)));
      MR_String Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 4)));
      MR_String Var_20;
      MR_String Var_21;
      MR_String Var_23;
      MR_String Var_24;
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 1)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 3)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 5)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 6)));

      Var_20 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_1, Lval_13);
      switch (Dummy_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_24 = (MR_String) " (dummy)";
          break;
        case (MR_Integer) 1:
          Var_24 = (MR_String) "";
          break;
      }
      Var_23 = mercury__string__f_43_43_2_f_0(Var_17, Var_24);
      Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_23);
      Var_8 = mercury__string__f_43_43_2_f_0(Var_20, Var_21);
      Var_11 = ll_backend__opt_debug__dump_output_components_2_f_0(MaybeProcLabel_1, Inputs_7);
      Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_8;
      MR_String Var_9;
      MR_String Var_11;
      MR_String Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 0)));
      MR_Word Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 2)));
      MR_Word Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 4)));
      MR_String Var_20;
      MR_String Var_21;
      MR_String Var_22;
      MR_String Var_24;
      MR_Word Var_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 1)));
      MR_Word Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 3)));
      MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 5)));
      MR_Word Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Input_6, (MR_Integer) 6)));

      switch (Dummy_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Var_21 = (MR_String) " (dummy)";
          break;
        case (MR_Integer) 1:
          Var_21 = (MR_String) "";
          break;
      }
      Var_24 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_1, Rval_17);
      Var_22 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_24);
      Var_20 = mercury__string__f_43_43_2_f_0(Var_21, Var_22);
      Var_8 = mercury__string__f_43_43_2_f_0(Var_13, Var_20);
      Var_11 = ll_backend__opt_debug__dump_input_components_2_f_0(MaybeProcLabel_1, Inputs_7);
      Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_11);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_String) "";
    else
    {
      MR_Word Decl_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Decls_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String Var_5;
      MR_String Var_6;
      MR_String TypeStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), Decl_3, (MR_Integer) 1)));
      MR_String VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), Decl_3, (MR_Integer) 2)));
      MR_String Var_11;
      MR_String Var_12;
      MR_String Var_14;
      MR_Word _MerType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Decl_3, (MR_Integer) 0)));

      Var_14 = mercury__string__f_43_43_2_f_0(VarName_9, (MR_String) "\n");
      Var_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_14);
      Var_11 = mercury__string__f_43_43_2_f_0(TypeStr_8, Var_12);
      Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "decl ", Var_11);
      Var_6 = ll_backend__opt_debug__dump_decls_1_f_0(Decls_4);
      HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_5, Var_6);
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "may_not_use_atomic_alloc";
        break;
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "may_use_atomic_alloc";
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "may_duplicate";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "may_not_duplicate";
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
  MR_String Msg_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    switch (HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Msg_1, (MR_String) " no\n");
        }
        break;
      case (MR_Integer) 1:
        {
          HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Msg_1, (MR_String) " yes\n");
        }
        break;
    }
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_String HeadVar__4_4;

    if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
      MR_String Var_10;
      MR_String Var_12;
      MR_String Var_13;

      Var_13 = ll_backend__opt_debug__dump_label_2_f_0(HeadVar__2_2, Label_9);
      Var_12 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) "\n");
      Var_10 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_12);
      HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadVar__1_1, Var_10);
    }
    return HeadVar__4_4;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "may_call_mercury";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "will_not_call_mercury";
        break;
    }
    return HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
  MR_Word EmbeddedStackFrame_3)
{
  {
    MR_String Str_4;
    MR_Word StackId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), EmbeddedStackFrame_3, (MR_Integer) 0)));
    MR_Integer FirstSlot_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EmbeddedStackFrame_3, (MR_Integer) 1)));
    MR_Integer LastSlot_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), EmbeddedStackFrame_3, (MR_Integer) 2)));

    switch (StackId_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String Var_15;
          MR_String Var_16;
          MR_String Var_17;
          MR_String Var_19;

          Var_16 = mercury__string__int_to_string_1_f_0(FirstSlot_6);
          Var_19 = mercury__string__int_to_string_1_f_0(LastSlot_7);
          Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "..", Var_19);
          Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "detstack slots ", Var_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_9;
          MR_String Var_10;
          MR_String Var_11;
          MR_String Var_13;

          Var_10 = mercury__string__int_to_string_1_f_0(FirstSlot_6);
          Var_13 = mercury__string__int_to_string_1_f_0(LastSlot_7);
          Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "..", Var_13);
          Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "nondetstack slots ", Var_9);
        }
        break;
    }
    return Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        HeadVar__2_2 = (MR_String) "leaf";
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "nonleaf";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_String HeadVar__3_3;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__3_3 = (MR_String) "";
    else
    {
      MR_Word MaybeLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word MaybeLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String LabelStr_10;
      MR_String Var_13;
      MR_String Var_14;

      if ((MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        LabelStr_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
      }
      else
      {
        MR_Word Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeLabel_6, (MR_Integer) 0)));

        LabelStr_10 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, Label_9);
      }
      Var_14 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(MaybeProcLabel_1, MaybeLabels_7);
      Var_13 = mercury__string__f_43_43_2_f_0(LabelStr_10, Var_14);
      HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_13);
    }
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livevals_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Lvalset_5)
{
  {
    MR_String HeadVar__3_3;
    MR_Word Var_6;

    Var_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, Lvalset_5);
    HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_4, Var_6, (MR_String) "");
    return HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2,
  MR_String Prefix_3)
{
  {
    MR_String HeadVar__4_4;

    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__4_4 = (MR_String) "";
    else
    {
      MR_Word Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Lvallist_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_String Var_11;
      MR_String Var_12;
      MR_String Var_13;

      Var_12 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_1, Lval_8);
      Var_13 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_1, Lvallist_9, (MR_String) " ");
      Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
      HeadVar__4_4 = mercury__string__f_43_43_2_f_0(Prefix_3, Var_11);
    }
    return HeadVar__4_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rval_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Rval_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;

    switch (MR_tag((MR_Word) Rval_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), Rval_5, (MR_Integer) 0)));

          Str_6 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_4, Lval_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Rval_5, (MR_Integer) 0)));
          MR_String Var_69;
          MR_String Var_70;
          MR_Integer Var_71;

          Var_71 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, Var_8);
          Var_70 = mercury__string__int_to_string_1_f_0(Var_71);
          Var_69 = mercury__string__f_43_43_2_f_0(Var_70, (MR_String) ")");
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "var(", Var_69);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer T_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Rval_5, (MR_Integer) 0)));
          MR_Word N_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), Rval_5, (MR_Integer) 1)));
          MR_String Var_61;
          MR_String Var_62;
          MR_String Var_63;
          MR_String Var_65;
          MR_String Var_66;

          Var_62 = mercury__string__int_to_string_1_f_0(T_9);
          Var_66 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_10);
          Var_65 = mercury__string__f_43_43_2_f_0(Var_66, (MR_String) ")");
          Var_63 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_65);
          Var_61 = mercury__string__f_43_43_2_f_0(Var_62, Var_63);
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword(", Var_61);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_57;
              MR_String Var_58;
              MR_Integer T_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));

              Var_58 = mercury__string__int_to_string_1_f_0(T_73);
              Var_57 = mercury__string__f_43_43_2_f_0(Var_58, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword_hole(", Var_57);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word C_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));

              Str_6 = ll_backend__opt_debug__dump_const_2_f_0(MaybeProcLabel_4, C_11);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word O_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));
              MR_String Var_50;
              MR_String Var_51;
              MR_String Var_53;
              MR_String Var_54;
              MR_Word N_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 2)));

              Var_50 = ll_backend__opt_debug__dump_unop_1_f_0(O_12);
              Var_54 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_74);
              Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ")");
              Var_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_53);
              Str_6 = mercury__string__f_43_43_2_f_0(Var_50, Var_51);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word N1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 2)));
              MR_Word N2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 3)));
              MR_Word O_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));

              {
                MR_Word Var_15;
                MR_Word Var_16;
                MR_Word Var_17;

                succeeded = ((((MR_tag((MR_Word) N1_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), N1_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  Var_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), N1_13, (MR_Integer) 1)));
                  Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), N1_13, (MR_Integer) 2)));
                  Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), N1_13, (MR_Integer) 3)));
                }
              }
              if (!(succeeded))
              {
                MR_Word Var_18;
                MR_Word Var_19;
                MR_Word Var_20;

                succeeded = ((((MR_tag((MR_Word) N2_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), N2_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), N2_14, (MR_Integer) 1)));
                  Var_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), N2_14, (MR_Integer) 2)));
                  Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), N2_14, (MR_Integer) 3)));
                }
              }
              if (succeeded)
              {
                MR_String Var_27;
                MR_String Var_28;
                MR_String Var_29;
                MR_String Var_31;
                MR_String Var_33;
                MR_String Var_34;
                MR_String Var_35;
                MR_String Var_37;
                MR_String Var_39;
                MR_String Var_40;

                Var_28 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N1_13);
                Var_34 = ll_backend__opt_debug__dump_binop_1_f_0(O_75);
                Var_40 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N2_14);
                Var_39 = mercury__string__f_43_43_2_f_0(Var_40, (MR_String) ")");
                Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_39);
                Var_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_37);
                Var_33 = mercury__string__f_43_43_2_f_0(Var_34, Var_35);
                Var_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_33);
                Var_29 = mercury__string__f_43_43_2_f_0((MR_String) ")", Var_31);
                Var_27 = mercury__string__f_43_43_2_f_0(Var_28, Var_29);
                Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_27);
              }
              else
              {
                MR_String Var_42;
                MR_String Var_43;
                MR_String Var_45;
                MR_String Var_46;
                MR_String Var_47;
                MR_String Var_49;

                Var_42 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N1_13);
                Var_46 = ll_backend__opt_debug__dump_binop_1_f_0(O_75);
                Var_49 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N2_14);
                Var_47 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_49);
                Var_45 = mercury__string__f_43_43_2_f_0(Var_46, Var_47);
                Var_43 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_45);
                Str_6 = mercury__string__f_43_43_2_f_0(Var_42, Var_43);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word M_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Rval_5, (MR_Integer) 1)));
              MR_String Var_23;
              MR_String Var_24;

              Var_24 = ll_backend__opt_debug__dump_mem_ref_2_f_0(MaybeProcLabel_4, M_21);
              Var_23 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_addr(", Var_23);
            }
            break;
        }
        break;
    }
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_mem_ref_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word MemRef_5)
{
  {
    MR_String Str_6;

    switch (MR_tag((MR_Word) MemRef_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word N_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), MemRef_5, (MR_Integer) 0)));
          MR_String Var_28;
          MR_String Var_29;

          Var_29 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_7);
          Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) ")");
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar_ref(", Var_28);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Var_24;
          MR_String Var_25;
          MR_Word N_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), MemRef_5, (MR_Integer) 0)));

          Var_25 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_31);
          Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "framevar_ref(", Var_24);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word R_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_5, (MR_Integer) 0)));
          MR_Word MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_5, (MR_Integer) 1)));
          MR_String TagString_11;
          MR_String Var_13;
          MR_String Var_14;
          MR_String Var_15;
          MR_String Var_17;
          MR_String Var_18;
          MR_String Var_20;
          MR_String Var_21;
          MR_Word N_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), MemRef_5, (MR_Integer) 2)));

          if ((MaybeTag_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            TagString_11 = (MR_String) "unknown_tag";
          else
          {
            MR_Integer Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeTag_9, (MR_Integer) 0)));

            TagString_11 = mercury__string__int_to_string_1_f_0(Tag_10);
          }
          Var_14 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_8);
          Var_21 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_32);
          Var_20 = mercury__string__f_43_43_2_f_0(Var_21, (MR_String) ")");
          Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_20);
          Var_17 = mercury__string__f_43_43_2_f_0(TagString_11, Var_18);
          Var_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_17);
          Var_13 = mercury__string__f_43_43_2_f_0(Var_14, Var_15);
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "heap_ref(", Var_13);
        }
        break;
    }
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_lval_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Lval_5)
{
  {
    MR_String Str_6;

    switch (MR_tag((MR_Word) Lval_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Lval_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_6 = (MR_String) "succip";
            break;
          case (MR_Integer) 1:
            Str_6 = (MR_String) "maxfr";
            break;
          case (MR_Integer) 2:
            Str_6 = (MR_String) "curfr";
            break;
          case (MR_Integer) 3:
            Str_6 = (MR_String) "hp";
            break;
          case (MR_Integer) 4:
            Str_6 = (MR_String) "sp";
            break;
          case (MR_Integer) 5:
            Str_6 = (MR_String) "parent_sp";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Lval_5, (MR_Integer) 0)));
          MR_Integer Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Lval_5, (MR_Integer) 1)));

          Str_6 = ll_backend__opt_debug__dump_reg_2_f_0(Type_7, Num_8);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String Var_27;
          MR_Word Type_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), Lval_5, (MR_Integer) 0)));
          MR_Integer Num_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Lval_5, (MR_Integer) 1)));

          Var_27 = ll_backend__opt_debug__dump_reg_2_f_0(Type_86, Num_87);
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "temp_", Var_27);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));
              MR_String Var_76;

              Var_76 = mercury__string__int_to_string_1_f_0(N_9);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "sv", Var_76);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_74;
              MR_Integer N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_74 = mercury__string__int_to_string_1_f_0(N_77);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "parent_sv", Var_74);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_72;
              MR_Integer N_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_72 = mercury__string__int_to_string_1_f_0(N_78);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "fv", Var_72);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Macro_10;
              MR_Integer Var_68;
              MR_Word Type_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));
              MR_Integer N_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 2)));
              MR_String Var_89;
              MR_Word Var_95;
              MR_String Var_96;
              MR_String Var_98;
              MR_String Var_99;
              MR_String Var_106;

              switch (Type_79) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  Macro_10 = (MR_String) "parent_sv";
                  break;
                case (MR_Integer) 0:
                  Macro_10 = (MR_String) "sv";
                  break;
              }
              Var_68 = (N_80 + (MR_Integer) 1);
              Var_95 = (MR_Word) &ll_backend__opt_debug_scalar_common_4[0];
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_95, Var_68, &Var_89);
              Var_96 = mercury__string__f_43_43_2_f_0(Macro_10, Var_89);
              Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_96);
              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(Var_95, N_80, &Var_99);
              Var_106 = mercury__string__f_43_43_2_f_0(Var_99, Var_98);
              Str_6 = mercury__string__f_43_43_2_f_0(Macro_10, Var_106);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_40;
              MR_String Var_41;
              MR_Word R_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_41 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_84);
              Var_40 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succip_slot(", Var_40);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word R_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));
              MR_String Var_56;
              MR_String Var_57;

              Var_57 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_11);
              Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succfr_slot(", Var_56);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String Var_44;
              MR_String Var_45;
              MR_Word R_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_45 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_83);
              Var_44 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redoip_slot(", Var_44);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String Var_48;
              MR_String Var_49;
              MR_Word R_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_49 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_82);
              Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redofr_slot(", Var_48);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Var_52;
              MR_String Var_53;
              MR_Word R_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_53 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_81);
              Var_52 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "prevfr_slot(", Var_52);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word MT_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));
              MR_Word F_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 3)));
              MR_String T_str_15;
              MR_String Var_29;
              MR_String Var_30;
              MR_String Var_32;
              MR_String Var_33;
              MR_String Var_34;
              MR_String Var_36;
              MR_String Var_37;
              MR_Word N_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 2)));

              if ((MT_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                T_str_15 = (MR_String) "no";
              else
              {
                MR_Integer T_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MT_12, (MR_Integer) 0)));

                mercury__string__int_to_string_2_p_0(T_14, &T_str_15);
              }
              Var_33 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_85);
              Var_37 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, F_13);
              Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) ")");
              Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_36);
              Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
              Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_32);
              Var_29 = mercury__string__f_43_43_2_f_0(T_str_15, Var_30);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "field(", Var_29);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String Var_23;
              MR_String Var_24;
              MR_Word R_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));

              Var_24 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_88);
              Var_23 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_ref(", Var_23);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String VarName_17;
              MR_Word Var_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), Lval_5, (MR_Integer) 1)));
              MR_String Var_20;

              VarName_17 = (MR_String) Var_18;
              Var_20 = mercury__string__f_43_43_2_f_0(VarName_17, (MR_String) "))");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "global_var_ref(env_var_ref(", Var_20);
            }
            break;
          case (MR_Integer) 12:
            Str_6 = (MR_String) "lvar(_)";
            break;
        }
        break;
    }
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_binop_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "&&";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "||";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "body";
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_String) "string_unsafe_index_code_unit";
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_String) "str==";
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_String) "str!=";
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_String) "str<";
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_String) "str>";
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_String) "str<=";
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_String) "str>=";
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_String) "strcmp";
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_String) "unsigned<=";
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_String) "fl+";
            break;
          case (MR_Integer) 13:
            HeadVar__2_2 = (MR_String) "fl-";
            break;
          case (MR_Integer) 14:
            HeadVar__2_2 = (MR_String) "fl*";
            break;
          case (MR_Integer) 15:
            HeadVar__2_2 = (MR_String) "fl/";
            break;
          case (MR_Integer) 16:
            HeadVar__2_2 = (MR_String) "fl==";
            break;
          case (MR_Integer) 17:
            HeadVar__2_2 = (MR_String) "fl!=";
            break;
          case (MR_Integer) 18:
            HeadVar__2_2 = (MR_String) "fl<";
            break;
          case (MR_Integer) 19:
            HeadVar__2_2 = (MR_String) "fl>";
            break;
          case (MR_Integer) 20:
            HeadVar__2_2 = (MR_String) "fl<=";
            break;
          case (MR_Integer) 21:
            HeadVar__2_2 = (MR_String) "fl>=";
            break;
          case (MR_Integer) 22:
            HeadVar__2_2 = (MR_String) "float_word_bits";
            break;
          case (MR_Integer) 23:
            HeadVar__2_2 = (MR_String) "float_from_dword";
            break;
          case (MR_Integer) 24:
            HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
            break;
          case (MR_Integer) 25:
            HeadVar__2_2 = (MR_String) "compound=";
            break;
          case (MR_Integer) 26:
            HeadVar__2_2 = (MR_String) "compound<";
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "+";
        break;
      case (MR_Integer) 2:
        HeadVar__2_2 = (MR_String) "-";
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "*";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "/";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "%";
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_String) "unchecked<<";
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_String) "unchecked>>";
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_String) "&";
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_String) "|";
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_String) "^";
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_String) "==";
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_String) "!=";
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_String) "array_index";
            break;
          case (MR_Integer) 11:
            {
              MR_Integer N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
              MR_String Var_6;
              MR_String Var_7;

              Var_7 = mercury__string__int_to_string_1_f_0(N_4);
              Var_6 = mercury__string__f_43_43_2_f_0(Var_7, (MR_String) ")str==");
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "offset(", Var_6);
            }
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_String) "<";
            break;
          case (MR_Integer) 13:
            HeadVar__2_2 = (MR_String) ">";
            break;
          case (MR_Integer) 14:
            HeadVar__2_2 = (MR_String) "<=";
            break;
          case (MR_Integer) 15:
            HeadVar__2_2 = (MR_String) ">=";
            break;
        }
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_unop_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "mktag";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "tag";
            break;
          case (MR_Integer) 2:
            HeadVar__2_2 = (MR_String) "unmktag";
            break;
          case (MR_Integer) 3:
            HeadVar__2_2 = (MR_String) "strip_tag";
            break;
          case (MR_Integer) 4:
            HeadVar__2_2 = (MR_String) "mkbody";
            break;
          case (MR_Integer) 5:
            HeadVar__2_2 = (MR_String) "unmkbody";
            break;
          case (MR_Integer) 6:
            HeadVar__2_2 = (MR_String) "not";
            break;
          case (MR_Integer) 7:
            HeadVar__2_2 = (MR_String) "hash_string";
            break;
          case (MR_Integer) 8:
            HeadVar__2_2 = (MR_String) "hash_string2";
            break;
          case (MR_Integer) 9:
            HeadVar__2_2 = (MR_String) "hash_string3";
            break;
          case (MR_Integer) 10:
            HeadVar__2_2 = (MR_String) "hash_string4";
            break;
          case (MR_Integer) 11:
            HeadVar__2_2 = (MR_String) "hash_string5";
            break;
          case (MR_Integer) 12:
            HeadVar__2_2 = (MR_String) "hash_string6";
            break;
        }
        break;
      case (MR_Integer) 1:
        HeadVar__2_2 = (MR_String) "bitwise_complement";
        break;
    }
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_const_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Const_5)
{
  {
    MR_String Str_6;

    switch (MR_tag((MR_Word) Const_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(Const_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_6 = (MR_String) "true";
            break;
          case (MR_Integer) 1:
            Str_6 = (MR_String) "false";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer I_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Const_5, (MR_Integer) 0)));

          Str_6 = mercury__string__int_to_string_1_f_0(I_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Unsigned U_8 = ((MR_Unsigned) (MR_hl_field(MR_mktag(2), Const_5, (MR_Integer) 0)));

          Str_6 = mercury__string__uint_to_string_1_f_0(U_8);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              int8_t I8_9 = ((int8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__int8_to_string_1_f_0(I8_9);
            }
            break;
          case (MR_Integer) 1:
            {
              uint8_t U8_10 = ((uint8_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__uint8_to_string_1_f_0(U8_10);
            }
            break;
          case (MR_Integer) 2:
            {
              int16_t I16_11 = ((int16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__int16_to_string_1_f_0(I16_11);
            }
            break;
          case (MR_Integer) 3:
            {
              uint16_t U16_12 = ((uint16_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__uint16_to_string_1_f_0(U16_12);
            }
            break;
          case (MR_Integer) 4:
            {
              int32_t I32_13 = ((int32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__int32_to_string_1_f_0(I32_13);
            }
            break;
          case (MR_Integer) 5:
            {
              uint32_t U32_14 = ((uint32_t) (MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__uint32_to_string_1_f_0(U32_14);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word Var_16;

              Str_6 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));
              Var_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Float F_42 = MR_unbox_float((MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));

              Str_6 = mercury__string__float_to_string_1_f_0(F_42);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String S_17 = ((MR_String) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));
              MR_String Var_39;
              MR_String Var_40;

              Var_40 = backend_libs__c_util__quote_string_1_f_0(S_17);
              Var_39 = mercury__string__f_43_43_2_f_0(Var_40, (MR_String) "\"");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\"", Var_39);
            }
            break;
          case (MR_Integer) 9:
            Str_6 = (MR_String) "multi_string(...)";
            break;
          case (MR_Integer) 10:
            {
              MR_Word CodeAddr_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));
              MR_String Var_35;
              MR_String Var_36;

              Var_36 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_4, CodeAddr_19);
              Var_35 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) ")");
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "code_addr_const(", Var_35);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_Word DataId_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 1)));
              MR_Word MaybeOffset_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), Const_5, (MR_Integer) 2)));
              MR_String DataIdStr_22;

              DataIdStr_22 = ll_backend__opt_debug__dump_data_id_1_f_0(DataId_20);
              if ((MaybeOffset_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_String Var_32;

                Var_32 = mercury__string__f_43_43_2_f_0(DataIdStr_22, (MR_String) ")");
                Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", Var_32);
              }
              else
              {
                MR_Integer Offset_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), MaybeOffset_21, (MR_Integer) 0)));
                MR_String Var_25;
                MR_String Var_26;
                MR_String Var_28;
                MR_String Var_29;

                Var_29 = mercury__string__int_to_string_1_f_0(Offset_23);
                Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) ")");
                Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_28);
                Var_25 = mercury__string__f_43_43_2_f_0(DataIdStr_22, Var_26);
                Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", Var_25);
              }
            }
            break;
        }
        break;
    }
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addr_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word CodeAddr_5)
{
  {
    MR_String Str_6;

    switch (MR_tag((MR_Word) CodeAddr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(CodeAddr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_6 = (MR_String) "succip";
            break;
          case (MR_Integer) 1:
            Str_6 = (MR_String) "do_redo";
            break;
          case (MR_Integer) 2:
            Str_6 = (MR_String) "do_fail";
            break;
          case (MR_Integer) 3:
            Str_6 = (MR_String) "do_trace_redo_fail_shallow";
            break;
          case (MR_Integer) 4:
            Str_6 = (MR_String) "do_trace_redo_fail_deep";
            break;
          case (MR_Integer) 5:
            Str_6 = (MR_String) "do_not_reached";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), CodeAddr_5, (MR_Integer) 0)));

          Str_6 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_4, Label_7);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), CodeAddr_5, (MR_Integer) 0)));

          Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_8);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 1)));

              switch (Var_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Str_6 = (MR_String) "do_succeed";
                  break;
                case (MR_Integer) 1:
                  Str_6 = (MR_String) "do_last_succeed";
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word Variant_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 1)));
              MR_String Var_13;

              Var_13 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_9);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_closure_", Var_13);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_11;
              MR_Word Variant_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), CodeAddr_5, (MR_Integer) 1)));

              Var_11 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_16);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_class_method_", Var_11);
            }
            break;
        }
        break;
    }
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_label_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Label_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;

    if (((MR_tag((MR_Word) Label_5)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ProcLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), Label_5, (MR_Integer) 1)));
      MR_Word Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Label_5, (MR_Integer) 0)));

      if ((MaybeProcLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_21);
      else
      {
        MR_Word CurProcLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcLabel_4, (MR_Integer) 0)));

        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(CurProcLabel_19, ProcLabel_21);
        if (succeeded)
          Str_6 = (MR_String) "CUR_PROC_ENTRY";
        else
          Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_21);
      }
    }
    else
    {
      MR_Integer N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), Label_5, (MR_Integer) 0)));
      MR_Word ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), Label_5, (MR_Integer) 1)));
      MR_String NStr_9;

      mercury__string__int_to_string_2_p_0(N_7, &NStr_9);
      if ((MaybeProcLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String Var_16;
        MR_String Var_17;

        Var_16 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_8);
        Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_i", NStr_9);
        Str_6 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
      }
      else
      {
        MR_Word CurProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeProcLabel_4, (MR_Integer) 0)));

        succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(CurProcLabel_10, ProcLabel_8);
        if (succeeded)
        {
          Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "local_", NStr_9);
        }
        else
        {
          MR_String Var_13;
          MR_String Var_14;

          Var_13 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_8);
          Var_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", NStr_9);
          Str_6 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
        }
      }
    }
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_data_id_1_f_0(
  MR_Word DataId_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) DataId_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), DataId_3, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) Var_68)) == (MR_mktag((MR_Integer) 0))))
          {
            MR_Word RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 0)));
            MR_Word DataName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), Var_68, (MR_Integer) 1)));
            MR_String Var_59;
            MR_String Var_60;
            MR_String Var_61;
            MR_String Var_63;
            MR_String Var_64;

            Var_60 = ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(RttiTypeCtor_5);
            Var_64 = ll_backend__opt_debug__dump_rtti_name_1_f_0(DataName_6);
            Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ")");
            Var_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_63);
            Var_59 = mercury__string__f_43_43_2_f_0(Var_60, Var_61);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_id(", Var_59);
          }
          else
          {
            MR_Word TCName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 0)));
            MR_Word TCDataName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_68, (MR_Integer) 1)));
            MR_String Var_50;
            MR_String Var_51;
            MR_String Var_52;
            MR_String Var_54;
            MR_String Var_55;

            Var_51 = ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(TCName_7);
            Var_55 = ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(TCDataName_8);
            Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) ")");
            Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_54);
            Var_50 = mercury__string__f_43_43_2_f_0(Var_51, Var_52);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_rtti_id(", Var_50);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), DataId_3, (MR_Integer) 0)));
          MR_Word Id_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), DataId_3, (MR_Integer) 1)));
          MR_String Var_42;
          MR_String Var_43;
          MR_String Var_45;
          MR_String Var_46;

          Var_42 = backend_libs__rtti__tabling_info_id_str_1_f_0(Id_10);
          Var_46 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_9);
          Var_45 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ")");
          Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_45);
          Str_4 = mercury__string__f_43_43_2_f_0(Var_42, Var_43);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer TypeNum_11;
          MR_Integer Offset_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), DataId_3, (MR_Integer) 1)));
          MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), DataId_3, (MR_Integer) 0)));
          MR_String Var_35;
          MR_String Var_36;
          MR_String Var_37;
          MR_String Var_39;
          MR_String Var_40;

          TypeNum_11 = (MR_Integer) Var_33;
          Var_36 = mercury__string__int_to_string_1_f_0(TypeNum_11);
          Var_40 = mercury__string__int_to_string_1_f_0(Offset_12);
          Var_39 = mercury__string__f_43_43_2_f_0(Var_40, (MR_String) ")");
          Var_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_39);
          Var_35 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "scalar_common_data_id(", Var_35);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), DataId_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_3, (MR_Integer) 1)));
              MR_String Var_26;
              MR_String Var_27;
              MR_String Var_28;
              MR_String Var_30;
              MR_String Var_31;
              MR_Integer TypeNum_66 = (MR_Integer) Var_24;
              MR_Integer Offset_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), DataId_3, (MR_Integer) 2)));

              Var_27 = mercury__string__int_to_string_1_f_0(TypeNum_66);
              Var_31 = mercury__string__int_to_string_1_f_0(Offset_67);
              Var_30 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) ")");
              Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_30);
              Var_26 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_data_id(", Var_26);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word LayoutName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_3, (MR_Integer) 1)));
              MR_String Var_21;
              MR_String Var_22;

              Var_22 = ll_backend__opt_debug__dump_layout_name_1_f_0(LayoutName_13);
              Var_21 = mercury__string__f_43_43_2_f_0(Var_22, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "layout_id(", Var_21);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word PredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), DataId_3, (MR_Integer) 2)));
              MR_String Var_17;
              MR_String Var_18;
              MR_Word PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 0)));
              MR_Integer ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), PredProcId_14, (MR_Integer) 1)));
              MR_String Var_72;
              MR_String Var_73;
              MR_Integer Var_74;
              MR_String Var_75;
              MR_String Var_77;
              MR_String Var_78;
              MR_Integer Var_79;

              Var_74 = hlds__hlds_pred__pred_id_to_int_1_f_0(PredId_69);
              Var_73 = mercury__string__int_to_string_1_f_0(Var_74);
              Var_79 = hlds__hlds_pred__proc_id_to_int_1_f_0(ProcId_70);
              Var_78 = mercury__string__int_to_string_1_f_0(Var_79);
              Var_77 = mercury__string__f_43_43_2_f_0(Var_78, (MR_String) ")");
              Var_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_77);
              Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_75);
              Var_18 = mercury__string__f_43_43_2_f_0((MR_String) "proc(", Var_72);
              Var_17 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_id(", Var_17);
            }
            break;
        }
        break;
    }
    return Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_name_1_f_0(
  MR_Word LayoutName_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) LayoutName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word RttiProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), LayoutName_3, (MR_Integer) 0)));
          MR_String Var_128;
          MR_String Var_129;
          MR_Word Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), LayoutName_3, (MR_Integer) 1)));

          Var_129 = ll_backend__opt_debug__dump_rttiproclabel_1_f_0(RttiProcLabel_5);
          Var_128 = mercury__string__f_43_43_2_f_0(Var_129, (MR_String) ")");
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "proc_layout(", Var_128);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), LayoutName_3, (MR_Integer) 0)));
          MR_Integer SeqNo_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LayoutName_3, (MR_Integer) 1)));
          MR_String Var_122;
          MR_String Var_123;
          MR_String Var_124;
          MR_String Var_125;
          MR_Word Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), LayoutName_3, (MR_Integer) 2)));

          Var_123 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_7);
          Var_125 = mercury__string__int_to_string_1_f_0(SeqNo_8);
          Var_124 = mercury__string__f_43_43_2_f_0(Var_125, (MR_String) ")");
          Var_122 = mercury__string__f_43_43_2_f_0(Var_123, Var_124);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "closure_proc_id(", Var_122);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), LayoutName_3, (MR_Integer) 0)));
          MR_Integer FileNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), LayoutName_3, (MR_Integer) 1)));
          MR_String Var_116;
          MR_String Var_117;
          MR_String Var_118;
          MR_String Var_119;

          Var_117 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_10);
          Var_119 = mercury__string__int_to_string_1_f_0(FileNum_11);
          Var_118 = mercury__string__f_43_43_2_f_0(Var_119, (MR_String) ")");
          Var_116 = mercury__string__f_43_43_2_f_0(Var_117, Var_118);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout(", Var_116);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_110;
              MR_String Var_111;
              MR_String Var_112;
              MR_String Var_113;
              MR_Word ModuleName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));
              MR_Integer FileNum_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));

              Var_111 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_131);
              Var_113 = mercury__string__int_to_string_1_f_0(FileNum_132);
              Var_112 = mercury__string__f_43_43_2_f_0(Var_113, (MR_String) ")");
              Var_110 = mercury__string__f_43_43_2_f_0(Var_111, Var_112);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_line_number_vector(", Var_110);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_104;
              MR_String Var_105;
              MR_String Var_106;
              MR_String Var_107;
              MR_Word ModuleName_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));
              MR_Integer FileNum_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));

              Var_105 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_133);
              Var_107 = mercury__string__int_to_string_1_f_0(FileNum_134);
              Var_106 = mercury__string__f_43_43_2_f_0(Var_107, (MR_String) ")");
              Var_104 = mercury__string__f_43_43_2_f_0(Var_105, Var_106);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_label_layout_vector(", Var_104);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_100;
              MR_String Var_101;
              MR_Word ModuleName_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_101 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_135);
              Var_100 = mercury__string__f_43_43_2_f_0(Var_101, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_string_table(", Var_100);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_96;
              MR_String Var_97;
              MR_Word ModuleName_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_97 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_136);
              Var_96 = mercury__string__f_43_43_2_f_0(Var_97, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_file_vector(", Var_96);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_92;
              MR_String Var_93;
              MR_Word ModuleName_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_93 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_137);
              Var_92 = mercury__string__f_43_43_2_f_0(Var_93, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_proc_vector(", Var_92);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer NumLabels_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));
              MR_String Var_84;
              MR_String Var_85;
              MR_String Var_86;
              MR_String Var_88;
              MR_String Var_89;
              MR_Word ModuleName_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_85 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_138);
              Var_89 = mercury__string__int_to_string_1_f_0(NumLabels_12);
              Var_88 = mercury__string__f_43_43_2_f_0(Var_89, (MR_String) ")");
              Var_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_88);
              Var_84 = mercury__string__f_43_43_2_f_0(Var_85, Var_86);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_label_exec_count(", Var_84);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String Var_80;
              MR_String Var_81;
              MR_Word ModuleName_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_139);
              Var_80 = mercury__string__f_43_43_2_f_0(Var_81, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_set_desc(", Var_80);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer EventNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));
              MR_String Var_68;
              MR_String Var_69;
              MR_String Var_70;
              MR_String Var_72;
              MR_String Var_73;
              MR_Word ModuleName_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_69 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_141);
              Var_73 = mercury__string__int_to_string_1_f_0(EventNum_13);
              Var_72 = mercury__string__f_43_43_2_f_0(Var_73, (MR_String) ")");
              Var_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_72);
              Var_68 = mercury__string__f_43_43_2_f_0(Var_69, Var_70);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_arg_names(", Var_68);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Var_60;
              MR_String Var_61;
              MR_String Var_62;
              MR_String Var_64;
              MR_String Var_65;
              MR_Word ModuleName_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));
              MR_Integer EventNum_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));

              Var_61 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_142);
              Var_65 = mercury__string__int_to_string_1_f_0(EventNum_143);
              Var_64 = mercury__string__f_43_43_2_f_0(Var_65, (MR_String) ")");
              Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_64);
              Var_60 = mercury__string__f_43_43_2_f_0(Var_61, Var_62);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attrs(", Var_60);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer ArgNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 3)));
              MR_String Var_48;
              MR_String Var_49;
              MR_String Var_50;
              MR_String Var_52;
              MR_String Var_53;
              MR_String Var_54;
              MR_String Var_56;
              MR_String Var_57;
              MR_Word ModuleName_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));
              MR_Integer EventNum_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));

              Var_49 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_144);
              Var_53 = mercury__string__int_to_string_1_f_0(EventNum_145);
              Var_57 = mercury__string__int_to_string_1_f_0(ArgNum_14);
              Var_56 = mercury__string__f_43_43_2_f_0(Var_57, (MR_String) ")");
              Var_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_56);
              Var_52 = mercury__string__f_43_43_2_f_0(Var_53, Var_54);
              Var_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_52);
              Var_48 = mercury__string__f_43_43_2_f_0(Var_49, Var_50);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_args(", Var_48);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String Var_36;
              MR_String Var_37;
              MR_String Var_38;
              MR_String Var_40;
              MR_String Var_41;
              MR_String Var_42;
              MR_String Var_44;
              MR_String Var_45;
              MR_Word ModuleName_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));
              MR_Integer EventNum_147 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));
              MR_Integer ArgNum_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 3)));

              Var_37 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_146);
              Var_41 = mercury__string__int_to_string_1_f_0(EventNum_147);
              Var_45 = mercury__string__int_to_string_1_f_0(ArgNum_148);
              Var_44 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) ")");
              Var_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_44);
              Var_40 = mercury__string__f_43_43_2_f_0(Var_41, Var_42);
              Var_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_40);
              Var_36 = mercury__string__f_43_43_2_f_0(Var_37, Var_38);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_order(", Var_36);
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String Var_28;
              MR_String Var_29;
              MR_String Var_30;
              MR_String Var_32;
              MR_String Var_33;
              MR_Word ModuleName_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));
              MR_Integer EventNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 2)));

              Var_29 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_149);
              Var_33 = mercury__string__int_to_string_1_f_0(EventNum_150);
              Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) ")");
              Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_32);
              Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_order(", Var_28);
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String Var_76;
              MR_String Var_77;
              MR_Word ModuleName_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_77 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_140);
              Var_76 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_specs(", Var_76);
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String Var_24;
              MR_String Var_25;
              MR_Word ModuleName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_151);
              Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_oisu_bytes(", Var_24);
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String Var_20;
              MR_String Var_21;
              MR_Word ModuleName_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_21 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_152);
              Var_20 = mercury__string__f_43_43_2_f_0(Var_21, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_type_table_bytes(", Var_20);
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String Var_16;
              MR_String Var_17;
              MR_Word ModuleName_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), LayoutName_3, (MR_Integer) 1)));

              Var_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_153);
              Var_16 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout(", Var_16);
            }
            break;
        }
        break;
    }
    return Str_4;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
  MR_Word RttiProcLabel_3)
{
  {
    MR_String HeadVar__2_2;
    MR_Word Var_4;

    Var_4 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_3);
    HeadVar__2_2 = ll_backend__opt_debug__dump_proclabel_1_f_0(Var_4);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_proclabel_1_f_0(
  MR_Word ProcLabel_3)
{
  {
    MR_bool succeeded;
    MR_String Str_4;

    if (((MR_tag((MR_Word) ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
    {
      MR_Word Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 0)));
      MR_Word PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 2)));
      MR_String PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 3)));
      MR_Integer Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 4)));
      MR_Integer Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 5)));
      MR_String ExtraModule_11;
      MR_String Var_37;
      MR_String Var_38;
      MR_String Var_39;
      MR_String Var_41;
      MR_String Var_42;
      MR_String Var_44;
      MR_String Var_45;
      MR_String Var_46;
      MR_String Var_48;
      MR_Word _PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ProcLabel_3, (MR_Integer) 1)));

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_5, PredModule_7);
      if (succeeded)
        ExtraModule_11 = (MR_String) "";
      else
      {
        MR_String PredModuleName_12;

        PredModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredModule_7);
        ExtraModule_11 = mercury__string__f_43_43_2_f_0(PredModuleName_12, (MR_String) "_");
      }
      Var_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_5);
      Var_45 = mercury__string__int_to_string_1_f_0(Arity_9);
      Var_48 = mercury__string__int_to_string_1_f_0(Mode_10);
      Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_48);
      Var_44 = mercury__string__f_43_43_2_f_0(Var_45, Var_46);
      Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_44);
      Var_41 = mercury__string__f_43_43_2_f_0(PredName_8, Var_42);
      Var_39 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_41);
      Var_37 = mercury__string__f_43_43_2_f_0(Var_38, Var_39);
      Str_4 = mercury__string__f_43_43_2_f_0(ExtraModule_11, Var_37);
    }
    else
    {
      MR_Word SpecialPredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 1)));
      MR_Word TypeModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 2)));
      MR_String TypeName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 3)));
      MR_Integer TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 4)));
      MR_Word TypeCtor_17;
      MR_Word Var_18;
      MR_String Var_19;
      MR_String Var_20;
      MR_String Var_22;
      MR_String Var_23;
      MR_String Var_24;
      MR_String Var_26;
      MR_String Var_27;
      MR_String Var_28;
      MR_String Var_29;
      MR_String Var_31;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_35;
      MR_Word Module_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 0)));
      MR_Integer Mode_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ProcLabel_3, (MR_Integer) 5)));

      {
        Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_18, 0) = ((MR_Box) (TypeModule_14));
        MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (TypeName_15));
      }
      {
        TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), TypeCtor_17, 0) = ((MR_Box) (Var_18));
        MR_hl_field(MR_mktag(0), TypeCtor_17, 1) = ((MR_Box) (TypeArity_16));
      }
      Var_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_49);
      Var_23 = hlds__special_pred__special_pred_name_2_f_0(SpecialPredId_13, TypeCtor_17);
      Var_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_14);
      Var_27 = parse_tree__prog_foreign__qualify_name_2_f_0(Var_28, TypeName_15);
      Var_32 = mercury__string__int_to_string_1_f_0(TypeArity_16);
      Var_35 = mercury__string__int_to_string_1_f_0(Mode_50);
      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_35);
      Var_31 = mercury__string__f_43_43_2_f_0(Var_32, Var_33);
      Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_31);
      Var_26 = mercury__string__f_43_43_2_f_0(Var_27, Var_29);
      Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_26);
      Var_22 = mercury__string__f_43_43_2_f_0(Var_23, Var_24);
      Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_22);
      Str_4 = mercury__string__f_43_43_2_f_0(Var_19, Var_20);
    }
    return Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(
  MR_Word TCRttiName_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) TCRttiName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(TCRttiName_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_4 = (MR_String) "type_class_id";
            break;
          case (MR_Integer) 1:
            Str_4 = (MR_String) "type_class_id_var_names";
            break;
          case (MR_Integer) 2:
            Str_4 = (MR_String) "type_class_id_method_ids";
            break;
          case (MR_Integer) 3:
            Str_4 = (MR_String) "type_class_decl";
            break;
          case (MR_Integer) 4:
            Str_4 = (MR_String) "type_class_decl_supers";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String InstanceStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), TCRttiName_3, (MR_Integer) 1)));
          MR_String Var_40;
          MR_Word _ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), TCRttiName_3, (MR_Integer) 0)));

          Var_40 = mercury__string__f_43_43_2_f_0(InstanceStr_6, (MR_String) ")");
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", Var_40);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer Ordinal_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), TCRttiName_3, (MR_Integer) 0)));
          MR_String Var_36;
          MR_String Var_37;
          MR_Integer Var_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), TCRttiName_3, (MR_Integer) 1)));

          Var_37 = mercury__string__int_to_string_1_f_0(Ordinal_7);
          Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) ")");
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_decl_super(", Var_36);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word TCTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 1)));
              MR_String Var_32;
              MR_String Var_33;

              Var_33 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_9);
              Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance(", Var_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_28;
              MR_String Var_29;
              MR_Word TCTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 1)));

              Var_29 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_42);
              Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_tc_types_vector(", Var_28);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_16;
              MR_String Var_17;
              MR_String Var_18;
              MR_String Var_20;
              MR_String Var_21;
              MR_Integer Ordinal_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 2)));
              MR_Word TCTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 1)));
              MR_Integer Var_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 3)));

              Var_17 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_45);
              Var_21 = mercury__string__int_to_string_1_f_0(Ordinal_44);
              Var_20 = mercury__string__f_43_43_2_f_0(Var_21, (MR_String) ")");
              Var_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_20);
              Var_16 = mercury__string__f_43_43_2_f_0(Var_17, Var_18);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraint(", Var_16);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_24;
              MR_String Var_25;
              MR_Word TCTypes_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 1)));

              Var_25 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_43);
              Var_24 = mercury__string__f_43_43_2_f_0(Var_25, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraints(", Var_24);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_12;
              MR_String Var_13;
              MR_Word TCTypes_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), TCRttiName_3, (MR_Integer) 1)));

              Var_13 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_46);
              Var_12 = mercury__string__f_43_43_2_f_0(Var_13, (MR_String) ")");
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_methods(", Var_12);
            }
            break;
        }
        break;
    }
    return Str_4;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_Box wrapper_arg_2;
    MR_Box closure = closure_arg;
    MR_String conv0_HeadVar__2_2;

    conv0_HeadVar__2_2 = backend_libs__rtti__encode_tc_instance_type_1_f_0(((MR_Word) wrapper_arg_1));
    wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
    return wrapper_arg_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(
  MR_Word TCTypes_3)
{
  {
    MR_String Str_4;
    MR_Word EncodedTCTypes_5;
    MR_String TypesStr_6;
    MR_String Var_9;

    EncodedTCTypes_5 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[0], TCTypes_3);
    mercury__string__append_list_2_p_0(EncodedTCTypes_5, &TypesStr_6);
    Var_9 = mercury__string__f_43_43_2_f_0(TypesStr_6, (MR_String) ")");
    Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_instance(", Var_9);
    return Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_name_1_f_0(
  MR_Word RttiName_3)
{
  {
    MR_String Str_4;

    switch (MR_tag((MR_Word) RttiName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(RttiName_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            Str_4 = (MR_String) "exist_loc";
            break;
          case (MR_Integer) 1:
            Str_4 = (MR_String) "res_addrs";
            break;
          case (MR_Integer) 2:
            Str_4 = (MR_String) "res_addr_functors";
            break;
          case (MR_Integer) 3:
            Str_4 = (MR_String) "notag_functor_desc_";
            break;
          case (MR_Integer) 4:
            Str_4 = (MR_String) "enum_name_ordered_table";
            break;
          case (MR_Integer) 5:
            Str_4 = (MR_String) "enum_value_ordered_table";
            break;
          case (MR_Integer) 6:
            Str_4 = (MR_String) "foreign_enum_name_ordered_table";
            break;
          case (MR_Integer) 7:
            Str_4 = (MR_String) "foreign_enum_ordinal_ordered_table";
            break;
          case (MR_Integer) 8:
            Str_4 = (MR_String) "du_name_ordered_table";
            break;
          case (MR_Integer) 9:
            Str_4 = (MR_String) "du_ptag_ordered_table";
            break;
          case (MR_Integer) 10:
            Str_4 = (MR_String) "res_value_ordered_table";
            break;
          case (MR_Integer) 11:
            Str_4 = (MR_String) "res_name_ordered_table";
            break;
          case (MR_Integer) 12:
            Str_4 = (MR_String) "maybe_res_addr_functor_desc";
            break;
          case (MR_Integer) 13:
            Str_4 = (MR_String) "functor_number_map";
            break;
          case (MR_Integer) 14:
            Str_4 = (MR_String) "type_functors";
            break;
          case (MR_Integer) 15:
            Str_4 = (MR_String) "type_layout";
            break;
          case (MR_Integer) 16:
            Str_4 = (MR_String) "type_ctor_info";
            break;
          case (MR_Integer) 17:
            Str_4 = (MR_String) "type_hashcons_pointer";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer Ordinal_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RttiName_3, (MR_Integer) 0)));
          MR_String Var_44;

          Var_44 = mercury__string__int_to_string_1_f_0(Ordinal_5);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_locns_", Var_44);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer TCCNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RttiName_3, (MR_Integer) 1)));
          MR_Integer Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RttiName_3, (MR_Integer) 2)));
          MR_String Var_34;
          MR_String Var_35;
          MR_String Var_36;
          MR_String Var_38;
          MR_String Var_39;
          MR_String Var_40;
          MR_String Var_42;
          MR_Integer Ordinal_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), RttiName_3, (MR_Integer) 0)));

          Var_35 = mercury__string__int_to_string_1_f_0(Ordinal_45);
          Var_39 = mercury__string__int_to_string_1_f_0(TCCNum_6);
          Var_42 = mercury__string__int_to_string_1_f_0(Arity_7);
          Var_40 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_42);
          Var_38 = mercury__string__f_43_43_2_f_0(Var_39, Var_40);
          Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_38);
          Var_34 = mercury__string__f_43_43_2_f_0(Var_35, Var_36);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constr_", Var_34);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String Var_32;
              MR_Integer Ordinal_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_32 = mercury__string__int_to_string_1_f_0(Ordinal_46);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constrs_", Var_32);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String Var_30;
              MR_Integer Ordinal_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_30 = mercury__string__int_to_string_1_f_0(Ordinal_47);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_info_", Var_30);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String Var_28;
              MR_Integer Ordinal_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_28 = mercury__string__int_to_string_1_f_0(Ordinal_48);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_names_", Var_28);
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String Var_26;
              MR_Integer Ordinal_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_26 = mercury__string__int_to_string_1_f_0(Ordinal_49);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_types_", Var_26);
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String Var_24;
              MR_Integer Ordinal_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_24 = mercury__string__int_to_string_1_f_0(Ordinal_50);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_locns_", Var_24);
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String Var_22;
              MR_Integer Ordinal_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_22 = mercury__string__int_to_string_1_f_0(Ordinal_51);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum_functor_desc_", Var_22);
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String Var_20;
              MR_Integer Ordinal_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_20 = mercury__string__int_to_string_1_f_0(Ordinal_52);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_enum_functor_desc_", Var_20);
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String Var_18;
              MR_Integer Ordinal_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_18 = mercury__string__int_to_string_1_f_0(Ordinal_53);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_functor_desc_", Var_18);
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String Var_16;
              MR_Integer Ordinal_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_16 = mercury__string__int_to_string_1_f_0(Ordinal_54);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "res_functor_desc_", Var_16);
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));
              MR_String Var_14;

              Var_14 = mercury__string__int_to_string_1_f_0(Ptag_8);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_stag_ordered_table_", Var_14);
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String Var_12;
              MR_Integer Ptag_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), RttiName_3, (MR_Integer) 1)));

              Var_12 = mercury__string__int_to_string_1_f_0(Ptag_55);
              Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_ptag_layout", Var_12);
            }
            break;
          case (MR_Integer) 11:
            Str_4 = (MR_String) "type_info";
            break;
          case (MR_Integer) 12:
            Str_4 = (MR_String) "pseudo_type_info";
            break;
        }
        break;
    }
    return Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String Str_6;
    MR_Word ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_String ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_String Var_8;
    MR_String Var_9;
    MR_String Var_10;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_14;
    MR_String Var_15;

    Var_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_3);
    Var_13 = parse_tree__prog_foreign__name_mangle_1_f_0(ClassName_4);
    Var_15 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_14 = mercury__string__f_43_43_2_f_0(Var_15, (MR_String) ")");
    Var_12 = mercury__string__f_43_43_2_f_0(Var_13, Var_14);
    Var_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_12);
    Var_8 = mercury__string__f_43_43_2_f_0(Var_9, Var_10);
    Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "tc_name(", Var_8);
    return Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  {
    MR_String HeadVar__2_2;
    MR_Word ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
    MR_String TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
    MR_String Var_7;
    MR_String Var_8;
    MR_String Var_9;
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_14;

    Var_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_3);
    Var_12 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_4);
    Var_14 = mercury__string__int_to_string_1_f_0(Arity_5);
    Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ")");
    Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_11);
    Var_7 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_type_ctor(", Var_7);
    return HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_reg_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2)
{
  {
    MR_String HeadVar__3_3;

    switch (HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String Var_9;

          Var_9 = mercury__string__int_to_string_1_f_0(N_2);
          HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "f", Var_9);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String Var_6;

          Var_6 = mercury__string__int_to_string_1_f_0(N_2);
          HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "r", Var_6);
        }
        break;
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
ll_backend__opt_debug__msg_5_p_0(
  MR_Word OptDebug_6,
  MR_Integer LabelNo_7,
  MR_String Msg_8)
{
  {
    MR_bool succeeded;

    switch (OptDebug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__io__write_string_3_p_0((MR_String) "\n");
          mercury__io__write_string_3_p_0(Msg_8);
          succeeded = (LabelNo_7 >= (MR_Integer) 0);
          if (succeeded)
          {
            mercury__io__write_string_3_p_0((MR_String) ", next label no: ");
            mercury__io__write_int_3_p_0(LabelNo_7);
          }
          else
          {
          }
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
        break;
    }
  }
}

void mercury__ll_backend__opt_debug__init(void)
{
}

void mercury__ll_backend__opt_debug__init_type_tables(void)
{
}

void mercury__ll_backend__opt_debug__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ll_backend__opt_debug__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ll_backend.opt_debug.
