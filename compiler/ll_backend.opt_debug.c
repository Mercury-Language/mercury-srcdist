/*
** Automatically generated from `opt_debug.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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
#include "integer.mih"
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
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 1242 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
#line 1242 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1242 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1234 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
#line 1234 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1234 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1226 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
#line 1226 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1195 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
#line 1195 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1195 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1184 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
#line 1184 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1179 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
#line 1179 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1174 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
#line 1174 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1169 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
#line 1169 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_1,
#line 1169 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1163 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
#line 1163 "opt_debug.m"
  MR_String ll_backend__opt_debug__HeadVar__1_1,
#line 1163 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 1163 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3);

#line 1158 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
#line 1158 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1144 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
#line 1144 "opt_debug.m"
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3);

#line 790 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
#line 790 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiProcLabel_3);

#line 325 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
#line 325 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 325 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 325 "opt_debug.m"
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

#line 521 "opt_debug.m"
static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
#line 521 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 521 "opt_debug.m"
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



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 1242 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
#line 1242 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1242 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1242 "opt_debug.m"
{
#line 1245 "opt_debug.m"
  {
#line 1245 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1245 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1245 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1245 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1245 "opt_debug.m"
    else
#line 1246 "opt_debug.m"
      {
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 1246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1260 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
#line 1260 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
#line 1260 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
#line 1260 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

#line 1261 "opt_debug.m"
        {
#line 1261 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_13);
        }
#line 1266 "opt_debug.m"
        if ((ll_backend__opt_debug__Dummy_15 == (MR_Integer) 0))
#line 1267 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = (MR_String) " (dummy)";
#line 1266 "opt_debug.m"
        else
#line 1266 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = (MR_String) "";
#line 1261 "opt_debug.m"
        {
#line 1261 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_17, ll_backend__opt_debug__V_24_24);
        }
#line 1261 "opt_debug.m"
        {
#line 1261 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_23_23);
        }
#line 1261 "opt_debug.m"
        {
#line 1261 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, ll_backend__opt_debug__V_21_21);
        }
#line 1248 "opt_debug.m"
        {
#line 1248 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
#line 1247 "opt_debug.m"
        {
#line 1247 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
#line 1247 "opt_debug.m"
        {
#line 1247 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1246 "opt_debug.m"
      }
#line 1245 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1245 "opt_debug.m"
  }
#line 1242 "opt_debug.m"
}

#line 1234 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
#line 1234 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1234 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1234 "opt_debug.m"
{
#line 1237 "opt_debug.m"
  {
#line 1237 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1237 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1237 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1237 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1237 "opt_debug.m"
    else
#line 1238 "opt_debug.m"
      {
#line 1238 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1238 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
#line 1238 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
#line 1238 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 1238 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

#line 1266 "opt_debug.m"
        if ((ll_backend__opt_debug__Dummy_15 == (MR_Integer) 0))
#line 1267 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = (MR_String) " (dummy)";
#line 1266 "opt_debug.m"
        else
#line 1266 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = (MR_String) "";
#line 1255 "opt_debug.m"
        {
#line 1255 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_17);
        }
#line 1254 "opt_debug.m"
        {
#line 1254 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_24_24);
        }
#line 1254 "opt_debug.m"
        {
#line 1254 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, ll_backend__opt_debug__V_22_22);
        }
#line 1254 "opt_debug.m"
        {
#line 1254 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_13, ll_backend__opt_debug__V_20_20);
        }
#line 1240 "opt_debug.m"
        {
#line 1240 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
#line 1239 "opt_debug.m"
        {
#line 1239 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
#line 1239 "opt_debug.m"
        {
#line 1239 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1238 "opt_debug.m"
      }
#line 1237 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1237 "opt_debug.m"
  }
#line 1234 "opt_debug.m"
}

#line 1226 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
#line 1226 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1226 "opt_debug.m"
{
#line 1228 "opt_debug.m"
  {
#line 1228 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1228 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1228 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 1228 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "affects_liveness";
#line 1228 "opt_debug.m"
    else
#line 1228 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 2))
#line 1232 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "default_affects_liveness";
#line 1228 "opt_debug.m"
    else
#line 1230 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "does_not_affect_liveness";
#line 1228 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1228 "opt_debug.m"
  }
#line 1226 "opt_debug.m"
}

#line 1195 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
#line 1195 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1195 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1195 "opt_debug.m"
{
#line 1198 "opt_debug.m"
  {
#line 1198 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1198 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1198 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1198 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1198 "opt_debug.m"
    else
#line 1199 "opt_debug.m"
      {
#line 1199 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1199 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1199 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1199 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;

#line 1205 "opt_debug.m"
        if ((ll_backend__opt_debug__Comp_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1224 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = (MR_String) "";
#line 1205 "opt_debug.m"
        else
#line 1205 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 1))))
#line 1205 "opt_debug.m"
          {
#line 1205 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

#line 1206 "opt_debug.m"
            {
#line 1206 "opt_debug.m"
              ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_11);
            }
#line 1205 "opt_debug.m"
          }
#line 1205 "opt_debug.m"
        else
#line 1205 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 2))))
#line 1207 "opt_debug.m"
          {
#line 1207 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

#line 1208 "opt_debug.m"
            {
#line 1208 "opt_debug.m"
              ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Outputs_13);
            }
#line 1207 "opt_debug.m"
          }
#line 1205 "opt_debug.m"
        else
#line 1205 "opt_debug.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1223 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = (MR_String) "<alloc_id>";
#line 1205 "opt_debug.m"
        else
#line 1205 "opt_debug.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1221 "opt_debug.m"
          {
#line 1221 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Label_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
#line 1221 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_48_48;
#line 1221 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_49_49;

#line 1222 "opt_debug.m"
            {
#line 1222 "opt_debug.m"
              ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_46);
            }
#line 1222 "opt_debug.m"
            {
#line 1222 "opt_debug.m"
              ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) "\n");
            }
#line 1222 "opt_debug.m"
            {
#line 1222 "opt_debug.m"
              ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "fail to ", ll_backend__opt_debug__V_48_48);
            }
#line 1221 "opt_debug.m"
          }
#line 1205 "opt_debug.m"
        else
#line 1205 "opt_debug.m"
        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1215 "opt_debug.m"
          {
#line 1215 "opt_debug.m"
            MR_Word ll_backend__opt_debug__AL_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
#line 1215 "opt_debug.m"
            MR_String ll_backend__opt_debug__Code_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 4)));
#line 1215 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
#line 1215 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));

#line 1216 "opt_debug.m"
            ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_33, (MR_String) "") == 0);
#line 1215 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 1217 "opt_debug.m"
              {
#line 1217 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_35_35;
#line 1217 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_36_36;

#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 0))
#line 1228 "opt_debug.m"
                  ll_backend__opt_debug__V_36_36 = (MR_String) "affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 2))
#line 1232 "opt_debug.m"
                  ll_backend__opt_debug__V_36_36 = (MR_String) "default_affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1230 "opt_debug.m"
                  ll_backend__opt_debug__V_36_36 = (MR_String) "does_not_affect_liveness";
#line 1217 "opt_debug.m"
                {
#line 1217 "opt_debug.m"
                  ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_36_36, (MR_String) "\n");
                }
#line 1217 "opt_debug.m"
                {
#line 1217 "opt_debug.m"
                  ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty raw_code: ", ll_backend__opt_debug__V_35_35);
                }
#line 1217 "opt_debug.m"
              }
#line 1215 "opt_debug.m"
            else
#line 1219 "opt_debug.m"
              {
#line 1219 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_39_39;
#line 1219 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_40_40;
#line 1219 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_41_41;
#line 1219 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_43_43;

#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 0))
#line 1228 "opt_debug.m"
                  ll_backend__opt_debug__V_40_40 = (MR_String) "affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 2))
#line 1232 "opt_debug.m"
                  ll_backend__opt_debug__V_40_40 = (MR_String) "default_affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1230 "opt_debug.m"
                  ll_backend__opt_debug__V_40_40 = (MR_String) "does_not_affect_liveness";
#line 1219 "opt_debug.m"
                {
#line 1219 "opt_debug.m"
                  ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_33, (MR_String) "\n");
                }
#line 1219 "opt_debug.m"
                {
#line 1219 "opt_debug.m"
                  ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_43_43);
                }
#line 1219 "opt_debug.m"
                {
#line 1219 "opt_debug.m"
                  ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, ll_backend__opt_debug__V_41_41);
                }
#line 1219 "opt_debug.m"
                {
#line 1219 "opt_debug.m"
                  ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "raw_code:\n", ll_backend__opt_debug__V_39_39);
                }
#line 1219 "opt_debug.m"
              }
#line 1215 "opt_debug.m"
          }
#line 1205 "opt_debug.m"
        else
#line 1209 "opt_debug.m"
          {
#line 1209 "opt_debug.m"
            MR_Word ll_backend__opt_debug__AL_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
#line 1209 "opt_debug.m"
            MR_String ll_backend__opt_debug__Code_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));
#line 1209 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));

#line 1210 "opt_debug.m"
            ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_17, (MR_String) "") == 0);
#line 1209 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 1211 "opt_debug.m"
              {
#line 1211 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_19_19;
#line 1211 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_20_20;

#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 0))
#line 1228 "opt_debug.m"
                  ll_backend__opt_debug__V_20_20 = (MR_String) "affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 2))
#line 1232 "opt_debug.m"
                  ll_backend__opt_debug__V_20_20 = (MR_String) "default_affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1230 "opt_debug.m"
                  ll_backend__opt_debug__V_20_20 = (MR_String) "does_not_affect_liveness";
#line 1211 "opt_debug.m"
                {
#line 1211 "opt_debug.m"
                  ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, (MR_String) "\n");
                }
#line 1211 "opt_debug.m"
                {
#line 1211 "opt_debug.m"
                  ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty user_code: ", ll_backend__opt_debug__V_19_19);
                }
#line 1211 "opt_debug.m"
              }
#line 1209 "opt_debug.m"
            else
#line 1213 "opt_debug.m"
              {
#line 1213 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_23_23;
#line 1213 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_24_24;
#line 1213 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_25_25;
#line 1213 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_27_27;

#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 0))
#line 1228 "opt_debug.m"
                  ll_backend__opt_debug__V_24_24 = (MR_String) "affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1228 "opt_debug.m"
                if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 2))
#line 1232 "opt_debug.m"
                  ll_backend__opt_debug__V_24_24 = (MR_String) "default_affects_liveness";
#line 1228 "opt_debug.m"
                else
#line 1230 "opt_debug.m"
                  ll_backend__opt_debug__V_24_24 = (MR_String) "does_not_affect_liveness";
#line 1213 "opt_debug.m"
                {
#line 1213 "opt_debug.m"
                  ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_17, (MR_String) "\n");
                }
#line 1213 "opt_debug.m"
                {
#line 1213 "opt_debug.m"
                  ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_27_27);
                }
#line 1213 "opt_debug.m"
                {
#line 1213 "opt_debug.m"
                  ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, ll_backend__opt_debug__V_25_25);
                }
#line 1213 "opt_debug.m"
                {
#line 1213 "opt_debug.m"
                  ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "user_code: ", ll_backend__opt_debug__V_23_23);
                }
#line 1213 "opt_debug.m"
              }
#line 1209 "opt_debug.m"
          }
#line 1201 "opt_debug.m"
        {
#line 1201 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Comps_7);
        }
#line 1200 "opt_debug.m"
        {
#line 1200 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1199 "opt_debug.m"
      }
#line 1198 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1198 "opt_debug.m"
  }
#line 1195 "opt_debug.m"
}

#line 1184 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
#line 1184 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1184 "opt_debug.m"
{
#line 1186 "opt_debug.m"
  {
#line 1186 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1186 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1186 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1186 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
#line 1186 "opt_debug.m"
    else
#line 1187 "opt_debug.m"
      {
#line 1187 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decl_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 1187 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decls_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_5_5;
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__TypeStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 1)));
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 2)));
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 1187 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 1192 "opt_debug.m"
        MR_Word ll_backend__opt_debug___MerType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 0)));

#line 1193 "opt_debug.m"
        {
#line 1193 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_9, (MR_String) "\n");
        }
#line 1193 "opt_debug.m"
        {
#line 1193 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_14_14);
        }
#line 1193 "opt_debug.m"
        {
#line 1193 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypeStr_8, ll_backend__opt_debug__V_12_12);
        }
#line 1193 "opt_debug.m"
        {
#line 1193 "opt_debug.m"
          ll_backend__opt_debug__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "decl ", ll_backend__opt_debug__V_11_11);
        }
#line 1188 "opt_debug.m"
        {
#line 1188 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_4);
        }
#line 1188 "opt_debug.m"
        {
#line 1188 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_5_5, ll_backend__opt_debug__V_6_6);
        }
#line 1187 "opt_debug.m"
      }
#line 1186 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1186 "opt_debug.m"
  }
#line 1184 "opt_debug.m"
}

#line 1179 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
#line 1179 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1179 "opt_debug.m"
{
#line 1181 "opt_debug.m"
  {
#line 1181 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1181 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1181 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 1))
#line 1182 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_use_atomic_alloc";
#line 1181 "opt_debug.m"
    else
#line 1181 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_use_atomic_alloc";
#line 1181 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1181 "opt_debug.m"
  }
#line 1179 "opt_debug.m"
}

#line 1174 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
#line 1174 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1174 "opt_debug.m"
{
#line 1176 "opt_debug.m"
  {
#line 1176 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1176 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1176 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 1176 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_duplicate";
#line 1176 "opt_debug.m"
    else
#line 1177 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_duplicate";
#line 1176 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1176 "opt_debug.m"
  }
#line 1174 "opt_debug.m"
}

#line 1169 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
#line 1169 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_1,
#line 1169 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1169 "opt_debug.m"
{
#line 1171 "opt_debug.m"
  {
#line 1171 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1171 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1171 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == (MR_Integer) 0))
#line 1171 "opt_debug.m"
      {
#line 1171 "opt_debug.m"
        {
#line 1171 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " no\n");
        }
#line 1171 "opt_debug.m"
      }
#line 1171 "opt_debug.m"
    else
#line 1172 "opt_debug.m"
      {
#line 1172 "opt_debug.m"
        {
#line 1172 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " yes\n");
        }
#line 1172 "opt_debug.m"
      }
#line 1171 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1171 "opt_debug.m"
  }
#line 1169 "opt_debug.m"
}

#line 1163 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
#line 1163 "opt_debug.m"
  MR_String ll_backend__opt_debug__HeadVar__1_1,
#line 1163 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 1163 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 1163 "opt_debug.m"
{
#line 1165 "opt_debug.m"
  {
#line 1165 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1165 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 1165 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1165 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 1165 "opt_debug.m"
    else
#line 1166 "opt_debug.m"
      {
#line 1166 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1166 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1166 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 1166 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1167 "opt_debug.m"
        {
#line 1167 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Label_9);
        }
#line 1167 "opt_debug.m"
        {
#line 1167 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, (MR_String) "\n");
        }
#line 1167 "opt_debug.m"
        {
#line 1167 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_12_12);
        }
#line 1167 "opt_debug.m"
        {
#line 1167 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__V_10_10);
        }
#line 1166 "opt_debug.m"
      }
#line 1165 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 1165 "opt_debug.m"
  }
#line 1163 "opt_debug.m"
}

#line 1158 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
#line 1158 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1158 "opt_debug.m"
{
#line 1160 "opt_debug.m"
  {
#line 1160 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1160 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1160 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 1160 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_call_mercury";
#line 1160 "opt_debug.m"
    else
#line 1161 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "will_not_call_mercury";
#line 1160 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1160 "opt_debug.m"
  }
#line 1158 "opt_debug.m"
}

#line 1144 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
#line 1144 "opt_debug.m"
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3)
#line 1144 "opt_debug.m"
{
#line 1146 "opt_debug.m"
  {
#line 1146 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1146 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;
#line 1146 "opt_debug.m"
    MR_Word ll_backend__opt_debug__StackId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 0)));
#line 1146 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__FirstSlot_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 1)));
#line 1146 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__LastSlot_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 2)));

#line 1152 "opt_debug.m"
    if ((ll_backend__opt_debug__StackId_5 == (MR_Integer) 0))
#line 1149 "opt_debug.m"
      {
#line 1149 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 1149 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 1149 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;
#line 1149 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_19_19;

#line 1150 "opt_debug.m"
        {
#line 1150 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
        }
#line 1151 "opt_debug.m"
        {
#line 1151 "opt_debug.m"
          ll_backend__opt_debug__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
        }
#line 1151 "opt_debug.m"
        {
#line 1151 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_19_19);
        }
#line 1151 "opt_debug.m"
        {
#line 1151 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
        }
#line 1150 "opt_debug.m"
        {
#line 1150 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "detstack slots ", ll_backend__opt_debug__V_15_15);
        }
#line 1149 "opt_debug.m"
      }
#line 1152 "opt_debug.m"
    else
#line 1153 "opt_debug.m"
      {
#line 1153 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1153 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1153 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1153 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1154 "opt_debug.m"
        {
#line 1154 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
        }
#line 1155 "opt_debug.m"
        {
#line 1155 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
        }
#line 1155 "opt_debug.m"
        {
#line 1155 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_13_13);
        }
#line 1155 "opt_debug.m"
        {
#line 1155 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 1154 "opt_debug.m"
        {
#line 1154 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "nondetstack slots ", ll_backend__opt_debug__V_9_9);
        }
#line 1153 "opt_debug.m"
      }
#line 1146 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 1146 "opt_debug.m"
  }
#line 1144 "opt_debug.m"
}

#line 790 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
#line 790 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiProcLabel_3)
#line 790 "opt_debug.m"
{
#line 792 "opt_debug.m"
  {
#line 792 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 792 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;
#line 792 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_4_4;

#line 793 "opt_debug.m"
    {
#line 793 "opt_debug.m"
      ll_backend__opt_debug__V_4_4 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__opt_debug__RttiProcLabel_3);
    }
#line 793 "opt_debug.m"
    {
#line 793 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__2_2 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__V_4_4);
    }
#line 792 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 792 "opt_debug.m"
  }
#line 790 "opt_debug.m"
}

#line 325 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
#line 325 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 325 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 325 "opt_debug.m"
  MR_String ll_backend__opt_debug__Prefix_3)
#line 325 "opt_debug.m"
{
#line 327 "opt_debug.m"
  {
#line 327 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 327 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 327 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 327 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 327 "opt_debug.m"
    else
#line 328 "opt_debug.m"
      {
#line 328 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 328 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lvallist_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 328 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 328 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 328 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 329 "opt_debug.m"
        {
#line 329 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_8);
        }
#line 330 "opt_debug.m"
        {
#line 330 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lvallist_9, (MR_String) " ");
        }
#line 329 "opt_debug.m"
        {
#line 329 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
#line 329 "opt_debug.m"
        {
#line 329 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Prefix_3, ll_backend__opt_debug__V_11_11);
        }
#line 328 "opt_debug.m"
      }
#line 327 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 327 "opt_debug.m"
  }
#line 325 "opt_debug.m"
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
#line 1280 "opt_debug.m"
  {
#line 1280 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1280 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 1280 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1280 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 1280 "opt_debug.m"
    else
#line 1281 "opt_debug.m"
      {
#line 1281 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1281 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
#line 1281 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1281 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;

#line 1282 "opt_debug.m"
        {
#line 1282 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_fullinstr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instr_9);
        }
#line 1283 "opt_debug.m"
        {
#line 1283 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
#line 1283 "opt_debug.m"
        {
#line 1283 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_11_11, ll_backend__opt_debug__V_12_12);
        }
#line 1281 "opt_debug.m"
      }
#line 1280 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 1280 "opt_debug.m"
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
#line 1270 "opt_debug.m"
  {
#line 1270 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1270 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_9;
#line 1270 "opt_debug.m"
    MR_Word ll_backend__opt_debug__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1270 "opt_debug.m"
    MR_String ll_backend__opt_debug__Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));

#line 1274 "opt_debug.m"
    if ((ll_backend__opt_debug__AutoComments_6 == (MR_Integer) 0))
#line 1272 "opt_debug.m"
      {
#line 1272 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;

#line 1273 "opt_debug.m"
        {
#line 1273 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
        }
#line 1273 "opt_debug.m"
        {
#line 1273 "opt_debug.m"
          return ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) "\n");
        }
#line 1272 "opt_debug.m"
      }
#line 1274 "opt_debug.m"
    else
#line 1275 "opt_debug.m"
      {
#line 1275 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1275 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1275 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1276 "opt_debug.m"
        {
#line 1276 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
        }
#line 1277 "opt_debug.m"
        {
#line 1277 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_8, (MR_String) "\n");
        }
#line 1277 "opt_debug.m"
        {
#line 1277 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ll_backend__opt_debug__V_13_13);
        }
#line 1276 "opt_debug.m"
        {
#line 1276 "opt_debug.m"
          return ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 1275 "opt_debug.m"
      }
#line 1270 "opt_debug.m"
    return ll_backend__opt_debug__Str_9;
#line 1270 "opt_debug.m"
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
#line 830 "opt_debug.m"
  {
#line 830 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 830 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_8;

#line 830 "opt_debug.m"
    if ((ll_backend__opt_debug__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1076 "opt_debug.m"
      ll_backend__opt_debug__Str_8 = (MR_String) "discard_ticket";
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if ((ll_backend__opt_debug__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1079 "opt_debug.m"
      ll_backend__opt_debug__Str_8 = (MR_String) "prune_ticket";
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 1))))
#line 830 "opt_debug.m"
      {
#line 830 "opt_debug.m"
        MR_String ll_backend__opt_debug__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
#line 830 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_399_399;

#line 831 "opt_debug.m"
        {
#line 831 "opt_debug.m"
          ll_backend__opt_debug__V_399_399 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_9, (MR_String) ")");
        }
#line 831 "opt_debug.m"
        {
#line 831 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "comment(", ll_backend__opt_debug__V_399_399);
        }
#line 830 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 2))))
#line 833 "opt_debug.m"
      {
#line 833 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Livevals_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
#line 833 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_395_395;
#line 833 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_396_396;

#line 834 "opt_debug.m"
        {
#line 834 "opt_debug.m"
          ll_backend__opt_debug__V_396_396 = ll_backend__opt_debug__dump_livevals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Livevals_10);
        }
#line 834 "opt_debug.m"
        {
#line 834 "opt_debug.m"
          ll_backend__opt_debug__V_395_395 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_396_396, (MR_String) ")");
        }
#line 834 "opt_debug.m"
        {
#line 834 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "livevals(", ll_backend__opt_debug__V_395_395);
        }
#line 833 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 911 "opt_debug.m"
      {
#line 911 "opt_debug.m"
        MR_Word ll_backend__opt_debug__AL_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 911 "opt_debug.m"
        MR_String ll_backend__opt_debug__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 911 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_322_322;
#line 911 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_323_323;
#line 911 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_324_324;
#line 911 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_326_326;
#line 911 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 912 "opt_debug.m"
        {
#line 912 "opt_debug.m"
          ll_backend__opt_debug__V_323_323 = ll_backend__opt_debug__dump_affects_liveness_1_f_0(ll_backend__opt_debug__AL_33);
        }
#line 913 "opt_debug.m"
        {
#line 913 "opt_debug.m"
          ll_backend__opt_debug__V_326_326 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_35, (MR_String) ")");
        }
#line 912 "opt_debug.m"
        {
#line 912 "opt_debug.m"
          ll_backend__opt_debug__V_324_324 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_326_326);
        }
#line 912 "opt_debug.m"
        {
#line 912 "opt_debug.m"
          ll_backend__opt_debug__V_322_322 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_323_323, ll_backend__opt_debug__V_324_324);
        }
#line 912 "opt_debug.m"
        {
#line 912 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "arbitrary_c_code(", ll_backend__opt_debug__V_322_322);
        }
#line 911 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 842 "opt_debug.m"
      {
#line 842 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 842 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 842 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_378_378;
#line 842 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_379_379;
#line 842 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_381_381;

#line 843 "opt_debug.m"
        {
#line 843 "opt_debug.m"
          ll_backend__opt_debug__V_378_378 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_14);
        }
#line 844 "opt_debug.m"
        {
#line 844 "opt_debug.m"
          ll_backend__opt_debug__V_381_381 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_15);
        }
#line 843 "opt_debug.m"
        {
#line 843 "opt_debug.m"
          ll_backend__opt_debug__V_379_379 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_381_381);
        }
#line 843 "opt_debug.m"
        {
#line 843 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_378_378, ll_backend__opt_debug__V_379_379);
        }
#line 842 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 836 "opt_debug.m"
      {
#line 836 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__RTemps_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 836 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__FTemps_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 836 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_383_383;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_384_384;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_385_385;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_387_387;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_388_388;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_389_389;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_391_391;
#line 836 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_392_392;

#line 837 "opt_debug.m"
        {
#line 837 "opt_debug.m"
          ll_backend__opt_debug__V_384_384 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__RTemps_11);
        }
#line 838 "opt_debug.m"
        {
#line 838 "opt_debug.m"
          ll_backend__opt_debug__V_388_388 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FTemps_12);
        }
#line 839 "opt_debug.m"
        {
#line 839 "opt_debug.m"
          ll_backend__opt_debug__V_392_392 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Instrs_13);
        }
#line 840 "opt_debug.m"
        {
#line 840 "opt_debug.m"
          ll_backend__opt_debug__V_391_391 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_392_392, (MR_String) "\t)");
        }
#line 839 "opt_debug.m"
        {
#line 839 "opt_debug.m"
          ll_backend__opt_debug__V_389_389 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", ll_backend__opt_debug__V_391_391);
        }
#line 838 "opt_debug.m"
        {
#line 838 "opt_debug.m"
          ll_backend__opt_debug__V_387_387 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_388_388, ll_backend__opt_debug__V_389_389);
        }
#line 838 "opt_debug.m"
        {
#line 838 "opt_debug.m"
          ll_backend__opt_debug__V_385_385 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_387_387);
        }
#line 837 "opt_debug.m"
        {
#line 837 "opt_debug.m"
          ll_backend__opt_debug__V_383_383 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_384_384, ll_backend__opt_debug__V_385_385);
        }
#line 837 "opt_debug.m"
        {
#line 837 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "block(", ll_backend__opt_debug__V_383_383);
        }
#line 836 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 907 "opt_debug.m"
      {
#line 907 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabels_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 907 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_329_329;
#line 907 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_330_330;
#line 907 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_331_331;
#line 907 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_333_333;
#line 907 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 908 "opt_debug.m"
        {
#line 908 "opt_debug.m"
          ll_backend__opt_debug__V_330_330 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_403);
        }
#line 909 "opt_debug.m"
        {
#line 909 "opt_debug.m"
          ll_backend__opt_debug__V_333_333 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MaybeLabels_32);
        }
#line 909 "opt_debug.m"
        {
#line 909 "opt_debug.m"
          ll_backend__opt_debug__V_331_331 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__opt_debug__V_333_333);
        }
#line 908 "opt_debug.m"
        {
#line 908 "opt_debug.m"
          ll_backend__opt_debug__V_329_329 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_330_330, ll_backend__opt_debug__V_331_331);
        }
#line 908 "opt_debug.m"
        {
#line 908 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "computed_goto ", ll_backend__opt_debug__V_329_329);
        }
#line 907 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1092 "opt_debug.m"
      {
#line 1092 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_188_188;
#line 1092 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_189_189;
#line 1092 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Size_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1093 "opt_debug.m"
        {
#line 1093 "opt_debug.m"
          ll_backend__opt_debug__V_189_189 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_422);
        }
#line 1093 "opt_debug.m"
        {
#line 1093 "opt_debug.m"
          ll_backend__opt_debug__V_188_188 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_189_189, (MR_String) ")");
        }
#line 1093 "opt_debug.m"
        {
#line 1093 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp(", ll_backend__opt_debug__V_188_188);
        }
#line 1092 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1095 "opt_debug.m"
      {
#line 1095 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_184_184;
#line 1095 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_185_185;
#line 1095 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Size_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1096 "opt_debug.m"
        {
#line 1096 "opt_debug.m"
          ll_backend__opt_debug__V_185_185 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_423);
        }
#line 1096 "opt_debug.m"
        {
#line 1096 "opt_debug.m"
          ll_backend__opt_debug__V_184_184 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_185_185, (MR_String) ")");
        }
#line 1096 "opt_debug.m"
        {
#line 1096 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp_and_return(", ll_backend__opt_debug__V_184_184);
        }
#line 1095 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1099 "opt_debug.m"
      {
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decls_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comps_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MCM_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MFNL_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MFL_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MFOL_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MNF_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MDL_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__SSR_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 9)));
#line 1099 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MD_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 10)));
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_148_148;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_150_150;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_151_151;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_152_152;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_154_154;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_155_155;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_156_156;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_157_157;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_158_158;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_160_160;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_161_161;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_163_163;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_164_164;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_166_166;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_167_167;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_169_169;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_170_170;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_172_172;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_173_173;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_175_175;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_176_176;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_178_178;
#line 1099 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_179_179;

#line 1101 "opt_debug.m"
        {
#line 1101 "opt_debug.m"
          ll_backend__opt_debug__V_151_151 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_67);
        }
#line 1102 "opt_debug.m"
        {
#line 1102 "opt_debug.m"
          ll_backend__opt_debug__V_155_155 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Comps_68);
        }
#line 1103 "opt_debug.m"
        {
#line 1103 "opt_debug.m"
          ll_backend__opt_debug__V_157_157 = ll_backend__opt_debug__dump_may_call_mercury_1_f_0(ll_backend__opt_debug__MCM_69);
        }
#line 1104 "opt_debug.m"
        {
#line 1104 "opt_debug.m"
          ll_backend__opt_debug__V_161_161 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix nolayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFNL_70);
        }
#line 1105 "opt_debug.m"
        {
#line 1105 "opt_debug.m"
          ll_backend__opt_debug__V_164_164 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix layout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFL_71);
        }
#line 1106 "opt_debug.m"
        {
#line 1106 "opt_debug.m"
          ll_backend__opt_debug__V_167_167 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix onlylayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFOL_72);
        }
#line 1107 "opt_debug.m"
        {
#line 1107 "opt_debug.m"
          ll_backend__opt_debug__V_170_170 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "nofix:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MNF_73);
        }
#line 1108 "opt_debug.m"
        {
#line 1108 "opt_debug.m"
          ll_backend__opt_debug__V_173_173 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "maybe def:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MDL_74);
        }
#line 1109 "opt_debug.m"
        {
#line 1109 "opt_debug.m"
          ll_backend__opt_debug__V_176_176 = ll_backend__opt_debug__dump_bool_msg_2_f_0((MR_String) "stack slot ref:", ll_backend__opt_debug__SSR_75);
        }
#line 1110 "opt_debug.m"
        {
#line 1110 "opt_debug.m"
          ll_backend__opt_debug__V_179_179 = ll_backend__opt_debug__dump_may_duplicate_1_f_0(ll_backend__opt_debug__MD_76);
        }
#line 1110 "opt_debug.m"
        {
#line 1110 "opt_debug.m"
          ll_backend__opt_debug__V_178_178 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_179_179, (MR_String) "\n)");
        }
#line 1110 "opt_debug.m"
        {
#line 1110 "opt_debug.m"
          ll_backend__opt_debug__V_175_175 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_176_176, ll_backend__opt_debug__V_178_178);
        }
#line 1109 "opt_debug.m"
        {
#line 1109 "opt_debug.m"
          ll_backend__opt_debug__V_172_172 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_173_173, ll_backend__opt_debug__V_175_175);
        }
#line 1108 "opt_debug.m"
        {
#line 1108 "opt_debug.m"
          ll_backend__opt_debug__V_169_169 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_170_170, ll_backend__opt_debug__V_172_172);
        }
#line 1107 "opt_debug.m"
        {
#line 1107 "opt_debug.m"
          ll_backend__opt_debug__V_166_166 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_167_167, ll_backend__opt_debug__V_169_169);
        }
#line 1106 "opt_debug.m"
        {
#line 1106 "opt_debug.m"
          ll_backend__opt_debug__V_163_163 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_164_164, ll_backend__opt_debug__V_166_166);
        }
#line 1105 "opt_debug.m"
        {
#line 1105 "opt_debug.m"
          ll_backend__opt_debug__V_160_160 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_161_161, ll_backend__opt_debug__V_163_163);
        }
#line 1104 "opt_debug.m"
        {
#line 1104 "opt_debug.m"
          ll_backend__opt_debug__V_158_158 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_160_160);
        }
#line 1103 "opt_debug.m"
        {
#line 1103 "opt_debug.m"
          ll_backend__opt_debug__V_156_156 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_157_157, ll_backend__opt_debug__V_158_158);
        }
#line 1103 "opt_debug.m"
        {
#line 1103 "opt_debug.m"
          ll_backend__opt_debug__V_154_154 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_155_155, ll_backend__opt_debug__V_156_156);
        }
#line 1102 "opt_debug.m"
        {
#line 1102 "opt_debug.m"
          ll_backend__opt_debug__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) "components:\n", ll_backend__opt_debug__V_154_154);
        }
#line 1102 "opt_debug.m"
        {
#line 1102 "opt_debug.m"
          ll_backend__opt_debug__V_150_150 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_151_151, ll_backend__opt_debug__V_152_152);
        }
#line 1101 "opt_debug.m"
        {
#line 1101 "opt_debug.m"
          ll_backend__opt_debug__V_148_148 = mercury__string__f_43_43_2_f_0((MR_String) "declarations:\n", ll_backend__opt_debug__V_150_150);
        }
#line 1101 "opt_debug.m"
        {
#line 1101 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_proc_code(\n", ll_backend__opt_debug__V_148_148);
        }
#line 1099 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1117 "opt_debug.m"
      {
#line 1117 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Child_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1117 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_128_128;
#line 1117 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_129_129;
#line 1117 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_130_130;
#line 1117 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_131_131;
#line 1117 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1118 "opt_debug.m"
        {
#line 1118 "opt_debug.m"
          ll_backend__opt_debug__V_129_129 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_425);
        }
#line 1119 "opt_debug.m"
        {
#line 1119 "opt_debug.m"
          ll_backend__opt_debug__V_131_131 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Child_79);
        }
#line 1119 "opt_debug.m"
        {
#line 1119 "opt_debug.m"
          ll_backend__opt_debug__V_130_130 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_131_131, (MR_String) ", )");
        }
#line 1119 "opt_debug.m"
        {
#line 1119 "opt_debug.m"
          ll_backend__opt_debug__V_128_128 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_129_129, ll_backend__opt_debug__V_130_130);
        }
#line 1118 "opt_debug.m"
        {
#line 1118 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "fork_new_child(", ll_backend__opt_debug__V_128_128);
        }
#line 1117 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 976 "opt_debug.m"
      {
#line 976 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_267_267;
#line 976 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_268_268;
#line 976 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 977 "opt_debug.m"
        {
#line 977 "opt_debug.m"
          ll_backend__opt_debug__V_268_268 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_412);
        }
#line 977 "opt_debug.m"
        {
#line 977 "opt_debug.m"
          ll_backend__opt_debug__V_267_267 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_268_268, (MR_String) ")");
        }
#line 977 "opt_debug.m"
        {
#line 977 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "free_heap(", ll_backend__opt_debug__V_267_267);
        }
#line 976 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 904 "opt_debug.m"
      {
#line 904 "opt_debug.m"
        MR_Word ll_backend__opt_debug__CodeAddr_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 904 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_335_335;

#line 905 "opt_debug.m"
        {
#line 905 "opt_debug.m"
          ll_backend__opt_debug__V_335_335 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_31);
        }
#line 905 "opt_debug.m"
        {
#line 905 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__opt_debug__V_335_335);
        }
#line 904 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 915 "opt_debug.m"
      {
#line 915 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_316_316;
#line 915 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_317_317;
#line 915 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_318_318;
#line 915 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_320_320;
#line 915 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 915 "opt_debug.m"
        MR_Word ll_backend__opt_debug__CodeAddr_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 916 "opt_debug.m"
        {
#line 916 "opt_debug.m"
          ll_backend__opt_debug__V_317_317 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_404);
        }
#line 917 "opt_debug.m"
        {
#line 917 "opt_debug.m"
          ll_backend__opt_debug__V_320_320 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_405);
        }
#line 917 "opt_debug.m"
        {
#line 917 "opt_debug.m"
          ll_backend__opt_debug__V_318_318 = mercury__string__f_43_43_2_f_0((MR_String) ") goto ", ll_backend__opt_debug__V_320_320);
        }
#line 916 "opt_debug.m"
        {
#line 916 "opt_debug.m"
          ll_backend__opt_debug__V_316_316 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_317_317, ll_backend__opt_debug__V_318_318);
        }
#line 916 "opt_debug.m"
        {
#line 916 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "if (", ll_backend__opt_debug__V_316_316);
        }
#line 915 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 926 "opt_debug.m"
      {
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeOffset_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MayUseAtomic_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__T_str_42;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__O_str_44;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__Region_str_46;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__Reuse_str_48;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__Flag_str_49;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_281_281;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_282_282;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_283_283;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_285_285;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_286_286;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_288_288;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_289_289;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_291_291;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_292_292;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_293_293;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_295_295;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_296_296;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_297_297;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_299_299;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_300_300;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_302_302;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_303_303;
#line 926 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_305_305;
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 926 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Size_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 925 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

#line 930 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeTag_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "opt_debug.m"
          ll_backend__opt_debug__T_str_42 = (MR_String) "no";
#line 930 "opt_debug.m"
        else
#line 931 "opt_debug.m"
          {
#line 931 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__Tag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_36, (MR_Integer) 0)));

#line 932 "opt_debug.m"
            {
#line 932 "opt_debug.m"
              mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Tag_43, &ll_backend__opt_debug__T_str_42);
            }
#line 931 "opt_debug.m"
          }
#line 937 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeOffset_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "opt_debug.m"
          ll_backend__opt_debug__O_str_44 = (MR_String) "no";
#line 937 "opt_debug.m"
        else
#line 938 "opt_debug.m"
          {
#line 938 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_37, (MR_Integer) 0)));

#line 939 "opt_debug.m"
            {
#line 939 "opt_debug.m"
              mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Offset_45, &ll_backend__opt_debug__O_str_44);
            }
#line 938 "opt_debug.m"
          }
#line 944 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "opt_debug.m"
          ll_backend__opt_debug__Region_str_46 = (MR_String) "no";
#line 944 "opt_debug.m"
        else
#line 945 "opt_debug.m"
          {
#line 945 "opt_debug.m"
            MR_Word ll_backend__opt_debug__RegionRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRegionRval_40, (MR_Integer) 0)));

#line 946 "opt_debug.m"
            {
#line 946 "opt_debug.m"
              ll_backend__opt_debug__Region_str_46 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__RegionRval_47);
            }
#line 945 "opt_debug.m"
          }
#line 952 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "opt_debug.m"
          {
#line 950 "opt_debug.m"
            ll_backend__opt_debug__Reuse_str_48 = (MR_String) "no";
#line 951 "opt_debug.m"
            ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
#line 949 "opt_debug.m"
          }
#line 952 "opt_debug.m"
        else
#line 953 "opt_debug.m"
          {
#line 953 "opt_debug.m"
            MR_Word ll_backend__opt_debug__ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 0)));
#line 953 "opt_debug.m"
            MR_Word ll_backend__opt_debug__MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 1)));

#line 954 "opt_debug.m"
            {
#line 954 "opt_debug.m"
              ll_backend__opt_debug__Reuse_str_48 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__ReuseRval_50);
            }
#line 958 "opt_debug.m"
            if ((ll_backend__opt_debug__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 956 "opt_debug.m"
              ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
#line 958 "opt_debug.m"
            else
#line 959 "opt_debug.m"
              {
#line 959 "opt_debug.m"
                MR_Word ll_backend__opt_debug__FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeFlagLval_51, (MR_Integer) 0)));

#line 960 "opt_debug.m"
                {
#line 960 "opt_debug.m"
                  ll_backend__opt_debug__Flag_str_49 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__FlagLval_52);
                }
#line 959 "opt_debug.m"
              }
#line 953 "opt_debug.m"
          }
#line 963 "opt_debug.m"
        {
#line 963 "opt_debug.m"
          ll_backend__opt_debug__V_282_282 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_408);
        }
#line 965 "opt_debug.m"
        {
#line 965 "opt_debug.m"
          ll_backend__opt_debug__V_292_292 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Size_409);
        }
#line 966 "opt_debug.m"
        {
#line 966 "opt_debug.m"
          ll_backend__opt_debug__V_296_296 = ll_backend__opt_debug__dump_may_use_atomic_1_f_0(ll_backend__opt_debug__MayUseAtomic_39);
        }
#line 968 "opt_debug.m"
        {
#line 968 "opt_debug.m"
          ll_backend__opt_debug__V_305_305 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Flag_str_49, (MR_String) ")");
        }
#line 968 "opt_debug.m"
        {
#line 968 "opt_debug.m"
          ll_backend__opt_debug__V_303_303 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_305_305);
        }
#line 968 "opt_debug.m"
        {
#line 968 "opt_debug.m"
          ll_backend__opt_debug__V_302_302 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Reuse_str_48, ll_backend__opt_debug__V_303_303);
        }
#line 967 "opt_debug.m"
        {
#line 967 "opt_debug.m"
          ll_backend__opt_debug__V_300_300 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_302_302);
        }
#line 967 "opt_debug.m"
        {
#line 967 "opt_debug.m"
          ll_backend__opt_debug__V_299_299 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Region_str_46, ll_backend__opt_debug__V_300_300);
        }
#line 966 "opt_debug.m"
        {
#line 966 "opt_debug.m"
          ll_backend__opt_debug__V_297_297 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_299_299);
        }
#line 966 "opt_debug.m"
        {
#line 966 "opt_debug.m"
          ll_backend__opt_debug__V_295_295 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_296_296, ll_backend__opt_debug__V_297_297);
        }
#line 965 "opt_debug.m"
        {
#line 965 "opt_debug.m"
          ll_backend__opt_debug__V_293_293 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_295_295);
        }
#line 965 "opt_debug.m"
        {
#line 965 "opt_debug.m"
          ll_backend__opt_debug__V_291_291 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_292_292, ll_backend__opt_debug__V_293_293);
        }
#line 964 "opt_debug.m"
        {
#line 964 "opt_debug.m"
          ll_backend__opt_debug__V_289_289 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_291_291);
        }
#line 964 "opt_debug.m"
        {
#line 964 "opt_debug.m"
          ll_backend__opt_debug__V_288_288 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__O_str_44, ll_backend__opt_debug__V_289_289);
        }
#line 964 "opt_debug.m"
        {
#line 964 "opt_debug.m"
          ll_backend__opt_debug__V_286_286 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_288_288);
        }
#line 964 "opt_debug.m"
        {
#line 964 "opt_debug.m"
          ll_backend__opt_debug__V_285_285 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_42, ll_backend__opt_debug__V_286_286);
        }
#line 963 "opt_debug.m"
        {
#line 963 "opt_debug.m"
          ll_backend__opt_debug__V_283_283 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_285_285);
        }
#line 963 "opt_debug.m"
        {
#line 963 "opt_debug.m"
          ll_backend__opt_debug__V_281_281 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_282_282, ll_backend__opt_debug__V_283_283);
        }
#line 963 "opt_debug.m"
        {
#line 963 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_hp(", ll_backend__opt_debug__V_281_281);
        }
#line 926 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1088 "opt_debug.m"
      {
#line 1088 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_192_192;
#line 1088 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_193_193;
#line 1088 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_194_194;
#line 1088 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_196_196;
#line 1088 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_197_197;
#line 1088 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Size_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1088 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Kind_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1088 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1089 "opt_debug.m"
        {
#line 1089 "opt_debug.m"
          ll_backend__opt_debug__V_193_193 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_420);
        }
#line 1090 "opt_debug.m"
        {
#line 1090 "opt_debug.m"
          ll_backend__opt_debug__V_197_197 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(ll_backend__opt_debug__Kind_421);
        }
#line 1090 "opt_debug.m"
        {
#line 1090 "opt_debug.m"
          ll_backend__opt_debug__V_196_196 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_197_197, (MR_String) ")");
        }
#line 1089 "opt_debug.m"
        {
#line 1089 "opt_debug.m"
          ll_backend__opt_debug__V_194_194 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_196_196);
        }
#line 1089 "opt_debug.m"
        {
#line 1089 "opt_debug.m"
          ll_backend__opt_debug__V_192_192 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_193_193, ll_backend__opt_debug__V_194_194);
        }
#line 1089 "opt_debug.m"
        {
#line 1089 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_sp(", ll_backend__opt_debug__V_192_192);
        }
#line 1088 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1113 "opt_debug.m"
      {
#line 1113 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1113 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TSStringIndex_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_136_136;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_137_137;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_138_138;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_140_140;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_141_141;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_142_142;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_144_144;
#line 1113 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_145_145;
#line 1113 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_424 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1114 "opt_debug.m"
        {
#line 1114 "opt_debug.m"
          ll_backend__opt_debug__V_137_137 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_424);
        }
#line 1115 "opt_debug.m"
        {
#line 1115 "opt_debug.m"
          ll_backend__opt_debug__V_141_141 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_77);
        }
#line 1115 "opt_debug.m"
        {
#line 1115 "opt_debug.m"
          ll_backend__opt_debug__V_145_145 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TSStringIndex_78);
        }
#line 1115 "opt_debug.m"
        {
#line 1115 "opt_debug.m"
          ll_backend__opt_debug__V_144_144 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_145_145, (MR_String) ")");
        }
#line 1115 "opt_debug.m"
        {
#line 1115 "opt_debug.m"
          ll_backend__opt_debug__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_144_144);
        }
#line 1115 "opt_debug.m"
        {
#line 1115 "opt_debug.m"
          ll_backend__opt_debug__V_140_140 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_141_141, ll_backend__opt_debug__V_142_142);
        }
#line 1115 "opt_debug.m"
        {
#line 1115 "opt_debug.m"
          ll_backend__opt_debug__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_140_140);
        }
#line 1114 "opt_debug.m"
        {
#line 1114 "opt_debug.m"
          ll_backend__opt_debug__V_136_136 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_137_137, ll_backend__opt_debug__V_138_138);
        }
#line 1114 "opt_debug.m"
        {
#line 1114 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "init_sync_term(", ll_backend__opt_debug__V_136_136);
        }
#line 1113 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1121 "opt_debug.m"
      {
#line 1121 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_120_120;
#line 1121 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_121_121;
#line 1121 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_122_122;
#line 1121 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_124_124;
#line 1121 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_125_125;
#line 1121 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_426 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1121 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_427 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1122 "opt_debug.m"
        {
#line 1122 "opt_debug.m"
          ll_backend__opt_debug__V_121_121 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_426);
        }
#line 1123 "opt_debug.m"
        {
#line 1123 "opt_debug.m"
          ll_backend__opt_debug__V_125_125 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_427);
        }
#line 1123 "opt_debug.m"
        {
#line 1123 "opt_debug.m"
          ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
        }
#line 1123 "opt_debug.m"
        {
#line 1123 "opt_debug.m"
          ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_124_124);
        }
#line 1122 "opt_debug.m"
        {
#line 1122 "opt_debug.m"
          ll_backend__opt_debug__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_121_121, ll_backend__opt_debug__V_122_122);
        }
#line 1122 "opt_debug.m"
        {
#line 1122 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "join_and_continue(", ll_backend__opt_debug__V_120_120);
        }
#line 1121 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 846 "opt_debug.m"
      {
#line 846 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_373_373;
#line 846 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_374_374;
#line 846 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_375_375;
#line 846 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_377_377;
#line 846 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 846 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 847 "opt_debug.m"
        {
#line 847 "opt_debug.m"
          ll_backend__opt_debug__V_374_374 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_401);
        }
#line 848 "opt_debug.m"
        {
#line 848 "opt_debug.m"
          ll_backend__opt_debug__V_377_377 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_402);
        }
#line 847 "opt_debug.m"
        {
#line 847 "opt_debug.m"
          ll_backend__opt_debug__V_375_375 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_377_377);
        }
#line 847 "opt_debug.m"
        {
#line 847 "opt_debug.m"
          ll_backend__opt_debug__V_373_373 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_374_374, ll_backend__opt_debug__V_375_375);
        }
#line 847 "opt_debug.m"
        {
#line 847 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "keep ", ll_backend__opt_debug__V_373_373);
        }
#line 846 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 901 "opt_debug.m"
      {
#line 901 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 901 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_336_336;

#line 902 "opt_debug.m"
        {
#line 902 "opt_debug.m"
          ll_backend__opt_debug__V_336_336 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_30);
        }
#line 902 "opt_debug.m"
        {
#line 902 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_336_336, (MR_String) ":");
        }
#line 901 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1125 "opt_debug.m"
      {
#line 1125 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__NumSlots_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1125 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCLval_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1125 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_112_112;
#line 1125 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_113_113;
#line 1125 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_114_114;
#line 1125 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_116_116;
#line 1125 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_117_117;

#line 1126 "opt_debug.m"
        {
#line 1126 "opt_debug.m"
          ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumSlots_80);
        }
#line 1127 "opt_debug.m"
        {
#line 1127 "opt_debug.m"
          ll_backend__opt_debug__V_117_117 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCLval_81);
        }
#line 1127 "opt_debug.m"
        {
#line 1127 "opt_debug.m"
          ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, (MR_String) ")");
        }
#line 1127 "opt_debug.m"
        {
#line 1127 "opt_debug.m"
          ll_backend__opt_debug__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_116_116);
        }
#line 1126 "opt_debug.m"
        {
#line 1126 "opt_debug.m"
          ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, ll_backend__opt_debug__V_114_114);
        }
#line 1126 "opt_debug.m"
        {
#line 1126 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_create_loop_control(", ll_backend__opt_debug__V_112_112);
        }
#line 1125 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1139 "opt_debug.m"
      {
#line 1139 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_86_86;
#line 1139 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_87_87;
#line 1139 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_88_88;
#line 1139 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_89_89;
#line 1139 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCRval_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1139 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCSRval_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1140 "opt_debug.m"
        {
#line 1140 "opt_debug.m"
          ll_backend__opt_debug__V_87_87 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_431);
        }
#line 1141 "opt_debug.m"
        {
#line 1141 "opt_debug.m"
          ll_backend__opt_debug__V_89_89 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_432);
        }
#line 1141 "opt_debug.m"
        {
#line 1141 "opt_debug.m"
          ll_backend__opt_debug__V_88_88 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_89_89, (MR_String) ")");
        }
#line 1141 "opt_debug.m"
        {
#line 1141 "opt_debug.m"
          ll_backend__opt_debug__V_86_86 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_87_87, ll_backend__opt_debug__V_88_88);
        }
#line 1140 "opt_debug.m"
        {
#line 1140 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_join_and_terminate(", ll_backend__opt_debug__V_86_86);
        }
#line 1139 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1134 "opt_debug.m"
      {
#line 1134 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCSRval_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_92_92;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_93_93;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_94_94;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_96_96;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_97_97;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_98_98;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_100_100;
#line 1134 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_101_101;
#line 1134 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1134 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCRval_430 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1135 "opt_debug.m"
        {
#line 1135 "opt_debug.m"
          ll_backend__opt_debug__V_93_93 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_430);
        }
#line 1136 "opt_debug.m"
        {
#line 1136 "opt_debug.m"
          ll_backend__opt_debug__V_97_97 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_84);
        }
#line 1137 "opt_debug.m"
        {
#line 1137 "opt_debug.m"
          ll_backend__opt_debug__V_101_101 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_429);
        }
#line 1137 "opt_debug.m"
        {
#line 1137 "opt_debug.m"
          ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
        }
#line 1137 "opt_debug.m"
        {
#line 1137 "opt_debug.m"
          ll_backend__opt_debug__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_100_100);
        }
#line 1136 "opt_debug.m"
        {
#line 1136 "opt_debug.m"
          ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_97_97, ll_backend__opt_debug__V_98_98);
        }
#line 1136 "opt_debug.m"
        {
#line 1136 "opt_debug.m"
          ll_backend__opt_debug__V_94_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_96_96);
        }
#line 1135 "opt_debug.m"
        {
#line 1135 "opt_debug.m"
          ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_93_93, ll_backend__opt_debug__V_94_94);
        }
#line 1135 "opt_debug.m"
        {
#line 1135 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_spawn_off(", ll_backend__opt_debug__V_92_92);
        }
#line 1134 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1129 "opt_debug.m"
      {
#line 1129 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCRval_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1129 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LCSLval_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1129 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_104_104;
#line 1129 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_105_105;
#line 1129 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_106_106;
#line 1129 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_107_107;
#line 1129 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_108_108;
#line 1129 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_109_109;
#line 1129 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));

#line 1130 "opt_debug.m"
        {
#line 1130 "opt_debug.m"
          ll_backend__opt_debug__V_105_105 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_82);
        }
#line 1131 "opt_debug.m"
        {
#line 1131 "opt_debug.m"
          ll_backend__opt_debug__V_107_107 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSLval_83);
        }
#line 1132 "opt_debug.m"
        {
#line 1132 "opt_debug.m"
          ll_backend__opt_debug__V_109_109 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_428);
        }
#line 1132 "opt_debug.m"
        {
#line 1132 "opt_debug.m"
          ll_backend__opt_debug__V_108_108 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_109_109, (MR_String) ")");
        }
#line 1132 "opt_debug.m"
        {
#line 1132 "opt_debug.m"
          ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_107_107, ll_backend__opt_debug__V_108_108);
        }
#line 1131 "opt_debug.m"
        {
#line 1131 "opt_debug.m"
          ll_backend__opt_debug__V_104_104 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_105_105, ll_backend__opt_debug__V_106_106);
        }
#line 1130 "opt_debug.m"
        {
#line 1130 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_wait_free_slot(", ll_backend__opt_debug__V_104_104);
        }
#line 1129 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 851 "opt_debug.m"
      {
#line 851 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 851 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ReturnLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 851 "opt_debug.m"
        MR_Word ll_backend__opt_debug__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__CallModelStr_22;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_362_362;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_363_363;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_364_364;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_366_366;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_367_367;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_368_368;
#line 851 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_370_370;
#line 850 "opt_debug.m"
        MR_Word ll_backend__opt_debug___LiveInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 850 "opt_debug.m"
        MR_Word ll_backend__opt_debug___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 850 "opt_debug.m"
        MR_Word ll_backend__opt_debug___GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

#line 855 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__CallModel_21)) == (MR_mktag((MR_Integer) 0))))
#line 855 "opt_debug.m"
          {
#line 855 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 855 "opt_debug.m"
            if ((ll_backend__opt_debug__V_433_433 == (MR_Integer) 1))
#line 854 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det";
#line 855 "opt_debug.m"
            else
#line 857 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det_no_lco";
#line 855 "opt_debug.m"
          }
#line 855 "opt_debug.m"
        else
#line 855 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__CallModel_21)) == (MR_mktag((MR_Integer) 2))))
#line 855 "opt_debug.m"
          {
#line 855 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 855 "opt_debug.m"
            if ((ll_backend__opt_debug__V_434_434 == (MR_Integer) 1))
#line 869 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet checked_tail_call";
#line 855 "opt_debug.m"
            else
#line 855 "opt_debug.m"
            if ((ll_backend__opt_debug__V_434_434 == (MR_Integer) 0))
#line 866 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet no_tail_call";
#line 855 "opt_debug.m"
            else
#line 872 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet unchecked_tail_call";
#line 855 "opt_debug.m"
          }
#line 855 "opt_debug.m"
        else
#line 855 "opt_debug.m"
          {
#line 855 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 855 "opt_debug.m"
            if ((ll_backend__opt_debug__V_435_435 == (MR_Integer) 1))
#line 860 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet";
#line 855 "opt_debug.m"
            else
#line 863 "opt_debug.m"
              ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet_no_lco";
#line 855 "opt_debug.m"
          }
#line 874 "opt_debug.m"
        {
#line 874 "opt_debug.m"
          ll_backend__opt_debug__V_363_363 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Callee_16);
        }
#line 875 "opt_debug.m"
        {
#line 875 "opt_debug.m"
          ll_backend__opt_debug__V_367_367 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ReturnLabel_17);
        }
#line 876 "opt_debug.m"
        {
#line 876 "opt_debug.m"
          ll_backend__opt_debug__V_370_370 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__CallModelStr_22, (MR_String) ")");
        }
#line 876 "opt_debug.m"
        {
#line 876 "opt_debug.m"
          ll_backend__opt_debug__V_368_368 = mercury__string__f_43_43_2_f_0((MR_String) ", ..., ", ll_backend__opt_debug__V_370_370);
        }
#line 875 "opt_debug.m"
        {
#line 875 "opt_debug.m"
          ll_backend__opt_debug__V_366_366 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_367_367, ll_backend__opt_debug__V_368_368);
        }
#line 875 "opt_debug.m"
        {
#line 875 "opt_debug.m"
          ll_backend__opt_debug__V_364_364 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_366_366);
        }
#line 874 "opt_debug.m"
        {
#line 874 "opt_debug.m"
          ll_backend__opt_debug__V_362_362 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_363_363, ll_backend__opt_debug__V_364_364);
        }
#line 874 "opt_debug.m"
        {
#line 874 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "call(", ll_backend__opt_debug__V_362_362);
        }
#line 851 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 970 "opt_debug.m"
      {
#line 970 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_275_275;
#line 970 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_276_276;
#line 970 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 971 "opt_debug.m"
        {
#line 971 "opt_debug.m"
          ll_backend__opt_debug__V_276_276 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_410);
        }
#line 971 "opt_debug.m"
        {
#line 971 "opt_debug.m"
          ll_backend__opt_debug__V_275_275 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_276_276, (MR_String) ")");
        }
#line 971 "opt_debug.m"
        {
#line 971 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_hp(", ll_backend__opt_debug__V_275_275);
        }
#line 970 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1082 "opt_debug.m"
      {
#line 1082 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_204_204;
#line 1082 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_205_205;
#line 1082 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1083 "opt_debug.m"
        {
#line 1083 "opt_debug.m"
          ll_backend__opt_debug__V_205_205 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_418);
        }
#line 1083 "opt_debug.m"
        {
#line 1083 "opt_debug.m"
          ll_backend__opt_debug__V_204_204 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_205_205, (MR_String) ")");
        }
#line 1083 "opt_debug.m"
        {
#line 1083 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_ticket_stack(", ll_backend__opt_debug__V_204_204);
        }
#line 1082 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 878 "opt_debug.m"
      {
#line 878 "opt_debug.m"
        MR_Word ll_backend__opt_debug__FrameInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 878 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeRedoip_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 878 "opt_debug.m"
        MR_String ll_backend__opt_debug__R_str_26;

#line 882 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeRedoip_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 883 "opt_debug.m"
          ll_backend__opt_debug__R_str_26 = (MR_String) "no_redoip";
#line 882 "opt_debug.m"
        else
#line 880 "opt_debug.m"
          {
#line 880 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Redoip_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRedoip_24, (MR_Integer) 0)));

#line 881 "opt_debug.m"
            {
#line 881 "opt_debug.m"
              ll_backend__opt_debug__R_str_26 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Redoip_25);
            }
#line 880 "opt_debug.m"
          }
#line 890 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__FrameInfo_23)) == (MR_mktag((MR_Integer) 1))))
#line 887 "opt_debug.m"
          {
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));
#line 887 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 1)));
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_345_345;
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_346_346;
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_348_348;
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_349_349;
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_350_350;
#line 887 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_352_352;

#line 888 "opt_debug.m"
            {
#line 888 "opt_debug.m"
              ll_backend__opt_debug__V_349_349 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_28);
            }
#line 889 "opt_debug.m"
            {
#line 889 "opt_debug.m"
              ll_backend__opt_debug__V_352_352 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
            }
#line 889 "opt_debug.m"
            {
#line 889 "opt_debug.m"
              ll_backend__opt_debug__V_350_350 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_352_352);
            }
#line 888 "opt_debug.m"
            {
#line 888 "opt_debug.m"
              ll_backend__opt_debug__V_348_348 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_349_349, ll_backend__opt_debug__V_350_350);
            }
#line 888 "opt_debug.m"
            {
#line 888 "opt_debug.m"
              ll_backend__opt_debug__V_346_346 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_348_348);
            }
#line 888 "opt_debug.m"
            {
#line 888 "opt_debug.m"
              ll_backend__opt_debug__V_345_345 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Name_27, ll_backend__opt_debug__V_346_346);
            }
#line 888 "opt_debug.m"
            {
#line 888 "opt_debug.m"
              return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkframe(", ll_backend__opt_debug__V_345_345);
            }
#line 887 "opt_debug.m"
          }
#line 890 "opt_debug.m"
        else
#line 891 "opt_debug.m"
          {
#line 891 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));

#line 895 "opt_debug.m"
            if ((ll_backend__opt_debug__Kind_29 == (MR_Integer) 0))
#line 896 "opt_debug.m"
              {
#line 896 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_339_339;

#line 897 "opt_debug.m"
                {
#line 897 "opt_debug.m"
                  ll_backend__opt_debug__V_339_339 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                }
#line 897 "opt_debug.m"
                {
#line 897 "opt_debug.m"
                  return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkdettempframe(", ll_backend__opt_debug__V_339_339);
                }
#line 896 "opt_debug.m"
              }
#line 895 "opt_debug.m"
            else
#line 893 "opt_debug.m"
              {
#line 893 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_342_342;

#line 894 "opt_debug.m"
                {
#line 894 "opt_debug.m"
                  ll_backend__opt_debug__V_342_342 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                }
#line 894 "opt_debug.m"
                {
#line 894 "opt_debug.m"
                  return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mktempframe(", ll_backend__opt_debug__V_342_342);
                }
#line 893 "opt_debug.m"
              }
#line 891 "opt_debug.m"
          }
#line 878 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1085 "opt_debug.m"
      {
#line 1085 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_200_200;
#line 1085 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_201_201;
#line 1085 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1086 "opt_debug.m"
        {
#line 1086 "opt_debug.m"
          ll_backend__opt_debug__V_201_201 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_419);
        }
#line 1086 "opt_debug.m"
        {
#line 1086 "opt_debug.m"
          ll_backend__opt_debug__V_200_200 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_201_201, (MR_String) ")");
        }
#line 1086 "opt_debug.m"
        {
#line 1086 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "prune_tickets_to(", ll_backend__opt_debug__V_200_200);
        }
#line 1085 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 979 "opt_debug.m"
      {
#line 979 "opt_debug.m"
        MR_Word ll_backend__opt_debug__StackId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 979 "opt_debug.m"
        MR_Word ll_backend__opt_debug__EmbeddedStackFrame_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 979 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_259_259;
#line 979 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_260_260;
#line 979 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_261_261;
#line 979 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_263_263;
#line 979 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_264_264;

#line 981 "opt_debug.m"
        {
#line 981 "opt_debug.m"
          ll_backend__opt_debug__V_260_260 = ll_backend__llds__region_stack_id_to_string_1_f_0(ll_backend__opt_debug__StackId_53);
        }
#line 982 "opt_debug.m"
        {
#line 982 "opt_debug.m"
          ll_backend__opt_debug__V_264_264 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_54);
        }
#line 982 "opt_debug.m"
        {
#line 982 "opt_debug.m"
          ll_backend__opt_debug__V_263_263 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_264_264, (MR_String) ")");
        }
#line 981 "opt_debug.m"
        {
#line 981 "opt_debug.m"
          ll_backend__opt_debug__V_261_261 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_263_263);
        }
#line 981 "opt_debug.m"
        {
#line 981 "opt_debug.m"
          ll_backend__opt_debug__V_259_259 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_260_260, ll_backend__opt_debug__V_261_261);
        }
#line 980 "opt_debug.m"
        {
#line 980 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "push_region_frame(", ll_backend__opt_debug__V_259_259);
        }
#line 979 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 985 "opt_debug.m"
      {
#line 985 "opt_debug.m"
        MR_Word ll_backend__opt_debug__FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 985 "opt_debug.m"
        MR_Word ll_backend__opt_debug__IdRval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 985 "opt_debug.m"
        MR_Word ll_backend__opt_debug__NumLval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 985 "opt_debug.m"
        MR_Word ll_backend__opt_debug__AddrLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__FillOpStr_59;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_240_240;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_241_241;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_243_243;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_244_244;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_245_245;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_247_247;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_248_248;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_249_249;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_251_251;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_252_252;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_253_253;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_255_255;
#line 985 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_256_256;
#line 985 "opt_debug.m"
        MR_Word ll_backend__opt_debug__EmbeddedStackFrame_413 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 989 "opt_debug.m"
        if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1002 "opt_debug.m"
          ll_backend__opt_debug__FillOpStr_59 = (MR_String) "commit";
#line 989 "opt_debug.m"
        else
#line 989 "opt_debug.m"
        if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 999 "opt_debug.m"
          ll_backend__opt_debug__FillOpStr_59 = (MR_String) "disj_snapshot";
#line 989 "opt_debug.m"
        else
#line 989 "opt_debug.m"
        if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 987 "opt_debug.m"
          ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_protect";
#line 989 "opt_debug.m"
        else
#line 989 "opt_debug.m"
        if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 996 "opt_debug.m"
          ll_backend__opt_debug__FillOpStr_59 = (MR_String) "semi_disj_protect";
#line 989 "opt_debug.m"
        else
#line 989 "opt_debug.m"
          {
#line 989 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FillOp_55, (MR_Integer) 0)));

#line 989 "opt_debug.m"
            if ((ll_backend__opt_debug__V_436_436 == (MR_Integer) 1))
#line 994 "opt_debug.m"
              ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(not_removed_at_start_of_else)";
#line 989 "opt_debug.m"
            else
#line 991 "opt_debug.m"
              ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(removed_at_start_of_else)";
#line 989 "opt_debug.m"
          }
#line 1007 "opt_debug.m"
        {
#line 1007 "opt_debug.m"
          ll_backend__opt_debug__V_244_244 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_413);
        }
#line 1008 "opt_debug.m"
        {
#line 1008 "opt_debug.m"
          ll_backend__opt_debug__V_248_248 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__IdRval_56);
        }
#line 1009 "opt_debug.m"
        {
#line 1009 "opt_debug.m"
          ll_backend__opt_debug__V_252_252 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__NumLval_57);
        }
#line 1010 "opt_debug.m"
        {
#line 1010 "opt_debug.m"
          ll_backend__opt_debug__V_256_256 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AddrLval_58);
        }
#line 1010 "opt_debug.m"
        {
#line 1010 "opt_debug.m"
          ll_backend__opt_debug__V_255_255 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_256_256, (MR_String) ")");
        }
#line 1009 "opt_debug.m"
        {
#line 1009 "opt_debug.m"
          ll_backend__opt_debug__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_255_255);
        }
#line 1009 "opt_debug.m"
        {
#line 1009 "opt_debug.m"
          ll_backend__opt_debug__V_251_251 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_252_252, ll_backend__opt_debug__V_253_253);
        }
#line 1008 "opt_debug.m"
        {
#line 1008 "opt_debug.m"
          ll_backend__opt_debug__V_249_249 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_251_251);
        }
#line 1008 "opt_debug.m"
        {
#line 1008 "opt_debug.m"
          ll_backend__opt_debug__V_247_247 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_248_248, ll_backend__opt_debug__V_249_249);
        }
#line 1007 "opt_debug.m"
        {
#line 1007 "opt_debug.m"
          ll_backend__opt_debug__V_245_245 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_247_247);
        }
#line 1007 "opt_debug.m"
        {
#line 1007 "opt_debug.m"
          ll_backend__opt_debug__V_243_243 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_244_244, ll_backend__opt_debug__V_245_245);
        }
#line 1006 "opt_debug.m"
        {
#line 1006 "opt_debug.m"
          ll_backend__opt_debug__V_241_241 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_243_243);
        }
#line 1006 "opt_debug.m"
        {
#line 1006 "opt_debug.m"
          ll_backend__opt_debug__V_240_240 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__FillOpStr_59, ll_backend__opt_debug__V_241_241);
        }
#line 1005 "opt_debug.m"
        {
#line 1005 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_fill_frame(", ll_backend__opt_debug__V_240_240);
        }
#line 985 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1012 "opt_debug.m"
      {
#line 1012 "opt_debug.m"
        MR_Word ll_backend__opt_debug__SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1012 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__SetOpStr_62;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_227_227;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_228_228;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_230_230;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_231_231;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_232_232;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_234_234;
#line 1012 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_235_235;
#line 1012 "opt_debug.m"
        MR_Word ll_backend__opt_debug__EmbeddedStackFrame_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1016 "opt_debug.m"
        if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 4))
#line 1026 "opt_debug.m"
          ll_backend__opt_debug__SetOpStr_62 = (MR_String) "commit_num_entries";
#line 1016 "opt_debug.m"
        else
#line 1016 "opt_debug.m"
        if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 2))
#line 1020 "opt_debug.m"
          ll_backend__opt_debug__SetOpStr_62 = (MR_String) "disj_num_protects";
#line 1016 "opt_debug.m"
        else
#line 1016 "opt_debug.m"
        if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 3))
#line 1023 "opt_debug.m"
          ll_backend__opt_debug__SetOpStr_62 = (MR_String) "disj_num_snapshots";
#line 1016 "opt_debug.m"
        else
#line 1016 "opt_debug.m"
        if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 0))
#line 1014 "opt_debug.m"
          ll_backend__opt_debug__SetOpStr_62 = (MR_String) "ite_num_protects";
#line 1016 "opt_debug.m"
        else
#line 1017 "opt_debug.m"
          ll_backend__opt_debug__SetOpStr_62 = (MR_String) "ite_num_snapshots";
#line 1031 "opt_debug.m"
        {
#line 1031 "opt_debug.m"
          ll_backend__opt_debug__V_231_231 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_414);
        }
#line 1032 "opt_debug.m"
        {
#line 1032 "opt_debug.m"
          ll_backend__opt_debug__V_235_235 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ValueRval_61);
        }
#line 1032 "opt_debug.m"
        {
#line 1032 "opt_debug.m"
          ll_backend__opt_debug__V_234_234 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_235_235, (MR_String) ")");
        }
#line 1031 "opt_debug.m"
        {
#line 1031 "opt_debug.m"
          ll_backend__opt_debug__V_232_232 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_234_234);
        }
#line 1031 "opt_debug.m"
        {
#line 1031 "opt_debug.m"
          ll_backend__opt_debug__V_230_230 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_231_231, ll_backend__opt_debug__V_232_232);
        }
#line 1030 "opt_debug.m"
        {
#line 1030 "opt_debug.m"
          ll_backend__opt_debug__V_228_228 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_230_230);
        }
#line 1030 "opt_debug.m"
        {
#line 1030 "opt_debug.m"
          ll_backend__opt_debug__V_227_227 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SetOpStr_62, ll_backend__opt_debug__V_228_228);
        }
#line 1029 "opt_debug.m"
        {
#line 1029 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_set_fixed_slot(", ll_backend__opt_debug__V_227_227);
        }
#line 1012 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1073 "opt_debug.m"
      {
#line 1073 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_208_208;
#line 1073 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_209_209;
#line 1073 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1073 "opt_debug.m"
        MR_Word ll_backend__opt_debug___Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1074 "opt_debug.m"
        {
#line 1074 "opt_debug.m"
          ll_backend__opt_debug__V_209_209 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_417);
        }
#line 1074 "opt_debug.m"
        {
#line 1074 "opt_debug.m"
          ll_backend__opt_debug__V_208_208 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_209_209, (MR_String) ", _)");
        }
#line 1074 "opt_debug.m"
        {
#line 1074 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "reset_ticket(", ll_backend__opt_debug__V_208_208);
        }
#line 1073 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 973 "opt_debug.m"
      {
#line 973 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_271_271;
#line 973 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_272_272;
#line 973 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 974 "opt_debug.m"
        {
#line 974 "opt_debug.m"
          ll_backend__opt_debug__V_272_272 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_411);
        }
#line 974 "opt_debug.m"
        {
#line 974 "opt_debug.m"
          ll_backend__opt_debug__V_271_271 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_272_272, (MR_String) ")");
        }
#line 974 "opt_debug.m"
        {
#line 974 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_hp(", ll_backend__opt_debug__V_271_271);
        }
#line 973 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 922 "opt_debug.m"
      {
#line 922 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_308_308;
#line 922 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_309_309;
#line 922 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 923 "opt_debug.m"
        {
#line 923 "opt_debug.m"
          ll_backend__opt_debug__V_309_309 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_407);
        }
#line 923 "opt_debug.m"
        {
#line 923 "opt_debug.m"
          ll_backend__opt_debug__V_308_308 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_309_309, (MR_String) ")");
        }
#line 923 "opt_debug.m"
        {
#line 923 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_maxfr(", ll_backend__opt_debug__V_308_308);
        }
#line 922 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 919 "opt_debug.m"
      {
#line 919 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_312_312;
#line 919 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_313_313;
#line 919 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 920 "opt_debug.m"
        {
#line 920 "opt_debug.m"
          ll_backend__opt_debug__V_313_313 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_406);
        }
#line 920 "opt_debug.m"
        {
#line 920 "opt_debug.m"
          ll_backend__opt_debug__V_312_312 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_313_313, (MR_String) ")");
        }
#line 920 "opt_debug.m"
        {
#line 920 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "save_maxfr(", ll_backend__opt_debug__V_312_312);
        }
#line 919 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 830 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1070 "opt_debug.m"
      {
#line 1070 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_212_212;
#line 1070 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_213_213;
#line 1070 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1071 "opt_debug.m"
        {
#line 1071 "opt_debug.m"
          ll_backend__opt_debug__V_213_213 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_416);
        }
#line 1071 "opt_debug.m"
        {
#line 1071 "opt_debug.m"
          ll_backend__opt_debug__V_212_212 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_213_213, (MR_String) ")");
        }
#line 1071 "opt_debug.m"
        {
#line 1071 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "store_ticket(", ll_backend__opt_debug__V_212_212);
        }
#line 1070 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    else
#line 1034 "opt_debug.m"
      {
#line 1034 "opt_debug.m"
        MR_Word ll_backend__opt_debug__UseOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1034 "opt_debug.m"
        MR_String ll_backend__opt_debug__UseOpStr_64;
#line 1034 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_220_220;
#line 1034 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_221_221;
#line 1034 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_223_223;
#line 1034 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_224_224;
#line 1034 "opt_debug.m"
        MR_Word ll_backend__opt_debug__EmbeddedStackFrame_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1038 "opt_debug.m"
        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1063 "opt_debug.m"
          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_failure";
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1060 "opt_debug.m"
          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_success";
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1054 "opt_debug.m"
          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_last";
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1051 "opt_debug.m"
          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_later";
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1057 "opt_debug.m"
          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_nonlast_semi_commit";
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1048 "opt_debug.m"
          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_nondet_cond_fail";
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__UseOp_63)) == (MR_mktag((MR_Integer) 2))))
#line 1038 "opt_debug.m"
          {
#line 1038 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

#line 1038 "opt_debug.m"
            if ((ll_backend__opt_debug__V_437_437 == (MR_Integer) 1))
#line 1046 "opt_debug.m"
              ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(nondet)";
#line 1038 "opt_debug.m"
            else
#line 1043 "opt_debug.m"
              ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(semidet)";
#line 1038 "opt_debug.m"
          }
#line 1038 "opt_debug.m"
        else
#line 1038 "opt_debug.m"
          {
#line 1038 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

#line 1038 "opt_debug.m"
            if ((ll_backend__opt_debug__V_438_438 == (MR_Integer) 1))
#line 1040 "opt_debug.m"
              ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(nondet)";
#line 1038 "opt_debug.m"
            else
#line 1037 "opt_debug.m"
              ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(semidet)";
#line 1038 "opt_debug.m"
          }
#line 1068 "opt_debug.m"
        {
#line 1068 "opt_debug.m"
          ll_backend__opt_debug__V_224_224 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_415);
        }
#line 1068 "opt_debug.m"
        {
#line 1068 "opt_debug.m"
          ll_backend__opt_debug__V_223_223 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_224_224, (MR_String) ")");
        }
#line 1067 "opt_debug.m"
        {
#line 1067 "opt_debug.m"
          ll_backend__opt_debug__V_221_221 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_223_223);
        }
#line 1067 "opt_debug.m"
        {
#line 1067 "opt_debug.m"
          ll_backend__opt_debug__V_220_220 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__UseOpStr_64, ll_backend__opt_debug__V_221_221);
        }
#line 1066 "opt_debug.m"
        {
#line 1066 "opt_debug.m"
          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "use_and_maybe_pop_region_frame(", ll_backend__opt_debug__V_220_220);
        }
#line 1034 "opt_debug.m"
      }
#line 830 "opt_debug.m"
    return ll_backend__opt_debug__Str_8;
#line 830 "opt_debug.m"
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
#line 825 "opt_debug.m"
  {
#line 825 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 825 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 825 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 825 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "leaf";
#line 825 "opt_debug.m"
    else
#line 826 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "nonleaf";
#line 825 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 825 "opt_debug.m"
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
#line 821 "opt_debug.m"
  {
#line 821 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 821 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 821 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 821 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_det";
#line 821 "opt_debug.m"
    else
#line 821 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 2))
#line 823 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_non";
#line 821 "opt_debug.m"
    else
#line 822 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_semi";
#line 821 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 821 "opt_debug.m"
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
#line 818 "opt_debug.m"
  {
#line 818 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 818 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 818 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 819 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "no";
#line 818 "opt_debug.m"
    else
#line 818 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "yes";
#line 818 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 818 "opt_debug.m"
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
#line 744 "opt_debug.m"
  {
#line 744 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 744 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 744 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 744 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 744 "opt_debug.m"
    else
#line 745 "opt_debug.m"
      {
#line 745 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Addr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 745 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Addrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 745 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 745 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 745 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 746 "opt_debug.m"
        {
#line 746 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addr_6);
        }
#line 747 "opt_debug.m"
        {
#line 747 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_code_addrs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addrs_7);
        }
#line 746 "opt_debug.m"
        {
#line 746 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 746 "opt_debug.m"
        {
#line 746 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
#line 745 "opt_debug.m"
      }
#line 744 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 744 "opt_debug.m"
  }
#line 124 "opt_debug.m"
}

#line 122 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_code_addr_2_f_0(
#line 122 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 122 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 122 "opt_debug.m"
{
#line 728 "opt_debug.m"
  {
#line 728 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 728 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 728 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 731 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "succip";
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 735 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_fail";
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 742 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_not_reached";
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 734 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_redo";
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 737 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_trace_redo_fail_deep";
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 736 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_trace_redo_fail_shallow";
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 730 "opt_debug.m"
      {
#line 730 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 730 "opt_debug.m"
        {
#line 730 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_7);
        }
#line 730 "opt_debug.m"
      }
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 728 "opt_debug.m"
      {
#line 728 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 729 "opt_debug.m"
        {
#line 729 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_5);
        }
#line 728 "opt_debug.m"
      }
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 740 "opt_debug.m"
      {
#line 740 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Variant_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 740 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;

#line 741 "opt_debug.m"
        {
#line 741 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_22);
        }
#line 741 "opt_debug.m"
        {
#line 741 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_class_method_", ll_backend__opt_debug__V_24_24);
        }
#line 740 "opt_debug.m"
      }
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 738 "opt_debug.m"
      {
#line 738 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Variant_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 738 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;

#line 739 "opt_debug.m"
        {
#line 739 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_18);
        }
#line 739 "opt_debug.m"
        {
#line 739 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_closure_", ll_backend__opt_debug__V_20_20);
        }
#line 738 "opt_debug.m"
      }
#line 728 "opt_debug.m"
    else
#line 728 "opt_debug.m"
      {
#line 728 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 728 "opt_debug.m"
        if ((ll_backend__opt_debug__V_26_26 == (MR_Integer) 0))
#line 732 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_succeed";
#line 728 "opt_debug.m"
        else
#line 733 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_last_succeed";
#line 728 "opt_debug.m"
      }
#line 728 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 728 "opt_debug.m"
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
#line 713 "opt_debug.m"
  {
#line 713 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 713 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 713 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 713 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 713 "opt_debug.m"
    else
#line 714 "opt_debug.m"
      {
#line 714 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 714 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MRs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 715 "opt_debug.m"
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__N_3 > (MR_Integer) 0);
#line 724 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 722 "opt_debug.m"
          {
#line 722 "opt_debug.m"
            MR_String ll_backend__opt_debug__MR_str_13;
#line 722 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_15_15;
#line 722 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_17_17;
#line 722 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__V_18_18;

#line 719 "opt_debug.m"
            if ((ll_backend__opt_debug__MR_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 721 "opt_debug.m"
              ll_backend__opt_debug__MR_str_13 = (MR_String) "no";
#line 719 "opt_debug.m"
            else
#line 717 "opt_debug.m"
              {
#line 717 "opt_debug.m"
                MR_Word ll_backend__opt_debug__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MR_8, (MR_Integer) 0)));

#line 718 "opt_debug.m"
                {
#line 718 "opt_debug.m"
                  ll_backend__opt_debug__MR_str_13 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_12);
                }
#line 717 "opt_debug.m"
              }
#line 723 "opt_debug.m"
            ll_backend__opt_debug__V_18_18 = (ll_backend__opt_debug__N_3 - (MR_Integer) 1);
#line 723 "opt_debug.m"
            {
#line 723 "opt_debug.m"
              ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_maybe_rvals_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MRs_9, ll_backend__opt_debug__V_18_18);
            }
#line 723 "opt_debug.m"
            {
#line 723 "opt_debug.m"
              ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_17_17);
            }
#line 723 "opt_debug.m"
            {
#line 723 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__MR_str_13, ll_backend__opt_debug__V_15_15);
            }
#line 722 "opt_debug.m"
          }
#line 724 "opt_debug.m"
        else
#line 725 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "truncated";
#line 714 "opt_debug.m"
      }
#line 713 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 713 "opt_debug.m"
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
#line 798 "opt_debug.m"
  {
#line 798 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 798 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 798 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 798 "opt_debug.m"
      {
#line 798 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
#line 798 "opt_debug.m"
        MR_Word ll_backend__opt_debug__PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
#line 798 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
#line 798 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__ExtraModule_11;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_37_37;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_41_41;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_44_44;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_45_45;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_46_46;
#line 798 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_48_48;
#line 797 "opt_debug.m"
        MR_Word ll_backend__opt_debug___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));

#line 799 "opt_debug.m"
        {
#line 799 "opt_debug.m"
          ll_backend__opt_debug__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ll_backend__opt_debug__Module_5, ll_backend__opt_debug__PredModule_7);
        }
#line 801 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 800 "opt_debug.m"
          ll_backend__opt_debug__ExtraModule_11 = (MR_String) "";
#line 801 "opt_debug.m"
        else
#line 802 "opt_debug.m"
          {
#line 802 "opt_debug.m"
            MR_String ll_backend__opt_debug__PredModuleName_12;

#line 802 "opt_debug.m"
            {
#line 802 "opt_debug.m"
              ll_backend__opt_debug__PredModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__PredModule_7);
            }
#line 803 "opt_debug.m"
            {
#line 803 "opt_debug.m"
              ll_backend__opt_debug__ExtraModule_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredModuleName_12, (MR_String) "_");
            }
#line 802 "opt_debug.m"
          }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_5);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_9);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_48_48 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_10);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_48_48);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, ll_backend__opt_debug__V_46_46);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_44_44);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredName_8, ll_backend__opt_debug__V_42_42);
        }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_41_41);
        }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
        }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ExtraModule_11, ll_backend__opt_debug__V_37_37);
        }
#line 798 "opt_debug.m"
      }
#line 798 "opt_debug.m"
    else
#line 810 "opt_debug.m"
      {
#line 810 "opt_debug.m"
        MR_Word ll_backend__opt_debug__SpecialPredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));
#line 810 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TypeModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__TypeName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
#line 810 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
#line 810 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TypeCtor_17;
#line 810 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_19_19;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_26_26;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_29_29;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_32_32;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_33_33;
#line 810 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_35_35;
#line 810 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Module_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
#line 810 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Mode_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));

#line 811 "opt_debug.m"
        {
#line 811 "opt_debug.m"
          ll_backend__opt_debug__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "opt_debug.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 0) = ((MR_Box) (ll_backend__opt_debug__TypeModule_14));
#line 811 "opt_debug.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 1) = ((MR_Box) (ll_backend__opt_debug__TypeName_15));
#line 811 "opt_debug.m"
        }
#line 811 "opt_debug.m"
        {
#line 811 "opt_debug.m"
          ll_backend__opt_debug__TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 811 "opt_debug.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 0) = ((MR_Box) (ll_backend__opt_debug__V_18_18));
#line 811 "opt_debug.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 1) = ((MR_Box) (ll_backend__opt_debug__TypeArity_16));
#line 811 "opt_debug.m"
        }
#line 812 "opt_debug.m"
        {
#line 812 "opt_debug.m"
          ll_backend__opt_debug__V_19_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_49);
        }
#line 813 "opt_debug.m"
        {
#line 813 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__opt_debug__SpecialPredId_13, ll_backend__opt_debug__TypeCtor_17);
        }
#line 814 "opt_debug.m"
        {
#line 814 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__TypeModule_14);
        }
#line 814 "opt_debug.m"
        {
#line 814 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = parse_tree__prog_foreign__qualify_name_2_f_0(ll_backend__opt_debug__V_28_28, ll_backend__opt_debug__TypeName_15);
        }
#line 815 "opt_debug.m"
        {
#line 815 "opt_debug.m"
          ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeArity_16);
        }
#line 815 "opt_debug.m"
        {
#line 815 "opt_debug.m"
          ll_backend__opt_debug__V_35_35 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_50);
        }
#line 815 "opt_debug.m"
        {
#line 815 "opt_debug.m"
          ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_35_35);
        }
#line 815 "opt_debug.m"
        {
#line 815 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, ll_backend__opt_debug__V_33_33);
        }
#line 815 "opt_debug.m"
        {
#line 815 "opt_debug.m"
          ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_31_31);
        }
#line 814 "opt_debug.m"
        {
#line 814 "opt_debug.m"
          ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_29_29);
        }
#line 814 "opt_debug.m"
        {
#line 814 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_26_26);
        }
#line 813 "opt_debug.m"
        {
#line 813 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, ll_backend__opt_debug__V_24_24);
        }
#line 813 "opt_debug.m"
        {
#line 813 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_22_22);
        }
#line 812 "opt_debug.m"
        {
#line 812 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_19_19, ll_backend__opt_debug__V_20_20);
        }
#line 810 "opt_debug.m"
      }
#line 798 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 798 "opt_debug.m"
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
#line 784 "opt_debug.m"
  {
#line 784 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 784 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 784 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 784 "opt_debug.m"
    else
#line 785 "opt_debug.m"
      {
#line 785 "opt_debug.m"
        MR_Word ll_backend__opt_debug__L1_6;
#line 785 "opt_debug.m"
        MR_Word ll_backend__opt_debug__L2_7;
#line 785 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 785 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 785 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 785 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 785 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 785 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 785 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 785 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;

#line 785 "opt_debug.m"
        ll_backend__opt_debug__L1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
#line 785 "opt_debug.m"
        ll_backend__opt_debug__L2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
#line 786 "opt_debug.m"
        {
#line 786 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L1_6);
        }
#line 787 "opt_debug.m"
        {
#line 787 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L2_7);
        }
#line 788 "opt_debug.m"
        {
#line 788 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_label_pairs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_8);
        }
#line 787 "opt_debug.m"
        {
#line 787 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
        }
#line 786 "opt_debug.m"
        {
#line 786 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__opt_debug__V_15_15);
        }
#line 786 "opt_debug.m"
        {
#line 786 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
#line 786 "opt_debug.m"
        {
#line 786 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_11_11);
        }
#line 785 "opt_debug.m"
      }
#line 784 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 784 "opt_debug.m"
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
#line 779 "opt_debug.m"
  {
#line 779 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 779 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 779 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 779 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 779 "opt_debug.m"
    else
#line 780 "opt_debug.m"
      {
#line 780 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 780 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 780 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 780 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 780 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 781 "opt_debug.m"
        {
#line 781 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
#line 782 "opt_debug.m"
        {
#line 782 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_labels_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_7);
        }
#line 781 "opt_debug.m"
        {
#line 781 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 781 "opt_debug.m"
        {
#line 781 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
#line 780 "opt_debug.m"
      }
#line 779 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 779 "opt_debug.m"
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
#line 767 "opt_debug.m"
  {
#line 767 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 767 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 767 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 767 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 767 "opt_debug.m"
    else
#line 768 "opt_debug.m"
      {
#line 768 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 768 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 768 "opt_debug.m"
        MR_String ll_backend__opt_debug__LabelStr_10;
#line 768 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 768 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;

#line 772 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 773 "opt_debug.m"
          {
#line 774 "opt_debug.m"
            {
#line 774 "opt_debug.m"
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
            }
#line 773 "opt_debug.m"
          }
#line 772 "opt_debug.m"
        else
#line 770 "opt_debug.m"
          {
#line 770 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeLabel_6, (MR_Integer) 0)));

#line 771 "opt_debug.m"
            {
#line 771 "opt_debug.m"
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_9);
            }
#line 770 "opt_debug.m"
          }
#line 777 "opt_debug.m"
        {
#line 777 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MaybeLabels_7);
        }
#line 776 "opt_debug.m"
        {
#line 776 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__LabelStr_10, ll_backend__opt_debug__V_14_14);
        }
#line 776 "opt_debug.m"
        {
#line 776 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_13_13);
        }
#line 768 "opt_debug.m"
      }
#line 767 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 767 "opt_debug.m"
  }
#line 111 "opt_debug.m"
}

#line 109 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_label_2_f_0(
#line 109 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1,
#line 109 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 109 "opt_debug.m"
{
#line 749 "opt_debug.m"
  {
#line 749 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 749 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 749 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 749 "opt_debug.m"
      if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 751 "opt_debug.m"
        {
#line 751 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 751 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 752 "opt_debug.m"
          {
#line 752 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_11);
          }
#line 751 "opt_debug.m"
        }
#line 749 "opt_debug.m"
      else
#line 749 "opt_debug.m"
        {
#line 749 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 749 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 749 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_6_6;
#line 749 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_7_7;
#line 749 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_9_9;

#line 750 "opt_debug.m"
          {
#line 750 "opt_debug.m"
            ll_backend__opt_debug__V_6_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_5);
          }
#line 750 "opt_debug.m"
          {
#line 750 "opt_debug.m"
            ll_backend__opt_debug__V_9_9 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_4);
          }
#line 750 "opt_debug.m"
          {
#line 750 "opt_debug.m"
            ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__opt_debug__V_9_9);
          }
#line 750 "opt_debug.m"
          {
#line 750 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_6_6, ll_backend__opt_debug__V_7_7);
          }
#line 749 "opt_debug.m"
        }
#line 749 "opt_debug.m"
    else
#line 749 "opt_debug.m"
      {
#line 749 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 749 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 760 "opt_debug.m"
          {
#line 760 "opt_debug.m"
            MR_Word ll_backend__opt_debug__ProcLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 760 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 761 "opt_debug.m"
            {
#line 761 "opt_debug.m"
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__V_25_25, ll_backend__opt_debug__ProcLabel_23);
            }
#line 763 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 762 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "CUR_PROC_ENTRY";
#line 763 "opt_debug.m"
            else
#line 764 "opt_debug.m"
              {
#line 764 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_23);
              }
#line 760 "opt_debug.m"
          }
#line 749 "opt_debug.m"
        else
#line 753 "opt_debug.m"
          {
#line 753 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 753 "opt_debug.m"
            MR_Word ll_backend__opt_debug__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 753 "opt_debug.m"
            MR_String ll_backend__opt_debug__N_str_16;

#line 754 "opt_debug.m"
            {
#line 754 "opt_debug.m"
              mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__N_13, &ll_backend__opt_debug__N_str_16);
            }
#line 755 "opt_debug.m"
            {
#line 755 "opt_debug.m"
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__V_25_25, ll_backend__opt_debug__ProcLabel_14);
            }
#line 757 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 756 "opt_debug.m"
              {
#line 756 "opt_debug.m"
                {
#line 756 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "local_", ll_backend__opt_debug__N_str_16);
                }
#line 756 "opt_debug.m"
              }
#line 757 "opt_debug.m"
            else
#line 758 "opt_debug.m"
              {
#line 758 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_18_18;
#line 758 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_19_19;

#line 758 "opt_debug.m"
                {
#line 758 "opt_debug.m"
                  ll_backend__opt_debug__V_18_18 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_14);
                }
#line 758 "opt_debug.m"
                {
#line 758 "opt_debug.m"
                  ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__N_str_16);
                }
#line 758 "opt_debug.m"
                {
#line 758 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_18_18, ll_backend__opt_debug__V_19_19);
                }
#line 758 "opt_debug.m"
              }
#line 753 "opt_debug.m"
          }
#line 749 "opt_debug.m"
      }
#line 749 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 749 "opt_debug.m"
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
#line 667 "opt_debug.m"
  {
#line 667 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 667 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 697 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 698 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "|";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 699 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "^";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 710 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "body";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 41)))))
#line 670 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 42)))))
#line 669 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound<";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 701 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "==";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 682 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl/";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 683 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl==";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 690 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_from_dword";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 686 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 688 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 685 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 687 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 680 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl-";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 684 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl!=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 679 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl+";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 681 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl*";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 689 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_word_bits";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 691 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "+";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 694 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "/";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 708 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 706 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 707 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 705 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 700 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "%";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 693 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "*";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 692 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "-";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 703 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&&";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 704 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "||";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 702 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "!=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 711 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "pointer_equal_conservative";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 709 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "strcmp";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 672 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str==";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 675 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 677 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 674 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 676 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 673 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str!=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 668 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "string_unsafe_index_code_unit";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 695 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked<<";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 696 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked>>";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 678 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unsigned<=";
#line 667 "opt_debug.m"
    else
#line 667 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 667 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "array_index";
#line 667 "opt_debug.m"
    else
#line 671 "opt_debug.m"
      {
#line 671 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 671 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 671 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_7_7;

#line 671 "opt_debug.m"
        {
#line 671 "opt_debug.m"
          ll_backend__opt_debug__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_4);
        }
#line 671 "opt_debug.m"
        {
#line 671 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, (MR_String) ")str==");
        }
#line 671 "opt_debug.m"
        {
#line 671 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "offset(", ll_backend__opt_debug__V_6_6);
        }
#line 671 "opt_debug.m"
      }
#line 667 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 667 "opt_debug.m"
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
#line 652 "opt_debug.m"
  {
#line 652 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 652 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 6))
#line 659 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "bitwise_complement";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 8))
#line 660 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 9))
#line 661 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string2";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 10))
#line 662 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string3";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 11))
#line 663 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string4";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 12))
#line 664 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string5";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 13))
#line 665 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string6";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 7))
#line 658 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "not";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 4))
#line 656 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "mkbody";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 652 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "mktag";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 3))
#line 655 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "strip_tag";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 1))
#line 653 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "tag";
#line 652 "opt_debug.m"
    else
#line 652 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 5))
#line 657 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unmkbody";
#line 652 "opt_debug.m"
    else
#line 654 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unmktag";
#line 652 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 652 "opt_debug.m"
  }
#line 105 "opt_debug.m"
}

#line 103 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_layout_name_1_f_0(
#line 103 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 103 "opt_debug.m"
{
#line 599 "opt_debug.m"
  {
#line 599 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 599 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 599 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 601 "opt_debug.m"
      {
#line 601 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 601 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__SeqNo_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 601 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 601 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 601 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 601 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 601 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));

#line 602 "opt_debug.m"
        {
#line 602 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_9);
        }
#line 603 "opt_debug.m"
        {
#line 603 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__SeqNo_10);
        }
#line 603 "opt_debug.m"
        {
#line 603 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, (MR_String) ")");
        }
#line 603 "opt_debug.m"
        {
#line 603 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
        }
#line 602 "opt_debug.m"
        {
#line 602 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "closure_proc_id(", ll_backend__opt_debug__V_13_13);
        }
#line 601 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 604 "opt_debug.m"
      {
#line 604 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 604 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__FileNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 604 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 604 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 604 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 604 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;

#line 605 "opt_debug.m"
        {
#line 605 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_18);
        }
#line 606 "opt_debug.m"
        {
#line 606 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_19);
        }
#line 606 "opt_debug.m"
        {
#line 606 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, (MR_String) ")");
        }
#line 606 "opt_debug.m"
        {
#line 606 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, ll_backend__opt_debug__V_23_23);
        }
#line 605 "opt_debug.m"
        {
#line 605 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout(", ll_backend__opt_debug__V_21_21);
        }
#line 604 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 599 "opt_debug.m"
      {
#line 599 "opt_debug.m"
        MR_Word ll_backend__opt_debug__RttiProcLabel_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 599 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 599 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_7_7;
#line 599 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));

#line 600 "opt_debug.m"
        {
#line 600 "opt_debug.m"
          ll_backend__opt_debug__V_7_7 = ll_backend__opt_debug__dump_rttiproclabel_1_f_0(ll_backend__opt_debug__RttiProcLabel_3);
        }
#line 600 "opt_debug.m"
        {
#line 600 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, (MR_String) ")");
        }
#line 600 "opt_debug.m"
        {
#line 600 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "proc_layout(", ll_backend__opt_debug__V_6_6);
        }
#line 599 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 610 "opt_debug.m"
      {
#line 610 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 610 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__FileNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 610 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_37_37;
#line 610 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 610 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;
#line 610 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_40_40;

#line 611 "opt_debug.m"
        {
#line 611 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_34);
        }
#line 612 "opt_debug.m"
        {
#line 612 "opt_debug.m"
          ll_backend__opt_debug__V_40_40 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_35);
        }
#line 612 "opt_debug.m"
        {
#line 612 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, (MR_String) ")");
        }
#line 612 "opt_debug.m"
        {
#line 612 "opt_debug.m"
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
        }
#line 611 "opt_debug.m"
        {
#line 611 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_label_layout_vector(", ll_backend__opt_debug__V_37_37);
        }
#line 610 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 607 "opt_debug.m"
      {
#line 607 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__FileNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 607 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_29_29;
#line 607 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_30_30;
#line 607 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;
#line 607 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_32_32;

#line 608 "opt_debug.m"
        {
#line 608 "opt_debug.m"
          ll_backend__opt_debug__V_30_30 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_26);
        }
#line 609 "opt_debug.m"
        {
#line 609 "opt_debug.m"
          ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_27);
        }
#line 609 "opt_debug.m"
        {
#line 609 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, (MR_String) ")");
        }
#line 609 "opt_debug.m"
        {
#line 609 "opt_debug.m"
          ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_30_30, ll_backend__opt_debug__V_31_31);
        }
#line 608 "opt_debug.m"
        {
#line 608 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_line_number_vector(", ll_backend__opt_debug__V_29_29);
        }
#line 607 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 649 "opt_debug.m"
      {
#line 649 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 649 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_149_149;
#line 649 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_150_150;

#line 650 "opt_debug.m"
        {
#line 650 "opt_debug.m"
          ll_backend__opt_debug__V_150_150 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_147);
        }
#line 650 "opt_debug.m"
        {
#line 650 "opt_debug.m"
          ll_backend__opt_debug__V_149_149 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_150_150, (MR_String) ")");
        }
#line 650 "opt_debug.m"
        {
#line 650 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout(", ll_backend__opt_debug__V_149_149);
        }
#line 649 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 626 "opt_debug.m"
      {
#line 626 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 626 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__EventNum_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 626 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_80_80;
#line 626 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_81_81;
#line 626 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_82_82;
#line 626 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_84_84;
#line 626 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_85_85;

#line 627 "opt_debug.m"
        {
#line 627 "opt_debug.m"
          ll_backend__opt_debug__V_81_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_77);
        }
#line 628 "opt_debug.m"
        {
#line 628 "opt_debug.m"
          ll_backend__opt_debug__V_85_85 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_78);
        }
#line 628 "opt_debug.m"
        {
#line 628 "opt_debug.m"
          ll_backend__opt_debug__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_85_85, (MR_String) ")");
        }
#line 628 "opt_debug.m"
        {
#line 628 "opt_debug.m"
          ll_backend__opt_debug__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_84_84);
        }
#line 627 "opt_debug.m"
        {
#line 627 "opt_debug.m"
          ll_backend__opt_debug__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_81_81, ll_backend__opt_debug__V_82_82);
        }
#line 627 "opt_debug.m"
        {
#line 627 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_arg_names(", ll_backend__opt_debug__V_80_80);
        }
#line 626 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 622 "opt_debug.m"
      {
#line 622 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_69_69;
#line 622 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_70_70;

#line 623 "opt_debug.m"
        {
#line 623 "opt_debug.m"
          ll_backend__opt_debug__V_70_70 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_67);
        }
#line 623 "opt_debug.m"
        {
#line 623 "opt_debug.m"
          ll_backend__opt_debug__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_70_70, (MR_String) ")");
        }
#line 623 "opt_debug.m"
        {
#line 623 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_set_desc(", ll_backend__opt_debug__V_69_69);
        }
#line 622 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 624 "opt_debug.m"
      {
#line 624 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 624 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_74_74;
#line 624 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_75_75;

#line 625 "opt_debug.m"
        {
#line 625 "opt_debug.m"
          ll_backend__opt_debug__V_75_75 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_72);
        }
#line 625 "opt_debug.m"
        {
#line 625 "opt_debug.m"
          ll_backend__opt_debug__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_75_75, (MR_String) ")");
        }
#line 625 "opt_debug.m"
        {
#line 625 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_specs(", ll_backend__opt_debug__V_74_74);
        }
#line 624 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 633 "opt_debug.m"
      {
#line 633 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__EventNum_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 633 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__ArgNum_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 3)));
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_101_101;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_102_102;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_103_103;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_105_105;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_106_106;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_107_107;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_109_109;
#line 633 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_110_110;

#line 634 "opt_debug.m"
        {
#line 634 "opt_debug.m"
          ll_backend__opt_debug__V_102_102 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_97);
        }
#line 635 "opt_debug.m"
        {
#line 635 "opt_debug.m"
          ll_backend__opt_debug__V_106_106 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_98);
        }
#line 636 "opt_debug.m"
        {
#line 636 "opt_debug.m"
          ll_backend__opt_debug__V_110_110 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_99);
        }
#line 636 "opt_debug.m"
        {
#line 636 "opt_debug.m"
          ll_backend__opt_debug__V_109_109 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_110_110, (MR_String) ")");
        }
#line 636 "opt_debug.m"
        {
#line 636 "opt_debug.m"
          ll_backend__opt_debug__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_109_109);
        }
#line 635 "opt_debug.m"
        {
#line 635 "opt_debug.m"
          ll_backend__opt_debug__V_105_105 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_106_106, ll_backend__opt_debug__V_107_107);
        }
#line 635 "opt_debug.m"
        {
#line 635 "opt_debug.m"
          ll_backend__opt_debug__V_103_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_105_105);
        }
#line 634 "opt_debug.m"
        {
#line 634 "opt_debug.m"
          ll_backend__opt_debug__V_101_101 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_102_102, ll_backend__opt_debug__V_103_103);
        }
#line 634 "opt_debug.m"
        {
#line 634 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_args(", ll_backend__opt_debug__V_101_101);
        }
#line 633 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 638 "opt_debug.m"
      {
#line 638 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 638 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__EventNum_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 638 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__ArgNum_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 3)));
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_116_116;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_117_117;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_118_118;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_120_120;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_121_121;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_122_122;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_124_124;
#line 638 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_125_125;

#line 639 "opt_debug.m"
        {
#line 639 "opt_debug.m"
          ll_backend__opt_debug__V_117_117 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_112);
        }
#line 640 "opt_debug.m"
        {
#line 640 "opt_debug.m"
          ll_backend__opt_debug__V_121_121 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_113);
        }
#line 641 "opt_debug.m"
        {
#line 641 "opt_debug.m"
          ll_backend__opt_debug__V_125_125 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_114);
        }
#line 641 "opt_debug.m"
        {
#line 641 "opt_debug.m"
          ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
        }
#line 641 "opt_debug.m"
        {
#line 641 "opt_debug.m"
          ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_124_124);
        }
#line 640 "opt_debug.m"
        {
#line 640 "opt_debug.m"
          ll_backend__opt_debug__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_121_121, ll_backend__opt_debug__V_122_122);
        }
#line 640 "opt_debug.m"
        {
#line 640 "opt_debug.m"
          ll_backend__opt_debug__V_118_118 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_120_120);
        }
#line 639 "opt_debug.m"
        {
#line 639 "opt_debug.m"
          ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, ll_backend__opt_debug__V_118_118);
        }
#line 639 "opt_debug.m"
        {
#line 639 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_order(", ll_backend__opt_debug__V_116_116);
        }
#line 638 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 629 "opt_debug.m"
      {
#line 629 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 629 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__EventNum_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 629 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_90_90;
#line 629 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_91_91;
#line 629 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_92_92;
#line 629 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_94_94;
#line 629 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_95_95;

#line 630 "opt_debug.m"
        {
#line 630 "opt_debug.m"
          ll_backend__opt_debug__V_91_91 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_87);
        }
#line 631 "opt_debug.m"
        {
#line 631 "opt_debug.m"
          ll_backend__opt_debug__V_95_95 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_88);
        }
#line 631 "opt_debug.m"
        {
#line 631 "opt_debug.m"
          ll_backend__opt_debug__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_95_95, (MR_String) ")");
        }
#line 631 "opt_debug.m"
        {
#line 631 "opt_debug.m"
          ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_94_94);
        }
#line 630 "opt_debug.m"
        {
#line 630 "opt_debug.m"
          ll_backend__opt_debug__V_90_90 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_91_91, ll_backend__opt_debug__V_92_92);
        }
#line 630 "opt_debug.m"
        {
#line 630 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attrs(", ll_backend__opt_debug__V_90_90);
        }
#line 629 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 642 "opt_debug.m"
      {
#line 642 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 642 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__EventNum_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 642 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_130_130;
#line 642 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_131_131;
#line 642 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_132_132;
#line 642 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_134_134;
#line 642 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_135_135;

#line 643 "opt_debug.m"
        {
#line 643 "opt_debug.m"
          ll_backend__opt_debug__V_131_131 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_127);
        }
#line 644 "opt_debug.m"
        {
#line 644 "opt_debug.m"
          ll_backend__opt_debug__V_135_135 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_128);
        }
#line 644 "opt_debug.m"
        {
#line 644 "opt_debug.m"
          ll_backend__opt_debug__V_134_134 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_135_135, (MR_String) ")");
        }
#line 644 "opt_debug.m"
        {
#line 644 "opt_debug.m"
          ll_backend__opt_debug__V_132_132 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_134_134);
        }
#line 643 "opt_debug.m"
        {
#line 643 "opt_debug.m"
          ll_backend__opt_debug__V_130_130 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_131_131, ll_backend__opt_debug__V_132_132);
        }
#line 643 "opt_debug.m"
        {
#line 643 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_order(", ll_backend__opt_debug__V_130_130);
        }
#line 642 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 615 "opt_debug.m"
      {
#line 615 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 615 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_49_49;
#line 615 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_50_50;

#line 616 "opt_debug.m"
        {
#line 616 "opt_debug.m"
          ll_backend__opt_debug__V_50_50 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_47);
        }
#line 616 "opt_debug.m"
        {
#line 616 "opt_debug.m"
          ll_backend__opt_debug__V_49_49 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_50_50, (MR_String) ")");
        }
#line 616 "opt_debug.m"
        {
#line 616 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_file_vector(", ll_backend__opt_debug__V_49_49);
        }
#line 615 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 619 "opt_debug.m"
      {
#line 619 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 619 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__NumLabels_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 619 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_60_60;
#line 619 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_61_61;
#line 619 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_62_62;
#line 619 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_64_64;
#line 619 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_65_65;

#line 620 "opt_debug.m"
        {
#line 620 "opt_debug.m"
          ll_backend__opt_debug__V_61_61 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_57);
        }
#line 621 "opt_debug.m"
        {
#line 621 "opt_debug.m"
          ll_backend__opt_debug__V_65_65 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumLabels_58);
        }
#line 621 "opt_debug.m"
        {
#line 621 "opt_debug.m"
          ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_65_65, (MR_String) ")");
        }
#line 621 "opt_debug.m"
        {
#line 621 "opt_debug.m"
          ll_backend__opt_debug__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_64_64);
        }
#line 621 "opt_debug.m"
        {
#line 621 "opt_debug.m"
          ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_61_61, ll_backend__opt_debug__V_62_62);
        }
#line 620 "opt_debug.m"
        {
#line 620 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_label_exec_count(", ll_backend__opt_debug__V_60_60);
        }
#line 619 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 645 "opt_debug.m"
      {
#line 645 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 645 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_139_139;
#line 645 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_140_140;

#line 646 "opt_debug.m"
        {
#line 646 "opt_debug.m"
          ll_backend__opt_debug__V_140_140 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_137);
        }
#line 646 "opt_debug.m"
        {
#line 646 "opt_debug.m"
          ll_backend__opt_debug__V_139_139 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_140_140, (MR_String) ")");
        }
#line 646 "opt_debug.m"
        {
#line 646 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_oisu_bytes(", ll_backend__opt_debug__V_139_139);
        }
#line 645 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 617 "opt_debug.m"
      {
#line 617 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 617 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_54_54;
#line 617 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_55_55;

#line 618 "opt_debug.m"
        {
#line 618 "opt_debug.m"
          ll_backend__opt_debug__V_55_55 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_52);
        }
#line 618 "opt_debug.m"
        {
#line 618 "opt_debug.m"
          ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_55_55, (MR_String) ")");
        }
#line 618 "opt_debug.m"
        {
#line 618 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_proc_vector(", ll_backend__opt_debug__V_54_54);
        }
#line 617 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 599 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 613 "opt_debug.m"
      {
#line 613 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 613 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_44_44;
#line 613 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_45_45;

#line 614 "opt_debug.m"
        {
#line 614 "opt_debug.m"
          ll_backend__opt_debug__V_45_45 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_42);
        }
#line 614 "opt_debug.m"
        {
#line 614 "opt_debug.m"
          ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, (MR_String) ")");
        }
#line 614 "opt_debug.m"
        {
#line 614 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_string_table(", ll_backend__opt_debug__V_44_44);
        }
#line 613 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    else
#line 647 "opt_debug.m"
      {
#line 647 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ModuleName_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 647 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_144_144;
#line 647 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_145_145;

#line 648 "opt_debug.m"
        {
#line 648 "opt_debug.m"
          ll_backend__opt_debug__V_145_145 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_142);
        }
#line 648 "opt_debug.m"
        {
#line 648 "opt_debug.m"
          ll_backend__opt_debug__V_144_144 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_145_145, (MR_String) ")");
        }
#line 648 "opt_debug.m"
        {
#line 648 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_type_table_bytes(", ll_backend__opt_debug__V_144_144);
        }
#line 647 "opt_debug.m"
      }
#line 599 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 599 "opt_debug.m"
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
#line 532 "opt_debug.m"
  {
#line 532 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 532 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 596 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "alloc_site_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 554 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "hlds_var_nums_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 548 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "long_locns_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 587 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_body_bytecodes_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 578 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_event_layouts_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 575 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_exec_trace_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 581 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_head_var_nums_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 563 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 566 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_call_sites_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 572 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_dynamic_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 569 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_static_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 590 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_table_io_entry_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 584 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "proc_var_names_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 545 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "pseudo_type_info_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 551 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "short_locns_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 593 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "threadscope_string_table_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 557 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "user_event_layout_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 560 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "user_event_var_nums_array";
#line 532 "opt_debug.m"
    else
#line 532 "opt_debug.m"
      {
#line 532 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LabelVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ArrayName_3, (MR_Integer) 0)));

#line 536 "opt_debug.m"
        if ((ll_backend__opt_debug__LabelVars_5 == (MR_Integer) 2))
#line 541 "opt_debug.m"
          ll_backend__opt_debug__Str_4 = (MR_String) "long_vars_label_layout_array";
#line 536 "opt_debug.m"
        else
#line 536 "opt_debug.m"
        if ((ll_backend__opt_debug__LabelVars_5 == (MR_Integer) 0))
#line 535 "opt_debug.m"
          ll_backend__opt_debug__Str_4 = (MR_String) "no_vars_label_layout_array";
#line 536 "opt_debug.m"
        else
#line 538 "opt_debug.m"
          ll_backend__opt_debug__Str_4 = (MR_String) "short_vars_label_layout_array";
#line 532 "opt_debug.m"
      }
#line 532 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 532 "opt_debug.m"
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
#line 525 "opt_debug.m"
  {
#line 525 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 525 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_5;
#line 525 "opt_debug.m"
    MR_Word ll_backend__opt_debug__Array_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 525 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Slot_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 525 "opt_debug.m"
    MR_String ll_backend__opt_debug__ArrayStr_6;
#line 525 "opt_debug.m"
    MR_String ll_backend__opt_debug__SlotStr_7;
#line 525 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 525 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_10_10;

#line 526 "opt_debug.m"
    {
#line 526 "opt_debug.m"
      ll_backend__opt_debug__ArrayStr_6 = ll_backend__opt_debug__dump_layout_array_name_1_f_0(ll_backend__opt_debug__Array_3);
    }
#line 527 "opt_debug.m"
    {
#line 527 "opt_debug.m"
      ll_backend__opt_debug__SlotStr_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Slot_4);
    }
#line 528 "opt_debug.m"
    {
#line 528 "opt_debug.m"
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SlotStr_7, (MR_String) "]");
    }
#line 528 "opt_debug.m"
    {
#line 528 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", ll_backend__opt_debug__V_10_10);
    }
#line 528 "opt_debug.m"
    {
#line 528 "opt_debug.m"
      return ll_backend__opt_debug__Str_5 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ArrayStr_6, ll_backend__opt_debug__V_8_8);
    }
#line 525 "opt_debug.m"
    return ll_backend__opt_debug__Str_5;
#line 525 "opt_debug.m"
  }
#line 99 "opt_debug.m"
}

#line 97 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(
#line 97 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 97 "opt_debug.m"
{
#line 490 "opt_debug.m"
  {
#line 490 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 490 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 490 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 493 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_decl";
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 496 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_decl_supers";
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 492 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_id";
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 497 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_id_method_ids";
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 498 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_id_var_names";
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 490 "opt_debug.m"
      {
#line 490 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstanceStr_4 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 490 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 490 "opt_debug.m"
        MR_Word ll_backend__opt_debug___ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 491 "opt_debug.m"
        {
#line 491 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstanceStr_4, (MR_String) ")");
        }
#line 491 "opt_debug.m"
        {
#line 491 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", ll_backend__opt_debug__V_6_6);
        }
#line 490 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 494 "opt_debug.m"
      {
#line 494 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 494 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 494 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 494 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));

#line 495 "opt_debug.m"
        {
#line 495 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_8);
        }
#line 495 "opt_debug.m"
        {
#line 495 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, (MR_String) ")");
        }
#line 495 "opt_debug.m"
        {
#line 495 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_decl_super(", ll_backend__opt_debug__V_11_11);
        }
#line 494 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 499 "opt_debug.m"
      {
#line 499 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TCTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 499 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 499 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;

#line 501 "opt_debug.m"
        {
#line 501 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_14);
        }
#line 501 "opt_debug.m"
        {
#line 501 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, (MR_String) ")");
        }
#line 501 "opt_debug.m"
        {
#line 501 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance(", ll_backend__opt_debug__V_16_16);
        }
#line 499 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 508 "opt_debug.m"
      {
#line 508 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TCTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 508 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 508 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_33_33;
#line 508 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_34_34;
#line 508 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_35_35;
#line 508 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_37_37;
#line 508 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 508 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 3)));

#line 510 "opt_debug.m"
        {
#line 510 "opt_debug.m"
          ll_backend__opt_debug__V_34_34 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_29);
        }
#line 511 "opt_debug.m"
        {
#line 511 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_30);
        }
#line 511 "opt_debug.m"
        {
#line 511 "opt_debug.m"
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, (MR_String) ")");
        }
#line 511 "opt_debug.m"
        {
#line 511 "opt_debug.m"
          ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_37_37);
        }
#line 510 "opt_debug.m"
        {
#line 510 "opt_debug.m"
          ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_34_34, ll_backend__opt_debug__V_35_35);
        }
#line 510 "opt_debug.m"
        {
#line 510 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraint(", ll_backend__opt_debug__V_33_33);
        }
#line 508 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 505 "opt_debug.m"
      {
#line 505 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TCTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 505 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_26_26;
#line 505 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;

#line 507 "opt_debug.m"
        {
#line 507 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_24);
        }
#line 507 "opt_debug.m"
        {
#line 507 "opt_debug.m"
          ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, (MR_String) ")");
        }
#line 507 "opt_debug.m"
        {
#line 507 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraints(", ll_backend__opt_debug__V_26_26);
        }
#line 505 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    else
#line 490 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 512 "opt_debug.m"
      {
#line 512 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TCTypes_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 512 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;
#line 512 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_43_43;

#line 514 "opt_debug.m"
        {
#line 514 "opt_debug.m"
          ll_backend__opt_debug__V_43_43 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_40);
        }
#line 514 "opt_debug.m"
        {
#line 514 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_43_43, (MR_String) ")");
        }
#line 514 "opt_debug.m"
        {
#line 514 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_methods(", ll_backend__opt_debug__V_42_42);
        }
#line 512 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    else
#line 502 "opt_debug.m"
      {
#line 502 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TCTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 502 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 502 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;

#line 504 "opt_debug.m"
        {
#line 504 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_19);
        }
#line 504 "opt_debug.m"
        {
#line 504 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
        }
#line 504 "opt_debug.m"
        {
#line 504 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_tc_types_vector(", ll_backend__opt_debug__V_21_21);
        }
#line 502 "opt_debug.m"
      }
#line 490 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 490 "opt_debug.m"
  }
#line 97 "opt_debug.m"
}

#line 95 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_name_1_f_0(
#line 95 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 95 "opt_debug.m"
{
#line 435 "opt_debug.m"
  {
#line 435 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 435 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 469 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "du_name_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 472 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "du_ptag_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 462 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "enum_name_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 464 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "enum_value_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 437 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "exist_loc";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 466 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "foreign_enum_name_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 468 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "foreign_enum_ordinal_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 481 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "functor_number_map";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 478 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "maybe_res_addr_functor_desc";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 457 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "notag_functor_desc_";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 452 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_addr_functors";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 451 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_addrs";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 476 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_name_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 475 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_value_ordered_table";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 482 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_ctor_info";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 480 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_functors";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 488 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_hashcons_pointer";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 479 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_layout";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 435 "opt_debug.m"
      {
#line 435 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 435 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_5_5;

#line 436 "opt_debug.m"
        {
#line 436 "opt_debug.m"
          ll_backend__opt_debug__V_5_5 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_3);
        }
#line 436 "opt_debug.m"
        {
#line 436 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_locns_", ll_backend__opt_debug__V_5_5);
        }
#line 435 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 438 "opt_debug.m"
      {
#line 438 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 438 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TCCNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 438 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 438 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_18_18;

#line 439 "opt_debug.m"
        {
#line 439 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_6);
        }
#line 440 "opt_debug.m"
        {
#line 440 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TCCNum_7);
        }
#line 440 "opt_debug.m"
        {
#line 440 "opt_debug.m"
          ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_8);
        }
#line 440 "opt_debug.m"
        {
#line 440 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_18_18);
        }
#line 440 "opt_debug.m"
        {
#line 440 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, ll_backend__opt_debug__V_16_16);
        }
#line 440 "opt_debug.m"
        {
#line 440 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_14_14);
        }
#line 439 "opt_debug.m"
        {
#line 439 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_11_11, ll_backend__opt_debug__V_12_12);
        }
#line 439 "opt_debug.m"
        {
#line 439 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constr_", ll_backend__opt_debug__V_10_10);
        }
#line 438 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 458 "opt_debug.m"
      {
#line 458 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 458 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;

#line 459 "opt_debug.m"
        {
#line 459 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_40);
        }
#line 459 "opt_debug.m"
        {
#line 459 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "du_functor_desc_", ll_backend__opt_debug__V_42_42);
        }
#line 458 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 473 "opt_debug.m"
      {
#line 473 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ptag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 473 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_51_51;

#line 474 "opt_debug.m"
        {
#line 474 "opt_debug.m"
          ll_backend__opt_debug__V_51_51 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_49);
        }
#line 474 "opt_debug.m"
        {
#line 474 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "du_ptag_layout", ll_backend__opt_debug__V_51_51);
        }
#line 473 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 470 "opt_debug.m"
      {
#line 470 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ptag_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 470 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_48_48;

#line 471 "opt_debug.m"
        {
#line 471 "opt_debug.m"
          ll_backend__opt_debug__V_48_48 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_46);
        }
#line 471 "opt_debug.m"
        {
#line 471 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "du_stag_ordered_table_", ll_backend__opt_debug__V_48_48);
        }
#line 470 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 453 "opt_debug.m"
      {
#line 453 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 453 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_36_36;

#line 454 "opt_debug.m"
        {
#line 454 "opt_debug.m"
          ll_backend__opt_debug__V_36_36 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_34);
        }
#line 454 "opt_debug.m"
        {
#line 454 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "enum_functor_desc_", ll_backend__opt_debug__V_36_36);
        }
#line 453 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 443 "opt_debug.m"
      {
#line 443 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 443 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;

#line 444 "opt_debug.m"
        {
#line 444 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_22);
        }
#line 444 "opt_debug.m"
        {
#line 444 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_info_", ll_backend__opt_debug__V_24_24);
        }
#line 443 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 441 "opt_debug.m"
      {
#line 441 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 441 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;

#line 442 "opt_debug.m"
        {
#line 442 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_19);
        }
#line 442 "opt_debug.m"
        {
#line 442 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constrs_", ll_backend__opt_debug__V_21_21);
        }
#line 441 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 449 "opt_debug.m"
      {
#line 449 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 449 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_33_33;

#line 450 "opt_debug.m"
        {
#line 450 "opt_debug.m"
          ll_backend__opt_debug__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_31);
        }
#line 450 "opt_debug.m"
        {
#line 450 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "field_locns_", ll_backend__opt_debug__V_33_33);
        }
#line 449 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 445 "opt_debug.m"
      {
#line 445 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 445 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;

#line 446 "opt_debug.m"
        {
#line 446 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_25);
        }
#line 446 "opt_debug.m"
        {
#line 446 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "field_names_", ll_backend__opt_debug__V_27_27);
        }
#line 445 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 447 "opt_debug.m"
      {
#line 447 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 447 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_30_30;

#line 448 "opt_debug.m"
        {
#line 448 "opt_debug.m"
          ll_backend__opt_debug__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_28);
        }
#line 448 "opt_debug.m"
        {
#line 448 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "field_types_", ll_backend__opt_debug__V_30_30);
        }
#line 447 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 455 "opt_debug.m"
      {
#line 455 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 455 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;

#line 456 "opt_debug.m"
        {
#line 456 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_37);
        }
#line 456 "opt_debug.m"
        {
#line 456 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_enum_functor_desc_", ll_backend__opt_debug__V_39_39);
        }
#line 455 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 486 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "pseudo_type_info";
#line 435 "opt_debug.m"
    else
#line 435 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 460 "opt_debug.m"
      {
#line 460 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Ordinal_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 460 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_45_45;

#line 461 "opt_debug.m"
        {
#line 461 "opt_debug.m"
          ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_43);
        }
#line 461 "opt_debug.m"
        {
#line 461 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "res_functor_desc_", ll_backend__opt_debug__V_45_45);
        }
#line 460 "opt_debug.m"
      }
#line 435 "opt_debug.m"
    else
#line 483 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_info";
#line 435 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 435 "opt_debug.m"
  }
#line 95 "opt_debug.m"
}

#line 521 "opt_debug.m"
static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
#line 521 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 521 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1)
#line 521 "opt_debug.m"
{
#line 521 "opt_debug.m"
  {
#line 521 "opt_debug.m"
    MR_Box ll_backend__opt_debug__wrapper_arg_2;
#line 521 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
#line 521 "opt_debug.m"
    MR_String ll_backend__opt_debug__conv0_HeadVar__2_2;

#line 521 "opt_debug.m"
    {
#line 521 "opt_debug.m"
      ll_backend__opt_debug__conv0_HeadVar__2_2 = backend_libs__rtti__encode_tc_instance_type_1_f_0(((MR_Word) ll_backend__opt_debug__wrapper_arg_1));
    }
#line 521 "opt_debug.m"
    ll_backend__opt_debug__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_debug__conv0_HeadVar__2_2));
#line 521 "opt_debug.m"
    return ll_backend__opt_debug__wrapper_arg_2;
#line 521 "opt_debug.m"
  }
#line 521 "opt_debug.m"
}

#line 93 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(
#line 93 "opt_debug.m"
  MR_Word ll_backend__opt_debug__TCTypes_3)
#line 93 "opt_debug.m"
{
#line 520 "opt_debug.m"
  {
#line 520 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 520 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;
#line 520 "opt_debug.m"
    MR_Word ll_backend__opt_debug__EncodedTCTypes_5;
#line 520 "opt_debug.m"
    MR_String ll_backend__opt_debug__TypesStr_6;
#line 520 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;

#line 521 "opt_debug.m"
    {
#line 521 "opt_debug.m"
      ll_backend__opt_debug__EncodedTCTypes_5 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[2], ll_backend__opt_debug__TCTypes_3);
    }
#line 522 "opt_debug.m"
    {
#line 522 "opt_debug.m"
      mercury__string__append_list_2_p_0(ll_backend__opt_debug__EncodedTCTypes_5, &ll_backend__opt_debug__TypesStr_6);
    }
#line 523 "opt_debug.m"
    {
#line 523 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypesStr_6, (MR_String) ")");
    }
#line 523 "opt_debug.m"
    {
#line 523 "opt_debug.m"
      return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_instance(", ll_backend__opt_debug__V_9_9);
    }
#line 520 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 520 "opt_debug.m"
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
#line 516 "opt_debug.m"
  {
#line 516 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;
#line 516 "opt_debug.m"
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 516 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_10_10;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_12_12;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_13_13;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_14_14;
#line 516 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_15_15;

#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
#line 518 "opt_debug.m"
    {
#line 518 "opt_debug.m"
      ll_backend__opt_debug__V_13_13 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__ClassName_4);
    }
#line 518 "opt_debug.m"
    {
#line 518 "opt_debug.m"
      ll_backend__opt_debug__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
#line 518 "opt_debug.m"
    {
#line 518 "opt_debug.m"
      ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) ")");
    }
#line 518 "opt_debug.m"
    {
#line 518 "opt_debug.m"
      ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, ll_backend__opt_debug__V_14_14);
    }
#line 518 "opt_debug.m"
    {
#line 518 "opt_debug.m"
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_12_12);
    }
#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_9_9, ll_backend__opt_debug__V_10_10);
    }
#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "tc_name(", ll_backend__opt_debug__V_8_8);
    }
#line 516 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 516 "opt_debug.m"
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
#line 431 "opt_debug.m"
  {
#line 431 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;
#line 431 "opt_debug.m"
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 431 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_7_7;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_11_11;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_12_12;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_13_13;
#line 431 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_14_14;

#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
#line 433 "opt_debug.m"
    {
#line 433 "opt_debug.m"
      ll_backend__opt_debug__V_12_12 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__TypeName_4);
    }
#line 433 "opt_debug.m"
    {
#line 433 "opt_debug.m"
      ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
#line 433 "opt_debug.m"
    {
#line 433 "opt_debug.m"
      ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, (MR_String) ")");
    }
#line 433 "opt_debug.m"
    {
#line 433 "opt_debug.m"
      ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
    }
#line 433 "opt_debug.m"
    {
#line 433 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
    }
#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
    }
#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_type_ctor(", ll_backend__opt_debug__V_7_7);
    }
#line 431 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 431 "opt_debug.m"
  }
#line 89 "opt_debug.m"
}

#line 87 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_data_id_1_f_0(
#line 87 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 87 "opt_debug.m"
{
#line 406 "opt_debug.m"
  {
#line 406 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 406 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 406 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 412 "opt_debug.m"
      {
#line 412 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 412 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Id_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 412 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;
#line 412 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;
#line 412 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_30_30;
#line 412 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;

#line 413 "opt_debug.m"
        {
#line 413 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = backend_libs__rtti__tabling_info_id_str_1_f_0(ll_backend__opt_debug__Id_26);
        }
#line 413 "opt_debug.m"
        {
#line 413 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_25);
        }
#line 413 "opt_debug.m"
        {
#line 413 "opt_debug.m"
          ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_31_31, (MR_String) ")");
        }
#line 413 "opt_debug.m"
        {
#line 413 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_30_30);
        }
#line 413 "opt_debug.m"
        {
#line 413 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_28_28);
        }
#line 412 "opt_debug.m"
      }
#line 406 "opt_debug.m"
    else
#line 406 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 406 "opt_debug.m"
      {
#line 406 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 406 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__V_66_66)) == (MR_mktag((MR_Integer) 0))))
#line 406 "opt_debug.m"
          {
#line 406 "opt_debug.m"
            MR_Word ll_backend__opt_debug__RttiTypeCtor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_66_66, (MR_Integer) 0)));
#line 406 "opt_debug.m"
            MR_Word ll_backend__opt_debug__DataName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_66_66, (MR_Integer) 1)));
#line 406 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_7_7;
#line 406 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_8_8;
#line 406 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_9_9;
#line 406 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_11_11;
#line 406 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_12_12;

#line 407 "opt_debug.m"
            {
#line 407 "opt_debug.m"
              ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(ll_backend__opt_debug__RttiTypeCtor_3);
            }
#line 408 "opt_debug.m"
            {
#line 408 "opt_debug.m"
              ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_rtti_name_1_f_0(ll_backend__opt_debug__DataName_4);
            }
#line 408 "opt_debug.m"
            {
#line 408 "opt_debug.m"
              ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, (MR_String) ")");
            }
#line 408 "opt_debug.m"
            {
#line 408 "opt_debug.m"
              ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
            }
#line 407 "opt_debug.m"
            {
#line 407 "opt_debug.m"
              ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
            }
#line 407 "opt_debug.m"
            {
#line 407 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_id(", ll_backend__opt_debug__V_7_7);
            }
#line 406 "opt_debug.m"
          }
#line 406 "opt_debug.m"
        else
#line 409 "opt_debug.m"
          {
#line 409 "opt_debug.m"
            MR_Word ll_backend__opt_debug__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_66_66, (MR_Integer) 0)));
#line 409 "opt_debug.m"
            MR_Word ll_backend__opt_debug__TCDataName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_66_66, (MR_Integer) 1)));
#line 409 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_18_18;
#line 409 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_19_19;
#line 409 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_20_20;
#line 409 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_22_22;
#line 409 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_23_23;

#line 410 "opt_debug.m"
            {
#line 410 "opt_debug.m"
              ll_backend__opt_debug__V_19_19 = ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(ll_backend__opt_debug__TCName_14);
            }
#line 411 "opt_debug.m"
            {
#line 411 "opt_debug.m"
              ll_backend__opt_debug__V_23_23 = ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(ll_backend__opt_debug__TCDataName_15);
            }
#line 411 "opt_debug.m"
            {
#line 411 "opt_debug.m"
              ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, (MR_String) ")");
            }
#line 411 "opt_debug.m"
            {
#line 411 "opt_debug.m"
              ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_22_22);
            }
#line 410 "opt_debug.m"
            {
#line 410 "opt_debug.m"
              ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_19_19, ll_backend__opt_debug__V_20_20);
            }
#line 410 "opt_debug.m"
            {
#line 410 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "tc_rtti_id(", ll_backend__opt_debug__V_18_18);
            }
#line 409 "opt_debug.m"
          }
#line 406 "opt_debug.m"
      }
#line 406 "opt_debug.m"
    else
#line 406 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 414 "opt_debug.m"
      {
#line 414 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TypeNum_33;
#line 414 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Offset_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 414 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 414 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_37_37;
#line 414 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 414 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;
#line 414 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_41_41;
#line 414 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;

#line 414 "opt_debug.m"
        ll_backend__opt_debug__TypeNum_33 = (MR_Integer) ll_backend__opt_debug__V_35_35;
#line 415 "opt_debug.m"
        {
#line 415 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_33);
        }
#line 416 "opt_debug.m"
        {
#line 416 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_34);
        }
#line 416 "opt_debug.m"
        {
#line 416 "opt_debug.m"
          ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_42_42, (MR_String) ")");
        }
#line 416 "opt_debug.m"
        {
#line 416 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_41_41);
        }
#line 415 "opt_debug.m"
        {
#line 415 "opt_debug.m"
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
        }
#line 415 "opt_debug.m"
        {
#line 415 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "scalar_common_data_id(", ll_backend__opt_debug__V_37_37);
        }
#line 414 "opt_debug.m"
      }
#line 406 "opt_debug.m"
    else
#line 406 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 420 "opt_debug.m"
      {
#line 420 "opt_debug.m"
        MR_Word ll_backend__opt_debug__LayoutName_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 420 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_57_57;
#line 420 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_58_58;

#line 421 "opt_debug.m"
        {
#line 421 "opt_debug.m"
          ll_backend__opt_debug__V_58_58 = ll_backend__opt_debug__dump_layout_name_1_f_0(ll_backend__opt_debug__LayoutName_55);
        }
#line 421 "opt_debug.m"
        {
#line 421 "opt_debug.m"
          ll_backend__opt_debug__V_57_57 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_58_58, (MR_String) ")");
        }
#line 421 "opt_debug.m"
        {
#line 421 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "layout_id(", ll_backend__opt_debug__V_57_57);
        }
#line 420 "opt_debug.m"
      }
#line 406 "opt_debug.m"
    else
#line 406 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 422 "opt_debug.m"
      {
#line 422 "opt_debug.m"
        MR_Word ll_backend__opt_debug__PredProcId_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_63_63;
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_64_64;
#line 422 "opt_debug.m"
        MR_Word ll_backend__opt_debug__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_60, (MR_Integer) 0)));
#line 422 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_60, (MR_Integer) 1)));
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_70_70;
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_71_71;
#line 422 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__V_72_72;
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_73_73;
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_75_75;
#line 422 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_76_76;
#line 422 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__V_77_77;

#line 428 "opt_debug.m"
        {
#line 428 "opt_debug.m"
          ll_backend__opt_debug__V_72_72 = hlds__hlds_pred__pred_id_to_int_1_f_0(ll_backend__opt_debug__PredId_67);
        }
#line 428 "opt_debug.m"
        {
#line 428 "opt_debug.m"
          ll_backend__opt_debug__V_71_71 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_72_72);
        }
#line 429 "opt_debug.m"
        {
#line 429 "opt_debug.m"
          ll_backend__opt_debug__V_77_77 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__opt_debug__ProcId_68);
        }
#line 429 "opt_debug.m"
        {
#line 429 "opt_debug.m"
          ll_backend__opt_debug__V_76_76 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_77_77);
        }
#line 429 "opt_debug.m"
        {
#line 429 "opt_debug.m"
          ll_backend__opt_debug__V_75_75 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_76_76, (MR_String) ")");
        }
#line 428 "opt_debug.m"
        {
#line 428 "opt_debug.m"
          ll_backend__opt_debug__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_75_75);
        }
#line 428 "opt_debug.m"
        {
#line 428 "opt_debug.m"
          ll_backend__opt_debug__V_70_70 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_71_71, ll_backend__opt_debug__V_73_73);
        }
#line 428 "opt_debug.m"
        {
#line 428 "opt_debug.m"
          ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "proc(", ll_backend__opt_debug__V_70_70);
        }
#line 423 "opt_debug.m"
        {
#line 423 "opt_debug.m"
          ll_backend__opt_debug__V_63_63 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_64_64, (MR_String) ")");
        }
#line 423 "opt_debug.m"
        {
#line 423 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_entry_id(", ll_backend__opt_debug__V_63_63);
        }
#line 422 "opt_debug.m"
      }
#line 406 "opt_debug.m"
    else
#line 417 "opt_debug.m"
      {
#line 417 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TypeNum_44;
#line 417 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 417 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 417 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_48_48;
#line 417 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_49_49;
#line 417 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_50_50;
#line 417 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_52_52;
#line 417 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_53_53;

#line 417 "opt_debug.m"
        ll_backend__opt_debug__TypeNum_44 = (MR_Integer) ll_backend__opt_debug__V_46_46;
#line 418 "opt_debug.m"
        {
#line 418 "opt_debug.m"
          ll_backend__opt_debug__V_49_49 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_44);
        }
#line 419 "opt_debug.m"
        {
#line 419 "opt_debug.m"
          ll_backend__opt_debug__V_53_53 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_45);
        }
#line 419 "opt_debug.m"
        {
#line 419 "opt_debug.m"
          ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, (MR_String) ")");
        }
#line 419 "opt_debug.m"
        {
#line 419 "opt_debug.m"
          ll_backend__opt_debug__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_52_52);
        }
#line 418 "opt_debug.m"
        {
#line 418 "opt_debug.m"
          ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, ll_backend__opt_debug__V_50_50);
        }
#line 418 "opt_debug.m"
        {
#line 418 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_data_id(", ll_backend__opt_debug__V_48_48);
        }
#line 417 "opt_debug.m"
      }
#line 406 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 406 "opt_debug.m"
  }
#line 87 "opt_debug.m"
}

#line 85 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_const_2_f_0(
#line 85 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 85 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 85 "opt_debug.m"
{
#line 382 "opt_debug.m"
  {
#line 382 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 382 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 382 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 383 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "false";
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 382 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "true";
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 386 "opt_debug.m"
      {
#line 386 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_10_10;

#line 386 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__3_3 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 386 "opt_debug.m"
        ll_backend__opt_debug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 386 "opt_debug.m"
      }
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 384 "opt_debug.m"
      {
#line 384 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__I_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 385 "opt_debug.m"
        {
#line 385 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__I_7);
        }
#line 384 "opt_debug.m"
      }
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 393 "opt_debug.m"
      {
#line 393 "opt_debug.m"
        MR_Word ll_backend__opt_debug__CodeAddr_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 393 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 393 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_25_25;

#line 394 "opt_debug.m"
        {
#line 394 "opt_debug.m"
          ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__CodeAddr_22);
        }
#line 394 "opt_debug.m"
        {
#line 394 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
        }
#line 394 "opt_debug.m"
        {
#line 394 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "code_addr_const(", ll_backend__opt_debug__V_24_24);
        }
#line 393 "opt_debug.m"
      }
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 395 "opt_debug.m"
      {
#line 395 "opt_debug.m"
        MR_Word ll_backend__opt_debug__DataId_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeOffset_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 395 "opt_debug.m"
        MR_String ll_backend__opt_debug__DataIdStr_31;

#line 396 "opt_debug.m"
        {
#line 396 "opt_debug.m"
          ll_backend__opt_debug__DataIdStr_31 = ll_backend__opt_debug__dump_data_id_1_f_0(ll_backend__opt_debug__DataId_28);
        }
#line 400 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeOffset_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 398 "opt_debug.m"
          {
#line 398 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_41_41;

#line 399 "opt_debug.m"
            {
#line 399 "opt_debug.m"
              ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_31, (MR_String) ")");
            }
#line 399 "opt_debug.m"
            {
#line 399 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_41_41);
            }
#line 398 "opt_debug.m"
          }
#line 400 "opt_debug.m"
        else
#line 401 "opt_debug.m"
          {
#line 401 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__Offset_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_29, (MR_Integer) 0)));
#line 401 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_34_34;
#line 401 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_35_35;
#line 401 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_37_37;
#line 401 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_38_38;

#line 403 "opt_debug.m"
            {
#line 403 "opt_debug.m"
              ll_backend__opt_debug__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_32);
            }
#line 403 "opt_debug.m"
            {
#line 403 "opt_debug.m"
              ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, (MR_String) ")");
            }
#line 403 "opt_debug.m"
            {
#line 403 "opt_debug.m"
              ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_37_37);
            }
#line 402 "opt_debug.m"
            {
#line 402 "opt_debug.m"
              ll_backend__opt_debug__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_31, ll_backend__opt_debug__V_35_35);
            }
#line 402 "opt_debug.m"
            {
#line 402 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_34_34);
            }
#line 401 "opt_debug.m"
          }
#line 395 "opt_debug.m"
      }
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 387 "opt_debug.m"
      {
#line 387 "opt_debug.m"
        MR_Float ll_backend__opt_debug__F_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 388 "opt_debug.m"
        {
#line 388 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__float_to_string_1_f_0(ll_backend__opt_debug__F_12);
        }
#line 387 "opt_debug.m"
      }
#line 382 "opt_debug.m"
    else
#line 382 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 392 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "multi_string(...)";
#line 382 "opt_debug.m"
    else
#line 389 "opt_debug.m"
      {
#line 389 "opt_debug.m"
        MR_String ll_backend__opt_debug__S_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 389 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 389 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;

#line 390 "opt_debug.m"
        {
#line 390 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = backend_libs__c_util__quote_string_1_f_0(ll_backend__opt_debug__S_14);
        }
#line 390 "opt_debug.m"
        {
#line 390 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, (MR_String) "\"");
        }
#line 390 "opt_debug.m"
        {
#line 390 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__opt_debug__V_16_16);
        }
#line 389 "opt_debug.m"
      }
#line 382 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 382 "opt_debug.m"
  }
#line 85 "opt_debug.m"
}

#line 83 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_mem_ref_2_f_0(
#line 83 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 83 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 83 "opt_debug.m"
{
#line 367 "opt_debug.m"
  {
#line 367 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 367 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 367 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 369 "opt_debug.m"
      {
#line 369 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 369 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 369 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;

#line 370 "opt_debug.m"
        {
#line 370 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_11);
        }
#line 370 "opt_debug.m"
        {
#line 370 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, (MR_String) ")");
        }
#line 370 "opt_debug.m"
        {
#line 370 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "framevar_ref(", ll_backend__opt_debug__V_13_13);
        }
#line 369 "opt_debug.m"
      }
#line 367 "opt_debug.m"
    else
#line 367 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 371 "opt_debug.m"
      {
#line 371 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 371 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 371 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__TagString_22;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_25_25;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_26_26;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_29_29;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;
#line 371 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_32_32;

#line 375 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeTag_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 377 "opt_debug.m"
          ll_backend__opt_debug__TagString_22 = (MR_String) "unknown_tag";
#line 375 "opt_debug.m"
        else
#line 373 "opt_debug.m"
          {
#line 373 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__Tag_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_18, (MR_Integer) 0)));

#line 374 "opt_debug.m"
            {
#line 374 "opt_debug.m"
              ll_backend__opt_debug__TagString_22 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Tag_21);
            }
#line 373 "opt_debug.m"
          }
#line 379 "opt_debug.m"
        {
#line 379 "opt_debug.m"
          ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_17);
        }
#line 380 "opt_debug.m"
        {
#line 380 "opt_debug.m"
          ll_backend__opt_debug__V_32_32 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_19);
        }
#line 380 "opt_debug.m"
        {
#line 380 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, (MR_String) ")");
        }
#line 380 "opt_debug.m"
        {
#line 380 "opt_debug.m"
          ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_31_31);
        }
#line 380 "opt_debug.m"
        {
#line 380 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TagString_22, ll_backend__opt_debug__V_29_29);
        }
#line 379 "opt_debug.m"
        {
#line 379 "opt_debug.m"
          ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_28_28);
        }
#line 379 "opt_debug.m"
        {
#line 379 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, ll_backend__opt_debug__V_26_26);
        }
#line 379 "opt_debug.m"
        {
#line 379 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "heap_ref(", ll_backend__opt_debug__V_24_24);
        }
#line 371 "opt_debug.m"
      }
#line 367 "opt_debug.m"
    else
#line 367 "opt_debug.m"
      {
#line 367 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 367 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_7_7;
#line 367 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;

#line 368 "opt_debug.m"
        {
#line 368 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_5);
        }
#line 368 "opt_debug.m"
        {
#line 368 "opt_debug.m"
          ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, (MR_String) ")");
        }
#line 368 "opt_debug.m"
        {
#line 368 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar_ref(", ll_backend__opt_debug__V_7_7);
        }
#line 367 "opt_debug.m"
      }
#line 367 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 367 "opt_debug.m"
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
#line 362 "opt_debug.m"
  {
#line 362 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 362 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 362 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 362 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 362 "opt_debug.m"
    else
#line 363 "opt_debug.m"
      {
#line 363 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 363 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rvals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 363 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 363 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 363 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 364 "opt_debug.m"
        {
#line 364 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_6);
        }
#line 365 "opt_debug.m"
        {
#line 365 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_rvals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rvals_7);
        }
#line 364 "opt_debug.m"
        {
#line 364 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
        }
#line 364 "opt_debug.m"
        {
#line 364 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 363 "opt_debug.m"
      }
#line 362 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 362 "opt_debug.m"
  }
#line 81 "opt_debug.m"
}

#line 79 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rval_2_f_0(
#line 79 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 79 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 79 "opt_debug.m"
{
#line 332 "opt_debug.m"
  {
#line 332 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 332 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 332 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 332 "opt_debug.m"
      {
#line 332 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 333 "opt_debug.m"
        {
#line 333 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_5);
        }
#line 332 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 332 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 336 "opt_debug.m"
      {
#line 336 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__T_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 336 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 336 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;
#line 336 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_18_18;
#line 336 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_19_19;
#line 336 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 336 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;

#line 337 "opt_debug.m"
        {
#line 337 "opt_debug.m"
          ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_14);
        }
#line 338 "opt_debug.m"
        {
#line 338 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_15);
        }
#line 338 "opt_debug.m"
        {
#line 338 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
        }
#line 337 "opt_debug.m"
        {
#line 337 "opt_debug.m"
          ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_21_21);
        }
#line 337 "opt_debug.m"
        {
#line 337 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_18_18, ll_backend__opt_debug__V_19_19);
        }
#line 337 "opt_debug.m"
        {
#line 337 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mkword(", ll_backend__opt_debug__V_17_17);
        }
#line 336 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 332 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 334 "opt_debug.m"
      {
#line 334 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 334 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 334 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 334 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__V_11_11;

#line 335 "opt_debug.m"
        {
#line 335 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__opt_debug__Var_7);
        }
#line 335 "opt_debug.m"
        {
#line 335 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_11_11);
        }
#line 335 "opt_debug.m"
        {
#line 335 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, (MR_String) ")");
        }
#line 335 "opt_debug.m"
        {
#line 335 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "var(", ll_backend__opt_debug__V_9_9);
        }
#line 334 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 332 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 345 "opt_debug.m"
      {
#line 345 "opt_debug.m"
        MR_Word ll_backend__opt_debug__O_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 345 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N1_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 345 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 3)));

#line 347 "opt_debug.m"
        {
#line 347 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_45_45;
#line 347 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_46_46;
#line 347 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_47_47;

#line 347 "opt_debug.m"
          ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N1_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 347 "opt_debug.m"
          if (ll_backend__opt_debug__succeeded)
#line 347 "opt_debug.m"
            {
#line 347 "opt_debug.m"
              ll_backend__opt_debug__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 1)));
#line 347 "opt_debug.m"
              ll_backend__opt_debug__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 2)));
#line 347 "opt_debug.m"
              ll_backend__opt_debug__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 3)));
#line 347 "opt_debug.m"
            }
#line 347 "opt_debug.m"
        }
#line 348 "opt_debug.m"
        if (!(ll_backend__opt_debug__succeeded))
#line 348 "opt_debug.m"
          {
#line 348 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_48_48;
#line 348 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_49_49;
#line 348 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_50_50;

#line 348 "opt_debug.m"
            ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N2_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 348 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 348 "opt_debug.m"
              {
#line 348 "opt_debug.m"
                ll_backend__opt_debug__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 1)));
#line 348 "opt_debug.m"
                ll_backend__opt_debug__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 2)));
#line 348 "opt_debug.m"
                ll_backend__opt_debug__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 3)));
#line 348 "opt_debug.m"
              }
#line 348 "opt_debug.m"
          }
#line 345 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 351 "opt_debug.m"
          {
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_52_52;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_53_53;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_54_54;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_56_56;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_58_58;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_59_59;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_60_60;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_62_62;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_64_64;
#line 351 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_65_65;

#line 351 "opt_debug.m"
            {
#line 351 "opt_debug.m"
              ll_backend__opt_debug__V_53_53 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N1_43);
            }
#line 352 "opt_debug.m"
            {
#line 352 "opt_debug.m"
              ll_backend__opt_debug__V_59_59 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_42);
            }
#line 353 "opt_debug.m"
            {
#line 353 "opt_debug.m"
              ll_backend__opt_debug__V_65_65 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N2_44);
            }
#line 353 "opt_debug.m"
            {
#line 353 "opt_debug.m"
              ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_65_65, (MR_String) ")");
            }
#line 353 "opt_debug.m"
            {
#line 353 "opt_debug.m"
              ll_backend__opt_debug__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_64_64);
            }
#line 352 "opt_debug.m"
            {
#line 352 "opt_debug.m"
              ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_62_62);
            }
#line 352 "opt_debug.m"
            {
#line 352 "opt_debug.m"
              ll_backend__opt_debug__V_58_58 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_59_59, ll_backend__opt_debug__V_60_60);
            }
#line 352 "opt_debug.m"
            {
#line 352 "opt_debug.m"
              ll_backend__opt_debug__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_58_58);
            }
#line 351 "opt_debug.m"
            {
#line 351 "opt_debug.m"
              ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ")", ll_backend__opt_debug__V_56_56);
            }
#line 351 "opt_debug.m"
            {
#line 351 "opt_debug.m"
              ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, ll_backend__opt_debug__V_54_54);
            }
#line 351 "opt_debug.m"
            {
#line 351 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_52_52);
            }
#line 351 "opt_debug.m"
          }
#line 345 "opt_debug.m"
        else
#line 355 "opt_debug.m"
          {
#line 355 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_67_67;
#line 355 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_68_68;
#line 355 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_70_70;
#line 355 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_71_71;
#line 355 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_72_72;
#line 355 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_74_74;

#line 355 "opt_debug.m"
            {
#line 355 "opt_debug.m"
              ll_backend__opt_debug__V_67_67 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N1_43);
            }
#line 356 "opt_debug.m"
            {
#line 356 "opt_debug.m"
              ll_backend__opt_debug__V_71_71 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_42);
            }
#line 357 "opt_debug.m"
            {
#line 357 "opt_debug.m"
              ll_backend__opt_debug__V_74_74 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N2_44);
            }
#line 356 "opt_debug.m"
            {
#line 356 "opt_debug.m"
              ll_backend__opt_debug__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_74_74);
            }
#line 356 "opt_debug.m"
            {
#line 356 "opt_debug.m"
              ll_backend__opt_debug__V_70_70 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_71_71, ll_backend__opt_debug__V_72_72);
            }
#line 356 "opt_debug.m"
            {
#line 356 "opt_debug.m"
              ll_backend__opt_debug__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_70_70);
            }
#line 355 "opt_debug.m"
            {
#line 355 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_67_67, ll_backend__opt_debug__V_68_68);
            }
#line 355 "opt_debug.m"
          }
#line 345 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 332 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 341 "opt_debug.m"
      {
#line 341 "opt_debug.m"
        MR_Word ll_backend__opt_debug__C_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 342 "opt_debug.m"
        {
#line 342 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_const_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__C_31);
        }
#line 341 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 332 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 359 "opt_debug.m"
      {
#line 359 "opt_debug.m"
        MR_Word ll_backend__opt_debug__M_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 359 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_78_78;
#line 359 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_79_79;

#line 360 "opt_debug.m"
        {
#line 360 "opt_debug.m"
          ll_backend__opt_debug__V_79_79 = ll_backend__opt_debug__dump_mem_ref_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__M_76);
        }
#line 360 "opt_debug.m"
        {
#line 360 "opt_debug.m"
          ll_backend__opt_debug__V_78_78 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_79_79, (MR_String) ")");
        }
#line 360 "opt_debug.m"
        {
#line 360 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mem_addr(", ll_backend__opt_debug__V_78_78);
        }
#line 359 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 332 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 339 "opt_debug.m"
      {
#line 339 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__T_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 339 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;
#line 339 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;

#line 340 "opt_debug.m"
        {
#line 340 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_25);
        }
#line 340 "opt_debug.m"
        {
#line 340 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_28_28, (MR_String) ")");
        }
#line 340 "opt_debug.m"
        {
#line 340 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mkword_hole(", ll_backend__opt_debug__V_27_27);
        }
#line 339 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    else
#line 343 "opt_debug.m"
      {
#line 343 "opt_debug.m"
        MR_Word ll_backend__opt_debug__O_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 343 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 343 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_35_35;
#line 343 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_36_36;
#line 343 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 343 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;

#line 344 "opt_debug.m"
        {
#line 344 "opt_debug.m"
          ll_backend__opt_debug__V_35_35 = ll_backend__opt_debug__dump_unop_1_f_0(ll_backend__opt_debug__O_33);
        }
#line 344 "opt_debug.m"
        {
#line 344 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_34);
        }
#line 344 "opt_debug.m"
        {
#line 344 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_39_39, (MR_String) ")");
        }
#line 344 "opt_debug.m"
        {
#line 344 "opt_debug.m"
          ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_38_38);
        }
#line 344 "opt_debug.m"
        {
#line 344 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_35_35, ll_backend__opt_debug__V_36_36);
        }
#line 343 "opt_debug.m"
      }
#line 332 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 332 "opt_debug.m"
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
#line 322 "opt_debug.m"
  {
#line 322 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 322 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 323 "opt_debug.m"
    {
#line 323 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Lvals_5, (MR_String) "");
    }
#line 322 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 322 "opt_debug.m"
  }
#line 77 "opt_debug.m"
}

#line 75 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_lval_2_f_0(
#line 75 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 75 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 75 "opt_debug.m"
{
#line 271 "opt_debug.m"
  {
#line 271 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 271 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 271 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 290 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "curfr";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 301 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "hp";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 289 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "maxfr";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 303 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "parent_sp";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 302 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "sp";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 288 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "succip";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 271 "opt_debug.m"
      {
#line 271 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 271 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 272 "opt_debug.m"
        {
#line 272 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_5, ll_backend__opt_debug__Num_6);
        }
#line 271 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 315 "opt_debug.m"
      {
#line 315 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Type_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 315 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Num_94 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 315 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_96_96;

#line 316 "opt_debug.m"
        {
#line 316 "opt_debug.m"
          ll_backend__opt_debug__V_96_96 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_93, ll_backend__opt_debug__Num_94);
        }
#line 316 "opt_debug.m"
        {
#line 316 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "temp_", ll_backend__opt_debug__V_96_96);
        }
#line 315 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 279 "opt_debug.m"
      {
#line 279 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 279 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__Macro_23;
#line 279 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__V_33_33;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_109_109;
#line 279 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_115_115;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_116_116;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_123_123;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_125_125;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_126_126;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_133_133;
#line 279 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_134_134;

#line 283 "opt_debug.m"
        if ((ll_backend__opt_debug__Type_20 == (MR_Integer) 1))
#line 285 "opt_debug.m"
          ll_backend__opt_debug__Macro_23 = (MR_String) "parent_sv";
#line 283 "opt_debug.m"
        else
#line 282 "opt_debug.m"
          ll_backend__opt_debug__Macro_23 = (MR_String) "sv";
#line 287 "opt_debug.m"
        ll_backend__opt_debug__V_33_33 = (ll_backend__opt_debug__N_21 + (MR_Integer) 1);
#line 9104 "ll_backend.opt_debug.c"
        ll_backend__opt_debug__V_115_115 = (MR_Word) &ll_backend__opt_debug_scalar_common_4[0];
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_115_115, ll_backend__opt_debug__V_33_33, &ll_backend__opt_debug__V_109_109);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_115_115, ll_backend__opt_debug__Macro_23, &ll_backend__opt_debug__V_116_116);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          ll_backend__opt_debug__V_123_123 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_116_116, ll_backend__opt_debug__V_109_109);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          ll_backend__opt_debug__V_125_125 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_123_123);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_115_115, ll_backend__opt_debug__N_21, &ll_backend__opt_debug__V_126_126);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          ll_backend__opt_debug__V_133_133 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_126_126, ll_backend__opt_debug__V_125_125);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          mercury__string__format__format_string_component_nowidth_noprec_3_p_0(ll_backend__opt_debug__V_115_115, ll_backend__opt_debug__Macro_23, &ll_backend__opt_debug__V_134_134);
        }
#line 287 "opt_debug.m"
        {
#line 287 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_134_134, ll_backend__opt_debug__V_133_133);
        }
#line 279 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 304 "opt_debug.m"
      {
#line 304 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MT_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 304 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 304 "opt_debug.m"
        MR_Word ll_backend__opt_debug__F_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 3)));
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__T_str_78;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_80_80;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_81_81;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_83_83;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_84_84;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_85_85;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_87_87;
#line 304 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_88_88;

#line 308 "opt_debug.m"
        if ((ll_backend__opt_debug__MT_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 310 "opt_debug.m"
          ll_backend__opt_debug__T_str_78 = (MR_String) "no";
#line 308 "opt_debug.m"
        else
#line 306 "opt_debug.m"
          {
#line 306 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__T_77 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MT_73, (MR_Integer) 0)));

#line 307 "opt_debug.m"
            {
#line 307 "opt_debug.m"
              mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__T_77, &ll_backend__opt_debug__T_str_78);
            }
#line 306 "opt_debug.m"
          }
#line 312 "opt_debug.m"
        {
#line 312 "opt_debug.m"
          ll_backend__opt_debug__V_84_84 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_74);
        }
#line 313 "opt_debug.m"
        {
#line 313 "opt_debug.m"
          ll_backend__opt_debug__V_88_88 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__F_75);
        }
#line 313 "opt_debug.m"
        {
#line 313 "opt_debug.m"
          ll_backend__opt_debug__V_87_87 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_88_88, (MR_String) ")");
        }
#line 313 "opt_debug.m"
        {
#line 313 "opt_debug.m"
          ll_backend__opt_debug__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_87_87);
        }
#line 312 "opt_debug.m"
        {
#line 312 "opt_debug.m"
          ll_backend__opt_debug__V_83_83 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_84_84, ll_backend__opt_debug__V_85_85);
        }
#line 312 "opt_debug.m"
        {
#line 312 "opt_debug.m"
          ll_backend__opt_debug__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_83_83);
        }
#line 312 "opt_debug.m"
        {
#line 312 "opt_debug.m"
          ll_backend__opt_debug__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_78, ll_backend__opt_debug__V_81_81);
        }
#line 312 "opt_debug.m"
        {
#line 312 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "field(", ll_backend__opt_debug__V_80_80);
        }
#line 304 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 277 "opt_debug.m"
      {
#line 277 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 277 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_18_18;

#line 278 "opt_debug.m"
        {
#line 278 "opt_debug.m"
          ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_16);
        }
#line 278 "opt_debug.m"
        {
#line 278 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "fv", ll_backend__opt_debug__V_18_18);
        }
#line 277 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 319 "opt_debug.m"
      {
#line 319 "opt_debug.m"
        MR_String ll_backend__opt_debug__VarName_104;
#line 319 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 319 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_107_107;

#line 319 "opt_debug.m"
        ll_backend__opt_debug__VarName_104 = (MR_String) ll_backend__opt_debug__V_105_105;
#line 320 "opt_debug.m"
        {
#line 320 "opt_debug.m"
          ll_backend__opt_debug__V_107_107 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_104, (MR_String) "))");
        }
#line 320 "opt_debug.m"
        {
#line 320 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "global_var_ref(env_var_ref(", ll_backend__opt_debug__V_107_107);
        }
#line 319 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 314 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "lvar(_)";
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 317 "opt_debug.m"
      {
#line 317 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 317 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_100_100;
#line 317 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_101_101;

#line 318 "opt_debug.m"
        {
#line 318 "opt_debug.m"
          ll_backend__opt_debug__V_101_101 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_98);
        }
#line 318 "opt_debug.m"
        {
#line 318 "opt_debug.m"
          ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
        }
#line 318 "opt_debug.m"
        {
#line 318 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mem_ref(", ll_backend__opt_debug__V_100_100);
        }
#line 317 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 275 "opt_debug.m"
      {
#line 275 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 275 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;

#line 276 "opt_debug.m"
        {
#line 276 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_12);
        }
#line 276 "opt_debug.m"
        {
#line 276 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "parent_sv", ll_backend__opt_debug__V_14_14);
        }
#line 275 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 293 "opt_debug.m"
      {
#line 293 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_48_48;
#line 293 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_49_49;

#line 294 "opt_debug.m"
        {
#line 294 "opt_debug.m"
          ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_46);
        }
#line 294 "opt_debug.m"
        {
#line 294 "opt_debug.m"
          ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) ")");
        }
#line 294 "opt_debug.m"
        {
#line 294 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "prevfr_slot(", ll_backend__opt_debug__V_48_48);
        }
#line 293 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 295 "opt_debug.m"
      {
#line 295 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 295 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_54_54;
#line 295 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_55_55;

#line 296 "opt_debug.m"
        {
#line 296 "opt_debug.m"
          ll_backend__opt_debug__V_55_55 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_52);
        }
#line 296 "opt_debug.m"
        {
#line 296 "opt_debug.m"
          ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_55_55, (MR_String) ")");
        }
#line 296 "opt_debug.m"
        {
#line 296 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "redofr_slot(", ll_backend__opt_debug__V_54_54);
        }
#line 295 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 297 "opt_debug.m"
      {
#line 297 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 297 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_60_60;
#line 297 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_61_61;

#line 298 "opt_debug.m"
        {
#line 298 "opt_debug.m"
          ll_backend__opt_debug__V_61_61 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_58);
        }
#line 298 "opt_debug.m"
        {
#line 298 "opt_debug.m"
          ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_61_61, (MR_String) ")");
        }
#line 298 "opt_debug.m"
        {
#line 298 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "redoip_slot(", ll_backend__opt_debug__V_60_60);
        }
#line 297 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 273 "opt_debug.m"
      {
#line 273 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 273 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;

#line 274 "opt_debug.m"
        {
#line 274 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_8);
        }
#line 274 "opt_debug.m"
        {
#line 274 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "sv", ll_backend__opt_debug__V_10_10);
        }
#line 273 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 271 "opt_debug.m"
    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 291 "opt_debug.m"
      {
#line 291 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 291 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;
#line 291 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_43_43;

#line 292 "opt_debug.m"
        {
#line 292 "opt_debug.m"
          ll_backend__opt_debug__V_43_43 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_40);
        }
#line 292 "opt_debug.m"
        {
#line 292 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_43_43, (MR_String) ")");
        }
#line 292 "opt_debug.m"
        {
#line 292 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "succfr_slot(", ll_backend__opt_debug__V_42_42);
        }
#line 291 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    else
#line 299 "opt_debug.m"
      {
#line 299 "opt_debug.m"
        MR_Word ll_backend__opt_debug__R_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_66_66;
#line 299 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_67_67;

#line 300 "opt_debug.m"
        {
#line 300 "opt_debug.m"
          ll_backend__opt_debug__V_67_67 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_64);
        }
#line 300 "opt_debug.m"
        {
#line 300 "opt_debug.m"
          ll_backend__opt_debug__V_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_67_67, (MR_String) ")");
        }
#line 300 "opt_debug.m"
        {
#line 300 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "succip_slot(", ll_backend__opt_debug__V_66_66);
        }
#line 299 "opt_debug.m"
      }
#line 271 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 271 "opt_debug.m"
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
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 1))
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
    else
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
#line 323 "opt_debug.m"
    {
#line 323 "opt_debug.m"
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
#line 323 "opt_debug.m"
        {
#line 323 "opt_debug.m"
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
    if ((ll_backend__opt_debug__OptDebug_7 == (MR_Integer) 0))
#line 184 "opt_debug.m"
      {
#line 184 "opt_debug.m"
      }
#line 181 "opt_debug.m"
    else
#line 182 "opt_debug.m"
      {
#line 182 "opt_debug.m"
        ll_backend__opt_debug__write_instrs_5_p_0(ll_backend__opt_debug__Instrs_10, ll_backend__opt_debug__MaybeProcLabel_9, ll_backend__opt_debug__AutoComments_8);
#line 182 "opt_debug.m"
        return;
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
    if ((ll_backend__opt_debug__OptDebug_6 == (MR_Integer) 0))
#line 176 "opt_debug.m"
      {
#line 176 "opt_debug.m"
      }
#line 165 "opt_debug.m"
    else
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
