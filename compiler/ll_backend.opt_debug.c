/*
** Automatically generated from `opt_debug.m'
** by the Mercury compiler,
** version rotd-2015-09-28
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
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "string.format.mih"
#include "string.parse_util.mih"




#line 1450 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
#line 1450 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1450 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1442 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
#line 1442 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1442 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1434 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
#line 1434 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1403 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
#line 1403 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1403 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1392 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
#line 1392 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1387 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
#line 1387 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1382 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
#line 1382 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1377 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
#line 1377 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_1,
#line 1377 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1371 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
#line 1371 "opt_debug.m"
  MR_String ll_backend__opt_debug__HeadVar__1_1,
#line 1371 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 1371 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3);

#line 1366 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
#line 1366 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1352 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
#line 1352 "opt_debug.m"
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3);

#line 998 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
#line 998 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiProcLabel_3);

#line 355 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
#line 355 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 355 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 355 "opt_debug.m"
  MR_String ll_backend__opt_debug__Prefix_3);

#line 241 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
#line 241 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4,
#line 241 "opt_debug.m"
  MR_String ll_backend__opt_debug__STATE_VARIABLE_Str_0_6,
#line 241 "opt_debug.m"
  MR_String * ll_backend__opt_debug__STATE_VARIABLE_Str_7);

#line 232 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
#line 232 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4);

#line 663 "opt_debug.m"
static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
#line 663 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 663 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1);

#line 216 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
#line 216 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 216 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 216 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 216 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3);

#line 194 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
#line 194 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 194 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 194 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 194 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[2][6];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][3];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][1];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_5[1][5];


#line 825 "opt_debug.m"
/* sealed */ struct ll_backend__opt_debug__vector_common_type_6_0_s {
#line 825 "opt_debug.m"
  const MR_String ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
#line 825 "opt_debug.m"
};

static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[19];



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


static /* final */ const struct ll_backend__opt_debug__vector_common_type_6_0_s ll_backend__opt_debug_vector_common_6[19] = {
  /* row 0 */   {     (MR_String) "mktag" },
  /* row 1 */   {     (MR_String) "tag" },
  /* row 2 */   {     (MR_String) "unmktag" },
  /* row 3 */   {     (MR_String) "strip_tag" },
  /* row 4 */   {     (MR_String) "mkbody" },
  /* row 5 */   {     (MR_String) "unmkbody" },
  /* row 6 */   {     (MR_String) "bitwise_complement" },
  /* row 7 */   {     (MR_String) "not" },
  /* row 8 */   {     (MR_String) "hash_string" },
  /* row 9 */   {     (MR_String) "hash_string2" },
  /* row 10 */   {     (MR_String) "hash_string3" },
  /* row 11 */   {     (MR_String) "hash_string4" },
  /* row 12 */   {     (MR_String) "hash_string5" },
  /* row 13 */   {     (MR_String) "hash_string6" },
  /* row 14 */   {     (MR_String) "ite_num_protects" },
  /* row 15 */   {     (MR_String) "ite_num_snapshots" },
  /* row 16 */   {     (MR_String) "disj_num_protects" },
  /* row 17 */   {     (MR_String) "disj_num_snapshots" },
  /* row 18 */   {     (MR_String) "commit_num_entries" },
};


#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 1450 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
#line 1450 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1450 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1450 "opt_debug.m"
{
#line 1453 "opt_debug.m"
  {
#line 1453 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1453 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1453 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1453 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1453 "opt_debug.m"
    else
#line 1454 "opt_debug.m"
      {
#line 1454 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1454 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1454 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
#line 1454 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 1454 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1468 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
#line 1468 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
#line 1468 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
#line 1468 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

#line 1469 "opt_debug.m"
        {
#line 1469 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_13);
        }
#line 1474 "opt_debug.m"
#line 1474 "opt_debug.m"
        switch (ll_backend__opt_debug__Dummy_15) {
#line 1474 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1474 "opt_debug.m"
          case (MR_Integer) 0:
#line 1475 "opt_debug.m"
            ll_backend__opt_debug__V_24_24 = (MR_String) " (dummy)";
#line 1474 "opt_debug.m"
            break;
#line 1474 "opt_debug.m"
          case (MR_Integer) 1:
#line 1474 "opt_debug.m"
            ll_backend__opt_debug__V_24_24 = (MR_String) "";
#line 1474 "opt_debug.m"
            break;
#line 1474 "opt_debug.m"
        }
#line 1469 "opt_debug.m"
        {
#line 1469 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_17, ll_backend__opt_debug__V_24_24);
        }
#line 1469 "opt_debug.m"
        {
#line 1469 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_23_23);
        }
#line 1469 "opt_debug.m"
        {
#line 1469 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, ll_backend__opt_debug__V_21_21);
        }
#line 1456 "opt_debug.m"
        {
#line 1456 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
#line 1455 "opt_debug.m"
        {
#line 1455 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
#line 1455 "opt_debug.m"
        {
#line 1455 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1454 "opt_debug.m"
      }
#line 1453 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1453 "opt_debug.m"
  }
#line 1450 "opt_debug.m"
}

#line 1442 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
#line 1442 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1442 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1442 "opt_debug.m"
{
#line 1445 "opt_debug.m"
  {
#line 1445 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1445 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1445 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1445 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1445 "opt_debug.m"
    else
#line 1446 "opt_debug.m"
      {
#line 1446 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1446 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
#line 1446 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
#line 1446 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 1446 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1461 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
#line 1461 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
#line 1461 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
#line 1461 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

#line 1474 "opt_debug.m"
#line 1474 "opt_debug.m"
        switch (ll_backend__opt_debug__Dummy_15) {
#line 1474 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1474 "opt_debug.m"
          case (MR_Integer) 0:
#line 1475 "opt_debug.m"
            ll_backend__opt_debug__V_21_21 = (MR_String) " (dummy)";
#line 1474 "opt_debug.m"
            break;
#line 1474 "opt_debug.m"
          case (MR_Integer) 1:
#line 1474 "opt_debug.m"
            ll_backend__opt_debug__V_21_21 = (MR_String) "";
#line 1474 "opt_debug.m"
            break;
#line 1474 "opt_debug.m"
        }
#line 1463 "opt_debug.m"
        {
#line 1463 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_17);
        }
#line 1462 "opt_debug.m"
        {
#line 1462 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_24_24);
        }
#line 1462 "opt_debug.m"
        {
#line 1462 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, ll_backend__opt_debug__V_22_22);
        }
#line 1462 "opt_debug.m"
        {
#line 1462 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_13, ll_backend__opt_debug__V_20_20);
        }
#line 1448 "opt_debug.m"
        {
#line 1448 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
#line 1447 "opt_debug.m"
        {
#line 1447 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
#line 1447 "opt_debug.m"
        {
#line 1447 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1446 "opt_debug.m"
      }
#line 1445 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1445 "opt_debug.m"
  }
#line 1442 "opt_debug.m"
}

#line 1434 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
#line 1434 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1434 "opt_debug.m"
{
#line 1436 "opt_debug.m"
  {
#line 1436 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1436 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1436 "opt_debug.m"
#line 1436 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1436 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1436 "opt_debug.m"
      case (MR_Integer) 0:
#line 1436 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "affects_liveness";
#line 1436 "opt_debug.m"
        break;
#line 1436 "opt_debug.m"
      case (MR_Integer) 2:
#line 1440 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "default_affects_liveness";
#line 1436 "opt_debug.m"
        break;
#line 1436 "opt_debug.m"
      case (MR_Integer) 1:
#line 1438 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "does_not_affect_liveness";
#line 1436 "opt_debug.m"
        break;
#line 1436 "opt_debug.m"
    }
#line 1436 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1436 "opt_debug.m"
  }
#line 1434 "opt_debug.m"
}

#line 1403 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
#line 1403 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1403 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1403 "opt_debug.m"
{
#line 1406 "opt_debug.m"
  {
#line 1406 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1406 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1406 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1406 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1406 "opt_debug.m"
    else
#line 1407 "opt_debug.m"
      {
#line 1407 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1407 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1407 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1407 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;

#line 1413 "opt_debug.m"
#line 1413 "opt_debug.m"
        switch (MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) {
#line 1413 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "opt_debug.m"
          case (MR_Integer) 0:
#line 1432 "opt_debug.m"
            ll_backend__opt_debug__V_8_8 = (MR_String) "";
#line 1413 "opt_debug.m"
            break;
#line 1413 "opt_debug.m"
          case (MR_Integer) 1:
#line 1413 "opt_debug.m"
            {
#line 1413 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

#line 1414 "opt_debug.m"
              {
#line 1414 "opt_debug.m"
                ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_11);
              }
#line 1413 "opt_debug.m"
            }
#line 1413 "opt_debug.m"
            break;
#line 1413 "opt_debug.m"
          case (MR_Integer) 2:
#line 1415 "opt_debug.m"
            {
#line 1415 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

#line 1416 "opt_debug.m"
              {
#line 1416 "opt_debug.m"
                ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Outputs_13);
              }
#line 1415 "opt_debug.m"
            }
#line 1413 "opt_debug.m"
            break;
#line 1413 "opt_debug.m"
          case (MR_Integer) 3:
#line 1413 "opt_debug.m"
#line 1413 "opt_debug.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) {
#line 1413 "opt_debug.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1413 "opt_debug.m"
              case (MR_Integer) 0:
#line 1417 "opt_debug.m"
                {
#line 1417 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__AL_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
#line 1417 "opt_debug.m"
                  MR_String ll_backend__opt_debug__Code_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));
#line 1417 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));

#line 1418 "opt_debug.m"
                  ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_17, (MR_String) "") == 0);
#line 1417 "opt_debug.m"
                  if (ll_backend__opt_debug__succeeded)
#line 1419 "opt_debug.m"
                    {
#line 1419 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_19_19;
#line 1419 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_20_20;

#line 1436 "opt_debug.m"
#line 1436 "opt_debug.m"
                      switch (ll_backend__opt_debug__AL_16) {
#line 1436 "opt_debug.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1436 "opt_debug.m"
                        case (MR_Integer) 0:
#line 1436 "opt_debug.m"
                          ll_backend__opt_debug__V_20_20 = (MR_String) "affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 2:
#line 1440 "opt_debug.m"
                          ll_backend__opt_debug__V_20_20 = (MR_String) "default_affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 1:
#line 1438 "opt_debug.m"
                          ll_backend__opt_debug__V_20_20 = (MR_String) "does_not_affect_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                      }
#line 1419 "opt_debug.m"
                      {
#line 1419 "opt_debug.m"
                        ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, (MR_String) "\n");
                      }
#line 1419 "opt_debug.m"
                      {
#line 1419 "opt_debug.m"
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty user_code: ", ll_backend__opt_debug__V_19_19);
                      }
#line 1419 "opt_debug.m"
                    }
#line 1417 "opt_debug.m"
                  else
#line 1421 "opt_debug.m"
                    {
#line 1421 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_23_23;
#line 1421 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_24_24;
#line 1421 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_25_25;
#line 1421 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_27_27;

#line 1436 "opt_debug.m"
#line 1436 "opt_debug.m"
                      switch (ll_backend__opt_debug__AL_16) {
#line 1436 "opt_debug.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1436 "opt_debug.m"
                        case (MR_Integer) 0:
#line 1436 "opt_debug.m"
                          ll_backend__opt_debug__V_24_24 = (MR_String) "affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 2:
#line 1440 "opt_debug.m"
                          ll_backend__opt_debug__V_24_24 = (MR_String) "default_affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 1:
#line 1438 "opt_debug.m"
                          ll_backend__opt_debug__V_24_24 = (MR_String) "does_not_affect_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                      }
#line 1421 "opt_debug.m"
                      {
#line 1421 "opt_debug.m"
                        ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_17, (MR_String) "\n");
                      }
#line 1421 "opt_debug.m"
                      {
#line 1421 "opt_debug.m"
                        ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_27_27);
                      }
#line 1421 "opt_debug.m"
                      {
#line 1421 "opt_debug.m"
                        ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, ll_backend__opt_debug__V_25_25);
                      }
#line 1421 "opt_debug.m"
                      {
#line 1421 "opt_debug.m"
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "user_code: ", ll_backend__opt_debug__V_23_23);
                      }
#line 1421 "opt_debug.m"
                    }
#line 1417 "opt_debug.m"
                }
#line 1413 "opt_debug.m"
                break;
#line 1413 "opt_debug.m"
              case (MR_Integer) 1:
#line 1423 "opt_debug.m"
                {
#line 1423 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__AL_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
#line 1423 "opt_debug.m"
                  MR_String ll_backend__opt_debug__Code_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 4)));
#line 1423 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
#line 1423 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));

#line 1424 "opt_debug.m"
                  ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_33, (MR_String) "") == 0);
#line 1423 "opt_debug.m"
                  if (ll_backend__opt_debug__succeeded)
#line 1425 "opt_debug.m"
                    {
#line 1425 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_35_35;
#line 1425 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_36_36;

#line 1436 "opt_debug.m"
#line 1436 "opt_debug.m"
                      switch (ll_backend__opt_debug__AL_31) {
#line 1436 "opt_debug.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1436 "opt_debug.m"
                        case (MR_Integer) 0:
#line 1436 "opt_debug.m"
                          ll_backend__opt_debug__V_36_36 = (MR_String) "affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 2:
#line 1440 "opt_debug.m"
                          ll_backend__opt_debug__V_36_36 = (MR_String) "default_affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 1:
#line 1438 "opt_debug.m"
                          ll_backend__opt_debug__V_36_36 = (MR_String) "does_not_affect_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                      }
#line 1425 "opt_debug.m"
                      {
#line 1425 "opt_debug.m"
                        ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_36_36, (MR_String) "\n");
                      }
#line 1425 "opt_debug.m"
                      {
#line 1425 "opt_debug.m"
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty raw_code: ", ll_backend__opt_debug__V_35_35);
                      }
#line 1425 "opt_debug.m"
                    }
#line 1423 "opt_debug.m"
                  else
#line 1427 "opt_debug.m"
                    {
#line 1427 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_39_39;
#line 1427 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_40_40;
#line 1427 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_41_41;
#line 1427 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_43_43;

#line 1436 "opt_debug.m"
#line 1436 "opt_debug.m"
                      switch (ll_backend__opt_debug__AL_31) {
#line 1436 "opt_debug.m"
                        default: /*NOTREACHED*/ MR_assert(0);
#line 1436 "opt_debug.m"
                        case (MR_Integer) 0:
#line 1436 "opt_debug.m"
                          ll_backend__opt_debug__V_40_40 = (MR_String) "affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 2:
#line 1440 "opt_debug.m"
                          ll_backend__opt_debug__V_40_40 = (MR_String) "default_affects_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                        case (MR_Integer) 1:
#line 1438 "opt_debug.m"
                          ll_backend__opt_debug__V_40_40 = (MR_String) "does_not_affect_liveness";
#line 1436 "opt_debug.m"
                          break;
#line 1436 "opt_debug.m"
                      }
#line 1427 "opt_debug.m"
                      {
#line 1427 "opt_debug.m"
                        ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_33, (MR_String) "\n");
                      }
#line 1427 "opt_debug.m"
                      {
#line 1427 "opt_debug.m"
                        ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_43_43);
                      }
#line 1427 "opt_debug.m"
                      {
#line 1427 "opt_debug.m"
                        ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, ll_backend__opt_debug__V_41_41);
                      }
#line 1427 "opt_debug.m"
                      {
#line 1427 "opt_debug.m"
                        ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "raw_code:\n", ll_backend__opt_debug__V_39_39);
                      }
#line 1427 "opt_debug.m"
                    }
#line 1423 "opt_debug.m"
                }
#line 1413 "opt_debug.m"
                break;
#line 1413 "opt_debug.m"
              case (MR_Integer) 2:
#line 1429 "opt_debug.m"
                {
#line 1429 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__Label_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
#line 1429 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_48_48;
#line 1429 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_49_49;

#line 1430 "opt_debug.m"
                  {
#line 1430 "opt_debug.m"
                    ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_46);
                  }
#line 1430 "opt_debug.m"
                  {
#line 1430 "opt_debug.m"
                    ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) "\n");
                  }
#line 1430 "opt_debug.m"
                  {
#line 1430 "opt_debug.m"
                    ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "fail to ", ll_backend__opt_debug__V_48_48);
                  }
#line 1429 "opt_debug.m"
                }
#line 1413 "opt_debug.m"
                break;
#line 1413 "opt_debug.m"
              case (MR_Integer) 3:
#line 1431 "opt_debug.m"
                ll_backend__opt_debug__V_8_8 = (MR_String) "<alloc_id>";
#line 1413 "opt_debug.m"
                break;
#line 1413 "opt_debug.m"
            }
#line 1413 "opt_debug.m"
            break;
#line 1413 "opt_debug.m"
        }
#line 1409 "opt_debug.m"
        {
#line 1409 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Comps_7);
        }
#line 1408 "opt_debug.m"
        {
#line 1408 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1407 "opt_debug.m"
      }
#line 1406 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1406 "opt_debug.m"
  }
#line 1403 "opt_debug.m"
}

#line 1392 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
#line 1392 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1392 "opt_debug.m"
{
#line 1394 "opt_debug.m"
  {
#line 1394 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1394 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1394 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1394 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
#line 1394 "opt_debug.m"
    else
#line 1395 "opt_debug.m"
      {
#line 1395 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decl_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 1395 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decls_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_5_5;
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__TypeStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 1)));
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 2)));
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 1395 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 1400 "opt_debug.m"
        MR_Word ll_backend__opt_debug___MerType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 0)));

#line 1401 "opt_debug.m"
        {
#line 1401 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_9, (MR_String) "\n");
        }
#line 1401 "opt_debug.m"
        {
#line 1401 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_14_14);
        }
#line 1401 "opt_debug.m"
        {
#line 1401 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypeStr_8, ll_backend__opt_debug__V_12_12);
        }
#line 1401 "opt_debug.m"
        {
#line 1401 "opt_debug.m"
          ll_backend__opt_debug__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "decl ", ll_backend__opt_debug__V_11_11);
        }
#line 1396 "opt_debug.m"
        {
#line 1396 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_4);
        }
#line 1396 "opt_debug.m"
        {
#line 1396 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_5_5, ll_backend__opt_debug__V_6_6);
        }
#line 1395 "opt_debug.m"
      }
#line 1394 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1394 "opt_debug.m"
  }
#line 1392 "opt_debug.m"
}

#line 1387 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
#line 1387 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1387 "opt_debug.m"
{
#line 1389 "opt_debug.m"
  {
#line 1389 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1389 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1389 "opt_debug.m"
#line 1389 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1389 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1389 "opt_debug.m"
      case (MR_Integer) 1:
#line 1390 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_use_atomic_alloc";
#line 1389 "opt_debug.m"
        break;
#line 1389 "opt_debug.m"
      case (MR_Integer) 0:
#line 1389 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_use_atomic_alloc";
#line 1389 "opt_debug.m"
        break;
#line 1389 "opt_debug.m"
    }
#line 1389 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1389 "opt_debug.m"
  }
#line 1387 "opt_debug.m"
}

#line 1382 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
#line 1382 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1382 "opt_debug.m"
{
#line 1384 "opt_debug.m"
  {
#line 1384 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1384 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1384 "opt_debug.m"
#line 1384 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1384 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1384 "opt_debug.m"
      case (MR_Integer) 0:
#line 1384 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_duplicate";
#line 1384 "opt_debug.m"
        break;
#line 1384 "opt_debug.m"
      case (MR_Integer) 1:
#line 1385 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_duplicate";
#line 1384 "opt_debug.m"
        break;
#line 1384 "opt_debug.m"
    }
#line 1384 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1384 "opt_debug.m"
  }
#line 1382 "opt_debug.m"
}

#line 1377 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
#line 1377 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_1,
#line 1377 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1377 "opt_debug.m"
{
#line 1379 "opt_debug.m"
  {
#line 1379 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1379 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1379 "opt_debug.m"
#line 1379 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__2_2) {
#line 1379 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1379 "opt_debug.m"
      case (MR_Integer) 0:
#line 1379 "opt_debug.m"
        {
#line 1379 "opt_debug.m"
          {
#line 1379 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " no\n");
          }
#line 1379 "opt_debug.m"
        }
#line 1379 "opt_debug.m"
        break;
#line 1379 "opt_debug.m"
      case (MR_Integer) 1:
#line 1380 "opt_debug.m"
        {
#line 1380 "opt_debug.m"
          {
#line 1380 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " yes\n");
          }
#line 1380 "opt_debug.m"
        }
#line 1379 "opt_debug.m"
        break;
#line 1379 "opt_debug.m"
    }
#line 1379 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1379 "opt_debug.m"
  }
#line 1377 "opt_debug.m"
}

#line 1371 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
#line 1371 "opt_debug.m"
  MR_String ll_backend__opt_debug__HeadVar__1_1,
#line 1371 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 1371 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 1371 "opt_debug.m"
{
#line 1373 "opt_debug.m"
  {
#line 1373 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1373 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 1373 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1373 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 1373 "opt_debug.m"
    else
#line 1374 "opt_debug.m"
      {
#line 1374 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1374 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1374 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 1374 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1375 "opt_debug.m"
        {
#line 1375 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Label_9);
        }
#line 1375 "opt_debug.m"
        {
#line 1375 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, (MR_String) "\n");
        }
#line 1375 "opt_debug.m"
        {
#line 1375 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_12_12);
        }
#line 1375 "opt_debug.m"
        {
#line 1375 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__V_10_10);
        }
#line 1374 "opt_debug.m"
      }
#line 1373 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 1373 "opt_debug.m"
  }
#line 1371 "opt_debug.m"
}

#line 1366 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
#line 1366 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1366 "opt_debug.m"
{
#line 1368 "opt_debug.m"
  {
#line 1368 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1368 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1368 "opt_debug.m"
#line 1368 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1368 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1368 "opt_debug.m"
      case (MR_Integer) 0:
#line 1368 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_call_mercury";
#line 1368 "opt_debug.m"
        break;
#line 1368 "opt_debug.m"
      case (MR_Integer) 1:
#line 1369 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "will_not_call_mercury";
#line 1368 "opt_debug.m"
        break;
#line 1368 "opt_debug.m"
    }
#line 1368 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1368 "opt_debug.m"
  }
#line 1366 "opt_debug.m"
}

#line 1352 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
#line 1352 "opt_debug.m"
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3)
#line 1352 "opt_debug.m"
{
#line 1354 "opt_debug.m"
  {
#line 1354 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1354 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;
#line 1354 "opt_debug.m"
    MR_Word ll_backend__opt_debug__StackId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 0)));
#line 1354 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__FirstSlot_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 1)));
#line 1354 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__LastSlot_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 2)));

#line 1360 "opt_debug.m"
#line 1360 "opt_debug.m"
    switch (ll_backend__opt_debug__StackId_5) {
#line 1360 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1360 "opt_debug.m"
      case (MR_Integer) 0:
#line 1357 "opt_debug.m"
        {
#line 1357 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_15_15;
#line 1357 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_16_16;
#line 1357 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_17_17;
#line 1357 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_19_19;

#line 1358 "opt_debug.m"
          {
#line 1358 "opt_debug.m"
            ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
          }
#line 1359 "opt_debug.m"
          {
#line 1359 "opt_debug.m"
            ll_backend__opt_debug__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
          }
#line 1359 "opt_debug.m"
          {
#line 1359 "opt_debug.m"
            ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_19_19);
          }
#line 1359 "opt_debug.m"
          {
#line 1359 "opt_debug.m"
            ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
          }
#line 1358 "opt_debug.m"
          {
#line 1358 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "detstack slots ", ll_backend__opt_debug__V_15_15);
          }
#line 1357 "opt_debug.m"
        }
#line 1360 "opt_debug.m"
        break;
#line 1360 "opt_debug.m"
      case (MR_Integer) 1:
#line 1361 "opt_debug.m"
        {
#line 1361 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_9_9;
#line 1361 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_10_10;
#line 1361 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_11_11;
#line 1361 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_13_13;

#line 1362 "opt_debug.m"
          {
#line 1362 "opt_debug.m"
            ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
          }
#line 1363 "opt_debug.m"
          {
#line 1363 "opt_debug.m"
            ll_backend__opt_debug__V_13_13 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
          }
#line 1363 "opt_debug.m"
          {
#line 1363 "opt_debug.m"
            ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_13_13);
          }
#line 1363 "opt_debug.m"
          {
#line 1363 "opt_debug.m"
            ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
          }
#line 1362 "opt_debug.m"
          {
#line 1362 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "nondetstack slots ", ll_backend__opt_debug__V_9_9);
          }
#line 1361 "opt_debug.m"
        }
#line 1360 "opt_debug.m"
        break;
#line 1360 "opt_debug.m"
    }
#line 1354 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 1354 "opt_debug.m"
  }
#line 1352 "opt_debug.m"
}

#line 998 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
#line 998 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiProcLabel_3)
#line 998 "opt_debug.m"
{
#line 1000 "opt_debug.m"
  {
#line 1000 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1000 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;
#line 1000 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_4_4;

#line 1001 "opt_debug.m"
    {
#line 1001 "opt_debug.m"
      ll_backend__opt_debug__V_4_4 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__opt_debug__RttiProcLabel_3);
    }
#line 1001 "opt_debug.m"
    {
#line 1001 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__2_2 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__V_4_4);
    }
#line 1000 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1000 "opt_debug.m"
  }
#line 998 "opt_debug.m"
}

#line 355 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
#line 355 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 355 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 355 "opt_debug.m"
  MR_String ll_backend__opt_debug__Prefix_3)
#line 355 "opt_debug.m"
{
#line 357 "opt_debug.m"
  {
#line 357 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 357 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 357 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 357 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 357 "opt_debug.m"
    else
#line 358 "opt_debug.m"
      {
#line 358 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 358 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lvallist_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 358 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 358 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 359 "opt_debug.m"
        {
#line 359 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_8);
        }
#line 360 "opt_debug.m"
        {
#line 360 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lvallist_9, (MR_String) " ");
        }
#line 359 "opt_debug.m"
        {
#line 359 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
#line 359 "opt_debug.m"
        {
#line 359 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Prefix_3, ll_backend__opt_debug__V_11_11);
        }
#line 358 "opt_debug.m"
      }
#line 357 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 357 "opt_debug.m"
  }
#line 355 "opt_debug.m"
}

#line 241 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
#line 241 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4,
#line 241 "opt_debug.m"
  MR_String ll_backend__opt_debug__STATE_VARIABLE_Str_0_6,
#line 241 "opt_debug.m"
  MR_String * ll_backend__opt_debug__STATE_VARIABLE_Str_7)
#line 241 "opt_debug.m"
{
#line 246 "opt_debug.m"
  {
#line 246 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__C_4 == (MR_Char) 10);

#line 246 "opt_debug.m"
    if (ll_backend__opt_debug__succeeded)
#line 245 "opt_debug.m"
      {
#line 245 "opt_debug.m"
        {
#line 245 "opt_debug.m"
          *ll_backend__opt_debug__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__STATE_VARIABLE_Str_0_6, (MR_String) "\n\t% ");
        }
#line 245 "opt_debug.m"
      }
#line 246 "opt_debug.m"
    else
#line 247 "opt_debug.m"
      {
#line 247 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 247 "opt_debug.m"
        {
#line 247 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__char_to_string_1_f_0(ll_backend__opt_debug__C_4);
        }
#line 247 "opt_debug.m"
        {
#line 247 "opt_debug.m"
          *ll_backend__opt_debug__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__STATE_VARIABLE_Str_0_6, ll_backend__opt_debug__V_11_11);
        }
#line 247 "opt_debug.m"
      }
#line 246 "opt_debug.m"
  }
#line 241 "opt_debug.m"
}

#line 232 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
#line 232 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4)
#line 232 "opt_debug.m"
{
#line 237 "opt_debug.m"
  {
#line 237 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__C_4 == (MR_Char) 10);

#line 237 "opt_debug.m"
    if (ll_backend__opt_debug__succeeded)
#line 236 "opt_debug.m"
      {
#line 236 "opt_debug.m"
        {
#line 236 "opt_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t% ");
#line 236 "opt_debug.m"
          return;
        }
#line 236 "opt_debug.m"
      }
#line 237 "opt_debug.m"
    else
#line 238 "opt_debug.m"
      {
#line 238 "opt_debug.m"
        mercury__io__write_char_3_p_0(ll_backend__opt_debug__C_4);
#line 238 "opt_debug.m"
        return;
      }
#line 237 "opt_debug.m"
  }
#line 232 "opt_debug.m"
}

#line 136 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstrs_3_f_0(
#line 136 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
#line 136 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 136 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 136 "opt_debug.m"
{
#line 1488 "opt_debug.m"
  {
#line 1488 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1488 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 1488 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1488 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 1488 "opt_debug.m"
    else
#line 1489 "opt_debug.m"
      {
#line 1489 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1489 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
#line 1489 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1489 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;

#line 1490 "opt_debug.m"
        {
#line 1490 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_fullinstr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instr_9);
        }
#line 1491 "opt_debug.m"
        {
#line 1491 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
#line 1491 "opt_debug.m"
        {
#line 1491 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_11_11, ll_backend__opt_debug__V_12_12);
        }
#line 1489 "opt_debug.m"
      }
#line 1488 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 1488 "opt_debug.m"
  }
#line 136 "opt_debug.m"
}

#line 134 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_fullinstr_3_f_0(
#line 134 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_5,
#line 134 "opt_debug.m"
  MR_Word ll_backend__opt_debug__AutoComments_6,
#line 134 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 134 "opt_debug.m"
{
#line 1478 "opt_debug.m"
  {
#line 1478 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1478 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_9;
#line 1478 "opt_debug.m"
    MR_Word ll_backend__opt_debug__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1478 "opt_debug.m"
    MR_String ll_backend__opt_debug__Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));

#line 1482 "opt_debug.m"
#line 1482 "opt_debug.m"
    switch (ll_backend__opt_debug__AutoComments_6) {
#line 1482 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1482 "opt_debug.m"
      case (MR_Integer) 0:
#line 1480 "opt_debug.m"
        {
#line 1480 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_15_15;

#line 1481 "opt_debug.m"
          {
#line 1481 "opt_debug.m"
            ll_backend__opt_debug__V_15_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
          }
#line 1481 "opt_debug.m"
          {
#line 1481 "opt_debug.m"
            return ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) "\n");
          }
#line 1480 "opt_debug.m"
        }
#line 1482 "opt_debug.m"
        break;
#line 1482 "opt_debug.m"
      case (MR_Integer) 1:
#line 1483 "opt_debug.m"
        {
#line 1483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_10_10;
#line 1483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_11_11;
#line 1483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_13_13;

#line 1484 "opt_debug.m"
          {
#line 1484 "opt_debug.m"
            ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
          }
#line 1485 "opt_debug.m"
          {
#line 1485 "opt_debug.m"
            ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_8, (MR_String) "\n");
          }
#line 1485 "opt_debug.m"
          {
#line 1485 "opt_debug.m"
            ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ll_backend__opt_debug__V_13_13);
          }
#line 1484 "opt_debug.m"
          {
#line 1484 "opt_debug.m"
            return ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
          }
#line 1483 "opt_debug.m"
        }
#line 1482 "opt_debug.m"
        break;
#line 1482 "opt_debug.m"
    }
#line 1478 "opt_debug.m"
    return ll_backend__opt_debug__Str_9;
#line 1478 "opt_debug.m"
  }
#line 134 "opt_debug.m"
}

#line 132 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_instr_3_f_0(
#line 132 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_5,
#line 132 "opt_debug.m"
  MR_Word ll_backend__opt_debug__AutoComments_6,
#line 132 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Instr_7)
#line 132 "opt_debug.m"
{
#line 1038 "opt_debug.m"
  {
#line 1038 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1038 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_8;

#line 1038 "opt_debug.m"
#line 1038 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) {
#line 1038 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "opt_debug.m"
      case (MR_Integer) 0:
#line 1038 "opt_debug.m"
#line 1038 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__Instr_7)) {
#line 1038 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "opt_debug.m"
          case (MR_Integer) 0:
#line 1287 "opt_debug.m"
            ll_backend__opt_debug__Str_8 = (MR_String) "prune_ticket";
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 1:
#line 1284 "opt_debug.m"
            ll_backend__opt_debug__Str_8 = (MR_String) "discard_ticket";
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
        }
#line 1038 "opt_debug.m"
        break;
#line 1038 "opt_debug.m"
      case (MR_Integer) 1:
#line 1038 "opt_debug.m"
        {
#line 1038 "opt_debug.m"
          MR_String ll_backend__opt_debug__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
#line 1038 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_399_399;

#line 1039 "opt_debug.m"
          {
#line 1039 "opt_debug.m"
            ll_backend__opt_debug__V_399_399 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_9, (MR_String) ")");
          }
#line 1039 "opt_debug.m"
          {
#line 1039 "opt_debug.m"
            return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "comment(", ll_backend__opt_debug__V_399_399);
          }
#line 1038 "opt_debug.m"
        }
#line 1038 "opt_debug.m"
        break;
#line 1038 "opt_debug.m"
      case (MR_Integer) 2:
#line 1041 "opt_debug.m"
        {
#line 1041 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Livevals_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
#line 1041 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_395_395;
#line 1041 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_396_396;

#line 1042 "opt_debug.m"
          {
#line 1042 "opt_debug.m"
            ll_backend__opt_debug__V_396_396 = ll_backend__opt_debug__dump_livevals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Livevals_10);
          }
#line 1042 "opt_debug.m"
          {
#line 1042 "opt_debug.m"
            ll_backend__opt_debug__V_395_395 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_396_396, (MR_String) ")");
          }
#line 1042 "opt_debug.m"
          {
#line 1042 "opt_debug.m"
            return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "livevals(", ll_backend__opt_debug__V_395_395);
          }
#line 1041 "opt_debug.m"
        }
#line 1038 "opt_debug.m"
        break;
#line 1038 "opt_debug.m"
      case (MR_Integer) 3:
#line 1038 "opt_debug.m"
#line 1038 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) {
#line 1038 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1038 "opt_debug.m"
          case (MR_Integer) 0:
#line 1044 "opt_debug.m"
            {
#line 1044 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__RTemps_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1044 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__FTemps_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1044 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_383_383;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_384_384;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_385_385;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_387_387;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_388_388;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_389_389;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_391_391;
#line 1044 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_392_392;

#line 1045 "opt_debug.m"
              {
#line 1045 "opt_debug.m"
                ll_backend__opt_debug__V_384_384 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__RTemps_11);
              }
#line 1046 "opt_debug.m"
              {
#line 1046 "opt_debug.m"
                ll_backend__opt_debug__V_388_388 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FTemps_12);
              }
#line 1047 "opt_debug.m"
              {
#line 1047 "opt_debug.m"
                ll_backend__opt_debug__V_392_392 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Instrs_13);
              }
#line 1048 "opt_debug.m"
              {
#line 1048 "opt_debug.m"
                ll_backend__opt_debug__V_391_391 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_392_392, (MR_String) "\t)");
              }
#line 1047 "opt_debug.m"
              {
#line 1047 "opt_debug.m"
                ll_backend__opt_debug__V_389_389 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", ll_backend__opt_debug__V_391_391);
              }
#line 1046 "opt_debug.m"
              {
#line 1046 "opt_debug.m"
                ll_backend__opt_debug__V_387_387 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_388_388, ll_backend__opt_debug__V_389_389);
              }
#line 1046 "opt_debug.m"
              {
#line 1046 "opt_debug.m"
                ll_backend__opt_debug__V_385_385 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_387_387);
              }
#line 1045 "opt_debug.m"
              {
#line 1045 "opt_debug.m"
                ll_backend__opt_debug__V_383_383 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_384_384, ll_backend__opt_debug__V_385_385);
              }
#line 1045 "opt_debug.m"
              {
#line 1045 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "block(", ll_backend__opt_debug__V_383_383);
              }
#line 1044 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 1:
#line 1050 "opt_debug.m"
            {
#line 1050 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1050 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1050 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_378_378;
#line 1050 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_379_379;
#line 1050 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_381_381;

#line 1051 "opt_debug.m"
              {
#line 1051 "opt_debug.m"
                ll_backend__opt_debug__V_378_378 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_14);
              }
#line 1052 "opt_debug.m"
              {
#line 1052 "opt_debug.m"
                ll_backend__opt_debug__V_381_381 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_15);
              }
#line 1051 "opt_debug.m"
              {
#line 1051 "opt_debug.m"
                ll_backend__opt_debug__V_379_379 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_381_381);
              }
#line 1051 "opt_debug.m"
              {
#line 1051 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_378_378, ll_backend__opt_debug__V_379_379);
              }
#line 1050 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 2:
#line 1054 "opt_debug.m"
            {
#line 1054 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_373_373;
#line 1054 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_374_374;
#line 1054 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_375_375;
#line 1054 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_377_377;
#line 1054 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1054 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1055 "opt_debug.m"
              {
#line 1055 "opt_debug.m"
                ll_backend__opt_debug__V_374_374 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_401);
              }
#line 1056 "opt_debug.m"
              {
#line 1056 "opt_debug.m"
                ll_backend__opt_debug__V_377_377 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_402);
              }
#line 1055 "opt_debug.m"
              {
#line 1055 "opt_debug.m"
                ll_backend__opt_debug__V_375_375 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_377_377);
              }
#line 1055 "opt_debug.m"
              {
#line 1055 "opt_debug.m"
                ll_backend__opt_debug__V_373_373 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_374_374, ll_backend__opt_debug__V_375_375);
              }
#line 1055 "opt_debug.m"
              {
#line 1055 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "keep ", ll_backend__opt_debug__V_373_373);
              }
#line 1054 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 3:
#line 1059 "opt_debug.m"
            {
#line 1059 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1059 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ReturnLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1059 "opt_debug.m"
              MR_Word ll_backend__opt_debug__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__CallModelStr_22;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_362_362;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_363_363;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_364_364;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_366_366;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_367_367;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_368_368;
#line 1059 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_370_370;
#line 1058 "opt_debug.m"
              MR_Word ll_backend__opt_debug___LiveInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1058 "opt_debug.m"
              MR_Word ll_backend__opt_debug___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 1058 "opt_debug.m"
              MR_Word ll_backend__opt_debug___GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

#line 1063 "opt_debug.m"
#line 1063 "opt_debug.m"
              switch (MR_tag((MR_Word) ll_backend__opt_debug__CallModel_21)) {
#line 1063 "opt_debug.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "opt_debug.m"
                case (MR_Integer) 0:
#line 1063 "opt_debug.m"
                  {
#line 1063 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 1063 "opt_debug.m"
#line 1063 "opt_debug.m"
                    switch (ll_backend__opt_debug__V_433_433) {
#line 1063 "opt_debug.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "opt_debug.m"
                      case (MR_Integer) 1:
#line 1062 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                      case (MR_Integer) 0:
#line 1065 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det_no_lco";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                    }
#line 1063 "opt_debug.m"
                  }
#line 1063 "opt_debug.m"
                  break;
#line 1063 "opt_debug.m"
                case (MR_Integer) 1:
#line 1063 "opt_debug.m"
                  {
#line 1063 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 1063 "opt_debug.m"
#line 1063 "opt_debug.m"
                    switch (ll_backend__opt_debug__V_435_435) {
#line 1063 "opt_debug.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "opt_debug.m"
                      case (MR_Integer) 1:
#line 1068 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                      case (MR_Integer) 0:
#line 1071 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet_no_lco";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                    }
#line 1063 "opt_debug.m"
                  }
#line 1063 "opt_debug.m"
                  break;
#line 1063 "opt_debug.m"
                case (MR_Integer) 2:
#line 1063 "opt_debug.m"
                  {
#line 1063 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 1063 "opt_debug.m"
#line 1063 "opt_debug.m"
                    switch (ll_backend__opt_debug__V_434_434) {
#line 1063 "opt_debug.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1063 "opt_debug.m"
                      case (MR_Integer) 1:
#line 1077 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet checked_tail_call";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                      case (MR_Integer) 0:
#line 1074 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet no_tail_call";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                      case (MR_Integer) 2:
#line 1080 "opt_debug.m"
                        ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet unchecked_tail_call";
#line 1063 "opt_debug.m"
                        break;
#line 1063 "opt_debug.m"
                    }
#line 1063 "opt_debug.m"
                  }
#line 1063 "opt_debug.m"
                  break;
#line 1063 "opt_debug.m"
              }
#line 1082 "opt_debug.m"
              {
#line 1082 "opt_debug.m"
                ll_backend__opt_debug__V_363_363 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Callee_16);
              }
#line 1083 "opt_debug.m"
              {
#line 1083 "opt_debug.m"
                ll_backend__opt_debug__V_367_367 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ReturnLabel_17);
              }
#line 1084 "opt_debug.m"
              {
#line 1084 "opt_debug.m"
                ll_backend__opt_debug__V_370_370 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__CallModelStr_22, (MR_String) ")");
              }
#line 1084 "opt_debug.m"
              {
#line 1084 "opt_debug.m"
                ll_backend__opt_debug__V_368_368 = mercury__string__f_43_43_2_f_0((MR_String) ", ..., ", ll_backend__opt_debug__V_370_370);
              }
#line 1083 "opt_debug.m"
              {
#line 1083 "opt_debug.m"
                ll_backend__opt_debug__V_366_366 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_367_367, ll_backend__opt_debug__V_368_368);
              }
#line 1083 "opt_debug.m"
              {
#line 1083 "opt_debug.m"
                ll_backend__opt_debug__V_364_364 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_366_366);
              }
#line 1082 "opt_debug.m"
              {
#line 1082 "opt_debug.m"
                ll_backend__opt_debug__V_362_362 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_363_363, ll_backend__opt_debug__V_364_364);
              }
#line 1082 "opt_debug.m"
              {
#line 1082 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "call(", ll_backend__opt_debug__V_362_362);
              }
#line 1059 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 4:
#line 1086 "opt_debug.m"
            {
#line 1086 "opt_debug.m"
              MR_Word ll_backend__opt_debug__FrameInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1086 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeRedoip_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1086 "opt_debug.m"
              MR_String ll_backend__opt_debug__R_str_26;

#line 1090 "opt_debug.m"
              if ((ll_backend__opt_debug__MaybeRedoip_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1091 "opt_debug.m"
                ll_backend__opt_debug__R_str_26 = (MR_String) "no_redoip";
#line 1090 "opt_debug.m"
              else
#line 1088 "opt_debug.m"
                {
#line 1088 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__Redoip_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRedoip_24, (MR_Integer) 0)));

#line 1089 "opt_debug.m"
                  {
#line 1089 "opt_debug.m"
                    ll_backend__opt_debug__R_str_26 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Redoip_25);
                  }
#line 1088 "opt_debug.m"
                }
#line 1098 "opt_debug.m"
              if (((MR_tag((MR_Word) ll_backend__opt_debug__FrameInfo_23)) == (MR_mktag((MR_Integer) 1))))
#line 1095 "opt_debug.m"
                {
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));
#line 1095 "opt_debug.m"
                  MR_Integer ll_backend__opt_debug__Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 1)));
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_345_345;
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_346_346;
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_348_348;
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_349_349;
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_350_350;
#line 1095 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_352_352;

#line 1096 "opt_debug.m"
                  {
#line 1096 "opt_debug.m"
                    ll_backend__opt_debug__V_349_349 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_28);
                  }
#line 1097 "opt_debug.m"
                  {
#line 1097 "opt_debug.m"
                    ll_backend__opt_debug__V_352_352 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                  }
#line 1097 "opt_debug.m"
                  {
#line 1097 "opt_debug.m"
                    ll_backend__opt_debug__V_350_350 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_352_352);
                  }
#line 1096 "opt_debug.m"
                  {
#line 1096 "opt_debug.m"
                    ll_backend__opt_debug__V_348_348 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_349_349, ll_backend__opt_debug__V_350_350);
                  }
#line 1096 "opt_debug.m"
                  {
#line 1096 "opt_debug.m"
                    ll_backend__opt_debug__V_346_346 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_348_348);
                  }
#line 1096 "opt_debug.m"
                  {
#line 1096 "opt_debug.m"
                    ll_backend__opt_debug__V_345_345 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Name_27, ll_backend__opt_debug__V_346_346);
                  }
#line 1096 "opt_debug.m"
                  {
#line 1096 "opt_debug.m"
                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkframe(", ll_backend__opt_debug__V_345_345);
                  }
#line 1095 "opt_debug.m"
                }
#line 1098 "opt_debug.m"
              else
#line 1099 "opt_debug.m"
                {
#line 1099 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));

#line 1103 "opt_debug.m"
#line 1103 "opt_debug.m"
                  switch (ll_backend__opt_debug__Kind_29) {
#line 1103 "opt_debug.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1103 "opt_debug.m"
                    case (MR_Integer) 0:
#line 1104 "opt_debug.m"
                      {
#line 1104 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_339_339;

#line 1105 "opt_debug.m"
                        {
#line 1105 "opt_debug.m"
                          ll_backend__opt_debug__V_339_339 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                        }
#line 1105 "opt_debug.m"
                        {
#line 1105 "opt_debug.m"
                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkdettempframe(", ll_backend__opt_debug__V_339_339);
                        }
#line 1104 "opt_debug.m"
                      }
#line 1103 "opt_debug.m"
                      break;
#line 1103 "opt_debug.m"
                    case (MR_Integer) 1:
#line 1101 "opt_debug.m"
                      {
#line 1101 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_342_342;

#line 1102 "opt_debug.m"
                        {
#line 1102 "opt_debug.m"
                          ll_backend__opt_debug__V_342_342 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                        }
#line 1102 "opt_debug.m"
                        {
#line 1102 "opt_debug.m"
                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mktempframe(", ll_backend__opt_debug__V_342_342);
                        }
#line 1101 "opt_debug.m"
                      }
#line 1103 "opt_debug.m"
                      break;
#line 1103 "opt_debug.m"
                  }
#line 1099 "opt_debug.m"
                }
#line 1086 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 5:
#line 1109 "opt_debug.m"
            {
#line 1109 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Label_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1109 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_336_336;

#line 1110 "opt_debug.m"
              {
#line 1110 "opt_debug.m"
                ll_backend__opt_debug__V_336_336 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_30);
              }
#line 1110 "opt_debug.m"
              {
#line 1110 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_336_336, (MR_String) ":");
              }
#line 1109 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 6:
#line 1112 "opt_debug.m"
            {
#line 1112 "opt_debug.m"
              MR_Word ll_backend__opt_debug__CodeAddr_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1112 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_335_335;

#line 1113 "opt_debug.m"
              {
#line 1113 "opt_debug.m"
                ll_backend__opt_debug__V_335_335 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_31);
              }
#line 1113 "opt_debug.m"
              {
#line 1113 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__opt_debug__V_335_335);
              }
#line 1112 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 7:
#line 1115 "opt_debug.m"
            {
#line 1115 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeLabels_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1115 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_329_329;
#line 1115 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_330_330;
#line 1115 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_331_331;
#line 1115 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_333_333;
#line 1115 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1116 "opt_debug.m"
              {
#line 1116 "opt_debug.m"
                ll_backend__opt_debug__V_330_330 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_403);
              }
#line 1117 "opt_debug.m"
              {
#line 1117 "opt_debug.m"
                ll_backend__opt_debug__V_333_333 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MaybeLabels_32);
              }
#line 1117 "opt_debug.m"
              {
#line 1117 "opt_debug.m"
                ll_backend__opt_debug__V_331_331 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__opt_debug__V_333_333);
              }
#line 1116 "opt_debug.m"
              {
#line 1116 "opt_debug.m"
                ll_backend__opt_debug__V_329_329 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_330_330, ll_backend__opt_debug__V_331_331);
              }
#line 1116 "opt_debug.m"
              {
#line 1116 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "computed_goto ", ll_backend__opt_debug__V_329_329);
              }
#line 1115 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 8:
#line 1119 "opt_debug.m"
            {
#line 1119 "opt_debug.m"
              MR_Word ll_backend__opt_debug__AL_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1119 "opt_debug.m"
              MR_String ll_backend__opt_debug__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1119 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_322_322;
#line 1119 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_323_323;
#line 1119 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_324_324;
#line 1119 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_326_326;
#line 1119 "opt_debug.m"
              MR_Word ll_backend__opt_debug__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1120 "opt_debug.m"
              {
#line 1120 "opt_debug.m"
                ll_backend__opt_debug__V_323_323 = ll_backend__opt_debug__dump_affects_liveness_1_f_0(ll_backend__opt_debug__AL_33);
              }
#line 1121 "opt_debug.m"
              {
#line 1121 "opt_debug.m"
                ll_backend__opt_debug__V_326_326 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_35, (MR_String) ")");
              }
#line 1120 "opt_debug.m"
              {
#line 1120 "opt_debug.m"
                ll_backend__opt_debug__V_324_324 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_326_326);
              }
#line 1120 "opt_debug.m"
              {
#line 1120 "opt_debug.m"
                ll_backend__opt_debug__V_322_322 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_323_323, ll_backend__opt_debug__V_324_324);
              }
#line 1120 "opt_debug.m"
              {
#line 1120 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "arbitrary_c_code(", ll_backend__opt_debug__V_322_322);
              }
#line 1119 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 9:
#line 1123 "opt_debug.m"
            {
#line 1123 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_316_316;
#line 1123 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_317_317;
#line 1123 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_318_318;
#line 1123 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_320_320;
#line 1123 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1123 "opt_debug.m"
              MR_Word ll_backend__opt_debug__CodeAddr_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1124 "opt_debug.m"
              {
#line 1124 "opt_debug.m"
                ll_backend__opt_debug__V_317_317 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_404);
              }
#line 1125 "opt_debug.m"
              {
#line 1125 "opt_debug.m"
                ll_backend__opt_debug__V_320_320 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_405);
              }
#line 1125 "opt_debug.m"
              {
#line 1125 "opt_debug.m"
                ll_backend__opt_debug__V_318_318 = mercury__string__f_43_43_2_f_0((MR_String) ") goto ", ll_backend__opt_debug__V_320_320);
              }
#line 1124 "opt_debug.m"
              {
#line 1124 "opt_debug.m"
                ll_backend__opt_debug__V_316_316 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_317_317, ll_backend__opt_debug__V_318_318);
              }
#line 1124 "opt_debug.m"
              {
#line 1124 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "if (", ll_backend__opt_debug__V_316_316);
              }
#line 1123 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 10:
#line 1127 "opt_debug.m"
            {
#line 1127 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_312_312;
#line 1127 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_313_313;
#line 1127 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1128 "opt_debug.m"
              {
#line 1128 "opt_debug.m"
                ll_backend__opt_debug__V_313_313 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_406);
              }
#line 1128 "opt_debug.m"
              {
#line 1128 "opt_debug.m"
                ll_backend__opt_debug__V_312_312 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_313_313, (MR_String) ")");
              }
#line 1128 "opt_debug.m"
              {
#line 1128 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "save_maxfr(", ll_backend__opt_debug__V_312_312);
              }
#line 1127 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 11:
#line 1130 "opt_debug.m"
            {
#line 1130 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_308_308;
#line 1130 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_309_309;
#line 1130 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1131 "opt_debug.m"
              {
#line 1131 "opt_debug.m"
                ll_backend__opt_debug__V_309_309 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_407);
              }
#line 1131 "opt_debug.m"
              {
#line 1131 "opt_debug.m"
                ll_backend__opt_debug__V_308_308 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_309_309, (MR_String) ")");
              }
#line 1131 "opt_debug.m"
              {
#line 1131 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_maxfr(", ll_backend__opt_debug__V_308_308);
              }
#line 1130 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 12:
#line 1134 "opt_debug.m"
            {
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeOffset_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MayUseAtomic_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__T_str_42;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__O_str_44;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__Region_str_46;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__Reuse_str_48;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__Flag_str_49;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_281_281;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_282_282;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_283_283;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_285_285;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_286_286;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_288_288;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_289_289;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_291_291;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_292_292;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_293_293;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_295_295;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_296_296;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_297_297;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_299_299;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_300_300;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_302_302;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_303_303;
#line 1134 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_305_305;
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1134 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Size_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 1133 "opt_debug.m"
              MR_Word ll_backend__opt_debug__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

#line 1138 "opt_debug.m"
              if ((ll_backend__opt_debug__MaybeTag_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1136 "opt_debug.m"
                ll_backend__opt_debug__T_str_42 = (MR_String) "no";
#line 1138 "opt_debug.m"
              else
#line 1139 "opt_debug.m"
                {
#line 1139 "opt_debug.m"
                  MR_Integer ll_backend__opt_debug__Tag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_36, (MR_Integer) 0)));

#line 1140 "opt_debug.m"
                  {
#line 1140 "opt_debug.m"
                    mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Tag_43, &ll_backend__opt_debug__T_str_42);
                  }
#line 1139 "opt_debug.m"
                }
#line 1145 "opt_debug.m"
              if ((ll_backend__opt_debug__MaybeOffset_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1143 "opt_debug.m"
                ll_backend__opt_debug__O_str_44 = (MR_String) "no";
#line 1145 "opt_debug.m"
              else
#line 1146 "opt_debug.m"
                {
#line 1146 "opt_debug.m"
                  MR_Integer ll_backend__opt_debug__Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_37, (MR_Integer) 0)));

#line 1147 "opt_debug.m"
                  {
#line 1147 "opt_debug.m"
                    mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Offset_45, &ll_backend__opt_debug__O_str_44);
                  }
#line 1146 "opt_debug.m"
                }
#line 1152 "opt_debug.m"
              if ((ll_backend__opt_debug__MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1150 "opt_debug.m"
                ll_backend__opt_debug__Region_str_46 = (MR_String) "no";
#line 1152 "opt_debug.m"
              else
#line 1153 "opt_debug.m"
                {
#line 1153 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__RegionRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRegionRval_40, (MR_Integer) 0)));

#line 1154 "opt_debug.m"
                  {
#line 1154 "opt_debug.m"
                    ll_backend__opt_debug__Region_str_46 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__RegionRval_47);
                  }
#line 1153 "opt_debug.m"
                }
#line 1160 "opt_debug.m"
              if ((ll_backend__opt_debug__MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1157 "opt_debug.m"
                {
#line 1158 "opt_debug.m"
                  ll_backend__opt_debug__Reuse_str_48 = (MR_String) "no";
#line 1159 "opt_debug.m"
                  ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
#line 1157 "opt_debug.m"
                }
#line 1160 "opt_debug.m"
              else
#line 1161 "opt_debug.m"
                {
#line 1161 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 0)));
#line 1161 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 1)));

#line 1162 "opt_debug.m"
                  {
#line 1162 "opt_debug.m"
                    ll_backend__opt_debug__Reuse_str_48 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__ReuseRval_50);
                  }
#line 1166 "opt_debug.m"
                  if ((ll_backend__opt_debug__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1164 "opt_debug.m"
                    ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
#line 1166 "opt_debug.m"
                  else
#line 1167 "opt_debug.m"
                    {
#line 1167 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeFlagLval_51, (MR_Integer) 0)));

#line 1168 "opt_debug.m"
                      {
#line 1168 "opt_debug.m"
                        ll_backend__opt_debug__Flag_str_49 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__FlagLval_52);
                      }
#line 1167 "opt_debug.m"
                    }
#line 1161 "opt_debug.m"
                }
#line 1171 "opt_debug.m"
              {
#line 1171 "opt_debug.m"
                ll_backend__opt_debug__V_282_282 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_408);
              }
#line 1173 "opt_debug.m"
              {
#line 1173 "opt_debug.m"
                ll_backend__opt_debug__V_292_292 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Size_409);
              }
#line 1174 "opt_debug.m"
              {
#line 1174 "opt_debug.m"
                ll_backend__opt_debug__V_296_296 = ll_backend__opt_debug__dump_may_use_atomic_1_f_0(ll_backend__opt_debug__MayUseAtomic_39);
              }
#line 1176 "opt_debug.m"
              {
#line 1176 "opt_debug.m"
                ll_backend__opt_debug__V_305_305 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Flag_str_49, (MR_String) ")");
              }
#line 1176 "opt_debug.m"
              {
#line 1176 "opt_debug.m"
                ll_backend__opt_debug__V_303_303 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_305_305);
              }
#line 1176 "opt_debug.m"
              {
#line 1176 "opt_debug.m"
                ll_backend__opt_debug__V_302_302 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Reuse_str_48, ll_backend__opt_debug__V_303_303);
              }
#line 1175 "opt_debug.m"
              {
#line 1175 "opt_debug.m"
                ll_backend__opt_debug__V_300_300 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_302_302);
              }
#line 1175 "opt_debug.m"
              {
#line 1175 "opt_debug.m"
                ll_backend__opt_debug__V_299_299 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Region_str_46, ll_backend__opt_debug__V_300_300);
              }
#line 1174 "opt_debug.m"
              {
#line 1174 "opt_debug.m"
                ll_backend__opt_debug__V_297_297 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_299_299);
              }
#line 1174 "opt_debug.m"
              {
#line 1174 "opt_debug.m"
                ll_backend__opt_debug__V_295_295 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_296_296, ll_backend__opt_debug__V_297_297);
              }
#line 1173 "opt_debug.m"
              {
#line 1173 "opt_debug.m"
                ll_backend__opt_debug__V_293_293 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_295_295);
              }
#line 1173 "opt_debug.m"
              {
#line 1173 "opt_debug.m"
                ll_backend__opt_debug__V_291_291 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_292_292, ll_backend__opt_debug__V_293_293);
              }
#line 1172 "opt_debug.m"
              {
#line 1172 "opt_debug.m"
                ll_backend__opt_debug__V_289_289 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_291_291);
              }
#line 1172 "opt_debug.m"
              {
#line 1172 "opt_debug.m"
                ll_backend__opt_debug__V_288_288 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__O_str_44, ll_backend__opt_debug__V_289_289);
              }
#line 1172 "opt_debug.m"
              {
#line 1172 "opt_debug.m"
                ll_backend__opt_debug__V_286_286 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_288_288);
              }
#line 1172 "opt_debug.m"
              {
#line 1172 "opt_debug.m"
                ll_backend__opt_debug__V_285_285 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_42, ll_backend__opt_debug__V_286_286);
              }
#line 1171 "opt_debug.m"
              {
#line 1171 "opt_debug.m"
                ll_backend__opt_debug__V_283_283 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_285_285);
              }
#line 1171 "opt_debug.m"
              {
#line 1171 "opt_debug.m"
                ll_backend__opt_debug__V_281_281 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_282_282, ll_backend__opt_debug__V_283_283);
              }
#line 1171 "opt_debug.m"
              {
#line 1171 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_hp(", ll_backend__opt_debug__V_281_281);
              }
#line 1134 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 13:
#line 1178 "opt_debug.m"
            {
#line 1178 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_275_275;
#line 1178 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_276_276;
#line 1178 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1179 "opt_debug.m"
              {
#line 1179 "opt_debug.m"
                ll_backend__opt_debug__V_276_276 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_410);
              }
#line 1179 "opt_debug.m"
              {
#line 1179 "opt_debug.m"
                ll_backend__opt_debug__V_275_275 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_276_276, (MR_String) ")");
              }
#line 1179 "opt_debug.m"
              {
#line 1179 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_hp(", ll_backend__opt_debug__V_275_275);
              }
#line 1178 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 14:
#line 1181 "opt_debug.m"
            {
#line 1181 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_271_271;
#line 1181 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_272_272;
#line 1181 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1182 "opt_debug.m"
              {
#line 1182 "opt_debug.m"
                ll_backend__opt_debug__V_272_272 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_411);
              }
#line 1182 "opt_debug.m"
              {
#line 1182 "opt_debug.m"
                ll_backend__opt_debug__V_271_271 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_272_272, (MR_String) ")");
              }
#line 1182 "opt_debug.m"
              {
#line 1182 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_hp(", ll_backend__opt_debug__V_271_271);
              }
#line 1181 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 15:
#line 1184 "opt_debug.m"
            {
#line 1184 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_267_267;
#line 1184 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_268_268;
#line 1184 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1185 "opt_debug.m"
              {
#line 1185 "opt_debug.m"
                ll_backend__opt_debug__V_268_268 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_412);
              }
#line 1185 "opt_debug.m"
              {
#line 1185 "opt_debug.m"
                ll_backend__opt_debug__V_267_267 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_268_268, (MR_String) ")");
              }
#line 1185 "opt_debug.m"
              {
#line 1185 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "free_heap(", ll_backend__opt_debug__V_267_267);
              }
#line 1184 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 16:
#line 1187 "opt_debug.m"
            {
#line 1187 "opt_debug.m"
              MR_Word ll_backend__opt_debug__StackId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1187 "opt_debug.m"
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1187 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_259_259;
#line 1187 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_260_260;
#line 1187 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_261_261;
#line 1187 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_263_263;
#line 1187 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_264_264;

#line 1189 "opt_debug.m"
              {
#line 1189 "opt_debug.m"
                ll_backend__opt_debug__V_260_260 = ll_backend__llds__region_stack_id_to_string_1_f_0(ll_backend__opt_debug__StackId_53);
              }
#line 1190 "opt_debug.m"
              {
#line 1190 "opt_debug.m"
                ll_backend__opt_debug__V_264_264 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_54);
              }
#line 1190 "opt_debug.m"
              {
#line 1190 "opt_debug.m"
                ll_backend__opt_debug__V_263_263 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_264_264, (MR_String) ")");
              }
#line 1189 "opt_debug.m"
              {
#line 1189 "opt_debug.m"
                ll_backend__opt_debug__V_261_261 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_263_263);
              }
#line 1189 "opt_debug.m"
              {
#line 1189 "opt_debug.m"
                ll_backend__opt_debug__V_259_259 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_260_260, ll_backend__opt_debug__V_261_261);
              }
#line 1188 "opt_debug.m"
              {
#line 1188 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "push_region_frame(", ll_backend__opt_debug__V_259_259);
              }
#line 1187 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 17:
#line 1193 "opt_debug.m"
            {
#line 1193 "opt_debug.m"
              MR_Word ll_backend__opt_debug__FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1193 "opt_debug.m"
              MR_Word ll_backend__opt_debug__IdRval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1193 "opt_debug.m"
              MR_Word ll_backend__opt_debug__NumLval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 1193 "opt_debug.m"
              MR_Word ll_backend__opt_debug__AddrLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__FillOpStr_59;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_240_240;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_241_241;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_243_243;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_244_244;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_245_245;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_247_247;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_248_248;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_249_249;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_251_251;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_252_252;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_253_253;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_255_255;
#line 1193 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_256_256;
#line 1193 "opt_debug.m"
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_413 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1197 "opt_debug.m"
#line 1197 "opt_debug.m"
              switch (MR_tag((MR_Word) ll_backend__opt_debug__FillOp_55)) {
#line 1197 "opt_debug.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1197 "opt_debug.m"
                case (MR_Integer) 0:
#line 1197 "opt_debug.m"
#line 1197 "opt_debug.m"
                  switch (MR_unmkbody(ll_backend__opt_debug__FillOp_55)) {
#line 1197 "opt_debug.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1197 "opt_debug.m"
                    case (MR_Integer) 0:
#line 1195 "opt_debug.m"
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_protect";
#line 1197 "opt_debug.m"
                      break;
#line 1197 "opt_debug.m"
                    case (MR_Integer) 1:
#line 1204 "opt_debug.m"
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "semi_disj_protect";
#line 1197 "opt_debug.m"
                      break;
#line 1197 "opt_debug.m"
                    case (MR_Integer) 2:
#line 1207 "opt_debug.m"
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "disj_snapshot";
#line 1197 "opt_debug.m"
                      break;
#line 1197 "opt_debug.m"
                    case (MR_Integer) 3:
#line 1210 "opt_debug.m"
                      ll_backend__opt_debug__FillOpStr_59 = (MR_String) "commit";
#line 1197 "opt_debug.m"
                      break;
#line 1197 "opt_debug.m"
                  }
#line 1197 "opt_debug.m"
                  break;
#line 1197 "opt_debug.m"
                case (MR_Integer) 1:
#line 1197 "opt_debug.m"
                  {
#line 1197 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FillOp_55, (MR_Integer) 0)));

#line 1197 "opt_debug.m"
#line 1197 "opt_debug.m"
                    switch (ll_backend__opt_debug__V_436_436) {
#line 1197 "opt_debug.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1197 "opt_debug.m"
                      case (MR_Integer) 1:
#line 1202 "opt_debug.m"
                        ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(not_removed_at_start_of_else)";
#line 1197 "opt_debug.m"
                        break;
#line 1197 "opt_debug.m"
                      case (MR_Integer) 0:
#line 1199 "opt_debug.m"
                        ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(removed_at_start_of_else)";
#line 1197 "opt_debug.m"
                        break;
#line 1197 "opt_debug.m"
                    }
#line 1197 "opt_debug.m"
                  }
#line 1197 "opt_debug.m"
                  break;
#line 1197 "opt_debug.m"
              }
#line 1215 "opt_debug.m"
              {
#line 1215 "opt_debug.m"
                ll_backend__opt_debug__V_244_244 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_413);
              }
#line 1216 "opt_debug.m"
              {
#line 1216 "opt_debug.m"
                ll_backend__opt_debug__V_248_248 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__IdRval_56);
              }
#line 1217 "opt_debug.m"
              {
#line 1217 "opt_debug.m"
                ll_backend__opt_debug__V_252_252 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__NumLval_57);
              }
#line 1218 "opt_debug.m"
              {
#line 1218 "opt_debug.m"
                ll_backend__opt_debug__V_256_256 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AddrLval_58);
              }
#line 1218 "opt_debug.m"
              {
#line 1218 "opt_debug.m"
                ll_backend__opt_debug__V_255_255 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_256_256, (MR_String) ")");
              }
#line 1217 "opt_debug.m"
              {
#line 1217 "opt_debug.m"
                ll_backend__opt_debug__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_255_255);
              }
#line 1217 "opt_debug.m"
              {
#line 1217 "opt_debug.m"
                ll_backend__opt_debug__V_251_251 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_252_252, ll_backend__opt_debug__V_253_253);
              }
#line 1216 "opt_debug.m"
              {
#line 1216 "opt_debug.m"
                ll_backend__opt_debug__V_249_249 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_251_251);
              }
#line 1216 "opt_debug.m"
              {
#line 1216 "opt_debug.m"
                ll_backend__opt_debug__V_247_247 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_248_248, ll_backend__opt_debug__V_249_249);
              }
#line 1215 "opt_debug.m"
              {
#line 1215 "opt_debug.m"
                ll_backend__opt_debug__V_245_245 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_247_247);
              }
#line 1215 "opt_debug.m"
              {
#line 1215 "opt_debug.m"
                ll_backend__opt_debug__V_243_243 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_244_244, ll_backend__opt_debug__V_245_245);
              }
#line 1214 "opt_debug.m"
              {
#line 1214 "opt_debug.m"
                ll_backend__opt_debug__V_241_241 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_243_243);
              }
#line 1214 "opt_debug.m"
              {
#line 1214 "opt_debug.m"
                ll_backend__opt_debug__V_240_240 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__FillOpStr_59, ll_backend__opt_debug__V_241_241);
              }
#line 1213 "opt_debug.m"
              {
#line 1213 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_fill_frame(", ll_backend__opt_debug__V_240_240);
              }
#line 1193 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 18:
#line 1220 "opt_debug.m"
            {
#line 1220 "opt_debug.m"
              MR_Word ll_backend__opt_debug__SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1220 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__SetOpStr_62 = ((&ll_backend__opt_debug_vector_common_6[14 + ll_backend__opt_debug__SetOp_60]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_227_227;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_228_228;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_230_230;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_231_231;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_232_232;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_234_234;
#line 1220 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_235_235;
#line 1220 "opt_debug.m"
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1239 "opt_debug.m"
              {
#line 1239 "opt_debug.m"
                ll_backend__opt_debug__V_231_231 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_414);
              }
#line 1240 "opt_debug.m"
              {
#line 1240 "opt_debug.m"
                ll_backend__opt_debug__V_235_235 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ValueRval_61);
              }
#line 1240 "opt_debug.m"
              {
#line 1240 "opt_debug.m"
                ll_backend__opt_debug__V_234_234 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_235_235, (MR_String) ")");
              }
#line 1239 "opt_debug.m"
              {
#line 1239 "opt_debug.m"
                ll_backend__opt_debug__V_232_232 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_234_234);
              }
#line 1239 "opt_debug.m"
              {
#line 1239 "opt_debug.m"
                ll_backend__opt_debug__V_230_230 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_231_231, ll_backend__opt_debug__V_232_232);
              }
#line 1238 "opt_debug.m"
              {
#line 1238 "opt_debug.m"
                ll_backend__opt_debug__V_228_228 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_230_230);
              }
#line 1238 "opt_debug.m"
              {
#line 1238 "opt_debug.m"
                ll_backend__opt_debug__V_227_227 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SetOpStr_62, ll_backend__opt_debug__V_228_228);
              }
#line 1237 "opt_debug.m"
              {
#line 1237 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_set_fixed_slot(", ll_backend__opt_debug__V_227_227);
              }
#line 1220 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 19:
#line 1242 "opt_debug.m"
            {
#line 1242 "opt_debug.m"
              MR_Word ll_backend__opt_debug__UseOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1242 "opt_debug.m"
              MR_String ll_backend__opt_debug__UseOpStr_64;
#line 1242 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_220_220;
#line 1242 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_221_221;
#line 1242 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_223_223;
#line 1242 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_224_224;
#line 1242 "opt_debug.m"
              MR_Word ll_backend__opt_debug__EmbeddedStackFrame_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1246 "opt_debug.m"
#line 1246 "opt_debug.m"
              switch (MR_tag((MR_Word) ll_backend__opt_debug__UseOp_63)) {
#line 1246 "opt_debug.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 1246 "opt_debug.m"
                case (MR_Integer) 0:
#line 1246 "opt_debug.m"
#line 1246 "opt_debug.m"
                  switch (MR_unmkbody(ll_backend__opt_debug__UseOp_63)) {
#line 1246 "opt_debug.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 1246 "opt_debug.m"
                    case (MR_Integer) 0:
#line 1256 "opt_debug.m"
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_nondet_cond_fail";
#line 1246 "opt_debug.m"
                      break;
#line 1246 "opt_debug.m"
                    case (MR_Integer) 1:
#line 1259 "opt_debug.m"
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_later";
#line 1246 "opt_debug.m"
                      break;
#line 1246 "opt_debug.m"
                    case (MR_Integer) 2:
#line 1262 "opt_debug.m"
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_last";
#line 1246 "opt_debug.m"
                      break;
#line 1246 "opt_debug.m"
                    case (MR_Integer) 3:
#line 1265 "opt_debug.m"
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_nonlast_semi_commit";
#line 1246 "opt_debug.m"
                      break;
#line 1246 "opt_debug.m"
                    case (MR_Integer) 4:
#line 1268 "opt_debug.m"
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_success";
#line 1246 "opt_debug.m"
                      break;
#line 1246 "opt_debug.m"
                    case (MR_Integer) 5:
#line 1271 "opt_debug.m"
                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_failure";
#line 1246 "opt_debug.m"
                      break;
#line 1246 "opt_debug.m"
                  }
#line 1246 "opt_debug.m"
                  break;
#line 1246 "opt_debug.m"
                case (MR_Integer) 1:
#line 1246 "opt_debug.m"
                  {
#line 1246 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

#line 1246 "opt_debug.m"
#line 1246 "opt_debug.m"
                    switch (ll_backend__opt_debug__V_438_438) {
#line 1246 "opt_debug.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1246 "opt_debug.m"
                      case (MR_Integer) 1:
#line 1248 "opt_debug.m"
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(nondet)";
#line 1246 "opt_debug.m"
                        break;
#line 1246 "opt_debug.m"
                      case (MR_Integer) 0:
#line 1245 "opt_debug.m"
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(semidet)";
#line 1246 "opt_debug.m"
                        break;
#line 1246 "opt_debug.m"
                    }
#line 1246 "opt_debug.m"
                  }
#line 1246 "opt_debug.m"
                  break;
#line 1246 "opt_debug.m"
                case (MR_Integer) 2:
#line 1246 "opt_debug.m"
                  {
#line 1246 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

#line 1246 "opt_debug.m"
#line 1246 "opt_debug.m"
                    switch (ll_backend__opt_debug__V_437_437) {
#line 1246 "opt_debug.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 1246 "opt_debug.m"
                      case (MR_Integer) 1:
#line 1254 "opt_debug.m"
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(nondet)";
#line 1246 "opt_debug.m"
                        break;
#line 1246 "opt_debug.m"
                      case (MR_Integer) 0:
#line 1251 "opt_debug.m"
                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(semidet)";
#line 1246 "opt_debug.m"
                        break;
#line 1246 "opt_debug.m"
                    }
#line 1246 "opt_debug.m"
                  }
#line 1246 "opt_debug.m"
                  break;
#line 1246 "opt_debug.m"
              }
#line 1276 "opt_debug.m"
              {
#line 1276 "opt_debug.m"
                ll_backend__opt_debug__V_224_224 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_415);
              }
#line 1276 "opt_debug.m"
              {
#line 1276 "opt_debug.m"
                ll_backend__opt_debug__V_223_223 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_224_224, (MR_String) ")");
              }
#line 1275 "opt_debug.m"
              {
#line 1275 "opt_debug.m"
                ll_backend__opt_debug__V_221_221 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_223_223);
              }
#line 1275 "opt_debug.m"
              {
#line 1275 "opt_debug.m"
                ll_backend__opt_debug__V_220_220 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__UseOpStr_64, ll_backend__opt_debug__V_221_221);
              }
#line 1274 "opt_debug.m"
              {
#line 1274 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "use_and_maybe_pop_region_frame(", ll_backend__opt_debug__V_220_220);
              }
#line 1242 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 20:
#line 1278 "opt_debug.m"
            {
#line 1278 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_212_212;
#line 1278 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_213_213;
#line 1278 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1279 "opt_debug.m"
              {
#line 1279 "opt_debug.m"
                ll_backend__opt_debug__V_213_213 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_416);
              }
#line 1279 "opt_debug.m"
              {
#line 1279 "opt_debug.m"
                ll_backend__opt_debug__V_212_212 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_213_213, (MR_String) ")");
              }
#line 1279 "opt_debug.m"
              {
#line 1279 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "store_ticket(", ll_backend__opt_debug__V_212_212);
              }
#line 1278 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 21:
#line 1281 "opt_debug.m"
            {
#line 1281 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_208_208;
#line 1281 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_209_209;
#line 1281 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1281 "opt_debug.m"
              MR_Word ll_backend__opt_debug___Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1282 "opt_debug.m"
              {
#line 1282 "opt_debug.m"
                ll_backend__opt_debug__V_209_209 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_417);
              }
#line 1282 "opt_debug.m"
              {
#line 1282 "opt_debug.m"
                ll_backend__opt_debug__V_208_208 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_209_209, (MR_String) ", _)");
              }
#line 1282 "opt_debug.m"
              {
#line 1282 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "reset_ticket(", ll_backend__opt_debug__V_208_208);
              }
#line 1281 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 22:
#line 1290 "opt_debug.m"
            {
#line 1290 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_204_204;
#line 1290 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_205_205;
#line 1290 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1291 "opt_debug.m"
              {
#line 1291 "opt_debug.m"
                ll_backend__opt_debug__V_205_205 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_418);
              }
#line 1291 "opt_debug.m"
              {
#line 1291 "opt_debug.m"
                ll_backend__opt_debug__V_204_204 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_205_205, (MR_String) ")");
              }
#line 1291 "opt_debug.m"
              {
#line 1291 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_ticket_stack(", ll_backend__opt_debug__V_204_204);
              }
#line 1290 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 23:
#line 1293 "opt_debug.m"
            {
#line 1293 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_200_200;
#line 1293 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_201_201;
#line 1293 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Rval_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1294 "opt_debug.m"
              {
#line 1294 "opt_debug.m"
                ll_backend__opt_debug__V_201_201 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_419);
              }
#line 1294 "opt_debug.m"
              {
#line 1294 "opt_debug.m"
                ll_backend__opt_debug__V_200_200 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_201_201, (MR_String) ")");
              }
#line 1294 "opt_debug.m"
              {
#line 1294 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "prune_tickets_to(", ll_backend__opt_debug__V_200_200);
              }
#line 1293 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 24:
#line 1296 "opt_debug.m"
            {
#line 1296 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_192_192;
#line 1296 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_193_193;
#line 1296 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_194_194;
#line 1296 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_196_196;
#line 1296 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_197_197;
#line 1296 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Size_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1296 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Kind_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1296 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1297 "opt_debug.m"
              {
#line 1297 "opt_debug.m"
                ll_backend__opt_debug__V_193_193 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_420);
              }
#line 1298 "opt_debug.m"
              {
#line 1298 "opt_debug.m"
                ll_backend__opt_debug__V_197_197 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(ll_backend__opt_debug__Kind_421);
              }
#line 1298 "opt_debug.m"
              {
#line 1298 "opt_debug.m"
                ll_backend__opt_debug__V_196_196 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_197_197, (MR_String) ")");
              }
#line 1297 "opt_debug.m"
              {
#line 1297 "opt_debug.m"
                ll_backend__opt_debug__V_194_194 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_196_196);
              }
#line 1297 "opt_debug.m"
              {
#line 1297 "opt_debug.m"
                ll_backend__opt_debug__V_192_192 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_193_193, ll_backend__opt_debug__V_194_194);
              }
#line 1297 "opt_debug.m"
              {
#line 1297 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_sp(", ll_backend__opt_debug__V_192_192);
              }
#line 1296 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 25:
#line 1300 "opt_debug.m"
            {
#line 1300 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_188_188;
#line 1300 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_189_189;
#line 1300 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Size_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1301 "opt_debug.m"
              {
#line 1301 "opt_debug.m"
                ll_backend__opt_debug__V_189_189 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_422);
              }
#line 1301 "opt_debug.m"
              {
#line 1301 "opt_debug.m"
                ll_backend__opt_debug__V_188_188 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_189_189, (MR_String) ")");
              }
#line 1301 "opt_debug.m"
              {
#line 1301 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp(", ll_backend__opt_debug__V_188_188);
              }
#line 1300 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 26:
#line 1303 "opt_debug.m"
            {
#line 1303 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_184_184;
#line 1303 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_185_185;
#line 1303 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Size_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1304 "opt_debug.m"
              {
#line 1304 "opt_debug.m"
                ll_backend__opt_debug__V_185_185 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_423);
              }
#line 1304 "opt_debug.m"
              {
#line 1304 "opt_debug.m"
                ll_backend__opt_debug__V_184_184 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_185_185, (MR_String) ")");
              }
#line 1304 "opt_debug.m"
              {
#line 1304 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp_and_return(", ll_backend__opt_debug__V_184_184);
              }
#line 1303 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 27:
#line 1307 "opt_debug.m"
            {
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Decls_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Comps_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MCM_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MFNL_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MFL_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MFOL_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MNF_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MDL_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__SSR_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 9)));
#line 1307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MD_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 10)));
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_148_148;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_150_150;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_151_151;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_152_152;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_154_154;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_155_155;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_156_156;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_157_157;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_158_158;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_160_160;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_161_161;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_163_163;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_164_164;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_166_166;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_167_167;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_169_169;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_170_170;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_172_172;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_173_173;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_175_175;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_176_176;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_178_178;
#line 1307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_179_179;

#line 1309 "opt_debug.m"
              {
#line 1309 "opt_debug.m"
                ll_backend__opt_debug__V_151_151 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_67);
              }
#line 1310 "opt_debug.m"
              {
#line 1310 "opt_debug.m"
                ll_backend__opt_debug__V_155_155 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Comps_68);
              }
#line 1311 "opt_debug.m"
              {
#line 1311 "opt_debug.m"
                ll_backend__opt_debug__V_157_157 = ll_backend__opt_debug__dump_may_call_mercury_1_f_0(ll_backend__opt_debug__MCM_69);
              }
#line 1312 "opt_debug.m"
              {
#line 1312 "opt_debug.m"
                ll_backend__opt_debug__V_161_161 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix nolayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFNL_70);
              }
#line 1313 "opt_debug.m"
              {
#line 1313 "opt_debug.m"
                ll_backend__opt_debug__V_164_164 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix layout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFL_71);
              }
#line 1314 "opt_debug.m"
              {
#line 1314 "opt_debug.m"
                ll_backend__opt_debug__V_167_167 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix onlylayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFOL_72);
              }
#line 1315 "opt_debug.m"
              {
#line 1315 "opt_debug.m"
                ll_backend__opt_debug__V_170_170 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "nofix:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MNF_73);
              }
#line 1316 "opt_debug.m"
              {
#line 1316 "opt_debug.m"
                ll_backend__opt_debug__V_173_173 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "maybe def:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MDL_74);
              }
#line 1317 "opt_debug.m"
              {
#line 1317 "opt_debug.m"
                ll_backend__opt_debug__V_176_176 = ll_backend__opt_debug__dump_bool_msg_2_f_0((MR_String) "stack slot ref:", ll_backend__opt_debug__SSR_75);
              }
#line 1318 "opt_debug.m"
              {
#line 1318 "opt_debug.m"
                ll_backend__opt_debug__V_179_179 = ll_backend__opt_debug__dump_may_duplicate_1_f_0(ll_backend__opt_debug__MD_76);
              }
#line 1318 "opt_debug.m"
              {
#line 1318 "opt_debug.m"
                ll_backend__opt_debug__V_178_178 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_179_179, (MR_String) "\n)");
              }
#line 1318 "opt_debug.m"
              {
#line 1318 "opt_debug.m"
                ll_backend__opt_debug__V_175_175 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_176_176, ll_backend__opt_debug__V_178_178);
              }
#line 1317 "opt_debug.m"
              {
#line 1317 "opt_debug.m"
                ll_backend__opt_debug__V_172_172 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_173_173, ll_backend__opt_debug__V_175_175);
              }
#line 1316 "opt_debug.m"
              {
#line 1316 "opt_debug.m"
                ll_backend__opt_debug__V_169_169 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_170_170, ll_backend__opt_debug__V_172_172);
              }
#line 1315 "opt_debug.m"
              {
#line 1315 "opt_debug.m"
                ll_backend__opt_debug__V_166_166 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_167_167, ll_backend__opt_debug__V_169_169);
              }
#line 1314 "opt_debug.m"
              {
#line 1314 "opt_debug.m"
                ll_backend__opt_debug__V_163_163 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_164_164, ll_backend__opt_debug__V_166_166);
              }
#line 1313 "opt_debug.m"
              {
#line 1313 "opt_debug.m"
                ll_backend__opt_debug__V_160_160 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_161_161, ll_backend__opt_debug__V_163_163);
              }
#line 1312 "opt_debug.m"
              {
#line 1312 "opt_debug.m"
                ll_backend__opt_debug__V_158_158 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_160_160);
              }
#line 1311 "opt_debug.m"
              {
#line 1311 "opt_debug.m"
                ll_backend__opt_debug__V_156_156 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_157_157, ll_backend__opt_debug__V_158_158);
              }
#line 1311 "opt_debug.m"
              {
#line 1311 "opt_debug.m"
                ll_backend__opt_debug__V_154_154 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_155_155, ll_backend__opt_debug__V_156_156);
              }
#line 1310 "opt_debug.m"
              {
#line 1310 "opt_debug.m"
                ll_backend__opt_debug__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) "components:\n", ll_backend__opt_debug__V_154_154);
              }
#line 1310 "opt_debug.m"
              {
#line 1310 "opt_debug.m"
                ll_backend__opt_debug__V_150_150 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_151_151, ll_backend__opt_debug__V_152_152);
              }
#line 1309 "opt_debug.m"
              {
#line 1309 "opt_debug.m"
                ll_backend__opt_debug__V_148_148 = mercury__string__f_43_43_2_f_0((MR_String) "declarations:\n", ll_backend__opt_debug__V_150_150);
              }
#line 1309 "opt_debug.m"
              {
#line 1309 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_proc_code(\n", ll_backend__opt_debug__V_148_148);
              }
#line 1307 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 28:
#line 1321 "opt_debug.m"
            {
#line 1321 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1321 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__TSStringIndex_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_136_136;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_137_137;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_138_138;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_140_140;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_141_141;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_142_142;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_144_144;
#line 1321 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_145_145;
#line 1321 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_424 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1322 "opt_debug.m"
              {
#line 1322 "opt_debug.m"
                ll_backend__opt_debug__V_137_137 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_424);
              }
#line 1323 "opt_debug.m"
              {
#line 1323 "opt_debug.m"
                ll_backend__opt_debug__V_141_141 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_77);
              }
#line 1323 "opt_debug.m"
              {
#line 1323 "opt_debug.m"
                ll_backend__opt_debug__V_145_145 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TSStringIndex_78);
              }
#line 1323 "opt_debug.m"
              {
#line 1323 "opt_debug.m"
                ll_backend__opt_debug__V_144_144 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_145_145, (MR_String) ")");
              }
#line 1323 "opt_debug.m"
              {
#line 1323 "opt_debug.m"
                ll_backend__opt_debug__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_144_144);
              }
#line 1323 "opt_debug.m"
              {
#line 1323 "opt_debug.m"
                ll_backend__opt_debug__V_140_140 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_141_141, ll_backend__opt_debug__V_142_142);
              }
#line 1323 "opt_debug.m"
              {
#line 1323 "opt_debug.m"
                ll_backend__opt_debug__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_140_140);
              }
#line 1322 "opt_debug.m"
              {
#line 1322 "opt_debug.m"
                ll_backend__opt_debug__V_136_136 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_137_137, ll_backend__opt_debug__V_138_138);
              }
#line 1322 "opt_debug.m"
              {
#line 1322 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "init_sync_term(", ll_backend__opt_debug__V_136_136);
              }
#line 1321 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 29:
#line 1325 "opt_debug.m"
            {
#line 1325 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Child_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1325 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_128_128;
#line 1325 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_129_129;
#line 1325 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_130_130;
#line 1325 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_131_131;
#line 1325 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1326 "opt_debug.m"
              {
#line 1326 "opt_debug.m"
                ll_backend__opt_debug__V_129_129 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_425);
              }
#line 1327 "opt_debug.m"
              {
#line 1327 "opt_debug.m"
                ll_backend__opt_debug__V_131_131 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Child_79);
              }
#line 1327 "opt_debug.m"
              {
#line 1327 "opt_debug.m"
                ll_backend__opt_debug__V_130_130 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_131_131, (MR_String) ", )");
              }
#line 1327 "opt_debug.m"
              {
#line 1327 "opt_debug.m"
                ll_backend__opt_debug__V_128_128 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_129_129, ll_backend__opt_debug__V_130_130);
              }
#line 1326 "opt_debug.m"
              {
#line 1326 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "fork_new_child(", ll_backend__opt_debug__V_128_128);
              }
#line 1325 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 30:
#line 1329 "opt_debug.m"
            {
#line 1329 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_120_120;
#line 1329 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_121_121;
#line 1329 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_122_122;
#line 1329 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_124_124;
#line 1329 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_125_125;
#line 1329 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Lval_426 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1329 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Label_427 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1330 "opt_debug.m"
              {
#line 1330 "opt_debug.m"
                ll_backend__opt_debug__V_121_121 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_426);
              }
#line 1331 "opt_debug.m"
              {
#line 1331 "opt_debug.m"
                ll_backend__opt_debug__V_125_125 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_427);
              }
#line 1331 "opt_debug.m"
              {
#line 1331 "opt_debug.m"
                ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
              }
#line 1331 "opt_debug.m"
              {
#line 1331 "opt_debug.m"
                ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_124_124);
              }
#line 1330 "opt_debug.m"
              {
#line 1330 "opt_debug.m"
                ll_backend__opt_debug__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_121_121, ll_backend__opt_debug__V_122_122);
              }
#line 1330 "opt_debug.m"
              {
#line 1330 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "join_and_continue(", ll_backend__opt_debug__V_120_120);
              }
#line 1329 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 31:
#line 1333 "opt_debug.m"
            {
#line 1333 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__NumSlots_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1333 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCLval_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1333 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_112_112;
#line 1333 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_113_113;
#line 1333 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_114_114;
#line 1333 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_116_116;
#line 1333 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_117_117;

#line 1334 "opt_debug.m"
              {
#line 1334 "opt_debug.m"
                ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumSlots_80);
              }
#line 1335 "opt_debug.m"
              {
#line 1335 "opt_debug.m"
                ll_backend__opt_debug__V_117_117 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCLval_81);
              }
#line 1335 "opt_debug.m"
              {
#line 1335 "opt_debug.m"
                ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, (MR_String) ")");
              }
#line 1335 "opt_debug.m"
              {
#line 1335 "opt_debug.m"
                ll_backend__opt_debug__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_116_116);
              }
#line 1334 "opt_debug.m"
              {
#line 1334 "opt_debug.m"
                ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, ll_backend__opt_debug__V_114_114);
              }
#line 1334 "opt_debug.m"
              {
#line 1334 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_create_loop_control(", ll_backend__opt_debug__V_112_112);
              }
#line 1333 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 32:
#line 1337 "opt_debug.m"
            {
#line 1337 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCRval_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1337 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCSLval_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1337 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_104_104;
#line 1337 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_105_105;
#line 1337 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_106_106;
#line 1337 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_107_107;
#line 1337 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_108_108;
#line 1337 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_109_109;
#line 1337 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Label_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));

#line 1338 "opt_debug.m"
              {
#line 1338 "opt_debug.m"
                ll_backend__opt_debug__V_105_105 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_82);
              }
#line 1339 "opt_debug.m"
              {
#line 1339 "opt_debug.m"
                ll_backend__opt_debug__V_107_107 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSLval_83);
              }
#line 1340 "opt_debug.m"
              {
#line 1340 "opt_debug.m"
                ll_backend__opt_debug__V_109_109 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_428);
              }
#line 1340 "opt_debug.m"
              {
#line 1340 "opt_debug.m"
                ll_backend__opt_debug__V_108_108 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_109_109, (MR_String) ")");
              }
#line 1340 "opt_debug.m"
              {
#line 1340 "opt_debug.m"
                ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_107_107, ll_backend__opt_debug__V_108_108);
              }
#line 1339 "opt_debug.m"
              {
#line 1339 "opt_debug.m"
                ll_backend__opt_debug__V_104_104 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_105_105, ll_backend__opt_debug__V_106_106);
              }
#line 1338 "opt_debug.m"
              {
#line 1338 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_wait_free_slot(", ll_backend__opt_debug__V_104_104);
              }
#line 1337 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 33:
#line 1342 "opt_debug.m"
            {
#line 1342 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCSRval_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_92_92;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_93_93;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_94_94;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_96_96;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_97_97;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_98_98;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_100_100;
#line 1342 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_101_101;
#line 1342 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Label_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1342 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCRval_430 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1343 "opt_debug.m"
              {
#line 1343 "opt_debug.m"
                ll_backend__opt_debug__V_93_93 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_430);
              }
#line 1344 "opt_debug.m"
              {
#line 1344 "opt_debug.m"
                ll_backend__opt_debug__V_97_97 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_84);
              }
#line 1345 "opt_debug.m"
              {
#line 1345 "opt_debug.m"
                ll_backend__opt_debug__V_101_101 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_429);
              }
#line 1345 "opt_debug.m"
              {
#line 1345 "opt_debug.m"
                ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
              }
#line 1345 "opt_debug.m"
              {
#line 1345 "opt_debug.m"
                ll_backend__opt_debug__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_100_100);
              }
#line 1344 "opt_debug.m"
              {
#line 1344 "opt_debug.m"
                ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_97_97, ll_backend__opt_debug__V_98_98);
              }
#line 1344 "opt_debug.m"
              {
#line 1344 "opt_debug.m"
                ll_backend__opt_debug__V_94_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_96_96);
              }
#line 1343 "opt_debug.m"
              {
#line 1343 "opt_debug.m"
                ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_93_93, ll_backend__opt_debug__V_94_94);
              }
#line 1343 "opt_debug.m"
              {
#line 1343 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_spawn_off(", ll_backend__opt_debug__V_92_92);
              }
#line 1342 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
          case (MR_Integer) 34:
#line 1347 "opt_debug.m"
            {
#line 1347 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_86_86;
#line 1347 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_87_87;
#line 1347 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_88_88;
#line 1347 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_89_89;
#line 1347 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCRval_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1347 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LCSRval_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1348 "opt_debug.m"
              {
#line 1348 "opt_debug.m"
                ll_backend__opt_debug__V_87_87 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_431);
              }
#line 1349 "opt_debug.m"
              {
#line 1349 "opt_debug.m"
                ll_backend__opt_debug__V_89_89 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_432);
              }
#line 1349 "opt_debug.m"
              {
#line 1349 "opt_debug.m"
                ll_backend__opt_debug__V_88_88 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_89_89, (MR_String) ")");
              }
#line 1349 "opt_debug.m"
              {
#line 1349 "opt_debug.m"
                ll_backend__opt_debug__V_86_86 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_87_87, ll_backend__opt_debug__V_88_88);
              }
#line 1348 "opt_debug.m"
              {
#line 1348 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_join_and_terminate(", ll_backend__opt_debug__V_86_86);
              }
#line 1347 "opt_debug.m"
            }
#line 1038 "opt_debug.m"
            break;
#line 1038 "opt_debug.m"
        }
#line 1038 "opt_debug.m"
        break;
#line 1038 "opt_debug.m"
    }
#line 1038 "opt_debug.m"
    return ll_backend__opt_debug__Str_8;
#line 1038 "opt_debug.m"
  }
#line 132 "opt_debug.m"
}

#line 130 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(
#line 130 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 130 "opt_debug.m"
{
#line 1033 "opt_debug.m"
  {
#line 1033 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1033 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1033 "opt_debug.m"
#line 1033 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1033 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1033 "opt_debug.m"
      case (MR_Integer) 0:
#line 1033 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "leaf";
#line 1033 "opt_debug.m"
        break;
#line 1033 "opt_debug.m"
      case (MR_Integer) 1:
#line 1034 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "nonleaf";
#line 1033 "opt_debug.m"
        break;
#line 1033 "opt_debug.m"
    }
#line 1033 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1033 "opt_debug.m"
  }
#line 130 "opt_debug.m"
}

#line 128 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_code_model_1_f_0(
#line 128 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 128 "opt_debug.m"
{
#line 1029 "opt_debug.m"
  {
#line 1029 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1029 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1029 "opt_debug.m"
#line 1029 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1029 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1029 "opt_debug.m"
      case (MR_Integer) 0:
#line 1029 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_det";
#line 1029 "opt_debug.m"
        break;
#line 1029 "opt_debug.m"
      case (MR_Integer) 2:
#line 1031 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_non";
#line 1029 "opt_debug.m"
        break;
#line 1029 "opt_debug.m"
      case (MR_Integer) 1:
#line 1030 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_semi";
#line 1029 "opt_debug.m"
        break;
#line 1029 "opt_debug.m"
    }
#line 1029 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1029 "opt_debug.m"
  }
#line 128 "opt_debug.m"
}

#line 126 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_1_f_0(
#line 126 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 126 "opt_debug.m"
{
#line 1026 "opt_debug.m"
  {
#line 1026 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1026 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1026 "opt_debug.m"
#line 1026 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 1026 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1026 "opt_debug.m"
      case (MR_Integer) 0:
#line 1027 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "no";
#line 1026 "opt_debug.m"
        break;
#line 1026 "opt_debug.m"
      case (MR_Integer) 1:
#line 1026 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "yes";
#line 1026 "opt_debug.m"
        break;
#line 1026 "opt_debug.m"
    }
#line 1026 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1026 "opt_debug.m"
  }
#line 126 "opt_debug.m"
}

#line 124 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addrs_2_f_0(
#line 124 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 124 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 124 "opt_debug.m"
{
#line 940 "opt_debug.m"
  {
#line 940 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 940 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 940 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 940 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 940 "opt_debug.m"
    else
#line 941 "opt_debug.m"
      {
#line 941 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Addr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 941 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Addrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 941 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 941 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 941 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 942 "opt_debug.m"
        {
#line 942 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addr_6);
        }
#line 943 "opt_debug.m"
        {
#line 943 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_code_addrs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addrs_7);
        }
#line 942 "opt_debug.m"
        {
#line 942 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 942 "opt_debug.m"
        {
#line 942 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
#line 941 "opt_debug.m"
      }
#line 940 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 940 "opt_debug.m"
  }
#line 124 "opt_debug.m"
}

#line 122 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addr_2_f_0(
#line 122 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 122 "opt_debug.m"
  MR_Word ll_backend__opt_debug__CodeAddr_5)
#line 122 "opt_debug.m"
{
#line 903 "opt_debug.m"
  {
#line 903 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 903 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;

#line 903 "opt_debug.m"
#line 903 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__CodeAddr_5)) {
#line 903 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 903 "opt_debug.m"
      case (MR_Integer) 0:
#line 903 "opt_debug.m"
#line 903 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__CodeAddr_5)) {
#line 903 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "opt_debug.m"
          case (MR_Integer) 0:
#line 909 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "succip";
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 1:
#line 918 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "do_redo";
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 2:
#line 921 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "do_fail";
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 3:
#line 924 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "do_trace_redo_fail_shallow";
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 4:
#line 927 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "do_trace_redo_fail_deep";
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 5:
#line 936 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "do_not_reached";
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
        }
#line 903 "opt_debug.m"
        break;
#line 903 "opt_debug.m"
      case (MR_Integer) 1:
#line 903 "opt_debug.m"
        {
#line 903 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Label_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 0)));

#line 904 "opt_debug.m"
          {
#line 904 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Label_7);
          }
#line 903 "opt_debug.m"
        }
#line 903 "opt_debug.m"
        break;
#line 903 "opt_debug.m"
      case (MR_Integer) 2:
#line 906 "opt_debug.m"
        {
#line 906 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 0)));

#line 907 "opt_debug.m"
          {
#line 907 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_8);
          }
#line 906 "opt_debug.m"
        }
#line 903 "opt_debug.m"
        break;
#line 903 "opt_debug.m"
      case (MR_Integer) 3:
#line 903 "opt_debug.m"
#line 903 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 0)))) {
#line 903 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 903 "opt_debug.m"
          case (MR_Integer) 0:
#line 903 "opt_debug.m"
            {
#line 903 "opt_debug.m"
              MR_Word ll_backend__opt_debug__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 1)));

#line 903 "opt_debug.m"
#line 903 "opt_debug.m"
              switch (ll_backend__opt_debug__V_17_17) {
#line 903 "opt_debug.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 903 "opt_debug.m"
                case (MR_Integer) 0:
#line 913 "opt_debug.m"
                  ll_backend__opt_debug__Str_6 = (MR_String) "do_succeed";
#line 903 "opt_debug.m"
                  break;
#line 903 "opt_debug.m"
                case (MR_Integer) 1:
#line 916 "opt_debug.m"
                  ll_backend__opt_debug__Str_6 = (MR_String) "do_last_succeed";
#line 903 "opt_debug.m"
                  break;
#line 903 "opt_debug.m"
              }
#line 903 "opt_debug.m"
            }
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 1:
#line 930 "opt_debug.m"
            {
#line 930 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Variant_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 1)));
#line 930 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_13_13;

#line 931 "opt_debug.m"
              {
#line 931 "opt_debug.m"
                ll_backend__opt_debug__V_13_13 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_9);
              }
#line 931 "opt_debug.m"
              {
#line 931 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_closure_", ll_backend__opt_debug__V_13_13);
              }
#line 930 "opt_debug.m"
            }
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
          case (MR_Integer) 2:
#line 933 "opt_debug.m"
            {
#line 933 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_11_11;
#line 933 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Variant_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__CodeAddr_5, (MR_Integer) 1)));

#line 934 "opt_debug.m"
              {
#line 934 "opt_debug.m"
                ll_backend__opt_debug__V_11_11 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_16);
              }
#line 934 "opt_debug.m"
              {
#line 934 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_class_method_", ll_backend__opt_debug__V_11_11);
              }
#line 933 "opt_debug.m"
            }
#line 903 "opt_debug.m"
            break;
#line 903 "opt_debug.m"
        }
#line 903 "opt_debug.m"
        break;
#line 903 "opt_debug.m"
    }
#line 903 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 903 "opt_debug.m"
  }
#line 122 "opt_debug.m"
}

#line 120 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_rvals_3_f_0(
#line 120 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 120 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 120 "opt_debug.m"
  MR_Integer ll_backend__opt_debug__N_3)
#line 120 "opt_debug.m"
{
#line 886 "opt_debug.m"
  {
#line 886 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 886 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 886 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 886 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 886 "opt_debug.m"
    else
#line 887 "opt_debug.m"
      {
#line 887 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 887 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MRs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 888 "opt_debug.m"
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__N_3 > (MR_Integer) 0);
#line 897 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 895 "opt_debug.m"
          {
#line 895 "opt_debug.m"
            MR_String ll_backend__opt_debug__MR_str_13;
#line 895 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_15_15;
#line 895 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_17_17;
#line 895 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__V_18_18;

#line 892 "opt_debug.m"
            if ((ll_backend__opt_debug__MR_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 894 "opt_debug.m"
              ll_backend__opt_debug__MR_str_13 = (MR_String) "no";
#line 892 "opt_debug.m"
            else
#line 890 "opt_debug.m"
              {
#line 890 "opt_debug.m"
                MR_Word ll_backend__opt_debug__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MR_8, (MR_Integer) 0)));

#line 891 "opt_debug.m"
                {
#line 891 "opt_debug.m"
                  ll_backend__opt_debug__MR_str_13 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_12);
                }
#line 890 "opt_debug.m"
              }
#line 896 "opt_debug.m"
            ll_backend__opt_debug__V_18_18 = (ll_backend__opt_debug__N_3 - (MR_Integer) 1);
#line 896 "opt_debug.m"
            {
#line 896 "opt_debug.m"
              ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_maybe_rvals_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MRs_9, ll_backend__opt_debug__V_18_18);
            }
#line 896 "opt_debug.m"
            {
#line 896 "opt_debug.m"
              ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_17_17);
            }
#line 896 "opt_debug.m"
            {
#line 896 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__MR_str_13, ll_backend__opt_debug__V_15_15);
            }
#line 895 "opt_debug.m"
          }
#line 897 "opt_debug.m"
        else
#line 898 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "truncated";
#line 887 "opt_debug.m"
      }
#line 886 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 886 "opt_debug.m"
  }
#line 120 "opt_debug.m"
}

#line 118 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_proclabel_1_f_0(
#line 118 "opt_debug.m"
  MR_Word ll_backend__opt_debug__ProcLabel_3)
#line 118 "opt_debug.m"
{
#line 1006 "opt_debug.m"
  {
#line 1006 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1006 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 1006 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 1006 "opt_debug.m"
      {
#line 1006 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
#line 1006 "opt_debug.m"
        MR_Word ll_backend__opt_debug__PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
#line 1006 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
#line 1006 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__ExtraModule_11;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_37_37;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_41_41;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_44_44;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_45_45;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_46_46;
#line 1006 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_48_48;
#line 1005 "opt_debug.m"
        MR_Word ll_backend__opt_debug___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));

#line 1007 "opt_debug.m"
        {
#line 1007 "opt_debug.m"
          ll_backend__opt_debug__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__opt_debug__Module_5, ll_backend__opt_debug__PredModule_7);
        }
#line 1009 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 1008 "opt_debug.m"
          ll_backend__opt_debug__ExtraModule_11 = (MR_String) "";
#line 1009 "opt_debug.m"
        else
#line 1010 "opt_debug.m"
          {
#line 1010 "opt_debug.m"
            MR_String ll_backend__opt_debug__PredModuleName_12;

#line 1010 "opt_debug.m"
            {
#line 1010 "opt_debug.m"
              ll_backend__opt_debug__PredModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__PredModule_7);
            }
#line 1011 "opt_debug.m"
            {
#line 1011 "opt_debug.m"
              ll_backend__opt_debug__ExtraModule_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredModuleName_12, (MR_String) "_");
            }
#line 1010 "opt_debug.m"
          }
#line 1013 "opt_debug.m"
        {
#line 1013 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_5);
        }
#line 1014 "opt_debug.m"
        {
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_9);
        }
#line 1014 "opt_debug.m"
        {
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__V_48_48 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_10);
        }
#line 1014 "opt_debug.m"
        {
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_48_48);
        }
#line 1014 "opt_debug.m"
        {
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, ll_backend__opt_debug__V_46_46);
        }
#line 1014 "opt_debug.m"
        {
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_44_44);
        }
#line 1014 "opt_debug.m"
        {
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredName_8, ll_backend__opt_debug__V_42_42);
        }
#line 1013 "opt_debug.m"
        {
#line 1013 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_41_41);
        }
#line 1013 "opt_debug.m"
        {
#line 1013 "opt_debug.m"
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
        }
#line 1013 "opt_debug.m"
        {
#line 1013 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ExtraModule_11, ll_backend__opt_debug__V_37_37);
        }
#line 1006 "opt_debug.m"
      }
#line 1006 "opt_debug.m"
    else
#line 1018 "opt_debug.m"
      {
#line 1018 "opt_debug.m"
        MR_Word ll_backend__opt_debug__SpecialPredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));
#line 1018 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TypeModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__TypeName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
#line 1018 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
#line 1018 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TypeCtor_17;
#line 1018 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_19_19;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_26_26;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_29_29;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_32_32;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_33_33;
#line 1018 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_35_35;
#line 1018 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Module_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
#line 1018 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Mode_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));

#line 1019 "opt_debug.m"
        {
#line 1019 "opt_debug.m"
          ll_backend__opt_debug__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1019 "opt_debug.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 0) = ((MR_Box) (ll_backend__opt_debug__TypeModule_14));
#line 1019 "opt_debug.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 1) = ((MR_Box) (ll_backend__opt_debug__TypeName_15));
#line 1019 "opt_debug.m"
        }
#line 1019 "opt_debug.m"
        {
#line 1019 "opt_debug.m"
          ll_backend__opt_debug__TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1019 "opt_debug.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 0) = ((MR_Box) (ll_backend__opt_debug__V_18_18));
#line 1019 "opt_debug.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 1) = ((MR_Box) (ll_backend__opt_debug__TypeArity_16));
#line 1019 "opt_debug.m"
        }
#line 1020 "opt_debug.m"
        {
#line 1020 "opt_debug.m"
          ll_backend__opt_debug__V_19_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_49);
        }
#line 1021 "opt_debug.m"
        {
#line 1021 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__opt_debug__SpecialPredId_13, ll_backend__opt_debug__TypeCtor_17);
        }
#line 1022 "opt_debug.m"
        {
#line 1022 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__TypeModule_14);
        }
#line 1022 "opt_debug.m"
        {
#line 1022 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = parse_tree__prog_foreign__qualify_name_2_f_0(ll_backend__opt_debug__V_28_28, ll_backend__opt_debug__TypeName_15);
        }
#line 1023 "opt_debug.m"
        {
#line 1023 "opt_debug.m"
          ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeArity_16);
        }
#line 1023 "opt_debug.m"
        {
#line 1023 "opt_debug.m"
          ll_backend__opt_debug__V_35_35 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_50);
        }
#line 1023 "opt_debug.m"
        {
#line 1023 "opt_debug.m"
          ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_35_35);
        }
#line 1023 "opt_debug.m"
        {
#line 1023 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, ll_backend__opt_debug__V_33_33);
        }
#line 1023 "opt_debug.m"
        {
#line 1023 "opt_debug.m"
          ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_31_31);
        }
#line 1022 "opt_debug.m"
        {
#line 1022 "opt_debug.m"
          ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_29_29);
        }
#line 1022 "opt_debug.m"
        {
#line 1022 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_26_26);
        }
#line 1021 "opt_debug.m"
        {
#line 1021 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, ll_backend__opt_debug__V_24_24);
        }
#line 1021 "opt_debug.m"
        {
#line 1021 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_22_22);
        }
#line 1020 "opt_debug.m"
        {
#line 1020 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_19_19, ll_backend__opt_debug__V_20_20);
        }
#line 1018 "opt_debug.m"
      }
#line 1006 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 1006 "opt_debug.m"
  }
#line 118 "opt_debug.m"
}

#line 116 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_label_pairs_2_f_0(
#line 116 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 116 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 116 "opt_debug.m"
{
#line 992 "opt_debug.m"
  {
#line 992 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 992 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 992 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 992 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 992 "opt_debug.m"
    else
#line 993 "opt_debug.m"
      {
#line 993 "opt_debug.m"
        MR_Word ll_backend__opt_debug__L1_6;
#line 993 "opt_debug.m"
        MR_Word ll_backend__opt_debug__L2_7;
#line 993 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 993 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 993 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 993 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 993 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 993 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 993 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 993 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;

#line 993 "opt_debug.m"
        ll_backend__opt_debug__L1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
#line 993 "opt_debug.m"
        ll_backend__opt_debug__L2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
#line 994 "opt_debug.m"
        {
#line 994 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L1_6);
        }
#line 995 "opt_debug.m"
        {
#line 995 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L2_7);
        }
#line 996 "opt_debug.m"
        {
#line 996 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_label_pairs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_8);
        }
#line 995 "opt_debug.m"
        {
#line 995 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
        }
#line 994 "opt_debug.m"
        {
#line 994 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__opt_debug__V_15_15);
        }
#line 994 "opt_debug.m"
        {
#line 994 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
#line 994 "opt_debug.m"
        {
#line 994 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_11_11);
        }
#line 993 "opt_debug.m"
      }
#line 992 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 992 "opt_debug.m"
  }
#line 116 "opt_debug.m"
}

#line 114 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_2_f_0(
#line 114 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 114 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 114 "opt_debug.m"
{
#line 987 "opt_debug.m"
  {
#line 987 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 987 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 987 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 987 "opt_debug.m"
    else
#line 988 "opt_debug.m"
      {
#line 988 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 988 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 988 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 988 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 988 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 989 "opt_debug.m"
        {
#line 989 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
#line 990 "opt_debug.m"
        {
#line 990 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_labels_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_7);
        }
#line 989 "opt_debug.m"
        {
#line 989 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 989 "opt_debug.m"
        {
#line 989 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
#line 988 "opt_debug.m"
      }
#line 987 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 987 "opt_debug.m"
  }
#line 114 "opt_debug.m"
}

#line 111 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(
#line 111 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 111 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 111 "opt_debug.m"
{
#line 975 "opt_debug.m"
  {
#line 975 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 975 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 975 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 975 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 975 "opt_debug.m"
    else
#line 976 "opt_debug.m"
      {
#line 976 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 976 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 976 "opt_debug.m"
        MR_String ll_backend__opt_debug__LabelStr_10;
#line 976 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 976 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;

#line 980 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 981 "opt_debug.m"
          {
#line 982 "opt_debug.m"
            {
#line 982 "opt_debug.m"
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
            }
#line 981 "opt_debug.m"
          }
#line 980 "opt_debug.m"
        else
#line 978 "opt_debug.m"
          {
#line 978 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeLabel_6, (MR_Integer) 0)));

#line 979 "opt_debug.m"
            {
#line 979 "opt_debug.m"
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_9);
            }
#line 978 "opt_debug.m"
          }
#line 985 "opt_debug.m"
        {
#line 985 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MaybeLabels_7);
        }
#line 984 "opt_debug.m"
        {
#line 984 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__LabelStr_10, ll_backend__opt_debug__V_14_14);
        }
#line 984 "opt_debug.m"
        {
#line 984 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_13_13);
        }
#line 976 "opt_debug.m"
      }
#line 975 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 975 "opt_debug.m"
  }
#line 111 "opt_debug.m"
}

#line 109 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_label_2_f_0(
#line 109 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 109 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Label_5)
#line 109 "opt_debug.m"
{
#line 947 "opt_debug.m"
  {
#line 947 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 947 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;

#line 947 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__Label_5)) == (MR_mktag((MR_Integer) 1))))
#line 961 "opt_debug.m"
      {
#line 961 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Label_5, (MR_Integer) 1)));
#line 961 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Label_5, (MR_Integer) 0)));

#line 965 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeProcLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 964 "opt_debug.m"
          {
#line 964 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_21);
          }
#line 965 "opt_debug.m"
        else
#line 966 "opt_debug.m"
          {
#line 966 "opt_debug.m"
            MR_Word ll_backend__opt_debug__CurProcLabel_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeProcLabel_4, (MR_Integer) 0)));

#line 967 "opt_debug.m"
            {
#line 967 "opt_debug.m"
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__CurProcLabel_19, ll_backend__opt_debug__ProcLabel_21);
            }
#line 969 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 968 "opt_debug.m"
              ll_backend__opt_debug__Str_6 = (MR_String) "CUR_PROC_ENTRY";
#line 969 "opt_debug.m"
            else
#line 970 "opt_debug.m"
              {
#line 970 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_21);
              }
#line 966 "opt_debug.m"
          }
#line 961 "opt_debug.m"
      }
#line 947 "opt_debug.m"
    else
#line 947 "opt_debug.m"
      {
#line 947 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Label_5, (MR_Integer) 0)));
#line 947 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Label_5, (MR_Integer) 1)));
#line 947 "opt_debug.m"
        MR_String ll_backend__opt_debug__NStr_9;

#line 948 "opt_debug.m"
        {
#line 948 "opt_debug.m"
          mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__N_7, &ll_backend__opt_debug__NStr_9);
        }
#line 952 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeProcLabel_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 950 "opt_debug.m"
          {
#line 950 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_16_16;
#line 950 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_17_17;

#line 951 "opt_debug.m"
            {
#line 951 "opt_debug.m"
              ll_backend__opt_debug__V_16_16 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_8);
            }
#line 951 "opt_debug.m"
            {
#line 951 "opt_debug.m"
              ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__opt_debug__NStr_9);
            }
#line 951 "opt_debug.m"
            {
#line 951 "opt_debug.m"
              return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
            }
#line 950 "opt_debug.m"
          }
#line 952 "opt_debug.m"
        else
#line 953 "opt_debug.m"
          {
#line 953 "opt_debug.m"
            MR_Word ll_backend__opt_debug__CurProcLabel_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeProcLabel_4, (MR_Integer) 0)));

#line 954 "opt_debug.m"
            {
#line 954 "opt_debug.m"
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__CurProcLabel_10, ll_backend__opt_debug__ProcLabel_8);
            }
#line 956 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 955 "opt_debug.m"
              {
#line 955 "opt_debug.m"
                {
#line 955 "opt_debug.m"
                  return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "local_", ll_backend__opt_debug__NStr_9);
                }
#line 955 "opt_debug.m"
              }
#line 956 "opt_debug.m"
            else
#line 957 "opt_debug.m"
              {
#line 957 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_13_13;
#line 957 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_14_14;

#line 957 "opt_debug.m"
                {
#line 957 "opt_debug.m"
                  ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_8);
                }
#line 957 "opt_debug.m"
                {
#line 957 "opt_debug.m"
                  ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__NStr_9);
                }
#line 957 "opt_debug.m"
                {
#line 957 "opt_debug.m"
                  return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, ll_backend__opt_debug__V_14_14);
                }
#line 957 "opt_debug.m"
              }
#line 953 "opt_debug.m"
          }
#line 947 "opt_debug.m"
      }
#line 947 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 947 "opt_debug.m"
  }
#line 109 "opt_debug.m"
}

#line 107 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_binop_1_f_0(
#line 107 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 107 "opt_debug.m"
{
#line 840 "opt_debug.m"
  {
#line 840 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 840 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 840 "opt_debug.m"
#line 840 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) {
#line 840 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 840 "opt_debug.m"
      case (MR_Integer) 0:
#line 840 "opt_debug.m"
#line 840 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__HeadVar__1_1)) {
#line 840 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 840 "opt_debug.m"
          case (MR_Integer) 0:
#line 864 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "+";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 1:
#line 865 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "-";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 2:
#line 866 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "*";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 3:
#line 867 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "/";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 4:
#line 873 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "%";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 5:
#line 868 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked<<";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 6:
#line 869 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked>>";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 7:
#line 870 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 8:
#line 871 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "|";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 9:
#line 872 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "^";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 10:
#line 876 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&&";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 11:
#line 877 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "||";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 12:
#line 874 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "==";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 13:
#line 875 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "!=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 14:
#line 883 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "body";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 15:
#line 841 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "string_unsafe_index_code_unit";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 16:
#line 845 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str==";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 17:
#line 846 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str!=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 18:
#line 849 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 19:
#line 850 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 20:
#line 847 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 21:
#line 848 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 22:
#line 882 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "strcmp";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 23:
#line 878 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 24:
#line 879 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 25:
#line 880 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 26:
#line 881 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 27:
#line 851 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unsigned<=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 28:
#line 852 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl+";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 29:
#line 853 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl-";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 30:
#line 854 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl*";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 31:
#line 855 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl/";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 32:
#line 856 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl==";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 33:
#line 857 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl!=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 34:
#line 860 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 35:
#line 861 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 36:
#line 858 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 37:
#line 859 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 38:
#line 862 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_word_bits";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 39:
#line 863 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_from_dword";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 40:
#line 884 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 41:
#line 843 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound=";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
          case (MR_Integer) 42:
#line 842 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound<";
#line 840 "opt_debug.m"
            break;
#line 840 "opt_debug.m"
        }
#line 840 "opt_debug.m"
        break;
#line 840 "opt_debug.m"
      case (MR_Integer) 1:
#line 840 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "array_index";
#line 840 "opt_debug.m"
        break;
#line 840 "opt_debug.m"
      case (MR_Integer) 2:
#line 844 "opt_debug.m"
        {
#line 844 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 844 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_6_6;
#line 844 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_7_7;

#line 844 "opt_debug.m"
          {
#line 844 "opt_debug.m"
            ll_backend__opt_debug__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_4);
          }
#line 844 "opt_debug.m"
          {
#line 844 "opt_debug.m"
            ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, (MR_String) ")str==");
          }
#line 844 "opt_debug.m"
          {
#line 844 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "offset(", ll_backend__opt_debug__V_6_6);
          }
#line 844 "opt_debug.m"
        }
#line 840 "opt_debug.m"
        break;
#line 840 "opt_debug.m"
    }
#line 840 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 840 "opt_debug.m"
  }
#line 107 "opt_debug.m"
}

#line 105 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_unop_1_f_0(
#line 105 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 105 "opt_debug.m"
{
#line 825 "opt_debug.m"
  {
#line 825 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 825 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2 = ((&ll_backend__opt_debug_vector_common_6[0 + ll_backend__opt_debug__HeadVar__1_1]))->ll_backend__opt_debug__vector_common_type_6_0__vct_6_f_0;

#line 825 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 825 "opt_debug.m"
  }
#line 105 "opt_debug.m"
}

#line 103 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_name_1_f_0(
#line 103 "opt_debug.m"
  MR_Word ll_backend__opt_debug__LayoutName_3)
#line 103 "opt_debug.m"
{
#line 743 "opt_debug.m"
  {
#line 743 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 743 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 743 "opt_debug.m"
#line 743 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__LayoutName_3)) {
#line 743 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 743 "opt_debug.m"
      case (MR_Integer) 0:
#line 743 "opt_debug.m"
        {
#line 743 "opt_debug.m"
          MR_Word ll_backend__opt_debug__RttiProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)));
#line 743 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_128_128;
#line 743 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_129_129;
#line 743 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 744 "opt_debug.m"
          {
#line 744 "opt_debug.m"
            ll_backend__opt_debug__V_129_129 = ll_backend__opt_debug__dump_rttiproclabel_1_f_0(ll_backend__opt_debug__RttiProcLabel_5);
          }
#line 744 "opt_debug.m"
          {
#line 744 "opt_debug.m"
            ll_backend__opt_debug__V_128_128 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_129_129, (MR_String) ")");
          }
#line 744 "opt_debug.m"
          {
#line 744 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "proc_layout(", ll_backend__opt_debug__V_128_128);
          }
#line 743 "opt_debug.m"
        }
#line 743 "opt_debug.m"
        break;
#line 743 "opt_debug.m"
      case (MR_Integer) 1:
#line 746 "opt_debug.m"
        {
#line 746 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)));
#line 746 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__SeqNo_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 746 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_122_122;
#line 746 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_123_123;
#line 746 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_124_124;
#line 746 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_125_125;
#line 746 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

#line 747 "opt_debug.m"
          {
#line 747 "opt_debug.m"
            ll_backend__opt_debug__V_123_123 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_7);
          }
#line 748 "opt_debug.m"
          {
#line 748 "opt_debug.m"
            ll_backend__opt_debug__V_125_125 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__SeqNo_8);
          }
#line 748 "opt_debug.m"
          {
#line 748 "opt_debug.m"
            ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
          }
#line 748 "opt_debug.m"
          {
#line 748 "opt_debug.m"
            ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_123_123, ll_backend__opt_debug__V_124_124);
          }
#line 747 "opt_debug.m"
          {
#line 747 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "closure_proc_id(", ll_backend__opt_debug__V_122_122);
          }
#line 746 "opt_debug.m"
        }
#line 743 "opt_debug.m"
        break;
#line 743 "opt_debug.m"
      case (MR_Integer) 2:
#line 750 "opt_debug.m"
        {
#line 750 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ModuleName_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)));
#line 750 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__FileNum_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 750 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_116_116;
#line 750 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_117_117;
#line 750 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_118_118;
#line 750 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_119_119;

#line 751 "opt_debug.m"
          {
#line 751 "opt_debug.m"
            ll_backend__opt_debug__V_117_117 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_10);
          }
#line 752 "opt_debug.m"
          {
#line 752 "opt_debug.m"
            ll_backend__opt_debug__V_119_119 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_11);
          }
#line 752 "opt_debug.m"
          {
#line 752 "opt_debug.m"
            ll_backend__opt_debug__V_118_118 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_119_119, (MR_String) ")");
          }
#line 752 "opt_debug.m"
          {
#line 752 "opt_debug.m"
            ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, ll_backend__opt_debug__V_118_118);
          }
#line 751 "opt_debug.m"
          {
#line 751 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout(", ll_backend__opt_debug__V_116_116);
          }
#line 750 "opt_debug.m"
        }
#line 743 "opt_debug.m"
        break;
#line 743 "opt_debug.m"
      case (MR_Integer) 3:
#line 743 "opt_debug.m"
#line 743 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 0)))) {
#line 743 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 743 "opt_debug.m"
          case (MR_Integer) 0:
#line 754 "opt_debug.m"
            {
#line 754 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_110_110;
#line 754 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_111_111;
#line 754 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_112_112;
#line 754 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_113_113;
#line 754 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_131 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 754 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__FileNum_132 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

#line 755 "opt_debug.m"
              {
#line 755 "opt_debug.m"
                ll_backend__opt_debug__V_111_111 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_131);
              }
#line 756 "opt_debug.m"
              {
#line 756 "opt_debug.m"
                ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_132);
              }
#line 756 "opt_debug.m"
              {
#line 756 "opt_debug.m"
                ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, (MR_String) ")");
              }
#line 756 "opt_debug.m"
              {
#line 756 "opt_debug.m"
                ll_backend__opt_debug__V_110_110 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_111_111, ll_backend__opt_debug__V_112_112);
              }
#line 755 "opt_debug.m"
              {
#line 755 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_line_number_vector(", ll_backend__opt_debug__V_110_110);
              }
#line 754 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 1:
#line 758 "opt_debug.m"
            {
#line 758 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_104_104;
#line 758 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_105_105;
#line 758 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_106_106;
#line 758 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_107_107;
#line 758 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_133 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 758 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__FileNum_134 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

#line 759 "opt_debug.m"
              {
#line 759 "opt_debug.m"
                ll_backend__opt_debug__V_105_105 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_133);
              }
#line 760 "opt_debug.m"
              {
#line 760 "opt_debug.m"
                ll_backend__opt_debug__V_107_107 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_134);
              }
#line 760 "opt_debug.m"
              {
#line 760 "opt_debug.m"
                ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_107_107, (MR_String) ")");
              }
#line 760 "opt_debug.m"
              {
#line 760 "opt_debug.m"
                ll_backend__opt_debug__V_104_104 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_105_105, ll_backend__opt_debug__V_106_106);
              }
#line 759 "opt_debug.m"
              {
#line 759 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_label_layout_vector(", ll_backend__opt_debug__V_104_104);
              }
#line 758 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 2:
#line 762 "opt_debug.m"
            {
#line 762 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_100_100;
#line 762 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_101_101;
#line 762 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_135 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 763 "opt_debug.m"
              {
#line 763 "opt_debug.m"
                ll_backend__opt_debug__V_101_101 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_135);
              }
#line 764 "opt_debug.m"
              {
#line 764 "opt_debug.m"
                ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
              }
#line 763 "opt_debug.m"
              {
#line 763 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_string_table(", ll_backend__opt_debug__V_100_100);
              }
#line 762 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 3:
#line 766 "opt_debug.m"
            {
#line 766 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_96_96;
#line 766 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_97_97;
#line 766 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_136 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 767 "opt_debug.m"
              {
#line 767 "opt_debug.m"
                ll_backend__opt_debug__V_97_97 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_136);
              }
#line 768 "opt_debug.m"
              {
#line 768 "opt_debug.m"
                ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_97_97, (MR_String) ")");
              }
#line 767 "opt_debug.m"
              {
#line 767 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_file_vector(", ll_backend__opt_debug__V_96_96);
              }
#line 766 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 4:
#line 770 "opt_debug.m"
            {
#line 770 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_92_92;
#line 770 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_93_93;
#line 770 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 771 "opt_debug.m"
              {
#line 771 "opt_debug.m"
                ll_backend__opt_debug__V_93_93 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_137);
              }
#line 772 "opt_debug.m"
              {
#line 772 "opt_debug.m"
                ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_93_93, (MR_String) ")");
              }
#line 771 "opt_debug.m"
              {
#line 771 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_proc_vector(", ll_backend__opt_debug__V_92_92);
              }
#line 770 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 5:
#line 774 "opt_debug.m"
            {
#line 774 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__NumLabels_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));
#line 774 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_84_84;
#line 774 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_85_85;
#line 774 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_86_86;
#line 774 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_88_88;
#line 774 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_89_89;
#line 774 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_138 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 775 "opt_debug.m"
              {
#line 775 "opt_debug.m"
                ll_backend__opt_debug__V_85_85 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_138);
              }
#line 776 "opt_debug.m"
              {
#line 776 "opt_debug.m"
                ll_backend__opt_debug__V_89_89 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumLabels_12);
              }
#line 776 "opt_debug.m"
              {
#line 776 "opt_debug.m"
                ll_backend__opt_debug__V_88_88 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_89_89, (MR_String) ")");
              }
#line 776 "opt_debug.m"
              {
#line 776 "opt_debug.m"
                ll_backend__opt_debug__V_86_86 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_88_88);
              }
#line 776 "opt_debug.m"
              {
#line 776 "opt_debug.m"
                ll_backend__opt_debug__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_85_85, ll_backend__opt_debug__V_86_86);
              }
#line 775 "opt_debug.m"
              {
#line 775 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_label_exec_count(", ll_backend__opt_debug__V_84_84);
              }
#line 774 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 6:
#line 778 "opt_debug.m"
            {
#line 778 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_80_80;
#line 778 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_81_81;
#line 778 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_139 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 779 "opt_debug.m"
              {
#line 779 "opt_debug.m"
                ll_backend__opt_debug__V_81_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_139);
              }
#line 780 "opt_debug.m"
              {
#line 780 "opt_debug.m"
                ll_backend__opt_debug__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_81_81, (MR_String) ")");
              }
#line 779 "opt_debug.m"
              {
#line 779 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_set_desc(", ll_backend__opt_debug__V_80_80);
              }
#line 778 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 7:
#line 786 "opt_debug.m"
            {
#line 786 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__EventNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));
#line 786 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_68_68;
#line 786 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_69_69;
#line 786 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_70_70;
#line 786 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_72_72;
#line 786 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_73_73;
#line 786 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_141 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 787 "opt_debug.m"
              {
#line 787 "opt_debug.m"
                ll_backend__opt_debug__V_69_69 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_141);
              }
#line 788 "opt_debug.m"
              {
#line 788 "opt_debug.m"
                ll_backend__opt_debug__V_73_73 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_13);
              }
#line 788 "opt_debug.m"
              {
#line 788 "opt_debug.m"
                ll_backend__opt_debug__V_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_73_73, (MR_String) ")");
              }
#line 788 "opt_debug.m"
              {
#line 788 "opt_debug.m"
                ll_backend__opt_debug__V_70_70 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_72_72);
              }
#line 788 "opt_debug.m"
              {
#line 788 "opt_debug.m"
                ll_backend__opt_debug__V_68_68 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_69_69, ll_backend__opt_debug__V_70_70);
              }
#line 787 "opt_debug.m"
              {
#line 787 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_arg_names(", ll_backend__opt_debug__V_68_68);
              }
#line 786 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 8:
#line 790 "opt_debug.m"
            {
#line 790 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_60_60;
#line 790 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_61_61;
#line 790 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_62_62;
#line 790 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_64_64;
#line 790 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_65_65;
#line 790 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 790 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__EventNum_143 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

#line 791 "opt_debug.m"
              {
#line 791 "opt_debug.m"
                ll_backend__opt_debug__V_61_61 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_142);
              }
#line 792 "opt_debug.m"
              {
#line 792 "opt_debug.m"
                ll_backend__opt_debug__V_65_65 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_143);
              }
#line 792 "opt_debug.m"
              {
#line 792 "opt_debug.m"
                ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_65_65, (MR_String) ")");
              }
#line 792 "opt_debug.m"
              {
#line 792 "opt_debug.m"
                ll_backend__opt_debug__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_64_64);
              }
#line 792 "opt_debug.m"
              {
#line 792 "opt_debug.m"
                ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_61_61, ll_backend__opt_debug__V_62_62);
              }
#line 791 "opt_debug.m"
              {
#line 791 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attrs(", ll_backend__opt_debug__V_60_60);
              }
#line 790 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 9:
#line 795 "opt_debug.m"
            {
#line 795 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__ArgNum_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 3)));
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_48_48;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_49_49;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_50_50;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_52_52;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_53_53;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_54_54;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_56_56;
#line 795 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_57_57;
#line 795 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 795 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__EventNum_145 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

#line 797 "opt_debug.m"
              {
#line 797 "opt_debug.m"
                ll_backend__opt_debug__V_49_49 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_144);
              }
#line 798 "opt_debug.m"
              {
#line 798 "opt_debug.m"
                ll_backend__opt_debug__V_53_53 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_145);
              }
#line 799 "opt_debug.m"
              {
#line 799 "opt_debug.m"
                ll_backend__opt_debug__V_57_57 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_14);
              }
#line 799 "opt_debug.m"
              {
#line 799 "opt_debug.m"
                ll_backend__opt_debug__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_57_57, (MR_String) ")");
              }
#line 799 "opt_debug.m"
              {
#line 799 "opt_debug.m"
                ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_56_56);
              }
#line 798 "opt_debug.m"
              {
#line 798 "opt_debug.m"
                ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, ll_backend__opt_debug__V_54_54);
              }
#line 798 "opt_debug.m"
              {
#line 798 "opt_debug.m"
                ll_backend__opt_debug__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_52_52);
              }
#line 797 "opt_debug.m"
              {
#line 797 "opt_debug.m"
                ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, ll_backend__opt_debug__V_50_50);
              }
#line 797 "opt_debug.m"
              {
#line 797 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_args(", ll_backend__opt_debug__V_48_48);
              }
#line 795 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 10:
#line 802 "opt_debug.m"
            {
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_36_36;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_37_37;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_38_38;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_40_40;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_41_41;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_42_42;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_44_44;
#line 802 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_45_45;
#line 802 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_146 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 802 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__EventNum_147 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));
#line 802 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__ArgNum_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 3)));

#line 804 "opt_debug.m"
              {
#line 804 "opt_debug.m"
                ll_backend__opt_debug__V_37_37 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_146);
              }
#line 805 "opt_debug.m"
              {
#line 805 "opt_debug.m"
                ll_backend__opt_debug__V_41_41 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_147);
              }
#line 806 "opt_debug.m"
              {
#line 806 "opt_debug.m"
                ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_148);
              }
#line 806 "opt_debug.m"
              {
#line 806 "opt_debug.m"
                ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, (MR_String) ")");
              }
#line 806 "opt_debug.m"
              {
#line 806 "opt_debug.m"
                ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_44_44);
              }
#line 805 "opt_debug.m"
              {
#line 805 "opt_debug.m"
                ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_41_41, ll_backend__opt_debug__V_42_42);
              }
#line 805 "opt_debug.m"
              {
#line 805 "opt_debug.m"
                ll_backend__opt_debug__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_40_40);
              }
#line 804 "opt_debug.m"
              {
#line 804 "opt_debug.m"
                ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_37_37, ll_backend__opt_debug__V_38_38);
              }
#line 804 "opt_debug.m"
              {
#line 804 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_order(", ll_backend__opt_debug__V_36_36);
              }
#line 802 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 11:
#line 808 "opt_debug.m"
            {
#line 808 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_28_28;
#line 808 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_29_29;
#line 808 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_30_30;
#line 808 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_32_32;
#line 808 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_33_33;
#line 808 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_149 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));
#line 808 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__EventNum_150 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 2)));

#line 810 "opt_debug.m"
              {
#line 810 "opt_debug.m"
                ll_backend__opt_debug__V_29_29 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_149);
              }
#line 811 "opt_debug.m"
              {
#line 811 "opt_debug.m"
                ll_backend__opt_debug__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_150);
              }
#line 811 "opt_debug.m"
              {
#line 811 "opt_debug.m"
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, (MR_String) ")");
              }
#line 811 "opt_debug.m"
              {
#line 811 "opt_debug.m"
                ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_32_32);
              }
#line 810 "opt_debug.m"
              {
#line 810 "opt_debug.m"
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, ll_backend__opt_debug__V_30_30);
              }
#line 810 "opt_debug.m"
              {
#line 810 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_order(", ll_backend__opt_debug__V_28_28);
              }
#line 808 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 12:
#line 782 "opt_debug.m"
            {
#line 782 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_76_76;
#line 782 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_77_77;
#line 782 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_140 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 783 "opt_debug.m"
              {
#line 783 "opt_debug.m"
                ll_backend__opt_debug__V_77_77 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_140);
              }
#line 784 "opt_debug.m"
              {
#line 784 "opt_debug.m"
                ll_backend__opt_debug__V_76_76 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_77_77, (MR_String) ")");
              }
#line 783 "opt_debug.m"
              {
#line 783 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_specs(", ll_backend__opt_debug__V_76_76);
              }
#line 782 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 13:
#line 813 "opt_debug.m"
            {
#line 813 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_24_24;
#line 813 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_25_25;
#line 813 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_151 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 814 "opt_debug.m"
              {
#line 814 "opt_debug.m"
                ll_backend__opt_debug__V_25_25 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_151);
              }
#line 815 "opt_debug.m"
              {
#line 815 "opt_debug.m"
                ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
              }
#line 814 "opt_debug.m"
              {
#line 814 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_oisu_bytes(", ll_backend__opt_debug__V_24_24);
              }
#line 813 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 14:
#line 817 "opt_debug.m"
            {
#line 817 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_20_20;
#line 817 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_21_21;
#line 817 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_152 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 819 "opt_debug.m"
              {
#line 819 "opt_debug.m"
                ll_backend__opt_debug__V_21_21 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_152);
              }
#line 819 "opt_debug.m"
              {
#line 819 "opt_debug.m"
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, (MR_String) ")");
              }
#line 819 "opt_debug.m"
              {
#line 819 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_type_table_bytes(", ll_backend__opt_debug__V_20_20);
              }
#line 817 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
          case (MR_Integer) 15:
#line 821 "opt_debug.m"
            {
#line 821 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_16_16;
#line 821 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_17_17;
#line 821 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_153 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__LayoutName_3, (MR_Integer) 1)));

#line 822 "opt_debug.m"
              {
#line 822 "opt_debug.m"
                ll_backend__opt_debug__V_17_17 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_153);
              }
#line 822 "opt_debug.m"
              {
#line 822 "opt_debug.m"
                ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, (MR_String) ")");
              }
#line 822 "opt_debug.m"
              {
#line 822 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout(", ll_backend__opt_debug__V_16_16);
              }
#line 821 "opt_debug.m"
            }
#line 743 "opt_debug.m"
            break;
#line 743 "opt_debug.m"
        }
#line 743 "opt_debug.m"
        break;
#line 743 "opt_debug.m"
    }
#line 743 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 743 "opt_debug.m"
  }
#line 103 "opt_debug.m"
}

#line 101 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_array_name_1_f_0(
#line 101 "opt_debug.m"
  MR_Word ll_backend__opt_debug__ArrayName_3)
#line 101 "opt_debug.m"
{
#line 674 "opt_debug.m"
  {
#line 674 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 674 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 674 "opt_debug.m"
#line 674 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__ArrayName_3)) {
#line 674 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 674 "opt_debug.m"
      case (MR_Integer) 0:
#line 674 "opt_debug.m"
#line 674 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__ArrayName_3)) {
#line 674 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 674 "opt_debug.m"
          case (MR_Integer) 0:
#line 687 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "pseudo_type_info_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 1:
#line 696 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "hlds_var_nums_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 2:
#line 693 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "short_locns_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 3:
#line 690 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "long_locns_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 4:
#line 699 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "user_event_layout_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 5:
#line 702 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "user_event_var_nums_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 6:
#line 708 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_call_sites_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 7:
#line 711 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_static_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 8:
#line 714 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_dynamic_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 9:
#line 705 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 10:
#line 723 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_head_var_nums_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 11:
#line 726 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_var_names_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 12:
#line 729 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_body_bytecodes_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 13:
#line 732 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_table_io_entry_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 14:
#line 720 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_event_layouts_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 15:
#line 717 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_exec_trace_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 16:
#line 735 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "threadscope_string_table_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
          case (MR_Integer) 17:
#line 738 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "alloc_site_array";
#line 674 "opt_debug.m"
            break;
#line 674 "opt_debug.m"
        }
#line 674 "opt_debug.m"
        break;
#line 674 "opt_debug.m"
      case (MR_Integer) 1:
#line 674 "opt_debug.m"
        {
#line 674 "opt_debug.m"
          MR_Word ll_backend__opt_debug__LabelVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ArrayName_3, (MR_Integer) 0)));

#line 678 "opt_debug.m"
#line 678 "opt_debug.m"
          switch (ll_backend__opt_debug__LabelVars_5) {
#line 678 "opt_debug.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 678 "opt_debug.m"
            case (MR_Integer) 2:
#line 683 "opt_debug.m"
              ll_backend__opt_debug__Str_4 = (MR_String) "long_vars_label_layout_array";
#line 678 "opt_debug.m"
              break;
#line 678 "opt_debug.m"
            case (MR_Integer) 0:
#line 677 "opt_debug.m"
              ll_backend__opt_debug__Str_4 = (MR_String) "no_vars_label_layout_array";
#line 678 "opt_debug.m"
              break;
#line 678 "opt_debug.m"
            case (MR_Integer) 1:
#line 680 "opt_debug.m"
              ll_backend__opt_debug__Str_4 = (MR_String) "short_vars_label_layout_array";
#line 678 "opt_debug.m"
              break;
#line 678 "opt_debug.m"
          }
#line 674 "opt_debug.m"
        }
#line 674 "opt_debug.m"
        break;
#line 674 "opt_debug.m"
    }
#line 674 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 674 "opt_debug.m"
  }
#line 101 "opt_debug.m"
}

#line 99 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_slot_name_1_f_0(
#line 99 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 99 "opt_debug.m"
{
#line 667 "opt_debug.m"
  {
#line 667 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 667 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_5;
#line 667 "opt_debug.m"
    MR_Word ll_backend__opt_debug__Array_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 667 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Slot_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 667 "opt_debug.m"
    MR_String ll_backend__opt_debug__ArrayStr_6;
#line 667 "opt_debug.m"
    MR_String ll_backend__opt_debug__SlotStr_7;
#line 667 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 667 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_10_10;

#line 668 "opt_debug.m"
    {
#line 668 "opt_debug.m"
      ll_backend__opt_debug__ArrayStr_6 = ll_backend__opt_debug__dump_layout_array_name_1_f_0(ll_backend__opt_debug__Array_3);
    }
#line 669 "opt_debug.m"
    {
#line 669 "opt_debug.m"
      ll_backend__opt_debug__SlotStr_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Slot_4);
    }
#line 670 "opt_debug.m"
    {
#line 670 "opt_debug.m"
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SlotStr_7, (MR_String) "]");
    }
#line 670 "opt_debug.m"
    {
#line 670 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", ll_backend__opt_debug__V_10_10);
    }
#line 670 "opt_debug.m"
    {
#line 670 "opt_debug.m"
      return ll_backend__opt_debug__Str_5 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ArrayStr_6, ll_backend__opt_debug__V_8_8);
    }
#line 667 "opt_debug.m"
    return ll_backend__opt_debug__Str_5;
#line 667 "opt_debug.m"
  }
#line 99 "opt_debug.m"
}

#line 97 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(
#line 97 "opt_debug.m"
  MR_Word ll_backend__opt_debug__TCRttiName_3)
#line 97 "opt_debug.m"
{
#line 615 "opt_debug.m"
  {
#line 615 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 615 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 615 "opt_debug.m"
#line 615 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__TCRttiName_3)) {
#line 615 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 615 "opt_debug.m"
      case (MR_Integer) 0:
#line 615 "opt_debug.m"
#line 615 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__TCRttiName_3)) {
#line 615 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 615 "opt_debug.m"
          case (MR_Integer) 0:
#line 619 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_id";
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 1:
#line 634 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_id_var_names";
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 2:
#line 631 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_id_method_ids";
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 3:
#line 622 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_decl";
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 4:
#line 628 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_class_decl_supers";
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
        }
#line 615 "opt_debug.m"
        break;
#line 615 "opt_debug.m"
      case (MR_Integer) 1:
#line 615 "opt_debug.m"
        {
#line 615 "opt_debug.m"
          MR_String ll_backend__opt_debug__InstanceStr_6 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));
#line 615 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_40_40;
#line 615 "opt_debug.m"
          MR_Word ll_backend__opt_debug___ModuleName_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 0)));

#line 616 "opt_debug.m"
          {
#line 616 "opt_debug.m"
            ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstanceStr_6, (MR_String) ")");
          }
#line 616 "opt_debug.m"
          {
#line 616 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", ll_backend__opt_debug__V_40_40);
          }
#line 615 "opt_debug.m"
        }
#line 615 "opt_debug.m"
        break;
#line 615 "opt_debug.m"
      case (MR_Integer) 2:
#line 624 "opt_debug.m"
        {
#line 624 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Ordinal_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 0)));
#line 624 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_36_36;
#line 624 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_37_37;
#line 624 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

#line 625 "opt_debug.m"
          {
#line 625 "opt_debug.m"
            ll_backend__opt_debug__V_37_37 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_7);
          }
#line 625 "opt_debug.m"
          {
#line 625 "opt_debug.m"
            ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_37_37, (MR_String) ")");
          }
#line 625 "opt_debug.m"
          {
#line 625 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_decl_super(", ll_backend__opt_debug__V_36_36);
          }
#line 624 "opt_debug.m"
        }
#line 615 "opt_debug.m"
        break;
#line 615 "opt_debug.m"
      case (MR_Integer) 3:
#line 615 "opt_debug.m"
#line 615 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 0)))) {
#line 615 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 615 "opt_debug.m"
          case (MR_Integer) 0:
#line 636 "opt_debug.m"
            {
#line 636 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCTypes_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));
#line 636 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_32_32;
#line 636 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_33_33;

#line 638 "opt_debug.m"
              {
#line 638 "opt_debug.m"
                ll_backend__opt_debug__V_33_33 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_9);
              }
#line 638 "opt_debug.m"
              {
#line 638 "opt_debug.m"
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, (MR_String) ")");
              }
#line 638 "opt_debug.m"
              {
#line 638 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance(", ll_backend__opt_debug__V_32_32);
              }
#line 636 "opt_debug.m"
            }
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 1:
#line 640 "opt_debug.m"
            {
#line 640 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_28_28;
#line 640 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_29_29;
#line 640 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCTypes_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

#line 642 "opt_debug.m"
              {
#line 642 "opt_debug.m"
                ll_backend__opt_debug__V_29_29 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_42);
              }
#line 642 "opt_debug.m"
              {
#line 642 "opt_debug.m"
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, (MR_String) ")");
              }
#line 642 "opt_debug.m"
              {
#line 642 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_tc_types_vector(", ll_backend__opt_debug__V_28_28);
              }
#line 640 "opt_debug.m"
            }
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 2:
#line 648 "opt_debug.m"
            {
#line 648 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_16_16;
#line 648 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_17_17;
#line 648 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_18_18;
#line 648 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_20_20;
#line 648 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_21_21;
#line 648 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_44 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 2)));
#line 648 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCTypes_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));
#line 648 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 3)));

#line 650 "opt_debug.m"
              {
#line 650 "opt_debug.m"
                ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_45);
              }
#line 651 "opt_debug.m"
              {
#line 651 "opt_debug.m"
                ll_backend__opt_debug__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_44);
              }
#line 651 "opt_debug.m"
              {
#line 651 "opt_debug.m"
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, (MR_String) ")");
              }
#line 651 "opt_debug.m"
              {
#line 651 "opt_debug.m"
                ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_20_20);
              }
#line 650 "opt_debug.m"
              {
#line 650 "opt_debug.m"
                ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, ll_backend__opt_debug__V_18_18);
              }
#line 650 "opt_debug.m"
              {
#line 650 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraint(", ll_backend__opt_debug__V_16_16);
              }
#line 648 "opt_debug.m"
            }
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 3:
#line 644 "opt_debug.m"
            {
#line 644 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_24_24;
#line 644 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_25_25;
#line 644 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCTypes_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

#line 646 "opt_debug.m"
              {
#line 646 "opt_debug.m"
                ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_43);
              }
#line 646 "opt_debug.m"
              {
#line 646 "opt_debug.m"
                ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
              }
#line 646 "opt_debug.m"
              {
#line 646 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraints(", ll_backend__opt_debug__V_24_24);
              }
#line 644 "opt_debug.m"
            }
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
          case (MR_Integer) 4:
#line 653 "opt_debug.m"
            {
#line 653 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_12_12;
#line 653 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_13_13;
#line 653 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCTypes_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__TCRttiName_3, (MR_Integer) 1)));

#line 655 "opt_debug.m"
              {
#line 655 "opt_debug.m"
                ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_46);
              }
#line 655 "opt_debug.m"
              {
#line 655 "opt_debug.m"
                ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, (MR_String) ")");
              }
#line 655 "opt_debug.m"
              {
#line 655 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_methods(", ll_backend__opt_debug__V_12_12);
              }
#line 653 "opt_debug.m"
            }
#line 615 "opt_debug.m"
            break;
#line 615 "opt_debug.m"
        }
#line 615 "opt_debug.m"
        break;
#line 615 "opt_debug.m"
    }
#line 615 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 615 "opt_debug.m"
  }
#line 97 "opt_debug.m"
}

#line 95 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_name_1_f_0(
#line 95 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiName_3)
#line 95 "opt_debug.m"
{
#line 510 "opt_debug.m"
  {
#line 510 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 510 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 510 "opt_debug.m"
#line 510 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__RttiName_3)) {
#line 510 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 510 "opt_debug.m"
      case (MR_Integer) 0:
#line 510 "opt_debug.m"
#line 510 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__RttiName_3)) {
#line 510 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 510 "opt_debug.m"
          case (MR_Integer) 0:
#line 514 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "exist_loc";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 1:
#line 536 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "res_addrs";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 2:
#line 539 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "res_addr_functors";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 3:
#line 548 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "notag_functor_desc_";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 4:
#line 557 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "enum_name_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 5:
#line 560 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "enum_value_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 6:
#line 563 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "foreign_enum_name_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 7:
#line 566 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "foreign_enum_ordinal_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 8:
#line 569 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "du_name_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 9:
#line 575 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "du_ptag_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 10:
#line 581 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "res_value_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 11:
#line 584 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "res_name_ordered_table";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 12:
#line 587 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "maybe_res_addr_functor_desc";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 13:
#line 596 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "functor_number_map";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 14:
#line 593 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_functors";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 15:
#line 590 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_layout";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 16:
#line 599 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_ctor_info";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 17:
#line 610 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_hashcons_pointer";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
        }
#line 510 "opt_debug.m"
        break;
#line 510 "opt_debug.m"
      case (MR_Integer) 1:
#line 510 "opt_debug.m"
        {
#line 510 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Ordinal_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__RttiName_3, (MR_Integer) 0)));
#line 510 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_44_44;

#line 511 "opt_debug.m"
          {
#line 511 "opt_debug.m"
            ll_backend__opt_debug__V_44_44 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_5);
          }
#line 511 "opt_debug.m"
          {
#line 511 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_locns_", ll_backend__opt_debug__V_44_44);
          }
#line 510 "opt_debug.m"
        }
#line 510 "opt_debug.m"
        break;
#line 510 "opt_debug.m"
      case (MR_Integer) 2:
#line 516 "opt_debug.m"
        {
#line 516 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__TCCNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));
#line 516 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Arity_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__RttiName_3, (MR_Integer) 2)));
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_34_34;
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_35_35;
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_36_36;
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_38_38;
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_39_39;
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_40_40;
#line 516 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_42_42;
#line 516 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Ordinal_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__RttiName_3, (MR_Integer) 0)));

#line 517 "opt_debug.m"
          {
#line 517 "opt_debug.m"
            ll_backend__opt_debug__V_35_35 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_45);
          }
#line 518 "opt_debug.m"
          {
#line 518 "opt_debug.m"
            ll_backend__opt_debug__V_39_39 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TCCNum_6);
          }
#line 518 "opt_debug.m"
          {
#line 518 "opt_debug.m"
            ll_backend__opt_debug__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_7);
          }
#line 518 "opt_debug.m"
          {
#line 518 "opt_debug.m"
            ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_42_42);
          }
#line 518 "opt_debug.m"
          {
#line 518 "opt_debug.m"
            ll_backend__opt_debug__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_39_39, ll_backend__opt_debug__V_40_40);
          }
#line 518 "opt_debug.m"
          {
#line 518 "opt_debug.m"
            ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_38_38);
          }
#line 517 "opt_debug.m"
          {
#line 517 "opt_debug.m"
            ll_backend__opt_debug__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_35_35, ll_backend__opt_debug__V_36_36);
          }
#line 517 "opt_debug.m"
          {
#line 517 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constr_", ll_backend__opt_debug__V_34_34);
          }
#line 516 "opt_debug.m"
        }
#line 510 "opt_debug.m"
        break;
#line 510 "opt_debug.m"
      case (MR_Integer) 3:
#line 510 "opt_debug.m"
#line 510 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 0)))) {
#line 510 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 510 "opt_debug.m"
          case (MR_Integer) 0:
#line 520 "opt_debug.m"
            {
#line 520 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_32_32;
#line 520 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 521 "opt_debug.m"
              {
#line 521 "opt_debug.m"
                ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_46);
              }
#line 521 "opt_debug.m"
              {
#line 521 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constrs_", ll_backend__opt_debug__V_32_32);
              }
#line 520 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 1:
#line 523 "opt_debug.m"
            {
#line 523 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_30_30;
#line 523 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_47 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 524 "opt_debug.m"
              {
#line 524 "opt_debug.m"
                ll_backend__opt_debug__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_47);
              }
#line 524 "opt_debug.m"
              {
#line 524 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "exist_info_", ll_backend__opt_debug__V_30_30);
              }
#line 523 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 2:
#line 526 "opt_debug.m"
            {
#line 526 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_28_28;
#line 526 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 527 "opt_debug.m"
              {
#line 527 "opt_debug.m"
                ll_backend__opt_debug__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_48);
              }
#line 527 "opt_debug.m"
              {
#line 527 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_names_", ll_backend__opt_debug__V_28_28);
              }
#line 526 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 3:
#line 529 "opt_debug.m"
            {
#line 529 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_26_26;
#line 529 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 530 "opt_debug.m"
              {
#line 530 "opt_debug.m"
                ll_backend__opt_debug__V_26_26 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_49);
              }
#line 530 "opt_debug.m"
              {
#line 530 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_types_", ll_backend__opt_debug__V_26_26);
              }
#line 529 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 4:
#line 532 "opt_debug.m"
            {
#line 532 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_24_24;
#line 532 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_50 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 533 "opt_debug.m"
              {
#line 533 "opt_debug.m"
                ll_backend__opt_debug__V_24_24 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_50);
              }
#line 533 "opt_debug.m"
              {
#line 533 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "field_locns_", ll_backend__opt_debug__V_24_24);
              }
#line 532 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 5:
#line 541 "opt_debug.m"
            {
#line 541 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_22_22;
#line 541 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 542 "opt_debug.m"
              {
#line 542 "opt_debug.m"
                ll_backend__opt_debug__V_22_22 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_51);
              }
#line 542 "opt_debug.m"
              {
#line 542 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "enum_functor_desc_", ll_backend__opt_debug__V_22_22);
              }
#line 541 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 6:
#line 544 "opt_debug.m"
            {
#line 544 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_20_20;
#line 544 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 545 "opt_debug.m"
              {
#line 545 "opt_debug.m"
                ll_backend__opt_debug__V_20_20 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_52);
              }
#line 545 "opt_debug.m"
              {
#line 545 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_enum_functor_desc_", ll_backend__opt_debug__V_20_20);
              }
#line 544 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 7:
#line 550 "opt_debug.m"
            {
#line 550 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_18_18;
#line 550 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_53 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 551 "opt_debug.m"
              {
#line 551 "opt_debug.m"
                ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_53);
              }
#line 551 "opt_debug.m"
              {
#line 551 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_functor_desc_", ll_backend__opt_debug__V_18_18);
              }
#line 550 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 8:
#line 553 "opt_debug.m"
            {
#line 553 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_16_16;
#line 553 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ordinal_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 554 "opt_debug.m"
              {
#line 554 "opt_debug.m"
                ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_54);
              }
#line 554 "opt_debug.m"
              {
#line 554 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "res_functor_desc_", ll_backend__opt_debug__V_16_16);
              }
#line 553 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 9:
#line 571 "opt_debug.m"
            {
#line 571 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ptag_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));
#line 571 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_14_14;

#line 572 "opt_debug.m"
              {
#line 572 "opt_debug.m"
                ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_8);
              }
#line 572 "opt_debug.m"
              {
#line 572 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_stag_ordered_table_", ll_backend__opt_debug__V_14_14);
              }
#line 571 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 10:
#line 577 "opt_debug.m"
            {
#line 577 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_12_12;
#line 577 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Ptag_55 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__RttiName_3, (MR_Integer) 1)));

#line 578 "opt_debug.m"
              {
#line 578 "opt_debug.m"
                ll_backend__opt_debug__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_55);
              }
#line 578 "opt_debug.m"
              {
#line 578 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "du_ptag_layout", ll_backend__opt_debug__V_12_12);
              }
#line 577 "opt_debug.m"
            }
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 11:
#line 603 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "type_info";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
          case (MR_Integer) 12:
#line 607 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "pseudo_type_info";
#line 510 "opt_debug.m"
            break;
#line 510 "opt_debug.m"
        }
#line 510 "opt_debug.m"
        break;
#line 510 "opt_debug.m"
    }
#line 510 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 510 "opt_debug.m"
  }
#line 95 "opt_debug.m"
}

#line 663 "opt_debug.m"
static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
#line 663 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 663 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1)
#line 663 "opt_debug.m"
{
#line 663 "opt_debug.m"
  {
#line 663 "opt_debug.m"
    MR_Box ll_backend__opt_debug__wrapper_arg_2;
#line 663 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
#line 663 "opt_debug.m"
    MR_String ll_backend__opt_debug__conv0_HeadVar__2_2;

#line 663 "opt_debug.m"
    {
#line 663 "opt_debug.m"
      ll_backend__opt_debug__conv0_HeadVar__2_2 = backend_libs__rtti__encode_tc_instance_type_1_f_0(((MR_Word) ll_backend__opt_debug__wrapper_arg_1));
    }
#line 663 "opt_debug.m"
    ll_backend__opt_debug__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_debug__conv0_HeadVar__2_2));
#line 663 "opt_debug.m"
    return ll_backend__opt_debug__wrapper_arg_2;
#line 663 "opt_debug.m"
  }
#line 663 "opt_debug.m"
}

#line 93 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(
#line 93 "opt_debug.m"
  MR_Word ll_backend__opt_debug__TCTypes_3)
#line 93 "opt_debug.m"
{
#line 662 "opt_debug.m"
  {
#line 662 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 662 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;
#line 662 "opt_debug.m"
    MR_Word ll_backend__opt_debug__EncodedTCTypes_5;
#line 662 "opt_debug.m"
    MR_String ll_backend__opt_debug__TypesStr_6;
#line 662 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;

#line 663 "opt_debug.m"
    {
#line 663 "opt_debug.m"
      ll_backend__opt_debug__EncodedTCTypes_5 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[2], ll_backend__opt_debug__TCTypes_3);
    }
#line 664 "opt_debug.m"
    {
#line 664 "opt_debug.m"
      mercury__string__append_list_2_p_0(ll_backend__opt_debug__EncodedTCTypes_5, &ll_backend__opt_debug__TypesStr_6);
    }
#line 665 "opt_debug.m"
    {
#line 665 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypesStr_6, (MR_String) ")");
    }
#line 665 "opt_debug.m"
    {
#line 665 "opt_debug.m"
      return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_instance(", ll_backend__opt_debug__V_9_9);
    }
#line 662 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 662 "opt_debug.m"
  }
#line 93 "opt_debug.m"
}

#line 91 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(
#line 91 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 91 "opt_debug.m"
{
#line 658 "opt_debug.m"
  {
#line 658 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;
#line 658 "opt_debug.m"
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 658 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_10_10;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_12_12;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_13_13;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_14_14;
#line 658 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_15_15;

#line 659 "opt_debug.m"
    {
#line 659 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
#line 660 "opt_debug.m"
    {
#line 660 "opt_debug.m"
      ll_backend__opt_debug__V_13_13 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__ClassName_4);
    }
#line 660 "opt_debug.m"
    {
#line 660 "opt_debug.m"
      ll_backend__opt_debug__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
#line 660 "opt_debug.m"
    {
#line 660 "opt_debug.m"
      ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) ")");
    }
#line 660 "opt_debug.m"
    {
#line 660 "opt_debug.m"
      ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, ll_backend__opt_debug__V_14_14);
    }
#line 660 "opt_debug.m"
    {
#line 660 "opt_debug.m"
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_12_12);
    }
#line 659 "opt_debug.m"
    {
#line 659 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_9_9, ll_backend__opt_debug__V_10_10);
    }
#line 659 "opt_debug.m"
    {
#line 659 "opt_debug.m"
      return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "tc_name(", ll_backend__opt_debug__V_8_8);
    }
#line 658 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 658 "opt_debug.m"
  }
#line 91 "opt_debug.m"
}

#line 89 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(
#line 89 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 89 "opt_debug.m"
{
#line 504 "opt_debug.m"
  {
#line 504 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;
#line 504 "opt_debug.m"
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_7_7;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_11_11;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_12_12;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_13_13;
#line 504 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_14_14;

#line 505 "opt_debug.m"
    {
#line 505 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
#line 506 "opt_debug.m"
    {
#line 506 "opt_debug.m"
      ll_backend__opt_debug__V_12_12 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__TypeName_4);
    }
#line 506 "opt_debug.m"
    {
#line 506 "opt_debug.m"
      ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
#line 506 "opt_debug.m"
    {
#line 506 "opt_debug.m"
      ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, (MR_String) ")");
    }
#line 506 "opt_debug.m"
    {
#line 506 "opt_debug.m"
      ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
    }
#line 506 "opt_debug.m"
    {
#line 506 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
    }
#line 505 "opt_debug.m"
    {
#line 505 "opt_debug.m"
      ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
    }
#line 505 "opt_debug.m"
    {
#line 505 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_type_ctor(", ll_backend__opt_debug__V_7_7);
    }
#line 504 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 504 "opt_debug.m"
  }
#line 89 "opt_debug.m"
}

#line 87 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_data_id_1_f_0(
#line 87 "opt_debug.m"
  MR_Word ll_backend__opt_debug__DataId_3)
#line 87 "opt_debug.m"
{
#line 471 "opt_debug.m"
  {
#line 471 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 471 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 471 "opt_debug.m"
#line 471 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__DataId_3)) {
#line 471 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 471 "opt_debug.m"
      case (MR_Integer) 0:
#line 471 "opt_debug.m"
        {
#line 471 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)));

#line 471 "opt_debug.m"
          if (((MR_tag((MR_Word) ll_backend__opt_debug__V_68_68)) == (MR_mktag((MR_Integer) 0))))
#line 471 "opt_debug.m"
            {
#line 471 "opt_debug.m"
              MR_Word ll_backend__opt_debug__RttiTypeCtor_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_68_68, (MR_Integer) 0)));
#line 471 "opt_debug.m"
              MR_Word ll_backend__opt_debug__DataName_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_68_68, (MR_Integer) 1)));
#line 471 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_59_59;
#line 471 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_60_60;
#line 471 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_61_61;
#line 471 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_63_63;
#line 471 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_64_64;

#line 472 "opt_debug.m"
              {
#line 472 "opt_debug.m"
                ll_backend__opt_debug__V_60_60 = ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(ll_backend__opt_debug__RttiTypeCtor_5);
              }
#line 473 "opt_debug.m"
              {
#line 473 "opt_debug.m"
                ll_backend__opt_debug__V_64_64 = ll_backend__opt_debug__dump_rtti_name_1_f_0(ll_backend__opt_debug__DataName_6);
              }
#line 473 "opt_debug.m"
              {
#line 473 "opt_debug.m"
                ll_backend__opt_debug__V_63_63 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_64_64, (MR_String) ")");
              }
#line 473 "opt_debug.m"
              {
#line 473 "opt_debug.m"
                ll_backend__opt_debug__V_61_61 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_63_63);
              }
#line 472 "opt_debug.m"
              {
#line 472 "opt_debug.m"
                ll_backend__opt_debug__V_59_59 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_60_60, ll_backend__opt_debug__V_61_61);
              }
#line 472 "opt_debug.m"
              {
#line 472 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_id(", ll_backend__opt_debug__V_59_59);
              }
#line 471 "opt_debug.m"
            }
#line 471 "opt_debug.m"
          else
#line 475 "opt_debug.m"
            {
#line 475 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCName_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_68_68, (MR_Integer) 0)));
#line 475 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCDataName_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_68_68, (MR_Integer) 1)));
#line 475 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_50_50;
#line 475 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_51_51;
#line 475 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_52_52;
#line 475 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_54_54;
#line 475 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_55_55;

#line 476 "opt_debug.m"
              {
#line 476 "opt_debug.m"
                ll_backend__opt_debug__V_51_51 = ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(ll_backend__opt_debug__TCName_7);
              }
#line 477 "opt_debug.m"
              {
#line 477 "opt_debug.m"
                ll_backend__opt_debug__V_55_55 = ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(ll_backend__opt_debug__TCDataName_8);
              }
#line 477 "opt_debug.m"
              {
#line 477 "opt_debug.m"
                ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_55_55, (MR_String) ")");
              }
#line 477 "opt_debug.m"
              {
#line 477 "opt_debug.m"
                ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_54_54);
              }
#line 476 "opt_debug.m"
              {
#line 476 "opt_debug.m"
                ll_backend__opt_debug__V_50_50 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_51_51, ll_backend__opt_debug__V_52_52);
              }
#line 476 "opt_debug.m"
              {
#line 476 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_rtti_id(", ll_backend__opt_debug__V_50_50);
              }
#line 475 "opt_debug.m"
            }
#line 471 "opt_debug.m"
        }
#line 471 "opt_debug.m"
        break;
#line 471 "opt_debug.m"
      case (MR_Integer) 1:
#line 479 "opt_debug.m"
        {
#line 479 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)));
#line 479 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Id_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
#line 479 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_42_42;
#line 479 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_43_43;
#line 479 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_45_45;
#line 479 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_46_46;

#line 480 "opt_debug.m"
          {
#line 480 "opt_debug.m"
            ll_backend__opt_debug__V_42_42 = backend_libs__rtti__tabling_info_id_str_1_f_0(ll_backend__opt_debug__Id_10);
          }
#line 481 "opt_debug.m"
          {
#line 481 "opt_debug.m"
            ll_backend__opt_debug__V_46_46 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_9);
          }
#line 481 "opt_debug.m"
          {
#line 481 "opt_debug.m"
            ll_backend__opt_debug__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_46_46, (MR_String) ")");
          }
#line 481 "opt_debug.m"
          {
#line 481 "opt_debug.m"
            ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_45_45);
          }
#line 480 "opt_debug.m"
          {
#line 480 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_42_42, ll_backend__opt_debug__V_43_43);
          }
#line 479 "opt_debug.m"
        }
#line 471 "opt_debug.m"
        break;
#line 471 "opt_debug.m"
      case (MR_Integer) 2:
#line 483 "opt_debug.m"
        {
#line 483 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__TypeNum_11;
#line 483 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Offset_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
#line 483 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)));
#line 483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_35_35;
#line 483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_36_36;
#line 483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_37_37;
#line 483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_39_39;
#line 483 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_40_40;

#line 483 "opt_debug.m"
          ll_backend__opt_debug__TypeNum_11 = (MR_Integer) ll_backend__opt_debug__V_33_33;
#line 484 "opt_debug.m"
          {
#line 484 "opt_debug.m"
            ll_backend__opt_debug__V_36_36 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_11);
          }
#line 485 "opt_debug.m"
          {
#line 485 "opt_debug.m"
            ll_backend__opt_debug__V_40_40 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_12);
          }
#line 485 "opt_debug.m"
          {
#line 485 "opt_debug.m"
            ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, (MR_String) ")");
          }
#line 485 "opt_debug.m"
          {
#line 485 "opt_debug.m"
            ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_39_39);
          }
#line 484 "opt_debug.m"
          {
#line 484 "opt_debug.m"
            ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_36_36, ll_backend__opt_debug__V_37_37);
          }
#line 484 "opt_debug.m"
          {
#line 484 "opt_debug.m"
            return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "scalar_common_data_id(", ll_backend__opt_debug__V_35_35);
          }
#line 483 "opt_debug.m"
        }
#line 471 "opt_debug.m"
        break;
#line 471 "opt_debug.m"
      case (MR_Integer) 3:
#line 471 "opt_debug.m"
#line 471 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 0)))) {
#line 471 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 471 "opt_debug.m"
          case (MR_Integer) 0:
#line 487 "opt_debug.m"
            {
#line 487 "opt_debug.m"
              MR_Word ll_backend__opt_debug__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
#line 487 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_26_26;
#line 487 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_27_27;
#line 487 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_28_28;
#line 487 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_30_30;
#line 487 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_31_31;
#line 487 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__TypeNum_66 = (MR_Integer) ll_backend__opt_debug__V_24_24;
#line 487 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Offset_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 2)));

#line 488 "opt_debug.m"
              {
#line 488 "opt_debug.m"
                ll_backend__opt_debug__V_27_27 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_66);
              }
#line 489 "opt_debug.m"
              {
#line 489 "opt_debug.m"
                ll_backend__opt_debug__V_31_31 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_67);
              }
#line 489 "opt_debug.m"
              {
#line 489 "opt_debug.m"
                ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_31_31, (MR_String) ")");
              }
#line 489 "opt_debug.m"
              {
#line 489 "opt_debug.m"
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_30_30);
              }
#line 488 "opt_debug.m"
              {
#line 488 "opt_debug.m"
                ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_28_28);
              }
#line 488 "opt_debug.m"
              {
#line 488 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_data_id(", ll_backend__opt_debug__V_26_26);
              }
#line 487 "opt_debug.m"
            }
#line 471 "opt_debug.m"
            break;
#line 471 "opt_debug.m"
          case (MR_Integer) 1:
#line 491 "opt_debug.m"
            {
#line 491 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LayoutName_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 1)));
#line 491 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_21_21;
#line 491 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_22_22;

#line 492 "opt_debug.m"
              {
#line 492 "opt_debug.m"
                ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_layout_name_1_f_0(ll_backend__opt_debug__LayoutName_13);
              }
#line 492 "opt_debug.m"
              {
#line 492 "opt_debug.m"
                ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
              }
#line 492 "opt_debug.m"
              {
#line 492 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "layout_id(", ll_backend__opt_debug__V_21_21);
              }
#line 491 "opt_debug.m"
            }
#line 471 "opt_debug.m"
            break;
#line 471 "opt_debug.m"
          case (MR_Integer) 2:
#line 494 "opt_debug.m"
            {
#line 494 "opt_debug.m"
              MR_Word ll_backend__opt_debug__PredProcId_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__DataId_3, (MR_Integer) 2)));
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_17_17;
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_18_18;
#line 494 "opt_debug.m"
              MR_Word ll_backend__opt_debug__PredId_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_14, (MR_Integer) 0)));
#line 494 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__ProcId_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_14, (MR_Integer) 1)));
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_72_72;
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_73_73;
#line 494 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__V_74_74;
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_75_75;
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_77_77;
#line 494 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_78_78;
#line 494 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__V_79_79;

#line 501 "opt_debug.m"
              {
#line 501 "opt_debug.m"
                ll_backend__opt_debug__V_74_74 = hlds__hlds_pred__pred_id_to_int_1_f_0(ll_backend__opt_debug__PredId_69);
              }
#line 501 "opt_debug.m"
              {
#line 501 "opt_debug.m"
                ll_backend__opt_debug__V_73_73 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_74_74);
              }
#line 502 "opt_debug.m"
              {
#line 502 "opt_debug.m"
                ll_backend__opt_debug__V_79_79 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__opt_debug__ProcId_70);
              }
#line 502 "opt_debug.m"
              {
#line 502 "opt_debug.m"
                ll_backend__opt_debug__V_78_78 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_79_79);
              }
#line 502 "opt_debug.m"
              {
#line 502 "opt_debug.m"
                ll_backend__opt_debug__V_77_77 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_78_78, (MR_String) ")");
              }
#line 501 "opt_debug.m"
              {
#line 501 "opt_debug.m"
                ll_backend__opt_debug__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_77_77);
              }
#line 501 "opt_debug.m"
              {
#line 501 "opt_debug.m"
                ll_backend__opt_debug__V_72_72 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_73_73, ll_backend__opt_debug__V_75_75);
              }
#line 501 "opt_debug.m"
              {
#line 501 "opt_debug.m"
                ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) "proc(", ll_backend__opt_debug__V_72_72);
              }
#line 495 "opt_debug.m"
              {
#line 495 "opt_debug.m"
                ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_18_18, (MR_String) ")");
              }
#line 495 "opt_debug.m"
              {
#line 495 "opt_debug.m"
                return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_id(", ll_backend__opt_debug__V_17_17);
              }
#line 494 "opt_debug.m"
            }
#line 471 "opt_debug.m"
            break;
#line 471 "opt_debug.m"
        }
#line 471 "opt_debug.m"
        break;
#line 471 "opt_debug.m"
    }
#line 471 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 471 "opt_debug.m"
  }
#line 87 "opt_debug.m"
}

#line 85 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_const_2_f_0(
#line 85 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 85 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Const_5)
#line 85 "opt_debug.m"
{
#line 432 "opt_debug.m"
  {
#line 432 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 432 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;

#line 432 "opt_debug.m"
#line 432 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__Const_5)) {
#line 432 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 432 "opt_debug.m"
      case (MR_Integer) 0:
#line 432 "opt_debug.m"
#line 432 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__Const_5)) {
#line 432 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 432 "opt_debug.m"
          case (MR_Integer) 0:
#line 433 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "true";
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
          case (MR_Integer) 1:
#line 436 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "false";
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
        }
#line 432 "opt_debug.m"
        break;
#line 432 "opt_debug.m"
      case (MR_Integer) 1:
#line 438 "opt_debug.m"
        {
#line 438 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__I_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Const_5, (MR_Integer) 0)));

#line 439 "opt_debug.m"
          {
#line 439 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__I_7);
          }
#line 438 "opt_debug.m"
        }
#line 432 "opt_debug.m"
        break;
#line 432 "opt_debug.m"
      case (MR_Integer) 2:
#line 441 "opt_debug.m"
        {
#line 441 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_9_9;

#line 441 "opt_debug.m"
          ll_backend__opt_debug__Str_6 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Const_5, (MR_Integer) 0)));
#line 441 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
#line 441 "opt_debug.m"
        }
#line 432 "opt_debug.m"
        break;
#line 432 "opt_debug.m"
      case (MR_Integer) 3:
#line 432 "opt_debug.m"
#line 432 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 0)))) {
#line 432 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 432 "opt_debug.m"
          case (MR_Integer) 0:
#line 444 "opt_debug.m"
            {
#line 444 "opt_debug.m"
              MR_Float ll_backend__opt_debug__F_35 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));

#line 445 "opt_debug.m"
              {
#line 445 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__float_to_string_1_f_0(ll_backend__opt_debug__F_35);
              }
#line 444 "opt_debug.m"
            }
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
          case (MR_Integer) 1:
#line 447 "opt_debug.m"
            {
#line 447 "opt_debug.m"
              MR_String ll_backend__opt_debug__S_10 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
#line 447 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_32_32;
#line 447 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_33_33;

#line 448 "opt_debug.m"
              {
#line 448 "opt_debug.m"
                ll_backend__opt_debug__V_33_33 = backend_libs__c_util__quote_string_1_f_0(ll_backend__opt_debug__S_10);
              }
#line 448 "opt_debug.m"
              {
#line 448 "opt_debug.m"
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, (MR_String) "\"");
              }
#line 448 "opt_debug.m"
              {
#line 448 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__opt_debug__V_32_32);
              }
#line 447 "opt_debug.m"
            }
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
          case (MR_Integer) 2:
#line 451 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "multi_string(...)";
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
          case (MR_Integer) 3:
#line 453 "opt_debug.m"
            {
#line 453 "opt_debug.m"
              MR_Word ll_backend__opt_debug__CodeAddr_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
#line 453 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_28_28;
#line 453 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_29_29;

#line 455 "opt_debug.m"
              {
#line 455 "opt_debug.m"
                ll_backend__opt_debug__V_29_29 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__CodeAddr_12);
              }
#line 455 "opt_debug.m"
              {
#line 455 "opt_debug.m"
                ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, (MR_String) ")");
              }
#line 454 "opt_debug.m"
              {
#line 454 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "code_addr_const(", ll_backend__opt_debug__V_28_28);
              }
#line 453 "opt_debug.m"
            }
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
          case (MR_Integer) 4:
#line 457 "opt_debug.m"
            {
#line 457 "opt_debug.m"
              MR_Word ll_backend__opt_debug__DataId_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 1)));
#line 457 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MaybeOffset_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Const_5, (MR_Integer) 2)));
#line 457 "opt_debug.m"
              MR_String ll_backend__opt_debug__DataIdStr_15;

#line 458 "opt_debug.m"
              {
#line 458 "opt_debug.m"
                ll_backend__opt_debug__DataIdStr_15 = ll_backend__opt_debug__dump_data_id_1_f_0(ll_backend__opt_debug__DataId_13);
              }
#line 462 "opt_debug.m"
              if ((ll_backend__opt_debug__MaybeOffset_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 460 "opt_debug.m"
                {
#line 460 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_25_25;

#line 461 "opt_debug.m"
                  {
#line 461 "opt_debug.m"
                    ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_15, (MR_String) ")");
                  }
#line 461 "opt_debug.m"
                  {
#line 461 "opt_debug.m"
                    return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_25_25);
                  }
#line 460 "opt_debug.m"
                }
#line 462 "opt_debug.m"
              else
#line 463 "opt_debug.m"
                {
#line 463 "opt_debug.m"
                  MR_Integer ll_backend__opt_debug__Offset_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_14, (MR_Integer) 0)));
#line 463 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_18_18;
#line 463 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_19_19;
#line 463 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_21_21;
#line 463 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_22_22;

#line 465 "opt_debug.m"
                  {
#line 465 "opt_debug.m"
                    ll_backend__opt_debug__V_22_22 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_16);
                  }
#line 465 "opt_debug.m"
                  {
#line 465 "opt_debug.m"
                    ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
                  }
#line 465 "opt_debug.m"
                  {
#line 465 "opt_debug.m"
                    ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_21_21);
                  }
#line 464 "opt_debug.m"
                  {
#line 464 "opt_debug.m"
                    ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_15, ll_backend__opt_debug__V_19_19);
                  }
#line 464 "opt_debug.m"
                  {
#line 464 "opt_debug.m"
                    return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_18_18);
                  }
#line 463 "opt_debug.m"
                }
#line 457 "opt_debug.m"
            }
#line 432 "opt_debug.m"
            break;
#line 432 "opt_debug.m"
        }
#line 432 "opt_debug.m"
        break;
#line 432 "opt_debug.m"
    }
#line 432 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 432 "opt_debug.m"
  }
#line 85 "opt_debug.m"
}

#line 83 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_mem_ref_2_f_0(
#line 83 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 83 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MemRef_5)
#line 83 "opt_debug.m"
{
#line 411 "opt_debug.m"
  {
#line 411 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 411 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;

#line 411 "opt_debug.m"
#line 411 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__MemRef_5)) {
#line 411 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 411 "opt_debug.m"
      case (MR_Integer) 0:
#line 411 "opt_debug.m"
        {
#line 411 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__MemRef_5, (MR_Integer) 0)));
#line 411 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_28_28;
#line 411 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_29_29;

#line 412 "opt_debug.m"
          {
#line 412 "opt_debug.m"
            ll_backend__opt_debug__V_29_29 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_7);
          }
#line 412 "opt_debug.m"
          {
#line 412 "opt_debug.m"
            ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_29_29, (MR_String) ")");
          }
#line 412 "opt_debug.m"
          {
#line 412 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar_ref(", ll_backend__opt_debug__V_28_28);
          }
#line 411 "opt_debug.m"
        }
#line 411 "opt_debug.m"
        break;
#line 411 "opt_debug.m"
      case (MR_Integer) 1:
#line 414 "opt_debug.m"
        {
#line 414 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_24_24;
#line 414 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_25_25;
#line 414 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MemRef_5, (MR_Integer) 0)));

#line 415 "opt_debug.m"
          {
#line 415 "opt_debug.m"
            ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_31);
          }
#line 415 "opt_debug.m"
          {
#line 415 "opt_debug.m"
            ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
          }
#line 415 "opt_debug.m"
          {
#line 415 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "framevar_ref(", ll_backend__opt_debug__V_24_24);
          }
#line 414 "opt_debug.m"
        }
#line 411 "opt_debug.m"
        break;
#line 411 "opt_debug.m"
      case (MR_Integer) 2:
#line 417 "opt_debug.m"
        {
#line 417 "opt_debug.m"
          MR_Word ll_backend__opt_debug__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__MemRef_5, (MR_Integer) 0)));
#line 417 "opt_debug.m"
          MR_Word ll_backend__opt_debug__MaybeTag_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__MemRef_5, (MR_Integer) 1)));
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__TagString_11;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_13_13;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_14_14;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_15_15;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_17_17;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_18_18;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_20_20;
#line 417 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_21_21;
#line 417 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_32 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__MemRef_5, (MR_Integer) 2)));

#line 421 "opt_debug.m"
          if ((ll_backend__opt_debug__MaybeTag_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 423 "opt_debug.m"
            ll_backend__opt_debug__TagString_11 = (MR_String) "unknown_tag";
#line 421 "opt_debug.m"
          else
#line 419 "opt_debug.m"
            {
#line 419 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Tag_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_9, (MR_Integer) 0)));

#line 420 "opt_debug.m"
              {
#line 420 "opt_debug.m"
                ll_backend__opt_debug__TagString_11 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Tag_10);
              }
#line 419 "opt_debug.m"
            }
#line 426 "opt_debug.m"
          {
#line 426 "opt_debug.m"
            ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_8);
          }
#line 427 "opt_debug.m"
          {
#line 427 "opt_debug.m"
            ll_backend__opt_debug__V_21_21 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_32);
          }
#line 427 "opt_debug.m"
          {
#line 427 "opt_debug.m"
            ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, (MR_String) ")");
          }
#line 427 "opt_debug.m"
          {
#line 427 "opt_debug.m"
            ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_20_20);
          }
#line 427 "opt_debug.m"
          {
#line 427 "opt_debug.m"
            ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TagString_11, ll_backend__opt_debug__V_18_18);
          }
#line 426 "opt_debug.m"
          {
#line 426 "opt_debug.m"
            ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_17_17);
          }
#line 426 "opt_debug.m"
          {
#line 426 "opt_debug.m"
            ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
          }
#line 426 "opt_debug.m"
          {
#line 426 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "heap_ref(", ll_backend__opt_debug__V_13_13);
          }
#line 417 "opt_debug.m"
        }
#line 411 "opt_debug.m"
        break;
#line 411 "opt_debug.m"
    }
#line 411 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 411 "opt_debug.m"
  }
#line 83 "opt_debug.m"
}

#line 81 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rvals_2_f_0(
#line 81 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 81 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 81 "opt_debug.m"
{
#line 404 "opt_debug.m"
  {
#line 404 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 404 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 404 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 404 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 404 "opt_debug.m"
    else
#line 405 "opt_debug.m"
      {
#line 405 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 405 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rvals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 405 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 405 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 405 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 406 "opt_debug.m"
        {
#line 406 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_6);
        }
#line 407 "opt_debug.m"
        {
#line 407 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_rvals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rvals_7);
        }
#line 406 "opt_debug.m"
        {
#line 406 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
        }
#line 406 "opt_debug.m"
        {
#line 406 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 405 "opt_debug.m"
      }
#line 404 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 404 "opt_debug.m"
  }
#line 81 "opt_debug.m"
}

#line 79 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rval_2_f_0(
#line 79 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 79 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Rval_5)
#line 79 "opt_debug.m"
{
#line 364 "opt_debug.m"
  {
#line 364 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 364 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;

#line 364 "opt_debug.m"
#line 364 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__Rval_5)) {
#line 364 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 364 "opt_debug.m"
      case (MR_Integer) 0:
#line 364 "opt_debug.m"
        {
#line 364 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Lval_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)));

#line 365 "opt_debug.m"
          {
#line 365 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Lval_7);
          }
#line 364 "opt_debug.m"
        }
#line 364 "opt_debug.m"
        break;
#line 364 "opt_debug.m"
      case (MR_Integer) 1:
#line 367 "opt_debug.m"
        {
#line 367 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)));
#line 367 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_69_69;
#line 367 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_70_70;
#line 367 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__V_71_71;

#line 368 "opt_debug.m"
          {
#line 368 "opt_debug.m"
            ll_backend__opt_debug__V_71_71 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__opt_debug__Var_8);
          }
#line 368 "opt_debug.m"
          {
#line 368 "opt_debug.m"
            ll_backend__opt_debug__V_70_70 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_71_71);
          }
#line 368 "opt_debug.m"
          {
#line 368 "opt_debug.m"
            ll_backend__opt_debug__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_70_70, (MR_String) ")");
          }
#line 368 "opt_debug.m"
          {
#line 368 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "var(", ll_backend__opt_debug__V_69_69);
          }
#line 367 "opt_debug.m"
        }
#line 364 "opt_debug.m"
        break;
#line 364 "opt_debug.m"
      case (MR_Integer) 2:
#line 370 "opt_debug.m"
        {
#line 370 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__T_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)));
#line 370 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_61_61;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_62_62;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_63_63;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_65_65;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_66_66;

#line 371 "opt_debug.m"
          {
#line 371 "opt_debug.m"
            ll_backend__opt_debug__V_62_62 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_9);
          }
#line 372 "opt_debug.m"
          {
#line 372 "opt_debug.m"
            ll_backend__opt_debug__V_66_66 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_10);
          }
#line 372 "opt_debug.m"
          {
#line 372 "opt_debug.m"
            ll_backend__opt_debug__V_65_65 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_66_66, (MR_String) ")");
          }
#line 371 "opt_debug.m"
          {
#line 371 "opt_debug.m"
            ll_backend__opt_debug__V_63_63 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_65_65);
          }
#line 371 "opt_debug.m"
          {
#line 371 "opt_debug.m"
            ll_backend__opt_debug__V_61_61 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_62_62, ll_backend__opt_debug__V_63_63);
          }
#line 371 "opt_debug.m"
          {
#line 371 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword(", ll_backend__opt_debug__V_61_61);
          }
#line 370 "opt_debug.m"
        }
#line 364 "opt_debug.m"
        break;
#line 364 "opt_debug.m"
      case (MR_Integer) 3:
#line 364 "opt_debug.m"
#line 364 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 0)))) {
#line 364 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 364 "opt_debug.m"
          case (MR_Integer) 0:
#line 374 "opt_debug.m"
            {
#line 374 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_57_57;
#line 374 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_58_58;
#line 374 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__T_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));

#line 375 "opt_debug.m"
              {
#line 375 "opt_debug.m"
                ll_backend__opt_debug__V_58_58 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_73);
              }
#line 375 "opt_debug.m"
              {
#line 375 "opt_debug.m"
                ll_backend__opt_debug__V_57_57 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_58_58, (MR_String) ")");
              }
#line 375 "opt_debug.m"
              {
#line 375 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mkword_hole(", ll_backend__opt_debug__V_57_57);
              }
#line 374 "opt_debug.m"
            }
#line 364 "opt_debug.m"
            break;
#line 364 "opt_debug.m"
          case (MR_Integer) 1:
#line 377 "opt_debug.m"
            {
#line 377 "opt_debug.m"
              MR_Word ll_backend__opt_debug__C_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));

#line 378 "opt_debug.m"
              {
#line 378 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_const_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__C_11);
              }
#line 377 "opt_debug.m"
            }
#line 364 "opt_debug.m"
            break;
#line 364 "opt_debug.m"
          case (MR_Integer) 2:
#line 380 "opt_debug.m"
            {
#line 380 "opt_debug.m"
              MR_Word ll_backend__opt_debug__O_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));
#line 380 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_50_50;
#line 380 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_51_51;
#line 380 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_53_53;
#line 380 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_54_54;
#line 380 "opt_debug.m"
              MR_Word ll_backend__opt_debug__N_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 2)));

#line 381 "opt_debug.m"
              {
#line 381 "opt_debug.m"
                ll_backend__opt_debug__V_50_50 = ll_backend__opt_debug__dump_unop_1_f_0(ll_backend__opt_debug__O_12);
              }
#line 381 "opt_debug.m"
              {
#line 381 "opt_debug.m"
                ll_backend__opt_debug__V_54_54 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_74);
              }
#line 381 "opt_debug.m"
              {
#line 381 "opt_debug.m"
                ll_backend__opt_debug__V_53_53 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_54_54, (MR_String) ")");
              }
#line 381 "opt_debug.m"
              {
#line 381 "opt_debug.m"
                ll_backend__opt_debug__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_53_53);
              }
#line 381 "opt_debug.m"
              {
#line 381 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_50_50, ll_backend__opt_debug__V_51_51);
              }
#line 380 "opt_debug.m"
            }
#line 364 "opt_debug.m"
            break;
#line 364 "opt_debug.m"
          case (MR_Integer) 3:
#line 383 "opt_debug.m"
            {
#line 383 "opt_debug.m"
              MR_Word ll_backend__opt_debug__N1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 2)));
#line 383 "opt_debug.m"
              MR_Word ll_backend__opt_debug__N2_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 3)));
#line 383 "opt_debug.m"
              MR_Word ll_backend__opt_debug__O_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));

#line 385 "opt_debug.m"
              {
#line 385 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_15_15;
#line 385 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_16_16;
#line 385 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_17_17;

#line 385 "opt_debug.m"
                ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N1_13)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 385 "opt_debug.m"
                if (ll_backend__opt_debug__succeeded)
#line 385 "opt_debug.m"
                  {
#line 385 "opt_debug.m"
                    ll_backend__opt_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 1)));
#line 385 "opt_debug.m"
                    ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 2)));
#line 385 "opt_debug.m"
                    ll_backend__opt_debug__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_13, (MR_Integer) 3)));
#line 385 "opt_debug.m"
                  }
#line 385 "opt_debug.m"
              }
#line 386 "opt_debug.m"
              if (!(ll_backend__opt_debug__succeeded))
#line 386 "opt_debug.m"
                {
#line 386 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_18_18;
#line 386 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_19_19;
#line 386 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_20_20;

#line 386 "opt_debug.m"
                  ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N2_14)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 386 "opt_debug.m"
                  if (ll_backend__opt_debug__succeeded)
#line 386 "opt_debug.m"
                    {
#line 386 "opt_debug.m"
                      ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 1)));
#line 386 "opt_debug.m"
                      ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 2)));
#line 386 "opt_debug.m"
                      ll_backend__opt_debug__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_14, (MR_Integer) 3)));
#line 386 "opt_debug.m"
                    }
#line 386 "opt_debug.m"
                }
#line 393 "opt_debug.m"
              if (ll_backend__opt_debug__succeeded)
#line 389 "opt_debug.m"
                {
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_27_27;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_28_28;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_29_29;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_31_31;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_33_33;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_34_34;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_35_35;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_37_37;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_39_39;
#line 389 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_40_40;

#line 390 "opt_debug.m"
                  {
#line 390 "opt_debug.m"
                    ll_backend__opt_debug__V_28_28 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N1_13);
                  }
#line 391 "opt_debug.m"
                  {
#line 391 "opt_debug.m"
                    ll_backend__opt_debug__V_34_34 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_75);
                  }
#line 392 "opt_debug.m"
                  {
#line 392 "opt_debug.m"
                    ll_backend__opt_debug__V_40_40 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N2_14);
                  }
#line 392 "opt_debug.m"
                  {
#line 392 "opt_debug.m"
                    ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, (MR_String) ")");
                  }
#line 392 "opt_debug.m"
                  {
#line 392 "opt_debug.m"
                    ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_39_39);
                  }
#line 391 "opt_debug.m"
                  {
#line 391 "opt_debug.m"
                    ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_37_37);
                  }
#line 391 "opt_debug.m"
                  {
#line 391 "opt_debug.m"
                    ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_34_34, ll_backend__opt_debug__V_35_35);
                  }
#line 391 "opt_debug.m"
                  {
#line 391 "opt_debug.m"
                    ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_33_33);
                  }
#line 390 "opt_debug.m"
                  {
#line 390 "opt_debug.m"
                    ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) ")", ll_backend__opt_debug__V_31_31);
                  }
#line 390 "opt_debug.m"
                  {
#line 390 "opt_debug.m"
                    ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_28_28, ll_backend__opt_debug__V_29_29);
                  }
#line 390 "opt_debug.m"
                  {
#line 390 "opt_debug.m"
                    return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_27_27);
                  }
#line 389 "opt_debug.m"
                }
#line 393 "opt_debug.m"
              else
#line 394 "opt_debug.m"
                {
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_42_42;
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_43_43;
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_45_45;
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_46_46;
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_47_47;
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_49_49;

#line 395 "opt_debug.m"
                  {
#line 395 "opt_debug.m"
                    ll_backend__opt_debug__V_42_42 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N1_13);
                  }
#line 396 "opt_debug.m"
                  {
#line 396 "opt_debug.m"
                    ll_backend__opt_debug__V_46_46 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_75);
                  }
#line 397 "opt_debug.m"
                  {
#line 397 "opt_debug.m"
                    ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N2_14);
                  }
#line 396 "opt_debug.m"
                  {
#line 396 "opt_debug.m"
                    ll_backend__opt_debug__V_47_47 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_49_49);
                  }
#line 396 "opt_debug.m"
                  {
#line 396 "opt_debug.m"
                    ll_backend__opt_debug__V_45_45 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_46_46, ll_backend__opt_debug__V_47_47);
                  }
#line 396 "opt_debug.m"
                  {
#line 396 "opt_debug.m"
                    ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_45_45);
                  }
#line 395 "opt_debug.m"
                  {
#line 395 "opt_debug.m"
                    return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_42_42, ll_backend__opt_debug__V_43_43);
                  }
#line 394 "opt_debug.m"
                }
#line 383 "opt_debug.m"
            }
#line 364 "opt_debug.m"
            break;
#line 364 "opt_debug.m"
          case (MR_Integer) 4:
#line 400 "opt_debug.m"
            {
#line 400 "opt_debug.m"
              MR_Word ll_backend__opt_debug__M_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Rval_5, (MR_Integer) 1)));
#line 400 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_23_23;
#line 400 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_24_24;

#line 401 "opt_debug.m"
              {
#line 401 "opt_debug.m"
                ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_mem_ref_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__M_21);
              }
#line 401 "opt_debug.m"
              {
#line 401 "opt_debug.m"
                ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, (MR_String) ")");
              }
#line 401 "opt_debug.m"
              {
#line 401 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_addr(", ll_backend__opt_debug__V_23_23);
              }
#line 400 "opt_debug.m"
            }
#line 364 "opt_debug.m"
            break;
#line 364 "opt_debug.m"
        }
#line 364 "opt_debug.m"
        break;
#line 364 "opt_debug.m"
    }
#line 364 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 364 "opt_debug.m"
  }
#line 79 "opt_debug.m"
}

#line 77 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_f_0(
#line 77 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 77 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Lvals_5)
#line 77 "opt_debug.m"
{
#line 352 "opt_debug.m"
  {
#line 352 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 352 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 353 "opt_debug.m"
    {
#line 353 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Lvals_5, (MR_String) "");
    }
#line 352 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 352 "opt_debug.m"
  }
#line 77 "opt_debug.m"
}

#line 75 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_lval_2_f_0(
#line 75 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 75 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Lval_5)
#line 75 "opt_debug.m"
{
#line 273 "opt_debug.m"
  {
#line 273 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 273 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;

#line 273 "opt_debug.m"
#line 273 "opt_debug.m"
    switch (MR_tag((MR_Word) ll_backend__opt_debug__Lval_5)) {
#line 273 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 273 "opt_debug.m"
      case (MR_Integer) 0:
#line 273 "opt_debug.m"
#line 273 "opt_debug.m"
        switch (MR_unmkbody(ll_backend__opt_debug__Lval_5)) {
#line 273 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 273 "opt_debug.m"
          case (MR_Integer) 0:
#line 296 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "succip";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 1:
#line 299 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "maxfr";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 2:
#line 302 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "curfr";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 3:
#line 320 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "hp";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 4:
#line 323 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "sp";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 5:
#line 326 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "parent_sp";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
        }
#line 273 "opt_debug.m"
        break;
#line 273 "opt_debug.m"
      case (MR_Integer) 1:
#line 273 "opt_debug.m"
        {
#line 273 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Type_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Lval_5, (MR_Integer) 0)));
#line 273 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Num_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 274 "opt_debug.m"
          {
#line 274 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_7, ll_backend__opt_debug__Num_8);
          }
#line 273 "opt_debug.m"
        }
#line 273 "opt_debug.m"
        break;
#line 273 "opt_debug.m"
      case (MR_Integer) 2:
#line 342 "opt_debug.m"
        {
#line 342 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_27_27;
#line 342 "opt_debug.m"
          MR_Word ll_backend__opt_debug__Type_86 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Lval_5, (MR_Integer) 0)));
#line 342 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__Num_87 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 343 "opt_debug.m"
          {
#line 343 "opt_debug.m"
            ll_backend__opt_debug__V_27_27 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_86, ll_backend__opt_debug__Num_87);
          }
#line 343 "opt_debug.m"
          {
#line 343 "opt_debug.m"
            return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "temp_", ll_backend__opt_debug__V_27_27);
          }
#line 342 "opt_debug.m"
        }
#line 273 "opt_debug.m"
        break;
#line 273 "opt_debug.m"
      case (MR_Integer) 3:
#line 273 "opt_debug.m"
#line 273 "opt_debug.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 0)))) {
#line 273 "opt_debug.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 273 "opt_debug.m"
          case (MR_Integer) 0:
#line 276 "opt_debug.m"
            {
#line 276 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
#line 276 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_76_76;

#line 277 "opt_debug.m"
              {
#line 277 "opt_debug.m"
                ll_backend__opt_debug__V_76_76 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_9);
              }
#line 277 "opt_debug.m"
              {
#line 277 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "sv", ll_backend__opt_debug__V_76_76);
              }
#line 276 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 1:
#line 279 "opt_debug.m"
            {
#line 279 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_74_74;
#line 279 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 280 "opt_debug.m"
              {
#line 280 "opt_debug.m"
                ll_backend__opt_debug__V_74_74 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_77);
              }
#line 280 "opt_debug.m"
              {
#line 280 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "parent_sv", ll_backend__opt_debug__V_74_74);
              }
#line 279 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 2:
#line 282 "opt_debug.m"
            {
#line 282 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_72_72;
#line 282 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__N_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 283 "opt_debug.m"
              {
#line 283 "opt_debug.m"
                ll_backend__opt_debug__V_72_72 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_78);
              }
#line 283 "opt_debug.m"
              {
#line 283 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "fv", ll_backend__opt_debug__V_72_72);
              }
#line 282 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 3:
#line 285 "opt_debug.m"
            {
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__Macro_10;
#line 285 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__V_68_68;
#line 285 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Type_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
#line 285 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__N_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 2)));
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_89_89;
#line 285 "opt_debug.m"
              MR_Word ll_backend__opt_debug__V_95_95;
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_96_96;
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_103_103;
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_105_105;
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_106_106;
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_113_113;
#line 285 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_114_114;

#line 289 "opt_debug.m"
#line 289 "opt_debug.m"
              switch (ll_backend__opt_debug__Type_79) {
#line 289 "opt_debug.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 289 "opt_debug.m"
                case (MR_Integer) 1:
#line 291 "opt_debug.m"
                  ll_backend__opt_debug__Macro_10 = (MR_String) "parent_sv";
#line 289 "opt_debug.m"
                  break;
#line 289 "opt_debug.m"
                case (MR_Integer) 0:
#line 288 "opt_debug.m"
                  ll_backend__opt_debug__Macro_10 = (MR_String) "sv";
#line 289 "opt_debug.m"
                  break;
#line 289 "opt_debug.m"
              }
#line 293 "opt_debug.m"
              ll_backend__opt_debug__V_68_68 = (ll_backend__opt_debug__N_80 + (MR_Integer) 1);
#line 9751 "ll_backend.opt_debug.c"
              ll_backend__opt_debug__V_95_95 = (MR_Word) &ll_backend__opt_debug_scalar_common_4[0];
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_95_95, ll_backend__opt_debug__V_68_68, &ll_backend__opt_debug__V_89_89);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_95_95, ll_backend__opt_debug__Macro_10, &ll_backend__opt_debug__V_96_96);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                ll_backend__opt_debug__V_103_103 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_96_96, ll_backend__opt_debug__V_89_89);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                ll_backend__opt_debug__V_105_105 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_103_103);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_95_95, ll_backend__opt_debug__N_80, &ll_backend__opt_debug__V_106_106);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                ll_backend__opt_debug__V_113_113 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_106_106, ll_backend__opt_debug__V_105_105);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_95_95, ll_backend__opt_debug__Macro_10, &ll_backend__opt_debug__V_114_114);
              }
#line 293 "opt_debug.m"
              {
#line 293 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_114_114, ll_backend__opt_debug__V_113_113);
              }
#line 285 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 4:
#line 316 "opt_debug.m"
            {
#line 316 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_40_40;
#line 316 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_41_41;
#line 316 "opt_debug.m"
              MR_Word ll_backend__opt_debug__R_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 317 "opt_debug.m"
              {
#line 317 "opt_debug.m"
                ll_backend__opt_debug__V_41_41 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_84);
              }
#line 317 "opt_debug.m"
              {
#line 317 "opt_debug.m"
                ll_backend__opt_debug__V_40_40 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_41_41, (MR_String) ")");
              }
#line 317 "opt_debug.m"
              {
#line 317 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succip_slot(", ll_backend__opt_debug__V_40_40);
              }
#line 316 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 5:
#line 304 "opt_debug.m"
            {
#line 304 "opt_debug.m"
              MR_Word ll_backend__opt_debug__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
#line 304 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_56_56;
#line 304 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_57_57;

#line 305 "opt_debug.m"
              {
#line 305 "opt_debug.m"
                ll_backend__opt_debug__V_57_57 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_11);
              }
#line 305 "opt_debug.m"
              {
#line 305 "opt_debug.m"
                ll_backend__opt_debug__V_56_56 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_57_57, (MR_String) ")");
              }
#line 305 "opt_debug.m"
              {
#line 305 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "succfr_slot(", ll_backend__opt_debug__V_56_56);
              }
#line 304 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 6:
#line 313 "opt_debug.m"
            {
#line 313 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_44_44;
#line 313 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_45_45;
#line 313 "opt_debug.m"
              MR_Word ll_backend__opt_debug__R_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 314 "opt_debug.m"
              {
#line 314 "opt_debug.m"
                ll_backend__opt_debug__V_45_45 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_83);
              }
#line 314 "opt_debug.m"
              {
#line 314 "opt_debug.m"
                ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, (MR_String) ")");
              }
#line 314 "opt_debug.m"
              {
#line 314 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redoip_slot(", ll_backend__opt_debug__V_44_44);
              }
#line 313 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 7:
#line 310 "opt_debug.m"
            {
#line 310 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_48_48;
#line 310 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_49_49;
#line 310 "opt_debug.m"
              MR_Word ll_backend__opt_debug__R_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 311 "opt_debug.m"
              {
#line 311 "opt_debug.m"
                ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_82);
              }
#line 311 "opt_debug.m"
              {
#line 311 "opt_debug.m"
                ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) ")");
              }
#line 311 "opt_debug.m"
              {
#line 311 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "redofr_slot(", ll_backend__opt_debug__V_48_48);
              }
#line 310 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 8:
#line 307 "opt_debug.m"
            {
#line 307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_52_52;
#line 307 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_53_53;
#line 307 "opt_debug.m"
              MR_Word ll_backend__opt_debug__R_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 308 "opt_debug.m"
              {
#line 308 "opt_debug.m"
                ll_backend__opt_debug__V_53_53 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_81);
              }
#line 308 "opt_debug.m"
              {
#line 308 "opt_debug.m"
                ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, (MR_String) ")");
              }
#line 308 "opt_debug.m"
              {
#line 308 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "prevfr_slot(", ll_backend__opt_debug__V_52_52);
              }
#line 307 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 9:
#line 328 "opt_debug.m"
            {
#line 328 "opt_debug.m"
              MR_Word ll_backend__opt_debug__MT_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
#line 328 "opt_debug.m"
              MR_Word ll_backend__opt_debug__F_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 3)));
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__T_str_15;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_29_29;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_30_30;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_32_32;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_33_33;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_34_34;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_36_36;
#line 328 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_37_37;
#line 328 "opt_debug.m"
              MR_Word ll_backend__opt_debug__N_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 2)));

#line 332 "opt_debug.m"
              if ((ll_backend__opt_debug__MT_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "opt_debug.m"
                ll_backend__opt_debug__T_str_15 = (MR_String) "no";
#line 332 "opt_debug.m"
              else
#line 330 "opt_debug.m"
                {
#line 330 "opt_debug.m"
                  MR_Integer ll_backend__opt_debug__T_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MT_12, (MR_Integer) 0)));

#line 331 "opt_debug.m"
                  {
#line 331 "opt_debug.m"
                    mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__T_14, &ll_backend__opt_debug__T_str_15);
                  }
#line 330 "opt_debug.m"
                }
#line 336 "opt_debug.m"
              {
#line 336 "opt_debug.m"
                ll_backend__opt_debug__V_33_33 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__N_85);
              }
#line 337 "opt_debug.m"
              {
#line 337 "opt_debug.m"
                ll_backend__opt_debug__V_37_37 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__F_13);
              }
#line 337 "opt_debug.m"
              {
#line 337 "opt_debug.m"
                ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_37_37, (MR_String) ")");
              }
#line 337 "opt_debug.m"
              {
#line 337 "opt_debug.m"
                ll_backend__opt_debug__V_34_34 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_36_36);
              }
#line 336 "opt_debug.m"
              {
#line 336 "opt_debug.m"
                ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_33_33, ll_backend__opt_debug__V_34_34);
              }
#line 336 "opt_debug.m"
              {
#line 336 "opt_debug.m"
                ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_32_32);
              }
#line 336 "opt_debug.m"
              {
#line 336 "opt_debug.m"
                ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_15, ll_backend__opt_debug__V_30_30);
              }
#line 336 "opt_debug.m"
              {
#line 336 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "field(", ll_backend__opt_debug__V_29_29);
              }
#line 328 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 10:
#line 345 "opt_debug.m"
            {
#line 345 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_23_23;
#line 345 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_24_24;
#line 345 "opt_debug.m"
              MR_Word ll_backend__opt_debug__R_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));

#line 346 "opt_debug.m"
              {
#line 346 "opt_debug.m"
                ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__R_88);
              }
#line 346 "opt_debug.m"
              {
#line 346 "opt_debug.m"
                ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, (MR_String) ")");
              }
#line 346 "opt_debug.m"
              {
#line 346 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "mem_ref(", ll_backend__opt_debug__V_23_23);
              }
#line 345 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 11:
#line 348 "opt_debug.m"
            {
#line 348 "opt_debug.m"
              MR_String ll_backend__opt_debug__VarName_17;
#line 348 "opt_debug.m"
              MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Lval_5, (MR_Integer) 1)));
#line 348 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_20_20;

#line 348 "opt_debug.m"
              ll_backend__opt_debug__VarName_17 = (MR_String) ll_backend__opt_debug__V_18_18;
#line 349 "opt_debug.m"
              {
#line 349 "opt_debug.m"
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_17, (MR_String) "))");
              }
#line 349 "opt_debug.m"
              {
#line 349 "opt_debug.m"
                return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "global_var_ref(env_var_ref(", ll_backend__opt_debug__V_20_20);
              }
#line 348 "opt_debug.m"
            }
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
          case (MR_Integer) 12:
#line 340 "opt_debug.m"
            ll_backend__opt_debug__Str_6 = (MR_String) "lvar(_)";
#line 273 "opt_debug.m"
            break;
#line 273 "opt_debug.m"
        }
#line 273 "opt_debug.m"
        break;
#line 273 "opt_debug.m"
    }
#line 273 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 273 "opt_debug.m"
  }
#line 75 "opt_debug.m"
}

#line 73 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_reg_2_f_0(
#line 73 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
#line 73 "opt_debug.m"
  MR_Integer ll_backend__opt_debug__N_2)
#line 73 "opt_debug.m"
{
#line 266 "opt_debug.m"
  {
#line 266 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 266 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 266 "opt_debug.m"
#line 266 "opt_debug.m"
    switch (ll_backend__opt_debug__HeadVar__1_1) {
#line 266 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "opt_debug.m"
      case (MR_Integer) 1:
#line 268 "opt_debug.m"
        {
#line 268 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_9_9;

#line 269 "opt_debug.m"
          {
#line 269 "opt_debug.m"
            ll_backend__opt_debug__V_9_9 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_2);
          }
#line 269 "opt_debug.m"
          {
#line 269 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "f", ll_backend__opt_debug__V_9_9);
          }
#line 268 "opt_debug.m"
        }
#line 266 "opt_debug.m"
        break;
#line 266 "opt_debug.m"
      case (MR_Integer) 0:
#line 266 "opt_debug.m"
        {
#line 266 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_6_6;

#line 267 "opt_debug.m"
          {
#line 267 "opt_debug.m"
            ll_backend__opt_debug__V_6_6 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_2);
          }
#line 267 "opt_debug.m"
          {
#line 267 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "r", ll_backend__opt_debug__V_6_6);
          }
#line 266 "opt_debug.m"
        }
#line 266 "opt_debug.m"
        break;
#line 266 "opt_debug.m"
    }
#line 266 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 266 "opt_debug.m"
  }
#line 73 "opt_debug.m"
}

#line 71 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_livevals_2_f_0(
#line 71 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 71 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Lvalset_5)
#line 71 "opt_debug.m"
{
#line 263 "opt_debug.m"
  {
#line 263 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 263 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;
#line 263 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_6_6;

#line 264 "opt_debug.m"
    {
#line 264 "opt_debug.m"
      ll_backend__opt_debug__V_6_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_debug__Lvalset_5);
    }
#line 353 "opt_debug.m"
    {
#line 353 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__V_6_6, (MR_String) "");
    }
#line 263 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 263 "opt_debug.m"
  }
#line 71 "opt_debug.m"
}

#line 68 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_livemaplist_2_f_0(
#line 68 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 68 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 68 "opt_debug.m"
{
#line 257 "opt_debug.m"
  {
#line 257 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 257 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 257 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 257 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 257 "opt_debug.m"
    else
#line 258 "opt_debug.m"
      {
#line 258 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_6;
#line 258 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lvalset_7;
#line 258 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Livemaplist_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 258 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 258 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 258 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 258 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 258 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 258 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 258 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;
#line 258 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_20_20;

#line 258 "opt_debug.m"
        ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
#line 258 "opt_debug.m"
        ll_backend__opt_debug__Lvalset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
#line 259 "opt_debug.m"
        {
#line 259 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
#line 264 "opt_debug.m"
        {
#line 264 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_debug__Lvalset_7);
        }
#line 353 "opt_debug.m"
        {
#line 353 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__V_20_20, (MR_String) "");
        }
#line 261 "opt_debug.m"
        {
#line 261 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_livemaplist_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Livemaplist_8);
        }
#line 260 "opt_debug.m"
        {
#line 260 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_17_17);
        }
#line 260 "opt_debug.m"
        {
#line 260 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
        }
#line 259 "opt_debug.m"
        {
#line 259 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " ->", ll_backend__opt_debug__V_13_13);
        }
#line 259 "opt_debug.m"
        {
#line 259 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 258 "opt_debug.m"
      }
#line 257 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 257 "opt_debug.m"
  }
#line 68 "opt_debug.m"
}

#line 66 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_livemap_2_f_0(
#line 66 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_4,
#line 66 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Livemap_5)
#line 66 "opt_debug.m"
{
#line 254 "opt_debug.m"
  {
#line 254 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 254 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;
#line 254 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_6_6;

#line 255 "opt_debug.m"
    {
#line 255 "opt_debug.m"
      ll_backend__opt_debug__V_6_6 = mercury__map__to_assoc_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__opt_debug_scalar_common_1[0], ll_backend__opt_debug__Livemap_5);
    }
#line 255 "opt_debug.m"
    {
#line 255 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_livemaplist_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__V_6_6);
    }
#line 254 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 254 "opt_debug.m"
  }
#line 66 "opt_debug.m"
}

#line 64 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_intlist_1_f_0(
#line 64 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 64 "opt_debug.m"
{
#line 250 "opt_debug.m"
  {
#line 250 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 250 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 250 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 250 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
#line 250 "opt_debug.m"
    else
#line 251 "opt_debug.m"
      {
#line 251 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "opt_debug.m"
        MR_Word ll_backend__opt_debug__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 251 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 251 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_7_7;
#line 251 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;

#line 252 "opt_debug.m"
        {
#line 252 "opt_debug.m"
          ll_backend__opt_debug__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__H_3);
        }
#line 252 "opt_debug.m"
        {
#line 252 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_intlist_1_f_0(ll_backend__opt_debug__T_4);
        }
#line 252 "opt_debug.m"
        {
#line 252 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, ll_backend__opt_debug__V_8_8);
        }
#line 252 "opt_debug.m"
        {
#line 252 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_6_6);
        }
#line 251 "opt_debug.m"
      }
#line 250 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 250 "opt_debug.m"
  }
#line 64 "opt_debug.m"
}

#line 216 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
#line 216 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 216 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 216 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 216 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3)
#line 216 "opt_debug.m"
{
#line 216 "opt_debug.m"
  {
#line 216 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
#line 216 "opt_debug.m"
    MR_String ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7;

#line 216 "opt_debug.m"
    {
#line 216 "opt_debug.m"
      ll_backend__opt_debug__dump_comment_char_3_p_0(((MR_Char) (MR_Word) ll_backend__opt_debug__wrapper_arg_1), ((MR_String) ll_backend__opt_debug__wrapper_arg_2), &ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7);
    }
#line 216 "opt_debug.m"
    *ll_backend__opt_debug__wrapper_arg_3 = ((MR_Box) (ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7));
#line 216 "opt_debug.m"
  }
#line 216 "opt_debug.m"
}

#line 62 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0(
#line 62 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
#line 62 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 62 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 62 "opt_debug.m"
{
#line 210 "opt_debug.m"
  {
#line 210 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 210 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 210 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 210 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 210 "opt_debug.m"
    else
#line 211 "opt_debug.m"
      {
#line 211 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 211 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
#line 211 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_9, (MR_Integer) 0)));
#line 211 "opt_debug.m"
        MR_String ll_backend__opt_debug__Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_9, (MR_Integer) 1)));
#line 211 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstrStr0_15;
#line 211 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstrStr_18;
#line 211 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstrsStr_19;
#line 213 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14;

#line 213 "opt_debug.m"
        ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 213 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 213 "opt_debug.m"
          {
#line 213 "opt_debug.m"
            ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 1)));
#line 214 "opt_debug.m"
            {
#line 214 "opt_debug.m"
              ll_backend__opt_debug__InstrStr0_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Uinstr_12);
            }
#line 213 "opt_debug.m"
          }
#line 213 "opt_debug.m"
        else
#line 218 "opt_debug.m"
          {
#line 218 "opt_debug.m"
            MR_String ll_backend__opt_debug__InstrComment_16;

#line 215 "opt_debug.m"
            ll_backend__opt_debug__succeeded = ((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_12)) == (MR_mktag((MR_Integer) 1)));
#line 215 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 215 "opt_debug.m"
              {
#line 215 "opt_debug.m"
                ll_backend__opt_debug__InstrComment_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 0)));
#line 216 "opt_debug.m"
                {
#line 216 "opt_debug.m"
                  MR_String ll_backend__opt_debug__InstrCommentStr_17;
#line 216 "opt_debug.m"
                  MR_Box ll_backend__opt_debug__conv1_InstrCommentStr_17;

#line 216 "opt_debug.m"
                  {
#line 216 "opt_debug.m"
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[1], ll_backend__opt_debug__InstrComment_16, ((MR_Box) ((MR_String) "")), &ll_backend__opt_debug__conv1_InstrCommentStr_17);
                  }
#line 216 "opt_debug.m"
                  ll_backend__opt_debug__InstrCommentStr_17 = ((MR_String) ll_backend__opt_debug__conv1_InstrCommentStr_17);
#line 217 "opt_debug.m"
                  {
#line 217 "opt_debug.m"
                    ll_backend__opt_debug__InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t% ", ll_backend__opt_debug__InstrCommentStr_17);
                  }
#line 216 "opt_debug.m"
                }
#line 215 "opt_debug.m"
              }
#line 215 "opt_debug.m"
            else
#line 219 "opt_debug.m"
              {
#line 219 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_24_24;

#line 219 "opt_debug.m"
                {
#line 219 "opt_debug.m"
                  ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Uinstr_12);
                }
#line 219 "opt_debug.m"
                {
#line 219 "opt_debug.m"
                  ll_backend__opt_debug__InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__opt_debug__V_24_24);
                }
#line 219 "opt_debug.m"
              }
#line 218 "opt_debug.m"
          }
#line 222 "opt_debug.m"
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__HeadVar__2_2 == (MR_Integer) 1);
#line 222 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 222 "opt_debug.m"
          {
#line 223 "opt_debug.m"
            ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Comment_13, (MR_String) "") == 0);
#line 223 "opt_debug.m"
            ll_backend__opt_debug__succeeded = !(ll_backend__opt_debug__succeeded);
#line 222 "opt_debug.m"
          }
#line 226 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 225 "opt_debug.m"
          {
#line 225 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_25_25;
#line 225 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_27_27;

#line 225 "opt_debug.m"
            {
#line 225 "opt_debug.m"
              ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_13, (MR_String) "\n");
            }
#line 225 "opt_debug.m"
            {
#line 225 "opt_debug.m"
              ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", ll_backend__opt_debug__V_27_27);
            }
#line 225 "opt_debug.m"
            {
#line 225 "opt_debug.m"
              ll_backend__opt_debug__InstrStr_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr0_15, ll_backend__opt_debug__V_25_25);
            }
#line 225 "opt_debug.m"
          }
#line 226 "opt_debug.m"
        else
#line 227 "opt_debug.m"
          {
#line 227 "opt_debug.m"
            {
#line 227 "opt_debug.m"
              ll_backend__opt_debug__InstrStr_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr0_15, (MR_String) "\n");
            }
#line 227 "opt_debug.m"
          }
#line 229 "opt_debug.m"
        {
#line 229 "opt_debug.m"
          ll_backend__opt_debug__InstrsStr_19 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
#line 230 "opt_debug.m"
        {
#line 230 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr_18, ll_backend__opt_debug__InstrsStr_19);
        }
#line 211 "opt_debug.m"
      }
#line 210 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 210 "opt_debug.m"
  }
#line 62 "opt_debug.m"
}

#line 194 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
#line 194 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 194 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 194 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 194 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3)
#line 194 "opt_debug.m"
{
#line 194 "opt_debug.m"
  {
#line 194 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;

#line 194 "opt_debug.m"
    {
#line 194 "opt_debug.m"
      ll_backend__opt_debug__print_comment_char_3_p_0(((MR_Char) (MR_Word) ll_backend__opt_debug__wrapper_arg_1));
#line 194 "opt_debug.m"
      return;
    }
#line 194 "opt_debug.m"
  }
#line 194 "opt_debug.m"
}

#line 53 "opt_debug.m"
void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0(
#line 53 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
#line 53 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 53 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 53 "opt_debug.m"
{
#line 187 "opt_debug.m"
  while (MR_TRUE)
#line 187 "opt_debug.m"
    {
#line 187 "opt_debug.m"
      /* tailcall optimized into a loop */
#line 187 "opt_debug.m"
      {
#line 187 "opt_debug.m"
        MR_bool ll_backend__opt_debug__succeeded;

#line 187 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 187 "opt_debug.m"
          {
#line 187 "opt_debug.m"
          }
#line 187 "opt_debug.m"
        else
#line 188 "opt_debug.m"
          {
#line 188 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Instr_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 188 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Uinstr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_11, (MR_Integer) 0)));
#line 188 "opt_debug.m"
            MR_String ll_backend__opt_debug__Comment_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_11, (MR_Integer) 1)));
#line 190 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_18_18;

#line 190 "opt_debug.m"
            ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 190 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 190 "opt_debug.m"
              {
#line 190 "opt_debug.m"
                ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 1)));
#line 191 "opt_debug.m"
                {
#line 191 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_22_22;

#line 191 "opt_debug.m"
                  {
#line 191 "opt_debug.m"
                    ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__HeadVar__3_3, ll_backend__opt_debug__Uinstr_16);
                  }
#line 191 "opt_debug.m"
                  {
#line 191 "opt_debug.m"
                    mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_22_22);
                  }
#line 191 "opt_debug.m"
                }
#line 190 "opt_debug.m"
              }
#line 190 "opt_debug.m"
            else
#line 195 "opt_debug.m"
              {
#line 195 "opt_debug.m"
                MR_String ll_backend__opt_debug__InstrComment_19;

#line 192 "opt_debug.m"
                ll_backend__opt_debug__succeeded = ((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_16)) == (MR_mktag((MR_Integer) 1)));
#line 192 "opt_debug.m"
                if (ll_backend__opt_debug__succeeded)
#line 192 "opt_debug.m"
                  {
#line 192 "opt_debug.m"
                    ll_backend__opt_debug__InstrComment_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 0)));
#line 193 "opt_debug.m"
                    {
#line 194 "opt_debug.m"
                      MR_Box ll_backend__opt_debug__conv0_STATE_VARIABLE_IO_23_23;

#line 193 "opt_debug.m"
                      {
#line 193 "opt_debug.m"
                        mercury__io__write_string_3_p_0((MR_String) "\t% ");
                      }
#line 194 "opt_debug.m"
                      {
#line 194 "opt_debug.m"
                        mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[0], ll_backend__opt_debug__InstrComment_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__opt_debug__conv0_STATE_VARIABLE_IO_23_23);
                      }
#line 193 "opt_debug.m"
                    }
#line 192 "opt_debug.m"
                  }
#line 192 "opt_debug.m"
                else
#line 196 "opt_debug.m"
                  {
#line 196 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_30_30;

#line 196 "opt_debug.m"
                    {
#line 196 "opt_debug.m"
                      mercury__io__write_string_3_p_0((MR_String) "\t");
                    }
#line 197 "opt_debug.m"
                    {
#line 197 "opt_debug.m"
                      ll_backend__opt_debug__V_30_30 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__HeadVar__3_3, ll_backend__opt_debug__Uinstr_16);
                    }
#line 197 "opt_debug.m"
                    {
#line 197 "opt_debug.m"
                      mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_30_30);
                    }
#line 196 "opt_debug.m"
                  }
#line 195 "opt_debug.m"
              }
#line 200 "opt_debug.m"
            ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__HeadVar__3_3 == (MR_Integer) 1);
#line 200 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 200 "opt_debug.m"
              {
#line 201 "opt_debug.m"
                ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Comment_17, (MR_String) "") == 0);
#line 201 "opt_debug.m"
                ll_backend__opt_debug__succeeded = !(ll_backend__opt_debug__succeeded);
#line 200 "opt_debug.m"
              }
#line 204 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 203 "opt_debug.m"
              {
#line 203 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_32_32;

#line 203 "opt_debug.m"
                {
#line 203 "opt_debug.m"
                  ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", ll_backend__opt_debug__Comment_17);
                }
#line 203 "opt_debug.m"
                {
#line 203 "opt_debug.m"
                  mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_32_32);
                }
#line 203 "opt_debug.m"
              }
#line 204 "opt_debug.m"
            else
#line 204 "opt_debug.m"
              {
#line 204 "opt_debug.m"
              }
#line 207 "opt_debug.m"
            {
#line 207 "opt_debug.m"
              mercury__io__nl_2_p_0();
            }
#line 208 "opt_debug.m"
            /* direct tailcall eliminated */
#line 208 "opt_debug.m"
            {
#line 208 "opt_debug.m"
              MR_Word ll_backend__opt_debug__HeadVar__1__tmp_copy_1 = ll_backend__opt_debug__Instrs_12;

#line 208 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__1_1 = ll_backend__opt_debug__HeadVar__1__tmp_copy_1;
#line 208 "opt_debug.m"
            }
#line 208 "opt_debug.m"
            continue;
#line 188 "opt_debug.m"
          }
#line 187 "opt_debug.m"
      }
#line 187 "opt_debug.m"
      break;
#line 187 "opt_debug.m"
    }
#line 53 "opt_debug.m"
}

#line 45 "opt_debug.m"
void MR_CALL 
ll_backend__opt_debug__maybe_write_instrs_6_p_0(
#line 45 "opt_debug.m"
  MR_Word ll_backend__opt_debug__OptDebug_7,
#line 45 "opt_debug.m"
  MR_Word ll_backend__opt_debug__AutoComments_8,
#line 45 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_9,
#line 45 "opt_debug.m"
  MR_Word ll_backend__opt_debug__Instrs_10)
#line 45 "opt_debug.m"
{
#line 181 "opt_debug.m"
  {
#line 181 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;

#line 181 "opt_debug.m"
#line 181 "opt_debug.m"
    switch (ll_backend__opt_debug__OptDebug_7) {
#line 181 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 181 "opt_debug.m"
      case (MR_Integer) 0:
#line 184 "opt_debug.m"
        {
#line 184 "opt_debug.m"
        }
#line 181 "opt_debug.m"
        break;
#line 181 "opt_debug.m"
      case (MR_Integer) 1:
#line 182 "opt_debug.m"
        {
#line 182 "opt_debug.m"
          ll_backend__opt_debug__write_instrs_5_p_0(ll_backend__opt_debug__Instrs_10, ll_backend__opt_debug__MaybeProcLabel_9, ll_backend__opt_debug__AutoComments_8);
#line 182 "opt_debug.m"
          return;
        }
#line 181 "opt_debug.m"
        break;
#line 181 "opt_debug.m"
    }
#line 181 "opt_debug.m"
  }
#line 45 "opt_debug.m"
}

#line 37 "opt_debug.m"
void MR_CALL 
ll_backend__opt_debug__msg_5_p_0(
#line 37 "opt_debug.m"
  MR_Word ll_backend__opt_debug__OptDebug_6,
#line 37 "opt_debug.m"
  MR_Integer ll_backend__opt_debug__LabelNo_7,
#line 37 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_8)
#line 37 "opt_debug.m"
{
#line 165 "opt_debug.m"
  {
#line 165 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;

#line 165 "opt_debug.m"
#line 165 "opt_debug.m"
    switch (ll_backend__opt_debug__OptDebug_6) {
#line 165 "opt_debug.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 165 "opt_debug.m"
      case (MR_Integer) 0:
#line 176 "opt_debug.m"
        {
#line 176 "opt_debug.m"
        }
#line 165 "opt_debug.m"
        break;
#line 165 "opt_debug.m"
      case (MR_Integer) 1:
#line 165 "opt_debug.m"
        {
#line 166 "opt_debug.m"
          {
#line 166 "opt_debug.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
          }
#line 167 "opt_debug.m"
          {
#line 167 "opt_debug.m"
            mercury__io__write_string_3_p_0(ll_backend__opt_debug__Msg_8);
          }
#line 168 "opt_debug.m"
          ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__LabelNo_7 >= (MR_Integer) 0);
#line 171 "opt_debug.m"
          if (ll_backend__opt_debug__succeeded)
#line 169 "opt_debug.m"
            {
#line 169 "opt_debug.m"
              {
#line 169 "opt_debug.m"
                mercury__io__write_string_3_p_0((MR_String) ", next label no: ");
              }
#line 170 "opt_debug.m"
              {
#line 170 "opt_debug.m"
                mercury__io__write_int_3_p_0(ll_backend__opt_debug__LabelNo_7);
              }
#line 169 "opt_debug.m"
            }
#line 171 "opt_debug.m"
          else
#line 171 "opt_debug.m"
            {
#line 171 "opt_debug.m"
            }
#line 174 "opt_debug.m"
          {
#line 174 "opt_debug.m"
            mercury__io__write_string_3_p_0((MR_String) "\n");
#line 174 "opt_debug.m"
            return;
          }
#line 165 "opt_debug.m"
        }
#line 165 "opt_debug.m"
        break;
#line 165 "opt_debug.m"
    }
#line 165 "opt_debug.m"
  }
#line 37 "opt_debug.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module ll_backend.opt_debug. */
