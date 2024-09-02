/*
** Automatically generated from `opt_debug.m'
** by the Mercury compiler,
** version rotd-2024-09-02
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


// :- module ll_backend.opt_debug.
// :- implementation.

/*
INIT mercury__ll_backend__opt_debug__init
ENDINIT
*/

#include "ll_backend.opt_debug.mih"


#include "analysis.mih"
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
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
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "mode_robdd.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.c_util.mih"
#include "backend_libs.name_mangle.mih"
#include "backend_libs.proc_label.mih"
#include "backend_libs.rtti.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "hlds.code_model.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.status.mih"
#include "libs.globals.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.trace_params.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.livemap.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.llds_out.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.prog_util.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"




static void MR_CALL 
ll_backend__opt_debug__IntroducedFrom__pred__write_instrs__208__1_4_p_0(
  MR_String HeadVar__1_53,
  MR_Word HeadVar__2_54);

static MR_String MR_CALL 
ll_backend__opt_debug__add_instr_comment_prefix_1_f_0(
  MR_String CommentLine_3);

static void MR_CALL 
ll_backend__opt_debug__write_instrs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static MR_Box MR_CALL 
ll_backend__opt_debug__write_instrs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

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
ll_backend__opt_debug__dump_refers_to_llds_stack_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
  MR_Word HeadVar__1_1);

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
ll_backend__opt_debug__dump_ptag_1_f_0(
  MR_Word Ptag_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_llds_type_1_f_0(
  MR_Word HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
  MR_Word RttiProcLabel_3);

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);


static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[5][3];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[2][4];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][5];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][2];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[1][1];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_7[1][7];


struct ll_backend__opt_debug__vector_common_type_6_0_s {
  const MR_String ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[21];



static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[5][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_3[1])),
    ((MR_Box) (ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_3[2])),
    ((MR_Box) (ll_backend__opt_debug__dump_instrs_3_f_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   3 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_3[2])),
    ((MR_Box) (ll_backend__opt_debug__write_instrs_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   4 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_7[0])),
    ((MR_Box) (ll_backend__opt_debug__write_instrs_6_p_0_2)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row   2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[1][1] = {
  /* row   0 */
  { (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1)))))))) },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_7[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[21] = {
  /* row   0 */   { (MR_String) "int" },
  /* row   1 */   { (MR_String) "uint" },
  /* row   2 */   { (MR_String) "int8" },
  /* row   3 */   { (MR_String) "uint8" },
  /* row   4 */   { (MR_String) "int16" },
  /* row   5 */   { (MR_String) "uint16" },
  /* row   6 */   { (MR_String) "int32" },
  /* row   7 */   { (MR_String) "uint32" },
  /* row   8 */   { (MR_String) "int64" },
  /* row   9 */   { (MR_String) "uint64" },
  /* row  10 */   { (MR_String) "int_least8" },
  /* row  11 */   { (MR_String) "uint_least8" },
  /* row  12 */   { (MR_String) "int_least16" },
  /* row  13 */   { (MR_String) "uint_least16" },
  /* row  14 */   { (MR_String) "int_least32" },
  /* row  15 */   { (MR_String) "uint_least32" },
  /* row  16 */   { (MR_String) "ite_num_protects" },
  /* row  17 */   { (MR_String) "ite_num_snapshots" },
  /* row  18 */   { (MR_String) "disj_num_protects" },
  /* row  19 */   { (MR_String) "disj_num_snapshots" },
  /* row  20 */   { (MR_String) "commit_num_entries" },
};


#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static void MR_CALL 
ll_backend__opt_debug__IntroducedFrom__pred__write_instrs__208__1_4_p_0(
  MR_String HeadVar__1_53,
  MR_Word HeadVar__2_54)
{
  void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, (MR_hl_field(0, (MR_Word) (&ll_backend__opt_debug_scalar_common_2[1]), (MR_Integer) 0)), (MR_Integer) 6))));
  MR_Box conv1_HeadVar__4_56;

  func_0(((MR_Box) ((MR_Word) (&ll_backend__opt_debug_scalar_common_2[1]))), ((MR_Box) (HeadVar__1_53)), ((MR_Box) (HeadVar__2_54)), ((MR_Box) ((MR_Integer) 0)), &conv1_HeadVar__4_56);
}

static MR_String MR_CALL 
ll_backend__opt_debug__add_instr_comment_prefix_1_f_0(
  MR_String CommentLine_3)
{
  MR_String HeadVar__2_2;
  MR_String Var_5;

  Var_5 = mercury__string__f_43_43_2_f_0(CommentLine_3, (MR_String) "\n");
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "    % ", Var_5);
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstrs_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_String HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word Instr_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Instrs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_String Var_11;
    MR_String Var_12;

    Var_11 = ll_backend__opt_debug__dump_fullinstr_3_f_0(HeadVar__1_1, HeadVar__2_2, Instr_9);
    Var_12 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(HeadVar__1_1, HeadVar__2_2, Instrs_10);
    HeadVar__4_4 = mercury__string__f_43_43_2_f_0(Var_11, Var_12);
  }
  return HeadVar__4_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstr_3_f_0(
  MR_Word MaybeProcLabel_5,
  MR_Word AutoComments_6,
  MR_Word HeadVar__3_3)
{
  MR_String Str_9;
  MR_Word Uinstr_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_String Comment_8 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));

  switch (AutoComments_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        MR_String Var_12;
        MR_String Var_13;
        MR_String Var_15;

        Var_12 = ll_backend__opt_debug__dump_instr_3_f_0(MaybeProcLabel_5, AutoComments_6, Uinstr_7);
        Var_15 = mercury__string__f_43_43_2_f_0(Comment_8, (MR_String) "\n");
        Var_13 = mercury__string__f_43_43_2_f_0((MR_String) " - ", Var_15);
        Str_9 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
      }
      break;
    case (MR_Integer) 0:
      {
        MR_String Var_10;

        Var_10 = ll_backend__opt_debug__dump_instr_3_f_0(MaybeProcLabel_5, AutoComments_6, Uinstr_7);
        Str_9 = mercury__string__f_43_43_2_f_0(Var_10, (MR_String) "\n");
      }
      break;
  }
  return Str_9;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_model_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_label_pairs_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word L1_6;
    MR_Word L2_7;
    MR_Word Labels_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_13;
    MR_String Var_15;
    MR_String Var_16;
    MR_String Var_17;

    L1_6 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    L2_7 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Label_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Labels_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addrs_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Addr_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Addrs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_rvals_3_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2,
  MR_Integer N_3)
{
  MR_bool succeeded;
  MR_String HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word MR_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word MRs_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (N_3 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_String MR_str_13;
      MR_String Var_15;
      MR_String Var_17;
      MR_Integer Var_18;

      if ((MR_8 == (MR_Word) ((MR_Unsigned) 0U)))
        MR_str_13 = (MR_String) "no";
      else
      {
        MR_Word R_12 = ((MR_Word) ((MR_hl_field(1, MR_8, (MR_Integer) 0))));

        MR_str_13 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_1, R_12);
      }
      Var_18 = (MR_Integer) ((MR_Unsigned) N_3 - (MR_Unsigned) 1);
      Var_17 = ll_backend__opt_debug__dump_maybe_rvals_3_f_0(MaybeProcLabel_1, MRs_9, Var_18);
      Var_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_17);
      HeadVar__4_4 = mercury__string__f_43_43_2_f_0(MR_str_13, Var_15);
    }
    else
      HeadVar__4_4 = (MR_String) "truncated";
  }
  return HeadVar__4_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_slot_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_5;
  MR_Word Array_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_Integer Slot_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_array_name_1_f_0(
  MR_Word ArrayName_3)
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
        MR_Word LabelVars_5 = ((MR_Unsigned) ((MR_hl_field(1, ArrayName_3, (MR_Integer) 0))) & (MR_Integer) 3);

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

MR_String MR_CALL 
ll_backend__opt_debug__dump_rvals_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Rval_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Rvals_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Lvals_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_4, Lvals_5, (MR_String) "");
  return HeadVar__3_3;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livemap_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Livemap_5)
{
  MR_String HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__map__to_assoc_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_label_0), (MR_Word) (&ll_backend__opt_debug_scalar_common_4[0]), Livemap_5);
  HeadVar__3_3 = ll_backend__opt_debug__dump_livemaplist_2_f_0(MaybeProcLabel_4, Var_6);
  return HeadVar__3_3;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livemaplist_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Label_6;
    MR_Word Lvalset_7;
    MR_Word Livemaplist_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_String Var_10;
    MR_String Var_11;
    MR_String Var_13;
    MR_String Var_14;
    MR_String Var_15;
    MR_String Var_17;
    MR_Word Var_18;

    Label_6 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 0))));
    Lvalset_7 = ((MR_Word) ((MR_hl_field(0, Var_9, (MR_Integer) 1))));
    Var_10 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, Label_6);
    Var_18 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvalset_7);
    Var_14 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_1, Var_18, (MR_String) "");
    Var_17 = ll_backend__opt_debug__dump_livemaplist_2_f_0(MaybeProcLabel_1, Livemaplist_8);
    Var_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_17);
    Var_13 = mercury__string__f_43_43_2_f_0(Var_14, Var_15);
    Var_11 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_13);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
  }
  return HeadVar__3_3;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_intlist_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Integer H_3 = ((MR_Integer) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word T_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
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

void MR_CALL 
ll_backend__opt_debug__maybe_write_instrs_7_p_0(
  MR_Word Stream_8,
  MR_Word OptDebug_9,
  MR_Word AutoComments_10,
  MR_Word MaybeProcLabel_11,
  MR_Word Instrs_12)
{
  switch (OptDebug_9) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      ll_backend__opt_debug__write_instrs_6_p_0(Stream_8, Instrs_12, MaybeProcLabel_11, AutoComments_10);
      break;
  }
}

static void MR_CALL 
ll_backend__opt_debug__write_instrs_6_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  ll_backend__opt_debug__IntroducedFrom__pred__write_instrs__208__1_4_p_0(((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static MR_Box MR_CALL 
ll_backend__opt_debug__write_instrs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__opt_debug__add_instr_comment_prefix_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

void MR_CALL 
ll_backend__opt_debug__write_instrs_6_p_0(
  MR_Word Stream_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U))))
    {
      MR_Word Instr_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Instrs_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Uinstr_19 = ((MR_Word) ((MR_hl_field(0, Instr_14, (MR_Integer) 0))));
      MR_String Comment_20 = ((MR_String) ((MR_hl_field(0, Instr_14, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_19, (MR_Integer) 0)))) == (MR_Integer) 5)));
      if (succeeded)
      {
        MR_String InstrStr_22;

        InstrStr_22 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__3_3, HeadVar__4_4, Uinstr_19);
        mercury__io__write_string_4_p_0(Stream_1, InstrStr_22);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      }
      else
      {
        MR_String InstrComment_23;

        succeeded = ((MR_tag((MR_Word) Uinstr_19)) == (MR_Integer) 1);
        if (succeeded)
        {
          InstrComment_23 = ((MR_String) ((MR_hl_field(1, Uinstr_19, (MR_Integer) 0))));
          {
            MR_Word InstrCommentLines0_24;
            MR_Word InstrCommentLines_25;

            InstrCommentLines0_24 = mercury__string__split_at_char_2_f_0((MR_Char) 10, InstrComment_23);
            InstrCommentLines_25 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__opt_debug_scalar_common_1[3]), InstrCommentLines0_24);
            parse_tree__parse_tree_output__write_out_list_6_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__opt_debug_scalar_common_1[4]), (MR_String) "", InstrCommentLines_25, Stream_1);
          }
        }
        else
        {
          MR_String InstrStr_49;

          InstrStr_49 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__3_3, HeadVar__4_4, Uinstr_19);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "    ");
          mercury__io__write_string_4_p_0(Stream_1, InstrStr_49);
          mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
        }
      }
      succeeded = (HeadVar__4_4 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (strcmp(Comment_20, (MR_String) "") == 0);
        succeeded = !(succeeded);
      }
      if (succeeded)
      {
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "         % ");
        mercury__io__write_string_4_p_0(Stream_1, Comment_20);
        mercury__io__write_string_4_p_0(Stream_1, (MR_String) "\n");
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Instrs_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
        MR_String Comment_9 = ((MR_String) ((MR_hl_field(1, Instr_7, (MR_Integer) 0))));
        MR_String Var_89;

        Var_89 = mercury__string__f_43_43_2_f_0(Comment_9, (MR_String) ")");
        Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "comment(", Var_89);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Livevals_10 = ((MR_Word) ((MR_hl_field(2, Instr_7, (MR_Integer) 0))));
        MR_String Var_92;
        MR_String Var_93;

        Var_93 = ll_backend__opt_debug__dump_livevals_2_f_0(MaybeProcLabel_5, Livevals_10);
        Var_92 = mercury__string__f_43_43_2_f_0(Var_93, (MR_String) ")");
        Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "livevals(", Var_92);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer RTemps_11 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Integer FTemps_12 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_Word Instrs_13 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_String Var_96;
            MR_String Var_97;
            MR_String Var_98;
            MR_String Var_100;
            MR_String Var_101;
            MR_String Var_102;
            MR_String Var_104;
            MR_String Var_105;

            Var_97 = mercury__string__int_to_string_1_f_0(RTemps_11);
            Var_101 = mercury__string__int_to_string_1_f_0(FTemps_12);
            Var_105 = ll_backend__opt_debug__dump_instrs_3_f_0(MaybeProcLabel_5, AutoComments_6, Instrs_13);
            Var_104 = mercury__string__f_43_43_2_f_0(Var_105, (MR_String) "\t)");
            Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", Var_104);
            Var_100 = mercury__string__f_43_43_2_f_0(Var_101, Var_102);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_100);
            Var_96 = mercury__string__f_43_43_2_f_0(Var_97, Var_98);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "block(", Var_96);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Lval_14 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word Rval_15 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String Var_107;
            MR_String Var_108;
            MR_String Var_110;

            Var_107 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_14);
            Var_110 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_15);
            Var_108 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_110);
            Str_8 = mercury__string__f_43_43_2_f_0(Var_107, Var_108);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_112;
            MR_String Var_113;
            MR_String Var_114;
            MR_String Var_116;
            MR_Word Lval_409 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word Rval_410 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            Var_113 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_409);
            Var_116 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_410);
            Var_114 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_116);
            Var_112 = mercury__string__f_43_43_2_f_0(Var_113, Var_114);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "keep ", Var_112);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Callee_16 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word ReturnLabel_17 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_Word CallModel_21 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 6))));
            MR_String CallModelStr_22;
            MR_String Var_125;
            MR_String Var_126;
            MR_String Var_127;
            MR_String Var_129;
            MR_String Var_130;
            MR_String Var_131;
            MR_String Var_133;

            switch (MR_tag((MR_Word) CallModel_21)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word Var_441 = ((MR_Unsigned) ((MR_hl_field(0, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_441) {
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
                  MR_Word Var_443 = ((MR_Unsigned) ((MR_hl_field(1, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_443) {
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
                  MR_Word Var_442 = ((MR_Unsigned) ((MR_hl_field(2, CallModel_21, (MR_Integer) 0))) & (MR_Integer) 3);

                  switch (Var_442) {
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
            Var_126 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, Callee_16);
            Var_130 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, ReturnLabel_17);
            Var_133 = mercury__string__f_43_43_2_f_0(CallModelStr_22, (MR_String) ")");
            Var_131 = mercury__string__f_43_43_2_f_0((MR_String) ", ..., ", Var_133);
            Var_129 = mercury__string__f_43_43_2_f_0(Var_130, Var_131);
            Var_127 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_129);
            Var_125 = mercury__string__f_43_43_2_f_0(Var_126, Var_127);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "call(", Var_125);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word FrameInfo_23 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word MaybeRedoip_24 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String R_str_26;

            if ((MaybeRedoip_24 == (MR_Word) ((MR_Unsigned) 0U)))
              R_str_26 = (MR_String) "no_redoip";
            else
            {
              MR_Word Redoip_25 = ((MR_Word) ((MR_hl_field(1, MaybeRedoip_24, (MR_Integer) 0))));

              R_str_26 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, Redoip_25);
            }
            if (((MR_tag((MR_Word) FrameInfo_23)) == (MR_Integer) 1))
            {
              MR_String Name_27 = ((MR_String) ((MR_hl_field(1, FrameInfo_23, (MR_Integer) 0))));
              MR_Integer Size_28 = ((MR_Integer) ((MR_hl_field(1, FrameInfo_23, (MR_Integer) 1))));
              MR_String Var_136;
              MR_String Var_137;
              MR_String Var_139;
              MR_String Var_140;
              MR_String Var_141;
              MR_String Var_143;

              Var_140 = mercury__string__int_to_string_1_f_0(Size_28);
              Var_143 = mercury__string__f_43_43_2_f_0(R_str_26, (MR_String) ")");
              Var_141 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_143);
              Var_139 = mercury__string__f_43_43_2_f_0(Var_140, Var_141);
              Var_137 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_139);
              Var_136 = mercury__string__f_43_43_2_f_0(Name_27, Var_137);
              Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkframe(", Var_136);
            }
            else
            {
              MR_Word Kind_29 = ((MR_Unsigned) ((MR_hl_field(0, FrameInfo_23, (MR_Integer) 0))) & (MR_Integer) 1);

              switch (Kind_29) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_String Var_149;

                    Var_149 = mercury__string__f_43_43_2_f_0(R_str_26, (MR_String) ")");
                    Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkdettempframe(", Var_149);
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Var_146;

                    Var_146 = mercury__string__f_43_43_2_f_0(R_str_26, (MR_String) ")");
                    Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mktempframe(", Var_146);
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word Label_30 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_String Var_151;

            Var_151 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_30);
            Str_8 = mercury__string__f_43_43_2_f_0(Var_151, (MR_String) ":");
          }
          break;
        case (MR_Integer) 6:
          {
            MR_Word CodeAddr_31 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_String Var_154;

            Var_154 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, CodeAddr_31);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", Var_154);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word MaybeMaxIndex_32 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_Word MaybeLabels_33 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_String MaxIndexStr_34;
            MR_String Var_160;
            MR_String Var_161;
            MR_String Var_162;
            MR_String Var_163;
            MR_String Var_165;
            MR_Word Rval_411 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            if ((MaybeMaxIndex_32 == (MR_Word) ((MR_Unsigned) 0U)))
              MaxIndexStr_34 = (MR_String) "";
            else
            {
              MR_Integer MaxIndex_35 = ((MR_Integer) ((MR_hl_field(1, MaybeMaxIndex_32, (MR_Integer) 0))));
              MR_String Var_448;
              MR_String Var_455;

              mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__opt_debug_scalar_common_5[0]), MaxIndex_35, &Var_448);
              Var_455 = mercury__string__f_43_43_2_f_0(Var_448, (MR_String) ")");
              MaxIndexStr_34 = mercury__string__f_43_43_2_f_0((MR_String) " (max index ", Var_455);
            }
            Var_161 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_411);
            Var_165 = ll_backend__opt_debug__dump_computed_goto_targets_3_f_0(MaybeProcLabel_5, (MR_Integer) 0, MaybeLabels_33);
            Var_163 = mercury__string__f_43_43_2_f_0((MR_String) ":\n", Var_165);
            Var_162 = mercury__string__f_43_43_2_f_0(MaxIndexStr_34, Var_163);
            Var_160 = mercury__string__f_43_43_2_f_0(Var_161, Var_162);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "computed_goto ", Var_160);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word AL_36 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_String Code_38 = ((MR_String) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_String Var_168;
            MR_String Var_169;
            MR_String Var_170;
            MR_String Var_172;

            Var_169 = ll_backend__opt_debug__dump_affects_liveness_1_f_0(AL_36);
            Var_172 = mercury__string__f_43_43_2_f_0(Code_38, (MR_String) ")");
            Var_170 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_172);
            Var_168 = mercury__string__f_43_43_2_f_0(Var_169, Var_170);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "arbitrary_c_code(", Var_168);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String Var_175;
            MR_String Var_176;
            MR_String Var_177;
            MR_String Var_179;
            MR_Word Rval_412 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word CodeAddr_413 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            Var_176 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_412);
            Var_179 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_5, CodeAddr_413);
            Var_177 = mercury__string__f_43_43_2_f_0((MR_String) ") goto ", Var_179);
            Var_175 = mercury__string__f_43_43_2_f_0(Var_176, Var_177);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "if (", Var_175);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_181;
            MR_String Var_182;
            MR_Word Lval_414 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_182 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_414);
            Var_181 = mercury__string__f_43_43_2_f_0(Var_182, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "save_maxfr(", Var_181);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Var_185;
            MR_String Var_186;
            MR_Word Lval_415 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_186 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_415);
            Var_185 = mercury__string__f_43_43_2_f_0(Var_186, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_maxfr(", Var_185);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_Word MaybeTag_39 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_Word MaybeOffset_40 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_Word MayUseAtomic_42 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 6))) & (MR_Integer) 1);
            MR_Word MaybeRegionRval_43 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 7))));
            MR_Word MaybeReuse_44 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 8))));
            MR_String T_str_45;
            MR_String O_str_47;
            MR_String Region_str_49;
            MR_String Reuse_str_51;
            MR_String Flag_str_52;
            MR_String Var_191;
            MR_String Var_192;
            MR_String Var_193;
            MR_String Var_195;
            MR_String Var_196;
            MR_String Var_198;
            MR_String Var_199;
            MR_String Var_201;
            MR_String Var_202;
            MR_String Var_203;
            MR_String Var_205;
            MR_String Var_206;
            MR_String Var_207;
            MR_String Var_209;
            MR_String Var_210;
            MR_String Var_212;
            MR_String Var_213;
            MR_String Var_215;
            MR_Word Lval_416 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word Size_417 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 4))));

            if ((MaybeTag_39 == (MR_Word) ((MR_Unsigned) 0U)))
              T_str_45 = (MR_String) "no";
            else
            {
              MR_Word Ptag_46 = ((MR_Word) ((MR_hl_field(1, MaybeTag_39, (MR_Integer) 0))));

              T_str_45 = ll_backend__opt_debug__dump_ptag_1_f_0(Ptag_46);
            }
            if ((MaybeOffset_40 == (MR_Word) ((MR_Unsigned) 0U)))
              O_str_47 = (MR_String) "no";
            else
            {
              MR_Integer Offset_48 = ((MR_Integer) ((MR_hl_field(1, MaybeOffset_40, (MR_Integer) 0))));

              mercury__string__int_to_string_2_p_0(Offset_48, &O_str_47);
            }
            if ((MaybeRegionRval_43 == (MR_Word) ((MR_Unsigned) 0U)))
              Region_str_49 = (MR_String) "no";
            else
            {
              MR_Word RegionRval_50 = ((MR_Word) ((MR_hl_field(1, MaybeRegionRval_43, (MR_Integer) 0))));

              Region_str_49 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) ((MR_Unsigned) 0U), RegionRval_50);
            }
            if ((MaybeReuse_44 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Reuse_str_51 = (MR_String) "no";
              Flag_str_52 = (MR_String) "no";
            }
            else
            {
              MR_Word ReuseRval_53 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_44, (MR_Integer) 0))));
              MR_Word MaybeFlagLval_54 = ((MR_Word) ((MR_hl_field(1, MaybeReuse_44, (MR_Integer) 1))));

              Reuse_str_51 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) ((MR_Unsigned) 0U), ReuseRval_53);
              if ((MaybeFlagLval_54 == (MR_Word) ((MR_Unsigned) 0U)))
                Flag_str_52 = (MR_String) "no";
              else
              {
                MR_Word FlagLval_55 = ((MR_Word) ((MR_hl_field(1, MaybeFlagLval_54, (MR_Integer) 0))));

                Flag_str_52 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, FlagLval_55);
              }
            }
            Var_192 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_416);
            Var_202 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Size_417);
            Var_206 = ll_backend__opt_debug__dump_may_use_atomic_1_f_0(MayUseAtomic_42);
            Var_215 = mercury__string__f_43_43_2_f_0(Flag_str_52, (MR_String) ")");
            Var_213 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_215);
            Var_212 = mercury__string__f_43_43_2_f_0(Reuse_str_51, Var_213);
            Var_210 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_212);
            Var_209 = mercury__string__f_43_43_2_f_0(Region_str_49, Var_210);
            Var_207 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_209);
            Var_205 = mercury__string__f_43_43_2_f_0(Var_206, Var_207);
            Var_203 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_205);
            Var_201 = mercury__string__f_43_43_2_f_0(Var_202, Var_203);
            Var_199 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_201);
            Var_198 = mercury__string__f_43_43_2_f_0(O_str_47, Var_199);
            Var_196 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_198);
            Var_195 = mercury__string__f_43_43_2_f_0(T_str_45, Var_196);
            Var_193 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_195);
            Var_191 = mercury__string__f_43_43_2_f_0(Var_192, Var_193);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_hp(", Var_191);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String Var_218;
            MR_String Var_219;
            MR_Word Lval_418 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_219 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_418);
            Var_218 = mercury__string__f_43_43_2_f_0(Var_219, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_hp(", Var_218);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String Var_222;
            MR_String Var_223;
            MR_Word Rval_419 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_223 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_419);
            Var_222 = mercury__string__f_43_43_2_f_0(Var_223, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_hp(", Var_222);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String Var_226;
            MR_String Var_227;
            MR_Word Rval_420 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_227 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_420);
            Var_226 = mercury__string__f_43_43_2_f_0(Var_227, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "free_heap(", Var_226);
          }
          break;
        case (MR_Integer) 16:
          {
            MR_Word StackId_56 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))) & (MR_Integer) 3);
            MR_Word EmbeddedStackFrame_57 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String Var_230;
            MR_String Var_231;
            MR_String Var_232;
            MR_String Var_234;
            MR_String Var_235;

            Var_231 = ll_backend__llds__region_stack_id_to_string_1_f_0(StackId_56);
            Var_235 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_57);
            Var_234 = mercury__string__f_43_43_2_f_0(Var_235, (MR_String) ")");
            Var_232 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_234);
            Var_230 = mercury__string__f_43_43_2_f_0(Var_231, Var_232);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "push_region_frame(", Var_230);
          }
          break;
        case (MR_Integer) 17:
          {
            MR_Word FillOp_58 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word IdRval_59 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_Word NumLval_60 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 4))));
            MR_Word AddrLval_61 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 5))));
            MR_String FillOpStr_62;
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
            MR_Word EmbeddedStackFrame_421 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) FillOp_58)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(FillOp_58)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    FillOpStr_62 = (MR_String) "ite_protect";
                    break;
                  case (MR_Integer) 1:
                    FillOpStr_62 = (MR_String) "semi_disj_protect";
                    break;
                  case (MR_Integer) 2:
                    FillOpStr_62 = (MR_String) "disj_snapshot";
                    break;
                  case (MR_Integer) 3:
                    FillOpStr_62 = (MR_String) "commit";
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_444 = ((MR_Unsigned) ((MR_hl_field(1, FillOp_58, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_444) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      FillOpStr_62 = (MR_String) "ite_snapshot(not_removed_at_start_of_else)";
                      break;
                    case (MR_Integer) 0:
                      FillOpStr_62 = (MR_String) "ite_snapshot(removed_at_start_of_else)";
                      break;
                  }
                }
                break;
            }
            Var_244 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_421);
            Var_248 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, IdRval_59);
            Var_252 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, NumLval_60);
            Var_256 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, AddrLval_61);
            Var_255 = mercury__string__f_43_43_2_f_0(Var_256, (MR_String) ")");
            Var_253 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_255);
            Var_251 = mercury__string__f_43_43_2_f_0(Var_252, Var_253);
            Var_249 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_251);
            Var_247 = mercury__string__f_43_43_2_f_0(Var_248, Var_249);
            Var_245 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_247);
            Var_243 = mercury__string__f_43_43_2_f_0(Var_244, Var_245);
            Var_241 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_243);
            Var_240 = mercury__string__f_43_43_2_f_0(FillOpStr_62, Var_241);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_fill_frame(", Var_240);
          }
          break;
        case (MR_Integer) 18:
          {
            MR_Word SetOp_63 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_Word ValueRval_64 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_String SetOpStr_65 = ((&ll_backend__opt_debug_vector_common_6[16 + SetOp_63]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
            MR_String Var_259;
            MR_String Var_260;
            MR_String Var_262;
            MR_String Var_263;
            MR_String Var_264;
            MR_String Var_266;
            MR_String Var_267;
            MR_Word EmbeddedStackFrame_422 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            Var_263 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_422);
            Var_267 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, ValueRval_64);
            Var_266 = mercury__string__f_43_43_2_f_0(Var_267, (MR_String) ")");
            Var_264 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_266);
            Var_262 = mercury__string__f_43_43_2_f_0(Var_263, Var_264);
            Var_260 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_262);
            Var_259 = mercury__string__f_43_43_2_f_0(SetOpStr_65, Var_260);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_set_fixed_slot(", Var_259);
          }
          break;
        case (MR_Integer) 19:
          {
            MR_Word UseOp_66 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_String UseOpStr_67;
            MR_String Var_274;
            MR_String Var_275;
            MR_String Var_277;
            MR_String Var_278;
            MR_Word EmbeddedStackFrame_423 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            switch (MR_tag((MR_Word) UseOp_66)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(UseOp_66)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    UseOpStr_67 = (MR_String) "region_ite_nondet_cond_fail";
                    break;
                  case (MR_Integer) 1:
                    UseOpStr_67 = (MR_String) "region_disj_later";
                    break;
                  case (MR_Integer) 2:
                    UseOpStr_67 = (MR_String) "region_disj_last";
                    break;
                  case (MR_Integer) 3:
                    UseOpStr_67 = (MR_String) "region_disj_nonlast_semi_commit";
                    break;
                  case (MR_Integer) 4:
                    UseOpStr_67 = (MR_String) "region_commit_success";
                    break;
                  case (MR_Integer) 5:
                    UseOpStr_67 = (MR_String) "region_commit_failure";
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Var_446 = ((MR_Unsigned) ((MR_hl_field(1, UseOp_66, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_446) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      UseOpStr_67 = (MR_String) "region_ite_then(nondet)";
                      break;
                    case (MR_Integer) 0:
                      UseOpStr_67 = (MR_String) "region_ite_then(semidet)";
                      break;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Var_445 = ((MR_Unsigned) ((MR_hl_field(2, UseOp_66, (MR_Integer) 0))) & (MR_Integer) 1);

                  switch (Var_445) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      UseOpStr_67 = (MR_String) "region_ite_else(nondet)";
                      break;
                    case (MR_Integer) 0:
                      UseOpStr_67 = (MR_String) "region_ite_else(semidet)";
                      break;
                  }
                }
                break;
            }
            Var_278 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(EmbeddedStackFrame_423);
            Var_277 = mercury__string__f_43_43_2_f_0(Var_278, (MR_String) ")");
            Var_275 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_277);
            Var_274 = mercury__string__f_43_43_2_f_0(UseOpStr_67, Var_275);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "use_and_maybe_pop_region_frame(", Var_274);
          }
          break;
        case (MR_Integer) 20:
          {
            MR_String Var_281;
            MR_String Var_282;
            MR_Word Lval_424 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_282 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_424);
            Var_281 = mercury__string__f_43_43_2_f_0(Var_282, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "store_ticket(", Var_281);
          }
          break;
        case (MR_Integer) 21:
          {
            MR_String Var_285;
            MR_String Var_286;
            MR_Word Rval_425 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_286 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_425);
            Var_285 = mercury__string__f_43_43_2_f_0(Var_286, (MR_String) ", _)");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "reset_ticket(", Var_285);
          }
          break;
        case (MR_Integer) 22:
          {
            MR_String Var_289;
            MR_String Var_290;
            MR_Word Lval_426 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_290 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_426);
            Var_289 = mercury__string__f_43_43_2_f_0(Var_290, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_ticket_stack(", Var_289);
          }
          break;
        case (MR_Integer) 23:
          {
            MR_String Var_293;
            MR_String Var_294;
            MR_Word Rval_427 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_294 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, Rval_427);
            Var_293 = mercury__string__f_43_43_2_f_0(Var_294, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "prune_tickets_to(", Var_293);
          }
          break;
        case (MR_Integer) 24:
          {
            MR_String Var_297;
            MR_String Var_298;
            MR_String Var_299;
            MR_String Var_301;
            MR_String Var_302;
            MR_Integer Size_428 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word Kind_429 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))) & (MR_Integer) 1);

            Var_298 = mercury__string__int_to_string_1_f_0(Size_428);
            Var_302 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(Kind_429);
            Var_301 = mercury__string__f_43_43_2_f_0(Var_302, (MR_String) ")");
            Var_299 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_301);
            Var_297 = mercury__string__f_43_43_2_f_0(Var_298, Var_299);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_sp(", Var_297);
          }
          break;
        case (MR_Integer) 25:
          {
            MR_String Var_305;
            MR_String Var_306;
            MR_Integer Size_430 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_306 = mercury__string__int_to_string_1_f_0(Size_430);
            Var_305 = mercury__string__f_43_43_2_f_0(Var_306, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp(", Var_305);
          }
          break;
        case (MR_Integer) 26:
          {
            MR_String Var_309;
            MR_String Var_310;
            MR_Integer Size_431 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_310 = mercury__string__int_to_string_1_f_0(Size_431);
            Var_309 = mercury__string__f_43_43_2_f_0(Var_310, (MR_String) ")");
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp_and_return(", Var_309);
          }
          break;
        case (MR_Integer) 27:
          {
            MR_Word Decls_70 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word Comps_71 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_Word MCM_72 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))) & (MR_Integer) 1);
            MR_Word MFNL_73 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 4))));
            MR_Word MFL_74 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 5))));
            MR_Word MFOL_75 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 6))));
            MR_Word MNF_76 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 7))));
            MR_Word MDL_77 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 8))));
            MR_Word SSR_78 = ((((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 9))) >> 1)) & (MR_Integer) 1);
            MR_Word MD_79 = ((MR_Unsigned) ((MR_hl_field(3, Instr_7, (MR_Integer) 9))) & (MR_Integer) 1);
            MR_String Var_313;
            MR_String Var_315;
            MR_String Var_316;
            MR_String Var_317;
            MR_String Var_319;
            MR_String Var_320;
            MR_String Var_321;
            MR_String Var_322;
            MR_String Var_323;
            MR_String Var_325;
            MR_String Var_326;
            MR_String Var_328;
            MR_String Var_329;
            MR_String Var_331;
            MR_String Var_332;
            MR_String Var_334;
            MR_String Var_335;
            MR_String Var_337;
            MR_String Var_338;
            MR_String Var_340;
            MR_String Var_341;
            MR_String Var_342;
            MR_String Var_343;

            Var_316 = ll_backend__opt_debug__dump_decls_1_f_0(Decls_70);
            Var_320 = ll_backend__opt_debug__dump_components_2_f_0(MaybeProcLabel_5, Comps_71);
            Var_322 = ll_backend__opt_debug__dump_may_call_mercury_1_f_0(MCM_72);
            Var_326 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix nolayout:", MaybeProcLabel_5, MFNL_73);
            Var_329 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix layout:", MaybeProcLabel_5, MFL_74);
            Var_332 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix onlylayout:", MaybeProcLabel_5, MFOL_75);
            Var_335 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "nofix:", MaybeProcLabel_5, MNF_76);
            Var_338 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "maybe def:", MaybeProcLabel_5, MDL_77);
            Var_341 = ll_backend__opt_debug__dump_refers_to_llds_stack_1_f_0(SSR_78);
            Var_343 = ll_backend__opt_debug__dump_may_duplicate_1_f_0(MD_79);
            Var_342 = mercury__string__f_43_43_2_f_0(Var_343, (MR_String) "\n)");
            Var_340 = mercury__string__f_43_43_2_f_0(Var_341, Var_342);
            Var_337 = mercury__string__f_43_43_2_f_0(Var_338, Var_340);
            Var_334 = mercury__string__f_43_43_2_f_0(Var_335, Var_337);
            Var_331 = mercury__string__f_43_43_2_f_0(Var_332, Var_334);
            Var_328 = mercury__string__f_43_43_2_f_0(Var_329, Var_331);
            Var_325 = mercury__string__f_43_43_2_f_0(Var_326, Var_328);
            Var_323 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_325);
            Var_321 = mercury__string__f_43_43_2_f_0(Var_322, Var_323);
            Var_319 = mercury__string__f_43_43_2_f_0(Var_320, Var_321);
            Var_317 = mercury__string__f_43_43_2_f_0((MR_String) "components:\n", Var_319);
            Var_315 = mercury__string__f_43_43_2_f_0(Var_316, Var_317);
            Var_313 = mercury__string__f_43_43_2_f_0((MR_String) "declarations:\n", Var_315);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_proc_code(\n", Var_313);
          }
          break;
        case (MR_Integer) 28:
          {
            MR_Integer N_80 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_Integer TSStringIndex_81 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_String Var_348;
            MR_String Var_349;
            MR_String Var_350;
            MR_String Var_352;
            MR_String Var_353;
            MR_String Var_354;
            MR_String Var_356;
            MR_String Var_357;
            MR_Word Lval_432 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_349 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_432);
            Var_353 = mercury__string__int_to_string_1_f_0(N_80);
            Var_357 = mercury__string__int_to_string_1_f_0(TSStringIndex_81);
            Var_356 = mercury__string__f_43_43_2_f_0(Var_357, (MR_String) ")");
            Var_354 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_356);
            Var_352 = mercury__string__f_43_43_2_f_0(Var_353, Var_354);
            Var_350 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_352);
            Var_348 = mercury__string__f_43_43_2_f_0(Var_349, Var_350);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "init_sync_term(", Var_348);
          }
          break;
        case (MR_Integer) 29:
          {
            MR_Word Child_82 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String Var_360;
            MR_String Var_361;
            MR_String Var_362;
            MR_String Var_363;
            MR_Word Lval_433 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_361 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_433);
            Var_363 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Child_82);
            Var_362 = mercury__string__f_43_43_2_f_0(Var_363, (MR_String) ", )");
            Var_360 = mercury__string__f_43_43_2_f_0(Var_361, Var_362);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "fork_new_child(", Var_360);
          }
          break;
        case (MR_Integer) 30:
          {
            MR_String Var_368;
            MR_String Var_369;
            MR_String Var_370;
            MR_String Var_372;
            MR_String Var_373;
            MR_Word Lval_434 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word Label_435 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            Var_369 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, Lval_434);
            Var_373 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_435);
            Var_372 = mercury__string__f_43_43_2_f_0(Var_373, (MR_String) ")");
            Var_370 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_372);
            Var_368 = mercury__string__f_43_43_2_f_0(Var_369, Var_370);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "join_and_continue(", Var_368);
          }
          break;
        case (MR_Integer) 31:
          {
            MR_Integer NumSlots_83 = ((MR_Integer) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word LCLval_84 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String Var_376;
            MR_String Var_377;
            MR_String Var_378;
            MR_String Var_380;
            MR_String Var_381;

            Var_377 = mercury__string__int_to_string_1_f_0(NumSlots_83);
            Var_381 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, LCLval_84);
            Var_380 = mercury__string__f_43_43_2_f_0(Var_381, (MR_String) ")");
            Var_378 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_380);
            Var_376 = mercury__string__f_43_43_2_f_0(Var_377, Var_378);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_create_loop_control(", Var_376);
          }
          break;
        case (MR_Integer) 32:
          {
            MR_Word LCRval_85 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word LCSLval_86 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String Var_384;
            MR_String Var_385;
            MR_String Var_386;
            MR_String Var_387;
            MR_String Var_388;
            MR_String Var_389;
            MR_Word Label_436 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));

            Var_385 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCRval_85);
            Var_387 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_5, LCSLval_86);
            Var_389 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_436);
            Var_388 = mercury__string__f_43_43_2_f_0(Var_389, (MR_String) ")");
            Var_386 = mercury__string__f_43_43_2_f_0(Var_387, Var_388);
            Var_384 = mercury__string__f_43_43_2_f_0(Var_385, Var_386);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_wait_free_slot(", Var_384);
          }
          break;
        case (MR_Integer) 33:
          {
            MR_Word LCSRval_87 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));
            MR_String Var_392;
            MR_String Var_393;
            MR_String Var_394;
            MR_String Var_396;
            MR_String Var_397;
            MR_String Var_398;
            MR_String Var_400;
            MR_String Var_401;
            MR_Word Label_437 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 3))));
            MR_Word LCRval_438 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));

            Var_393 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCRval_438);
            Var_397 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCSRval_87);
            Var_401 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_5, Label_437);
            Var_400 = mercury__string__f_43_43_2_f_0(Var_401, (MR_String) ")");
            Var_398 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_400);
            Var_396 = mercury__string__f_43_43_2_f_0(Var_397, Var_398);
            Var_394 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_396);
            Var_392 = mercury__string__f_43_43_2_f_0(Var_393, Var_394);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_spawn_off(", Var_392);
          }
          break;
        case (MR_Integer) 34:
          {
            MR_String Var_404;
            MR_String Var_405;
            MR_String Var_406;
            MR_String Var_407;
            MR_Word LCRval_439 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 1))));
            MR_Word LCSRval_440 = ((MR_Word) ((MR_hl_field(3, Instr_7, (MR_Integer) 2))));

            Var_405 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCRval_439);
            Var_407 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_5, LCSRval_440);
            Var_406 = mercury__string__f_43_43_2_f_0(Var_407, (MR_String) ")");
            Var_404 = mercury__string__f_43_43_2_f_0(Var_405, Var_406);
            Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_join_and_terminate(", Var_404);
          }
          break;
      }
      break;
  }
  return Str_8;
}

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = ll_backend__opt_debug__add_instr_comment_prefix_1_f_0(((MR_String) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_String HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word Instr_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word Instrs_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word Uinstr_12 = ((MR_Word) ((MR_hl_field(0, Instr_9, (MR_Integer) 0))));
    MR_String Comment_13 = ((MR_String) ((MR_hl_field(0, Instr_9, (MR_Integer) 1))));
    MR_String InstrStr0_15;
    MR_String InstrStr_19;
    MR_String InstrsStr_20;

    succeeded = ((((MR_tag((MR_Word) Uinstr_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
    if (succeeded)
    {
      MR_String Var_21;

      Var_21 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__1_1, HeadVar__2_2, Uinstr_12);
      InstrStr0_15 = mercury__string__f_43_43_2_f_0(Var_21, (MR_String) "\n");
    }
    else
    {
      MR_String InstrComment_16;

      succeeded = ((MR_tag((MR_Word) Uinstr_12)) == (MR_Integer) 1);
      if (succeeded)
      {
        InstrComment_16 = ((MR_String) ((MR_hl_field(1, Uinstr_12, (MR_Integer) 0))));
        {
          MR_Word InstrCommentLines0_17;
          MR_Word InstrCommentLines_18;

          InstrCommentLines0_17 = mercury__string__split_at_char_2_f_0((MR_Char) 10, InstrComment_16);
          InstrCommentLines_18 = mercury__list__map_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__opt_debug_scalar_common_1[2]), InstrCommentLines0_17);
          InstrStr0_15 = mercury__string__append_list_1_f_0(InstrCommentLines_18);
        }
      }
      else
      {
        MR_String Var_26;
        MR_String Var_27;

        Var_27 = ll_backend__opt_debug__dump_instr_3_f_0(HeadVar__1_1, HeadVar__2_2, Uinstr_12);
        Var_26 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) "\n");
        InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "    ", Var_26);
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
      MR_String Var_29;
      MR_String Var_31;

      Var_31 = mercury__string__f_43_43_2_f_0(Comment_13, (MR_String) "\n");
      Var_29 = mercury__string__f_43_43_2_f_0((MR_String) "        % ", Var_31);
      InstrStr_19 = mercury__string__f_43_43_2_f_0(InstrStr0_15, Var_29);
    }
    else
      InstrStr_19 = InstrStr0_15;
    InstrsStr_20 = ll_backend__opt_debug__dump_instrs_3_f_0(HeadVar__1_1, HeadVar__2_2, Instrs_10);
    HeadVar__4_4 = mercury__string__f_43_43_2_f_0(InstrStr_19, InstrsStr_20);
  }
  return HeadVar__4_4;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Comp_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Comps_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_String Var_9;

    switch (MR_tag((MR_Word) Comp_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_8 = (MR_String) "";
        break;
      case (MR_Integer) 1:
        {
          MR_Word Inputs_11 = ((MR_Word) ((MR_hl_field(1, Comp_6, (MR_Integer) 0))));

          Var_8 = ll_backend__opt_debug__dump_input_components_2_f_0(MaybeProcLabel_1, Inputs_11);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Outputs_13 = ((MR_Word) ((MR_hl_field(2, Comp_6, (MR_Integer) 0))));

          Var_8 = ll_backend__opt_debug__dump_output_components_2_f_0(MaybeProcLabel_1, Outputs_13);
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(3, Comp_6, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word AL_16 = ((MR_Unsigned) ((MR_hl_field(3, Comp_6, (MR_Integer) 2))) & (MR_Integer) 3);
              MR_String Code_17 = ((MR_String) ((MR_hl_field(3, Comp_6, (MR_Integer) 3))));

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
              MR_Word AL_31 = ((MR_Unsigned) ((MR_hl_field(3, Comp_6, (MR_Integer) 1))) & (MR_Integer) 3);
              MR_String Code_33 = ((MR_String) ((MR_hl_field(3, Comp_6, (MR_Integer) 3))));

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
              MR_Word Label_46 = ((MR_Word) ((MR_hl_field(3, Comp_6, (MR_Integer) 1))));
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Input_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Inputs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_String Var_9;
    MR_String Var_11;
    MR_Word Lval_12 = ((MR_Word) ((MR_hl_field(0, Input_6, (MR_Integer) 0))));
    MR_Word Dummy_14 = ((MR_Unsigned) ((MR_hl_field(0, Input_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_String Var_16 = ((MR_String) ((MR_hl_field(0, Input_6, (MR_Integer) 4))));
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_22;
    MR_String Var_23;

    Var_19 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_1, Lval_12);
    switch (Dummy_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_23 = (MR_String) " (dummy)";
        break;
      case (MR_Integer) 1:
        Var_23 = (MR_String) "";
        break;
    }
    Var_22 = mercury__string__f_43_43_2_f_0(Var_16, Var_23);
    Var_20 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_22);
    Var_8 = mercury__string__f_43_43_2_f_0(Var_19, Var_20);
    Var_11 = ll_backend__opt_debug__dump_output_components_2_f_0(MaybeProcLabel_1, Inputs_7);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_11);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  }
  return HeadVar__3_3;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2)
{
  MR_String HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_String) "";
  else
  {
    MR_Word Input_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Inputs_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
    MR_String Var_8;
    MR_String Var_9;
    MR_String Var_11;
    MR_String Var_12 = ((MR_String) ((MR_hl_field(0, Input_6, (MR_Integer) 0))));
    MR_Word Dummy_14 = ((MR_Unsigned) ((MR_hl_field(0, Input_6, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word Rval_16 = ((MR_Word) ((MR_hl_field(0, Input_6, (MR_Integer) 4))));
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;

    switch (Dummy_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        Var_20 = (MR_String) " (dummy)";
        break;
      case (MR_Integer) 1:
        Var_20 = (MR_String) "";
        break;
    }
    Var_23 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_1, Rval_16);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) " := ", Var_23);
    Var_19 = mercury__string__f_43_43_2_f_0(Var_20, Var_21);
    Var_8 = mercury__string__f_43_43_2_f_0(Var_12, Var_19);
    Var_11 = ll_backend__opt_debug__dump_input_components_2_f_0(MaybeProcLabel_1, Inputs_7);
    Var_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", Var_11);
    HeadVar__3_3 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  }
  return HeadVar__3_3;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_String) "";
  else
  {
    MR_Word Decl_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Decls_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));
    MR_String Var_5;
    MR_String Var_6;
    MR_String TypeStr_8 = ((MR_String) ((MR_hl_field(0, Decl_3, (MR_Integer) 1))));
    MR_String VarName_9 = ((MR_String) ((MR_hl_field(0, Decl_3, (MR_Integer) 2))));
    MR_String Var_11;
    MR_String Var_12;
    MR_String Var_14;

    Var_14 = mercury__string__f_43_43_2_f_0(VarName_9, (MR_String) "\n");
    Var_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_14);
    Var_11 = mercury__string__f_43_43_2_f_0(TypeStr_8, Var_12);
    Var_5 = mercury__string__f_43_43_2_f_0((MR_String) "decl ", Var_11);
    Var_6 = ll_backend__opt_debug__dump_decls_1_f_0(Decls_4);
    HeadVar__2_2 = mercury__string__f_43_43_2_f_0(Var_5, Var_6);
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_refers_to_llds_stack_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = (MR_String) "does_not_refer_to_llds_stack";
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "refers_to_llds_stack";
      break;
  }
  return HeadVar__2_2;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
  MR_String HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_String HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word Label_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
  MR_Word HeadVar__1_1)
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
  MR_Word EmbeddedStackFrame_3)
{
  MR_String Str_4;
  MR_Word StackId_5 = ((MR_Unsigned) ((MR_hl_field(0, EmbeddedStackFrame_3, (MR_Integer) 0))) & (MR_Integer) 1);
  MR_Integer FirstSlot_6 = ((MR_Integer) ((MR_hl_field(0, EmbeddedStackFrame_3, (MR_Integer) 1))));
  MR_Integer LastSlot_7 = ((MR_Integer) ((MR_hl_field(0, EmbeddedStackFrame_3, (MR_Integer) 2))));

  switch (StackId_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_String Var_9;
        MR_String Var_10;
        MR_String Var_11;
        MR_String Var_13;

        Var_10 = mercury__string__int_to_string_1_f_0(FirstSlot_6);
        Var_13 = mercury__string__int_to_string_1_f_0(LastSlot_7);
        Var_11 = mercury__string__f_43_43_2_f_0((MR_String) "..", Var_13);
        Var_9 = mercury__string__f_43_43_2_f_0(Var_10, Var_11);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "detstack slots ", Var_9);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_15;
        MR_String Var_16;
        MR_String Var_17;
        MR_String Var_19;

        Var_16 = mercury__string__int_to_string_1_f_0(FirstSlot_6);
        Var_19 = mercury__string__int_to_string_1_f_0(LastSlot_7);
        Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "..", Var_19);
        Var_15 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "nondetstack slots ", Var_15);
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(
  MR_Word HeadVar__1_1)
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_computed_goto_targets_3_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Integer HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_String HeadVar__4_4;

  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word MaybeLabel_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word MaybeLabels_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 1))));
    MR_String LabelStr_13;
    MR_String HeadStr_14;
    MR_String TailStr_15;
    MR_Integer Var_23;
    MR_String Var_26;
    MR_String Var_28;
    MR_String Var_29;
    MR_String Var_36;

    if ((MaybeLabel_9 == (MR_Word) ((MR_Unsigned) 0U)))
      LabelStr_13 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_1, (MR_Word) ((MR_Unsigned) 20U));
    else
    {
      MR_Word Label_12 = ((MR_Word) ((MR_hl_field(1, MaybeLabel_9, (MR_Integer) 0))));

      LabelStr_13 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_1, Label_12);
    }
    Var_26 = mercury__string__f_43_43_2_f_0(LabelStr_13, (MR_String) "\n");
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) " -> ", Var_26);
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__opt_debug_scalar_common_5[0]), HeadVar__2_2, &Var_29);
    Var_36 = mercury__string__f_43_43_2_f_0(Var_29, Var_28);
    HeadStr_14 = mercury__string__f_43_43_2_f_0((MR_String) "        ", Var_36);
    Var_23 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 + (MR_Unsigned) 1);
    TailStr_15 = ll_backend__opt_debug__dump_computed_goto_targets_3_f_0(MaybeProcLabel_1, Var_23, MaybeLabels_10);
    HeadVar__4_4 = mercury__string__f_43_43_2_f_0(HeadStr_14, TailStr_15);
  }
  return HeadVar__4_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livevals_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Lvalset_5)
{
  MR_String HeadVar__3_3;
  MR_Word Var_6;

  Var_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0), Lvalset_5);
  HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(MaybeProcLabel_4, Var_6, (MR_String) "");
  return HeadVar__3_3;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
  MR_Word MaybeProcLabel_1,
  MR_Word HeadVar__2_2,
  MR_String Prefix_3)
{
  MR_String HeadVar__4_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__4_4 = (MR_String) "";
  else
  {
    MR_Word Lval_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Lvallist_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 1))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_rval_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Rval_5)
{
  MR_bool succeeded;
  MR_String Str_6;

  switch (MR_tag((MR_Word) Rval_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Lval_7 = ((MR_Word) ((MR_hl_field(0, Rval_5, (MR_Integer) 0))));

        Str_6 = ll_backend__opt_debug__dump_lval_2_f_0(MaybeProcLabel_4, Lval_7);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, Rval_5, (MR_Integer) 0))));
        MR_String Var_23;
        MR_String Var_24;
        MR_Integer Var_25;

        Var_25 = mercury__term__var_to_int_1_f_0((MR_Word) (&parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0), Var_8);
        Var_24 = mercury__string__int_to_string_1_f_0(Var_25);
        Var_23 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ")");
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "var(", Var_23);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word T_9 = ((MR_Word) ((MR_hl_field(2, Rval_5, (MR_Integer) 0))));
        MR_Word N_10 = ((MR_Word) ((MR_hl_field(2, Rval_5, (MR_Integer) 1))));
        MR_String Var_28;
        MR_String Var_29;
        MR_String Var_30;
        MR_String Var_32;
        MR_String Var_33;
        uint8_t PtagUint8_87 = (uint8_t) (T_9);

        Var_29 = mercury__string__uint8_to_string_1_f_0(PtagUint8_87);
        Var_33 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_10);
        Var_32 = mercury__string__f_43_43_2_f_0(Var_33, (MR_String) ")");
        Var_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_32);
        Var_28 = mercury__string__f_43_43_2_f_0(Var_29, Var_30);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword(", Var_28);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Rval_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_36;
            MR_String Var_37;
            MR_Word T_81 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));
            uint8_t PtagUint8_88 = (uint8_t) (T_81);

            Var_37 = mercury__string__uint8_to_string_1_f_0(PtagUint8_88);
            Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword_hole(", Var_36);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word C_11 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));

            Str_6 = ll_backend__opt_debug__dump_const_2_f_0(MaybeProcLabel_4, C_11);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_40;
            MR_String Var_41;
            MR_String Var_42;
            MR_String Var_44;
            MR_String Var_45;
            MR_Word T_82 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));
            MR_Word N_83 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 2))));

            Var_41 = ll_backend__opt_debug__dump_llds_type_1_f_0(T_82);
            Var_45 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_83);
            Var_44 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) ")");
            Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_44);
            Var_40 = mercury__string__f_43_43_2_f_0(Var_41, Var_42);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "cast_to ", Var_40);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word O_12 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));
            MR_String Var_47;
            MR_String Var_48;
            MR_String Var_50;
            MR_String Var_51;
            MR_Word N_84 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 2))));

            Var_47 = ll_backend__opt_debug__dump_unop_1_f_0(O_12);
            Var_51 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_84);
            Var_50 = mercury__string__f_43_43_2_f_0(Var_51, (MR_String) ")");
            Var_48 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_50);
            Str_6 = mercury__string__f_43_43_2_f_0(Var_47, Var_48);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_Word N1_13 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 2))));
            MR_Word N2_14 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 3))));
            MR_Word O_85 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));

            succeeded = ((((MR_tag((MR_Word) N1_13)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, N1_13, (MR_Integer) 0)))) == (MR_Integer) 4)));
            if (succeeded)
            {
            }
            if (!(succeeded))
            {
              succeeded = ((((MR_tag((MR_Word) N2_14)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, N2_14, (MR_Integer) 0)))) == (MR_Integer) 4)));
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_String Var_54;
              MR_String Var_55;
              MR_String Var_56;
              MR_String Var_58;
              MR_String Var_60;
              MR_String Var_61;
              MR_String Var_62;
              MR_String Var_64;
              MR_String Var_66;
              MR_String Var_67;

              Var_55 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N1_13);
              Var_61 = ll_backend__opt_debug__dump_binop_1_f_0(O_85);
              Var_67 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N2_14);
              Var_66 = mercury__string__f_43_43_2_f_0(Var_67, (MR_String) ")");
              Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_66);
              Var_62 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_64);
              Var_60 = mercury__string__f_43_43_2_f_0(Var_61, Var_62);
              Var_58 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_60);
              Var_56 = mercury__string__f_43_43_2_f_0((MR_String) ")", Var_58);
              Var_54 = mercury__string__f_43_43_2_f_0(Var_55, Var_56);
              Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_54);
            }
            else
            {
              MR_String Var_69;
              MR_String Var_70;
              MR_String Var_72;
              MR_String Var_73;
              MR_String Var_74;
              MR_String Var_76;

              Var_69 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N1_13);
              Var_73 = ll_backend__opt_debug__dump_binop_1_f_0(O_85);
              Var_76 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N2_14);
              Var_74 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_76);
              Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_74);
              Var_70 = mercury__string__f_43_43_2_f_0((MR_String) " ", Var_72);
              Str_6 = mercury__string__f_43_43_2_f_0(Var_69, Var_70);
            }
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word M_21 = ((MR_Word) ((MR_hl_field(3, Rval_5, (MR_Integer) 1))));
            MR_String Var_78;
            MR_String Var_79;

            Var_79 = ll_backend__opt_debug__dump_mem_ref_2_f_0(MaybeProcLabel_4, M_21);
            Var_78 = mercury__string__f_43_43_2_f_0(Var_79, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_addr(", Var_78);
          }
          break;
      }
      break;
  }
  return Str_6;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_mem_ref_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word MemRef_5)
{
  MR_String Str_6;

  switch (MR_tag((MR_Word) MemRef_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word N_7 = ((MR_Word) ((MR_hl_field(0, MemRef_5, (MR_Integer) 0))));
        MR_String Var_13;
        MR_String Var_14;

        Var_14 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_7);
        Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ")");
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar_ref(", Var_13);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Var_17;
        MR_String Var_18;
        MR_Word N_31 = ((MR_Word) ((MR_hl_field(1, MemRef_5, (MR_Integer) 0))));

        Var_18 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_31);
        Var_17 = mercury__string__f_43_43_2_f_0(Var_18, (MR_String) ")");
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "framevar_ref(", Var_17);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word R_8 = ((MR_Word) ((MR_hl_field(2, MemRef_5, (MR_Integer) 0))));
        MR_Word MaybeTag_9 = ((MR_Word) ((MR_hl_field(2, MemRef_5, (MR_Integer) 1))));
        MR_String TagString_11;
        MR_String Var_21;
        MR_String Var_22;
        MR_String Var_23;
        MR_String Var_25;
        MR_String Var_26;
        MR_String Var_28;
        MR_String Var_29;
        MR_Word N_32 = ((MR_Word) ((MR_hl_field(2, MemRef_5, (MR_Integer) 2))));

        if ((MaybeTag_9 == (MR_Word) ((MR_Unsigned) 0U)))
          TagString_11 = (MR_String) "unknown_tag";
        else
        {
          MR_Word Ptag_10 = ((MR_Word) ((MR_hl_field(1, MaybeTag_9, (MR_Integer) 0))));
          uint8_t PtagUint8_33 = (uint8_t) (Ptag_10);

          TagString_11 = mercury__string__uint8_to_string_1_f_0(PtagUint8_33);
        }
        Var_22 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_8);
        Var_29 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_32);
        Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) ")");
        Var_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_28);
        Var_25 = mercury__string__f_43_43_2_f_0(TagString_11, Var_26);
        Var_23 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_25);
        Var_21 = mercury__string__f_43_43_2_f_0(Var_22, Var_23);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "heap_ref(", Var_21);
      }
      break;
  }
  return Str_6;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_lval_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Lval_5)
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
        MR_Word Type_7 = ((MR_Unsigned) ((MR_hl_field(1, Lval_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Num_8 = ((MR_Integer) ((MR_hl_field(1, Lval_5, (MR_Integer) 1))));

        Str_6 = ll_backend__opt_debug__dump_reg_2_f_0(Type_7, Num_8);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_String Var_68;
        MR_Word Type_86 = ((MR_Unsigned) ((MR_hl_field(2, Lval_5, (MR_Integer) 0))) & (MR_Integer) 1);
        MR_Integer Num_87 = ((MR_Integer) ((MR_hl_field(2, Lval_5, (MR_Integer) 1))));

        Var_68 = ll_backend__opt_debug__dump_reg_2_f_0(Type_86, Num_87);
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "temp_", Var_68);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Lval_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer N_9 = ((MR_Integer) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));
            MR_String Var_19;

            Var_19 = mercury__string__int_to_string_1_f_0(N_9);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "sv", Var_19);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_21;
            MR_Integer N_77 = ((MR_Integer) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_21 = mercury__string__int_to_string_1_f_0(N_77);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "parent_sv", Var_21);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_23;
            MR_Integer N_78 = ((MR_Integer) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_23 = mercury__string__int_to_string_1_f_0(N_78);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "fv", Var_23);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Macro_10;
            MR_Integer Var_33;
            MR_Word Type_79 = ((MR_Unsigned) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))) & (MR_Integer) 1);
            MR_Integer N_80 = ((MR_Integer) ((MR_hl_field(3, Lval_5, (MR_Integer) 2))));
            MR_String Var_89;
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
            Var_33 = (MR_Integer) ((MR_Unsigned) N_80 + (MR_Unsigned) 1);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__opt_debug_scalar_common_5[0]), Var_33, &Var_89);
            Var_96 = mercury__string__f_43_43_2_f_0(Macro_10, Var_89);
            Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ",", Var_96);
            mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__opt_debug_scalar_common_5[0]), N_80, &Var_99);
            Var_106 = mercury__string__f_43_43_2_f_0(Var_99, Var_98);
            Str_6 = mercury__string__f_43_43_2_f_0(Macro_10, Var_106);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_53;
            MR_String Var_54;
            MR_Word R_84 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_54 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_84);
            Var_53 = mercury__string__f_43_43_2_f_0(Var_54, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succip_slot(", Var_53);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Word R_11 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));
            MR_String Var_37;
            MR_String Var_38;

            Var_38 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_11);
            Var_37 = mercury__string__f_43_43_2_f_0(Var_38, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succfr_slot(", Var_37);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_49;
            MR_String Var_50;
            MR_Word R_83 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_50 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_83);
            Var_49 = mercury__string__f_43_43_2_f_0(Var_50, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redoip_slot(", Var_49);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String Var_45;
            MR_String Var_46;
            MR_Word R_82 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_46 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_82);
            Var_45 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redofr_slot(", Var_45);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Var_41;
            MR_String Var_42;
            MR_Word R_81 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_42 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_81);
            Var_41 = mercury__string__f_43_43_2_f_0(Var_42, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "prevfr_slot(", Var_41);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word MT_12 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));
            MR_Word F_13 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 3))));
            MR_String T_str_15;
            MR_String Var_57;
            MR_String Var_58;
            MR_String Var_60;
            MR_String Var_61;
            MR_String Var_62;
            MR_String Var_64;
            MR_String Var_65;
            MR_Word N_85 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 2))));

            if ((MT_12 == (MR_Word) ((MR_Unsigned) 0U)))
              T_str_15 = (MR_String) "no";
            else
            {
              MR_Word Ptag_14 = ((MR_Word) ((MR_hl_field(1, MT_12, (MR_Integer) 0))));

              T_str_15 = ll_backend__opt_debug__dump_ptag_1_f_0(Ptag_14);
            }
            Var_61 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, N_85);
            Var_65 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, F_13);
            Var_64 = mercury__string__f_43_43_2_f_0(Var_65, (MR_String) ")");
            Var_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_64);
            Var_60 = mercury__string__f_43_43_2_f_0(Var_61, Var_62);
            Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_60);
            Var_57 = mercury__string__f_43_43_2_f_0(T_str_15, Var_58);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "field(", Var_57);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_70;
            MR_String Var_71;
            MR_Word R_88 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));

            Var_71 = ll_backend__opt_debug__dump_rval_2_f_0(MaybeProcLabel_4, R_88);
            Var_70 = mercury__string__f_43_43_2_f_0(Var_71, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_ref(", Var_70);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String VarName_17;
            MR_Word Var_73 = ((MR_Word) ((MR_hl_field(3, Lval_5, (MR_Integer) 1))));
            MR_String Var_75;

            VarName_17 = (MR_String) (Var_73);
            Var_75 = mercury__string__f_43_43_2_f_0(VarName_17, (MR_String) "))");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "global_var_ref(env_var_ref(", Var_75);
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

static MR_String MR_CALL 
ll_backend__opt_debug__dump_ptag_1_f_0(
  MR_Word Ptag_3)
{
  MR_String Str_4;
  uint8_t PtagUint8_5 = (uint8_t) (Ptag_3);

  Str_4 = mercury__string__uint8_to_string_1_f_0(PtagUint8_5);
  return Str_4;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_llds_type_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "bool";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "float";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "string";
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_String) "data_ptr";
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_String) "code_ptr";
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_String) "word";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_20 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

        HeadVar__2_2 = ((&ll_backend__opt_debug_vector_common_6[10 + Var_20]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_19 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 15);

        HeadVar__2_2 = ((&ll_backend__opt_debug_vector_common_6[0 + Var_19]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_binop_1_f_0(
  MR_Word HeadVar__1_1)
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
          HeadVar__2_2 = (MR_String) "str_nzp";
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_String) "float_from_dword";
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_String) "int64_from_dword";
          break;
        case (MR_Integer) 7:
          HeadVar__2_2 = (MR_String) "uint64_from_dword";
          break;
        case (MR_Integer) 8:
          HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
          break;
        case (MR_Integer) 9:
          HeadVar__2_2 = (MR_String) "compound=";
          break;
        case (MR_Integer) 10:
          HeadVar__2_2 = (MR_String) "compound<";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ArithOp_34 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 7);

        HeadVar__2_2 = backend_libs__builtin_ops__arith_op_c_operator_1_f_0(ArithOp_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Var_52 = ((MR_Unsigned) ((MR_hl_field(2, HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);

        switch (Var_52) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            HeadVar__2_2 = (MR_String) "unchecked<<";
            break;
          case (MR_Integer) 1:
            HeadVar__2_2 = (MR_String) "unchecked<<u";
            break;
        }
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_54 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);

            switch (Var_54) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                HeadVar__2_2 = (MR_String) "unchecked>>";
                break;
              case (MR_Integer) 1:
                HeadVar__2_2 = (MR_String) "unchecked>>u";
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "&";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "|";
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_String) "^";
          break;
        case (MR_Integer) 4:
          {
            MR_Word CmpOp_22 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);

            HeadVar__2_2 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(CmpOp_22);
          }
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_String) "array_index";
          break;
        case (MR_Integer) 6:
          {
            MR_Word CmpOp_23 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_25;

            Var_25 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(CmpOp_23);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "str", Var_25);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Word Var_50 = ((MR_Word) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 2))));
            MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))));

            if ((Var_50 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_String Var_7;
              MR_String Var_8;

              Var_8 = mercury__string__int_to_string_1_f_0(Var_51);
              Var_7 = mercury__string__f_43_43_2_f_0(Var_8, (MR_String) ")");
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "offset_str_eq(", Var_7);
            }
            else
            {
              MR_Integer Size_11 = ((MR_Integer) ((MR_hl_field(1, Var_50, (MR_Integer) 0))));
              MR_String Var_14;
              MR_String Var_15;
              MR_String Var_16;
              MR_String Var_18;
              MR_String Var_19;

              Var_15 = mercury__string__int_to_string_1_f_0(Var_51);
              Var_19 = mercury__string__int_to_string_1_f_0(Size_11);
              Var_18 = mercury__string__f_43_43_2_f_0(Var_19, (MR_String) ")");
              Var_16 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_18);
              Var_14 = mercury__string__f_43_43_2_f_0(Var_15, Var_16);
              HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "offset_strn_eq(", Var_14);
            }
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word CmpOp_29 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_31;
            MR_Word Var_32 = (MR_Word) (CmpOp_29);

            Var_31 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(Var_32);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "unsigned", Var_31);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Word ArithOp_35 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_37;
            MR_Word Var_38 = (MR_Word) (ArithOp_35);

            Var_37 = backend_libs__builtin_ops__arith_op_c_operator_1_f_0(Var_38);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fl", Var_37);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_Word CmpOp_26 = ((MR_Unsigned) ((MR_hl_field(3, HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 7);
            MR_String Var_28;

            Var_28 = backend_libs__builtin_ops__cmp_op_c_operator_1_f_0(CmpOp_26);
            HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "fl", Var_28);
          }
          break;
      }
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_unop_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__2_2 = (MR_String) "tag";
          break;
        case (MR_Integer) 1:
          HeadVar__2_2 = (MR_String) "strip_tag";
          break;
        case (MR_Integer) 2:
          HeadVar__2_2 = (MR_String) "mkbody";
          break;
        case (MR_Integer) 3:
          HeadVar__2_2 = (MR_String) "unmkbody";
          break;
        case (MR_Integer) 4:
          HeadVar__2_2 = (MR_String) "not";
          break;
        case (MR_Integer) 5:
          HeadVar__2_2 = (MR_String) "hash_string";
          break;
        case (MR_Integer) 6:
          HeadVar__2_2 = (MR_String) "hash_string2";
          break;
        case (MR_Integer) 7:
          HeadVar__2_2 = (MR_String) "hash_string3";
          break;
        case (MR_Integer) 8:
          HeadVar__2_2 = (MR_String) "hash_string4";
          break;
        case (MR_Integer) 9:
          HeadVar__2_2 = (MR_String) "hash_string5";
          break;
        case (MR_Integer) 10:
          HeadVar__2_2 = (MR_String) "hash_string6";
          break;
        case (MR_Integer) 11:
          HeadVar__2_2 = (MR_String) "dword_float_get_word0";
          break;
        case (MR_Integer) 12:
          HeadVar__2_2 = (MR_String) "dword_float_get_word1";
          break;
        case (MR_Integer) 13:
          HeadVar__2_2 = (MR_String) "dword_int64_get_word0";
          break;
        case (MR_Integer) 14:
          HeadVar__2_2 = (MR_String) "dword_int64_get_word1";
          break;
        case (MR_Integer) 15:
          HeadVar__2_2 = (MR_String) "dword_uint64_get_word0";
          break;
        case (MR_Integer) 16:
          HeadVar__2_2 = (MR_String) "dword_uint64_get_word1";
          break;
      }
      break;
    case (MR_Integer) 1:
      HeadVar__2_2 = (MR_String) "bitwise_complement";
      break;
  }
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_const_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Const_5)
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
        MR_Integer I_7 = ((MR_Integer) ((MR_hl_field(1, Const_5, (MR_Integer) 0))));

        Str_6 = mercury__string__int_to_string_1_f_0(I_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Unsigned U_8 = ((MR_Unsigned) ((MR_hl_field(2, Const_5, (MR_Integer) 0))));

        Str_6 = mercury__string__uint_to_string_1_f_0(U_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, Const_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            int8_t I8_9 = ((int8_t) (MR_Word) (MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__int8_to_string_1_f_0(I8_9);
          }
          break;
        case (MR_Integer) 1:
          {
            uint8_t U8_10 = ((uint8_t) (MR_Word) (MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__uint8_to_string_1_f_0(U8_10);
          }
          break;
        case (MR_Integer) 2:
          {
            int16_t I16_11 = ((int16_t) (MR_Word) (MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__int16_to_string_1_f_0(I16_11);
          }
          break;
        case (MR_Integer) 3:
          {
            uint16_t U16_12 = ((uint16_t) (MR_Word) (MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__uint16_to_string_1_f_0(U16_12);
          }
          break;
        case (MR_Integer) 4:
          {
            int32_t I32_13 = ((int32_t) (MR_Word) (MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__int32_to_string_1_f_0(I32_13);
          }
          break;
        case (MR_Integer) 5:
          {
            uint32_t U32_14 = ((uint32_t) (MR_Word) (MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__uint32_to_string_1_f_0(U32_14);
          }
          break;
        case (MR_Integer) 6:
          {
            int64_t I64_15 = MR_unbox_int64((MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__int64_to_string_1_f_0(I64_15);
          }
          break;
        case (MR_Integer) 7:
          {
            uint64_t U64_16 = MR_unbox_uint64((MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__uint64_to_string_1_f_0(U64_16);
          }
          break;
        case (MR_Integer) 8:
          Str_6 = ((MR_String) ((MR_hl_field(3, Const_5, (MR_Integer) 1))));
          break;
        case (MR_Integer) 9:
          {
            MR_Float F_39 = MR_unbox_float((MR_hl_field(3, Const_5, (MR_Integer) 1)));

            Str_6 = mercury__string__float_to_string_1_f_0(F_39);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String S_19 = ((MR_String) ((MR_hl_field(3, Const_5, (MR_Integer) 1))));

            Str_6 = backend_libs__c_util__quote_string_c_1_f_0(S_19);
          }
          break;
        case (MR_Integer) 11:
          Str_6 = (MR_String) "multi_string(...)";
          break;
        case (MR_Integer) 12:
          {
            MR_Word CodeAddr_21 = ((MR_Word) ((MR_hl_field(3, Const_5, (MR_Integer) 1))));
            MR_String Var_26;
            MR_String Var_27;

            Var_27 = ll_backend__opt_debug__dump_code_addr_2_f_0(MaybeProcLabel_4, CodeAddr_21);
            Var_26 = mercury__string__f_43_43_2_f_0(Var_27, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "code_addr_const(", Var_26);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_Word DataId_22 = ((MR_Word) ((MR_hl_field(3, Const_5, (MR_Integer) 1))));
            MR_String DataIdStr_23;
            MR_String Var_30;

            DataIdStr_23 = ll_backend__opt_debug__dump_data_id_1_f_0(DataId_22);
            Var_30 = mercury__string__f_43_43_2_f_0(DataIdStr_23, (MR_String) ")");
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", Var_30);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_Integer Offset_24 = ((MR_Integer) ((MR_hl_field(3, Const_5, (MR_Integer) 2))));
            MR_String Var_33;
            MR_String Var_34;
            MR_String Var_36;
            MR_String Var_37;
            MR_Word DataId_40 = ((MR_Word) ((MR_hl_field(3, Const_5, (MR_Integer) 1))));
            MR_String DataIdStr_41;

            DataIdStr_41 = ll_backend__opt_debug__dump_data_id_1_f_0(DataId_40);
            Var_37 = mercury__string__int_to_string_1_f_0(Offset_24);
            Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) ")");
            Var_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_36);
            Var_33 = mercury__string__f_43_43_2_f_0(DataIdStr_41, Var_34);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const_word_offset(", Var_33);
          }
          break;
      }
      break;
  }
  return Str_6;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addr_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word CodeAddr_5)
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
        MR_Word Label_7 = ((MR_Word) ((MR_hl_field(1, CodeAddr_5, (MR_Integer) 0))));

        Str_6 = ll_backend__opt_debug__dump_label_2_f_0(MaybeProcLabel_4, Label_7);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ProcLabel_8 = ((MR_Word) ((MR_hl_field(2, CodeAddr_5, (MR_Integer) 0))));

        Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_8);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, CodeAddr_5, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_17 = ((MR_Unsigned) ((MR_hl_field(3, CodeAddr_5, (MR_Integer) 1))) & (MR_Integer) 1);

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
            MR_Word Variant_9 = ((MR_Word) ((MR_hl_field(3, CodeAddr_5, (MR_Integer) 1))));
            MR_String Var_13;

            Var_13 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_9);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_closure_", Var_13);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_15;
            MR_Word Variant_16 = ((MR_Word) ((MR_hl_field(3, CodeAddr_5, (MR_Integer) 1))));

            Var_15 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(Variant_16);
            Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_class_method_", Var_15);
          }
          break;
      }
      break;
  }
  return Str_6;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_label_2_f_0(
  MR_Word MaybeProcLabel_4,
  MR_Word Label_5)
{
  MR_bool succeeded;
  MR_String Str_6;

  if (((MR_tag((MR_Word) Label_5)) == (MR_Integer) 1))
  {
    MR_Word ProcLabel_21 = ((MR_Word) ((MR_hl_field(1, Label_5, (MR_Integer) 1))));

    if ((MaybeProcLabel_4 == (MR_Word) ((MR_Unsigned) 0U)))
      Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_21);
    else
    {
      MR_Word CurProcLabel_19 = ((MR_Word) ((MR_hl_field(1, MaybeProcLabel_4, (MR_Integer) 0))));

      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(CurProcLabel_19, ProcLabel_21);
      if (succeeded)
        Str_6 = (MR_String) "CUR_PROC_ENTRY";
      else
        Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_21);
    }
  }
  else
  {
    MR_Integer N_7 = ((MR_Integer) ((MR_hl_field(0, Label_5, (MR_Integer) 0))));
    MR_Word ProcLabel_8 = ((MR_Word) ((MR_hl_field(0, Label_5, (MR_Integer) 1))));
    MR_String NStr_9;

    mercury__string__int_to_string_2_p_0(N_7, &NStr_9);
    if ((MaybeProcLabel_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_12;
      MR_String Var_13;

      Var_12 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_8);
      Var_13 = mercury__string__f_43_43_2_f_0((MR_String) "_i", NStr_9);
      Str_6 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
    }
    else
    {
      MR_Word CurProcLabel_10 = ((MR_Word) ((MR_hl_field(1, MaybeProcLabel_4, (MR_Integer) 0))));

      succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(CurProcLabel_10, ProcLabel_8);
      if (succeeded)
        Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "local_", NStr_9);
      else
      {
        MR_String Var_16;
        MR_String Var_17;

        Var_16 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_8);
        Var_17 = mercury__string__f_43_43_2_f_0((MR_String) "_", NStr_9);
        Str_6 = mercury__string__f_43_43_2_f_0(Var_16, Var_17);
      }
    }
  }
  return Str_6;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_data_id_1_f_0(
  MR_Word DataId_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) DataId_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_68 = ((MR_Word) ((MR_hl_field(0, DataId_3, (MR_Integer) 0))));

        if (((MR_tag((MR_Word) Var_68)) == (MR_Integer) 0))
        {
          MR_Word RttiTypeCtor_5 = ((MR_Word) ((MR_hl_field(0, Var_68, (MR_Integer) 0))));
          MR_Word DataName_6 = ((MR_Word) ((MR_hl_field(0, Var_68, (MR_Integer) 1))));
          MR_String Var_17;
          MR_String Var_18;
          MR_String Var_19;
          MR_String Var_21;
          MR_String Var_22;

          Var_18 = ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(RttiTypeCtor_5);
          Var_22 = ll_backend__opt_debug__dump_rtti_name_1_f_0(DataName_6);
          Var_21 = mercury__string__f_43_43_2_f_0(Var_22, (MR_String) ")");
          Var_19 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_21);
          Var_17 = mercury__string__f_43_43_2_f_0(Var_18, Var_19);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_id(", Var_17);
        }
        else
        {
          MR_Word TCName_7 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 0))));
          MR_Word TCDataName_8 = ((MR_Word) ((MR_hl_field(1, Var_68, (MR_Integer) 1))));
          MR_String Var_26;
          MR_String Var_27;
          MR_String Var_28;
          MR_String Var_30;
          MR_String Var_31;

          Var_27 = ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(TCName_7);
          Var_31 = ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(TCDataName_8);
          Var_30 = mercury__string__f_43_43_2_f_0(Var_31, (MR_String) ")");
          Var_28 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_30);
          Var_26 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
          Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_rtti_id(", Var_26);
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_9 = ((MR_Word) ((MR_hl_field(1, DataId_3, (MR_Integer) 0))));
        MR_Word Id_10 = ((MR_Word) ((MR_hl_field(1, DataId_3, (MR_Integer) 1))));
        MR_String Var_33;
        MR_String Var_34;
        MR_String Var_36;
        MR_String Var_37;

        Var_33 = backend_libs__rtti__tabling_info_id_str_1_f_0(Id_10);
        Var_37 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_9);
        Var_36 = mercury__string__f_43_43_2_f_0(Var_37, (MR_String) ")");
        Var_34 = mercury__string__f_43_43_2_f_0((MR_String) "(", Var_36);
        Str_4 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer TypeNum_11;
        MR_Integer Offset_12 = ((MR_Integer) ((MR_hl_field(2, DataId_3, (MR_Integer) 1))));
        MR_Word Var_39 = ((MR_Word) ((MR_hl_field(2, DataId_3, (MR_Integer) 0))));
        MR_String Var_41;
        MR_String Var_42;
        MR_String Var_43;
        MR_String Var_45;
        MR_String Var_46;

        TypeNum_11 = (MR_Integer) (Var_39);
        Var_42 = mercury__string__int_to_string_1_f_0(TypeNum_11);
        Var_46 = mercury__string__int_to_string_1_f_0(Offset_12);
        Var_45 = mercury__string__f_43_43_2_f_0(Var_46, (MR_String) ")");
        Var_43 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_45);
        Var_41 = mercury__string__f_43_43_2_f_0(Var_42, Var_43);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "scalar_common_data_id(", Var_41);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, DataId_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_48 = ((MR_Word) ((MR_hl_field(3, DataId_3, (MR_Integer) 1))));
            MR_String Var_50;
            MR_String Var_51;
            MR_String Var_52;
            MR_String Var_54;
            MR_String Var_55;
            MR_Integer TypeNum_66 = (MR_Integer) (Var_48);
            MR_Integer Offset_67 = ((MR_Integer) ((MR_hl_field(3, DataId_3, (MR_Integer) 2))));

            Var_51 = mercury__string__int_to_string_1_f_0(TypeNum_66);
            Var_55 = mercury__string__int_to_string_1_f_0(Offset_67);
            Var_54 = mercury__string__f_43_43_2_f_0(Var_55, (MR_String) ")");
            Var_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_54);
            Var_50 = mercury__string__f_43_43_2_f_0(Var_51, Var_52);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_data_id(", Var_50);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word LayoutName_13 = ((MR_Word) ((MR_hl_field(3, DataId_3, (MR_Integer) 1))));
            MR_String Var_58;
            MR_String Var_59;

            Var_59 = ll_backend__opt_debug__dump_layout_name_1_f_0(LayoutName_13);
            Var_58 = mercury__string__f_43_43_2_f_0(Var_59, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "layout_id(", Var_58);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word PredProcId_14 = ((MR_Word) ((MR_hl_field(3, DataId_3, (MR_Integer) 2))));
            MR_String Var_63;
            MR_String Var_64;
            MR_Word PredId_69 = ((MR_Word) ((MR_hl_field(0, PredProcId_14, (MR_Integer) 0))));
            MR_Integer ProcId_70 = ((MR_Integer) ((MR_hl_field(0, PredProcId_14, (MR_Integer) 1))));
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
            Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "proc(", Var_72);
            Var_63 = mercury__string__f_43_43_2_f_0(Var_64, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_id(", Var_63);
          }
          break;
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_name_1_f_0(
  MR_Word LayoutName_3)
{
  MR_String Str_4;

  switch (MR_tag((MR_Word) LayoutName_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word RttiProcLabel_5 = ((MR_Word) ((MR_hl_field(0, LayoutName_3, (MR_Integer) 0))));
        MR_String Var_16;
        MR_String Var_17;

        Var_17 = ll_backend__opt_debug__dump_rttiproclabel_1_f_0(RttiProcLabel_5);
        Var_16 = mercury__string__f_43_43_2_f_0(Var_17, (MR_String) ")");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "proc_layout(", Var_16);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ProcLabel_7 = ((MR_Word) ((MR_hl_field(1, LayoutName_3, (MR_Integer) 0))));
        MR_Integer SeqNo_8 = ((MR_Integer) ((MR_hl_field(1, LayoutName_3, (MR_Integer) 1))));
        MR_String Var_20;
        MR_String Var_21;
        MR_String Var_22;
        MR_String Var_23;

        Var_21 = ll_backend__opt_debug__dump_proclabel_1_f_0(ProcLabel_7);
        Var_23 = mercury__string__int_to_string_1_f_0(SeqNo_8);
        Var_22 = mercury__string__f_43_43_2_f_0(Var_23, (MR_String) ")");
        Var_20 = mercury__string__f_43_43_2_f_0(Var_21, Var_22);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "closure_proc_id(", Var_20);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ModuleName_10 = ((MR_Word) ((MR_hl_field(2, LayoutName_3, (MR_Integer) 0))));
        MR_Integer FileNum_11 = ((MR_Integer) ((MR_hl_field(2, LayoutName_3, (MR_Integer) 1))));
        MR_String Var_26;
        MR_String Var_27;
        MR_String Var_28;
        MR_String Var_29;

        Var_27 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_10);
        Var_29 = mercury__string__int_to_string_1_f_0(FileNum_11);
        Var_28 = mercury__string__f_43_43_2_f_0(Var_29, (MR_String) ")");
        Var_26 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout(", Var_26);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_32;
            MR_String Var_33;
            MR_String Var_34;
            MR_String Var_35;
            MR_Word ModuleName_131 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));
            MR_Integer FileNum_132 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));

            Var_33 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_131);
            Var_35 = mercury__string__int_to_string_1_f_0(FileNum_132);
            Var_34 = mercury__string__f_43_43_2_f_0(Var_35, (MR_String) ")");
            Var_32 = mercury__string__f_43_43_2_f_0(Var_33, Var_34);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_line_number_vector(", Var_32);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_38;
            MR_String Var_39;
            MR_String Var_40;
            MR_String Var_41;
            MR_Word ModuleName_133 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));
            MR_Integer FileNum_134 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));

            Var_39 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_133);
            Var_41 = mercury__string__int_to_string_1_f_0(FileNum_134);
            Var_40 = mercury__string__f_43_43_2_f_0(Var_41, (MR_String) ")");
            Var_38 = mercury__string__f_43_43_2_f_0(Var_39, Var_40);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_label_layout_vector(", Var_38);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_44;
            MR_String Var_45;
            MR_Word ModuleName_135 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_45 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_135);
            Var_44 = mercury__string__f_43_43_2_f_0(Var_45, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_string_table(", Var_44);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_48;
            MR_String Var_49;
            MR_Word ModuleName_136 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_49 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_136);
            Var_48 = mercury__string__f_43_43_2_f_0(Var_49, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_file_vector(", Var_48);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_52;
            MR_String Var_53;
            MR_Word ModuleName_137 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_53 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_137);
            Var_52 = mercury__string__f_43_43_2_f_0(Var_53, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_proc_vector(", Var_52);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_Integer NumLabels_12 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));
            MR_String Var_56;
            MR_String Var_57;
            MR_String Var_58;
            MR_String Var_60;
            MR_String Var_61;
            MR_Word ModuleName_138 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_57 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_138);
            Var_61 = mercury__string__int_to_string_1_f_0(NumLabels_12);
            Var_60 = mercury__string__f_43_43_2_f_0(Var_61, (MR_String) ")");
            Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_60);
            Var_56 = mercury__string__f_43_43_2_f_0(Var_57, Var_58);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_label_exec_count(", Var_56);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_64;
            MR_String Var_65;
            MR_Word ModuleName_139 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_65 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_139);
            Var_64 = mercury__string__f_43_43_2_f_0(Var_65, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_set_desc(", Var_64);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_Integer EventNum_13 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));
            MR_String Var_72;
            MR_String Var_73;
            MR_String Var_74;
            MR_String Var_76;
            MR_String Var_77;
            MR_Word ModuleName_141 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_73 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_141);
            Var_77 = mercury__string__int_to_string_1_f_0(EventNum_13);
            Var_76 = mercury__string__f_43_43_2_f_0(Var_77, (MR_String) ")");
            Var_74 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_76);
            Var_72 = mercury__string__f_43_43_2_f_0(Var_73, Var_74);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_arg_names(", Var_72);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_String Var_80;
            MR_String Var_81;
            MR_String Var_82;
            MR_String Var_84;
            MR_String Var_85;
            MR_Word ModuleName_142 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));
            MR_Integer EventNum_143 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));

            Var_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_142);
            Var_85 = mercury__string__int_to_string_1_f_0(EventNum_143);
            Var_84 = mercury__string__f_43_43_2_f_0(Var_85, (MR_String) ")");
            Var_82 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_84);
            Var_80 = mercury__string__f_43_43_2_f_0(Var_81, Var_82);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attrs(", Var_80);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_Integer ArgNum_14 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 3))));
            MR_String Var_88;
            MR_String Var_89;
            MR_String Var_90;
            MR_String Var_92;
            MR_String Var_93;
            MR_String Var_94;
            MR_String Var_96;
            MR_String Var_97;
            MR_Word ModuleName_144 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));
            MR_Integer EventNum_145 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));

            Var_89 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_144);
            Var_93 = mercury__string__int_to_string_1_f_0(EventNum_145);
            Var_97 = mercury__string__int_to_string_1_f_0(ArgNum_14);
            Var_96 = mercury__string__f_43_43_2_f_0(Var_97, (MR_String) ")");
            Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_96);
            Var_92 = mercury__string__f_43_43_2_f_0(Var_93, Var_94);
            Var_90 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_92);
            Var_88 = mercury__string__f_43_43_2_f_0(Var_89, Var_90);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_args(", Var_88);
          }
          break;
        case (MR_Integer) 10:
          {
            MR_String Var_100;
            MR_String Var_101;
            MR_String Var_102;
            MR_String Var_104;
            MR_String Var_105;
            MR_String Var_106;
            MR_String Var_108;
            MR_String Var_109;
            MR_Word ModuleName_146 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));
            MR_Integer EventNum_147 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));
            MR_Integer ArgNum_148 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 3))));

            Var_101 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_146);
            Var_105 = mercury__string__int_to_string_1_f_0(EventNum_147);
            Var_109 = mercury__string__int_to_string_1_f_0(ArgNum_148);
            Var_108 = mercury__string__f_43_43_2_f_0(Var_109, (MR_String) ")");
            Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_108);
            Var_104 = mercury__string__f_43_43_2_f_0(Var_105, Var_106);
            Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_104);
            Var_100 = mercury__string__f_43_43_2_f_0(Var_101, Var_102);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_order(", Var_100);
          }
          break;
        case (MR_Integer) 11:
          {
            MR_String Var_112;
            MR_String Var_113;
            MR_String Var_114;
            MR_String Var_116;
            MR_String Var_117;
            MR_Word ModuleName_149 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));
            MR_Integer EventNum_150 = ((MR_Integer) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 2))));

            Var_113 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_149);
            Var_117 = mercury__string__int_to_string_1_f_0(EventNum_150);
            Var_116 = mercury__string__f_43_43_2_f_0(Var_117, (MR_String) ")");
            Var_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_116);
            Var_112 = mercury__string__f_43_43_2_f_0(Var_113, Var_114);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_order(", Var_112);
          }
          break;
        case (MR_Integer) 12:
          {
            MR_String Var_68;
            MR_String Var_69;
            MR_Word ModuleName_140 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_69 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_140);
            Var_68 = mercury__string__f_43_43_2_f_0(Var_69, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_specs(", Var_68);
          }
          break;
        case (MR_Integer) 13:
          {
            MR_String Var_120;
            MR_String Var_121;
            MR_Word ModuleName_151 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_121 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_151);
            Var_120 = mercury__string__f_43_43_2_f_0(Var_121, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_oisu_bytes(", Var_120);
          }
          break;
        case (MR_Integer) 14:
          {
            MR_String Var_124;
            MR_String Var_125;
            MR_Word ModuleName_152 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_125 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_152);
            Var_124 = mercury__string__f_43_43_2_f_0(Var_125, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_type_table_bytes(", Var_124);
          }
          break;
        case (MR_Integer) 15:
          {
            MR_String Var_128;
            MR_String Var_129;
            MR_Word ModuleName_153 = ((MR_Word) ((MR_hl_field(3, LayoutName_3, (MR_Integer) 1))));

            Var_129 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_153);
            Var_128 = mercury__string__f_43_43_2_f_0(Var_129, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout(", Var_128);
          }
          break;
      }
      break;
  }
  return Str_4;
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
  MR_Word RttiProcLabel_3)
{
  MR_String HeadVar__2_2;
  MR_Word Var_4;

  Var_4 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(RttiProcLabel_3);
  HeadVar__2_2 = ll_backend__opt_debug__dump_proclabel_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_proclabel_1_f_0(
  MR_Word ProcLabel_3)
{
  MR_bool succeeded;
  MR_String Str_4;

  if (((MR_tag((MR_Word) ProcLabel_3)) == (MR_Integer) 0))
  {
    MR_Word Module_5 = ((MR_Word) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 0))));
    MR_Word PredModule_7 = ((MR_Word) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 2))));
    MR_String PredName_8 = ((MR_String) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 3))));
    MR_Integer Arity_9 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 4))));
    MR_Integer Mode_10 = ((MR_Integer) ((MR_hl_field(0, ProcLabel_3, (MR_Integer) 5))));
    MR_String ExtraModule_11;
    MR_String Var_19;
    MR_String Var_20;
    MR_String Var_21;
    MR_String Var_23;
    MR_String Var_24;
    MR_String Var_26;
    MR_String Var_27;
    MR_String Var_28;
    MR_String Var_30;

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(Module_5, PredModule_7);
    if (succeeded)
      ExtraModule_11 = (MR_String) "";
    else
    {
      MR_String PredModuleName_12;

      PredModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(PredModule_7);
      ExtraModule_11 = mercury__string__f_43_43_2_f_0(PredModuleName_12, (MR_String) "_");
    }
    Var_20 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_5);
    Var_27 = mercury__string__int_to_string_1_f_0(Arity_9);
    Var_30 = mercury__string__int_to_string_1_f_0(Mode_10);
    Var_28 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_30);
    Var_26 = mercury__string__f_43_43_2_f_0(Var_27, Var_28);
    Var_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_26);
    Var_23 = mercury__string__f_43_43_2_f_0(PredName_8, Var_24);
    Var_21 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_23);
    Var_19 = mercury__string__f_43_43_2_f_0(Var_20, Var_21);
    Str_4 = mercury__string__f_43_43_2_f_0(ExtraModule_11, Var_19);
  }
  else
  {
    MR_Word SpecialPredId_13 = ((MR_Unsigned) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 1))) & (MR_Integer) 3);
    MR_Word TypeModule_14 = ((MR_Word) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 2))));
    MR_String TypeName_15 = ((MR_String) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 3))));
    MR_Integer TypeArity_16 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 4))));
    MR_Word TypeCtor_17;
    MR_Word Var_31;
    MR_String Var_32;
    MR_String Var_33;
    MR_String Var_35;
    MR_String Var_36;
    MR_String Var_37;
    MR_String Var_39;
    MR_String Var_40;
    MR_String Var_41;
    MR_String Var_42;
    MR_String Var_44;
    MR_String Var_45;
    MR_String Var_46;
    MR_String Var_48;
    MR_Word Module_49 = ((MR_Word) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 0))));
    MR_Integer Mode_50 = ((MR_Integer) ((MR_hl_field(1, ProcLabel_3, (MR_Integer) 5))));

    {
      Var_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_31, 0) = ((MR_Box) (TypeModule_14));
      MR_hl_field(1, Var_31, 1) = ((MR_Box) (TypeName_15));
    }
    {
      TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, TypeCtor_17, 0) = ((MR_Box) (Var_31));
      MR_hl_field(0, TypeCtor_17, 1) = ((MR_Box) (TypeArity_16));
    }
    Var_32 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(Module_49);
    Var_36 = hlds__pred_name__uci_pred_name_2_f_0(SpecialPredId_13, TypeCtor_17);
    Var_41 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(TypeModule_14);
    Var_40 = parse_tree__prog_foreign__qualify_name_2_f_0(Var_41, TypeName_15);
    Var_45 = mercury__string__int_to_string_1_f_0(TypeArity_16);
    Var_48 = mercury__string__int_to_string_1_f_0(Mode_50);
    Var_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_48);
    Var_44 = mercury__string__f_43_43_2_f_0(Var_45, Var_46);
    Var_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_44);
    Var_39 = mercury__string__f_43_43_2_f_0(Var_40, Var_42);
    Var_37 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_39);
    Var_35 = mercury__string__f_43_43_2_f_0(Var_36, Var_37);
    Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "__", Var_35);
    Str_4 = mercury__string__f_43_43_2_f_0(Var_32, Var_33);
  }
  return Str_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String Str_6;
  MR_Word ModuleName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String ClassName_4 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  MR_Integer Arity_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))));
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

MR_String MR_CALL 
ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(
  MR_Word TCRttiName_3)
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
        MR_String InstanceStr_6 = ((MR_String) ((MR_hl_field(1, TCRttiName_3, (MR_Integer) 1))));
        MR_String Var_12;

        Var_12 = mercury__string__f_43_43_2_f_0(InstanceStr_6, (MR_String) ")");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", Var_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer Ordinal_7 = ((MR_Integer) ((MR_hl_field(2, TCRttiName_3, (MR_Integer) 0))));
        MR_String Var_15;
        MR_String Var_16;

        Var_16 = mercury__string__int_to_string_1_f_0(Ordinal_7);
        Var_15 = mercury__string__f_43_43_2_f_0(Var_16, (MR_String) ")");
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_decl_super(", Var_15);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word TCTypes_9 = ((MR_Word) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 1))));
            MR_String Var_19;
            MR_String Var_20;

            Var_20 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_9);
            Var_19 = mercury__string__f_43_43_2_f_0(Var_20, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance(", Var_19);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_23;
            MR_String Var_24;
            MR_Word TCTypes_42 = ((MR_Word) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 1))));

            Var_24 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_42);
            Var_23 = mercury__string__f_43_43_2_f_0(Var_24, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_tc_types_vector(", Var_23);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_31;
            MR_String Var_32;
            MR_String Var_33;
            MR_String Var_35;
            MR_String Var_36;
            MR_Integer Ordinal_44 = ((MR_Integer) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 2))));
            MR_Word TCTypes_45 = ((MR_Word) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 1))));

            Var_32 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_45);
            Var_36 = mercury__string__int_to_string_1_f_0(Ordinal_44);
            Var_35 = mercury__string__f_43_43_2_f_0(Var_36, (MR_String) ")");
            Var_33 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_35);
            Var_31 = mercury__string__f_43_43_2_f_0(Var_32, Var_33);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraint(", Var_31);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_27;
            MR_String Var_28;
            MR_Word TCTypes_43 = ((MR_Word) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 1))));

            Var_28 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_43);
            Var_27 = mercury__string__f_43_43_2_f_0(Var_28, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraints(", Var_27);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_39;
            MR_String Var_40;
            MR_Word TCTypes_46 = ((MR_Word) ((MR_hl_field(3, TCRttiName_3, (MR_Integer) 1))));

            Var_40 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(TCTypes_46);
            Var_39 = mercury__string__f_43_43_2_f_0(Var_40, (MR_String) ")");
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_methods(", Var_39);
          }
          break;
      }
      break;
  }
  return Str_4;
}

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_String conv0_HeadVar__2_2;

  conv0_HeadVar__2_2 = backend_libs__rtti__encode_tc_instance_type_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  return wrapper_arg_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(
  MR_Word TCTypes_3)
{
  MR_String Str_4;
  MR_Word EncodedTCTypes_5;
  MR_String TypesStr_6;
  MR_String Var_9;

  EncodedTCTypes_5 = mercury__list__map_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&ll_backend__opt_debug_scalar_common_1[1]), TCTypes_3);
  mercury__string__append_list_2_p_0(EncodedTCTypes_5, &TypesStr_6);
  Var_9 = mercury__string__f_43_43_2_f_0(TypesStr_6, (MR_String) ")");
  Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_instance(", Var_9);
  return Str_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_name_1_f_0(
  MR_Word RttiName_3)
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
          Str_4 = (MR_String) "notag_functor_desc_";
          break;
        case (MR_Integer) 2:
          Str_4 = (MR_String) "enum_name_ordered_table";
          break;
        case (MR_Integer) 3:
          Str_4 = (MR_String) "enum_ordinal_ordered_table";
          break;
        case (MR_Integer) 4:
          Str_4 = (MR_String) "foreign_enum_name_ordered_table";
          break;
        case (MR_Integer) 5:
          Str_4 = (MR_String) "foreign_enum_ordinal_ordered_table";
          break;
        case (MR_Integer) 6:
          Str_4 = (MR_String) "du_name_ordered_table";
          break;
        case (MR_Integer) 7:
          Str_4 = (MR_String) "du_ptag_ordered_table";
          break;
        case (MR_Integer) 8:
          Str_4 = (MR_String) "functor_number_map";
          break;
        case (MR_Integer) 9:
          Str_4 = (MR_String) "type_functors";
          break;
        case (MR_Integer) 10:
          Str_4 = (MR_String) "type_layout";
          break;
        case (MR_Integer) 11:
          Str_4 = (MR_String) "type_ctor_info";
          break;
        case (MR_Integer) 12:
          Str_4 = (MR_String) "type_hashcons_pointer";
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        uint32_t Ordinal_5 = ((uint32_t) (MR_Word) (MR_hl_field(1, RttiName_3, (MR_Integer) 0)));
        MR_String Var_12;

        Var_12 = mercury__string__uint32_to_string_1_f_0(Ordinal_5);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_locns_", Var_12);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Integer TCCNum_6 = ((MR_Integer) ((MR_hl_field(2, RttiName_3, (MR_Integer) 1))));
        MR_Integer Arity_7 = ((MR_Integer) ((MR_hl_field(2, RttiName_3, (MR_Integer) 2))));
        MR_String Var_14;
        MR_String Var_15;
        MR_String Var_16;
        MR_String Var_18;
        MR_String Var_19;
        MR_String Var_20;
        MR_String Var_22;
        uint32_t Ordinal_43 = ((uint32_t) (MR_Word) (MR_hl_field(2, RttiName_3, (MR_Integer) 0)));

        Var_15 = mercury__string__uint32_to_string_1_f_0(Ordinal_43);
        Var_19 = mercury__string__int_to_string_1_f_0(TCCNum_6);
        Var_22 = mercury__string__int_to_string_1_f_0(Arity_7);
        Var_20 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_22);
        Var_18 = mercury__string__f_43_43_2_f_0(Var_19, Var_20);
        Var_16 = mercury__string__f_43_43_2_f_0((MR_String) "_", Var_18);
        Var_14 = mercury__string__f_43_43_2_f_0(Var_15, Var_16);
        Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constr_", Var_14);
      }
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(3, RttiName_3, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_24;
            uint32_t Ordinal_44 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_24 = mercury__string__uint32_to_string_1_f_0(Ordinal_44);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constrs_", Var_24);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_26;
            uint32_t Ordinal_45 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_26 = mercury__string__uint32_to_string_1_f_0(Ordinal_45);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_info_", Var_26);
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_28;
            uint32_t Ordinal_46 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_28 = mercury__string__uint32_to_string_1_f_0(Ordinal_46);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_names_", Var_28);
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_30;
            uint32_t Ordinal_47 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_30 = mercury__string__uint32_to_string_1_f_0(Ordinal_47);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_types_", Var_30);
          }
          break;
        case (MR_Integer) 4:
          {
            MR_String Var_32;
            uint32_t Ordinal_48 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_32 = mercury__string__uint32_to_string_1_f_0(Ordinal_48);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_locns_", Var_32);
          }
          break;
        case (MR_Integer) 5:
          {
            MR_String Var_34;
            uint32_t Ordinal_49 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_34 = mercury__string__uint32_to_string_1_f_0(Ordinal_49);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum_functor_desc_", Var_34);
          }
          break;
        case (MR_Integer) 6:
          {
            MR_String Var_36;
            uint32_t Ordinal_50 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_36 = mercury__string__uint32_to_string_1_f_0(Ordinal_50);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_enum_functor_desc_", Var_36);
          }
          break;
        case (MR_Integer) 7:
          {
            MR_String Var_38;
            uint32_t Ordinal_51 = ((uint32_t) (MR_Word) (MR_hl_field(3, RttiName_3, (MR_Integer) 1)));

            Var_38 = mercury__string__uint32_to_string_1_f_0(Ordinal_51);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_functor_desc_", Var_38);
          }
          break;
        case (MR_Integer) 8:
          {
            MR_Word Ptag_8 = ((MR_Word) ((MR_hl_field(3, RttiName_3, (MR_Integer) 1))));
            MR_String Var_40;
            uint8_t PtagUint8_54 = (uint8_t) (Ptag_8);

            Var_40 = mercury__string__uint8_to_string_1_f_0(PtagUint8_54);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_stag_ordered_table_", Var_40);
          }
          break;
        case (MR_Integer) 9:
          {
            MR_String Var_42;
            MR_Word Ptag_52 = ((MR_Word) ((MR_hl_field(3, RttiName_3, (MR_Integer) 1))));
            uint8_t PtagUint8_53 = (uint8_t) (Ptag_52);

            Var_42 = mercury__string__uint8_to_string_1_f_0(PtagUint8_53);
            Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_ptag_layout", Var_42);
          }
          break;
        case (MR_Integer) 10:
          Str_4 = (MR_String) "type_info";
          break;
        case (MR_Integer) 11:
          Str_4 = (MR_String) "pseudo_type_info";
          break;
      }
      break;
  }
  return Str_4;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(
  MR_Word HeadVar__1_1)
{
  MR_String HeadVar__2_2;
  MR_Word ModuleName_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
  MR_String TypeName_4 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
  uint16_t Arity_5 = ((uint16_t) (MR_Word) (MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2)));
  MR_String Var_7;
  MR_String Var_8;
  MR_String Var_9;
  MR_String Var_11;
  MR_String Var_12;
  MR_String Var_13;
  MR_String Var_14;

  Var_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ModuleName_3);
  Var_12 = parse_tree__prog_foreign__name_mangle_1_f_0(TypeName_4);
  Var_14 = mercury__string__uint16_to_string_1_f_0(Arity_5);
  Var_13 = mercury__string__f_43_43_2_f_0(Var_14, (MR_String) ")");
  Var_11 = mercury__string__f_43_43_2_f_0(Var_12, Var_13);
  Var_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", Var_11);
  Var_7 = mercury__string__f_43_43_2_f_0(Var_8, Var_9);
  HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_type_ctor(", Var_7);
  return HeadVar__2_2;
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_reg_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Integer N_2)
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

void MR_CALL 
ll_backend__opt_debug__llds_proc_dump_msg_6_p_0(
  MR_Word Stream_7,
  MR_Word OptDebug_8,
  MR_Integer LabelNumber_9,
  MR_String Msg_10)
{
  MR_bool succeeded;

  switch (OptDebug_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
      }
      break;
    case (MR_Integer) 1:
      {
        succeeded = (LabelNumber_9 >= (MR_Integer) 0);
        if (succeeded)
        {
          MR_String Var_31;

          mercury__io__write_string_4_p_0(Stream_7, Msg_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", next label number: ");
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&ll_backend__opt_debug_scalar_common_5[0]), LabelNumber_9, &Var_31);
          mercury__io__write_string_4_p_0(Stream_7, Var_31);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) "\n\n");
        }
        else
        {
          mercury__io__write_string_4_p_0(Stream_7, Msg_10);
          mercury__io__write_string_4_p_0(Stream_7, (MR_String) ", no next label\n\n");
        }
      }
      break;
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
