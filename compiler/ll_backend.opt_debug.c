/*
** Automatically generated from `opt_debug.m'
** by the Mercury compiler,
** version 2016-10-30
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


/* :- module ll_backend.opt_debug. */
/* :- implementation. */

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




static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
  MR_String ll_backend__opt_debug__Msg_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
  MR_String ll_backend__opt_debug__HeadVar__1_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_Word ll_backend__opt_debug__HeadVar__3_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
  MR_Word ll_backend__opt_debug__RttiProcLabel_3);

static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_String ll_backend__opt_debug__Prefix_3);

static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
  MR_Char ll_backend__opt_debug__C_4,
  MR_String ll_backend__opt_debug__STATE_VARIABLE_Str_0_6,
  MR_String * ll_backend__opt_debug__STATE_VARIABLE_Str_7);

static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
  MR_Char ll_backend__opt_debug__C_4);

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
  MR_Box ll_backend__opt_debug__closure_arg,
  MR_Box ll_backend__opt_debug__wrapper_arg_1);

static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
  MR_Box ll_backend__opt_debug__closure_arg,
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
  MR_Box * ll_backend__opt_debug__wrapper_arg_3);

static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
  MR_Box ll_backend__opt_debug__closure_arg,
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
  MR_Box * ll_backend__opt_debug__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[2][6];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][3];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][1];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[1][5];


/* sealed */ struct ll_backend__opt_debug__vector_common_type_6_0_s {
  const MR_String ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
};

static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[20];



static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][3] = {
  /* row 0 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_2[0])),
    ((MR_Box) (ll_backend__opt_debug__write_instrs_5_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_2[1])),
    ((MR_Box) (ll_backend__opt_debug__dump_instrs_3_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_5[0])),
    ((MR_Box) (ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};


static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[20] = {
  /* row 0 */   {     (MR_String) "mktag" },
  /* row 1 */   {     (MR_String) "tag" },
  /* row 2 */   {     (MR_String) "unmktag" },
  /* row 3 */   {     (MR_String) "strip_tag" },
  /* row 4 */   {     (MR_String) "mkbody" },
  /* row 5 */   {     (MR_String) "unmkbody" },
  /* row 6 */   {     (MR_String) "bitwise_complement" },
  /* row 7 */   {     (MR_String) "not" },
  /* row 8 */   {     (MR_String) "uint_bitwise_complement" },
  /* row 9 */   {     (MR_String) "hash_string" },
  /* row 10 */   {     (MR_String) "hash_string2" },
  /* row 11 */   {     (MR_String) "hash_string3" },
  /* row 12 */   {     (MR_String) "hash_string4" },
  /* row 13 */   {     (MR_String) "hash_string5" },
  /* row 14 */   {     (MR_String) "hash_string6" },
  /* row 15 */   {     (MR_String) "ite_num_protects" },
  /* row 16 */   {     (MR_String) "ite_num_snapshots" },
  /* row 17 */   {     (MR_String) "disj_num_protects" },
  /* row 18 */   {     (MR_String) "disj_num_snapshots" },
  /* row 19 */   {     (MR_String) "commit_num_entries" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_8_8;
        MR_String ll_backend__opt_debug__V_9_9;
        MR_String ll_backend__opt_debug__V_11_11;
        MR_Word ll_backend__opt_debug__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
        MR_String ll_backend__opt_debug__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
        MR_String ll_backend__opt_debug__V_20_20;
        MR_String ll_backend__opt_debug__V_21_21;
        MR_String ll_backend__opt_debug__V_23_23;
        MR_String ll_backend__opt_debug__V_24_24;
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

        {
          ll_backend__opt_debug__V_20_20 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_13);
        }
        switch (ll_backend__opt_debug__Dummy_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__V_24_24 = (MR_String) " (dummy)";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__V_24_24 = (MR_String) "";
            break;
        }
        {
          ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_17, ll_backend__opt_debug__V_24_24);
        }
        {
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_23_23);
        }
        {
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, ll_backend__opt_debug__V_21_21);
        }
        {
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
        {
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_8_8;
        MR_String ll_backend__opt_debug__V_9_9;
        MR_String ll_backend__opt_debug__V_11_11;
        MR_String ll_backend__opt_debug__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
        MR_Word ll_backend__opt_debug__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
        MR_String ll_backend__opt_debug__V_20_20;
        MR_String ll_backend__opt_debug__V_21_21;
        MR_String ll_backend__opt_debug__V_22_22;
        MR_String ll_backend__opt_debug__V_24_24;
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

        switch (ll_backend__opt_debug__Dummy_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__V_21_21 = (MR_String) " (dummy)";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__V_21_21 = (MR_String) "";
            break;
        }
        {
          ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_17);
        }
        {
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_24_24);
        }
        {
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, ll_backend__opt_debug__V_22_22);
        }
        {
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_13, ll_backend__opt_debug__V_20_20);
        }
        {
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
        {
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "affects_liveness";
        break;
      case (MR_Integer) 2:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "default_affects_liveness";
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "does_not_affect_liveness";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Comp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Comps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_8_8;
        MR_String ll_backend__opt_debug__V_9_9;

        switch (MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__V_8_8 = (MR_String) "";
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_debug__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

              {
                ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_11);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_debug__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

              {
                ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Outputs_13);
              }
            }
            break;
          case (MR_Integer) 3:
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ll_backend__opt_debug__AL_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
                  MR_String ll_backend__opt_debug__Code_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));
                  MR_Word ll_backend__opt_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));

                  ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_17, (MR_String) "") == 0);
                  if (ll_backend__opt_debug__succeeded)
                    {
                      MR_String ll_backend__opt_debug__V_19_19;
                      MR_String ll_backend__opt_debug__V_20_20;

                      switch (ll_backend__opt_debug__AL_16) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__opt_debug__V_20_20 = (MR_String) "affects_liveness";
                          break;
                        case (MR_Integer) 2:
                          ll_backend__opt_debug__V_20_20 = (MR_String) "default_affects_liveness";
                          break;
                        case (MR_Integer) 1:
                          ll_backend__opt_debug__V_20_20 = (MR_String) "does_not_affect_liveness";
                          break;
                      }
                      {
                        ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, (MR_String) "\n");
                      }
                      {
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty user_code: ", ll_backend__opt_debug__V_19_19);
                      }
                    }
                  else
                    {
                      MR_String ll_backend__opt_debug__V_23_23;
                      MR_String ll_backend__opt_debug__V_24_24;
                      MR_String ll_backend__opt_debug__V_25_25;
                      MR_String ll_backend__opt_debug__V_27_27;

                      switch (ll_backend__opt_debug__AL_16) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__opt_debug__V_24_24 = (MR_String) "affects_liveness";
                          break;
                        case (MR_Integer) 2:
                          ll_backend__opt_debug__V_24_24 = (MR_String) "default_affects_liveness";
                          break;
                        case (MR_Integer) 1:
                          ll_backend__opt_debug__V_24_24 = (MR_String) "does_not_affect_liveness";
                          break;
                      }
                      {
                        ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_17, (MR_String) "\n");
                      }
                      {
                        ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_27_27);
                      }
                      {
                        ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, ll_backend__opt_debug__V_25_25);
                      }
                      {
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "user_code: ", ll_backend__opt_debug__V_23_23);
                      }
                    }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ll_backend__opt_debug__AL_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
                  MR_String ll_backend__opt_debug__Code_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 4)));
                  MR_Word ll_backend__opt_debug__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
                  MR_Word ll_backend__opt_debug__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));

                  ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_33, (MR_String) "") == 0);
                  if (ll_backend__opt_debug__succeeded)
                    {
                      MR_String ll_backend__opt_debug__V_35_35;
                      MR_String ll_backend__opt_debug__V_36_36;

                      switch (ll_backend__opt_debug__AL_31) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__opt_debug__V_36_36 = (MR_String) "affects_liveness";
                          break;
                        case (MR_Integer) 2:
                          ll_backend__opt_debug__V_36_36 = (MR_String) "default_affects_liveness";
                          break;
                        case (MR_Integer) 1:
                          ll_backend__opt_debug__V_36_36 = (MR_String) "does_not_affect_liveness";
                          break;
                      }
                      {
                        ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_36_36, (MR_String) "\n");
                      }
                      {
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty raw_code: ", ll_backend__opt_debug__V_35_35);
                      }
                    }
                  else
                    {
                      MR_String ll_backend__opt_debug__V_39_39;
                      MR_String ll_backend__opt_debug__V_40_40;
                      MR_String ll_backend__opt_debug__V_41_41;
                      MR_String ll_backend__opt_debug__V_43_43;

                      switch (ll_backend__opt_debug__AL_31) {
                        default: /*NOTREACHED*/ MR_assert(0);
                        case (MR_Integer) 0:
                          ll_backend__opt_debug__V_40_40 = (MR_String) "affects_liveness";
                          break;
                        case (MR_Integer) 2:
                          ll_backend__opt_debug__V_40_40 = (MR_String) "default_affects_liveness";
                          break;
                        case (MR_Integer) 1:
                          ll_backend__opt_debug__V_40_40 = (MR_String) "does_not_affect_liveness";
                          break;
                      }
                      {
                        ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_33, (MR_String) "\n");
                      }
                      {
                        ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_43_43);
                      }
                      {
                        ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, ll_backend__opt_debug__V_41_41);
                      }
                      {
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "raw_code:\n", ll_backend__opt_debug__V_39_39);
                      }
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ll_backend__opt_debug__Label_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
                  MR_String ll_backend__opt_debug__V_48_48;
                  MR_String ll_backend__opt_debug__V_49_49;

                  {
                    ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_46);
                  }
                  {
                    ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) "\n");
                  }
                  {
                    ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "fail to ", ll_backend__opt_debug__V_48_48);
                  }
                }
                break;
              case (MR_Integer) 3:
                ll_backend__opt_debug__V_8_8 = (MR_String) "<alloc_id>";
                break;
            }
            break;
        }
        {
          ll_backend__opt_debug__V_9_9 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Comps_7);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Decl_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Decls_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_5_5;
        MR_String ll_backend__opt_debug__V_6_6;
        MR_String ll_backend__opt_debug__TypeStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 2)));
        MR_String ll_backend__opt_debug__V_11_11;
        MR_String ll_backend__opt_debug__V_12_12;
        MR_String ll_backend__opt_debug__V_14_14;
        MR_Word ll_backend__opt_debug___MerType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 0)));

        {
          ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_9, (MR_String) "\n");
        }
        {
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_14_14);
        }
        {
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypeStr_8, ll_backend__opt_debug__V_12_12);
        }
        {
          ll_backend__opt_debug__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "decl ", ll_backend__opt_debug__V_11_11);
        }
        {
          ll_backend__opt_debug__V_6_6 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_4);
        }
        {
          ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_5_5, ll_backend__opt_debug__V_6_6);
        }
      }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_use_atomic_alloc";
        break;
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_use_atomic_alloc";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_duplicate";
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_duplicate";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
  MR_String ll_backend__opt_debug__Msg_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    switch (ll_backend__opt_debug__HeadVar__2_2) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " no\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " yes\n");
          }
        }
        break;
    }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
  MR_String ll_backend__opt_debug__HeadVar__1_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__4_4;

    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
        MR_String ll_backend__opt_debug__V_10_10;
        MR_String ll_backend__opt_debug__V_12_12;
        MR_String ll_backend__opt_debug__V_13_13;

        {
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Label_9);
        }
        {
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, (MR_String) "\n");
        }
        {
          ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_12_12);
        }
        {
          ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__V_10_10);
        }
      }
    return ll_backend__opt_debug__HeadVar__4_4;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_call_mercury";
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "will_not_call_mercury";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;
    MR_Word ll_backend__opt_debug__StackId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 0)));
    MR_Integer ll_backend__opt_debug__FirstSlot_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 1)));
    MR_Integer ll_backend__opt_debug__LastSlot_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 2)));

    switch (ll_backend__opt_debug__StackId_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ll_backend__opt_debug__V_15_15;
          MR_String ll_backend__opt_debug__V_16_16;
          MR_String ll_backend__opt_debug__V_17_17;
          MR_String ll_backend__opt_debug__V_19_19;

          {
            ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
          }
          {
            ll_backend__opt_debug__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
          }
          {
            ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_19_19);
          }
          {
            ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "detstack slots ", ll_backend__opt_debug__V_15_15);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__opt_debug__V_9_9;
          MR_String ll_backend__opt_debug__V_10_10;
          MR_String ll_backend__opt_debug__V_11_11;
          MR_String ll_backend__opt_debug__V_13_13;

          {
            ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
          }
          {
            ll_backend__opt_debug__V_13_13 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
          }
          {
            ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_13_13);
          }
          {
            ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "nondetstack slots ", ll_backend__opt_debug__V_9_9);
          }
        }
        break;
    }
    return ll_backend__opt_debug__Str_4;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
  MR_Word ll_backend__opt_debug__RttiProcLabel_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;
    MR_Word ll_backend__opt_debug__V_4_4;

    {
      ll_backend__opt_debug__V_4_4 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__opt_debug__RttiProcLabel_3);
    }
    {
      ll_backend__opt_debug__HeadVar__2_2 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__V_4_4);
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_String ll_backend__opt_debug__Prefix_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__4_4;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Lvallist_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_11_11;
        MR_String ll_backend__opt_debug__V_12_12;
        MR_String ll_backend__opt_debug__V_13_13;

        {
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_8);
        }
        {
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lvallist_9, (MR_String) " ");
        }
        {
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
        {
          ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Prefix_3, ll_backend__opt_debug__V_11_11);
        }
      }
    return ll_backend__opt_debug__HeadVar__4_4;
  }
}

static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
  MR_Char ll_backend__opt_debug__C_4,
  MR_String ll_backend__opt_debug__STATE_VARIABLE_Str_0_6,
  MR_String * ll_backend__opt_debug__STATE_VARIABLE_Str_7)
{
  {
    MR_bool ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__C_4 == (MR_Char) 10);

    if (ll_backend__opt_debug__succeeded)
      {
        {
          *ll_backend__opt_debug__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__STATE_VARIABLE_Str_0_6, (MR_String) "\n\t% ");
        }
      }
    else
      {
        MR_String ll_backend__opt_debug__V_11_11;

        {
          ll_backend__opt_debug__V_11_11 = mercury__string__char_to_string_1_f_0(ll_backend__opt_debug__C_4);
        }
        {
          *ll_backend__opt_debug__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__STATE_VARIABLE_Str_0_6, ll_backend__opt_debug__V_11_11);
        }
      }
  }
}

static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
  MR_Char ll_backend__opt_debug__C_4)
{
  {
    MR_bool ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__C_4 == (MR_Char) 10);

    if (ll_backend__opt_debug__succeeded)
      {
        {
          mercury__io__write_string_3_p_0((MR_String) "\n\t% ");
        }
      }
    else
      {
        mercury__io__write_char_3_p_0(ll_backend__opt_debug__C_4);
      }
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstrs_3_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__4_4;

    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_11_11;
        MR_String ll_backend__opt_debug__V_12_12;

        {
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_fullinstr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instr_9);
        }
        {
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
        {
          ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_11_11, ll_backend__opt_debug__V_12_12);
        }
      }
    return ll_backend__opt_debug__HeadVar__4_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstr_3_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_5,
  MR_Word ll_backend__opt_debug__AutoComments_6,
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_9;
    MR_Word ll_backend__opt_debug__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
    MR_String ll_backend__opt_debug__Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));

    switch (ll_backend__opt_debug__AutoComments_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ll_backend__opt_debug__V_15_15;

          {
            ll_backend__opt_debug__V_15_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
          }
          {
            ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) "\n");
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__opt_debug__V_10_10;
          MR_String ll_backend__opt_debug__V_11_11;
          MR_String ll_backend__opt_debug__V_13_13;

          {
            ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
          }
          {
            ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_8, (MR_String) "\n");
          }
          {
            ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ll_backend__opt_debug__V_13_13);
          }
          {
            ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
          }
        }
        break;
    }
    return ll_backend__opt_debug__Str_9;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_instr_3_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_5,
  MR_Word ll_backend__opt_debug__AutoComments_6,
  MR_Word ll_backend__opt_debug__Instr_7)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_8;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__Instr_7)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_8 = (MR_String) "prune_ticket";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_8 = (MR_String) "discard_ticket";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__opt_debug__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_399_399;

          {
            ll_backend__opt_debug__V_399_399 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_9, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "comment(", ll_backend__opt_debug__V_399_399);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_debug__Livevals_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_395_395;
          MR_String ll_backend__opt_debug__V_396_396;

          {
            ll_backend__opt_debug__V_396_396 = ll_backend__opt_debug__dump_livevals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Livevals_10);
          }
          {
            ll_backend__opt_debug__V_395_395 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_396_396, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "livevals(", ll_backend__opt_debug__V_395_395);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__opt_debug__RTemps_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__FTemps_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__opt_debug__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__V_383_383;
              MR_String ll_backend__opt_debug__V_384_384;
              MR_String ll_backend__opt_debug__V_385_385;
              MR_String ll_backend__opt_debug__V_387_387;
              MR_String ll_backend__opt_debug__V_388_388;
              MR_String ll_backend__opt_debug__V_389_389;
              MR_String ll_backend__opt_debug__V_391_391;
              MR_String ll_backend__opt_debug__V_392_392;

              {
                ll_backend__opt_debug__V_384_384 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__RTemps_11);
              }
              {
                ll_backend__opt_debug__V_388_388 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FTemps_12);
              }
              {
                ll_backend__opt_debug__V_392_392 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Instrs_13);
              }
              {
                ll_backend__opt_debug__V_391_391 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_392_392, (MR_String) "\t)");
              }
              {
                ll_backend__opt_debug__V_389_389 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", ll_backend__opt_debug__V_391_391);
              }
              {
                ll_backend__opt_debug__V_387_387 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_388_388, ll_backend__opt_debug__V_389_389);
              }
              {
                ll_backend__opt_debug__V_385_385 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_387_387);
              }
              {
                ll_backend__opt_debug__V_383_383 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_384_384, ll_backend__opt_debug__V_385_385);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "block(", ll_backend__opt_debug__V_383_383);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_debug__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_378_378;
              MR_String ll_backend__opt_debug__V_379_379;
              MR_String ll_backend__opt_debug__V_381_381;

              {
                ll_backend__opt_debug__V_378_378 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_14);
              }
              {
                ll_backend__opt_debug__V_381_381 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_15);
              }
              {
                ll_backend__opt_debug__V_379_379 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_381_381);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_378_378, ll_backend__opt_debug__V_379_379);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__V_373_373;
              MR_String ll_backend__opt_debug__V_374_374;
              MR_String ll_backend__opt_debug__V_375_375;
              MR_String ll_backend__opt_debug__V_377_377;
              MR_Word ll_backend__opt_debug__Lval_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__Rval_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_374_374 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_401);
              }
              {
                ll_backend__opt_debug__V_377_377 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_402);
              }
              {
                ll_backend__opt_debug__V_375_375 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_377_377);
              }
              {
                ll_backend__opt_debug__V_373_373 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_374_374, ll_backend__opt_debug__V_375_375);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "keep ", ll_backend__opt_debug__V_373_373);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_debug__Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__ReturnLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__opt_debug__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
              MR_String ll_backend__opt_debug__CallModelStr_22;
              MR_String ll_backend__opt_debug__V_362_362;
              MR_String ll_backend__opt_debug__V_363_363;
              MR_String ll_backend__opt_debug__V_364_364;
              MR_String ll_backend__opt_debug__V_366_366;
              MR_String ll_backend__opt_debug__V_367_367;
              MR_String ll_backend__opt_debug__V_368_368;
              MR_String ll_backend__opt_debug__V_370_370;
              MR_Word ll_backend__opt_debug___LiveInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__opt_debug___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__opt_debug___GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

              switch (MR_tag((MR_Word) ll_backend__opt_debug__CallModel_21)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word ll_backend__opt_debug__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

                    switch (ll_backend__opt_debug__V_433_433) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det";
                        break;
                      case (MR_Integer) 0:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det_no_lco";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__opt_debug__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

                    switch (ll_backend__opt_debug__V_435_435) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet";
                        break;
                      case (MR_Integer) 0:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet_no_lco";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__opt_debug__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

                    switch (ll_backend__opt_debug__V_434_434) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet checked_tail_call";
                        break;
                      case (MR_Integer) 0:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet no_tail_call";
                        break;
                      case (MR_Integer) 2:
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet unchecked_tail_call";
                        break;
                    }
                  }
                  break;
              }
              {
                ll_backend__opt_debug__V_363_363 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Callee_16);
              }
              {
                ll_backend__opt_debug__V_367_367 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ReturnLabel_17);
              }
              {
                ll_backend__opt_debug__V_370_370 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__CallModelStr_22, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_368_368 = mercury__string__f_43_43_2_f_0((MR_String) ", ..., ", ll_backend__opt_debug__V_370_370);
              }
              {
                ll_backend__opt_debug__V_366_366 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_367_367, ll_backend__opt_debug__V_368_368);
              }
              {
                ll_backend__opt_debug__V_364_364 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_366_366);
              }
              {
                ll_backend__opt_debug__V_362_362 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_363_363, ll_backend__opt_debug__V_364_364);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "call(", ll_backend__opt_debug__V_362_362);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_debug__FrameInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__MaybeRedoip_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__R_str_26;

              if ((ll_backend__opt_debug__MaybeRedoip_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_debug__R_str_26 = (MR_String) "no_redoip";
              else
                {
                  MR_Word ll_backend__opt_debug__Redoip_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRedoip_24, (MR_Integer) 0)));

                  {
                    ll_backend__opt_debug__R_str_26 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Redoip_25);
                  }
                }
              if (((MR_tag((MR_Word) ll_backend__opt_debug__FrameInfo_23)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_String ll_backend__opt_debug__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));
                  MR_Integer ll_backend__opt_debug__Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 1)));
                  MR_String ll_backend__opt_debug__V_345_345;
                  MR_String ll_backend__opt_debug__V_346_346;
                  MR_String ll_backend__opt_debug__V_348_348;
                  MR_String ll_backend__opt_debug__V_349_349;
                  MR_String ll_backend__opt_debug__V_350_350;
                  MR_String ll_backend__opt_debug__V_352_352;

                  {
                    ll_backend__opt_debug__V_349_349 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_28);
                  }
                  {
                    ll_backend__opt_debug__V_352_352 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                  }
                  {
                    ll_backend__opt_debug__V_350_350 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_352_352);
                  }
                  {
                    ll_backend__opt_debug__V_348_348 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_349_349, ll_backend__opt_debug__V_350_350);
                  }
                  {
                    ll_backend__opt_debug__V_346_346 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_348_348);
                  }
                  {
                    ll_backend__opt_debug__V_345_345 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Name_27, ll_backend__opt_debug__V_346_346);
                  }
                  {
                    ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkframe(", ll_backend__opt_debug__V_345_345);
                  }
                }
              else
                {
                  MR_Word ll_backend__opt_debug__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));

                  switch (ll_backend__opt_debug__Kind_29) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      {
                        MR_String ll_backend__opt_debug__V_339_339;

                        {
                          ll_backend__opt_debug__V_339_339 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                        }
                        {
                          ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkdettempframe(", ll_backend__opt_debug__V_339_339);
                        }
                      }
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_String ll_backend__opt_debug__V_342_342;

                        {
                          ll_backend__opt_debug__V_342_342 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                        }
                        {
                          ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mktempframe(", ll_backend__opt_debug__V_342_342);
                        }
                      }
                      break;
                  }
                }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_debug__Label_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_336_336;

              {
                ll_backend__opt_debug__V_336_336 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_30);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_336_336, (MR_String) ":");
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_Word ll_backend__opt_debug__CodeAddr_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_335_335;

              {
                ll_backend__opt_debug__V_335_335 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_31);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__opt_debug__V_335_335);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Word ll_backend__opt_debug__MaybeLabels_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_329_329;
              MR_String ll_backend__opt_debug__V_330_330;
              MR_String ll_backend__opt_debug__V_331_331;
              MR_String ll_backend__opt_debug__V_333_333;
              MR_Word ll_backend__opt_debug__Rval_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_330_330 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_403);
              }
              {
                ll_backend__opt_debug__V_333_333 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MaybeLabels_32);
              }
              {
                ll_backend__opt_debug__V_331_331 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__opt_debug__V_333_333);
              }
              {
                ll_backend__opt_debug__V_329_329 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_330_330, ll_backend__opt_debug__V_331_331);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "computed_goto ", ll_backend__opt_debug__V_329_329);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_Word ll_backend__opt_debug__AL_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__V_322_322;
              MR_String ll_backend__opt_debug__V_323_323;
              MR_String ll_backend__opt_debug__V_324_324;
              MR_String ll_backend__opt_debug__V_326_326;
              MR_Word ll_backend__opt_debug__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_323_323 = ll_backend__opt_debug__dump_affects_liveness_1_f_0(ll_backend__opt_debug__AL_33);
              }
              {
                ll_backend__opt_debug__V_326_326 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_35, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_324_324 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_326_326);
              }
              {
                ll_backend__opt_debug__V_322_322 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_323_323, ll_backend__opt_debug__V_324_324);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "arbitrary_c_code(", ll_backend__opt_debug__V_322_322);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_String ll_backend__opt_debug__V_316_316;
              MR_String ll_backend__opt_debug__V_317_317;
              MR_String ll_backend__opt_debug__V_318_318;
              MR_String ll_backend__opt_debug__V_320_320;
              MR_Word ll_backend__opt_debug__Rval_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__CodeAddr_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_317_317 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_404);
              }
              {
                ll_backend__opt_debug__V_320_320 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_405);
              }
              {
                ll_backend__opt_debug__V_318_318 = mercury__string__f_43_43_2_f_0((MR_String) ") goto ", ll_backend__opt_debug__V_320_320);
              }
              {
                ll_backend__opt_debug__V_316_316 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_317_317, ll_backend__opt_debug__V_318_318);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "if (", ll_backend__opt_debug__V_316_316);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__opt_debug__V_312_312;
              MR_String ll_backend__opt_debug__V_313_313;
              MR_Word ll_backend__opt_debug__Lval_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_313_313 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_406);
              }
              {
                ll_backend__opt_debug__V_312_312 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_313_313, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "save_maxfr(", ll_backend__opt_debug__V_312_312);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ll_backend__opt_debug__V_308_308;
              MR_String ll_backend__opt_debug__V_309_309;
              MR_Word ll_backend__opt_debug__Lval_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_309_309 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_407);
              }
              {
                ll_backend__opt_debug__V_308_308 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_309_309, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_maxfr(", ll_backend__opt_debug__V_308_308);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_Word ll_backend__opt_debug__MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__opt_debug__MaybeOffset_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__opt_debug__MayUseAtomic_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
              MR_Word ll_backend__opt_debug__MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
              MR_Word ll_backend__opt_debug__MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
              MR_String ll_backend__opt_debug__T_str_42;
              MR_String ll_backend__opt_debug__O_str_44;
              MR_String ll_backend__opt_debug__Region_str_46;
              MR_String ll_backend__opt_debug__Reuse_str_48;
              MR_String ll_backend__opt_debug__Flag_str_49;
              MR_String ll_backend__opt_debug__V_281_281;
              MR_String ll_backend__opt_debug__V_282_282;
              MR_String ll_backend__opt_debug__V_283_283;
              MR_String ll_backend__opt_debug__V_285_285;
              MR_String ll_backend__opt_debug__V_286_286;
              MR_String ll_backend__opt_debug__V_288_288;
              MR_String ll_backend__opt_debug__V_289_289;
              MR_String ll_backend__opt_debug__V_291_291;
              MR_String ll_backend__opt_debug__V_292_292;
              MR_String ll_backend__opt_debug__V_293_293;
              MR_String ll_backend__opt_debug__V_295_295;
              MR_String ll_backend__opt_debug__V_296_296;
              MR_String ll_backend__opt_debug__V_297_297;
              MR_String ll_backend__opt_debug__V_299_299;
              MR_String ll_backend__opt_debug__V_300_300;
              MR_String ll_backend__opt_debug__V_302_302;
              MR_String ll_backend__opt_debug__V_303_303;
              MR_String ll_backend__opt_debug__V_305_305;
              MR_Word ll_backend__opt_debug__Lval_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__Size_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__opt_debug__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

              if ((ll_backend__opt_debug__MaybeTag_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_debug__T_str_42 = (MR_String) "no";
              else
                {
                  MR_Integer ll_backend__opt_debug__Tag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_36, (MR_Integer) 0)));

                  {
                    mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Tag_43, &ll_backend__opt_debug__T_str_42);
                  }
                }
              if ((ll_backend__opt_debug__MaybeOffset_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_debug__O_str_44 = (MR_String) "no";
              else
                {
                  MR_Integer ll_backend__opt_debug__Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_37, (MR_Integer) 0)));

                  {
                    mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Offset_45, &ll_backend__opt_debug__O_str_44);
                  }
                }
              if ((ll_backend__opt_debug__MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_debug__Region_str_46 = (MR_String) "no";
              else
                {
                  MR_Word ll_backend__opt_debug__RegionRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRegionRval_40, (MR_Integer) 0)));

                  {
                    ll_backend__opt_debug__Region_str_46 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__RegionRval_47);
                  }
                }
              if ((ll_backend__opt_debug__MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  ll_backend__opt_debug__Reuse_str_48 = (MR_String) "no";
                  ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
                }
              else
                {
                  MR_Word ll_backend__opt_debug__ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 0)));
                  MR_Word ll_backend__opt_debug__MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 1)));

                  {
                    ll_backend__opt_debug__Reuse_str_48 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__ReuseRval_50);
                  }
                  if ((ll_backend__opt_debug__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
                  else
                    {
                      MR_Word ll_backend__opt_debug__FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeFlagLval_51, (MR_Integer) 0)));

                      {
                        ll_backend__opt_debug__Flag_str_49 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__FlagLval_52);
                      }
                    }
                }
              {
                ll_backend__opt_debug__V_282_282 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_408);
              }
              {
                ll_backend__opt_debug__V_292_292 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Size_409);
              }
              {
                ll_backend__opt_debug__V_296_296 = ll_backend__opt_debug__dump_may_use_atomic_1_f_0(ll_backend__opt_debug__MayUseAtomic_39);
              }
              {
                ll_backend__opt_debug__V_305_305 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Flag_str_49, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_303_303 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_305_305);
              }
              {
                ll_backend__opt_debug__V_302_302 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Reuse_str_48, ll_backend__opt_debug__V_303_303);
              }
              {
                ll_backend__opt_debug__V_300_300 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_302_302);
              }
              {
                ll_backend__opt_debug__V_299_299 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Region_str_46, ll_backend__opt_debug__V_300_300);
              }
              {
                ll_backend__opt_debug__V_297_297 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_299_299);
              }
              {
                ll_backend__opt_debug__V_295_295 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_296_296, ll_backend__opt_debug__V_297_297);
              }
              {
                ll_backend__opt_debug__V_293_293 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_295_295);
              }
              {
                ll_backend__opt_debug__V_291_291 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_292_292, ll_backend__opt_debug__V_293_293);
              }
              {
                ll_backend__opt_debug__V_289_289 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_291_291);
              }
              {
                ll_backend__opt_debug__V_288_288 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__O_str_44, ll_backend__opt_debug__V_289_289);
              }
              {
                ll_backend__opt_debug__V_286_286 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_288_288);
              }
              {
                ll_backend__opt_debug__V_285_285 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_42, ll_backend__opt_debug__V_286_286);
              }
              {
                ll_backend__opt_debug__V_283_283 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_285_285);
              }
              {
                ll_backend__opt_debug__V_281_281 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_282_282, ll_backend__opt_debug__V_283_283);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_hp(", ll_backend__opt_debug__V_281_281);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ll_backend__opt_debug__V_275_275;
              MR_String ll_backend__opt_debug__V_276_276;
              MR_Word ll_backend__opt_debug__Lval_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_276_276 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_410);
              }
              {
                ll_backend__opt_debug__V_275_275 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_276_276, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_hp(", ll_backend__opt_debug__V_275_275);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String ll_backend__opt_debug__V_271_271;
              MR_String ll_backend__opt_debug__V_272_272;
              MR_Word ll_backend__opt_debug__Rval_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_272_272 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_411);
              }
              {
                ll_backend__opt_debug__V_271_271 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_272_272, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_hp(", ll_backend__opt_debug__V_271_271);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String ll_backend__opt_debug__V_267_267;
              MR_String ll_backend__opt_debug__V_268_268;
              MR_Word ll_backend__opt_debug__Rval_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_268_268 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_412);
              }
              {
                ll_backend__opt_debug__V_267_267 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_268_268, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "free_heap(", ll_backend__opt_debug__V_267_267);
              }
            }
            break;
          case (MR_Integer) 16:
            {
              MR_Word ll_backend__opt_debug__StackId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_259_259;
              MR_String ll_backend__opt_debug__V_260_260;
              MR_String ll_backend__opt_debug__V_261_261;
              MR_String ll_backend__opt_debug__V_263_263;
              MR_String ll_backend__opt_debug__V_264_264;

              {
                ll_backend__opt_debug__V_260_260 = ll_backend__llds__region_stack_id_to_string_1_f_0(ll_backend__opt_debug__StackId_53);
              }
              {
                ll_backend__opt_debug__V_264_264 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_54);
              }
              {
                ll_backend__opt_debug__V_263_263 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_264_264, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_261_261 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_263_263);
              }
              {
                ll_backend__opt_debug__V_259_259 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_260_260, ll_backend__opt_debug__V_261_261);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "push_region_frame(", ll_backend__opt_debug__V_259_259);
              }
            }
            break;
          case (MR_Integer) 17:
            {
              MR_Word ll_backend__opt_debug__FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__IdRval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__opt_debug__NumLval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__opt_debug__AddrLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
              MR_String ll_backend__opt_debug__FillOpStr_59;
              MR_String ll_backend__opt_debug__V_240_240;
              MR_String ll_backend__opt_debug__V_241_241;
              MR_String ll_backend__opt_debug__V_243_243;
              MR_String ll_backend__opt_debug__V_244_244;
              MR_String ll_backend__opt_debug__V_245_245;
              MR_String ll_backend__opt_debug__V_247_247;
              MR_String ll_backend__opt_debug__V_248_248;
              MR_String ll_backend__opt_debug__V_249_249;
              MR_String ll_backend__opt_debug__V_251_251;
              MR_String ll_backend__opt_debug__V_252_252;
              MR_String ll_backend__opt_debug__V_253_253;
              MR_String ll_backend__opt_debug__V_255_255;
              MR_String ll_backend__opt_debug__V_256_256;
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_413 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ll_backend__opt_debug__FillOp_55)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__opt_debug__FillOp_55)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_protect";
                      break;
                    case (MR_Integer) 1:
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "semi_disj_protect";
                      break;
                    case (MR_Integer) 2:
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "disj_snapshot";
                      break;
                    case (MR_Integer) 3:
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "commit";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__opt_debug__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FillOp_55, (MR_Integer) 0)));

                    switch (ll_backend__opt_debug__V_436_436) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(not_removed_at_start_of_else)";
                        break;
                      case (MR_Integer) 0:
                        ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(removed_at_start_of_else)";
                        break;
                    }
                  }
                  break;
              }
              {
                ll_backend__opt_debug__V_244_244 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_413);
              }
              {
                ll_backend__opt_debug__V_248_248 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__IdRval_56);
              }
              {
                ll_backend__opt_debug__V_252_252 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__NumLval_57);
              }
              {
                ll_backend__opt_debug__V_256_256 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AddrLval_58);
              }
              {
                ll_backend__opt_debug__V_255_255 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_256_256, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_255_255);
              }
              {
                ll_backend__opt_debug__V_251_251 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_252_252, ll_backend__opt_debug__V_253_253);
              }
              {
                ll_backend__opt_debug__V_249_249 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_251_251);
              }
              {
                ll_backend__opt_debug__V_247_247 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_248_248, ll_backend__opt_debug__V_249_249);
              }
              {
                ll_backend__opt_debug__V_245_245 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_247_247);
              }
              {
                ll_backend__opt_debug__V_243_243 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_244_244, ll_backend__opt_debug__V_245_245);
              }
              {
                ll_backend__opt_debug__V_241_241 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_243_243);
              }
              {
                ll_backend__opt_debug__V_240_240 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__FillOpStr_59, ll_backend__opt_debug__V_241_241);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_fill_frame(", ll_backend__opt_debug__V_240_240);
              }
            }
            break;
          case (MR_Integer) 18:
            {
              MR_Word ll_backend__opt_debug__SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__SetOpStr_62 = ((&ll_backend__opt_debug_vector_common_6[15 + ll_backend__opt_debug__SetOp_60]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
              MR_String ll_backend__opt_debug__V_227_227;
              MR_String ll_backend__opt_debug__V_228_228;
              MR_String ll_backend__opt_debug__V_230_230;
              MR_String ll_backend__opt_debug__V_231_231;
              MR_String ll_backend__opt_debug__V_232_232;
              MR_String ll_backend__opt_debug__V_234_234;
              MR_String ll_backend__opt_debug__V_235_235;
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_231_231 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_414);
              }
              {
                ll_backend__opt_debug__V_235_235 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ValueRval_61);
              }
              {
                ll_backend__opt_debug__V_234_234 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_235_235, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_232_232 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_234_234);
              }
              {
                ll_backend__opt_debug__V_230_230 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_231_231, ll_backend__opt_debug__V_232_232);
              }
              {
                ll_backend__opt_debug__V_228_228 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_230_230);
              }
              {
                ll_backend__opt_debug__V_227_227 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SetOpStr_62, ll_backend__opt_debug__V_228_228);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_set_fixed_slot(", ll_backend__opt_debug__V_227_227);
              }
            }
            break;
          case (MR_Integer) 19:
            {
              MR_Word ll_backend__opt_debug__UseOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__UseOpStr_64;
              MR_String ll_backend__opt_debug__V_220_220;
              MR_String ll_backend__opt_debug__V_221_221;
              MR_String ll_backend__opt_debug__V_223_223;
              MR_String ll_backend__opt_debug__V_224_224;
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              switch (MR_tag((MR_Word) ll_backend__opt_debug__UseOp_63)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(ll_backend__opt_debug__UseOp_63)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_nondet_cond_fail";
                      break;
                    case (MR_Integer) 1:
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_later";
                      break;
                    case (MR_Integer) 2:
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_last";
                      break;
                    case (MR_Integer) 3:
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_nonlast_semi_commit";
                      break;
                    case (MR_Integer) 4:
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_success";
                      break;
                    case (MR_Integer) 5:
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_failure";
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word ll_backend__opt_debug__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

                    switch (ll_backend__opt_debug__V_438_438) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(nondet)";
                        break;
                      case (MR_Integer) 0:
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(semidet)";
                        break;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word ll_backend__opt_debug__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

                    switch (ll_backend__opt_debug__V_437_437) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 1:
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(nondet)";
                        break;
                      case (MR_Integer) 0:
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(semidet)";
                        break;
                    }
                  }
                  break;
              }
              {
                ll_backend__opt_debug__V_224_224 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_415);
              }
              {
                ll_backend__opt_debug__V_223_223 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_224_224, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_221_221 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_223_223);
              }
              {
                ll_backend__opt_debug__V_220_220 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__UseOpStr_64, ll_backend__opt_debug__V_221_221);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "use_and_maybe_pop_region_frame(", ll_backend__opt_debug__V_220_220);
              }
            }
            break;
          case (MR_Integer) 20:
            {
              MR_String ll_backend__opt_debug__V_212_212;
              MR_String ll_backend__opt_debug__V_213_213;
              MR_Word ll_backend__opt_debug__Lval_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_213_213 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_416);
              }
              {
                ll_backend__opt_debug__V_212_212 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_213_213, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "store_ticket(", ll_backend__opt_debug__V_212_212);
              }
            }
            break;
          case (MR_Integer) 21:
            {
              MR_String ll_backend__opt_debug__V_208_208;
              MR_String ll_backend__opt_debug__V_209_209;
              MR_Word ll_backend__opt_debug__Rval_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug___Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_209_209 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_417);
              }
              {
                ll_backend__opt_debug__V_208_208 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_209_209, (MR_String) ", _)");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "reset_ticket(", ll_backend__opt_debug__V_208_208);
              }
            }
            break;
          case (MR_Integer) 22:
            {
              MR_String ll_backend__opt_debug__V_204_204;
              MR_String ll_backend__opt_debug__V_205_205;
              MR_Word ll_backend__opt_debug__Lval_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_205_205 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_418);
              }
              {
                ll_backend__opt_debug__V_204_204 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_205_205, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_ticket_stack(", ll_backend__opt_debug__V_204_204);
              }
            }
            break;
          case (MR_Integer) 23:
            {
              MR_String ll_backend__opt_debug__V_200_200;
              MR_String ll_backend__opt_debug__V_201_201;
              MR_Word ll_backend__opt_debug__Rval_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_201_201 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_419);
              }
              {
                ll_backend__opt_debug__V_200_200 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_201_201, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "prune_tickets_to(", ll_backend__opt_debug__V_200_200);
              }
            }
            break;
          case (MR_Integer) 24:
            {
              MR_String ll_backend__opt_debug__V_192_192;
              MR_String ll_backend__opt_debug__V_193_193;
              MR_String ll_backend__opt_debug__V_194_194;
              MR_String ll_backend__opt_debug__V_196_196;
              MR_String ll_backend__opt_debug__V_197_197;
              MR_Integer ll_backend__opt_debug__Size_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__Kind_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_193_193 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_420);
              }
              {
                ll_backend__opt_debug__V_197_197 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(ll_backend__opt_debug__Kind_421);
              }
              {
                ll_backend__opt_debug__V_196_196 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_197_197, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_194_194 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_196_196);
              }
              {
                ll_backend__opt_debug__V_192_192 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_193_193, ll_backend__opt_debug__V_194_194);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_sp(", ll_backend__opt_debug__V_192_192);
              }
            }
            break;
          case (MR_Integer) 25:
            {
              MR_String ll_backend__opt_debug__V_188_188;
              MR_String ll_backend__opt_debug__V_189_189;
              MR_Integer ll_backend__opt_debug__Size_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_189_189 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_422);
              }
              {
                ll_backend__opt_debug__V_188_188 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_189_189, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp(", ll_backend__opt_debug__V_188_188);
              }
            }
            break;
          case (MR_Integer) 26:
            {
              MR_String ll_backend__opt_debug__V_184_184;
              MR_String ll_backend__opt_debug__V_185_185;
              MR_Integer ll_backend__opt_debug__Size_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_185_185 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_423);
              }
              {
                ll_backend__opt_debug__V_184_184 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_185_185, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp_and_return(", ll_backend__opt_debug__V_184_184);
              }
            }
            break;
          case (MR_Integer) 27:
            {
              MR_Word ll_backend__opt_debug__Decls_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__Comps_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_Word ll_backend__opt_debug__MCM_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__opt_debug__MFNL_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
              MR_Word ll_backend__opt_debug__MFL_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
              MR_Word ll_backend__opt_debug__MFOL_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
              MR_Word ll_backend__opt_debug__MNF_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
              MR_Word ll_backend__opt_debug__MDL_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
              MR_Word ll_backend__opt_debug__SSR_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 9)));
              MR_Word ll_backend__opt_debug__MD_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 10)));
              MR_String ll_backend__opt_debug__V_148_148;
              MR_String ll_backend__opt_debug__V_150_150;
              MR_String ll_backend__opt_debug__V_151_151;
              MR_String ll_backend__opt_debug__V_152_152;
              MR_String ll_backend__opt_debug__V_154_154;
              MR_String ll_backend__opt_debug__V_155_155;
              MR_String ll_backend__opt_debug__V_156_156;
              MR_String ll_backend__opt_debug__V_157_157;
              MR_String ll_backend__opt_debug__V_158_158;
              MR_String ll_backend__opt_debug__V_160_160;
              MR_String ll_backend__opt_debug__V_161_161;
              MR_String ll_backend__opt_debug__V_163_163;
              MR_String ll_backend__opt_debug__V_164_164;
              MR_String ll_backend__opt_debug__V_166_166;
              MR_String ll_backend__opt_debug__V_167_167;
              MR_String ll_backend__opt_debug__V_169_169;
              MR_String ll_backend__opt_debug__V_170_170;
              MR_String ll_backend__opt_debug__V_172_172;
              MR_String ll_backend__opt_debug__V_173_173;
              MR_String ll_backend__opt_debug__V_175_175;
              MR_String ll_backend__opt_debug__V_176_176;
              MR_String ll_backend__opt_debug__V_178_178;
              MR_String ll_backend__opt_debug__V_179_179;

              {
                ll_backend__opt_debug__V_151_151 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_67);
              }
              {
                ll_backend__opt_debug__V_155_155 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Comps_68);
              }
              {
                ll_backend__opt_debug__V_157_157 = ll_backend__opt_debug__dump_may_call_mercury_1_f_0(ll_backend__opt_debug__MCM_69);
              }
              {
                ll_backend__opt_debug__V_161_161 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix nolayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFNL_70);
              }
              {
                ll_backend__opt_debug__V_164_164 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix layout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFL_71);
              }
              {
                ll_backend__opt_debug__V_167_167 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix onlylayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFOL_72);
              }
              {
                ll_backend__opt_debug__V_170_170 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "nofix:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MNF_73);
              }
              {
                ll_backend__opt_debug__V_173_173 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "maybe def:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MDL_74);
              }
              {
                ll_backend__opt_debug__V_176_176 = ll_backend__opt_debug__dump_bool_msg_2_f_0((MR_String) "stack slot ref:", ll_backend__opt_debug__SSR_75);
              }
              {
                ll_backend__opt_debug__V_179_179 = ll_backend__opt_debug__dump_may_duplicate_1_f_0(ll_backend__opt_debug__MD_76);
              }
              {
                ll_backend__opt_debug__V_178_178 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_179_179, (MR_String) "\n)");
              }
              {
                ll_backend__opt_debug__V_175_175 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_176_176, ll_backend__opt_debug__V_178_178);
              }
              {
                ll_backend__opt_debug__V_172_172 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_173_173, ll_backend__opt_debug__V_175_175);
              }
              {
                ll_backend__opt_debug__V_169_169 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_170_170, ll_backend__opt_debug__V_172_172);
              }
              {
                ll_backend__opt_debug__V_166_166 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_167_167, ll_backend__opt_debug__V_169_169);
              }
              {
                ll_backend__opt_debug__V_163_163 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_164_164, ll_backend__opt_debug__V_166_166);
              }
              {
                ll_backend__opt_debug__V_160_160 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_161_161, ll_backend__opt_debug__V_163_163);
              }
              {
                ll_backend__opt_debug__V_158_158 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_160_160);
              }
              {
                ll_backend__opt_debug__V_156_156 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_157_157, ll_backend__opt_debug__V_158_158);
              }
              {
                ll_backend__opt_debug__V_154_154 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_155_155, ll_backend__opt_debug__V_156_156);
              }
              {
                ll_backend__opt_debug__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) "components:\n", ll_backend__opt_debug__V_154_154);
              }
              {
                ll_backend__opt_debug__V_150_150 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_151_151, ll_backend__opt_debug__V_152_152);
              }
              {
                ll_backend__opt_debug__V_148_148 = mercury__string__f_43_43_2_f_0((MR_String) "declarations:\n", ll_backend__opt_debug__V_150_150);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_proc_code(\n", ll_backend__opt_debug__V_148_148);
              }
            }
            break;
          case (MR_Integer) 28:
            {
              MR_Integer ll_backend__opt_debug__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_debug__TSStringIndex_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__V_136_136;
              MR_String ll_backend__opt_debug__V_137_137;
              MR_String ll_backend__opt_debug__V_138_138;
              MR_String ll_backend__opt_debug__V_140_140;
              MR_String ll_backend__opt_debug__V_141_141;
              MR_String ll_backend__opt_debug__V_142_142;
              MR_String ll_backend__opt_debug__V_144_144;
              MR_String ll_backend__opt_debug__V_145_145;
              MR_Word ll_backend__opt_debug__Lval_424 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_137_137 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_424);
              }
              {
                ll_backend__opt_debug__V_141_141 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_77);
              }
              {
                ll_backend__opt_debug__V_145_145 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TSStringIndex_78);
              }
              {
                ll_backend__opt_debug__V_144_144 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_145_145, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_144_144);
              }
              {
                ll_backend__opt_debug__V_140_140 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_141_141, ll_backend__opt_debug__V_142_142);
              }
              {
                ll_backend__opt_debug__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_140_140);
              }
              {
                ll_backend__opt_debug__V_136_136 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_137_137, ll_backend__opt_debug__V_138_138);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "init_sync_term(", ll_backend__opt_debug__V_136_136);
              }
            }
            break;
          case (MR_Integer) 29:
            {
              MR_Word ll_backend__opt_debug__Child_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_128_128;
              MR_String ll_backend__opt_debug__V_129_129;
              MR_String ll_backend__opt_debug__V_130_130;
              MR_String ll_backend__opt_debug__V_131_131;
              MR_Word ll_backend__opt_debug__Lval_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_129_129 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_425);
              }
              {
                ll_backend__opt_debug__V_131_131 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Child_79);
              }
              {
                ll_backend__opt_debug__V_130_130 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_131_131, (MR_String) ", )");
              }
              {
                ll_backend__opt_debug__V_128_128 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_129_129, ll_backend__opt_debug__V_130_130);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "fork_new_child(", ll_backend__opt_debug__V_128_128);
              }
            }
            break;
          case (MR_Integer) 30:
            {
              MR_String ll_backend__opt_debug__V_120_120;
              MR_String ll_backend__opt_debug__V_121_121;
              MR_String ll_backend__opt_debug__V_122_122;
              MR_String ll_backend__opt_debug__V_124_124;
              MR_String ll_backend__opt_debug__V_125_125;
              MR_Word ll_backend__opt_debug__Lval_426 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__Label_427 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_121_121 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_426);
              }
              {
                ll_backend__opt_debug__V_125_125 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_427);
              }
              {
                ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_124_124);
              }
              {
                ll_backend__opt_debug__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_121_121, ll_backend__opt_debug__V_122_122);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "join_and_continue(", ll_backend__opt_debug__V_120_120);
              }
            }
            break;
          case (MR_Integer) 31:
            {
              MR_Integer ll_backend__opt_debug__NumSlots_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__LCLval_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_112_112;
              MR_String ll_backend__opt_debug__V_113_113;
              MR_String ll_backend__opt_debug__V_114_114;
              MR_String ll_backend__opt_debug__V_116_116;
              MR_String ll_backend__opt_debug__V_117_117;

              {
                ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumSlots_80);
              }
              {
                ll_backend__opt_debug__V_117_117 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCLval_81);
              }
              {
                ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_116_116);
              }
              {
                ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, ll_backend__opt_debug__V_114_114);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_create_loop_control(", ll_backend__opt_debug__V_112_112);
              }
            }
            break;
          case (MR_Integer) 32:
            {
              MR_Word ll_backend__opt_debug__LCRval_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__LCSLval_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_104_104;
              MR_String ll_backend__opt_debug__V_105_105;
              MR_String ll_backend__opt_debug__V_106_106;
              MR_String ll_backend__opt_debug__V_107_107;
              MR_String ll_backend__opt_debug__V_108_108;
              MR_String ll_backend__opt_debug__V_109_109;
              MR_Word ll_backend__opt_debug__Label_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));

              {
                ll_backend__opt_debug__V_105_105 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_82);
              }
              {
                ll_backend__opt_debug__V_107_107 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSLval_83);
              }
              {
                ll_backend__opt_debug__V_109_109 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_428);
              }
              {
                ll_backend__opt_debug__V_108_108 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_109_109, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_107_107, ll_backend__opt_debug__V_108_108);
              }
              {
                ll_backend__opt_debug__V_104_104 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_105_105, ll_backend__opt_debug__V_106_106);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_wait_free_slot(", ll_backend__opt_debug__V_104_104);
              }
            }
            break;
          case (MR_Integer) 33:
            {
              MR_Word ll_backend__opt_debug__LCSRval_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_92_92;
              MR_String ll_backend__opt_debug__V_93_93;
              MR_String ll_backend__opt_debug__V_94_94;
              MR_String ll_backend__opt_debug__V_96_96;
              MR_String ll_backend__opt_debug__V_97_97;
              MR_String ll_backend__opt_debug__V_98_98;
              MR_String ll_backend__opt_debug__V_100_100;
              MR_String ll_backend__opt_debug__V_101_101;
              MR_Word ll_backend__opt_debug__Label_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
              MR_Word ll_backend__opt_debug__LCRval_430 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_93_93 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_430);
              }
              {
                ll_backend__opt_debug__V_97_97 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_84);
              }
              {
                ll_backend__opt_debug__V_101_101 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_429);
              }
              {
                ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_100_100);
              }
              {
                ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_97_97, ll_backend__opt_debug__V_98_98);
              }
              {
                ll_backend__opt_debug__V_94_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_96_96);
              }
              {
                ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_93_93, ll_backend__opt_debug__V_94_94);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_spawn_off(", ll_backend__opt_debug__V_92_92);
              }
            }
            break;
          case (MR_Integer) 34:
            {
              MR_String ll_backend__opt_debug__V_86_86;
              MR_String ll_backend__opt_debug__V_87_87;
              MR_String ll_backend__opt_debug__V_88_88;
              MR_String ll_backend__opt_debug__V_89_89;
              MR_Word ll_backend__opt_debug__LCRval_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__LCSRval_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_87_87 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_431);
              }
              {
                ll_backend__opt_debug__V_89_89 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_432);
              }
              {
                ll_backend__opt_debug__V_88_88 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_89_89, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_86_86 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_87_87, ll_backend__opt_debug__V_88_88);
              }
              {
                ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_join_and_terminate(", ll_backend__opt_debug__V_86_86);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_8;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "leaf";
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "nonleaf";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_model_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_det";
        break;
      case (MR_Integer) 2:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_non";
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_semi";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "no";
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "yes";
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addrs_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Addr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Addrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_9_9;
        MR_String ll_backend__opt_debug__V_10_10;
        MR_String ll_backend__opt_debug__V_11_11;

        {
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addr_6);
        }
        {
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_code_addrs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addrs_7);
        }
        {
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addr_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__CodeAddr_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__CodeAddr_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__CodeAddr_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_6 = (MR_String) "succip";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_6 = (MR_String) "do_redo";
            break;
          case (MR_Integer) 2:
            ll_backend__opt_debug__Str_6 = (MR_String) "do_fail";
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__Str_6 = (MR_String) "do_trace_redo_fail_shallow";
            break;
          case (MR_Integer) 4:
            ll_backend__opt_debug__Str_6 = (MR_String) "do_trace_redo_fail_deep";
            break;
          case (MR_Integer) 5:
            ll_backend__opt_debug__Str_6 = (MR_String) "do_not_reached";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_debug__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Label_7);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_debug__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_debug__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 1)));

              switch (ll_backend__opt_debug__V_17_17) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  ll_backend__opt_debug__Str_6 = (MR_String) "do_succeed";
                  break;
                case (MR_Integer) 1:
                  ll_backend__opt_debug__Str_6 = (MR_String) "do_last_succeed";
                  break;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_debug__Variant_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_13_13;

              {
                ll_backend__opt_debug__V_13_13 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_9);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_closure_", ll_backend__opt_debug__V_13_13);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__V_11_11;
              MR_Word ll_backend__opt_debug__Variant_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_11_11 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_16);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_class_method_", ll_backend__opt_debug__V_11_11);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_rvals_3_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_Integer ll_backend__opt_debug__N_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__4_4;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__MR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__MRs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__N_3 > (MR_Integer) 0);
        if (ll_backend__opt_debug__succeeded)
          {
            MR_String ll_backend__opt_debug__MR_str_13;
            MR_String ll_backend__opt_debug__V_15_15;
            MR_String ll_backend__opt_debug__V_17_17;
            MR_Integer ll_backend__opt_debug__V_18_18;

            if ((ll_backend__opt_debug__MR_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              ll_backend__opt_debug__MR_str_13 = (MR_String) "no";
            else
              {
                MR_Word ll_backend__opt_debug__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MR_8, (MR_Integer) 0)));

                {
                  ll_backend__opt_debug__MR_str_13 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_12);
                }
              }
            ll_backend__opt_debug__V_18_18 = (ll_backend__opt_debug__N_3 - (MR_Integer) 1);
            {
              ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_maybe_rvals_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MRs_9, ll_backend__opt_debug__V_18_18);
            }
            {
              ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_17_17);
            }
            {
              ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__MR_str_13, ll_backend__opt_debug__V_15_15);
            }
          }
        else
          ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "truncated";
      }
    return ll_backend__opt_debug__HeadVar__4_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_proclabel_1_f_0(
  MR_Word ll_backend__opt_debug__ProcLabel_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;

    if (((MR_tag((MR_Word) ll_backend__opt_debug__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
      {
        MR_Word ll_backend__opt_debug__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
        MR_String ll_backend__opt_debug__PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
        MR_Integer ll_backend__opt_debug__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
        MR_Integer ll_backend__opt_debug__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));
        MR_String ll_backend__opt_debug__ExtraModule_11;
        MR_String ll_backend__opt_debug__V_37_37;
        MR_String ll_backend__opt_debug__V_38_38;
        MR_String ll_backend__opt_debug__V_39_39;
        MR_String ll_backend__opt_debug__V_41_41;
        MR_String ll_backend__opt_debug__V_42_42;
        MR_String ll_backend__opt_debug__V_44_44;
        MR_String ll_backend__opt_debug__V_45_45;
        MR_String ll_backend__opt_debug__V_46_46;
        MR_String ll_backend__opt_debug__V_48_48;
        MR_Word ll_backend__opt_debug___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));

        {
          ll_backend__opt_debug__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__opt_debug__Module_5, ll_backend__opt_debug__PredModule_7);
        }
        if (ll_backend__opt_debug__succeeded)
          ll_backend__opt_debug__ExtraModule_11 = (MR_String) "";
        else
          {
            MR_String ll_backend__opt_debug__PredModuleName_12;

            {
              ll_backend__opt_debug__PredModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__PredModule_7);
            }
            {
              ll_backend__opt_debug__ExtraModule_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredModuleName_12, (MR_String) "_");
            }
          }
        {
          ll_backend__opt_debug__V_38_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_5);
        }
        {
          ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_9);
        }
        {
          ll_backend__opt_debug__V_48_48 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_10);
        }
        {
          ll_backend__opt_debug__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_48_48);
        }
        {
          ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, ll_backend__opt_debug__V_46_46);
        }
        {
          ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_44_44);
        }
        {
          ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredName_8, ll_backend__opt_debug__V_42_42);
        }
        {
          ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_41_41);
        }
        {
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
        }
        {
          ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ExtraModule_11, ll_backend__opt_debug__V_37_37);
        }
      }
    else
      {
        MR_Word ll_backend__opt_debug__SpecialPredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__TypeModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
        MR_String ll_backend__opt_debug__TypeName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
        MR_Integer ll_backend__opt_debug__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
        MR_Word ll_backend__opt_debug__TypeCtor_17;
        MR_Word ll_backend__opt_debug__V_18_18;
        MR_String ll_backend__opt_debug__V_19_19;
        MR_String ll_backend__opt_debug__V_20_20;
        MR_String ll_backend__opt_debug__V_22_22;
        MR_String ll_backend__opt_debug__V_23_23;
        MR_String ll_backend__opt_debug__V_24_24;
        MR_String ll_backend__opt_debug__V_26_26;
        MR_String ll_backend__opt_debug__V_27_27;
        MR_String ll_backend__opt_debug__V_28_28;
        MR_String ll_backend__opt_debug__V_29_29;
        MR_String ll_backend__opt_debug__V_31_31;
        MR_String ll_backend__opt_debug__V_32_32;
        MR_String ll_backend__opt_debug__V_33_33;
        MR_String ll_backend__opt_debug__V_35_35;
        MR_Word ll_backend__opt_debug__Module_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
        MR_Integer ll_backend__opt_debug__Mode_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));

        {
          ll_backend__opt_debug__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 0) = ((MR_Box) (ll_backend__opt_debug__TypeModule_14));
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 1) = ((MR_Box) (ll_backend__opt_debug__TypeName_15));
        }
        {
          ll_backend__opt_debug__TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 0) = ((MR_Box) (ll_backend__opt_debug__V_18_18));
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 1) = ((MR_Box) (ll_backend__opt_debug__TypeArity_16));
        }
        {
          ll_backend__opt_debug__V_19_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_49);
        }
        {
          ll_backend__opt_debug__V_23_23 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__opt_debug__SpecialPredId_13, ll_backend__opt_debug__TypeCtor_17);
        }
        {
          ll_backend__opt_debug__V_28_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__TypeModule_14);
        }
        {
          ll_backend__opt_debug__V_27_27 = parse_tree__prog_foreign__qualify_name_2_f_0(ll_backend__opt_debug__V_28_28, ll_backend__opt_debug__TypeName_15);
        }
        {
          ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeArity_16);
        }
        {
          ll_backend__opt_debug__V_35_35 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_50);
        }
        {
          ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_35_35);
        }
        {
          ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, ll_backend__opt_debug__V_33_33);
        }
        {
          ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_31_31);
        }
        {
          ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_29_29);
        }
        {
          ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_26_26);
        }
        {
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, ll_backend__opt_debug__V_24_24);
        }
        {
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_22_22);
        }
        {
          ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_19_19, ll_backend__opt_debug__V_20_20);
        }
      }
    return ll_backend__opt_debug__Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_label_pairs_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__L1_6;
        MR_Word ll_backend__opt_debug__L2_7;
        MR_Word ll_backend__opt_debug__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_String ll_backend__opt_debug__V_11_11;
        MR_String ll_backend__opt_debug__V_12_12;
        MR_String ll_backend__opt_debug__V_13_13;
        MR_String ll_backend__opt_debug__V_15_15;
        MR_String ll_backend__opt_debug__V_16_16;
        MR_String ll_backend__opt_debug__V_17_17;

        ll_backend__opt_debug__L1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
        ll_backend__opt_debug__L2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
        {
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L1_6);
        }
        {
          ll_backend__opt_debug__V_16_16 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L2_7);
        }
        {
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_label_pairs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_8);
        }
        {
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
        }
        {
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__opt_debug__V_15_15);
        }
        {
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_11_11);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_9_9;
        MR_String ll_backend__opt_debug__V_10_10;
        MR_String ll_backend__opt_debug__V_11_11;

        {
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
        {
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_labels_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_7);
        }
        {
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__MaybeLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__MaybeLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__LabelStr_10;
        MR_String ll_backend__opt_debug__V_13_13;
        MR_String ll_backend__opt_debug__V_14_14;

        if ((ll_backend__opt_debug__MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
            }
          }
        else
          {
            MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeLabel_6, (MR_Integer) 0)));

            {
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_9);
            }
          }
        {
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MaybeLabels_7);
        }
        {
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__LabelStr_10, ll_backend__opt_debug__V_14_14);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_13_13);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_label_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Label_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;

    if (((MR_tag((MR_Word) ll_backend__opt_debug__Label_5)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ll_backend__opt_debug__ProcLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Label_5, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Label_5, (MR_Integer) 0)));

        if ((ll_backend__opt_debug__MaybeProcLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_21);
          }
        else
          {
            MR_Word ll_backend__opt_debug__CurProcLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeProcLabel_4, (MR_Integer) 0)));

            {
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__CurProcLabel_19, ll_backend__opt_debug__ProcLabel_21);
            }
            if (ll_backend__opt_debug__succeeded)
              ll_backend__opt_debug__Str_6 = (MR_String) "CUR_PROC_ENTRY";
            else
              {
                ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_21);
              }
          }
      }
    else
      {
        MR_Integer ll_backend__opt_debug__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Label_5, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Label_5, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__NStr_9;

        {
          mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__N_7, &ll_backend__opt_debug__NStr_9);
        }
        if ((ll_backend__opt_debug__MaybeProcLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_String ll_backend__opt_debug__V_16_16;
            MR_String ll_backend__opt_debug__V_17_17;

            {
              ll_backend__opt_debug__V_16_16 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_8);
            }
            {
              ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__opt_debug__NStr_9);
            }
            {
              ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
            }
          }
        else
          {
            MR_Word ll_backend__opt_debug__CurProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeProcLabel_4, (MR_Integer) 0)));

            {
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__CurProcLabel_10, ll_backend__opt_debug__ProcLabel_8);
            }
            if (ll_backend__opt_debug__succeeded)
              {
                {
                  ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "local_", ll_backend__opt_debug__NStr_9);
                }
              }
            else
              {
                MR_String ll_backend__opt_debug__V_13_13;
                MR_String ll_backend__opt_debug__V_14_14;

                {
                  ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_8);
                }
                {
                  ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__NStr_9);
                }
                {
                  ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, ll_backend__opt_debug__V_14_14);
                }
              }
          }
      }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_binop_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "+";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "-";
            break;
          case (MR_Integer) 2:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "*";
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "/";
            break;
          case (MR_Integer) 4:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "%";
            break;
          case (MR_Integer) 5:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked<<";
            break;
          case (MR_Integer) 6:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked>>";
            break;
          case (MR_Integer) 7:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&";
            break;
          case (MR_Integer) 8:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "|";
            break;
          case (MR_Integer) 9:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "^";
            break;
          case (MR_Integer) 10:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&&";
            break;
          case (MR_Integer) 11:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "||";
            break;
          case (MR_Integer) 12:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "==";
            break;
          case (MR_Integer) 13:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "!=";
            break;
          case (MR_Integer) 14:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "body";
            break;
          case (MR_Integer) 15:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "string_unsafe_index_code_unit";
            break;
          case (MR_Integer) 16:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str==";
            break;
          case (MR_Integer) 17:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str!=";
            break;
          case (MR_Integer) 18:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<";
            break;
          case (MR_Integer) 19:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>";
            break;
          case (MR_Integer) 20:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<=";
            break;
          case (MR_Integer) 21:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>=";
            break;
          case (MR_Integer) 22:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "strcmp";
            break;
          case (MR_Integer) 23:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<";
            break;
          case (MR_Integer) 24:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">";
            break;
          case (MR_Integer) 25:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<=";
            break;
          case (MR_Integer) 26:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">=";
            break;
          case (MR_Integer) 27:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unsigned<=";
            break;
          case (MR_Integer) 28:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint==";
            break;
          case (MR_Integer) 29:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint!=";
            break;
          case (MR_Integer) 30:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint<";
            break;
          case (MR_Integer) 31:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint>";
            break;
          case (MR_Integer) 32:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint<=";
            break;
          case (MR_Integer) 33:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint>=";
            break;
          case (MR_Integer) 34:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint+";
            break;
          case (MR_Integer) 35:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint-";
            break;
          case (MR_Integer) 36:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint*";
            break;
          case (MR_Integer) 37:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint/";
            break;
          case (MR_Integer) 38:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint%";
            break;
          case (MR_Integer) 39:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint&";
            break;
          case (MR_Integer) 40:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint|";
            break;
          case (MR_Integer) 41:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "uint^";
            break;
          case (MR_Integer) 42:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl+";
            break;
          case (MR_Integer) 43:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl-";
            break;
          case (MR_Integer) 44:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl*";
            break;
          case (MR_Integer) 45:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl/";
            break;
          case (MR_Integer) 46:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl==";
            break;
          case (MR_Integer) 47:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl!=";
            break;
          case (MR_Integer) 48:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<";
            break;
          case (MR_Integer) 49:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>";
            break;
          case (MR_Integer) 50:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<=";
            break;
          case (MR_Integer) 51:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>=";
            break;
          case (MR_Integer) 52:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_word_bits";
            break;
          case (MR_Integer) 53:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_from_dword";
            break;
          case (MR_Integer) 54:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
            break;
          case (MR_Integer) 55:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound=";
            break;
          case (MR_Integer) 56:
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound<";
            break;
        }
        break;
      case (MR_Integer) 1:
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "array_index";
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_debug__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_6_6;
          MR_String ll_backend__opt_debug__V_7_7;

          {
            ll_backend__opt_debug__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_4);
          }
          {
            ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, (MR_String) ")str==");
          }
          {
            ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "offset(", ll_backend__opt_debug__V_6_6);
          }
        }
        break;
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_unop_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2 = ((&ll_backend__opt_debug_vector_common_6[0 + ll_backend__opt_debug__HeadVar__1_1]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;

    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_name_1_f_0(
  MR_Word ll_backend__opt_debug__LayoutName_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__LayoutName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__opt_debug__RttiProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_128_128;
          MR_String ll_backend__opt_debug__V_129_129;
          MR_Word ll_backend__opt_debug__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

          {
            ll_backend__opt_debug__V_129_129 = ll_backend__opt_debug__dump_rttiproclabel_1_f_0(ll_backend__opt_debug__RttiProcLabel_5);
          }
          {
            ll_backend__opt_debug__V_128_128 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_129_129, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "proc_layout(", ll_backend__opt_debug__V_128_128);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_debug__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)));
          MR_Integer ll_backend__opt_debug__SeqNo_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
          MR_String ll_backend__opt_debug__V_122_122;
          MR_String ll_backend__opt_debug__V_123_123;
          MR_String ll_backend__opt_debug__V_124_124;
          MR_String ll_backend__opt_debug__V_125_125;
          MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

          {
            ll_backend__opt_debug__V_123_123 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_7);
          }
          {
            ll_backend__opt_debug__V_125_125 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__SeqNo_8);
          }
          {
            ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_123_123, ll_backend__opt_debug__V_124_124);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "closure_proc_id(", ll_backend__opt_debug__V_122_122);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_debug__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)));
          MR_Integer ll_backend__opt_debug__FileNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
          MR_String ll_backend__opt_debug__V_116_116;
          MR_String ll_backend__opt_debug__V_117_117;
          MR_String ll_backend__opt_debug__V_118_118;
          MR_String ll_backend__opt_debug__V_119_119;

          {
            ll_backend__opt_debug__V_117_117 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_10);
          }
          {
            ll_backend__opt_debug__V_119_119 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_11);
          }
          {
            ll_backend__opt_debug__V_118_118 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_119_119, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, ll_backend__opt_debug__V_118_118);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout(", ll_backend__opt_debug__V_116_116);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__opt_debug__V_110_110;
              MR_String ll_backend__opt_debug__V_111_111;
              MR_String ll_backend__opt_debug__V_112_112;
              MR_String ll_backend__opt_debug__V_113_113;
              MR_Word ll_backend__opt_debug__ModuleName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__FileNum_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_111_111 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_131);
              }
              {
                ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_132);
              }
              {
                ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_110_110 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_111_111, ll_backend__opt_debug__V_112_112);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_line_number_vector(", ll_backend__opt_debug__V_110_110);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__opt_debug__V_104_104;
              MR_String ll_backend__opt_debug__V_105_105;
              MR_String ll_backend__opt_debug__V_106_106;
              MR_String ll_backend__opt_debug__V_107_107;
              MR_Word ll_backend__opt_debug__ModuleName_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__FileNum_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_105_105 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_133);
              }
              {
                ll_backend__opt_debug__V_107_107 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_134);
              }
              {
                ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_107_107, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_104_104 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_105_105, ll_backend__opt_debug__V_106_106);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_label_layout_vector(", ll_backend__opt_debug__V_104_104);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__V_100_100;
              MR_String ll_backend__opt_debug__V_101_101;
              MR_Word ll_backend__opt_debug__ModuleName_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_101_101 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_135);
              }
              {
                ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_string_table(", ll_backend__opt_debug__V_100_100);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ll_backend__opt_debug__V_96_96;
              MR_String ll_backend__opt_debug__V_97_97;
              MR_Word ll_backend__opt_debug__ModuleName_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_97_97 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_136);
              }
              {
                ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_97_97, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_file_vector(", ll_backend__opt_debug__V_96_96);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ll_backend__opt_debug__V_92_92;
              MR_String ll_backend__opt_debug__V_93_93;
              MR_Word ll_backend__opt_debug__ModuleName_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_93_93 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_137);
              }
              {
                ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_93_93, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_proc_vector(", ll_backend__opt_debug__V_92_92);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Integer ll_backend__opt_debug__NumLabels_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_84_84;
              MR_String ll_backend__opt_debug__V_85_85;
              MR_String ll_backend__opt_debug__V_86_86;
              MR_String ll_backend__opt_debug__V_88_88;
              MR_String ll_backend__opt_debug__V_89_89;
              MR_Word ll_backend__opt_debug__ModuleName_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_85_85 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_138);
              }
              {
                ll_backend__opt_debug__V_89_89 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumLabels_12);
              }
              {
                ll_backend__opt_debug__V_88_88 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_89_89, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_88_88);
              }
              {
                ll_backend__opt_debug__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_85_85, ll_backend__opt_debug__V_86_86);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_label_exec_count(", ll_backend__opt_debug__V_84_84);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ll_backend__opt_debug__V_80_80;
              MR_String ll_backend__opt_debug__V_81_81;
              MR_Word ll_backend__opt_debug__ModuleName_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_81_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_139);
              }
              {
                ll_backend__opt_debug__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_81_81, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_set_desc(", ll_backend__opt_debug__V_80_80);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_Integer ll_backend__opt_debug__EventNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_68_68;
              MR_String ll_backend__opt_debug__V_69_69;
              MR_String ll_backend__opt_debug__V_70_70;
              MR_String ll_backend__opt_debug__V_72_72;
              MR_String ll_backend__opt_debug__V_73_73;
              MR_Word ll_backend__opt_debug__ModuleName_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_69_69 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_141);
              }
              {
                ll_backend__opt_debug__V_73_73 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_13);
              }
              {
                ll_backend__opt_debug__V_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_73_73, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_72_72);
              }
              {
                ll_backend__opt_debug__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_69_69, ll_backend__opt_debug__V_70_70);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_arg_names(", ll_backend__opt_debug__V_68_68);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ll_backend__opt_debug__V_60_60;
              MR_String ll_backend__opt_debug__V_61_61;
              MR_String ll_backend__opt_debug__V_62_62;
              MR_String ll_backend__opt_debug__V_64_64;
              MR_String ll_backend__opt_debug__V_65_65;
              MR_Word ll_backend__opt_debug__ModuleName_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__EventNum_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_61_61 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_142);
              }
              {
                ll_backend__opt_debug__V_65_65 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_143);
              }
              {
                ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_65_65, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_64_64);
              }
              {
                ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_61_61, ll_backend__opt_debug__V_62_62);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attrs(", ll_backend__opt_debug__V_60_60);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer ll_backend__opt_debug__ArgNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__V_48_48;
              MR_String ll_backend__opt_debug__V_49_49;
              MR_String ll_backend__opt_debug__V_50_50;
              MR_String ll_backend__opt_debug__V_52_52;
              MR_String ll_backend__opt_debug__V_53_53;
              MR_String ll_backend__opt_debug__V_54_54;
              MR_String ll_backend__opt_debug__V_56_56;
              MR_String ll_backend__opt_debug__V_57_57;
              MR_Word ll_backend__opt_debug__ModuleName_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__EventNum_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_49_49 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_144);
              }
              {
                ll_backend__opt_debug__V_53_53 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_145);
              }
              {
                ll_backend__opt_debug__V_57_57 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_14);
              }
              {
                ll_backend__opt_debug__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_57_57, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_56_56);
              }
              {
                ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, ll_backend__opt_debug__V_54_54);
              }
              {
                ll_backend__opt_debug__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_52_52);
              }
              {
                ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, ll_backend__opt_debug__V_50_50);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_args(", ll_backend__opt_debug__V_48_48);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__opt_debug__V_36_36;
              MR_String ll_backend__opt_debug__V_37_37;
              MR_String ll_backend__opt_debug__V_38_38;
              MR_String ll_backend__opt_debug__V_40_40;
              MR_String ll_backend__opt_debug__V_41_41;
              MR_String ll_backend__opt_debug__V_42_42;
              MR_String ll_backend__opt_debug__V_44_44;
              MR_String ll_backend__opt_debug__V_45_45;
              MR_Word ll_backend__opt_debug__ModuleName_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__EventNum_147 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));
              MR_Integer ll_backend__opt_debug__ArgNum_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 3)));

              {
                ll_backend__opt_debug__V_37_37 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_146);
              }
              {
                ll_backend__opt_debug__V_41_41 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_147);
              }
              {
                ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_148);
              }
              {
                ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_44_44);
              }
              {
                ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_41_41, ll_backend__opt_debug__V_42_42);
              }
              {
                ll_backend__opt_debug__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_40_40);
              }
              {
                ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_37_37, ll_backend__opt_debug__V_38_38);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_order(", ll_backend__opt_debug__V_36_36);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ll_backend__opt_debug__V_28_28;
              MR_String ll_backend__opt_debug__V_29_29;
              MR_String ll_backend__opt_debug__V_30_30;
              MR_String ll_backend__opt_debug__V_32_32;
              MR_String ll_backend__opt_debug__V_33_33;
              MR_Word ll_backend__opt_debug__ModuleName_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__EventNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_29_29 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_149);
              }
              {
                ll_backend__opt_debug__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_150);
              }
              {
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_32_32);
              }
              {
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, ll_backend__opt_debug__V_30_30);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_order(", ll_backend__opt_debug__V_28_28);
              }
            }
            break;
          case (MR_Integer) 12:
            {
              MR_String ll_backend__opt_debug__V_76_76;
              MR_String ll_backend__opt_debug__V_77_77;
              MR_Word ll_backend__opt_debug__ModuleName_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_77_77 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_140);
              }
              {
                ll_backend__opt_debug__V_76_76 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_77_77, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_specs(", ll_backend__opt_debug__V_76_76);
              }
            }
            break;
          case (MR_Integer) 13:
            {
              MR_String ll_backend__opt_debug__V_24_24;
              MR_String ll_backend__opt_debug__V_25_25;
              MR_Word ll_backend__opt_debug__ModuleName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_25_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_151);
              }
              {
                ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_oisu_bytes(", ll_backend__opt_debug__V_24_24);
              }
            }
            break;
          case (MR_Integer) 14:
            {
              MR_String ll_backend__opt_debug__V_20_20;
              MR_String ll_backend__opt_debug__V_21_21;
              MR_Word ll_backend__opt_debug__ModuleName_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_21_21 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_152);
              }
              {
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_type_table_bytes(", ll_backend__opt_debug__V_20_20);
              }
            }
            break;
          case (MR_Integer) 15:
            {
              MR_String ll_backend__opt_debug__V_16_16;
              MR_String ll_backend__opt_debug__V_17_17;
              MR_Word ll_backend__opt_debug__ModuleName_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_17_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_153);
              }
              {
                ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout(", ll_backend__opt_debug__V_16_16);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_array_name_1_f_0(
  MR_Word ll_backend__opt_debug__ArrayName_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__ArrayName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__ArrayName_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_4 = (MR_String) "pseudo_type_info_array";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_4 = (MR_String) "hlds_var_nums_array";
            break;
          case (MR_Integer) 2:
            ll_backend__opt_debug__Str_4 = (MR_String) "short_locns_array";
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__Str_4 = (MR_String) "long_locns_array";
            break;
          case (MR_Integer) 4:
            ll_backend__opt_debug__Str_4 = (MR_String) "user_event_layout_array";
            break;
          case (MR_Integer) 5:
            ll_backend__opt_debug__Str_4 = (MR_String) "user_event_var_nums_array";
            break;
          case (MR_Integer) 6:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_call_sites_array";
            break;
          case (MR_Integer) 7:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_static_array";
            break;
          case (MR_Integer) 8:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_dynamic_array";
            break;
          case (MR_Integer) 9:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_array";
            break;
          case (MR_Integer) 10:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_head_var_nums_array";
            break;
          case (MR_Integer) 11:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_var_names_array";
            break;
          case (MR_Integer) 12:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_body_bytecodes_array";
            break;
          case (MR_Integer) 13:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_table_io_entry_array";
            break;
          case (MR_Integer) 14:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_event_layouts_array";
            break;
          case (MR_Integer) 15:
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_exec_trace_array";
            break;
          case (MR_Integer) 16:
            ll_backend__opt_debug__Str_4 = (MR_String) "threadscope_string_table_array";
            break;
          case (MR_Integer) 17:
            ll_backend__opt_debug__Str_4 = (MR_String) "alloc_site_array";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_debug__LabelVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ArrayName_3, (MR_Integer) 0)));

          switch (ll_backend__opt_debug__LabelVars_5) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              ll_backend__opt_debug__Str_4 = (MR_String) "long_vars_label_layout_array";
              break;
            case (MR_Integer) 0:
              ll_backend__opt_debug__Str_4 = (MR_String) "no_vars_label_layout_array";
              break;
            case (MR_Integer) 1:
              ll_backend__opt_debug__Str_4 = (MR_String) "short_vars_label_layout_array";
              break;
          }
        }
        break;
    }
    return ll_backend__opt_debug__Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_slot_name_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_5;
    MR_Word ll_backend__opt_debug__Array_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer ll_backend__opt_debug__Slot_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
    MR_String ll_backend__opt_debug__ArrayStr_6;
    MR_String ll_backend__opt_debug__SlotStr_7;
    MR_String ll_backend__opt_debug__V_8_8;
    MR_String ll_backend__opt_debug__V_10_10;

    {
      ll_backend__opt_debug__ArrayStr_6 = ll_backend__opt_debug__dump_layout_array_name_1_f_0(ll_backend__opt_debug__Array_3);
    }
    {
      ll_backend__opt_debug__SlotStr_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Slot_4);
    }
    {
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SlotStr_7, (MR_String) "]");
    }
    {
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", ll_backend__opt_debug__V_10_10);
    }
    {
      ll_backend__opt_debug__Str_5 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ArrayStr_6, ll_backend__opt_debug__V_8_8);
    }
    return ll_backend__opt_debug__Str_5;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(
  MR_Word ll_backend__opt_debug__TCRttiName_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__TCRttiName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__TCRttiName_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_id";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_id_var_names";
            break;
          case (MR_Integer) 2:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_id_method_ids";
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_decl";
            break;
          case (MR_Integer) 4:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_decl_supers";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__opt_debug__InstanceStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));
          MR_String ll_backend__opt_debug__V_40_40;
          MR_Word ll_backend__opt_debug___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstanceStr_6, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", ll_backend__opt_debug__V_40_40);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_debug__Ordinal_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_36_36;
          MR_String ll_backend__opt_debug__V_37_37;
          MR_Integer ll_backend__opt_debug__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

          {
            ll_backend__opt_debug__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_7);
          }
          {
            ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_37_37, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_decl_super(", ll_backend__opt_debug__V_36_36);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_debug__TCTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_32_32;
              MR_String ll_backend__opt_debug__V_33_33;

              {
                ll_backend__opt_debug__V_33_33 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_9);
              }
              {
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance(", ll_backend__opt_debug__V_32_32);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__opt_debug__V_28_28;
              MR_String ll_backend__opt_debug__V_29_29;
              MR_Word ll_backend__opt_debug__TCTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_29_29 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_42);
              }
              {
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_tc_types_vector(", ll_backend__opt_debug__V_28_28);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__V_16_16;
              MR_String ll_backend__opt_debug__V_17_17;
              MR_String ll_backend__opt_debug__V_18_18;
              MR_String ll_backend__opt_debug__V_20_20;
              MR_String ll_backend__opt_debug__V_21_21;
              MR_Integer ll_backend__opt_debug__Ordinal_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 2)));
              MR_Word ll_backend__opt_debug__TCTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 3)));

              {
                ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_45);
              }
              {
                ll_backend__opt_debug__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_44);
              }
              {
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_20_20);
              }
              {
                ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, ll_backend__opt_debug__V_18_18);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraint(", ll_backend__opt_debug__V_16_16);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ll_backend__opt_debug__V_24_24;
              MR_String ll_backend__opt_debug__V_25_25;
              MR_Word ll_backend__opt_debug__TCTypes_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_43);
              }
              {
                ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraints(", ll_backend__opt_debug__V_24_24);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ll_backend__opt_debug__V_12_12;
              MR_String ll_backend__opt_debug__V_13_13;
              MR_Word ll_backend__opt_debug__TCTypes_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_46);
              }
              {
                ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_methods(", ll_backend__opt_debug__V_12_12);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_name_1_f_0(
  MR_Word ll_backend__opt_debug__RttiName_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__RttiName_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__RttiName_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_4 = (MR_String) "exist_loc";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_4 = (MR_String) "res_addrs";
            break;
          case (MR_Integer) 2:
            ll_backend__opt_debug__Str_4 = (MR_String) "res_addr_functors";
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__Str_4 = (MR_String) "notag_functor_desc_";
            break;
          case (MR_Integer) 4:
            ll_backend__opt_debug__Str_4 = (MR_String) "enum_name_ordered_table";
            break;
          case (MR_Integer) 5:
            ll_backend__opt_debug__Str_4 = (MR_String) "enum_value_ordered_table";
            break;
          case (MR_Integer) 6:
            ll_backend__opt_debug__Str_4 = (MR_String) "foreign_enum_name_ordered_table";
            break;
          case (MR_Integer) 7:
            ll_backend__opt_debug__Str_4 = (MR_String) "foreign_enum_ordinal_ordered_table";
            break;
          case (MR_Integer) 8:
            ll_backend__opt_debug__Str_4 = (MR_String) "du_name_ordered_table";
            break;
          case (MR_Integer) 9:
            ll_backend__opt_debug__Str_4 = (MR_String) "du_ptag_ordered_table";
            break;
          case (MR_Integer) 10:
            ll_backend__opt_debug__Str_4 = (MR_String) "res_value_ordered_table";
            break;
          case (MR_Integer) 11:
            ll_backend__opt_debug__Str_4 = (MR_String) "res_name_ordered_table";
            break;
          case (MR_Integer) 12:
            ll_backend__opt_debug__Str_4 = (MR_String) "maybe_res_addr_functor_desc";
            break;
          case (MR_Integer) 13:
            ll_backend__opt_debug__Str_4 = (MR_String) "functor_number_map";
            break;
          case (MR_Integer) 14:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_functors";
            break;
          case (MR_Integer) 15:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_layout";
            break;
          case (MR_Integer) 16:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_ctor_info";
            break;
          case (MR_Integer) 17:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_hashcons_pointer";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__opt_debug__Ordinal_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__RttiName_3, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_44_44;

          {
            ll_backend__opt_debug__V_44_44 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_5);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_locns_", ll_backend__opt_debug__V_44_44);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_debug__TCCNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));
          MR_Integer ll_backend__opt_debug__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__RttiName_3, (MR_Integer) 2)));
          MR_String ll_backend__opt_debug__V_34_34;
          MR_String ll_backend__opt_debug__V_35_35;
          MR_String ll_backend__opt_debug__V_36_36;
          MR_String ll_backend__opt_debug__V_38_38;
          MR_String ll_backend__opt_debug__V_39_39;
          MR_String ll_backend__opt_debug__V_40_40;
          MR_String ll_backend__opt_debug__V_42_42;
          MR_Integer ll_backend__opt_debug__Ordinal_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__RttiName_3, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__V_35_35 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_45);
          }
          {
            ll_backend__opt_debug__V_39_39 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TCCNum_6);
          }
          {
            ll_backend__opt_debug__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_7);
          }
          {
            ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_42_42);
          }
          {
            ll_backend__opt_debug__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_39_39, ll_backend__opt_debug__V_40_40);
          }
          {
            ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_38_38);
          }
          {
            ll_backend__opt_debug__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_35_35, ll_backend__opt_debug__V_36_36);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constr_", ll_backend__opt_debug__V_34_34);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__opt_debug__V_32_32;
              MR_Integer ll_backend__opt_debug__Ordinal_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_46);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constrs_", ll_backend__opt_debug__V_32_32);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__opt_debug__V_30_30;
              MR_Integer ll_backend__opt_debug__Ordinal_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_47);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_info_", ll_backend__opt_debug__V_30_30);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__V_28_28;
              MR_Integer ll_backend__opt_debug__Ordinal_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_48);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_names_", ll_backend__opt_debug__V_28_28);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ll_backend__opt_debug__V_26_26;
              MR_Integer ll_backend__opt_debug__Ordinal_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_26_26 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_49);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_types_", ll_backend__opt_debug__V_26_26);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ll_backend__opt_debug__V_24_24;
              MR_Integer ll_backend__opt_debug__Ordinal_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_24_24 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_50);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_locns_", ll_backend__opt_debug__V_24_24);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_String ll_backend__opt_debug__V_22_22;
              MR_Integer ll_backend__opt_debug__Ordinal_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_22_22 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_51);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum_functor_desc_", ll_backend__opt_debug__V_22_22);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ll_backend__opt_debug__V_20_20;
              MR_Integer ll_backend__opt_debug__Ordinal_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_52);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_enum_functor_desc_", ll_backend__opt_debug__V_20_20);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ll_backend__opt_debug__V_18_18;
              MR_Integer ll_backend__opt_debug__Ordinal_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_53);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_functor_desc_", ll_backend__opt_debug__V_18_18);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ll_backend__opt_debug__V_16_16;
              MR_Integer ll_backend__opt_debug__Ordinal_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_54);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "res_functor_desc_", ll_backend__opt_debug__V_16_16);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Integer ll_backend__opt_debug__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_14_14;

              {
                ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_8);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_stag_ordered_table_", ll_backend__opt_debug__V_14_14);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__opt_debug__V_12_12;
              MR_Integer ll_backend__opt_debug__Ptag_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_55);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_ptag_layout", ll_backend__opt_debug__V_12_12);
              }
            }
            break;
          case (MR_Integer) 11:
            ll_backend__opt_debug__Str_4 = (MR_String) "type_info";
            break;
          case (MR_Integer) 12:
            ll_backend__opt_debug__Str_4 = (MR_String) "pseudo_type_info";
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_4;
  }
}

static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
  MR_Box ll_backend__opt_debug__closure_arg,
  MR_Box ll_backend__opt_debug__wrapper_arg_1)
{
  {
    MR_Box ll_backend__opt_debug__wrapper_arg_2;
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
    MR_String ll_backend__opt_debug__conv0_HeadVar__2_2;

    {
      ll_backend__opt_debug__conv0_HeadVar__2_2 = backend_libs__rtti__encode_tc_instance_type_1_f_0(((MR_Word) ll_backend__opt_debug__wrapper_arg_1));
    }
    ll_backend__opt_debug__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_debug__conv0_HeadVar__2_2));
    return ll_backend__opt_debug__wrapper_arg_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(
  MR_Word ll_backend__opt_debug__TCTypes_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;
    MR_Word ll_backend__opt_debug__EncodedTCTypes_5;
    MR_String ll_backend__opt_debug__TypesStr_6;
    MR_String ll_backend__opt_debug__V_9_9;

    {
      ll_backend__opt_debug__EncodedTCTypes_5 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[2], ll_backend__opt_debug__TCTypes_3);
    }
    {
      mercury__string__append_list_2_p_0(ll_backend__opt_debug__EncodedTCTypes_5, &ll_backend__opt_debug__TypesStr_6);
    }
    {
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypesStr_6, (MR_String) ")");
    }
    {
      ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_instance(", ll_backend__opt_debug__V_9_9);
    }
    return ll_backend__opt_debug__Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
    MR_String ll_backend__opt_debug__ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
    MR_String ll_backend__opt_debug__V_8_8;
    MR_String ll_backend__opt_debug__V_9_9;
    MR_String ll_backend__opt_debug__V_10_10;
    MR_String ll_backend__opt_debug__V_12_12;
    MR_String ll_backend__opt_debug__V_13_13;
    MR_String ll_backend__opt_debug__V_14_14;
    MR_String ll_backend__opt_debug__V_15_15;

    {
      ll_backend__opt_debug__V_9_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
    {
      ll_backend__opt_debug__V_13_13 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__ClassName_4);
    }
    {
      ll_backend__opt_debug__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
    {
      ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) ")");
    }
    {
      ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, ll_backend__opt_debug__V_14_14);
    }
    {
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_12_12);
    }
    {
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_9_9, ll_backend__opt_debug__V_10_10);
    }
    {
      ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "tc_name(", ll_backend__opt_debug__V_8_8);
    }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
    MR_String ll_backend__opt_debug__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
    MR_String ll_backend__opt_debug__V_7_7;
    MR_String ll_backend__opt_debug__V_8_8;
    MR_String ll_backend__opt_debug__V_9_9;
    MR_String ll_backend__opt_debug__V_11_11;
    MR_String ll_backend__opt_debug__V_12_12;
    MR_String ll_backend__opt_debug__V_13_13;
    MR_String ll_backend__opt_debug__V_14_14;

    {
      ll_backend__opt_debug__V_8_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
    {
      ll_backend__opt_debug__V_12_12 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__TypeName_4);
    }
    {
      ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
    {
      ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, (MR_String) ")");
    }
    {
      ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
    }
    {
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
    }
    {
      ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
    }
    {
      ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_type_ctor(", ll_backend__opt_debug__V_7_7);
    }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_data_id_1_f_0(
  MR_Word ll_backend__opt_debug__DataId_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_4;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__DataId_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__opt_debug__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)));

          if (((MR_tag((MR_Word) ll_backend__opt_debug__V_68_68)) == (MR_mktag((MR_Integer) 0))))
            {
              MR_Word ll_backend__opt_debug__RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_68_68, (MR_Integer) 0)));
              MR_Word ll_backend__opt_debug__DataName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_68_68, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_59_59;
              MR_String ll_backend__opt_debug__V_60_60;
              MR_String ll_backend__opt_debug__V_61_61;
              MR_String ll_backend__opt_debug__V_63_63;
              MR_String ll_backend__opt_debug__V_64_64;

              {
                ll_backend__opt_debug__V_60_60 = ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(ll_backend__opt_debug__RttiTypeCtor_5);
              }
              {
                ll_backend__opt_debug__V_64_64 = ll_backend__opt_debug__dump_rtti_name_1_f_0(ll_backend__opt_debug__DataName_6);
              }
              {
                ll_backend__opt_debug__V_63_63 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_64_64, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_63_63);
              }
              {
                ll_backend__opt_debug__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_60_60, ll_backend__opt_debug__V_61_61);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_id(", ll_backend__opt_debug__V_59_59);
              }
            }
          else
            {
              MR_Word ll_backend__opt_debug__TCName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_68_68, (MR_Integer) 0)));
              MR_Word ll_backend__opt_debug__TCDataName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_68_68, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_50_50;
              MR_String ll_backend__opt_debug__V_51_51;
              MR_String ll_backend__opt_debug__V_52_52;
              MR_String ll_backend__opt_debug__V_54_54;
              MR_String ll_backend__opt_debug__V_55_55;

              {
                ll_backend__opt_debug__V_51_51 = ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(ll_backend__opt_debug__TCName_7);
              }
              {
                ll_backend__opt_debug__V_55_55 = ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(ll_backend__opt_debug__TCDataName_8);
              }
              {
                ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_55_55, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_54_54);
              }
              {
                ll_backend__opt_debug__V_50_50 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_51_51, ll_backend__opt_debug__V_52_52);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_rtti_id(", ll_backend__opt_debug__V_50_50);
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_debug__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)));
          MR_Word ll_backend__opt_debug__Id_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
          MR_String ll_backend__opt_debug__V_42_42;
          MR_String ll_backend__opt_debug__V_43_43;
          MR_String ll_backend__opt_debug__V_45_45;
          MR_String ll_backend__opt_debug__V_46_46;

          {
            ll_backend__opt_debug__V_42_42 = backend_libs__rtti__tabling_info_id_str_1_f_0(ll_backend__opt_debug__Id_10);
          }
          {
            ll_backend__opt_debug__V_46_46 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_9);
          }
          {
            ll_backend__opt_debug__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_46_46, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_45_45);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_42_42, ll_backend__opt_debug__V_43_43);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_debug__TypeNum_11;
          MR_Integer ll_backend__opt_debug__Offset_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
          MR_Word ll_backend__opt_debug__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_35_35;
          MR_String ll_backend__opt_debug__V_36_36;
          MR_String ll_backend__opt_debug__V_37_37;
          MR_String ll_backend__opt_debug__V_39_39;
          MR_String ll_backend__opt_debug__V_40_40;

          ll_backend__opt_debug__TypeNum_11 = (MR_Integer) ll_backend__opt_debug__V_33_33;
          {
            ll_backend__opt_debug__V_36_36 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_11);
          }
          {
            ll_backend__opt_debug__V_40_40 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_12);
          }
          {
            ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_39_39);
          }
          {
            ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_36_36, ll_backend__opt_debug__V_37_37);
          }
          {
            ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "scalar_common_data_id(", ll_backend__opt_debug__V_35_35);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_debug__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_26_26;
              MR_String ll_backend__opt_debug__V_27_27;
              MR_String ll_backend__opt_debug__V_28_28;
              MR_String ll_backend__opt_debug__V_30_30;
              MR_String ll_backend__opt_debug__V_31_31;
              MR_Integer ll_backend__opt_debug__TypeNum_66 = (MR_Integer) ll_backend__opt_debug__V_24_24;
              MR_Integer ll_backend__opt_debug__Offset_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_27_27 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_66);
              }
              {
                ll_backend__opt_debug__V_31_31 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_67);
              }
              {
                ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_31_31, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_30_30);
              }
              {
                ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_28_28);
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_data_id(", ll_backend__opt_debug__V_26_26);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_debug__LayoutName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_21_21;
              MR_String ll_backend__opt_debug__V_22_22;

              {
                ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_layout_name_1_f_0(ll_backend__opt_debug__LayoutName_13);
              }
              {
                ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "layout_id(", ll_backend__opt_debug__V_21_21);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_debug__PredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_17_17;
              MR_String ll_backend__opt_debug__V_18_18;
              MR_Word ll_backend__opt_debug__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_14, (MR_Integer) 0)));
              MR_Integer ll_backend__opt_debug__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_14, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_72_72;
              MR_String ll_backend__opt_debug__V_73_73;
              MR_Integer ll_backend__opt_debug__V_74_74;
              MR_String ll_backend__opt_debug__V_75_75;
              MR_String ll_backend__opt_debug__V_77_77;
              MR_String ll_backend__opt_debug__V_78_78;
              MR_Integer ll_backend__opt_debug__V_79_79;

              {
                ll_backend__opt_debug__V_74_74 = hlds__hlds_pred__pred_id_to_int_1_f_0(ll_backend__opt_debug__PredId_69);
              }
              {
                ll_backend__opt_debug__V_73_73 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_74_74);
              }
              {
                ll_backend__opt_debug__V_79_79 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__opt_debug__ProcId_70);
              }
              {
                ll_backend__opt_debug__V_78_78 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_79_79);
              }
              {
                ll_backend__opt_debug__V_77_77 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_78_78, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_77_77);
              }
              {
                ll_backend__opt_debug__V_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_73_73, ll_backend__opt_debug__V_75_75);
              }
              {
                ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "proc(", ll_backend__opt_debug__V_72_72);
              }
              {
                ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_18_18, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_id(", ll_backend__opt_debug__V_17_17);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_4;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_const_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Const_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__Const_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__Const_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_6 = (MR_String) "true";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_6 = (MR_String) "false";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Integer ll_backend__opt_debug__I_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Const_5, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__Str_6 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__I_7);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_debug__U_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Const_5, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__Str_6 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__U_8);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word ll_backend__opt_debug__V_10_10;

              ll_backend__opt_debug__Str_6 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
              ll_backend__opt_debug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 2)));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Float ll_backend__opt_debug__F_36 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__Str_6 = mercury__string__float_to_string_1_f_0(ll_backend__opt_debug__F_36);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__S_11 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_33_33;
              MR_String ll_backend__opt_debug__V_34_34;

              {
                ll_backend__opt_debug__V_34_34 = backend_libs__c_util__quote_string_1_f_0(ll_backend__opt_debug__S_11);
              }
              {
                ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_34_34, (MR_String) "\"");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__opt_debug__V_33_33);
              }
            }
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__Str_6 = (MR_String) "multi_string(...)";
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_debug__CodeAddr_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_29_29;
              MR_String ll_backend__opt_debug__V_30_30;

              {
                ll_backend__opt_debug__V_30_30 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__CodeAddr_13);
              }
              {
                ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_30_30, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "code_addr_const(", ll_backend__opt_debug__V_29_29);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_debug__DataId_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__MaybeOffset_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__DataIdStr_16;

              {
                ll_backend__opt_debug__DataIdStr_16 = ll_backend__opt_debug__dump_data_id_1_f_0(ll_backend__opt_debug__DataId_14);
              }
              if ((ll_backend__opt_debug__MaybeOffset_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  MR_String ll_backend__opt_debug__V_26_26;

                  {
                    ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_16, (MR_String) ")");
                  }
                  {
                    ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_26_26);
                  }
                }
              else
                {
                  MR_Integer ll_backend__opt_debug__Offset_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_15, (MR_Integer) 0)));
                  MR_String ll_backend__opt_debug__V_19_19;
                  MR_String ll_backend__opt_debug__V_20_20;
                  MR_String ll_backend__opt_debug__V_22_22;
                  MR_String ll_backend__opt_debug__V_23_23;

                  {
                    ll_backend__opt_debug__V_23_23 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_17);
                  }
                  {
                    ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, (MR_String) ")");
                  }
                  {
                    ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_22_22);
                  }
                  {
                    ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_16, ll_backend__opt_debug__V_20_20);
                  }
                  {
                    ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_19_19);
                  }
                }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_mem_ref_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__MemRef_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__MemRef_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__opt_debug__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__MemRef_5, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_28_28;
          MR_String ll_backend__opt_debug__V_29_29;

          {
            ll_backend__opt_debug__V_29_29 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_7);
          }
          {
            ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar_ref(", ll_backend__opt_debug__V_28_28);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String ll_backend__opt_debug__V_24_24;
          MR_String ll_backend__opt_debug__V_25_25;
          MR_Word ll_backend__opt_debug__N_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MemRef_5, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_31);
          }
          {
            ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "framevar_ref(", ll_backend__opt_debug__V_24_24);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word ll_backend__opt_debug__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__MemRef_5, (MR_Integer) 0)));
          MR_Word ll_backend__opt_debug__MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__MemRef_5, (MR_Integer) 1)));
          MR_String ll_backend__opt_debug__TagString_11;
          MR_String ll_backend__opt_debug__V_13_13;
          MR_String ll_backend__opt_debug__V_14_14;
          MR_String ll_backend__opt_debug__V_15_15;
          MR_String ll_backend__opt_debug__V_17_17;
          MR_String ll_backend__opt_debug__V_18_18;
          MR_String ll_backend__opt_debug__V_20_20;
          MR_String ll_backend__opt_debug__V_21_21;
          MR_Word ll_backend__opt_debug__N_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__MemRef_5, (MR_Integer) 2)));

          if ((ll_backend__opt_debug__MaybeTag_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            ll_backend__opt_debug__TagString_11 = (MR_String) "unknown_tag";
          else
            {
              MR_Integer ll_backend__opt_debug__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_9, (MR_Integer) 0)));

              {
                ll_backend__opt_debug__TagString_11 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Tag_10);
              }
            }
          {
            ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_8);
          }
          {
            ll_backend__opt_debug__V_21_21 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_32);
          }
          {
            ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_20_20);
          }
          {
            ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TagString_11, ll_backend__opt_debug__V_18_18);
          }
          {
            ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_17_17);
          }
          {
            ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
          }
          {
            ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "heap_ref(", ll_backend__opt_debug__V_13_13);
          }
        }
        break;
    }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rvals_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Rvals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_8_8;
        MR_String ll_backend__opt_debug__V_9_9;
        MR_String ll_backend__opt_debug__V_11_11;

        {
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_6);
        }
        {
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_rvals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rvals_7);
        }
        {
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_rval_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Rval_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__Rval_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word ll_backend__opt_debug__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)));

          {
            ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Lval_7);
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_debug__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)));
          MR_String ll_backend__opt_debug__V_69_69;
          MR_String ll_backend__opt_debug__V_70_70;
          MR_Integer ll_backend__opt_debug__V_71_71;

          {
            ll_backend__opt_debug__V_71_71 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__opt_debug__Var_8);
          }
          {
            ll_backend__opt_debug__V_70_70 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_71_71);
          }
          {
            ll_backend__opt_debug__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_70_70, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "var(", ll_backend__opt_debug__V_69_69);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Integer ll_backend__opt_debug__T_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)));
          MR_Word ll_backend__opt_debug__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));
          MR_String ll_backend__opt_debug__V_61_61;
          MR_String ll_backend__opt_debug__V_62_62;
          MR_String ll_backend__opt_debug__V_63_63;
          MR_String ll_backend__opt_debug__V_65_65;
          MR_String ll_backend__opt_debug__V_66_66;

          {
            ll_backend__opt_debug__V_62_62 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_9);
          }
          {
            ll_backend__opt_debug__V_66_66 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_10);
          }
          {
            ll_backend__opt_debug__V_65_65 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_66_66, (MR_String) ")");
          }
          {
            ll_backend__opt_debug__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_65_65);
          }
          {
            ll_backend__opt_debug__V_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_62_62, ll_backend__opt_debug__V_63_63);
          }
          {
            ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword(", ll_backend__opt_debug__V_61_61);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String ll_backend__opt_debug__V_57_57;
              MR_String ll_backend__opt_debug__V_58_58;
              MR_Integer ll_backend__opt_debug__T_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_58_58 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_73);
              }
              {
                ll_backend__opt_debug__V_57_57 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_58_58, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword_hole(", ll_backend__opt_debug__V_57_57);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word ll_backend__opt_debug__C_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_const_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__C_11);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word ll_backend__opt_debug__O_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_50_50;
              MR_String ll_backend__opt_debug__V_51_51;
              MR_String ll_backend__opt_debug__V_53_53;
              MR_String ll_backend__opt_debug__V_54_54;
              MR_Word ll_backend__opt_debug__N_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 2)));

              {
                ll_backend__opt_debug__V_50_50 = ll_backend__opt_debug__dump_unop_1_f_0(ll_backend__opt_debug__O_12);
              }
              {
                ll_backend__opt_debug__V_54_54 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_74);
              }
              {
                ll_backend__opt_debug__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_54_54, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_53_53);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_50_50, ll_backend__opt_debug__V_51_51);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word ll_backend__opt_debug__N1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 2)));
              MR_Word ll_backend__opt_debug__N2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 3)));
              MR_Word ll_backend__opt_debug__O_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));

              {
                MR_Word ll_backend__opt_debug__V_15_15;
                MR_Word ll_backend__opt_debug__V_16_16;
                MR_Word ll_backend__opt_debug__V_17_17;

                ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N1_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (ll_backend__opt_debug__succeeded)
                  {
                    ll_backend__opt_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 1)));
                    ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 2)));
                    ll_backend__opt_debug__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 3)));
                  }
              }
              if (!(ll_backend__opt_debug__succeeded))
                {
                  MR_Word ll_backend__opt_debug__V_18_18;
                  MR_Word ll_backend__opt_debug__V_19_19;
                  MR_Word ll_backend__opt_debug__V_20_20;

                  ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N2_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
                  if (ll_backend__opt_debug__succeeded)
                    {
                      ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 1)));
                      ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 2)));
                      ll_backend__opt_debug__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 3)));
                    }
                }
              if (ll_backend__opt_debug__succeeded)
                {
                  MR_String ll_backend__opt_debug__V_27_27;
                  MR_String ll_backend__opt_debug__V_28_28;
                  MR_String ll_backend__opt_debug__V_29_29;
                  MR_String ll_backend__opt_debug__V_31_31;
                  MR_String ll_backend__opt_debug__V_33_33;
                  MR_String ll_backend__opt_debug__V_34_34;
                  MR_String ll_backend__opt_debug__V_35_35;
                  MR_String ll_backend__opt_debug__V_37_37;
                  MR_String ll_backend__opt_debug__V_39_39;
                  MR_String ll_backend__opt_debug__V_40_40;

                  {
                    ll_backend__opt_debug__V_28_28 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N1_13);
                  }
                  {
                    ll_backend__opt_debug__V_34_34 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_75);
                  }
                  {
                    ll_backend__opt_debug__V_40_40 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N2_14);
                  }
                  {
                    ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, (MR_String) ")");
                  }
                  {
                    ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_39_39);
                  }
                  {
                    ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_37_37);
                  }
                  {
                    ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_34_34, ll_backend__opt_debug__V_35_35);
                  }
                  {
                    ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_33_33);
                  }
                  {
                    ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) ")", ll_backend__opt_debug__V_31_31);
                  }
                  {
                    ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_28_28, ll_backend__opt_debug__V_29_29);
                  }
                  {
                    ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_27_27);
                  }
                }
              else
                {
                  MR_String ll_backend__opt_debug__V_42_42;
                  MR_String ll_backend__opt_debug__V_43_43;
                  MR_String ll_backend__opt_debug__V_45_45;
                  MR_String ll_backend__opt_debug__V_46_46;
                  MR_String ll_backend__opt_debug__V_47_47;
                  MR_String ll_backend__opt_debug__V_49_49;

                  {
                    ll_backend__opt_debug__V_42_42 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N1_13);
                  }
                  {
                    ll_backend__opt_debug__V_46_46 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_75);
                  }
                  {
                    ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N2_14);
                  }
                  {
                    ll_backend__opt_debug__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_49_49);
                  }
                  {
                    ll_backend__opt_debug__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_46_46, ll_backend__opt_debug__V_47_47);
                  }
                  {
                    ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_45_45);
                  }
                  {
                    ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_42_42, ll_backend__opt_debug__V_43_43);
                  }
                }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_Word ll_backend__opt_debug__M_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_23_23;
              MR_String ll_backend__opt_debug__V_24_24;

              {
                ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_mem_ref_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__M_21);
              }
              {
                ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_addr(", ll_backend__opt_debug__V_23_23);
              }
            }
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Lvals_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    {
      ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Lvals_5, (MR_String) "");
    }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_lval_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Lval_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__Str_6;

    switch (MR_tag((MR_Word) ll_backend__opt_debug__Lval_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(ll_backend__opt_debug__Lval_5)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            ll_backend__opt_debug__Str_6 = (MR_String) "succip";
            break;
          case (MR_Integer) 1:
            ll_backend__opt_debug__Str_6 = (MR_String) "maxfr";
            break;
          case (MR_Integer) 2:
            ll_backend__opt_debug__Str_6 = (MR_String) "curfr";
            break;
          case (MR_Integer) 3:
            ll_backend__opt_debug__Str_6 = (MR_String) "hp";
            break;
          case (MR_Integer) 4:
            ll_backend__opt_debug__Str_6 = (MR_String) "sp";
            break;
          case (MR_Integer) 5:
            ll_backend__opt_debug__Str_6 = (MR_String) "parent_sp";
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ll_backend__opt_debug__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Lval_5, (MR_Integer) 0)));
          MR_Integer ll_backend__opt_debug__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

          {
            ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_7, ll_backend__opt_debug__Num_8);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_String ll_backend__opt_debug__V_27_27;
          MR_Word ll_backend__opt_debug__Type_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Lval_5, (MR_Integer) 0)));
          MR_Integer ll_backend__opt_debug__Num_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

          {
            ll_backend__opt_debug__V_27_27 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_86, ll_backend__opt_debug__Num_87);
          }
          {
            ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "temp_", ll_backend__opt_debug__V_27_27);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer ll_backend__opt_debug__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_76_76;

              {
                ll_backend__opt_debug__V_76_76 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_9);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "sv", ll_backend__opt_debug__V_76_76);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_String ll_backend__opt_debug__V_74_74;
              MR_Integer ll_backend__opt_debug__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_74_74 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_77);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "parent_sv", ll_backend__opt_debug__V_74_74);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_String ll_backend__opt_debug__V_72_72;
              MR_Integer ll_backend__opt_debug__N_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_72_72 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_78);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "fv", ll_backend__opt_debug__V_72_72);
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_String ll_backend__opt_debug__Macro_10;
              MR_Integer ll_backend__opt_debug__V_68_68;
              MR_Word ll_backend__opt_debug__Type_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
              MR_Integer ll_backend__opt_debug__N_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 2)));
              MR_String ll_backend__opt_debug__V_89_89;
              MR_Word ll_backend__opt_debug__V_95_95;
              MR_String ll_backend__opt_debug__V_96_96;
              MR_String ll_backend__opt_debug__V_98_98;
              MR_String ll_backend__opt_debug__V_99_99;
              MR_String ll_backend__opt_debug__V_106_106;

              switch (ll_backend__opt_debug__Type_79) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  ll_backend__opt_debug__Macro_10 = (MR_String) "parent_sv";
                  break;
                case (MR_Integer) 0:
                  ll_backend__opt_debug__Macro_10 = (MR_String) "sv";
                  break;
              }
              ll_backend__opt_debug__V_68_68 = (ll_backend__opt_debug__N_80 + (MR_Integer) 1);
              ll_backend__opt_debug__V_95_95 = (MR_Word) &ll_backend__opt_debug_scalar_common_4[0];
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_95_95, ll_backend__opt_debug__V_68_68, &ll_backend__opt_debug__V_89_89);
              }
              {
                ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Macro_10, ll_backend__opt_debug__V_89_89);
              }
              {
                ll_backend__opt_debug__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_96_96);
              }
              {
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_95_95, ll_backend__opt_debug__N_80, &ll_backend__opt_debug__V_99_99);
              }
              {
                ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_99_99, ll_backend__opt_debug__V_98_98);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Macro_10, ll_backend__opt_debug__V_106_106);
              }
            }
            break;
          case (MR_Integer) 4:
            {
              MR_String ll_backend__opt_debug__V_40_40;
              MR_String ll_backend__opt_debug__V_41_41;
              MR_Word ll_backend__opt_debug__R_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_41_41 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_84);
              }
              {
                ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_41_41, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succip_slot(", ll_backend__opt_debug__V_40_40);
              }
            }
            break;
          case (MR_Integer) 5:
            {
              MR_Word ll_backend__opt_debug__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_56_56;
              MR_String ll_backend__opt_debug__V_57_57;

              {
                ll_backend__opt_debug__V_57_57 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_11);
              }
              {
                ll_backend__opt_debug__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_57_57, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succfr_slot(", ll_backend__opt_debug__V_56_56);
              }
            }
            break;
          case (MR_Integer) 6:
            {
              MR_String ll_backend__opt_debug__V_44_44;
              MR_String ll_backend__opt_debug__V_45_45;
              MR_Word ll_backend__opt_debug__R_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_45_45 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_83);
              }
              {
                ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redoip_slot(", ll_backend__opt_debug__V_44_44);
              }
            }
            break;
          case (MR_Integer) 7:
            {
              MR_String ll_backend__opt_debug__V_48_48;
              MR_String ll_backend__opt_debug__V_49_49;
              MR_Word ll_backend__opt_debug__R_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_82);
              }
              {
                ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redofr_slot(", ll_backend__opt_debug__V_48_48);
              }
            }
            break;
          case (MR_Integer) 8:
            {
              MR_String ll_backend__opt_debug__V_52_52;
              MR_String ll_backend__opt_debug__V_53_53;
              MR_Word ll_backend__opt_debug__R_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_53_53 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_81);
              }
              {
                ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "prevfr_slot(", ll_backend__opt_debug__V_52_52);
              }
            }
            break;
          case (MR_Integer) 9:
            {
              MR_Word ll_backend__opt_debug__MT_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
              MR_Word ll_backend__opt_debug__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 3)));
              MR_String ll_backend__opt_debug__T_str_15;
              MR_String ll_backend__opt_debug__V_29_29;
              MR_String ll_backend__opt_debug__V_30_30;
              MR_String ll_backend__opt_debug__V_32_32;
              MR_String ll_backend__opt_debug__V_33_33;
              MR_String ll_backend__opt_debug__V_34_34;
              MR_String ll_backend__opt_debug__V_36_36;
              MR_String ll_backend__opt_debug__V_37_37;
              MR_Word ll_backend__opt_debug__N_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 2)));

              if ((ll_backend__opt_debug__MT_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                ll_backend__opt_debug__T_str_15 = (MR_String) "no";
              else
                {
                  MR_Integer ll_backend__opt_debug__T_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MT_12, (MR_Integer) 0)));

                  {
                    mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__T_14, &ll_backend__opt_debug__T_str_15);
                  }
                }
              {
                ll_backend__opt_debug__V_33_33 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_85);
              }
              {
                ll_backend__opt_debug__V_37_37 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__F_13);
              }
              {
                ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_37_37, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_36_36);
              }
              {
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, ll_backend__opt_debug__V_34_34);
              }
              {
                ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_32_32);
              }
              {
                ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_15, ll_backend__opt_debug__V_30_30);
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "field(", ll_backend__opt_debug__V_29_29);
              }
            }
            break;
          case (MR_Integer) 10:
            {
              MR_String ll_backend__opt_debug__V_23_23;
              MR_String ll_backend__opt_debug__V_24_24;
              MR_Word ll_backend__opt_debug__R_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

              {
                ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_88);
              }
              {
                ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, (MR_String) ")");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_ref(", ll_backend__opt_debug__V_23_23);
              }
            }
            break;
          case (MR_Integer) 11:
            {
              MR_String ll_backend__opt_debug__VarName_17;
              MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
              MR_String ll_backend__opt_debug__V_20_20;

              ll_backend__opt_debug__VarName_17 = (MR_String) ll_backend__opt_debug__V_18_18;
              {
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_17, (MR_String) "))");
              }
              {
                ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "global_var_ref(env_var_ref(", ll_backend__opt_debug__V_20_20);
              }
            }
            break;
          case (MR_Integer) 12:
            ll_backend__opt_debug__Str_6 = (MR_String) "lvar(_)";
            break;
        }
        break;
    }
    return ll_backend__opt_debug__Str_6;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_reg_2_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
  MR_Integer ll_backend__opt_debug__N_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    switch (ll_backend__opt_debug__HeadVar__1_1) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_String ll_backend__opt_debug__V_9_9;

          {
            ll_backend__opt_debug__V_9_9 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_2);
          }
          {
            ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "f", ll_backend__opt_debug__V_9_9);
          }
        }
        break;
      case (MR_Integer) 0:
        {
          MR_String ll_backend__opt_debug__V_6_6;

          {
            ll_backend__opt_debug__V_6_6 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_2);
          }
          {
            ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "r", ll_backend__opt_debug__V_6_6);
          }
        }
        break;
    }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livevals_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Lvalset_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;
    MR_Word ll_backend__opt_debug__V_6_6;

    {
      ll_backend__opt_debug__V_6_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_debug__Lvalset_5);
    }
    {
      ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__V_6_6, (MR_String) "");
    }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livemaplist_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;

    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Label_6;
        MR_Word ll_backend__opt_debug__Lvalset_7;
        MR_Word ll_backend__opt_debug__Livemaplist_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
        MR_String ll_backend__opt_debug__V_10_10;
        MR_String ll_backend__opt_debug__V_11_11;
        MR_String ll_backend__opt_debug__V_13_13;
        MR_String ll_backend__opt_debug__V_14_14;
        MR_String ll_backend__opt_debug__V_15_15;
        MR_String ll_backend__opt_debug__V_17_17;
        MR_Word ll_backend__opt_debug__V_20_20;

        ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
        ll_backend__opt_debug__Lvalset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
        {
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
        {
          ll_backend__opt_debug__V_20_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_debug__Lvalset_7);
        }
        {
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__V_20_20, (MR_String) "");
        }
        {
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_livemaplist_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Livemaplist_8);
        }
        {
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_17_17);
        }
        {
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
        }
        {
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " ->", ll_backend__opt_debug__V_13_13);
        }
        {
          ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
      }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_livemap_2_f_0(
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
  MR_Word ll_backend__opt_debug__Livemap_5)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__3_3;
    MR_Word ll_backend__opt_debug__V_6_6;

    {
      ll_backend__opt_debug__V_6_6 = mercury__map__to_assoc_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__opt_debug_scalar_common_1[0], ll_backend__opt_debug__Livemap_5);
    }
    {
      ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_livemaplist_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__V_6_6);
    }
    return ll_backend__opt_debug__HeadVar__3_3;
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_intlist_1_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__2_2;

    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
    else
      {
        MR_Integer ll_backend__opt_debug__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__V_6_6;
        MR_String ll_backend__opt_debug__V_7_7;
        MR_String ll_backend__opt_debug__V_8_8;

        {
          ll_backend__opt_debug__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__H_3);
        }
        {
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_intlist_1_f_0(ll_backend__opt_debug__T_4);
        }
        {
          ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, ll_backend__opt_debug__V_8_8);
        }
        {
          ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_6_6);
        }
      }
    return ll_backend__opt_debug__HeadVar__2_2;
  }
}

static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
  MR_Box ll_backend__opt_debug__closure_arg,
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
  MR_Box * ll_backend__opt_debug__wrapper_arg_3)
{
  {
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
    MR_String ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7;

    {
      ll_backend__opt_debug__dump_comment_char_3_p_0(((MR_Char) (MR_Word) ll_backend__opt_debug__wrapper_arg_1), ((MR_String) ll_backend__opt_debug__wrapper_arg_2), &ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7);
    }
    *ll_backend__opt_debug__wrapper_arg_3 = ((MR_Box) (ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7));
  }
}

MR_String MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;
    MR_String ll_backend__opt_debug__HeadVar__4_4;

    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
    else
      {
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ll_backend__opt_debug__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_9, (MR_Integer) 0)));
        MR_String ll_backend__opt_debug__Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_9, (MR_Integer) 1)));
        MR_String ll_backend__opt_debug__InstrStr0_15;
        MR_String ll_backend__opt_debug__InstrStr_18;
        MR_String ll_backend__opt_debug__InstrsStr_19;
        MR_Word ll_backend__opt_debug__V_14_14;

        ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
        if (ll_backend__opt_debug__succeeded)
          {
            ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 1)));
            {
              ll_backend__opt_debug__InstrStr0_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Uinstr_12);
            }
          }
        else
          {
            MR_String ll_backend__opt_debug__InstrComment_16;

            ll_backend__opt_debug__succeeded = ((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_12)) == (MR_mktag((MR_Integer) 1)));
            if (ll_backend__opt_debug__succeeded)
              {
                ll_backend__opt_debug__InstrComment_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 0)));
                {
                  MR_String ll_backend__opt_debug__InstrCommentStr_17;
                  MR_Box ll_backend__opt_debug__conv1_InstrCommentStr_17;

                  {
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[1], ll_backend__opt_debug__InstrComment_16, ((MR_Box) ((MR_String) "")), &ll_backend__opt_debug__conv1_InstrCommentStr_17);
                  }
                  ll_backend__opt_debug__InstrCommentStr_17 = ((MR_String) ll_backend__opt_debug__conv1_InstrCommentStr_17);
                  {
                    ll_backend__opt_debug__InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t% ", ll_backend__opt_debug__InstrCommentStr_17);
                  }
                }
              }
            else
              {
                MR_String ll_backend__opt_debug__V_24_24;

                {
                  ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Uinstr_12);
                }
                {
                  ll_backend__opt_debug__InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__opt_debug__V_24_24);
                }
              }
          }
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__HeadVar__2_2 == (MR_Integer) 1);
        if (ll_backend__opt_debug__succeeded)
          {
            ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Comment_13, (MR_String) "") == 0);
            ll_backend__opt_debug__succeeded = !(ll_backend__opt_debug__succeeded);
          }
        if (ll_backend__opt_debug__succeeded)
          {
            MR_String ll_backend__opt_debug__V_25_25;
            MR_String ll_backend__opt_debug__V_27_27;

            {
              ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_13, (MR_String) "\n");
            }
            {
              ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", ll_backend__opt_debug__V_27_27);
            }
            {
              ll_backend__opt_debug__InstrStr_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr0_15, ll_backend__opt_debug__V_25_25);
            }
          }
        else
          {
            {
              ll_backend__opt_debug__InstrStr_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr0_15, (MR_String) "\n");
            }
          }
        {
          ll_backend__opt_debug__InstrsStr_19 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
        {
          ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr_18, ll_backend__opt_debug__InstrsStr_19);
        }
      }
    return ll_backend__opt_debug__HeadVar__4_4;
  }
}

static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
  MR_Box ll_backend__opt_debug__closure_arg,
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
  MR_Box * ll_backend__opt_debug__wrapper_arg_3)
{
  {
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;

    {
      ll_backend__opt_debug__print_comment_char_3_p_0(((MR_Char) (MR_Word) ll_backend__opt_debug__wrapper_arg_1));
    }
  }
}

void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0(
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool ll_backend__opt_debug__succeeded;

        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            MR_Word ll_backend__opt_debug__Instr_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ll_backend__opt_debug__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ll_backend__opt_debug__Uinstr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_11, (MR_Integer) 0)));
            MR_String ll_backend__opt_debug__Comment_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_11, (MR_Integer) 1)));
            MR_Word ll_backend__opt_debug__V_18_18;

            ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
            if (ll_backend__opt_debug__succeeded)
              {
                ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 1)));
                {
                  MR_String ll_backend__opt_debug__V_22_22;

                  {
                    ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__HeadVar__3_3, ll_backend__opt_debug__Uinstr_16);
                  }
                  {
                    mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_22_22);
                  }
                }
              }
            else
              {
                MR_String ll_backend__opt_debug__InstrComment_19;

                ll_backend__opt_debug__succeeded = ((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_16)) == (MR_mktag((MR_Integer) 1)));
                if (ll_backend__opt_debug__succeeded)
                  {
                    ll_backend__opt_debug__InstrComment_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 0)));
                    {
                      MR_Box ll_backend__opt_debug__conv0_STATE_VARIABLE_IO_23_23;

                      {
                        mercury__io__write_string_3_p_0((MR_String) "\t% ");
                      }
                      {
                        mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[0], ll_backend__opt_debug__InstrComment_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__opt_debug__conv0_STATE_VARIABLE_IO_23_23);
                      }
                    }
                  }
                else
                  {
                    MR_String ll_backend__opt_debug__V_30_30;

                    {
                      mercury__io__write_string_3_p_0((MR_String) "\t");
                    }
                    {
                      ll_backend__opt_debug__V_30_30 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__HeadVar__3_3, ll_backend__opt_debug__Uinstr_16);
                    }
                    {
                      mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_30_30);
                    }
                  }
              }
            ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__HeadVar__3_3 == (MR_Integer) 1);
            if (ll_backend__opt_debug__succeeded)
              {
                ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Comment_17, (MR_String) "") == 0);
                ll_backend__opt_debug__succeeded = !(ll_backend__opt_debug__succeeded);
              }
            if (ll_backend__opt_debug__succeeded)
              {
                MR_String ll_backend__opt_debug__V_32_32;

                {
                  ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", ll_backend__opt_debug__Comment_17);
                }
                {
                  mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_32_32);
                }
              }
            else
              {
              }
            {
              mercury__io__nl_2_p_0();
            }
            /* direct tailcall eliminated */
            {
              MR_Word ll_backend__opt_debug__HeadVar__1__tmp_copy_1 = ll_backend__opt_debug__Instrs_12;

              ll_backend__opt_debug__HeadVar__1_1 = ll_backend__opt_debug__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
ll_backend__opt_debug__maybe_write_instrs_6_p_0(
  MR_Word ll_backend__opt_debug__OptDebug_7,
  MR_Word ll_backend__opt_debug__AutoComments_8,
  MR_Word ll_backend__opt_debug__MaybeProcLabel_9,
  MR_Word ll_backend__opt_debug__Instrs_10)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;

    switch (ll_backend__opt_debug__OptDebug_7) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          ll_backend__opt_debug__write_instrs_5_p_0(ll_backend__opt_debug__Instrs_10, ll_backend__opt_debug__MaybeProcLabel_9, ll_backend__opt_debug__AutoComments_8);
        }
        break;
    }
  }
}

void MR_CALL 
ll_backend__opt_debug__msg_5_p_0(
  MR_Word ll_backend__opt_debug__OptDebug_6,
  MR_Integer ll_backend__opt_debug__LabelNo_7,
  MR_String ll_backend__opt_debug__Msg_8)
{
  {
    MR_bool ll_backend__opt_debug__succeeded;

    switch (ll_backend__opt_debug__OptDebug_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
          {
            mercury__io__write_string_3_p_0(ll_backend__opt_debug__Msg_8);
          }
          ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__LabelNo_7 >= (MR_Integer) 0);
          if (ll_backend__opt_debug__succeeded)
            {
              {
                mercury__io__write_string_3_p_0((MR_String) ", next label no: ");
              }
              {
                mercury__io__write_int_3_p_0(ll_backend__opt_debug__LabelNo_7);
              }
            }
          else
            {
            }
          {
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
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

/* :- end_module ll_backend.opt_debug. */
