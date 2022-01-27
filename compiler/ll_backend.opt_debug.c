/*
** Automatically generated from `opt_debug.m'
** by the Mercury compiler,
** version 14.01-beta-2014-02-06, configured for x86_64-apple-darwin13.0.0.
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
#include "tree_bitset.mih"
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
#include "ll_backend.llds_out.llds_out_code_addr.mih"
#include "ll_backend.llds_out.llds_out_util.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 1235 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
#line 1235 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1235 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1227 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
#line 1227 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1227 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1219 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
#line 1219 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1188 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
#line 1188 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1188 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1177 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
#line 1177 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1172 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
#line 1172 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1167 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
#line 1167 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1162 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
#line 1162 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_1,
#line 1162 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2);

#line 1156 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
#line 1156 "opt_debug.m"
  MR_String ll_backend__opt_debug__HeadVar__1_1,
#line 1156 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 1156 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3);

#line 1151 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
#line 1151 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1);

#line 1137 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
#line 1137 "opt_debug.m"
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3);

#line 783 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
#line 783 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiProcLabel_3);

#line 324 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
#line 324 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 324 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 324 "opt_debug.m"
  MR_String ll_backend__opt_debug__Prefix_3);

#line 240 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
#line 240 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4,
#line 240 "opt_debug.m"
  MR_String ll_backend__opt_debug__STATE_VARIABLE_Str_0_6,
#line 240 "opt_debug.m"
  MR_String * ll_backend__opt_debug__STATE_VARIABLE_Str_7);

#line 231 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
#line 231 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4);

#line 520 "opt_debug.m"
static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
#line 520 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 520 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1);

#line 215 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
#line 215 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 215 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 215 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 215 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3);

#line 193 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
#line 193 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 193 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 193 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 193 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3);


static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_1[1][2];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_2[2][6];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_3[3][3];

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][5];




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
    ((MR_Box) (&ll_backend__opt_debug_scalar_common_4[0])),
    ((MR_Box) (ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box ll_backend__opt_debug_scalar_common_4[1][5] = {
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



#line 1235 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_output_components_2_f_0(
#line 1235 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1235 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1235 "opt_debug.m"
{
#line 1238 "opt_debug.m"
  {
#line 1238 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1238 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1238 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1238 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1238 "opt_debug.m"
    else
#line 1239 "opt_debug.m"
      {
#line 1239 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1239 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1239 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
#line 1239 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__Var_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 1239 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
#line 1253 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

#line 1254 "opt_debug.m"
        {
#line 1254 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_13);
        }
#line 1259 "opt_debug.m"
        if ((ll_backend__opt_debug__Dummy_15 == (MR_Integer) 0))
#line 1260 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = (MR_String) " (dummy)";
#line 1259 "opt_debug.m"
        else
#line 1259 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = (MR_String) "";
#line 1254 "opt_debug.m"
        {
#line 1254 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_17, ll_backend__opt_debug__V_24_24);
        }
#line 1254 "opt_debug.m"
        {
#line 1254 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_23_23);
        }
#line 1253 "opt_debug.m"
        {
#line 1253 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, ll_backend__opt_debug__V_21_21);
        }
#line 1240 "opt_debug.m"
        {
#line 1240 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
#line 1240 "opt_debug.m"
        {
#line 1240 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
#line 1239 "opt_debug.m"
        {
#line 1239 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1239 "opt_debug.m"
      }
#line 1238 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1238 "opt_debug.m"
  }
#line 1235 "opt_debug.m"
}

#line 1227 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_input_components_2_f_0(
#line 1227 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1227 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1227 "opt_debug.m"
{
#line 1230 "opt_debug.m"
  {
#line 1230 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1230 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1230 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1230 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1230 "opt_debug.m"
    else
#line 1231 "opt_debug.m"
      {
#line 1231 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Input_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1231 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Inputs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__Var_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 0)));
#line 1231 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Dummy_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 2)));
#line 1231 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 4)));
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_21_21;
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 1231 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 1)));
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 3)));
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 5)));
#line 1246 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Input_6, (MR_Integer) 6)));

#line 1259 "opt_debug.m"
        if ((ll_backend__opt_debug__Dummy_15 == (MR_Integer) 0))
#line 1260 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = (MR_String) " (dummy)";
#line 1259 "opt_debug.m"
        else
#line 1259 "opt_debug.m"
          ll_backend__opt_debug__V_21_21 = (MR_String) "";
#line 1247 "opt_debug.m"
        {
#line 1247 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_17);
        }
#line 1247 "opt_debug.m"
        {
#line 1247 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_24_24);
        }
#line 1247 "opt_debug.m"
        {
#line 1247 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_21_21, ll_backend__opt_debug__V_22_22);
        }
#line 1246 "opt_debug.m"
        {
#line 1246 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Var_13, ll_backend__opt_debug__V_20_20);
        }
#line 1232 "opt_debug.m"
        {
#line 1232 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_7);
        }
#line 1232 "opt_debug.m"
        {
#line 1232 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_11_11);
        }
#line 1231 "opt_debug.m"
        {
#line 1231 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1231 "opt_debug.m"
      }
#line 1230 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1230 "opt_debug.m"
  }
#line 1227 "opt_debug.m"
}

#line 1219 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_affects_liveness_1_f_0(
#line 1219 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1219 "opt_debug.m"
{
#line 1221 "opt_debug.m"
  {
#line 1221 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1221 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1221 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 1221 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "affects_liveness";
#line 1221 "opt_debug.m"
    else
#line 1221 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 2))
#line 1224 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "default_affects_liveness";
#line 1221 "opt_debug.m"
      else
#line 1222 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "does_not_affect_liveness";
#line 1221 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1221 "opt_debug.m"
  }
#line 1219 "opt_debug.m"
}

#line 1188 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_components_2_f_0(
#line 1188 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 1188 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1188 "opt_debug.m"
{
#line 1191 "opt_debug.m"
  {
#line 1191 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1191 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1191 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1191 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 1191 "opt_debug.m"
    else
#line 1192 "opt_debug.m"
      {
#line 1192 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comp_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 1192 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Comps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 1192 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 1192 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;

#line 1198 "opt_debug.m"
        if ((ll_backend__opt_debug__Comp_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1217 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = (MR_String) "";
#line 1198 "opt_debug.m"
        else
#line 1198 "opt_debug.m"
          if (((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 1))))
#line 1198 "opt_debug.m"
            {
#line 1198 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Inputs_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

#line 1198 "opt_debug.m"
              {
#line 1198 "opt_debug.m"
                ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_input_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Inputs_11);
              }
#line 1198 "opt_debug.m"
            }
#line 1198 "opt_debug.m"
          else
#line 1198 "opt_debug.m"
            if (((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 2))))
#line 1200 "opt_debug.m"
              {
#line 1200 "opt_debug.m"
                MR_Word ll_backend__opt_debug__Outputs_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)));

#line 1200 "opt_debug.m"
                {
#line 1200 "opt_debug.m"
                  ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_output_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Outputs_13);
                }
#line 1200 "opt_debug.m"
              }
#line 1198 "opt_debug.m"
            else
#line 1198 "opt_debug.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1216 "opt_debug.m"
                ll_backend__opt_debug__V_8_8 = (MR_String) "<alloc_id>";
#line 1198 "opt_debug.m"
              else
#line 1198 "opt_debug.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1214 "opt_debug.m"
                  {
#line 1214 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__Label_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
#line 1214 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_48_48;
#line 1214 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_49_49;

#line 1215 "opt_debug.m"
                    {
#line 1215 "opt_debug.m"
                      ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_46);
                    }
#line 1215 "opt_debug.m"
                    {
#line 1215 "opt_debug.m"
                      ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) "\n");
                    }
#line 1214 "opt_debug.m"
                    {
#line 1214 "opt_debug.m"
                      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "fail to ", ll_backend__opt_debug__V_48_48);
                    }
#line 1214 "opt_debug.m"
                  }
#line 1198 "opt_debug.m"
                else
#line 1198 "opt_debug.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__Comp_6)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1208 "opt_debug.m"
                    {
#line 1208 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__AL_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
#line 1208 "opt_debug.m"
                      MR_String ll_backend__opt_debug__Code_33 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 4)));
#line 1208 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));
#line 1208 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));

#line 1209 "opt_debug.m"
                      ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_33, (MR_String) "") == 0);
#line 1208 "opt_debug.m"
                      if (ll_backend__opt_debug__succeeded)
#line 1210 "opt_debug.m"
                        {
#line 1210 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_35_35;
#line 1210 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_36_36;

#line 1221 "opt_debug.m"
                          if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 0))
#line 1221 "opt_debug.m"
                            ll_backend__opt_debug__V_36_36 = (MR_String) "affects_liveness";
#line 1221 "opt_debug.m"
                          else
#line 1221 "opt_debug.m"
                            if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 2))
#line 1224 "opt_debug.m"
                              ll_backend__opt_debug__V_36_36 = (MR_String) "default_affects_liveness";
#line 1221 "opt_debug.m"
                            else
#line 1222 "opt_debug.m"
                              ll_backend__opt_debug__V_36_36 = (MR_String) "does_not_affect_liveness";
#line 1210 "opt_debug.m"
                          {
#line 1210 "opt_debug.m"
                            ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_36_36, (MR_String) "\n");
                          }
#line 1208 "opt_debug.m"
                          {
#line 1208 "opt_debug.m"
                            ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty raw_code: ", ll_backend__opt_debug__V_35_35);
                          }
#line 1210 "opt_debug.m"
                        }
#line 1208 "opt_debug.m"
                      else
#line 1212 "opt_debug.m"
                        {
#line 1212 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_39_39;
#line 1212 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_40_40;
#line 1212 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_41_41;
#line 1212 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_43_43;

#line 1221 "opt_debug.m"
                          if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 0))
#line 1221 "opt_debug.m"
                            ll_backend__opt_debug__V_40_40 = (MR_String) "affects_liveness";
#line 1221 "opt_debug.m"
                          else
#line 1221 "opt_debug.m"
                            if ((ll_backend__opt_debug__AL_31 == (MR_Integer) 2))
#line 1224 "opt_debug.m"
                              ll_backend__opt_debug__V_40_40 = (MR_String) "default_affects_liveness";
#line 1221 "opt_debug.m"
                            else
#line 1222 "opt_debug.m"
                              ll_backend__opt_debug__V_40_40 = (MR_String) "does_not_affect_liveness";
#line 1212 "opt_debug.m"
                          {
#line 1212 "opt_debug.m"
                            ll_backend__opt_debug__V_43_43 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_33, (MR_String) "\n");
                          }
#line 1212 "opt_debug.m"
                          {
#line 1212 "opt_debug.m"
                            ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_43_43);
                          }
#line 1212 "opt_debug.m"
                          {
#line 1212 "opt_debug.m"
                            ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, ll_backend__opt_debug__V_41_41);
                          }
#line 1208 "opt_debug.m"
                          {
#line 1208 "opt_debug.m"
                            ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "raw_code:\n", ll_backend__opt_debug__V_39_39);
                          }
#line 1212 "opt_debug.m"
                        }
#line 1208 "opt_debug.m"
                    }
#line 1198 "opt_debug.m"
                  else
#line 1202 "opt_debug.m"
                    {
#line 1202 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__AL_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 2)));
#line 1202 "opt_debug.m"
                      MR_String ll_backend__opt_debug__Code_17 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 3)));
#line 1202 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Comp_6, (MR_Integer) 1)));

#line 1203 "opt_debug.m"
                      ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Code_17, (MR_String) "") == 0);
#line 1202 "opt_debug.m"
                      if (ll_backend__opt_debug__succeeded)
#line 1204 "opt_debug.m"
                        {
#line 1204 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_19_19;
#line 1204 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_20_20;

#line 1221 "opt_debug.m"
                          if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 0))
#line 1221 "opt_debug.m"
                            ll_backend__opt_debug__V_20_20 = (MR_String) "affects_liveness";
#line 1221 "opt_debug.m"
                          else
#line 1221 "opt_debug.m"
                            if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 2))
#line 1224 "opt_debug.m"
                              ll_backend__opt_debug__V_20_20 = (MR_String) "default_affects_liveness";
#line 1221 "opt_debug.m"
                            else
#line 1222 "opt_debug.m"
                              ll_backend__opt_debug__V_20_20 = (MR_String) "does_not_affect_liveness";
#line 1204 "opt_debug.m"
                          {
#line 1204 "opt_debug.m"
                            ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_20_20, (MR_String) "\n");
                          }
#line 1202 "opt_debug.m"
                          {
#line 1202 "opt_debug.m"
                            ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "empty user_code: ", ll_backend__opt_debug__V_19_19);
                          }
#line 1204 "opt_debug.m"
                        }
#line 1202 "opt_debug.m"
                      else
#line 1206 "opt_debug.m"
                        {
#line 1206 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_23_23;
#line 1206 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_24_24;
#line 1206 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_25_25;
#line 1206 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_27_27;

#line 1221 "opt_debug.m"
                          if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 0))
#line 1221 "opt_debug.m"
                            ll_backend__opt_debug__V_24_24 = (MR_String) "affects_liveness";
#line 1221 "opt_debug.m"
                          else
#line 1221 "opt_debug.m"
                            if ((ll_backend__opt_debug__AL_16 == (MR_Integer) 2))
#line 1224 "opt_debug.m"
                              ll_backend__opt_debug__V_24_24 = (MR_String) "default_affects_liveness";
#line 1221 "opt_debug.m"
                            else
#line 1222 "opt_debug.m"
                              ll_backend__opt_debug__V_24_24 = (MR_String) "does_not_affect_liveness";
#line 1206 "opt_debug.m"
                          {
#line 1206 "opt_debug.m"
                            ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_17, (MR_String) "\n");
                          }
#line 1206 "opt_debug.m"
                          {
#line 1206 "opt_debug.m"
                            ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_27_27);
                          }
#line 1206 "opt_debug.m"
                          {
#line 1206 "opt_debug.m"
                            ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, ll_backend__opt_debug__V_25_25);
                          }
#line 1202 "opt_debug.m"
                          {
#line 1202 "opt_debug.m"
                            ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "user_code: ", ll_backend__opt_debug__V_23_23);
                          }
#line 1206 "opt_debug.m"
                        }
#line 1202 "opt_debug.m"
                    }
#line 1193 "opt_debug.m"
        {
#line 1193 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Comps_7);
        }
#line 1192 "opt_debug.m"
        {
#line 1192 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 1192 "opt_debug.m"
      }
#line 1191 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1191 "opt_debug.m"
  }
#line 1188 "opt_debug.m"
}

#line 1177 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_decls_1_f_0(
#line 1177 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1177 "opt_debug.m"
{
#line 1179 "opt_debug.m"
  {
#line 1179 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1179 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1179 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1179 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
#line 1179 "opt_debug.m"
    else
#line 1180 "opt_debug.m"
      {
#line 1180 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decl_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 1180 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Decls_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_5_5;
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__TypeStr_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 1)));
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__VarName_9 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 2)));
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 1180 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 1185 "opt_debug.m"
        MR_Word ll_backend__opt_debug___MerType_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Decl_3, (MR_Integer) 0)));

#line 1186 "opt_debug.m"
        {
#line 1186 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_9, (MR_String) "\n");
        }
#line 1186 "opt_debug.m"
        {
#line 1186 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_14_14);
        }
#line 1186 "opt_debug.m"
        {
#line 1186 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypeStr_8, ll_backend__opt_debug__V_12_12);
        }
#line 1185 "opt_debug.m"
        {
#line 1185 "opt_debug.m"
          ll_backend__opt_debug__V_5_5 = mercury__string__f_43_43_2_f_0((MR_String) "decl ", ll_backend__opt_debug__V_11_11);
        }
#line 1181 "opt_debug.m"
        {
#line 1181 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_4);
        }
#line 1180 "opt_debug.m"
        {
#line 1180 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_5_5, ll_backend__opt_debug__V_6_6);
        }
#line 1180 "opt_debug.m"
      }
#line 1179 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1179 "opt_debug.m"
  }
#line 1177 "opt_debug.m"
}

#line 1172 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_use_atomic_1_f_0(
#line 1172 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1172 "opt_debug.m"
{
#line 1174 "opt_debug.m"
  {
#line 1174 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1174 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1174 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 1))
#line 1175 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_use_atomic_alloc";
#line 1174 "opt_debug.m"
    else
#line 1174 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_use_atomic_alloc";
#line 1174 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1174 "opt_debug.m"
  }
#line 1172 "opt_debug.m"
}

#line 1167 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_duplicate_1_f_0(
#line 1167 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1167 "opt_debug.m"
{
#line 1169 "opt_debug.m"
  {
#line 1169 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1169 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1169 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 1169 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_duplicate";
#line 1169 "opt_debug.m"
    else
#line 1170 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_not_duplicate";
#line 1169 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1169 "opt_debug.m"
  }
#line 1167 "opt_debug.m"
}

#line 1162 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_bool_msg_2_f_0(
#line 1162 "opt_debug.m"
  MR_String ll_backend__opt_debug__Msg_1,
#line 1162 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2)
#line 1162 "opt_debug.m"
{
#line 1164 "opt_debug.m"
  {
#line 1164 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1164 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 1164 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == (MR_Integer) 0))
#line 1164 "opt_debug.m"
      {
#line 1164 "opt_debug.m"
        {
#line 1164 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " no\n");
        }
#line 1164 "opt_debug.m"
      }
#line 1164 "opt_debug.m"
    else
#line 1165 "opt_debug.m"
      {
#line 1165 "opt_debug.m"
        {
#line 1165 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Msg_1, (MR_String) " yes\n");
        }
#line 1165 "opt_debug.m"
      }
#line 1164 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 1164 "opt_debug.m"
  }
#line 1162 "opt_debug.m"
}

#line 1156 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_maybe_label_3_f_0(
#line 1156 "opt_debug.m"
  MR_String ll_backend__opt_debug__HeadVar__1_1,
#line 1156 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 1156 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__3_3)
#line 1156 "opt_debug.m"
{
#line 1158 "opt_debug.m"
  {
#line 1158 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1158 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 1158 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1158 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 1158 "opt_debug.m"
    else
#line 1159 "opt_debug.m"
      {
#line 1159 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1159 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1159 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 1159 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1160 "opt_debug.m"
        {
#line 1160 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Label_9);
        }
#line 1160 "opt_debug.m"
        {
#line 1160 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, (MR_String) "\n");
        }
#line 1160 "opt_debug.m"
        {
#line 1160 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_12_12);
        }
#line 1159 "opt_debug.m"
        {
#line 1159 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__V_10_10);
        }
#line 1159 "opt_debug.m"
      }
#line 1158 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 1158 "opt_debug.m"
  }
#line 1156 "opt_debug.m"
}

#line 1151 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_may_call_mercury_1_f_0(
#line 1151 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__1_1)
#line 1151 "opt_debug.m"
{
#line 1153 "opt_debug.m"
  {
#line 1153 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1153 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 1153 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 1153 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "may_call_mercury";
#line 1153 "opt_debug.m"
    else
#line 1154 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "will_not_call_mercury";
#line 1153 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 1153 "opt_debug.m"
  }
#line 1151 "opt_debug.m"
}

#line 1137 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(
#line 1137 "opt_debug.m"
  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_3)
#line 1137 "opt_debug.m"
{
#line 1139 "opt_debug.m"
  {
#line 1139 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1139 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;
#line 1139 "opt_debug.m"
    MR_Word ll_backend__opt_debug__StackId_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 0)));
#line 1139 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__FirstSlot_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 1)));
#line 1139 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__LastSlot_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__EmbeddedStackFrame_3, (MR_Integer) 2)));

#line 1145 "opt_debug.m"
    if ((ll_backend__opt_debug__StackId_5 == (MR_Integer) 0))
#line 1142 "opt_debug.m"
      {
#line 1142 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 1142 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 1142 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;
#line 1142 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_19_19;

#line 1144 "opt_debug.m"
        {
#line 1144 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
        }
#line 1144 "opt_debug.m"
        {
#line 1144 "opt_debug.m"
          ll_backend__opt_debug__V_19_19 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
        }
#line 1144 "opt_debug.m"
        {
#line 1144 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_19_19);
        }
#line 1143 "opt_debug.m"
        {
#line 1143 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
        }
#line 1143 "opt_debug.m"
        {
#line 1143 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "detstack slots ", ll_backend__opt_debug__V_15_15);
        }
#line 1142 "opt_debug.m"
      }
#line 1145 "opt_debug.m"
    else
#line 1146 "opt_debug.m"
      {
#line 1146 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 1146 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1146 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1146 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1148 "opt_debug.m"
        {
#line 1148 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FirstSlot_6);
        }
#line 1148 "opt_debug.m"
        {
#line 1148 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__LastSlot_7);
        }
#line 1148 "opt_debug.m"
        {
#line 1148 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) "..", ll_backend__opt_debug__V_13_13);
        }
#line 1147 "opt_debug.m"
        {
#line 1147 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 1147 "opt_debug.m"
        {
#line 1147 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "nondetstack slots ", ll_backend__opt_debug__V_9_9);
        }
#line 1146 "opt_debug.m"
      }
#line 1139 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 1139 "opt_debug.m"
  }
#line 1137 "opt_debug.m"
}

#line 783 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_rttiproclabel_1_f_0(
#line 783 "opt_debug.m"
  MR_Word ll_backend__opt_debug__RttiProcLabel_3)
#line 783 "opt_debug.m"
{
#line 785 "opt_debug.m"
  {
#line 785 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 785 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;
#line 785 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_4_4;

#line 786 "opt_debug.m"
    {
#line 786 "opt_debug.m"
      ll_backend__opt_debug__V_4_4 = backend_libs__proc_label__make_proc_label_from_rtti_1_f_0(ll_backend__opt_debug__RttiProcLabel_3);
    }
#line 785 "opt_debug.m"
    {
#line 785 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__2_2 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__V_4_4);
    }
#line 785 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 785 "opt_debug.m"
  }
#line 783 "opt_debug.m"
}

#line 324 "opt_debug.m"
static MR_String MR_CALL 
ll_backend__opt_debug__dump_lvals_2_3_f_0(
#line 324 "opt_debug.m"
  MR_Word ll_backend__opt_debug__MaybeProcLabel_1,
#line 324 "opt_debug.m"
  MR_Word ll_backend__opt_debug__HeadVar__2_2,
#line 324 "opt_debug.m"
  MR_String ll_backend__opt_debug__Prefix_3)
#line 324 "opt_debug.m"
{
#line 326 "opt_debug.m"
  {
#line 326 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 326 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 326 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 326 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 326 "opt_debug.m"
    else
#line 327 "opt_debug.m"
      {
#line 327 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 327 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lvallist_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 327 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 327 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 327 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 328 "opt_debug.m"
        {
#line 328 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_8);
        }
#line 328 "opt_debug.m"
        {
#line 328 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lvallist_9, (MR_String) " ");
        }
#line 328 "opt_debug.m"
        {
#line 328 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
#line 327 "opt_debug.m"
        {
#line 327 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Prefix_3, ll_backend__opt_debug__V_11_11);
        }
#line 327 "opt_debug.m"
      }
#line 326 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 326 "opt_debug.m"
  }
#line 324 "opt_debug.m"
}

#line 240 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_comment_char_3_p_0(
#line 240 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4,
#line 240 "opt_debug.m"
  MR_String ll_backend__opt_debug__STATE_VARIABLE_Str_0_6,
#line 240 "opt_debug.m"
  MR_String * ll_backend__opt_debug__STATE_VARIABLE_Str_7)
#line 240 "opt_debug.m"
{
#line 245 "opt_debug.m"
  {
#line 245 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__C_4 == (MR_Char) 10);

#line 245 "opt_debug.m"
    if (ll_backend__opt_debug__succeeded)
#line 244 "opt_debug.m"
      {
#line 244 "opt_debug.m"
        {
#line 244 "opt_debug.m"
          *ll_backend__opt_debug__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__STATE_VARIABLE_Str_0_6, (MR_String) "\n\t% ");
        }
#line 244 "opt_debug.m"
      }
#line 245 "opt_debug.m"
    else
#line 246 "opt_debug.m"
      {
#line 246 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 246 "opt_debug.m"
        {
#line 246 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__char_to_string_1_f_0(ll_backend__opt_debug__C_4);
        }
#line 246 "opt_debug.m"
        {
#line 246 "opt_debug.m"
          *ll_backend__opt_debug__STATE_VARIABLE_Str_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__STATE_VARIABLE_Str_0_6, ll_backend__opt_debug__V_11_11);
        }
#line 246 "opt_debug.m"
      }
#line 245 "opt_debug.m"
  }
#line 240 "opt_debug.m"
}

#line 231 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__print_comment_char_3_p_0(
#line 231 "opt_debug.m"
  MR_Char ll_backend__opt_debug__C_4)
#line 231 "opt_debug.m"
{
#line 236 "opt_debug.m"
  {
#line 236 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__C_4 == (MR_Char) 10);

#line 236 "opt_debug.m"
    if (ll_backend__opt_debug__succeeded)
#line 235 "opt_debug.m"
      {
#line 235 "opt_debug.m"
        {
#line 235 "opt_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "\n\t% ");
#line 235 "opt_debug.m"
          return;
        }
#line 235 "opt_debug.m"
      }
#line 236 "opt_debug.m"
    else
#line 237 "opt_debug.m"
      {
#line 237 "opt_debug.m"
        mercury__io__write_char_3_p_0(ll_backend__opt_debug__C_4);
#line 237 "opt_debug.m"
        return;
      }
#line 236 "opt_debug.m"
  }
#line 231 "opt_debug.m"
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
#line 1273 "opt_debug.m"
  {
#line 1273 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1273 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 1273 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1273 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 1273 "opt_debug.m"
    else
#line 1274 "opt_debug.m"
      {
#line 1274 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1274 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
#line 1274 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1274 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;

#line 1276 "opt_debug.m"
        {
#line 1276 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_fullinstr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instr_9);
        }
#line 1276 "opt_debug.m"
        {
#line 1276 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_fullinstrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
#line 1274 "opt_debug.m"
        {
#line 1274 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_11_11, ll_backend__opt_debug__V_12_12);
        }
#line 1274 "opt_debug.m"
      }
#line 1273 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 1273 "opt_debug.m"
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
#line 1263 "opt_debug.m"
  {
#line 1263 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 1263 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_9;
#line 1263 "opt_debug.m"
    MR_Word ll_backend__opt_debug__Uinstr_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 1263 "opt_debug.m"
    MR_String ll_backend__opt_debug__Comment_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));

#line 1267 "opt_debug.m"
    if ((ll_backend__opt_debug__AutoComments_6 == (MR_Integer) 0))
#line 1265 "opt_debug.m"
      {
#line 1265 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;

#line 1266 "opt_debug.m"
        {
#line 1266 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
        }
#line 1266 "opt_debug.m"
        {
#line 1266 "opt_debug.m"
          return ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) "\n");
        }
#line 1265 "opt_debug.m"
      }
#line 1267 "opt_debug.m"
    else
#line 1268 "opt_debug.m"
      {
#line 1268 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 1268 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 1268 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;

#line 1269 "opt_debug.m"
        {
#line 1269 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Uinstr_7);
        }
#line 1270 "opt_debug.m"
        {
#line 1270 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_8, (MR_String) "\n");
        }
#line 1269 "opt_debug.m"
        {
#line 1269 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " - ", ll_backend__opt_debug__V_13_13);
        }
#line 1269 "opt_debug.m"
        {
#line 1269 "opt_debug.m"
          return ll_backend__opt_debug__Str_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 1268 "opt_debug.m"
      }
#line 1263 "opt_debug.m"
    return ll_backend__opt_debug__Str_9;
#line 1263 "opt_debug.m"
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
#line 823 "opt_debug.m"
  {
#line 823 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 823 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_8;

#line 823 "opt_debug.m"
    if ((ll_backend__opt_debug__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1069 "opt_debug.m"
      ll_backend__opt_debug__Str_8 = (MR_String) "discard_ticket";
#line 823 "opt_debug.m"
    else
#line 823 "opt_debug.m"
      if ((ll_backend__opt_debug__Instr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1072 "opt_debug.m"
        ll_backend__opt_debug__Str_8 = (MR_String) "prune_ticket";
#line 823 "opt_debug.m"
      else
#line 823 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 1))))
#line 823 "opt_debug.m"
          {
#line 823 "opt_debug.m"
            MR_String ll_backend__opt_debug__Comment_9 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
#line 823 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_399_399;

#line 824 "opt_debug.m"
            {
#line 824 "opt_debug.m"
              ll_backend__opt_debug__V_399_399 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_9, (MR_String) ")");
            }
#line 824 "opt_debug.m"
            {
#line 824 "opt_debug.m"
              return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "comment(", ll_backend__opt_debug__V_399_399);
            }
#line 823 "opt_debug.m"
          }
#line 823 "opt_debug.m"
        else
#line 823 "opt_debug.m"
          if (((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 2))))
#line 826 "opt_debug.m"
            {
#line 826 "opt_debug.m"
              MR_Word ll_backend__opt_debug__Livevals_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)));
#line 826 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_395_395;
#line 826 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_396_396;

#line 827 "opt_debug.m"
              {
#line 827 "opt_debug.m"
                ll_backend__opt_debug__V_396_396 = ll_backend__opt_debug__dump_livevals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Livevals_10);
              }
#line 827 "opt_debug.m"
              {
#line 827 "opt_debug.m"
                ll_backend__opt_debug__V_395_395 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_396_396, (MR_String) ")");
              }
#line 827 "opt_debug.m"
              {
#line 827 "opt_debug.m"
                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "livevals(", ll_backend__opt_debug__V_395_395);
              }
#line 826 "opt_debug.m"
            }
#line 823 "opt_debug.m"
          else
#line 823 "opt_debug.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 904 "opt_debug.m"
              {
#line 904 "opt_debug.m"
                MR_Word ll_backend__opt_debug__AL_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 904 "opt_debug.m"
                MR_String ll_backend__opt_debug__Code_35 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 904 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_322_322;
#line 904 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_323_323;
#line 904 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_324_324;
#line 904 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_326_326;
#line 904 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 905 "opt_debug.m"
                {
#line 905 "opt_debug.m"
                  ll_backend__opt_debug__V_323_323 = ll_backend__opt_debug__dump_affects_liveness_1_f_0(ll_backend__opt_debug__AL_33);
                }
#line 905 "opt_debug.m"
                {
#line 905 "opt_debug.m"
                  ll_backend__opt_debug__V_326_326 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Code_35, (MR_String) ")");
                }
#line 905 "opt_debug.m"
                {
#line 905 "opt_debug.m"
                  ll_backend__opt_debug__V_324_324 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_326_326);
                }
#line 905 "opt_debug.m"
                {
#line 905 "opt_debug.m"
                  ll_backend__opt_debug__V_322_322 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_323_323, ll_backend__opt_debug__V_324_324);
                }
#line 905 "opt_debug.m"
                {
#line 905 "opt_debug.m"
                  return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "arbitrary_c_code(", ll_backend__opt_debug__V_322_322);
                }
#line 904 "opt_debug.m"
              }
#line 823 "opt_debug.m"
            else
#line 823 "opt_debug.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 835 "opt_debug.m"
                {
#line 835 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__Lval_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 835 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__Rval_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 835 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_378_378;
#line 835 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_379_379;
#line 835 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_381_381;

#line 836 "opt_debug.m"
                  {
#line 836 "opt_debug.m"
                    ll_backend__opt_debug__V_378_378 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_14);
                  }
#line 836 "opt_debug.m"
                  {
#line 836 "opt_debug.m"
                    ll_backend__opt_debug__V_381_381 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_15);
                  }
#line 836 "opt_debug.m"
                  {
#line 836 "opt_debug.m"
                    ll_backend__opt_debug__V_379_379 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_381_381);
                  }
#line 836 "opt_debug.m"
                  {
#line 836 "opt_debug.m"
                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_378_378, ll_backend__opt_debug__V_379_379);
                  }
#line 835 "opt_debug.m"
                }
#line 823 "opt_debug.m"
              else
#line 823 "opt_debug.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 829 "opt_debug.m"
                  {
#line 829 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__RTemps_11 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 829 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__FTemps_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 829 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__Instrs_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_383_383;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_384_384;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_385_385;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_387_387;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_388_388;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_389_389;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_391_391;
#line 829 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_392_392;

#line 830 "opt_debug.m"
                    {
#line 830 "opt_debug.m"
                      ll_backend__opt_debug__V_384_384 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__RTemps_11);
                    }
#line 831 "opt_debug.m"
                    {
#line 831 "opt_debug.m"
                      ll_backend__opt_debug__V_388_388 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FTemps_12);
                    }
#line 833 "opt_debug.m"
                    {
#line 833 "opt_debug.m"
                      ll_backend__opt_debug__V_392_392 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AutoComments_6, ll_backend__opt_debug__Instrs_13);
                    }
#line 832 "opt_debug.m"
                    {
#line 832 "opt_debug.m"
                      ll_backend__opt_debug__V_391_391 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_392_392, (MR_String) ")");
                    }
#line 831 "opt_debug.m"
                    {
#line 831 "opt_debug.m"
                      ll_backend__opt_debug__V_389_389 = mercury__string__f_43_43_2_f_0((MR_String) ",\n", ll_backend__opt_debug__V_391_391);
                    }
#line 831 "opt_debug.m"
                    {
#line 831 "opt_debug.m"
                      ll_backend__opt_debug__V_387_387 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_388_388, ll_backend__opt_debug__V_389_389);
                    }
#line 830 "opt_debug.m"
                    {
#line 830 "opt_debug.m"
                      ll_backend__opt_debug__V_385_385 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_387_387);
                    }
#line 830 "opt_debug.m"
                    {
#line 830 "opt_debug.m"
                      ll_backend__opt_debug__V_383_383 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_384_384, ll_backend__opt_debug__V_385_385);
                    }
#line 830 "opt_debug.m"
                    {
#line 830 "opt_debug.m"
                      return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "block(", ll_backend__opt_debug__V_383_383);
                    }
#line 829 "opt_debug.m"
                  }
#line 823 "opt_debug.m"
                else
#line 823 "opt_debug.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 900 "opt_debug.m"
                    {
#line 900 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__MaybeLabels_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 900 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_329_329;
#line 900 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_330_330;
#line 900 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_331_331;
#line 900 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_333_333;
#line 900 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__Rval_403 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 901 "opt_debug.m"
                      {
#line 901 "opt_debug.m"
                        ll_backend__opt_debug__V_330_330 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_403);
                      }
#line 902 "opt_debug.m"
                      {
#line 902 "opt_debug.m"
                        ll_backend__opt_debug__V_333_333 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MaybeLabels_32);
                      }
#line 901 "opt_debug.m"
                      {
#line 901 "opt_debug.m"
                        ll_backend__opt_debug__V_331_331 = mercury__string__f_43_43_2_f_0((MR_String) ":", ll_backend__opt_debug__V_333_333);
                      }
#line 901 "opt_debug.m"
                      {
#line 901 "opt_debug.m"
                        ll_backend__opt_debug__V_329_329 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_330_330, ll_backend__opt_debug__V_331_331);
                      }
#line 901 "opt_debug.m"
                      {
#line 901 "opt_debug.m"
                        return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "computed_goto ", ll_backend__opt_debug__V_329_329);
                      }
#line 900 "opt_debug.m"
                    }
#line 823 "opt_debug.m"
                  else
#line 823 "opt_debug.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 25))))
#line 1085 "opt_debug.m"
                      {
#line 1085 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_188_188;
#line 1085 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_189_189;
#line 1085 "opt_debug.m"
                        MR_Integer ll_backend__opt_debug__Size_422 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1086 "opt_debug.m"
                        {
#line 1086 "opt_debug.m"
                          ll_backend__opt_debug__V_189_189 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_422);
                        }
#line 1086 "opt_debug.m"
                        {
#line 1086 "opt_debug.m"
                          ll_backend__opt_debug__V_188_188 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_189_189, (MR_String) ")");
                        }
#line 1086 "opt_debug.m"
                        {
#line 1086 "opt_debug.m"
                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp(", ll_backend__opt_debug__V_188_188);
                        }
#line 1085 "opt_debug.m"
                      }
#line 823 "opt_debug.m"
                    else
#line 823 "opt_debug.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 26))))
#line 1088 "opt_debug.m"
                        {
#line 1088 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_184_184;
#line 1088 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_185_185;
#line 1088 "opt_debug.m"
                          MR_Integer ll_backend__opt_debug__Size_423 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1089 "opt_debug.m"
                          {
#line 1089 "opt_debug.m"
                            ll_backend__opt_debug__V_185_185 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_423);
                          }
#line 1089 "opt_debug.m"
                          {
#line 1089 "opt_debug.m"
                            ll_backend__opt_debug__V_184_184 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_185_185, (MR_String) ")");
                          }
#line 1089 "opt_debug.m"
                          {
#line 1089 "opt_debug.m"
                            return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "decr_sp_and_return(", ll_backend__opt_debug__V_184_184);
                          }
#line 1088 "opt_debug.m"
                        }
#line 823 "opt_debug.m"
                      else
#line 823 "opt_debug.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 27))))
#line 1092 "opt_debug.m"
                          {
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__Decls_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__Comps_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MCM_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MFNL_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MFL_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MFOL_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MNF_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MDL_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__SSR_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 9)));
#line 1092 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__MD_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 10)));
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_148_148;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_150_150;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_151_151;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_152_152;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_154_154;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_155_155;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_156_156;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_157_157;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_158_158;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_160_160;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_161_161;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_163_163;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_164_164;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_166_166;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_167_167;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_169_169;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_170_170;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_172_172;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_173_173;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_175_175;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_176_176;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_178_178;
#line 1092 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_179_179;

#line 1095 "opt_debug.m"
                            {
#line 1095 "opt_debug.m"
                              ll_backend__opt_debug__V_151_151 = ll_backend__opt_debug__dump_decls_1_f_0(ll_backend__opt_debug__Decls_67);
                            }
#line 1096 "opt_debug.m"
                            {
#line 1096 "opt_debug.m"
                              ll_backend__opt_debug__V_155_155 = ll_backend__opt_debug__dump_components_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Comps_68);
                            }
#line 1096 "opt_debug.m"
                            {
#line 1096 "opt_debug.m"
                              ll_backend__opt_debug__V_157_157 = ll_backend__opt_debug__dump_may_call_mercury_1_f_0(ll_backend__opt_debug__MCM_69);
                            }
#line 1098 "opt_debug.m"
                            {
#line 1098 "opt_debug.m"
                              ll_backend__opt_debug__V_161_161 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix nolayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFNL_70);
                            }
#line 1099 "opt_debug.m"
                            {
#line 1099 "opt_debug.m"
                              ll_backend__opt_debug__V_164_164 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix layout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFL_71);
                            }
#line 1100 "opt_debug.m"
                            {
#line 1100 "opt_debug.m"
                              ll_backend__opt_debug__V_167_167 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "fix onlylayout:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MFOL_72);
                            }
#line 1101 "opt_debug.m"
                            {
#line 1101 "opt_debug.m"
                              ll_backend__opt_debug__V_170_170 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "nofix:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MNF_73);
                            }
#line 1102 "opt_debug.m"
                            {
#line 1102 "opt_debug.m"
                              ll_backend__opt_debug__V_173_173 = ll_backend__opt_debug__dump_maybe_label_3_f_0((MR_String) "maybe def:", ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__MDL_74);
                            }
#line 1103 "opt_debug.m"
                            {
#line 1103 "opt_debug.m"
                              ll_backend__opt_debug__V_176_176 = ll_backend__opt_debug__dump_bool_msg_2_f_0((MR_String) "stack slot ref:", ll_backend__opt_debug__SSR_75);
                            }
#line 1103 "opt_debug.m"
                            {
#line 1103 "opt_debug.m"
                              ll_backend__opt_debug__V_179_179 = ll_backend__opt_debug__dump_may_duplicate_1_f_0(ll_backend__opt_debug__MD_76);
                            }
#line 1103 "opt_debug.m"
                            {
#line 1103 "opt_debug.m"
                              ll_backend__opt_debug__V_178_178 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_179_179, (MR_String) "\n)");
                            }
#line 1102 "opt_debug.m"
                            {
#line 1102 "opt_debug.m"
                              ll_backend__opt_debug__V_175_175 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_176_176, ll_backend__opt_debug__V_178_178);
                            }
#line 1101 "opt_debug.m"
                            {
#line 1101 "opt_debug.m"
                              ll_backend__opt_debug__V_172_172 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_173_173, ll_backend__opt_debug__V_175_175);
                            }
#line 1100 "opt_debug.m"
                            {
#line 1100 "opt_debug.m"
                              ll_backend__opt_debug__V_169_169 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_170_170, ll_backend__opt_debug__V_172_172);
                            }
#line 1099 "opt_debug.m"
                            {
#line 1099 "opt_debug.m"
                              ll_backend__opt_debug__V_166_166 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_167_167, ll_backend__opt_debug__V_169_169);
                            }
#line 1098 "opt_debug.m"
                            {
#line 1098 "opt_debug.m"
                              ll_backend__opt_debug__V_163_163 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_164_164, ll_backend__opt_debug__V_166_166);
                            }
#line 1097 "opt_debug.m"
                            {
#line 1097 "opt_debug.m"
                              ll_backend__opt_debug__V_160_160 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_161_161, ll_backend__opt_debug__V_163_163);
                            }
#line 1096 "opt_debug.m"
                            {
#line 1096 "opt_debug.m"
                              ll_backend__opt_debug__V_158_158 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_160_160);
                            }
#line 1096 "opt_debug.m"
                            {
#line 1096 "opt_debug.m"
                              ll_backend__opt_debug__V_156_156 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_157_157, ll_backend__opt_debug__V_158_158);
                            }
#line 1095 "opt_debug.m"
                            {
#line 1095 "opt_debug.m"
                              ll_backend__opt_debug__V_154_154 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_155_155, ll_backend__opt_debug__V_156_156);
                            }
#line 1095 "opt_debug.m"
                            {
#line 1095 "opt_debug.m"
                              ll_backend__opt_debug__V_152_152 = mercury__string__f_43_43_2_f_0((MR_String) "components:\n", ll_backend__opt_debug__V_154_154);
                            }
#line 1094 "opt_debug.m"
                            {
#line 1094 "opt_debug.m"
                              ll_backend__opt_debug__V_150_150 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_151_151, ll_backend__opt_debug__V_152_152);
                            }
#line 1094 "opt_debug.m"
                            {
#line 1094 "opt_debug.m"
                              ll_backend__opt_debug__V_148_148 = mercury__string__f_43_43_2_f_0((MR_String) "declarations:\n", ll_backend__opt_debug__V_150_150);
                            }
#line 1093 "opt_debug.m"
                            {
#line 1093 "opt_debug.m"
                              return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_proc_code(\n", ll_backend__opt_debug__V_148_148);
                            }
#line 1092 "opt_debug.m"
                          }
#line 823 "opt_debug.m"
                        else
#line 823 "opt_debug.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 29))))
#line 1110 "opt_debug.m"
                            {
#line 1110 "opt_debug.m"
                              MR_Word ll_backend__opt_debug__Child_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1110 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_128_128;
#line 1110 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_129_129;
#line 1110 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_130_130;
#line 1110 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_131_131;
#line 1110 "opt_debug.m"
                              MR_Word ll_backend__opt_debug__Lval_425 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1112 "opt_debug.m"
                              {
#line 1112 "opt_debug.m"
                                ll_backend__opt_debug__V_129_129 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_425);
                              }
#line 1112 "opt_debug.m"
                              {
#line 1112 "opt_debug.m"
                                ll_backend__opt_debug__V_131_131 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Child_79);
                              }
#line 1112 "opt_debug.m"
                              {
#line 1112 "opt_debug.m"
                                ll_backend__opt_debug__V_130_130 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_131_131, (MR_String) ", )");
                              }
#line 1111 "opt_debug.m"
                              {
#line 1111 "opt_debug.m"
                                ll_backend__opt_debug__V_128_128 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_129_129, ll_backend__opt_debug__V_130_130);
                              }
#line 1111 "opt_debug.m"
                              {
#line 1111 "opt_debug.m"
                                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "fork_new_child(", ll_backend__opt_debug__V_128_128);
                              }
#line 1110 "opt_debug.m"
                            }
#line 823 "opt_debug.m"
                          else
#line 823 "opt_debug.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 969 "opt_debug.m"
                              {
#line 969 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_267_267;
#line 969 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_268_268;
#line 969 "opt_debug.m"
                                MR_Word ll_backend__opt_debug__Rval_412 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 970 "opt_debug.m"
                                {
#line 970 "opt_debug.m"
                                  ll_backend__opt_debug__V_268_268 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_412);
                                }
#line 970 "opt_debug.m"
                                {
#line 970 "opt_debug.m"
                                  ll_backend__opt_debug__V_267_267 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_268_268, (MR_String) ")");
                                }
#line 970 "opt_debug.m"
                                {
#line 970 "opt_debug.m"
                                  return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "free_heap(", ll_backend__opt_debug__V_267_267);
                                }
#line 969 "opt_debug.m"
                              }
#line 823 "opt_debug.m"
                            else
#line 823 "opt_debug.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 897 "opt_debug.m"
                                {
#line 897 "opt_debug.m"
                                  MR_Word ll_backend__opt_debug__CodeAddr_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 897 "opt_debug.m"
                                  MR_String ll_backend__opt_debug__V_335_335;

#line 898 "opt_debug.m"
                                  {
#line 898 "opt_debug.m"
                                    ll_backend__opt_debug__V_335_335 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_31);
                                  }
#line 898 "opt_debug.m"
                                  {
#line 898 "opt_debug.m"
                                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "goto ", ll_backend__opt_debug__V_335_335);
                                  }
#line 897 "opt_debug.m"
                                }
#line 823 "opt_debug.m"
                              else
#line 823 "opt_debug.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 908 "opt_debug.m"
                                  {
#line 908 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_316_316;
#line 908 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_317_317;
#line 908 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_318_318;
#line 908 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_320_320;
#line 908 "opt_debug.m"
                                    MR_Word ll_backend__opt_debug__Rval_404 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 908 "opt_debug.m"
                                    MR_Word ll_backend__opt_debug__CodeAddr_405 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 909 "opt_debug.m"
                                    {
#line 909 "opt_debug.m"
                                      ll_backend__opt_debug__V_317_317 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_404);
                                    }
#line 910 "opt_debug.m"
                                    {
#line 910 "opt_debug.m"
                                      ll_backend__opt_debug__V_320_320 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__CodeAddr_405);
                                    }
#line 909 "opt_debug.m"
                                    {
#line 909 "opt_debug.m"
                                      ll_backend__opt_debug__V_318_318 = mercury__string__f_43_43_2_f_0((MR_String) ") goto ", ll_backend__opt_debug__V_320_320);
                                    }
#line 909 "opt_debug.m"
                                    {
#line 909 "opt_debug.m"
                                      ll_backend__opt_debug__V_316_316 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_317_317, ll_backend__opt_debug__V_318_318);
                                    }
#line 909 "opt_debug.m"
                                    {
#line 909 "opt_debug.m"
                                      return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "if (", ll_backend__opt_debug__V_316_316);
                                    }
#line 908 "opt_debug.m"
                                  }
#line 823 "opt_debug.m"
                                else
#line 823 "opt_debug.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 919 "opt_debug.m"
                                    {
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__MaybeTag_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__MaybeOffset_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__MayUseAtomic_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__MaybeRegionRval_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 7)));
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__MaybeReuse_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 8)));
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__T_str_42;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__O_str_44;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__Region_str_46;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__Reuse_str_48;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__Flag_str_49;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_281_281;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_282_282;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_283_283;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_285_285;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_286_286;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_288_288;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_289_289;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_291_291;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_292_292;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_293_293;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_295_295;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_296_296;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_297_297;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_299_299;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_300_300;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_302_302;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_303_303;
#line 919 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_305_305;
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__Lval_408 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 919 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__Size_409 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 918 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

#line 923 "opt_debug.m"
                                      if ((ll_backend__opt_debug__MaybeTag_36 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "opt_debug.m"
                                        ll_backend__opt_debug__T_str_42 = (MR_String) "no";
#line 923 "opt_debug.m"
                                      else
#line 924 "opt_debug.m"
                                        {
#line 924 "opt_debug.m"
                                          MR_Integer ll_backend__opt_debug__Tag_43 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_36, (MR_Integer) 0)));

#line 925 "opt_debug.m"
                                          {
#line 925 "opt_debug.m"
                                            mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Tag_43, &ll_backend__opt_debug__T_str_42);
                                          }
#line 924 "opt_debug.m"
                                        }
#line 930 "opt_debug.m"
                                      if ((ll_backend__opt_debug__MaybeOffset_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 928 "opt_debug.m"
                                        ll_backend__opt_debug__O_str_44 = (MR_String) "no";
#line 930 "opt_debug.m"
                                      else
#line 931 "opt_debug.m"
                                        {
#line 931 "opt_debug.m"
                                          MR_Integer ll_backend__opt_debug__Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_37, (MR_Integer) 0)));

#line 932 "opt_debug.m"
                                          {
#line 932 "opt_debug.m"
                                            mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__Offset_45, &ll_backend__opt_debug__O_str_44);
                                          }
#line 931 "opt_debug.m"
                                        }
#line 937 "opt_debug.m"
                                      if ((ll_backend__opt_debug__MaybeRegionRval_40 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 935 "opt_debug.m"
                                        ll_backend__opt_debug__Region_str_46 = (MR_String) "no";
#line 937 "opt_debug.m"
                                      else
#line 938 "opt_debug.m"
                                        {
#line 938 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__RegionRval_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRegionRval_40, (MR_Integer) 0)));

#line 939 "opt_debug.m"
                                          {
#line 939 "opt_debug.m"
                                            ll_backend__opt_debug__Region_str_46 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__RegionRval_47);
                                          }
#line 938 "opt_debug.m"
                                        }
#line 945 "opt_debug.m"
                                      if ((ll_backend__opt_debug__MaybeReuse_41 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 942 "opt_debug.m"
                                        {
#line 943 "opt_debug.m"
                                          ll_backend__opt_debug__Reuse_str_48 = (MR_String) "no";
#line 944 "opt_debug.m"
                                          ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
#line 942 "opt_debug.m"
                                        }
#line 945 "opt_debug.m"
                                      else
#line 946 "opt_debug.m"
                                        {
#line 946 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__ReuseRval_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 0)));
#line 946 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__MaybeFlagLval_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeReuse_41, (MR_Integer) 1)));

#line 947 "opt_debug.m"
                                          {
#line 947 "opt_debug.m"
                                            ll_backend__opt_debug__Reuse_str_48 = ll_backend__opt_debug__dump_rval_2_f_0((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), ll_backend__opt_debug__ReuseRval_50);
                                          }
#line 951 "opt_debug.m"
                                          if ((ll_backend__opt_debug__MaybeFlagLval_51 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 949 "opt_debug.m"
                                            ll_backend__opt_debug__Flag_str_49 = (MR_String) "no";
#line 951 "opt_debug.m"
                                          else
#line 952 "opt_debug.m"
                                            {
#line 952 "opt_debug.m"
                                              MR_Word ll_backend__opt_debug__FlagLval_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeFlagLval_51, (MR_Integer) 0)));

#line 953 "opt_debug.m"
                                              {
#line 953 "opt_debug.m"
                                                ll_backend__opt_debug__Flag_str_49 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__FlagLval_52);
                                              }
#line 952 "opt_debug.m"
                                            }
#line 946 "opt_debug.m"
                                        }
#line 956 "opt_debug.m"
                                      {
#line 956 "opt_debug.m"
                                        ll_backend__opt_debug__V_282_282 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_408);
                                      }
#line 958 "opt_debug.m"
                                      {
#line 958 "opt_debug.m"
                                        ll_backend__opt_debug__V_292_292 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Size_409);
                                      }
#line 959 "opt_debug.m"
                                      {
#line 959 "opt_debug.m"
                                        ll_backend__opt_debug__V_296_296 = ll_backend__opt_debug__dump_may_use_atomic_1_f_0(ll_backend__opt_debug__MayUseAtomic_39);
                                      }
#line 961 "opt_debug.m"
                                      {
#line 961 "opt_debug.m"
                                        ll_backend__opt_debug__V_305_305 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Flag_str_49, (MR_String) ")");
                                      }
#line 961 "opt_debug.m"
                                      {
#line 961 "opt_debug.m"
                                        ll_backend__opt_debug__V_303_303 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_305_305);
                                      }
#line 960 "opt_debug.m"
                                      {
#line 960 "opt_debug.m"
                                        ll_backend__opt_debug__V_302_302 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Reuse_str_48, ll_backend__opt_debug__V_303_303);
                                      }
#line 960 "opt_debug.m"
                                      {
#line 960 "opt_debug.m"
                                        ll_backend__opt_debug__V_300_300 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_302_302);
                                      }
#line 959 "opt_debug.m"
                                      {
#line 959 "opt_debug.m"
                                        ll_backend__opt_debug__V_299_299 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Region_str_46, ll_backend__opt_debug__V_300_300);
                                      }
#line 959 "opt_debug.m"
                                      {
#line 959 "opt_debug.m"
                                        ll_backend__opt_debug__V_297_297 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_299_299);
                                      }
#line 958 "opt_debug.m"
                                      {
#line 958 "opt_debug.m"
                                        ll_backend__opt_debug__V_295_295 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_296_296, ll_backend__opt_debug__V_297_297);
                                      }
#line 958 "opt_debug.m"
                                      {
#line 958 "opt_debug.m"
                                        ll_backend__opt_debug__V_293_293 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_295_295);
                                      }
#line 957 "opt_debug.m"
                                      {
#line 957 "opt_debug.m"
                                        ll_backend__opt_debug__V_291_291 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_292_292, ll_backend__opt_debug__V_293_293);
                                      }
#line 957 "opt_debug.m"
                                      {
#line 957 "opt_debug.m"
                                        ll_backend__opt_debug__V_289_289 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_291_291);
                                      }
#line 957 "opt_debug.m"
                                      {
#line 957 "opt_debug.m"
                                        ll_backend__opt_debug__V_288_288 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__O_str_44, ll_backend__opt_debug__V_289_289);
                                      }
#line 957 "opt_debug.m"
                                      {
#line 957 "opt_debug.m"
                                        ll_backend__opt_debug__V_286_286 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_288_288);
                                      }
#line 956 "opt_debug.m"
                                      {
#line 956 "opt_debug.m"
                                        ll_backend__opt_debug__V_285_285 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_42, ll_backend__opt_debug__V_286_286);
                                      }
#line 956 "opt_debug.m"
                                      {
#line 956 "opt_debug.m"
                                        ll_backend__opt_debug__V_283_283 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_285_285);
                                      }
#line 956 "opt_debug.m"
                                      {
#line 956 "opt_debug.m"
                                        ll_backend__opt_debug__V_281_281 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_282_282, ll_backend__opt_debug__V_283_283);
                                      }
#line 956 "opt_debug.m"
                                      {
#line 956 "opt_debug.m"
                                        return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_hp(", ll_backend__opt_debug__V_281_281);
                                      }
#line 919 "opt_debug.m"
                                    }
#line 823 "opt_debug.m"
                                  else
#line 823 "opt_debug.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 24))))
#line 1081 "opt_debug.m"
                                      {
#line 1081 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_192_192;
#line 1081 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_193_193;
#line 1081 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_194_194;
#line 1081 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_196_196;
#line 1081 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_197_197;
#line 1081 "opt_debug.m"
                                        MR_Integer ll_backend__opt_debug__Size_420 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1081 "opt_debug.m"
                                        MR_Word ll_backend__opt_debug__Kind_421 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1081 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_66_66 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1082 "opt_debug.m"
                                        {
#line 1082 "opt_debug.m"
                                          ll_backend__opt_debug__V_193_193 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_420);
                                        }
#line 1083 "opt_debug.m"
                                        {
#line 1083 "opt_debug.m"
                                          ll_backend__opt_debug__V_197_197 = ll_backend__opt_debug__dump_stack_incr_kind_1_f_0(ll_backend__opt_debug__Kind_421);
                                        }
#line 1082 "opt_debug.m"
                                        {
#line 1082 "opt_debug.m"
                                          ll_backend__opt_debug__V_196_196 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_197_197, (MR_String) ")");
                                        }
#line 1082 "opt_debug.m"
                                        {
#line 1082 "opt_debug.m"
                                          ll_backend__opt_debug__V_194_194 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_196_196);
                                        }
#line 1082 "opt_debug.m"
                                        {
#line 1082 "opt_debug.m"
                                          ll_backend__opt_debug__V_192_192 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_193_193, ll_backend__opt_debug__V_194_194);
                                        }
#line 1082 "opt_debug.m"
                                        {
#line 1082 "opt_debug.m"
                                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "incr_sp(", ll_backend__opt_debug__V_192_192);
                                        }
#line 1081 "opt_debug.m"
                                      }
#line 823 "opt_debug.m"
                                    else
#line 823 "opt_debug.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 28))))
#line 1106 "opt_debug.m"
                                        {
#line 1106 "opt_debug.m"
                                          MR_Integer ll_backend__opt_debug__N_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1106 "opt_debug.m"
                                          MR_Integer ll_backend__opt_debug__TSStringIndex_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_136_136;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_137_137;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_138_138;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_140_140;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_141_141;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_142_142;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_144_144;
#line 1106 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_145_145;
#line 1106 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__Lval_424 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1107 "opt_debug.m"
                                          {
#line 1107 "opt_debug.m"
                                            ll_backend__opt_debug__V_137_137 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_424);
                                          }
#line 1108 "opt_debug.m"
                                          {
#line 1108 "opt_debug.m"
                                            ll_backend__opt_debug__V_141_141 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_77);
                                          }
#line 1108 "opt_debug.m"
                                          {
#line 1108 "opt_debug.m"
                                            ll_backend__opt_debug__V_145_145 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TSStringIndex_78);
                                          }
#line 1108 "opt_debug.m"
                                          {
#line 1108 "opt_debug.m"
                                            ll_backend__opt_debug__V_144_144 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_145_145, (MR_String) ")");
                                          }
#line 1108 "opt_debug.m"
                                          {
#line 1108 "opt_debug.m"
                                            ll_backend__opt_debug__V_142_142 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_144_144);
                                          }
#line 1108 "opt_debug.m"
                                          {
#line 1108 "opt_debug.m"
                                            ll_backend__opt_debug__V_140_140 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_141_141, ll_backend__opt_debug__V_142_142);
                                          }
#line 1107 "opt_debug.m"
                                          {
#line 1107 "opt_debug.m"
                                            ll_backend__opt_debug__V_138_138 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_140_140);
                                          }
#line 1107 "opt_debug.m"
                                          {
#line 1107 "opt_debug.m"
                                            ll_backend__opt_debug__V_136_136 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_137_137, ll_backend__opt_debug__V_138_138);
                                          }
#line 1107 "opt_debug.m"
                                          {
#line 1107 "opt_debug.m"
                                            return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "init_sync_term(", ll_backend__opt_debug__V_136_136);
                                          }
#line 1106 "opt_debug.m"
                                        }
#line 823 "opt_debug.m"
                                      else
#line 823 "opt_debug.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 30))))
#line 1114 "opt_debug.m"
                                          {
#line 1114 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_120_120;
#line 1114 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_121_121;
#line 1114 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_122_122;
#line 1114 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_124_124;
#line 1114 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_125_125;
#line 1114 "opt_debug.m"
                                            MR_Word ll_backend__opt_debug__Lval_426 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1114 "opt_debug.m"
                                            MR_Word ll_backend__opt_debug__Label_427 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1115 "opt_debug.m"
                                            {
#line 1115 "opt_debug.m"
                                              ll_backend__opt_debug__V_121_121 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_426);
                                            }
#line 1116 "opt_debug.m"
                                            {
#line 1116 "opt_debug.m"
                                              ll_backend__opt_debug__V_125_125 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_427);
                                            }
#line 1116 "opt_debug.m"
                                            {
#line 1116 "opt_debug.m"
                                              ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
                                            }
#line 1115 "opt_debug.m"
                                            {
#line 1115 "opt_debug.m"
                                              ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_124_124);
                                            }
#line 1115 "opt_debug.m"
                                            {
#line 1115 "opt_debug.m"
                                              ll_backend__opt_debug__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_121_121, ll_backend__opt_debug__V_122_122);
                                            }
#line 1115 "opt_debug.m"
                                            {
#line 1115 "opt_debug.m"
                                              return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "join_and_continue(", ll_backend__opt_debug__V_120_120);
                                            }
#line 1114 "opt_debug.m"
                                          }
#line 823 "opt_debug.m"
                                        else
#line 823 "opt_debug.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 839 "opt_debug.m"
                                            {
#line 839 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_373_373;
#line 839 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_374_374;
#line 839 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_375_375;
#line 839 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_377_377;
#line 839 "opt_debug.m"
                                              MR_Word ll_backend__opt_debug__Lval_401 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 839 "opt_debug.m"
                                              MR_Word ll_backend__opt_debug__Rval_402 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 840 "opt_debug.m"
                                              {
#line 840 "opt_debug.m"
                                                ll_backend__opt_debug__V_374_374 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_401);
                                              }
#line 840 "opt_debug.m"
                                              {
#line 840 "opt_debug.m"
                                                ll_backend__opt_debug__V_377_377 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_402);
                                              }
#line 840 "opt_debug.m"
                                              {
#line 840 "opt_debug.m"
                                                ll_backend__opt_debug__V_375_375 = mercury__string__f_43_43_2_f_0((MR_String) " := ", ll_backend__opt_debug__V_377_377);
                                              }
#line 840 "opt_debug.m"
                                              {
#line 840 "opt_debug.m"
                                                ll_backend__opt_debug__V_373_373 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_374_374, ll_backend__opt_debug__V_375_375);
                                              }
#line 840 "opt_debug.m"
                                              {
#line 840 "opt_debug.m"
                                                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "keep ", ll_backend__opt_debug__V_373_373);
                                              }
#line 839 "opt_debug.m"
                                            }
#line 823 "opt_debug.m"
                                          else
#line 823 "opt_debug.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 894 "opt_debug.m"
                                              {
#line 894 "opt_debug.m"
                                                MR_Word ll_backend__opt_debug__Label_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 894 "opt_debug.m"
                                                MR_String ll_backend__opt_debug__V_336_336;

#line 895 "opt_debug.m"
                                                {
#line 895 "opt_debug.m"
                                                  ll_backend__opt_debug__V_336_336 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_30);
                                                }
#line 895 "opt_debug.m"
                                                {
#line 895 "opt_debug.m"
                                                  return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_336_336, (MR_String) ":");
                                                }
#line 894 "opt_debug.m"
                                              }
#line 823 "opt_debug.m"
                                            else
#line 823 "opt_debug.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 31))))
#line 1118 "opt_debug.m"
                                                {
#line 1118 "opt_debug.m"
                                                  MR_Integer ll_backend__opt_debug__NumSlots_80 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1118 "opt_debug.m"
                                                  MR_Word ll_backend__opt_debug__LCLval_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1118 "opt_debug.m"
                                                  MR_String ll_backend__opt_debug__V_112_112;
#line 1118 "opt_debug.m"
                                                  MR_String ll_backend__opt_debug__V_113_113;
#line 1118 "opt_debug.m"
                                                  MR_String ll_backend__opt_debug__V_114_114;
#line 1118 "opt_debug.m"
                                                  MR_String ll_backend__opt_debug__V_116_116;
#line 1118 "opt_debug.m"
                                                  MR_String ll_backend__opt_debug__V_117_117;

#line 1119 "opt_debug.m"
                                                  {
#line 1119 "opt_debug.m"
                                                    ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumSlots_80);
                                                  }
#line 1120 "opt_debug.m"
                                                  {
#line 1120 "opt_debug.m"
                                                    ll_backend__opt_debug__V_117_117 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCLval_81);
                                                  }
#line 1120 "opt_debug.m"
                                                  {
#line 1120 "opt_debug.m"
                                                    ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, (MR_String) ")");
                                                  }
#line 1119 "opt_debug.m"
                                                  {
#line 1119 "opt_debug.m"
                                                    ll_backend__opt_debug__V_114_114 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_116_116);
                                                  }
#line 1119 "opt_debug.m"
                                                  {
#line 1119 "opt_debug.m"
                                                    ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, ll_backend__opt_debug__V_114_114);
                                                  }
#line 1119 "opt_debug.m"
                                                  {
#line 1119 "opt_debug.m"
                                                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_create_loop_control(", ll_backend__opt_debug__V_112_112);
                                                  }
#line 1118 "opt_debug.m"
                                                }
#line 823 "opt_debug.m"
                                              else
#line 823 "opt_debug.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 34))))
#line 1132 "opt_debug.m"
                                                  {
#line 1132 "opt_debug.m"
                                                    MR_String ll_backend__opt_debug__V_86_86;
#line 1132 "opt_debug.m"
                                                    MR_String ll_backend__opt_debug__V_87_87;
#line 1132 "opt_debug.m"
                                                    MR_String ll_backend__opt_debug__V_88_88;
#line 1132 "opt_debug.m"
                                                    MR_String ll_backend__opt_debug__V_89_89;
#line 1132 "opt_debug.m"
                                                    MR_Word ll_backend__opt_debug__LCRval_431 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1132 "opt_debug.m"
                                                    MR_Word ll_backend__opt_debug__LCSRval_432 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1134 "opt_debug.m"
                                                    {
#line 1134 "opt_debug.m"
                                                      ll_backend__opt_debug__V_87_87 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_431);
                                                    }
#line 1134 "opt_debug.m"
                                                    {
#line 1134 "opt_debug.m"
                                                      ll_backend__opt_debug__V_89_89 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_432);
                                                    }
#line 1134 "opt_debug.m"
                                                    {
#line 1134 "opt_debug.m"
                                                      ll_backend__opt_debug__V_88_88 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_89_89, (MR_String) ")");
                                                    }
#line 1133 "opt_debug.m"
                                                    {
#line 1133 "opt_debug.m"
                                                      ll_backend__opt_debug__V_86_86 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_87_87, ll_backend__opt_debug__V_88_88);
                                                    }
#line 1133 "opt_debug.m"
                                                    {
#line 1133 "opt_debug.m"
                                                      return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_join_and_terminate(", ll_backend__opt_debug__V_86_86);
                                                    }
#line 1132 "opt_debug.m"
                                                  }
#line 823 "opt_debug.m"
                                                else
#line 823 "opt_debug.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 33))))
#line 1127 "opt_debug.m"
                                                    {
#line 1127 "opt_debug.m"
                                                      MR_Word ll_backend__opt_debug__LCSRval_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_92_92;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_93_93;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_94_94;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_96_96;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_97_97;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_98_98;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_100_100;
#line 1127 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_101_101;
#line 1127 "opt_debug.m"
                                                      MR_Word ll_backend__opt_debug__Label_429 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1127 "opt_debug.m"
                                                      MR_Word ll_backend__opt_debug__LCRval_430 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1128 "opt_debug.m"
                                                      {
#line 1128 "opt_debug.m"
                                                        ll_backend__opt_debug__V_93_93 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_430);
                                                      }
#line 1129 "opt_debug.m"
                                                      {
#line 1129 "opt_debug.m"
                                                        ll_backend__opt_debug__V_97_97 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSRval_84);
                                                      }
#line 1130 "opt_debug.m"
                                                      {
#line 1130 "opt_debug.m"
                                                        ll_backend__opt_debug__V_101_101 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_429);
                                                      }
#line 1130 "opt_debug.m"
                                                      {
#line 1130 "opt_debug.m"
                                                        ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
                                                      }
#line 1129 "opt_debug.m"
                                                      {
#line 1129 "opt_debug.m"
                                                        ll_backend__opt_debug__V_98_98 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_100_100);
                                                      }
#line 1129 "opt_debug.m"
                                                      {
#line 1129 "opt_debug.m"
                                                        ll_backend__opt_debug__V_96_96 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_97_97, ll_backend__opt_debug__V_98_98);
                                                      }
#line 1128 "opt_debug.m"
                                                      {
#line 1128 "opt_debug.m"
                                                        ll_backend__opt_debug__V_94_94 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_96_96);
                                                      }
#line 1128 "opt_debug.m"
                                                      {
#line 1128 "opt_debug.m"
                                                        ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_93_93, ll_backend__opt_debug__V_94_94);
                                                      }
#line 1128 "opt_debug.m"
                                                      {
#line 1128 "opt_debug.m"
                                                        return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_spawn_off(", ll_backend__opt_debug__V_92_92);
                                                      }
#line 1127 "opt_debug.m"
                                                    }
#line 823 "opt_debug.m"
                                                  else
#line 823 "opt_debug.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 32))))
#line 1122 "opt_debug.m"
                                                      {
#line 1122 "opt_debug.m"
                                                        MR_Word ll_backend__opt_debug__LCRval_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1122 "opt_debug.m"
                                                        MR_Word ll_backend__opt_debug__LCSLval_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 1122 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_104_104;
#line 1122 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_105_105;
#line 1122 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_106_106;
#line 1122 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_107_107;
#line 1122 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_108_108;
#line 1122 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_109_109;
#line 1122 "opt_debug.m"
                                                        MR_Word ll_backend__opt_debug__Label_428 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));

#line 1124 "opt_debug.m"
                                                        {
#line 1124 "opt_debug.m"
                                                          ll_backend__opt_debug__V_105_105 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCRval_82);
                                                        }
#line 1125 "opt_debug.m"
                                                        {
#line 1125 "opt_debug.m"
                                                          ll_backend__opt_debug__V_107_107 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__LCSLval_83);
                                                        }
#line 1125 "opt_debug.m"
                                                        {
#line 1125 "opt_debug.m"
                                                          ll_backend__opt_debug__V_109_109 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Label_428);
                                                        }
#line 1125 "opt_debug.m"
                                                        {
#line 1125 "opt_debug.m"
                                                          ll_backend__opt_debug__V_108_108 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_109_109, (MR_String) ")");
                                                        }
#line 1124 "opt_debug.m"
                                                        {
#line 1124 "opt_debug.m"
                                                          ll_backend__opt_debug__V_106_106 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_107_107, ll_backend__opt_debug__V_108_108);
                                                        }
#line 1123 "opt_debug.m"
                                                        {
#line 1123 "opt_debug.m"
                                                          ll_backend__opt_debug__V_104_104 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_105_105, ll_backend__opt_debug__V_106_106);
                                                        }
#line 1123 "opt_debug.m"
                                                        {
#line 1123 "opt_debug.m"
                                                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "lc_wait_free_slot(", ll_backend__opt_debug__V_104_104);
                                                        }
#line 1122 "opt_debug.m"
                                                      }
#line 823 "opt_debug.m"
                                                    else
#line 823 "opt_debug.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 844 "opt_debug.m"
                                                        {
#line 844 "opt_debug.m"
                                                          MR_Word ll_backend__opt_debug__Callee_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 844 "opt_debug.m"
                                                          MR_Word ll_backend__opt_debug__ReturnLabel_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 844 "opt_debug.m"
                                                          MR_Word ll_backend__opt_debug__CallModel_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 6)));
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__CallModelStr_22;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_362_362;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_363_363;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_364_364;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_366_366;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_367_367;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_368_368;
#line 844 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_370_370;
#line 843 "opt_debug.m"
                                                          MR_Word ll_backend__opt_debug___LiveInfo_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 843 "opt_debug.m"
                                                          MR_Word ll_backend__opt_debug___Context_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 843 "opt_debug.m"
                                                          MR_Word ll_backend__opt_debug___GoalPath_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));

#line 848 "opt_debug.m"
                                                          if (((MR_tag((MR_Word) ll_backend__opt_debug__CallModel_21)) == (MR_mktag((MR_Integer) 0))))
#line 848 "opt_debug.m"
                                                            {
#line 848 "opt_debug.m"
                                                              MR_Word ll_backend__opt_debug__V_433_433 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 848 "opt_debug.m"
                                                              if ((ll_backend__opt_debug__V_433_433 == (MR_Integer) 1))
#line 847 "opt_debug.m"
                                                                ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det";
#line 848 "opt_debug.m"
                                                              else
#line 850 "opt_debug.m"
                                                                ll_backend__opt_debug__CallModelStr_22 = (MR_String) "det_no_lco";
#line 848 "opt_debug.m"
                                                            }
#line 848 "opt_debug.m"
                                                          else
#line 848 "opt_debug.m"
                                                            if (((MR_tag((MR_Word) ll_backend__opt_debug__CallModel_21)) == (MR_mktag((MR_Integer) 2))))
#line 848 "opt_debug.m"
                                                              {
#line 848 "opt_debug.m"
                                                                MR_Word ll_backend__opt_debug__V_434_434 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 848 "opt_debug.m"
                                                                if ((ll_backend__opt_debug__V_434_434 == (MR_Integer) 1))
#line 862 "opt_debug.m"
                                                                  ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet checked_tail_call";
#line 848 "opt_debug.m"
                                                                else
#line 848 "opt_debug.m"
                                                                  if ((ll_backend__opt_debug__V_434_434 == (MR_Integer) 0))
#line 859 "opt_debug.m"
                                                                    ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet no_tail_call";
#line 848 "opt_debug.m"
                                                                  else
#line 865 "opt_debug.m"
                                                                    ll_backend__opt_debug__CallModelStr_22 = (MR_String) "nondet unchecked_tail_call";
#line 848 "opt_debug.m"
                                                              }
#line 848 "opt_debug.m"
                                                            else
#line 848 "opt_debug.m"
                                                              {
#line 848 "opt_debug.m"
                                                                MR_Word ll_backend__opt_debug__V_435_435 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__CallModel_21, (MR_Integer) 0)));

#line 848 "opt_debug.m"
                                                                if ((ll_backend__opt_debug__V_435_435 == (MR_Integer) 1))
#line 853 "opt_debug.m"
                                                                  ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet";
#line 848 "opt_debug.m"
                                                                else
#line 856 "opt_debug.m"
                                                                  ll_backend__opt_debug__CallModelStr_22 = (MR_String) "semidet_no_lco";
#line 848 "opt_debug.m"
                                                              }
#line 867 "opt_debug.m"
                                                          {
#line 867 "opt_debug.m"
                                                            ll_backend__opt_debug__V_363_363 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Callee_16);
                                                          }
#line 868 "opt_debug.m"
                                                          {
#line 868 "opt_debug.m"
                                                            ll_backend__opt_debug__V_367_367 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ReturnLabel_17);
                                                          }
#line 869 "opt_debug.m"
                                                          {
#line 869 "opt_debug.m"
                                                            ll_backend__opt_debug__V_370_370 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__CallModelStr_22, (MR_String) ")");
                                                          }
#line 868 "opt_debug.m"
                                                          {
#line 868 "opt_debug.m"
                                                            ll_backend__opt_debug__V_368_368 = mercury__string__f_43_43_2_f_0((MR_String) ", ..., ", ll_backend__opt_debug__V_370_370);
                                                          }
#line 868 "opt_debug.m"
                                                          {
#line 868 "opt_debug.m"
                                                            ll_backend__opt_debug__V_366_366 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_367_367, ll_backend__opt_debug__V_368_368);
                                                          }
#line 867 "opt_debug.m"
                                                          {
#line 867 "opt_debug.m"
                                                            ll_backend__opt_debug__V_364_364 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_366_366);
                                                          }
#line 867 "opt_debug.m"
                                                          {
#line 867 "opt_debug.m"
                                                            ll_backend__opt_debug__V_362_362 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_363_363, ll_backend__opt_debug__V_364_364);
                                                          }
#line 867 "opt_debug.m"
                                                          {
#line 867 "opt_debug.m"
                                                            return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "call(", ll_backend__opt_debug__V_362_362);
                                                          }
#line 844 "opt_debug.m"
                                                        }
#line 823 "opt_debug.m"
                                                      else
#line 823 "opt_debug.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 963 "opt_debug.m"
                                                          {
#line 963 "opt_debug.m"
                                                            MR_String ll_backend__opt_debug__V_275_275;
#line 963 "opt_debug.m"
                                                            MR_String ll_backend__opt_debug__V_276_276;
#line 963 "opt_debug.m"
                                                            MR_Word ll_backend__opt_debug__Lval_410 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 964 "opt_debug.m"
                                                            {
#line 964 "opt_debug.m"
                                                              ll_backend__opt_debug__V_276_276 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_410);
                                                            }
#line 964 "opt_debug.m"
                                                            {
#line 964 "opt_debug.m"
                                                              ll_backend__opt_debug__V_275_275 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_276_276, (MR_String) ")");
                                                            }
#line 964 "opt_debug.m"
                                                            {
#line 964 "opt_debug.m"
                                                              return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_hp(", ll_backend__opt_debug__V_275_275);
                                                            }
#line 963 "opt_debug.m"
                                                          }
#line 823 "opt_debug.m"
                                                        else
#line 823 "opt_debug.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 22))))
#line 1075 "opt_debug.m"
                                                            {
#line 1075 "opt_debug.m"
                                                              MR_String ll_backend__opt_debug__V_204_204;
#line 1075 "opt_debug.m"
                                                              MR_String ll_backend__opt_debug__V_205_205;
#line 1075 "opt_debug.m"
                                                              MR_Word ll_backend__opt_debug__Lval_418 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1076 "opt_debug.m"
                                                              {
#line 1076 "opt_debug.m"
                                                                ll_backend__opt_debug__V_205_205 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_418);
                                                              }
#line 1076 "opt_debug.m"
                                                              {
#line 1076 "opt_debug.m"
                                                                ll_backend__opt_debug__V_204_204 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_205_205, (MR_String) ")");
                                                              }
#line 1076 "opt_debug.m"
                                                              {
#line 1076 "opt_debug.m"
                                                                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mark_ticket_stack(", ll_backend__opt_debug__V_204_204);
                                                              }
#line 1075 "opt_debug.m"
                                                            }
#line 823 "opt_debug.m"
                                                          else
#line 823 "opt_debug.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 871 "opt_debug.m"
                                                              {
#line 871 "opt_debug.m"
                                                                MR_Word ll_backend__opt_debug__FrameInfo_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 871 "opt_debug.m"
                                                                MR_Word ll_backend__opt_debug__MaybeRedoip_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 871 "opt_debug.m"
                                                                MR_String ll_backend__opt_debug__R_str_26;

#line 875 "opt_debug.m"
                                                                if ((ll_backend__opt_debug__MaybeRedoip_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 876 "opt_debug.m"
                                                                  ll_backend__opt_debug__R_str_26 = (MR_String) "no_redoip";
#line 875 "opt_debug.m"
                                                                else
#line 873 "opt_debug.m"
                                                                  {
#line 873 "opt_debug.m"
                                                                    MR_Word ll_backend__opt_debug__Redoip_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeRedoip_24, (MR_Integer) 0)));

#line 874 "opt_debug.m"
                                                                    {
#line 874 "opt_debug.m"
                                                                      ll_backend__opt_debug__R_str_26 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Redoip_25);
                                                                    }
#line 873 "opt_debug.m"
                                                                  }
#line 883 "opt_debug.m"
                                                                if (((MR_tag((MR_Word) ll_backend__opt_debug__FrameInfo_23)) == (MR_mktag((MR_Integer) 1))))
#line 880 "opt_debug.m"
                                                                  {
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__Name_27 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));
#line 880 "opt_debug.m"
                                                                    MR_Integer ll_backend__opt_debug__Size_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 1)));
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_345_345;
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_346_346;
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_348_348;
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_349_349;
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_350_350;
#line 880 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_352_352;

#line 881 "opt_debug.m"
                                                                    {
#line 881 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_349_349 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Size_28);
                                                                    }
#line 882 "opt_debug.m"
                                                                    {
#line 882 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_352_352 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                                                                    }
#line 881 "opt_debug.m"
                                                                    {
#line 881 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_350_350 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_352_352);
                                                                    }
#line 881 "opt_debug.m"
                                                                    {
#line 881 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_348_348 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_349_349, ll_backend__opt_debug__V_350_350);
                                                                    }
#line 881 "opt_debug.m"
                                                                    {
#line 881 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_346_346 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_348_348);
                                                                    }
#line 881 "opt_debug.m"
                                                                    {
#line 881 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_345_345 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Name_27, ll_backend__opt_debug__V_346_346);
                                                                    }
#line 881 "opt_debug.m"
                                                                    {
#line 881 "opt_debug.m"
                                                                      return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkframe(", ll_backend__opt_debug__V_345_345);
                                                                    }
#line 880 "opt_debug.m"
                                                                  }
#line 883 "opt_debug.m"
                                                                else
#line 884 "opt_debug.m"
                                                                  {
#line 884 "opt_debug.m"
                                                                    MR_Word ll_backend__opt_debug__Kind_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__FrameInfo_23, (MR_Integer) 0)));

#line 888 "opt_debug.m"
                                                                    if ((ll_backend__opt_debug__Kind_29 == (MR_Integer) 0))
#line 889 "opt_debug.m"
                                                                      {
#line 889 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_339_339;

#line 890 "opt_debug.m"
                                                                        {
#line 890 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_339_339 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                                                                        }
#line 890 "opt_debug.m"
                                                                        {
#line 890 "opt_debug.m"
                                                                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mkdettempframe(", ll_backend__opt_debug__V_339_339);
                                                                        }
#line 889 "opt_debug.m"
                                                                      }
#line 888 "opt_debug.m"
                                                                    else
#line 886 "opt_debug.m"
                                                                      {
#line 886 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_342_342;

#line 887 "opt_debug.m"
                                                                        {
#line 887 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_342_342 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__R_str_26, (MR_String) ")");
                                                                        }
#line 887 "opt_debug.m"
                                                                        {
#line 887 "opt_debug.m"
                                                                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "mktempframe(", ll_backend__opt_debug__V_342_342);
                                                                        }
#line 886 "opt_debug.m"
                                                                      }
#line 884 "opt_debug.m"
                                                                  }
#line 871 "opt_debug.m"
                                                              }
#line 823 "opt_debug.m"
                                                            else
#line 823 "opt_debug.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 23))))
#line 1078 "opt_debug.m"
                                                                {
#line 1078 "opt_debug.m"
                                                                  MR_String ll_backend__opt_debug__V_200_200;
#line 1078 "opt_debug.m"
                                                                  MR_String ll_backend__opt_debug__V_201_201;
#line 1078 "opt_debug.m"
                                                                  MR_Word ll_backend__opt_debug__Rval_419 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1079 "opt_debug.m"
                                                                  {
#line 1079 "opt_debug.m"
                                                                    ll_backend__opt_debug__V_201_201 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_419);
                                                                  }
#line 1079 "opt_debug.m"
                                                                  {
#line 1079 "opt_debug.m"
                                                                    ll_backend__opt_debug__V_200_200 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_201_201, (MR_String) ")");
                                                                  }
#line 1079 "opt_debug.m"
                                                                  {
#line 1079 "opt_debug.m"
                                                                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "prune_tickets_to(", ll_backend__opt_debug__V_200_200);
                                                                  }
#line 1078 "opt_debug.m"
                                                                }
#line 823 "opt_debug.m"
                                                              else
#line 823 "opt_debug.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 16))))
#line 972 "opt_debug.m"
                                                                  {
#line 972 "opt_debug.m"
                                                                    MR_Word ll_backend__opt_debug__StackId_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 972 "opt_debug.m"
                                                                    MR_Word ll_backend__opt_debug__EmbeddedStackFrame_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));
#line 972 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_259_259;
#line 972 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_260_260;
#line 972 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_261_261;
#line 972 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_263_263;
#line 972 "opt_debug.m"
                                                                    MR_String ll_backend__opt_debug__V_264_264;

#line 974 "opt_debug.m"
                                                                    {
#line 974 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_260_260 = ll_backend__llds__region_stack_id_to_string_1_f_0(ll_backend__opt_debug__StackId_53);
                                                                    }
#line 975 "opt_debug.m"
                                                                    {
#line 975 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_264_264 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_54);
                                                                    }
#line 974 "opt_debug.m"
                                                                    {
#line 974 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_263_263 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_264_264, (MR_String) ")");
                                                                    }
#line 974 "opt_debug.m"
                                                                    {
#line 974 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_261_261 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_263_263);
                                                                    }
#line 973 "opt_debug.m"
                                                                    {
#line 973 "opt_debug.m"
                                                                      ll_backend__opt_debug__V_259_259 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_260_260, ll_backend__opt_debug__V_261_261);
                                                                    }
#line 973 "opt_debug.m"
                                                                    {
#line 973 "opt_debug.m"
                                                                      return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "push_region_frame(", ll_backend__opt_debug__V_259_259);
                                                                    }
#line 972 "opt_debug.m"
                                                                  }
#line 823 "opt_debug.m"
                                                                else
#line 823 "opt_debug.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 17))))
#line 978 "opt_debug.m"
                                                                    {
#line 978 "opt_debug.m"
                                                                      MR_Word ll_backend__opt_debug__FillOp_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 978 "opt_debug.m"
                                                                      MR_Word ll_backend__opt_debug__IdRval_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 978 "opt_debug.m"
                                                                      MR_Word ll_backend__opt_debug__NumLval_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 4)));
#line 978 "opt_debug.m"
                                                                      MR_Word ll_backend__opt_debug__AddrLval_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 5)));
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__FillOpStr_59;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_240_240;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_241_241;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_243_243;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_244_244;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_245_245;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_247_247;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_248_248;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_249_249;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_251_251;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_252_252;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_253_253;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_255_255;
#line 978 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_256_256;
#line 978 "opt_debug.m"
                                                                      MR_Word ll_backend__opt_debug__EmbeddedStackFrame_413 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 982 "opt_debug.m"
                                                                      if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 995 "opt_debug.m"
                                                                        ll_backend__opt_debug__FillOpStr_59 = (MR_String) "commit";
#line 982 "opt_debug.m"
                                                                      else
#line 982 "opt_debug.m"
                                                                        if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 992 "opt_debug.m"
                                                                          ll_backend__opt_debug__FillOpStr_59 = (MR_String) "disj_snapshot";
#line 982 "opt_debug.m"
                                                                        else
#line 982 "opt_debug.m"
                                                                          if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 980 "opt_debug.m"
                                                                            ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_protect";
#line 982 "opt_debug.m"
                                                                          else
#line 982 "opt_debug.m"
                                                                            if ((ll_backend__opt_debug__FillOp_55 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 989 "opt_debug.m"
                                                                              ll_backend__opt_debug__FillOpStr_59 = (MR_String) "semi_disj_protect";
#line 982 "opt_debug.m"
                                                                            else
#line 982 "opt_debug.m"
                                                                              {
#line 982 "opt_debug.m"
                                                                                MR_Word ll_backend__opt_debug__V_436_436 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__FillOp_55, (MR_Integer) 0)));

#line 982 "opt_debug.m"
                                                                                if ((ll_backend__opt_debug__V_436_436 == (MR_Integer) 1))
#line 987 "opt_debug.m"
                                                                                  ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(not_removed_at_start_of_else)";
#line 982 "opt_debug.m"
                                                                                else
#line 984 "opt_debug.m"
                                                                                  ll_backend__opt_debug__FillOpStr_59 = (MR_String) "ite_snapshot(removed_at_start_of_else)";
#line 982 "opt_debug.m"
                                                                              }
#line 1000 "opt_debug.m"
                                                                      {
#line 1000 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_244_244 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_413);
                                                                      }
#line 1001 "opt_debug.m"
                                                                      {
#line 1001 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_248_248 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__IdRval_56);
                                                                      }
#line 1002 "opt_debug.m"
                                                                      {
#line 1002 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_252_252 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__NumLval_57);
                                                                      }
#line 1003 "opt_debug.m"
                                                                      {
#line 1003 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_256_256 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__AddrLval_58);
                                                                      }
#line 1002 "opt_debug.m"
                                                                      {
#line 1002 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_255_255 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_256_256, (MR_String) ")");
                                                                      }
#line 1002 "opt_debug.m"
                                                                      {
#line 1002 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_253_253 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_255_255);
                                                                      }
#line 1001 "opt_debug.m"
                                                                      {
#line 1001 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_251_251 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_252_252, ll_backend__opt_debug__V_253_253);
                                                                      }
#line 1001 "opt_debug.m"
                                                                      {
#line 1001 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_249_249 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_251_251);
                                                                      }
#line 1000 "opt_debug.m"
                                                                      {
#line 1000 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_247_247 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_248_248, ll_backend__opt_debug__V_249_249);
                                                                      }
#line 1000 "opt_debug.m"
                                                                      {
#line 1000 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_245_245 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_247_247);
                                                                      }
#line 999 "opt_debug.m"
                                                                      {
#line 999 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_243_243 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_244_244, ll_backend__opt_debug__V_245_245);
                                                                      }
#line 999 "opt_debug.m"
                                                                      {
#line 999 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_241_241 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_243_243);
                                                                      }
#line 998 "opt_debug.m"
                                                                      {
#line 998 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_240_240 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__FillOpStr_59, ll_backend__opt_debug__V_241_241);
                                                                      }
#line 998 "opt_debug.m"
                                                                      {
#line 998 "opt_debug.m"
                                                                        return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_fill_frame(", ll_backend__opt_debug__V_240_240);
                                                                      }
#line 978 "opt_debug.m"
                                                                    }
#line 823 "opt_debug.m"
                                                                  else
#line 823 "opt_debug.m"
                                                                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 18))))
#line 1005 "opt_debug.m"
                                                                      {
#line 1005 "opt_debug.m"
                                                                        MR_Word ll_backend__opt_debug__SetOp_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1005 "opt_debug.m"
                                                                        MR_Word ll_backend__opt_debug__ValueRval_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 3)));
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__SetOpStr_62;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_227_227;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_228_228;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_230_230;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_231_231;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_232_232;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_234_234;
#line 1005 "opt_debug.m"
                                                                        MR_String ll_backend__opt_debug__V_235_235;
#line 1005 "opt_debug.m"
                                                                        MR_Word ll_backend__opt_debug__EmbeddedStackFrame_414 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1009 "opt_debug.m"
                                                                        if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 4))
#line 1019 "opt_debug.m"
                                                                          ll_backend__opt_debug__SetOpStr_62 = (MR_String) "commit_num_entries";
#line 1009 "opt_debug.m"
                                                                        else
#line 1009 "opt_debug.m"
                                                                          if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 2))
#line 1013 "opt_debug.m"
                                                                            ll_backend__opt_debug__SetOpStr_62 = (MR_String) "disj_num_protects";
#line 1009 "opt_debug.m"
                                                                          else
#line 1009 "opt_debug.m"
                                                                            if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 3))
#line 1016 "opt_debug.m"
                                                                              ll_backend__opt_debug__SetOpStr_62 = (MR_String) "disj_num_snapshots";
#line 1009 "opt_debug.m"
                                                                            else
#line 1009 "opt_debug.m"
                                                                              if ((ll_backend__opt_debug__SetOp_60 == (MR_Integer) 0))
#line 1007 "opt_debug.m"
                                                                                ll_backend__opt_debug__SetOpStr_62 = (MR_String) "ite_num_protects";
#line 1009 "opt_debug.m"
                                                                              else
#line 1010 "opt_debug.m"
                                                                                ll_backend__opt_debug__SetOpStr_62 = (MR_String) "ite_num_snapshots";
#line 1024 "opt_debug.m"
                                                                        {
#line 1024 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_231_231 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_414);
                                                                        }
#line 1025 "opt_debug.m"
                                                                        {
#line 1025 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_235_235 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__ValueRval_61);
                                                                        }
#line 1024 "opt_debug.m"
                                                                        {
#line 1024 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_234_234 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_235_235, (MR_String) ")");
                                                                        }
#line 1024 "opt_debug.m"
                                                                        {
#line 1024 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_232_232 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_234_234);
                                                                        }
#line 1023 "opt_debug.m"
                                                                        {
#line 1023 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_230_230 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_231_231, ll_backend__opt_debug__V_232_232);
                                                                        }
#line 1023 "opt_debug.m"
                                                                        {
#line 1023 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_228_228 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_230_230);
                                                                        }
#line 1022 "opt_debug.m"
                                                                        {
#line 1022 "opt_debug.m"
                                                                          ll_backend__opt_debug__V_227_227 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SetOpStr_62, ll_backend__opt_debug__V_228_228);
                                                                        }
#line 1022 "opt_debug.m"
                                                                        {
#line 1022 "opt_debug.m"
                                                                          return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "region_set_fixed_slot(", ll_backend__opt_debug__V_227_227);
                                                                        }
#line 1005 "opt_debug.m"
                                                                      }
#line 823 "opt_debug.m"
                                                                    else
#line 823 "opt_debug.m"
                                                                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 21))))
#line 1066 "opt_debug.m"
                                                                        {
#line 1066 "opt_debug.m"
                                                                          MR_String ll_backend__opt_debug__V_208_208;
#line 1066 "opt_debug.m"
                                                                          MR_String ll_backend__opt_debug__V_209_209;
#line 1066 "opt_debug.m"
                                                                          MR_Word ll_backend__opt_debug__Rval_417 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1066 "opt_debug.m"
                                                                          MR_Word ll_backend__opt_debug___Reason_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1067 "opt_debug.m"
                                                                          {
#line 1067 "opt_debug.m"
                                                                            ll_backend__opt_debug__V_209_209 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_417);
                                                                          }
#line 1067 "opt_debug.m"
                                                                          {
#line 1067 "opt_debug.m"
                                                                            ll_backend__opt_debug__V_208_208 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_209_209, (MR_String) ", _)");
                                                                          }
#line 1067 "opt_debug.m"
                                                                          {
#line 1067 "opt_debug.m"
                                                                            return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "reset_ticket(", ll_backend__opt_debug__V_208_208);
                                                                          }
#line 1066 "opt_debug.m"
                                                                        }
#line 823 "opt_debug.m"
                                                                      else
#line 823 "opt_debug.m"
                                                                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 14))))
#line 966 "opt_debug.m"
                                                                          {
#line 966 "opt_debug.m"
                                                                            MR_String ll_backend__opt_debug__V_271_271;
#line 966 "opt_debug.m"
                                                                            MR_String ll_backend__opt_debug__V_272_272;
#line 966 "opt_debug.m"
                                                                            MR_Word ll_backend__opt_debug__Rval_411 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 967 "opt_debug.m"
                                                                            {
#line 967 "opt_debug.m"
                                                                              ll_backend__opt_debug__V_272_272 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Rval_411);
                                                                            }
#line 967 "opt_debug.m"
                                                                            {
#line 967 "opt_debug.m"
                                                                              ll_backend__opt_debug__V_271_271 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_272_272, (MR_String) ")");
                                                                            }
#line 967 "opt_debug.m"
                                                                            {
#line 967 "opt_debug.m"
                                                                              return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_hp(", ll_backend__opt_debug__V_271_271);
                                                                            }
#line 966 "opt_debug.m"
                                                                          }
#line 823 "opt_debug.m"
                                                                        else
#line 823 "opt_debug.m"
                                                                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 915 "opt_debug.m"
                                                                            {
#line 915 "opt_debug.m"
                                                                              MR_String ll_backend__opt_debug__V_308_308;
#line 915 "opt_debug.m"
                                                                              MR_String ll_backend__opt_debug__V_309_309;
#line 915 "opt_debug.m"
                                                                              MR_Word ll_backend__opt_debug__Lval_407 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 916 "opt_debug.m"
                                                                              {
#line 916 "opt_debug.m"
                                                                                ll_backend__opt_debug__V_309_309 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_407);
                                                                              }
#line 916 "opt_debug.m"
                                                                              {
#line 916 "opt_debug.m"
                                                                                ll_backend__opt_debug__V_308_308 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_309_309, (MR_String) ")");
                                                                              }
#line 916 "opt_debug.m"
                                                                              {
#line 916 "opt_debug.m"
                                                                                return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "restore_maxfr(", ll_backend__opt_debug__V_308_308);
                                                                              }
#line 915 "opt_debug.m"
                                                                            }
#line 823 "opt_debug.m"
                                                                          else
#line 823 "opt_debug.m"
                                                                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 912 "opt_debug.m"
                                                                              {
#line 912 "opt_debug.m"
                                                                                MR_String ll_backend__opt_debug__V_312_312;
#line 912 "opt_debug.m"
                                                                                MR_String ll_backend__opt_debug__V_313_313;
#line 912 "opt_debug.m"
                                                                                MR_Word ll_backend__opt_debug__Lval_406 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 913 "opt_debug.m"
                                                                                {
#line 913 "opt_debug.m"
                                                                                  ll_backend__opt_debug__V_313_313 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_406);
                                                                                }
#line 913 "opt_debug.m"
                                                                                {
#line 913 "opt_debug.m"
                                                                                  ll_backend__opt_debug__V_312_312 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_313_313, (MR_String) ")");
                                                                                }
#line 913 "opt_debug.m"
                                                                                {
#line 913 "opt_debug.m"
                                                                                  return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "save_maxfr(", ll_backend__opt_debug__V_312_312);
                                                                                }
#line 912 "opt_debug.m"
                                                                              }
#line 823 "opt_debug.m"
                                                                            else
#line 823 "opt_debug.m"
                                                                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__Instr_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 0)))) == (MR_Integer) 20))))
#line 1063 "opt_debug.m"
                                                                                {
#line 1063 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__V_212_212;
#line 1063 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__V_213_213;
#line 1063 "opt_debug.m"
                                                                                  MR_Word ll_backend__opt_debug__Lval_416 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));

#line 1064 "opt_debug.m"
                                                                                  {
#line 1064 "opt_debug.m"
                                                                                    ll_backend__opt_debug__V_213_213 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_5, ll_backend__opt_debug__Lval_416);
                                                                                  }
#line 1064 "opt_debug.m"
                                                                                  {
#line 1064 "opt_debug.m"
                                                                                    ll_backend__opt_debug__V_212_212 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_213_213, (MR_String) ")");
                                                                                  }
#line 1064 "opt_debug.m"
                                                                                  {
#line 1064 "opt_debug.m"
                                                                                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "store_ticket(", ll_backend__opt_debug__V_212_212);
                                                                                  }
#line 1063 "opt_debug.m"
                                                                                }
#line 823 "opt_debug.m"
                                                                              else
#line 1027 "opt_debug.m"
                                                                                {
#line 1027 "opt_debug.m"
                                                                                  MR_Word ll_backend__opt_debug__UseOp_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 1)));
#line 1027 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__UseOpStr_64;
#line 1027 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__V_220_220;
#line 1027 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__V_221_221;
#line 1027 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__V_223_223;
#line 1027 "opt_debug.m"
                                                                                  MR_String ll_backend__opt_debug__V_224_224;
#line 1027 "opt_debug.m"
                                                                                  MR_Word ll_backend__opt_debug__EmbeddedStackFrame_415 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Instr_7, (MR_Integer) 2)));

#line 1031 "opt_debug.m"
                                                                                  if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1056 "opt_debug.m"
                                                                                    ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_failure";
#line 1031 "opt_debug.m"
                                                                                  else
#line 1031 "opt_debug.m"
                                                                                    if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1053 "opt_debug.m"
                                                                                      ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_commit_success";
#line 1031 "opt_debug.m"
                                                                                    else
#line 1031 "opt_debug.m"
                                                                                      if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1047 "opt_debug.m"
                                                                                        ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_last";
#line 1031 "opt_debug.m"
                                                                                      else
#line 1031 "opt_debug.m"
                                                                                        if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1044 "opt_debug.m"
                                                                                          ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_later";
#line 1031 "opt_debug.m"
                                                                                        else
#line 1031 "opt_debug.m"
                                                                                          if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1050 "opt_debug.m"
                                                                                            ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_disj_nonlast_semi_commit";
#line 1031 "opt_debug.m"
                                                                                          else
#line 1031 "opt_debug.m"
                                                                                            if ((ll_backend__opt_debug__UseOp_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1041 "opt_debug.m"
                                                                                              ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_nondet_cond_fail";
#line 1031 "opt_debug.m"
                                                                                            else
#line 1031 "opt_debug.m"
                                                                                              if (((MR_tag((MR_Word) ll_backend__opt_debug__UseOp_63)) == (MR_mktag((MR_Integer) 2))))
#line 1031 "opt_debug.m"
                                                                                                {
#line 1031 "opt_debug.m"
                                                                                                  MR_Word ll_backend__opt_debug__V_437_437 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

#line 1031 "opt_debug.m"
                                                                                                  if ((ll_backend__opt_debug__V_437_437 == (MR_Integer) 1))
#line 1039 "opt_debug.m"
                                                                                                    ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(nondet)";
#line 1031 "opt_debug.m"
                                                                                                  else
#line 1036 "opt_debug.m"
                                                                                                    ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_else(semidet)";
#line 1031 "opt_debug.m"
                                                                                                }
#line 1031 "opt_debug.m"
                                                                                              else
#line 1031 "opt_debug.m"
                                                                                                {
#line 1031 "opt_debug.m"
                                                                                                  MR_Word ll_backend__opt_debug__V_438_438 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__UseOp_63, (MR_Integer) 0)));

#line 1031 "opt_debug.m"
                                                                                                  if ((ll_backend__opt_debug__V_438_438 == (MR_Integer) 1))
#line 1033 "opt_debug.m"
                                                                                                    ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(nondet)";
#line 1031 "opt_debug.m"
                                                                                                  else
#line 1030 "opt_debug.m"
                                                                                                    ll_backend__opt_debug__UseOpStr_64 = (MR_String) "region_ite_then(semidet)";
#line 1031 "opt_debug.m"
                                                                                                }
#line 1061 "opt_debug.m"
                                                                                  {
#line 1061 "opt_debug.m"
                                                                                    ll_backend__opt_debug__V_224_224 = ll_backend__opt_debug__dump_embedded_stack_frame_id_1_f_0(ll_backend__opt_debug__EmbeddedStackFrame_415);
                                                                                  }
#line 1060 "opt_debug.m"
                                                                                  {
#line 1060 "opt_debug.m"
                                                                                    ll_backend__opt_debug__V_223_223 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_224_224, (MR_String) ")");
                                                                                  }
#line 1060 "opt_debug.m"
                                                                                  {
#line 1060 "opt_debug.m"
                                                                                    ll_backend__opt_debug__V_221_221 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_223_223);
                                                                                  }
#line 1059 "opt_debug.m"
                                                                                  {
#line 1059 "opt_debug.m"
                                                                                    ll_backend__opt_debug__V_220_220 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__UseOpStr_64, ll_backend__opt_debug__V_221_221);
                                                                                  }
#line 1059 "opt_debug.m"
                                                                                  {
#line 1059 "opt_debug.m"
                                                                                    return ll_backend__opt_debug__Str_8 = mercury__string__f_43_43_2_f_0((MR_String) "use_and_maybe_pop_region_frame(", ll_backend__opt_debug__V_220_220);
                                                                                  }
#line 1027 "opt_debug.m"
                                                                                }
#line 823 "opt_debug.m"
    return ll_backend__opt_debug__Str_8;
#line 823 "opt_debug.m"
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
#line 818 "opt_debug.m"
  {
#line 818 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 818 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 818 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 818 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "leaf";
#line 818 "opt_debug.m"
    else
#line 819 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "nonleaf";
#line 818 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 818 "opt_debug.m"
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
#line 814 "opt_debug.m"
  {
#line 814 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 814 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 814 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 814 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_det";
#line 814 "opt_debug.m"
    else
#line 814 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 2))
#line 816 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_non";
#line 814 "opt_debug.m"
      else
#line 815 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "model_semi";
#line 814 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 814 "opt_debug.m"
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
#line 811 "opt_debug.m"
  {
#line 811 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 811 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 811 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 812 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "no";
#line 811 "opt_debug.m"
    else
#line 811 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "yes";
#line 811 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 811 "opt_debug.m"
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
#line 737 "opt_debug.m"
  {
#line 737 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 737 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 737 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 737 "opt_debug.m"
    else
#line 738 "opt_debug.m"
      {
#line 738 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Addr_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 738 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Addrs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 738 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 738 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 738 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 739 "opt_debug.m"
        {
#line 739 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addr_6);
        }
#line 739 "opt_debug.m"
        {
#line 739 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_code_addrs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Addrs_7);
        }
#line 739 "opt_debug.m"
        {
#line 739 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 738 "opt_debug.m"
        {
#line 738 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
#line 738 "opt_debug.m"
      }
#line 737 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 737 "opt_debug.m"
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
#line 721 "opt_debug.m"
  {
#line 721 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 721 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 721 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "succip";
#line 721 "opt_debug.m"
    else
#line 721 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 728 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_fail";
#line 721 "opt_debug.m"
      else
#line 721 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 735 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_not_reached";
#line 721 "opt_debug.m"
        else
#line 721 "opt_debug.m"
          if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 727 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_redo";
#line 721 "opt_debug.m"
          else
#line 721 "opt_debug.m"
            if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 730 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_trace_redo_fail_deep";
#line 721 "opt_debug.m"
            else
#line 721 "opt_debug.m"
              if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 729 "opt_debug.m"
                ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_trace_redo_fail_shallow";
#line 721 "opt_debug.m"
              else
#line 721 "opt_debug.m"
                if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 723 "opt_debug.m"
                  {
#line 723 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 723 "opt_debug.m"
                    {
#line 723 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_7);
                    }
#line 723 "opt_debug.m"
                  }
#line 721 "opt_debug.m"
                else
#line 721 "opt_debug.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 721 "opt_debug.m"
                    {
#line 721 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__Label_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 721 "opt_debug.m"
                      {
#line 721 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_5);
                      }
#line 721 "opt_debug.m"
                    }
#line 721 "opt_debug.m"
                  else
#line 721 "opt_debug.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 733 "opt_debug.m"
                      {
#line 733 "opt_debug.m"
                        MR_Word ll_backend__opt_debug__Variant_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 733 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_24_24;

#line 734 "opt_debug.m"
                        {
#line 734 "opt_debug.m"
                          ll_backend__opt_debug__V_24_24 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_22);
                        }
#line 733 "opt_debug.m"
                        {
#line 733 "opt_debug.m"
                          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_class_method_", ll_backend__opt_debug__V_24_24);
                        }
#line 733 "opt_debug.m"
                      }
#line 721 "opt_debug.m"
                    else
#line 721 "opt_debug.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 731 "opt_debug.m"
                        {
#line 731 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__Variant_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 731 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_20_20;

#line 732 "opt_debug.m"
                          {
#line 732 "opt_debug.m"
                            ll_backend__opt_debug__V_20_20 = ll_backend__llds_out__llds_out_code_addr__ho_call_variant_to_string_1_f_0(ll_backend__opt_debug__Variant_18);
                          }
#line 731 "opt_debug.m"
                          {
#line 731 "opt_debug.m"
                            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "do_call_closure_", ll_backend__opt_debug__V_20_20);
                          }
#line 731 "opt_debug.m"
                        }
#line 721 "opt_debug.m"
                      else
#line 721 "opt_debug.m"
                        {
#line 721 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 721 "opt_debug.m"
                          if ((ll_backend__opt_debug__V_26_26 == (MR_Integer) 0))
#line 725 "opt_debug.m"
                            ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_succeed";
#line 721 "opt_debug.m"
                          else
#line 726 "opt_debug.m"
                            ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "do_last_succeed";
#line 721 "opt_debug.m"
                        }
#line 721 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 721 "opt_debug.m"
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
#line 706 "opt_debug.m"
  {
#line 706 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 706 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 706 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 706 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 706 "opt_debug.m"
    else
#line 707 "opt_debug.m"
      {
#line 707 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MR_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 707 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MRs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 708 "opt_debug.m"
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__N_3 > (MR_Integer) 0);
#line 717 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 715 "opt_debug.m"
          {
#line 715 "opt_debug.m"
            MR_String ll_backend__opt_debug__MR_str_13;
#line 715 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_15_15;
#line 715 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_17_17;
#line 715 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__V_18_18;

#line 712 "opt_debug.m"
            if ((ll_backend__opt_debug__MR_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 714 "opt_debug.m"
              ll_backend__opt_debug__MR_str_13 = (MR_String) "no";
#line 712 "opt_debug.m"
            else
#line 710 "opt_debug.m"
              {
#line 710 "opt_debug.m"
                MR_Word ll_backend__opt_debug__R_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MR_8, (MR_Integer) 0)));

#line 711 "opt_debug.m"
                {
#line 711 "opt_debug.m"
                  ll_backend__opt_debug__MR_str_13 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_12);
                }
#line 710 "opt_debug.m"
              }
#line 716 "opt_debug.m"
            ll_backend__opt_debug__V_18_18 = (ll_backend__opt_debug__N_3 - (MR_Integer) 1);
#line 716 "opt_debug.m"
            {
#line 716 "opt_debug.m"
              ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_maybe_rvals_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MRs_9, ll_backend__opt_debug__V_18_18);
            }
#line 716 "opt_debug.m"
            {
#line 716 "opt_debug.m"
              ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_17_17);
            }
#line 716 "opt_debug.m"
            {
#line 716 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__MR_str_13, ll_backend__opt_debug__V_15_15);
            }
#line 715 "opt_debug.m"
          }
#line 717 "opt_debug.m"
        else
#line 718 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "truncated";
#line 707 "opt_debug.m"
      }
#line 706 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 706 "opt_debug.m"
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
#line 791 "opt_debug.m"
  {
#line 791 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 791 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 791 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__ProcLabel_3)) == (MR_mktag((MR_Integer) 0))))
#line 791 "opt_debug.m"
      {
#line 791 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Module_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
#line 791 "opt_debug.m"
        MR_Word ll_backend__opt_debug__PredModule_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__PredName_8 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
#line 791 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
#line 791 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Mode_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__ExtraModule_11;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_37_37;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_38_38;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_39_39;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_41_41;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_42_42;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_44_44;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_45_45;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_46_46;
#line 791 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_48_48;
#line 790 "opt_debug.m"
        MR_Word ll_backend__opt_debug___PredOrFunc_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));

#line 792 "opt_debug.m"
        {
#line 792 "opt_debug.m"
          ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____sym_name_0_0(ll_backend__opt_debug__Module_5, ll_backend__opt_debug__PredModule_7);
        }
#line 794 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 793 "opt_debug.m"
          ll_backend__opt_debug__ExtraModule_11 = (MR_String) "";
#line 794 "opt_debug.m"
        else
#line 795 "opt_debug.m"
          {
#line 795 "opt_debug.m"
            MR_String ll_backend__opt_debug__PredModuleName_12;

#line 795 "opt_debug.m"
            {
#line 795 "opt_debug.m"
              ll_backend__opt_debug__PredModuleName_12 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__PredModule_7);
            }
#line 796 "opt_debug.m"
            {
#line 796 "opt_debug.m"
              ll_backend__opt_debug__ExtraModule_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredModuleName_12, (MR_String) "_");
            }
#line 795 "opt_debug.m"
          }
#line 798 "opt_debug.m"
        {
#line 798 "opt_debug.m"
          ll_backend__opt_debug__V_38_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_5);
        }
#line 799 "opt_debug.m"
        {
#line 799 "opt_debug.m"
          ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_9);
        }
#line 799 "opt_debug.m"
        {
#line 799 "opt_debug.m"
          ll_backend__opt_debug__V_48_48 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_10);
        }
#line 799 "opt_debug.m"
        {
#line 799 "opt_debug.m"
          ll_backend__opt_debug__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_48_48);
        }
#line 799 "opt_debug.m"
        {
#line 799 "opt_debug.m"
          ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, ll_backend__opt_debug__V_46_46);
        }
#line 799 "opt_debug.m"
        {
#line 799 "opt_debug.m"
          ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_44_44);
        }
#line 798 "opt_debug.m"
        {
#line 798 "opt_debug.m"
          ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__PredName_8, ll_backend__opt_debug__V_42_42);
        }
#line 798 "opt_debug.m"
        {
#line 798 "opt_debug.m"
          ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_41_41);
        }
#line 798 "opt_debug.m"
        {
#line 798 "opt_debug.m"
          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
        }
#line 798 "opt_debug.m"
        {
#line 798 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ExtraModule_11, ll_backend__opt_debug__V_37_37);
        }
#line 791 "opt_debug.m"
      }
#line 791 "opt_debug.m"
    else
#line 803 "opt_debug.m"
      {
#line 803 "opt_debug.m"
        MR_Word ll_backend__opt_debug__SpecialPredId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 1)));
#line 803 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TypeModule_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 2)));
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__TypeName_15 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 3)));
#line 803 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__TypeArity_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 4)));
#line 803 "opt_debug.m"
        MR_Word ll_backend__opt_debug__TypeCtor_17;
#line 803 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_18_18;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_19_19;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_20_20;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_22_22;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_23_23;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_24_24;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_26_26;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_29_29;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_32_32;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_33_33;
#line 803 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_35_35;
#line 803 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Module_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 0)));
#line 803 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__Mode_50 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ProcLabel_3, (MR_Integer) 5)));

#line 804 "opt_debug.m"
        {
#line 804 "opt_debug.m"
          ll_backend__opt_debug__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 804 "opt_debug.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 0) = ((MR_Box) (ll_backend__opt_debug__TypeModule_14));
#line 804 "opt_debug.m"
          MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_18_18, 1) = ((MR_Box) (ll_backend__opt_debug__TypeName_15));
#line 804 "opt_debug.m"
        }
#line 804 "opt_debug.m"
        {
#line 804 "opt_debug.m"
          ll_backend__opt_debug__TypeCtor_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 804 "opt_debug.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 0) = ((MR_Box) (ll_backend__opt_debug__V_18_18));
#line 804 "opt_debug.m"
          MR_hl_field(MR_mktag(0), ll_backend__opt_debug__TypeCtor_17, 1) = ((MR_Box) (ll_backend__opt_debug__TypeArity_16));
#line 804 "opt_debug.m"
        }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          ll_backend__opt_debug__V_19_19 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__Module_49);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_23_23 = hlds__special_pred__special_pred_name_2_f_0(ll_backend__opt_debug__SpecialPredId_13, ll_backend__opt_debug__TypeCtor_17);
        }
#line 807 "opt_debug.m"
        {
#line 807 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__TypeModule_14);
        }
#line 807 "opt_debug.m"
        {
#line 807 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = parse_tree__prog_foreign__qualify_name_2_f_0(ll_backend__opt_debug__V_28_28, ll_backend__opt_debug__TypeName_15);
        }
#line 808 "opt_debug.m"
        {
#line 808 "opt_debug.m"
          ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeArity_16);
        }
#line 808 "opt_debug.m"
        {
#line 808 "opt_debug.m"
          ll_backend__opt_debug__V_35_35 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Mode_50);
        }
#line 808 "opt_debug.m"
        {
#line 808 "opt_debug.m"
          ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_35_35);
        }
#line 808 "opt_debug.m"
        {
#line 808 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, ll_backend__opt_debug__V_33_33);
        }
#line 807 "opt_debug.m"
        {
#line 807 "opt_debug.m"
          ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_31_31);
        }
#line 807 "opt_debug.m"
        {
#line 807 "opt_debug.m"
          ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_29_29);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_26_26);
        }
#line 806 "opt_debug.m"
        {
#line 806 "opt_debug.m"
          ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, ll_backend__opt_debug__V_24_24);
        }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) "__", ll_backend__opt_debug__V_22_22);
        }
#line 805 "opt_debug.m"
        {
#line 805 "opt_debug.m"
          return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_19_19, ll_backend__opt_debug__V_20_20);
        }
#line 803 "opt_debug.m"
      }
#line 791 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 791 "opt_debug.m"
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
#line 777 "opt_debug.m"
  {
#line 777 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 777 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 777 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 777 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 777 "opt_debug.m"
    else
#line 778 "opt_debug.m"
      {
#line 778 "opt_debug.m"
        MR_Word ll_backend__opt_debug__L1_6;
#line 778 "opt_debug.m"
        MR_Word ll_backend__opt_debug__L2_7;
#line 778 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Labels_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 778 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 778 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 778 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_12_12;
#line 778 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 778 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 778 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 778 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;

#line 778 "opt_debug.m"
        ll_backend__opt_debug__L1_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
#line 778 "opt_debug.m"
        ll_backend__opt_debug__L2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
#line 779 "opt_debug.m"
        {
#line 779 "opt_debug.m"
          ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L1_6);
        }
#line 780 "opt_debug.m"
        {
#line 780 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__L2_7);
        }
#line 780 "opt_debug.m"
        {
#line 780 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_label_pairs_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_8);
        }
#line 779 "opt_debug.m"
        {
#line 779 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, ll_backend__opt_debug__V_17_17);
        }
#line 779 "opt_debug.m"
        {
#line 779 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0((MR_String) "-", ll_backend__opt_debug__V_15_15);
        }
#line 779 "opt_debug.m"
        {
#line 779 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
        }
#line 778 "opt_debug.m"
        {
#line 778 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_11_11);
        }
#line 778 "opt_debug.m"
      }
#line 777 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 777 "opt_debug.m"
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
#line 772 "opt_debug.m"
  {
#line 772 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 772 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 772 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 772 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 772 "opt_debug.m"
    else
#line 773 "opt_debug.m"
      {
#line 773 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 773 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Labels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 773 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 773 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 773 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 774 "opt_debug.m"
        {
#line 774 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
#line 774 "opt_debug.m"
        {
#line 774 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_labels_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Labels_7);
        }
#line 774 "opt_debug.m"
        {
#line 774 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 773 "opt_debug.m"
        {
#line 773 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_9_9);
        }
#line 773 "opt_debug.m"
      }
#line 772 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 772 "opt_debug.m"
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
#line 760 "opt_debug.m"
  {
#line 760 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 760 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 760 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 760 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 760 "opt_debug.m"
    else
#line 761 "opt_debug.m"
      {
#line 761 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabel_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 761 "opt_debug.m"
        MR_Word ll_backend__opt_debug__MaybeLabels_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 761 "opt_debug.m"
        MR_String ll_backend__opt_debug__LabelStr_10;
#line 761 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 761 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;

#line 765 "opt_debug.m"
        if ((ll_backend__opt_debug__MaybeLabel_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 766 "opt_debug.m"
          {
#line 767 "opt_debug.m"
            {
#line 767 "opt_debug.m"
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)));
            }
#line 766 "opt_debug.m"
          }
#line 765 "opt_debug.m"
        else
#line 763 "opt_debug.m"
          {
#line 763 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Label_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeLabel_6, (MR_Integer) 0)));

#line 764 "opt_debug.m"
            {
#line 764 "opt_debug.m"
              ll_backend__opt_debug__LabelStr_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_9);
            }
#line 763 "opt_debug.m"
          }
#line 769 "opt_debug.m"
        {
#line 769 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_labels_or_not_reached_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__MaybeLabels_7);
        }
#line 769 "opt_debug.m"
        {
#line 769 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__LabelStr_10, ll_backend__opt_debug__V_14_14);
        }
#line 769 "opt_debug.m"
        {
#line 769 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_13_13);
        }
#line 761 "opt_debug.m"
      }
#line 760 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 760 "opt_debug.m"
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
#line 742 "opt_debug.m"
  {
#line 742 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 742 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 742 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 742 "opt_debug.m"
      if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 744 "opt_debug.m"
        {
#line 744 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 744 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 744 "opt_debug.m"
          {
#line 744 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_11);
          }
#line 744 "opt_debug.m"
        }
#line 742 "opt_debug.m"
      else
#line 742 "opt_debug.m"
        {
#line 742 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 742 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ProcLabel_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 742 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_6_6;
#line 742 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_7_7;
#line 742 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_9_9;

#line 743 "opt_debug.m"
          {
#line 743 "opt_debug.m"
            ll_backend__opt_debug__V_6_6 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_5);
          }
#line 743 "opt_debug.m"
          {
#line 743 "opt_debug.m"
            ll_backend__opt_debug__V_9_9 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_4);
          }
#line 743 "opt_debug.m"
          {
#line 743 "opt_debug.m"
            ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "_i", ll_backend__opt_debug__V_9_9);
          }
#line 742 "opt_debug.m"
          {
#line 742 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_6_6, ll_backend__opt_debug__V_7_7);
          }
#line 742 "opt_debug.m"
        }
#line 742 "opt_debug.m"
    else
#line 742 "opt_debug.m"
      {
#line 742 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 742 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 753 "opt_debug.m"
          {
#line 753 "opt_debug.m"
            MR_Word ll_backend__opt_debug__ProcLabel_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 753 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 754 "opt_debug.m"
            {
#line 754 "opt_debug.m"
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__V_25_25, ll_backend__opt_debug__ProcLabel_23);
            }
#line 756 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 755 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "CUR_PROC_ENTRY";
#line 756 "opt_debug.m"
            else
#line 757 "opt_debug.m"
              {
#line 757 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_23);
              }
#line 753 "opt_debug.m"
          }
#line 742 "opt_debug.m"
        else
#line 746 "opt_debug.m"
          {
#line 746 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 746 "opt_debug.m"
            MR_Word ll_backend__opt_debug__ProcLabel_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 746 "opt_debug.m"
            MR_String ll_backend__opt_debug__N_str_16;

#line 747 "opt_debug.m"
            {
#line 747 "opt_debug.m"
              mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__N_13, &ll_backend__opt_debug__N_str_16);
            }
#line 748 "opt_debug.m"
            {
#line 748 "opt_debug.m"
              ll_backend__opt_debug__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(ll_backend__opt_debug__V_25_25, ll_backend__opt_debug__ProcLabel_14);
            }
#line 750 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 749 "opt_debug.m"
              {
#line 749 "opt_debug.m"
                {
#line 749 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "local_", ll_backend__opt_debug__N_str_16);
                }
#line 749 "opt_debug.m"
              }
#line 750 "opt_debug.m"
            else
#line 751 "opt_debug.m"
              {
#line 751 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_18_18;
#line 751 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_19_19;

#line 751 "opt_debug.m"
                {
#line 751 "opt_debug.m"
                  ll_backend__opt_debug__V_18_18 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_14);
                }
#line 751 "opt_debug.m"
                {
#line 751 "opt_debug.m"
                  ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__N_str_16);
                }
#line 751 "opt_debug.m"
                {
#line 751 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_18_18, ll_backend__opt_debug__V_19_19);
                }
#line 751 "opt_debug.m"
              }
#line 746 "opt_debug.m"
          }
#line 742 "opt_debug.m"
      }
#line 742 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 742 "opt_debug.m"
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
#line 663 "opt_debug.m"
  {
#line 663 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 663 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 663 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 691 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&";
#line 663 "opt_debug.m"
    else
#line 663 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 692 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "|";
#line 663 "opt_debug.m"
      else
#line 663 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 693 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "^";
#line 663 "opt_debug.m"
        else
#line 663 "opt_debug.m"
          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 704 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "body";
#line 663 "opt_debug.m"
          else
#line 663 "opt_debug.m"
            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 39)))))
#line 665 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound=";
#line 663 "opt_debug.m"
            else
#line 663 "opt_debug.m"
              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 40)))))
#line 664 "opt_debug.m"
                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "compound<";
#line 663 "opt_debug.m"
              else
#line 663 "opt_debug.m"
                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 695 "opt_debug.m"
                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "==";
#line 663 "opt_debug.m"
                else
#line 663 "opt_debug.m"
                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 30)))))
#line 676 "opt_debug.m"
                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl/";
#line 663 "opt_debug.m"
                  else
#line 663 "opt_debug.m"
                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 31)))))
#line 677 "opt_debug.m"
                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl==";
#line 663 "opt_debug.m"
                    else
#line 663 "opt_debug.m"
                      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 38)))))
#line 684 "opt_debug.m"
                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_from_dword";
#line 663 "opt_debug.m"
                      else
#line 663 "opt_debug.m"
                        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 36)))))
#line 680 "opt_debug.m"
                          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>=";
#line 663 "opt_debug.m"
                        else
#line 663 "opt_debug.m"
                          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 34)))))
#line 682 "opt_debug.m"
                            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl>";
#line 663 "opt_debug.m"
                          else
#line 663 "opt_debug.m"
                            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 35)))))
#line 679 "opt_debug.m"
                              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<=";
#line 663 "opt_debug.m"
                            else
#line 663 "opt_debug.m"
                              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 33)))))
#line 681 "opt_debug.m"
                                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl<";
#line 663 "opt_debug.m"
                              else
#line 663 "opt_debug.m"
                                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 28)))))
#line 674 "opt_debug.m"
                                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl-";
#line 663 "opt_debug.m"
                                else
#line 663 "opt_debug.m"
                                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 32)))))
#line 678 "opt_debug.m"
                                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl!=";
#line 663 "opt_debug.m"
                                  else
#line 663 "opt_debug.m"
                                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 27)))))
#line 673 "opt_debug.m"
                                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl+";
#line 663 "opt_debug.m"
                                    else
#line 663 "opt_debug.m"
                                      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 29)))))
#line 675 "opt_debug.m"
                                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "fl*";
#line 663 "opt_debug.m"
                                      else
#line 663 "opt_debug.m"
                                        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 37)))))
#line 683 "opt_debug.m"
                                          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "float_word_bits";
#line 663 "opt_debug.m"
                                        else
#line 663 "opt_debug.m"
                                          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 685 "opt_debug.m"
                                            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "+";
#line 663 "opt_debug.m"
                                          else
#line 663 "opt_debug.m"
                                            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 688 "opt_debug.m"
                                              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "/";
#line 663 "opt_debug.m"
                                            else
#line 663 "opt_debug.m"
                                              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 25)))))
#line 702 "opt_debug.m"
                                                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">=";
#line 663 "opt_debug.m"
                                              else
#line 663 "opt_debug.m"
                                                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 23)))))
#line 700 "opt_debug.m"
                                                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) ">";
#line 663 "opt_debug.m"
                                                else
#line 663 "opt_debug.m"
                                                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 24)))))
#line 701 "opt_debug.m"
                                                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<=";
#line 663 "opt_debug.m"
                                                  else
#line 663 "opt_debug.m"
                                                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 22)))))
#line 699 "opt_debug.m"
                                                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "<";
#line 663 "opt_debug.m"
                                                    else
#line 663 "opt_debug.m"
                                                      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 694 "opt_debug.m"
                                                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "%";
#line 663 "opt_debug.m"
                                                      else
#line 663 "opt_debug.m"
                                                        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 687 "opt_debug.m"
                                                          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "*";
#line 663 "opt_debug.m"
                                                        else
#line 663 "opt_debug.m"
                                                          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 686 "opt_debug.m"
                                                            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "-";
#line 663 "opt_debug.m"
                                                          else
#line 663 "opt_debug.m"
                                                            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 697 "opt_debug.m"
                                                              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "&&";
#line 663 "opt_debug.m"
                                                            else
#line 663 "opt_debug.m"
                                                              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 698 "opt_debug.m"
                                                                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "||";
#line 663 "opt_debug.m"
                                                              else
#line 663 "opt_debug.m"
                                                                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 696 "opt_debug.m"
                                                                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "!=";
#line 663 "opt_debug.m"
                                                                else
#line 663 "opt_debug.m"
                                                                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 21)))))
#line 703 "opt_debug.m"
                                                                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "strcmp";
#line 663 "opt_debug.m"
                                                                  else
#line 663 "opt_debug.m"
                                                                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 666 "opt_debug.m"
                                                                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str==";
#line 663 "opt_debug.m"
                                                                    else
#line 663 "opt_debug.m"
                                                                      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 20)))))
#line 669 "opt_debug.m"
                                                                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>=";
#line 663 "opt_debug.m"
                                                                      else
#line 663 "opt_debug.m"
                                                                        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 18)))))
#line 671 "opt_debug.m"
                                                                          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str>";
#line 663 "opt_debug.m"
                                                                        else
#line 663 "opt_debug.m"
                                                                          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 19)))))
#line 668 "opt_debug.m"
                                                                            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<=";
#line 663 "opt_debug.m"
                                                                          else
#line 663 "opt_debug.m"
                                                                            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 670 "opt_debug.m"
                                                                              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str<";
#line 663 "opt_debug.m"
                                                                            else
#line 663 "opt_debug.m"
                                                                              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 667 "opt_debug.m"
                                                                                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "str!=";
#line 663 "opt_debug.m"
                                                                              else
#line 663 "opt_debug.m"
                                                                                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 689 "opt_debug.m"
                                                                                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked<<";
#line 663 "opt_debug.m"
                                                                                else
#line 663 "opt_debug.m"
                                                                                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 690 "opt_debug.m"
                                                                                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unchecked>>";
#line 663 "opt_debug.m"
                                                                                  else
#line 663 "opt_debug.m"
                                                                                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 26)))))
#line 672 "opt_debug.m"
                                                                                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unsigned<=";
#line 663 "opt_debug.m"
                                                                                    else
#line 663 "opt_debug.m"
                                                                                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "array_index";
#line 663 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 663 "opt_debug.m"
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
#line 651 "opt_debug.m"
  {
#line 651 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 651 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 651 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 6))
#line 658 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "bitwise_complement";
#line 651 "opt_debug.m"
    else
#line 651 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 8))
#line 659 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string";
#line 651 "opt_debug.m"
      else
#line 651 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 9))
#line 660 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string2";
#line 651 "opt_debug.m"
        else
#line 651 "opt_debug.m"
          if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 10))
#line 661 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "hash_string3";
#line 651 "opt_debug.m"
          else
#line 651 "opt_debug.m"
            if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 7))
#line 657 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "not";
#line 651 "opt_debug.m"
            else
#line 651 "opt_debug.m"
              if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 4))
#line 655 "opt_debug.m"
                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "mkbody";
#line 651 "opt_debug.m"
              else
#line 651 "opt_debug.m"
                if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 0))
#line 651 "opt_debug.m"
                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "mktag";
#line 651 "opt_debug.m"
                else
#line 651 "opt_debug.m"
                  if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 3))
#line 654 "opt_debug.m"
                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "strip_tag";
#line 651 "opt_debug.m"
                  else
#line 651 "opt_debug.m"
                    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 1))
#line 652 "opt_debug.m"
                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "tag";
#line 651 "opt_debug.m"
                    else
#line 651 "opt_debug.m"
                      if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 5))
#line 656 "opt_debug.m"
                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unmkbody";
#line 651 "opt_debug.m"
                      else
#line 653 "opt_debug.m"
                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "unmktag";
#line 651 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 651 "opt_debug.m"
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
#line 598 "opt_debug.m"
  {
#line 598 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 598 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 598 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 600 "opt_debug.m"
      {
#line 600 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 600 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__SeqNo_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 600 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 600 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 600 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 600 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_16_16;
#line 600 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));

#line 602 "opt_debug.m"
        {
#line 602 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_9);
        }
#line 602 "opt_debug.m"
        {
#line 602 "opt_debug.m"
          ll_backend__opt_debug__V_16_16 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__SeqNo_10);
        }
#line 602 "opt_debug.m"
        {
#line 602 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_16_16, (MR_String) ")");
        }
#line 601 "opt_debug.m"
        {
#line 601 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
        }
#line 600 "opt_debug.m"
        {
#line 600 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "closure_proc_id(", ll_backend__opt_debug__V_13_13);
        }
#line 600 "opt_debug.m"
      }
#line 598 "opt_debug.m"
    else
#line 598 "opt_debug.m"
      if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 603 "opt_debug.m"
        {
#line 603 "opt_debug.m"
          MR_Word ll_backend__opt_debug__ModuleName_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 603 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__FileNum_19 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 603 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_21_21;
#line 603 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_22_22;
#line 603 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_23_23;
#line 603 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_24_24;

#line 605 "opt_debug.m"
          {
#line 605 "opt_debug.m"
            ll_backend__opt_debug__V_22_22 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_18);
          }
#line 605 "opt_debug.m"
          {
#line 605 "opt_debug.m"
            ll_backend__opt_debug__V_24_24 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_19);
          }
#line 605 "opt_debug.m"
          {
#line 605 "opt_debug.m"
            ll_backend__opt_debug__V_23_23 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_24_24, (MR_String) ")");
          }
#line 604 "opt_debug.m"
          {
#line 604 "opt_debug.m"
            ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, ll_backend__opt_debug__V_23_23);
          }
#line 603 "opt_debug.m"
          {
#line 603 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout(", ll_backend__opt_debug__V_21_21);
          }
#line 603 "opt_debug.m"
        }
#line 598 "opt_debug.m"
      else
#line 598 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 598 "opt_debug.m"
          {
#line 598 "opt_debug.m"
            MR_Word ll_backend__opt_debug__RttiProcLabel_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 598 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_6_6;
#line 598 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_7_7;
#line 598 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));

#line 599 "opt_debug.m"
            {
#line 599 "opt_debug.m"
              ll_backend__opt_debug__V_7_7 = ll_backend__opt_debug__dump_rttiproclabel_1_f_0(ll_backend__opt_debug__RttiProcLabel_3);
            }
#line 599 "opt_debug.m"
            {
#line 599 "opt_debug.m"
              ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, (MR_String) ")");
            }
#line 598 "opt_debug.m"
            {
#line 598 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "proc_layout(", ll_backend__opt_debug__V_6_6);
            }
#line 598 "opt_debug.m"
          }
#line 598 "opt_debug.m"
        else
#line 598 "opt_debug.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 609 "opt_debug.m"
            {
#line 609 "opt_debug.m"
              MR_Word ll_backend__opt_debug__ModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 609 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__FileNum_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 609 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_37_37;
#line 609 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_38_38;
#line 609 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_39_39;
#line 609 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_40_40;

#line 611 "opt_debug.m"
              {
#line 611 "opt_debug.m"
                ll_backend__opt_debug__V_38_38 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_34);
              }
#line 611 "opt_debug.m"
              {
#line 611 "opt_debug.m"
                ll_backend__opt_debug__V_40_40 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_35);
              }
#line 611 "opt_debug.m"
              {
#line 611 "opt_debug.m"
                ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_40_40, (MR_String) ")");
              }
#line 610 "opt_debug.m"
              {
#line 610 "opt_debug.m"
                ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
              }
#line 609 "opt_debug.m"
              {
#line 609 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_label_layout_vector(", ll_backend__opt_debug__V_37_37);
              }
#line 609 "opt_debug.m"
            }
#line 598 "opt_debug.m"
          else
#line 598 "opt_debug.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 606 "opt_debug.m"
              {
#line 606 "opt_debug.m"
                MR_Word ll_backend__opt_debug__ModuleName_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "opt_debug.m"
                MR_Integer ll_backend__opt_debug__FileNum_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 606 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_29_29;
#line 606 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_30_30;
#line 606 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_31_31;
#line 606 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_32_32;

#line 608 "opt_debug.m"
                {
#line 608 "opt_debug.m"
                  ll_backend__opt_debug__V_30_30 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_26);
                }
#line 608 "opt_debug.m"
                {
#line 608 "opt_debug.m"
                  ll_backend__opt_debug__V_32_32 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__FileNum_27);
                }
#line 608 "opt_debug.m"
                {
#line 608 "opt_debug.m"
                  ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, (MR_String) ")");
                }
#line 607 "opt_debug.m"
                {
#line 607 "opt_debug.m"
                  ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_30_30, ll_backend__opt_debug__V_31_31);
                }
#line 606 "opt_debug.m"
                {
#line 606 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "file_layout_line_number_vector(", ll_backend__opt_debug__V_29_29);
                }
#line 606 "opt_debug.m"
              }
#line 598 "opt_debug.m"
            else
#line 598 "opt_debug.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 15))))
#line 648 "opt_debug.m"
                {
#line 648 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__ModuleName_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 648 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_149_149;
#line 648 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_150_150;

#line 649 "opt_debug.m"
                  {
#line 649 "opt_debug.m"
                    ll_backend__opt_debug__V_150_150 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_147);
                  }
#line 649 "opt_debug.m"
                  {
#line 649 "opt_debug.m"
                    ll_backend__opt_debug__V_149_149 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_150_150, (MR_String) ")");
                  }
#line 648 "opt_debug.m"
                  {
#line 648 "opt_debug.m"
                    return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout(", ll_backend__opt_debug__V_149_149);
                  }
#line 648 "opt_debug.m"
                }
#line 598 "opt_debug.m"
              else
#line 598 "opt_debug.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 625 "opt_debug.m"
                  {
#line 625 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__ModuleName_77 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 625 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__EventNum_78 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 625 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_80_80;
#line 625 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_81_81;
#line 625 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_82_82;
#line 625 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_84_84;
#line 625 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_85_85;

#line 626 "opt_debug.m"
                    {
#line 626 "opt_debug.m"
                      ll_backend__opt_debug__V_81_81 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_77);
                    }
#line 627 "opt_debug.m"
                    {
#line 627 "opt_debug.m"
                      ll_backend__opt_debug__V_85_85 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_78);
                    }
#line 627 "opt_debug.m"
                    {
#line 627 "opt_debug.m"
                      ll_backend__opt_debug__V_84_84 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_85_85, (MR_String) ")");
                    }
#line 626 "opt_debug.m"
                    {
#line 626 "opt_debug.m"
                      ll_backend__opt_debug__V_82_82 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_84_84);
                    }
#line 626 "opt_debug.m"
                    {
#line 626 "opt_debug.m"
                      ll_backend__opt_debug__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_81_81, ll_backend__opt_debug__V_82_82);
                    }
#line 625 "opt_debug.m"
                    {
#line 625 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_arg_names(", ll_backend__opt_debug__V_80_80);
                    }
#line 625 "opt_debug.m"
                  }
#line 598 "opt_debug.m"
                else
#line 598 "opt_debug.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 621 "opt_debug.m"
                    {
#line 621 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__ModuleName_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 621 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_69_69;
#line 621 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_70_70;

#line 622 "opt_debug.m"
                      {
#line 622 "opt_debug.m"
                        ll_backend__opt_debug__V_70_70 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_67);
                      }
#line 622 "opt_debug.m"
                      {
#line 622 "opt_debug.m"
                        ll_backend__opt_debug__V_69_69 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_70_70, (MR_String) ")");
                      }
#line 621 "opt_debug.m"
                      {
#line 621 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_set_desc(", ll_backend__opt_debug__V_69_69);
                      }
#line 621 "opt_debug.m"
                    }
#line 598 "opt_debug.m"
                  else
#line 598 "opt_debug.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 623 "opt_debug.m"
                      {
#line 623 "opt_debug.m"
                        MR_Word ll_backend__opt_debug__ModuleName_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 623 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_74_74;
#line 623 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_75_75;

#line 624 "opt_debug.m"
                        {
#line 624 "opt_debug.m"
                          ll_backend__opt_debug__V_75_75 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_72);
                        }
#line 624 "opt_debug.m"
                        {
#line 624 "opt_debug.m"
                          ll_backend__opt_debug__V_74_74 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_75_75, (MR_String) ")");
                        }
#line 623 "opt_debug.m"
                        {
#line 623 "opt_debug.m"
                          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_specs(", ll_backend__opt_debug__V_74_74);
                        }
#line 623 "opt_debug.m"
                      }
#line 598 "opt_debug.m"
                    else
#line 598 "opt_debug.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 632 "opt_debug.m"
                        {
#line 632 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__ModuleName_97 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "opt_debug.m"
                          MR_Integer ll_backend__opt_debug__EventNum_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 632 "opt_debug.m"
                          MR_Integer ll_backend__opt_debug__ArgNum_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 3)));
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_101_101;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_102_102;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_103_103;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_105_105;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_106_106;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_107_107;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_109_109;
#line 632 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_110_110;

#line 633 "opt_debug.m"
                          {
#line 633 "opt_debug.m"
                            ll_backend__opt_debug__V_102_102 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_97);
                          }
#line 634 "opt_debug.m"
                          {
#line 634 "opt_debug.m"
                            ll_backend__opt_debug__V_106_106 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_98);
                          }
#line 635 "opt_debug.m"
                          {
#line 635 "opt_debug.m"
                            ll_backend__opt_debug__V_110_110 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_99);
                          }
#line 635 "opt_debug.m"
                          {
#line 635 "opt_debug.m"
                            ll_backend__opt_debug__V_109_109 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_110_110, (MR_String) ")");
                          }
#line 634 "opt_debug.m"
                          {
#line 634 "opt_debug.m"
                            ll_backend__opt_debug__V_107_107 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_109_109);
                          }
#line 634 "opt_debug.m"
                          {
#line 634 "opt_debug.m"
                            ll_backend__opt_debug__V_105_105 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_106_106, ll_backend__opt_debug__V_107_107);
                          }
#line 633 "opt_debug.m"
                          {
#line 633 "opt_debug.m"
                            ll_backend__opt_debug__V_103_103 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_105_105);
                          }
#line 633 "opt_debug.m"
                          {
#line 633 "opt_debug.m"
                            ll_backend__opt_debug__V_101_101 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_102_102, ll_backend__opt_debug__V_103_103);
                          }
#line 632 "opt_debug.m"
                          {
#line 632 "opt_debug.m"
                            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_args(", ll_backend__opt_debug__V_101_101);
                          }
#line 632 "opt_debug.m"
                        }
#line 598 "opt_debug.m"
                      else
#line 598 "opt_debug.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 637 "opt_debug.m"
                          {
#line 637 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__ModuleName_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 637 "opt_debug.m"
                            MR_Integer ll_backend__opt_debug__EventNum_113 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 637 "opt_debug.m"
                            MR_Integer ll_backend__opt_debug__ArgNum_114 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 3)));
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_116_116;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_117_117;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_118_118;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_120_120;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_121_121;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_122_122;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_124_124;
#line 637 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_125_125;

#line 638 "opt_debug.m"
                            {
#line 638 "opt_debug.m"
                              ll_backend__opt_debug__V_117_117 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_112);
                            }
#line 639 "opt_debug.m"
                            {
#line 639 "opt_debug.m"
                              ll_backend__opt_debug__V_121_121 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_113);
                            }
#line 640 "opt_debug.m"
                            {
#line 640 "opt_debug.m"
                              ll_backend__opt_debug__V_125_125 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__ArgNum_114);
                            }
#line 640 "opt_debug.m"
                            {
#line 640 "opt_debug.m"
                              ll_backend__opt_debug__V_124_124 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_125_125, (MR_String) ")");
                            }
#line 639 "opt_debug.m"
                            {
#line 639 "opt_debug.m"
                              ll_backend__opt_debug__V_122_122 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_124_124);
                            }
#line 639 "opt_debug.m"
                            {
#line 639 "opt_debug.m"
                              ll_backend__opt_debug__V_120_120 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_121_121, ll_backend__opt_debug__V_122_122);
                            }
#line 638 "opt_debug.m"
                            {
#line 638 "opt_debug.m"
                              ll_backend__opt_debug__V_118_118 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_120_120);
                            }
#line 638 "opt_debug.m"
                            {
#line 638 "opt_debug.m"
                              ll_backend__opt_debug__V_116_116 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_117_117, ll_backend__opt_debug__V_118_118);
                            }
#line 637 "opt_debug.m"
                            {
#line 637 "opt_debug.m"
                              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attr_order(", ll_backend__opt_debug__V_116_116);
                            }
#line 637 "opt_debug.m"
                          }
#line 598 "opt_debug.m"
                        else
#line 598 "opt_debug.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 628 "opt_debug.m"
                            {
#line 628 "opt_debug.m"
                              MR_Word ll_backend__opt_debug__ModuleName_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 628 "opt_debug.m"
                              MR_Integer ll_backend__opt_debug__EventNum_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 628 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_90_90;
#line 628 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_91_91;
#line 628 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_92_92;
#line 628 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_94_94;
#line 628 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_95_95;

#line 629 "opt_debug.m"
                              {
#line 629 "opt_debug.m"
                                ll_backend__opt_debug__V_91_91 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_87);
                              }
#line 630 "opt_debug.m"
                              {
#line 630 "opt_debug.m"
                                ll_backend__opt_debug__V_95_95 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_88);
                              }
#line 630 "opt_debug.m"
                              {
#line 630 "opt_debug.m"
                                ll_backend__opt_debug__V_94_94 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_95_95, (MR_String) ")");
                              }
#line 629 "opt_debug.m"
                              {
#line 629 "opt_debug.m"
                                ll_backend__opt_debug__V_92_92 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_94_94);
                              }
#line 629 "opt_debug.m"
                              {
#line 629 "opt_debug.m"
                                ll_backend__opt_debug__V_90_90 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_91_91, ll_backend__opt_debug__V_92_92);
                              }
#line 628 "opt_debug.m"
                              {
#line 628 "opt_debug.m"
                                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_attrs(", ll_backend__opt_debug__V_90_90);
                              }
#line 628 "opt_debug.m"
                            }
#line 598 "opt_debug.m"
                          else
#line 598 "opt_debug.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 641 "opt_debug.m"
                              {
#line 641 "opt_debug.m"
                                MR_Word ll_backend__opt_debug__ModuleName_127 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 641 "opt_debug.m"
                                MR_Integer ll_backend__opt_debug__EventNum_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 641 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_130_130;
#line 641 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_131_131;
#line 641 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_132_132;
#line 641 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_134_134;
#line 641 "opt_debug.m"
                                MR_String ll_backend__opt_debug__V_135_135;

#line 642 "opt_debug.m"
                                {
#line 642 "opt_debug.m"
                                  ll_backend__opt_debug__V_131_131 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_127);
                                }
#line 643 "opt_debug.m"
                                {
#line 643 "opt_debug.m"
                                  ll_backend__opt_debug__V_135_135 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__EventNum_128);
                                }
#line 643 "opt_debug.m"
                                {
#line 643 "opt_debug.m"
                                  ll_backend__opt_debug__V_134_134 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_135_135, (MR_String) ")");
                                }
#line 642 "opt_debug.m"
                                {
#line 642 "opt_debug.m"
                                  ll_backend__opt_debug__V_132_132 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_134_134);
                                }
#line 642 "opt_debug.m"
                                {
#line 642 "opt_debug.m"
                                  ll_backend__opt_debug__V_130_130 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_131_131, ll_backend__opt_debug__V_132_132);
                                }
#line 641 "opt_debug.m"
                                {
#line 641 "opt_debug.m"
                                  return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_event_synth_order(", ll_backend__opt_debug__V_130_130);
                                }
#line 641 "opt_debug.m"
                              }
#line 598 "opt_debug.m"
                            else
#line 598 "opt_debug.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 614 "opt_debug.m"
                                {
#line 614 "opt_debug.m"
                                  MR_Word ll_backend__opt_debug__ModuleName_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 614 "opt_debug.m"
                                  MR_String ll_backend__opt_debug__V_49_49;
#line 614 "opt_debug.m"
                                  MR_String ll_backend__opt_debug__V_50_50;

#line 615 "opt_debug.m"
                                  {
#line 615 "opt_debug.m"
                                    ll_backend__opt_debug__V_50_50 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_47);
                                  }
#line 615 "opt_debug.m"
                                  {
#line 615 "opt_debug.m"
                                    ll_backend__opt_debug__V_49_49 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_50_50, (MR_String) ")");
                                  }
#line 614 "opt_debug.m"
                                  {
#line 614 "opt_debug.m"
                                    return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_file_vector(", ll_backend__opt_debug__V_49_49);
                                  }
#line 614 "opt_debug.m"
                                }
#line 598 "opt_debug.m"
                              else
#line 598 "opt_debug.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 618 "opt_debug.m"
                                  {
#line 618 "opt_debug.m"
                                    MR_Word ll_backend__opt_debug__ModuleName_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 618 "opt_debug.m"
                                    MR_Integer ll_backend__opt_debug__NumLabels_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 618 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_60_60;
#line 618 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_61_61;
#line 618 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_62_62;
#line 618 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_64_64;
#line 618 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_65_65;

#line 620 "opt_debug.m"
                                    {
#line 620 "opt_debug.m"
                                      ll_backend__opt_debug__V_61_61 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_57);
                                    }
#line 620 "opt_debug.m"
                                    {
#line 620 "opt_debug.m"
                                      ll_backend__opt_debug__V_65_65 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__NumLabels_58);
                                    }
#line 620 "opt_debug.m"
                                    {
#line 620 "opt_debug.m"
                                      ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_65_65, (MR_String) ")");
                                    }
#line 620 "opt_debug.m"
                                    {
#line 620 "opt_debug.m"
                                      ll_backend__opt_debug__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_64_64);
                                    }
#line 619 "opt_debug.m"
                                    {
#line 619 "opt_debug.m"
                                      ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_61_61, ll_backend__opt_debug__V_62_62);
                                    }
#line 618 "opt_debug.m"
                                    {
#line 618 "opt_debug.m"
                                      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_label_exec_count(", ll_backend__opt_debug__V_60_60);
                                    }
#line 618 "opt_debug.m"
                                  }
#line 598 "opt_debug.m"
                                else
#line 598 "opt_debug.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 13))))
#line 644 "opt_debug.m"
                                    {
#line 644 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__ModuleName_137 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 644 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_139_139;
#line 644 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_140_140;

#line 645 "opt_debug.m"
                                      {
#line 645 "opt_debug.m"
                                        ll_backend__opt_debug__V_140_140 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_137);
                                      }
#line 645 "opt_debug.m"
                                      {
#line 645 "opt_debug.m"
                                        ll_backend__opt_debug__V_139_139 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_140_140, (MR_String) ")");
                                      }
#line 644 "opt_debug.m"
                                      {
#line 644 "opt_debug.m"
                                        return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_oisu_bytes(", ll_backend__opt_debug__V_139_139);
                                      }
#line 644 "opt_debug.m"
                                    }
#line 598 "opt_debug.m"
                                  else
#line 598 "opt_debug.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 616 "opt_debug.m"
                                      {
#line 616 "opt_debug.m"
                                        MR_Word ll_backend__opt_debug__ModuleName_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 616 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_54_54;
#line 616 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_55_55;

#line 617 "opt_debug.m"
                                        {
#line 617 "opt_debug.m"
                                          ll_backend__opt_debug__V_55_55 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_52);
                                        }
#line 617 "opt_debug.m"
                                        {
#line 617 "opt_debug.m"
                                          ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_55_55, (MR_String) ")");
                                        }
#line 616 "opt_debug.m"
                                        {
#line 616 "opt_debug.m"
                                          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_proc_vector(", ll_backend__opt_debug__V_54_54);
                                        }
#line 616 "opt_debug.m"
                                      }
#line 598 "opt_debug.m"
                                    else
#line 598 "opt_debug.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 612 "opt_debug.m"
                                        {
#line 612 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__ModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 612 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_44_44;
#line 612 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_45_45;

#line 613 "opt_debug.m"
                                          {
#line 613 "opt_debug.m"
                                            ll_backend__opt_debug__V_45_45 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_42);
                                          }
#line 613 "opt_debug.m"
                                          {
#line 613 "opt_debug.m"
                                            ll_backend__opt_debug__V_44_44 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_45_45, (MR_String) ")");
                                          }
#line 612 "opt_debug.m"
                                          {
#line 612 "opt_debug.m"
                                            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_string_table(", ll_backend__opt_debug__V_44_44);
                                          }
#line 612 "opt_debug.m"
                                        }
#line 598 "opt_debug.m"
                                      else
#line 646 "opt_debug.m"
                                        {
#line 646 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__ModuleName_142 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 646 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_144_144;
#line 646 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_145_145;

#line 647 "opt_debug.m"
                                          {
#line 647 "opt_debug.m"
                                            ll_backend__opt_debug__V_145_145 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_142);
                                          }
#line 647 "opt_debug.m"
                                          {
#line 647 "opt_debug.m"
                                            ll_backend__opt_debug__V_144_144 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_145_145, (MR_String) ")");
                                          }
#line 646 "opt_debug.m"
                                          {
#line 646 "opt_debug.m"
                                            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "module_layout_type_table_bytes(", ll_backend__opt_debug__V_144_144);
                                          }
#line 646 "opt_debug.m"
                                        }
#line 598 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 598 "opt_debug.m"
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
#line 531 "opt_debug.m"
  {
#line 531 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 531 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;

#line 531 "opt_debug.m"
    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 595 "opt_debug.m"
      ll_backend__opt_debug__Str_4 = (MR_String) "alloc_site_array";
#line 531 "opt_debug.m"
    else
#line 531 "opt_debug.m"
      if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 553 "opt_debug.m"
        ll_backend__opt_debug__Str_4 = (MR_String) "hlds_var_nums_array";
#line 531 "opt_debug.m"
      else
#line 531 "opt_debug.m"
        if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 547 "opt_debug.m"
          ll_backend__opt_debug__Str_4 = (MR_String) "long_locns_array";
#line 531 "opt_debug.m"
        else
#line 531 "opt_debug.m"
          if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 586 "opt_debug.m"
            ll_backend__opt_debug__Str_4 = (MR_String) "proc_body_bytecodes_array";
#line 531 "opt_debug.m"
          else
#line 531 "opt_debug.m"
            if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 577 "opt_debug.m"
              ll_backend__opt_debug__Str_4 = (MR_String) "proc_event_layouts_array";
#line 531 "opt_debug.m"
            else
#line 531 "opt_debug.m"
              if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 574 "opt_debug.m"
                ll_backend__opt_debug__Str_4 = (MR_String) "proc_exec_trace_array";
#line 531 "opt_debug.m"
              else
#line 531 "opt_debug.m"
                if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 580 "opt_debug.m"
                  ll_backend__opt_debug__Str_4 = (MR_String) "proc_head_var_nums_array";
#line 531 "opt_debug.m"
                else
#line 531 "opt_debug.m"
                  if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 562 "opt_debug.m"
                    ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_array";
#line 531 "opt_debug.m"
                  else
#line 531 "opt_debug.m"
                    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 565 "opt_debug.m"
                      ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_call_sites_array";
#line 531 "opt_debug.m"
                    else
#line 531 "opt_debug.m"
                      if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 571 "opt_debug.m"
                        ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_dynamic_array";
#line 531 "opt_debug.m"
                      else
#line 531 "opt_debug.m"
                        if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 568 "opt_debug.m"
                          ll_backend__opt_debug__Str_4 = (MR_String) "proc_static_cp_static_array";
#line 531 "opt_debug.m"
                        else
#line 531 "opt_debug.m"
                          if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 589 "opt_debug.m"
                            ll_backend__opt_debug__Str_4 = (MR_String) "proc_table_io_decl_array";
#line 531 "opt_debug.m"
                          else
#line 531 "opt_debug.m"
                            if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 583 "opt_debug.m"
                              ll_backend__opt_debug__Str_4 = (MR_String) "proc_var_names_array";
#line 531 "opt_debug.m"
                            else
#line 531 "opt_debug.m"
                              if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 544 "opt_debug.m"
                                ll_backend__opt_debug__Str_4 = (MR_String) "pseudo_type_info_array";
#line 531 "opt_debug.m"
                              else
#line 531 "opt_debug.m"
                                if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 550 "opt_debug.m"
                                  ll_backend__opt_debug__Str_4 = (MR_String) "short_locns_array";
#line 531 "opt_debug.m"
                                else
#line 531 "opt_debug.m"
                                  if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 592 "opt_debug.m"
                                    ll_backend__opt_debug__Str_4 = (MR_String) "threadscope_string_table_array";
#line 531 "opt_debug.m"
                                  else
#line 531 "opt_debug.m"
                                    if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 556 "opt_debug.m"
                                      ll_backend__opt_debug__Str_4 = (MR_String) "user_event_layout_array";
#line 531 "opt_debug.m"
                                    else
#line 531 "opt_debug.m"
                                      if ((ll_backend__opt_debug__ArrayName_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 559 "opt_debug.m"
                                        ll_backend__opt_debug__Str_4 = (MR_String) "user_event_var_nums_array";
#line 531 "opt_debug.m"
                                      else
#line 531 "opt_debug.m"
                                        {
#line 531 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__LabelVars_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__ArrayName_3, (MR_Integer) 0)));

#line 535 "opt_debug.m"
                                          if ((ll_backend__opt_debug__LabelVars_5 == (MR_Integer) 2))
#line 540 "opt_debug.m"
                                            ll_backend__opt_debug__Str_4 = (MR_String) "long_vars_label_layout_array";
#line 535 "opt_debug.m"
                                          else
#line 535 "opt_debug.m"
                                            if ((ll_backend__opt_debug__LabelVars_5 == (MR_Integer) 0))
#line 534 "opt_debug.m"
                                              ll_backend__opt_debug__Str_4 = (MR_String) "no_vars_label_layout_array";
#line 535 "opt_debug.m"
                                            else
#line 537 "opt_debug.m"
                                              ll_backend__opt_debug__Str_4 = (MR_String) "short_vars_label_layout_array";
#line 531 "opt_debug.m"
                                        }
#line 531 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 531 "opt_debug.m"
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
#line 524 "opt_debug.m"
  {
#line 524 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 524 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_5;
#line 524 "opt_debug.m"
    MR_Word ll_backend__opt_debug__Array_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 524 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Slot_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 524 "opt_debug.m"
    MR_String ll_backend__opt_debug__ArrayStr_6;
#line 524 "opt_debug.m"
    MR_String ll_backend__opt_debug__SlotStr_7;
#line 524 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 524 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_10_10;

#line 525 "opt_debug.m"
    {
#line 525 "opt_debug.m"
      ll_backend__opt_debug__ArrayStr_6 = ll_backend__opt_debug__dump_layout_array_name_1_f_0(ll_backend__opt_debug__Array_3);
    }
#line 526 "opt_debug.m"
    {
#line 526 "opt_debug.m"
      ll_backend__opt_debug__SlotStr_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Slot_4);
    }
#line 527 "opt_debug.m"
    {
#line 527 "opt_debug.m"
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__SlotStr_7, (MR_String) "]");
    }
#line 527 "opt_debug.m"
    {
#line 527 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0((MR_String) "[", ll_backend__opt_debug__V_10_10);
    }
#line 527 "opt_debug.m"
    {
#line 527 "opt_debug.m"
      return ll_backend__opt_debug__Str_5 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__ArrayStr_6, ll_backend__opt_debug__V_8_8);
    }
#line 524 "opt_debug.m"
    return ll_backend__opt_debug__Str_5;
#line 524 "opt_debug.m"
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
#line 489 "opt_debug.m"
  {
#line 489 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 489 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 489 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 492 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_decl";
#line 489 "opt_debug.m"
    else
#line 489 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 495 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_decl_supers";
#line 489 "opt_debug.m"
      else
#line 489 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_id";
#line 489 "opt_debug.m"
        else
#line 489 "opt_debug.m"
          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 496 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_id_method_ids";
#line 489 "opt_debug.m"
          else
#line 489 "opt_debug.m"
            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 497 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_class_id_var_names";
#line 489 "opt_debug.m"
            else
#line 489 "opt_debug.m"
              if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 489 "opt_debug.m"
                {
#line 489 "opt_debug.m"
                  MR_String ll_backend__opt_debug__InstanceStr_4 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 489 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_6_6;
#line 489 "opt_debug.m"
                  MR_Word ll_backend__opt_debug___ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 490 "opt_debug.m"
                  {
#line 490 "opt_debug.m"
                    ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstanceStr_4, (MR_String) ")");
                  }
#line 489 "opt_debug.m"
                  {
#line 489 "opt_debug.m"
                    return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "base_typeclass_info(", ll_backend__opt_debug__V_6_6);
                  }
#line 489 "opt_debug.m"
                }
#line 489 "opt_debug.m"
              else
#line 489 "opt_debug.m"
                if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 493 "opt_debug.m"
                  {
#line 493 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__Ordinal_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 493 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_11_11;
#line 493 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_12_12;
#line 493 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));

#line 494 "opt_debug.m"
                    {
#line 494 "opt_debug.m"
                      ll_backend__opt_debug__V_12_12 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_8);
                    }
#line 494 "opt_debug.m"
                    {
#line 494 "opt_debug.m"
                      ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, (MR_String) ")");
                    }
#line 493 "opt_debug.m"
                    {
#line 493 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_decl_super(", ll_backend__opt_debug__V_11_11);
                    }
#line 493 "opt_debug.m"
                  }
#line 489 "opt_debug.m"
                else
#line 489 "opt_debug.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 498 "opt_debug.m"
                    {
#line 498 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__TCTypes_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 498 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_16_16;
#line 498 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_17_17;

#line 500 "opt_debug.m"
                      {
#line 500 "opt_debug.m"
                        ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_14);
                      }
#line 500 "opt_debug.m"
                      {
#line 500 "opt_debug.m"
                        ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, (MR_String) ")");
                      }
#line 498 "opt_debug.m"
                      {
#line 498 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance(", ll_backend__opt_debug__V_16_16);
                      }
#line 498 "opt_debug.m"
                    }
#line 489 "opt_debug.m"
                  else
#line 489 "opt_debug.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 507 "opt_debug.m"
                      {
#line 507 "opt_debug.m"
                        MR_Word ll_backend__opt_debug__TCTypes_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 507 "opt_debug.m"
                        MR_Integer ll_backend__opt_debug__Ordinal_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 507 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_33_33;
#line 507 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_34_34;
#line 507 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_35_35;
#line 507 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_37_37;
#line 507 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_38_38;
#line 507 "opt_debug.m"
                        MR_Integer ll_backend__opt_debug__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 3)));

#line 509 "opt_debug.m"
                        {
#line 509 "opt_debug.m"
                          ll_backend__opt_debug__V_34_34 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_29);
                        }
#line 510 "opt_debug.m"
                        {
#line 510 "opt_debug.m"
                          ll_backend__opt_debug__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_30);
                        }
#line 510 "opt_debug.m"
                        {
#line 510 "opt_debug.m"
                          ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, (MR_String) ")");
                        }
#line 509 "opt_debug.m"
                        {
#line 509 "opt_debug.m"
                          ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_37_37);
                        }
#line 509 "opt_debug.m"
                        {
#line 509 "opt_debug.m"
                          ll_backend__opt_debug__V_33_33 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_34_34, ll_backend__opt_debug__V_35_35);
                        }
#line 507 "opt_debug.m"
                        {
#line 507 "opt_debug.m"
                          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraint(", ll_backend__opt_debug__V_33_33);
                        }
#line 507 "opt_debug.m"
                      }
#line 489 "opt_debug.m"
                    else
#line 489 "opt_debug.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 504 "opt_debug.m"
                        {
#line 504 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__TCTypes_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 504 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_26_26;
#line 504 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_27_27;

#line 506 "opt_debug.m"
                          {
#line 506 "opt_debug.m"
                            ll_backend__opt_debug__V_27_27 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_24);
                          }
#line 506 "opt_debug.m"
                          {
#line 506 "opt_debug.m"
                            ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, (MR_String) ")");
                          }
#line 504 "opt_debug.m"
                          {
#line 504 "opt_debug.m"
                            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_constraints(", ll_backend__opt_debug__V_26_26);
                          }
#line 504 "opt_debug.m"
                        }
#line 489 "opt_debug.m"
                      else
#line 489 "opt_debug.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 511 "opt_debug.m"
                          {
#line 511 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__TCTypes_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 511 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_42_42;
#line 511 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_43_43;

#line 513 "opt_debug.m"
                            {
#line 513 "opt_debug.m"
                              ll_backend__opt_debug__V_43_43 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_40);
                            }
#line 513 "opt_debug.m"
                            {
#line 513 "opt_debug.m"
                              ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_43_43, (MR_String) ")");
                            }
#line 511 "opt_debug.m"
                            {
#line 511 "opt_debug.m"
                              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_methods(", ll_backend__opt_debug__V_42_42);
                            }
#line 511 "opt_debug.m"
                          }
#line 489 "opt_debug.m"
                        else
#line 501 "opt_debug.m"
                          {
#line 501 "opt_debug.m"
                            MR_Word ll_backend__opt_debug__TCTypes_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 501 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_21_21;
#line 501 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_22_22;

#line 503 "opt_debug.m"
                            {
#line 503 "opt_debug.m"
                              ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(ll_backend__opt_debug__TCTypes_19);
                            }
#line 503 "opt_debug.m"
                            {
#line 503 "opt_debug.m"
                              ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
                            }
#line 501 "opt_debug.m"
                            {
#line 501 "opt_debug.m"
                              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "type_class_instance_tc_types_vector(", ll_backend__opt_debug__V_21_21);
                            }
#line 501 "opt_debug.m"
                          }
#line 489 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 489 "opt_debug.m"
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
#line 434 "opt_debug.m"
  {
#line 434 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 434 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 434 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 8)))))
#line 468 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "du_name_ordered_table";
#line 434 "opt_debug.m"
    else
#line 434 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 9)))))
#line 471 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "du_ptag_ordered_table";
#line 434 "opt_debug.m"
      else
#line 434 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 461 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "enum_name_ordered_table";
#line 434 "opt_debug.m"
        else
#line 434 "opt_debug.m"
          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 462 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "enum_value_ordered_table";
#line 434 "opt_debug.m"
          else
#line 434 "opt_debug.m"
            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 436 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "exist_loc";
#line 434 "opt_debug.m"
            else
#line 434 "opt_debug.m"
              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 464 "opt_debug.m"
                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "foreign_enum_name_ordered_table";
#line 434 "opt_debug.m"
              else
#line 434 "opt_debug.m"
                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 7)))))
#line 466 "opt_debug.m"
                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "foreign_enum_ordinal_ordered_table";
#line 434 "opt_debug.m"
                else
#line 434 "opt_debug.m"
                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 13)))))
#line 480 "opt_debug.m"
                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "functor_number_map";
#line 434 "opt_debug.m"
                  else
#line 434 "opt_debug.m"
                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 12)))))
#line 476 "opt_debug.m"
                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "maybe_res_addr_functor_desc";
#line 434 "opt_debug.m"
                    else
#line 434 "opt_debug.m"
                      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 456 "opt_debug.m"
                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "notag_functor_desc_";
#line 434 "opt_debug.m"
                      else
#line 434 "opt_debug.m"
                        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 451 "opt_debug.m"
                          ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_addr_functors";
#line 434 "opt_debug.m"
                        else
#line 434 "opt_debug.m"
                          if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 450 "opt_debug.m"
                            ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_addrs";
#line 434 "opt_debug.m"
                          else
#line 434 "opt_debug.m"
                            if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 11)))))
#line 475 "opt_debug.m"
                              ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_name_ordered_table";
#line 434 "opt_debug.m"
                            else
#line 434 "opt_debug.m"
                              if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 10)))))
#line 474 "opt_debug.m"
                                ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "res_value_ordered_table";
#line 434 "opt_debug.m"
                              else
#line 434 "opt_debug.m"
                                if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 16)))))
#line 481 "opt_debug.m"
                                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_ctor_info";
#line 434 "opt_debug.m"
                                else
#line 434 "opt_debug.m"
                                  if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 14)))))
#line 479 "opt_debug.m"
                                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_functors";
#line 434 "opt_debug.m"
                                  else
#line 434 "opt_debug.m"
                                    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 17)))))
#line 487 "opt_debug.m"
                                      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_hashcons_pointer";
#line 434 "opt_debug.m"
                                    else
#line 434 "opt_debug.m"
                                      if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 15)))))
#line 478 "opt_debug.m"
                                        ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_layout";
#line 434 "opt_debug.m"
                                      else
#line 434 "opt_debug.m"
                                        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 434 "opt_debug.m"
                                          {
#line 434 "opt_debug.m"
                                            MR_Integer ll_backend__opt_debug__Ordinal_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 434 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_5_5;

#line 435 "opt_debug.m"
                                            {
#line 435 "opt_debug.m"
                                              ll_backend__opt_debug__V_5_5 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_3);
                                            }
#line 434 "opt_debug.m"
                                            {
#line 434 "opt_debug.m"
                                              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_locns_", ll_backend__opt_debug__V_5_5);
                                            }
#line 434 "opt_debug.m"
                                          }
#line 434 "opt_debug.m"
                                        else
#line 434 "opt_debug.m"
                                          if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 437 "opt_debug.m"
                                            {
#line 437 "opt_debug.m"
                                              MR_Integer ll_backend__opt_debug__Ordinal_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 437 "opt_debug.m"
                                              MR_Integer ll_backend__opt_debug__TCCNum_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 437 "opt_debug.m"
                                              MR_Integer ll_backend__opt_debug__Arity_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_10_10;
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_11_11;
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_12_12;
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_14_14;
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_15_15;
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_16_16;
#line 437 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_18_18;

#line 438 "opt_debug.m"
                                              {
#line 438 "opt_debug.m"
                                                ll_backend__opt_debug__V_11_11 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_6);
                                              }
#line 439 "opt_debug.m"
                                              {
#line 439 "opt_debug.m"
                                                ll_backend__opt_debug__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TCCNum_7);
                                              }
#line 439 "opt_debug.m"
                                              {
#line 439 "opt_debug.m"
                                                ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_8);
                                              }
#line 439 "opt_debug.m"
                                              {
#line 439 "opt_debug.m"
                                                ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_18_18);
                                              }
#line 439 "opt_debug.m"
                                              {
#line 439 "opt_debug.m"
                                                ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, ll_backend__opt_debug__V_16_16);
                                              }
#line 438 "opt_debug.m"
                                              {
#line 438 "opt_debug.m"
                                                ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) "_", ll_backend__opt_debug__V_14_14);
                                              }
#line 438 "opt_debug.m"
                                              {
#line 438 "opt_debug.m"
                                                ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_11_11, ll_backend__opt_debug__V_12_12);
                                              }
#line 437 "opt_debug.m"
                                              {
#line 437 "opt_debug.m"
                                                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constr_", ll_backend__opt_debug__V_10_10);
                                              }
#line 437 "opt_debug.m"
                                            }
#line 434 "opt_debug.m"
                                          else
#line 434 "opt_debug.m"
                                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 457 "opt_debug.m"
                                              {
#line 457 "opt_debug.m"
                                                MR_Integer ll_backend__opt_debug__Ordinal_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 457 "opt_debug.m"
                                                MR_String ll_backend__opt_debug__V_42_42;

#line 458 "opt_debug.m"
                                                {
#line 458 "opt_debug.m"
                                                  ll_backend__opt_debug__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_40);
                                                }
#line 457 "opt_debug.m"
                                                {
#line 457 "opt_debug.m"
                                                  return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "du_functor_desc_", ll_backend__opt_debug__V_42_42);
                                                }
#line 457 "opt_debug.m"
                                              }
#line 434 "opt_debug.m"
                                            else
#line 434 "opt_debug.m"
                                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 472 "opt_debug.m"
                                                {
#line 472 "opt_debug.m"
                                                  MR_Integer ll_backend__opt_debug__Ptag_49 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 472 "opt_debug.m"
                                                  MR_String ll_backend__opt_debug__V_51_51;

#line 473 "opt_debug.m"
                                                  {
#line 473 "opt_debug.m"
                                                    ll_backend__opt_debug__V_51_51 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_49);
                                                  }
#line 472 "opt_debug.m"
                                                  {
#line 472 "opt_debug.m"
                                                    return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "du_ptag_layout", ll_backend__opt_debug__V_51_51);
                                                  }
#line 472 "opt_debug.m"
                                                }
#line 434 "opt_debug.m"
                                              else
#line 434 "opt_debug.m"
                                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 469 "opt_debug.m"
                                                  {
#line 469 "opt_debug.m"
                                                    MR_Integer ll_backend__opt_debug__Ptag_46 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 469 "opt_debug.m"
                                                    MR_String ll_backend__opt_debug__V_48_48;

#line 470 "opt_debug.m"
                                                    {
#line 470 "opt_debug.m"
                                                      ll_backend__opt_debug__V_48_48 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ptag_46);
                                                    }
#line 469 "opt_debug.m"
                                                    {
#line 469 "opt_debug.m"
                                                      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "du_stag_ordered_table_", ll_backend__opt_debug__V_48_48);
                                                    }
#line 469 "opt_debug.m"
                                                  }
#line 434 "opt_debug.m"
                                                else
#line 434 "opt_debug.m"
                                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 452 "opt_debug.m"
                                                    {
#line 452 "opt_debug.m"
                                                      MR_Integer ll_backend__opt_debug__Ordinal_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 452 "opt_debug.m"
                                                      MR_String ll_backend__opt_debug__V_36_36;

#line 453 "opt_debug.m"
                                                      {
#line 453 "opt_debug.m"
                                                        ll_backend__opt_debug__V_36_36 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_34);
                                                      }
#line 452 "opt_debug.m"
                                                      {
#line 452 "opt_debug.m"
                                                        return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "enum_functor_desc_", ll_backend__opt_debug__V_36_36);
                                                      }
#line 452 "opt_debug.m"
                                                    }
#line 434 "opt_debug.m"
                                                  else
#line 434 "opt_debug.m"
                                                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 442 "opt_debug.m"
                                                      {
#line 442 "opt_debug.m"
                                                        MR_Integer ll_backend__opt_debug__Ordinal_22 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "opt_debug.m"
                                                        MR_String ll_backend__opt_debug__V_24_24;

#line 443 "opt_debug.m"
                                                        {
#line 443 "opt_debug.m"
                                                          ll_backend__opt_debug__V_24_24 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_22);
                                                        }
#line 442 "opt_debug.m"
                                                        {
#line 442 "opt_debug.m"
                                                          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_info_", ll_backend__opt_debug__V_24_24);
                                                        }
#line 442 "opt_debug.m"
                                                      }
#line 434 "opt_debug.m"
                                                    else
#line 434 "opt_debug.m"
                                                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 440 "opt_debug.m"
                                                        {
#line 440 "opt_debug.m"
                                                          MR_Integer ll_backend__opt_debug__Ordinal_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 440 "opt_debug.m"
                                                          MR_String ll_backend__opt_debug__V_21_21;

#line 441 "opt_debug.m"
                                                          {
#line 441 "opt_debug.m"
                                                            ll_backend__opt_debug__V_21_21 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_19);
                                                          }
#line 440 "opt_debug.m"
                                                          {
#line 440 "opt_debug.m"
                                                            return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "exist_tc_constrs_", ll_backend__opt_debug__V_21_21);
                                                          }
#line 440 "opt_debug.m"
                                                        }
#line 434 "opt_debug.m"
                                                      else
#line 434 "opt_debug.m"
                                                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 448 "opt_debug.m"
                                                          {
#line 448 "opt_debug.m"
                                                            MR_Integer ll_backend__opt_debug__Ordinal_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 448 "opt_debug.m"
                                                            MR_String ll_backend__opt_debug__V_33_33;

#line 449 "opt_debug.m"
                                                            {
#line 449 "opt_debug.m"
                                                              ll_backend__opt_debug__V_33_33 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_31);
                                                            }
#line 448 "opt_debug.m"
                                                            {
#line 448 "opt_debug.m"
                                                              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "field_locns_", ll_backend__opt_debug__V_33_33);
                                                            }
#line 448 "opt_debug.m"
                                                          }
#line 434 "opt_debug.m"
                                                        else
#line 434 "opt_debug.m"
                                                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 444 "opt_debug.m"
                                                            {
#line 444 "opt_debug.m"
                                                              MR_Integer ll_backend__opt_debug__Ordinal_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 444 "opt_debug.m"
                                                              MR_String ll_backend__opt_debug__V_27_27;

#line 445 "opt_debug.m"
                                                              {
#line 445 "opt_debug.m"
                                                                ll_backend__opt_debug__V_27_27 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_25);
                                                              }
#line 444 "opt_debug.m"
                                                              {
#line 444 "opt_debug.m"
                                                                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "field_names_", ll_backend__opt_debug__V_27_27);
                                                              }
#line 444 "opt_debug.m"
                                                            }
#line 434 "opt_debug.m"
                                                          else
#line 434 "opt_debug.m"
                                                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 446 "opt_debug.m"
                                                              {
#line 446 "opt_debug.m"
                                                                MR_Integer ll_backend__opt_debug__Ordinal_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 446 "opt_debug.m"
                                                                MR_String ll_backend__opt_debug__V_30_30;

#line 447 "opt_debug.m"
                                                                {
#line 447 "opt_debug.m"
                                                                  ll_backend__opt_debug__V_30_30 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_28);
                                                                }
#line 446 "opt_debug.m"
                                                                {
#line 446 "opt_debug.m"
                                                                  return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "field_types_", ll_backend__opt_debug__V_30_30);
                                                                }
#line 446 "opt_debug.m"
                                                              }
#line 434 "opt_debug.m"
                                                            else
#line 434 "opt_debug.m"
                                                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 454 "opt_debug.m"
                                                                {
#line 454 "opt_debug.m"
                                                                  MR_Integer ll_backend__opt_debug__Ordinal_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 454 "opt_debug.m"
                                                                  MR_String ll_backend__opt_debug__V_39_39;

#line 455 "opt_debug.m"
                                                                  {
#line 455 "opt_debug.m"
                                                                    ll_backend__opt_debug__V_39_39 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_37);
                                                                  }
#line 454 "opt_debug.m"
                                                                  {
#line 454 "opt_debug.m"
                                                                    return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "foreign_enum_functor_desc_", ll_backend__opt_debug__V_39_39);
                                                                  }
#line 454 "opt_debug.m"
                                                                }
#line 434 "opt_debug.m"
                                                              else
#line 434 "opt_debug.m"
                                                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 484 "opt_debug.m"
                                                                  ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "pseudo_type_info";
#line 434 "opt_debug.m"
                                                                else
#line 434 "opt_debug.m"
                                                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 459 "opt_debug.m"
                                                                    {
#line 459 "opt_debug.m"
                                                                      MR_Integer ll_backend__opt_debug__Ordinal_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 459 "opt_debug.m"
                                                                      MR_String ll_backend__opt_debug__V_45_45;

#line 460 "opt_debug.m"
                                                                      {
#line 460 "opt_debug.m"
                                                                        ll_backend__opt_debug__V_45_45 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Ordinal_43);
                                                                      }
#line 459 "opt_debug.m"
                                                                      {
#line 459 "opt_debug.m"
                                                                        return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "res_functor_desc_", ll_backend__opt_debug__V_45_45);
                                                                      }
#line 459 "opt_debug.m"
                                                                    }
#line 434 "opt_debug.m"
                                                                  else
#line 482 "opt_debug.m"
                                                                    ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "type_info";
#line 434 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 434 "opt_debug.m"
  }
#line 95 "opt_debug.m"
}

#line 520 "opt_debug.m"
static MR_Box MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0_1(
#line 520 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 520 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1)
#line 520 "opt_debug.m"
{
#line 520 "opt_debug.m"
  {
#line 520 "opt_debug.m"
    MR_Box ll_backend__opt_debug__wrapper_arg_2;
#line 520 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
#line 520 "opt_debug.m"
    MR_String ll_backend__opt_debug__conv0_HeadVar__2_2;

#line 520 "opt_debug.m"
    {
#line 520 "opt_debug.m"
      ll_backend__opt_debug__conv0_HeadVar__2_2 = backend_libs__rtti__encode_tc_instance_type_1_f_0(((MR_Word) ll_backend__opt_debug__wrapper_arg_1));
    }
#line 520 "opt_debug.m"
    ll_backend__opt_debug__wrapper_arg_2 = ((MR_Box) (ll_backend__opt_debug__conv0_HeadVar__2_2));
#line 520 "opt_debug.m"
    return ll_backend__opt_debug__wrapper_arg_2;
#line 520 "opt_debug.m"
  }
#line 520 "opt_debug.m"
}

#line 93 "opt_debug.m"
MR_String MR_CALL 
ll_backend__opt_debug__dump_rtti_type_class_instance_types_1_f_0(
#line 93 "opt_debug.m"
  MR_Word ll_backend__opt_debug__TCTypes_3)
#line 93 "opt_debug.m"
{
#line 519 "opt_debug.m"
  {
#line 519 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 519 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_4;
#line 519 "opt_debug.m"
    MR_Word ll_backend__opt_debug__EncodedTCTypes_5;
#line 519 "opt_debug.m"
    MR_String ll_backend__opt_debug__TypesStr_6;
#line 519 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;

#line 520 "opt_debug.m"
    {
#line 520 "opt_debug.m"
      ll_backend__opt_debug__EncodedTCTypes_5 = mercury__list__map_2_f_0((MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_maybe_pseudo_type_info_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[2], ll_backend__opt_debug__TCTypes_3);
    }
#line 521 "opt_debug.m"
    {
#line 521 "opt_debug.m"
      mercury__string__append_list_2_p_0(ll_backend__opt_debug__EncodedTCTypes_5, &ll_backend__opt_debug__TypesStr_6);
    }
#line 522 "opt_debug.m"
    {
#line 522 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TypesStr_6, (MR_String) ")");
    }
#line 522 "opt_debug.m"
    {
#line 522 "opt_debug.m"
      return ll_backend__opt_debug__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "tc_instance(", ll_backend__opt_debug__V_9_9);
    }
#line 519 "opt_debug.m"
    return ll_backend__opt_debug__Str_4;
#line 519 "opt_debug.m"
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
#line 515 "opt_debug.m"
  {
#line 515 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__Str_6;
#line 515 "opt_debug.m"
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__ClassName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 515 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_10_10;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_12_12;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_13_13;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_14_14;
#line 515 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_15_15;

#line 516 "opt_debug.m"
    {
#line 516 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      ll_backend__opt_debug__V_13_13 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__ClassName_4);
    }
#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      ll_backend__opt_debug__V_15_15 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      ll_backend__opt_debug__V_14_14 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_15_15, (MR_String) ")");
    }
#line 517 "opt_debug.m"
    {
#line 517 "opt_debug.m"
      ll_backend__opt_debug__V_12_12 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_13_13, ll_backend__opt_debug__V_14_14);
    }
#line 516 "opt_debug.m"
    {
#line 516 "opt_debug.m"
      ll_backend__opt_debug__V_10_10 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_12_12);
    }
#line 516 "opt_debug.m"
    {
#line 516 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_9_9, ll_backend__opt_debug__V_10_10);
    }
#line 516 "opt_debug.m"
    {
#line 516 "opt_debug.m"
      return ll_backend__opt_debug__Str_6 = mercury__string__f_43_43_2_f_0((MR_String) "tc_name(", ll_backend__opt_debug__V_8_8);
    }
#line 515 "opt_debug.m"
    return ll_backend__opt_debug__Str_6;
#line 515 "opt_debug.m"
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
#line 430 "opt_debug.m"
  {
#line 430 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;
#line 430 "opt_debug.m"
    MR_Word ll_backend__opt_debug__ModuleName_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__TypeName_4 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 430 "opt_debug.m"
    MR_Integer ll_backend__opt_debug__Arity_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_7_7;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_8_8;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_9_9;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_11_11;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_12_12;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_13_13;
#line 430 "opt_debug.m"
    MR_String ll_backend__opt_debug__V_14_14;

#line 431 "opt_debug.m"
    {
#line 431 "opt_debug.m"
      ll_backend__opt_debug__V_8_8 = parse_tree__prog_foreign__sym_name_mangle_1_f_0(ll_backend__opt_debug__ModuleName_3);
    }
#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      ll_backend__opt_debug__V_12_12 = parse_tree__prog_foreign__name_mangle_1_f_0(ll_backend__opt_debug__TypeName_4);
    }
#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Arity_5);
    }
#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, (MR_String) ")");
    }
#line 432 "opt_debug.m"
    {
#line 432 "opt_debug.m"
      ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, ll_backend__opt_debug__V_13_13);
    }
#line 431 "opt_debug.m"
    {
#line 431 "opt_debug.m"
      ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
    }
#line 431 "opt_debug.m"
    {
#line 431 "opt_debug.m"
      ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
    }
#line 430 "opt_debug.m"
    {
#line 430 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_type_ctor(", ll_backend__opt_debug__V_7_7);
    }
#line 430 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 430 "opt_debug.m"
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
#line 405 "opt_debug.m"
  {
#line 405 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 405 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 405 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 411 "opt_debug.m"
      {
#line 411 "opt_debug.m"
        MR_Word ll_backend__opt_debug__ProcLabel_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 411 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Id_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 411 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_27_27;
#line 411 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_28_28;
#line 411 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_30_30;
#line 411 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_31_31;

#line 412 "opt_debug.m"
        {
#line 412 "opt_debug.m"
          ll_backend__opt_debug__V_27_27 = backend_libs__rtti__tabling_info_id_str_1_f_0(ll_backend__opt_debug__Id_26);
        }
#line 412 "opt_debug.m"
        {
#line 412 "opt_debug.m"
          ll_backend__opt_debug__V_31_31 = ll_backend__opt_debug__dump_proclabel_1_f_0(ll_backend__opt_debug__ProcLabel_25);
        }
#line 412 "opt_debug.m"
        {
#line 412 "opt_debug.m"
          ll_backend__opt_debug__V_30_30 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_31_31, (MR_String) ")");
        }
#line 412 "opt_debug.m"
        {
#line 412 "opt_debug.m"
          ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_30_30);
        }
#line 411 "opt_debug.m"
        {
#line 411 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_27_27, ll_backend__opt_debug__V_28_28);
        }
#line 411 "opt_debug.m"
      }
#line 405 "opt_debug.m"
    else
#line 405 "opt_debug.m"
      if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 405 "opt_debug.m"
        {
#line 405 "opt_debug.m"
          MR_Word ll_backend__opt_debug__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));

#line 405 "opt_debug.m"
          if (((MR_tag((MR_Word) ll_backend__opt_debug__V_66_66)) == (MR_mktag((MR_Integer) 0))))
#line 405 "opt_debug.m"
            {
#line 405 "opt_debug.m"
              MR_Word ll_backend__opt_debug__RttiTypeCtor_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_66_66, (MR_Integer) 0)));
#line 405 "opt_debug.m"
              MR_Word ll_backend__opt_debug__DataName_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_66_66, (MR_Integer) 1)));
#line 405 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_7_7;
#line 405 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_8_8;
#line 405 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_9_9;
#line 405 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_11_11;
#line 405 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_12_12;

#line 406 "opt_debug.m"
              {
#line 406 "opt_debug.m"
                ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rtti_type_ctor_1_f_0(ll_backend__opt_debug__RttiTypeCtor_3);
              }
#line 407 "opt_debug.m"
              {
#line 407 "opt_debug.m"
                ll_backend__opt_debug__V_12_12 = ll_backend__opt_debug__dump_rtti_name_1_f_0(ll_backend__opt_debug__DataName_4);
              }
#line 407 "opt_debug.m"
              {
#line 407 "opt_debug.m"
                ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_12_12, (MR_String) ")");
              }
#line 406 "opt_debug.m"
              {
#line 406 "opt_debug.m"
                ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
              }
#line 406 "opt_debug.m"
              {
#line 406 "opt_debug.m"
                ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
              }
#line 405 "opt_debug.m"
              {
#line 405 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "rtti_id(", ll_backend__opt_debug__V_7_7);
              }
#line 405 "opt_debug.m"
            }
#line 405 "opt_debug.m"
          else
#line 408 "opt_debug.m"
            {
#line 408 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCName_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_66_66, (MR_Integer) 0)));
#line 408 "opt_debug.m"
              MR_Word ll_backend__opt_debug__TCDataName_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__V_66_66, (MR_Integer) 1)));
#line 408 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_18_18;
#line 408 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_19_19;
#line 408 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_20_20;
#line 408 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_22_22;
#line 408 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_23_23;

#line 409 "opt_debug.m"
              {
#line 409 "opt_debug.m"
                ll_backend__opt_debug__V_19_19 = ll_backend__opt_debug__dump_rtti_type_class_name_1_f_0(ll_backend__opt_debug__TCName_14);
              }
#line 410 "opt_debug.m"
              {
#line 410 "opt_debug.m"
                ll_backend__opt_debug__V_23_23 = ll_backend__opt_debug__dump_tc_rtti_name_1_f_0(ll_backend__opt_debug__TCDataName_15);
              }
#line 410 "opt_debug.m"
              {
#line 410 "opt_debug.m"
                ll_backend__opt_debug__V_22_22 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_23_23, (MR_String) ")");
              }
#line 409 "opt_debug.m"
              {
#line 409 "opt_debug.m"
                ll_backend__opt_debug__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_22_22);
              }
#line 409 "opt_debug.m"
              {
#line 409 "opt_debug.m"
                ll_backend__opt_debug__V_18_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_19_19, ll_backend__opt_debug__V_20_20);
              }
#line 408 "opt_debug.m"
              {
#line 408 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "tc_rtti_id(", ll_backend__opt_debug__V_18_18);
              }
#line 408 "opt_debug.m"
            }
#line 405 "opt_debug.m"
        }
#line 405 "opt_debug.m"
      else
#line 405 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 413 "opt_debug.m"
          {
#line 413 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__TypeNum_33;
#line 413 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__Offset_34 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 413 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 413 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_37_37;
#line 413 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_38_38;
#line 413 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_39_39;
#line 413 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_41_41;
#line 413 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_42_42;

#line 413 "opt_debug.m"
            ll_backend__opt_debug__TypeNum_33 = (MR_Integer) ll_backend__opt_debug__V_35_35;
#line 414 "opt_debug.m"
            {
#line 414 "opt_debug.m"
              ll_backend__opt_debug__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_33);
            }
#line 415 "opt_debug.m"
            {
#line 415 "opt_debug.m"
              ll_backend__opt_debug__V_42_42 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_34);
            }
#line 415 "opt_debug.m"
            {
#line 415 "opt_debug.m"
              ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_42_42, (MR_String) ")");
            }
#line 414 "opt_debug.m"
            {
#line 414 "opt_debug.m"
              ll_backend__opt_debug__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_41_41);
            }
#line 414 "opt_debug.m"
            {
#line 414 "opt_debug.m"
              ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, ll_backend__opt_debug__V_39_39);
            }
#line 413 "opt_debug.m"
            {
#line 413 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "scalar_common_data_id(", ll_backend__opt_debug__V_37_37);
            }
#line 413 "opt_debug.m"
          }
#line 405 "opt_debug.m"
        else
#line 405 "opt_debug.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 419 "opt_debug.m"
            {
#line 419 "opt_debug.m"
              MR_Word ll_backend__opt_debug__LayoutName_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_57_57;
#line 419 "opt_debug.m"
              MR_String ll_backend__opt_debug__V_58_58;

#line 420 "opt_debug.m"
              {
#line 420 "opt_debug.m"
                ll_backend__opt_debug__V_58_58 = ll_backend__opt_debug__dump_layout_name_1_f_0(ll_backend__opt_debug__LayoutName_55);
              }
#line 420 "opt_debug.m"
              {
#line 420 "opt_debug.m"
                ll_backend__opt_debug__V_57_57 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_58_58, (MR_String) ")");
              }
#line 419 "opt_debug.m"
              {
#line 419 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "layout_id(", ll_backend__opt_debug__V_57_57);
              }
#line 419 "opt_debug.m"
            }
#line 405 "opt_debug.m"
          else
#line 405 "opt_debug.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 421 "opt_debug.m"
              {
#line 421 "opt_debug.m"
                MR_Word ll_backend__opt_debug__PredProcId_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_63_63;
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_64_64;
#line 421 "opt_debug.m"
                MR_Word ll_backend__opt_debug__PredId_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_60, (MR_Integer) 0)));
#line 421 "opt_debug.m"
                MR_Integer ll_backend__opt_debug__ProcId_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__PredProcId_60, (MR_Integer) 1)));
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_70_70;
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_71_71;
#line 421 "opt_debug.m"
                MR_Integer ll_backend__opt_debug__V_72_72;
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_73_73;
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_75_75;
#line 421 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_76_76;
#line 421 "opt_debug.m"
                MR_Integer ll_backend__opt_debug__V_77_77;

#line 427 "opt_debug.m"
                {
#line 427 "opt_debug.m"
                  ll_backend__opt_debug__V_72_72 = hlds__hlds_pred__pred_id_to_int_1_f_0(ll_backend__opt_debug__PredId_67);
                }
#line 427 "opt_debug.m"
                {
#line 427 "opt_debug.m"
                  ll_backend__opt_debug__V_71_71 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_72_72);
                }
#line 428 "opt_debug.m"
                {
#line 428 "opt_debug.m"
                  ll_backend__opt_debug__V_77_77 = hlds__hlds_pred__proc_id_to_int_1_f_0(ll_backend__opt_debug__ProcId_68);
                }
#line 428 "opt_debug.m"
                {
#line 428 "opt_debug.m"
                  ll_backend__opt_debug__V_76_76 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_77_77);
                }
#line 427 "opt_debug.m"
                {
#line 427 "opt_debug.m"
                  ll_backend__opt_debug__V_75_75 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_76_76, (MR_String) ")");
                }
#line 427 "opt_debug.m"
                {
#line 427 "opt_debug.m"
                  ll_backend__opt_debug__V_73_73 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_75_75);
                }
#line 427 "opt_debug.m"
                {
#line 427 "opt_debug.m"
                  ll_backend__opt_debug__V_70_70 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_71_71, ll_backend__opt_debug__V_73_73);
                }
#line 426 "opt_debug.m"
                {
#line 426 "opt_debug.m"
                  ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0((MR_String) "proc(", ll_backend__opt_debug__V_70_70);
                }
#line 422 "opt_debug.m"
                {
#line 422 "opt_debug.m"
                  ll_backend__opt_debug__V_63_63 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_64_64, (MR_String) ")");
                }
#line 421 "opt_debug.m"
                {
#line 421 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "table_io_decl_id(", ll_backend__opt_debug__V_63_63);
                }
#line 421 "opt_debug.m"
              }
#line 405 "opt_debug.m"
            else
#line 416 "opt_debug.m"
              {
#line 416 "opt_debug.m"
                MR_Integer ll_backend__opt_debug__TypeNum_44;
#line 416 "opt_debug.m"
                MR_Integer ll_backend__opt_debug__Offset_45 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 2)));
#line 416 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 416 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_48_48;
#line 416 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_49_49;
#line 416 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_50_50;
#line 416 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_52_52;
#line 416 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_53_53;

#line 416 "opt_debug.m"
                ll_backend__opt_debug__TypeNum_44 = (MR_Integer) ll_backend__opt_debug__V_46_46;
#line 417 "opt_debug.m"
                {
#line 417 "opt_debug.m"
                  ll_backend__opt_debug__V_49_49 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__TypeNum_44);
                }
#line 418 "opt_debug.m"
                {
#line 418 "opt_debug.m"
                  ll_backend__opt_debug__V_53_53 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_45);
                }
#line 418 "opt_debug.m"
                {
#line 418 "opt_debug.m"
                  ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, (MR_String) ")");
                }
#line 417 "opt_debug.m"
                {
#line 417 "opt_debug.m"
                  ll_backend__opt_debug__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_52_52);
                }
#line 417 "opt_debug.m"
                {
#line 417 "opt_debug.m"
                  ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, ll_backend__opt_debug__V_50_50);
                }
#line 416 "opt_debug.m"
                {
#line 416 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "vector_common_data_id(", ll_backend__opt_debug__V_48_48);
                }
#line 416 "opt_debug.m"
              }
#line 405 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 405 "opt_debug.m"
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
#line 381 "opt_debug.m"
  {
#line 381 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 381 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 381 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 382 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "false";
#line 381 "opt_debug.m"
    else
#line 381 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "true";
#line 381 "opt_debug.m"
      else
#line 381 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 385 "opt_debug.m"
          {
#line 385 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_10_10;

#line 385 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__3_3 = ((MR_String) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 385 "opt_debug.m"
            ll_backend__opt_debug__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 385 "opt_debug.m"
          }
#line 381 "opt_debug.m"
        else
#line 381 "opt_debug.m"
          if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 383 "opt_debug.m"
            {
#line 383 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__I_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 383 "opt_debug.m"
              {
#line 383 "opt_debug.m"
                return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__I_7);
              }
#line 383 "opt_debug.m"
            }
#line 381 "opt_debug.m"
          else
#line 381 "opt_debug.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 392 "opt_debug.m"
              {
#line 392 "opt_debug.m"
                MR_Word ll_backend__opt_debug__CodeAddr_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 392 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_24_24;
#line 392 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_25_25;

#line 393 "opt_debug.m"
                {
#line 393 "opt_debug.m"
                  ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_code_addr_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__CodeAddr_22);
                }
#line 393 "opt_debug.m"
                {
#line 393 "opt_debug.m"
                  ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, (MR_String) ")");
                }
#line 392 "opt_debug.m"
                {
#line 392 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "code_addr_const(", ll_backend__opt_debug__V_24_24);
                }
#line 392 "opt_debug.m"
              }
#line 381 "opt_debug.m"
            else
#line 381 "opt_debug.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 394 "opt_debug.m"
                {
#line 394 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__DataId_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 394 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__MaybeOffset_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 394 "opt_debug.m"
                  MR_String ll_backend__opt_debug__DataIdStr_31;

#line 395 "opt_debug.m"
                  {
#line 395 "opt_debug.m"
                    ll_backend__opt_debug__DataIdStr_31 = ll_backend__opt_debug__dump_data_id_1_f_0(ll_backend__opt_debug__DataId_28);
                  }
#line 399 "opt_debug.m"
                  if ((ll_backend__opt_debug__MaybeOffset_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 397 "opt_debug.m"
                    {
#line 397 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_41_41;

#line 398 "opt_debug.m"
                      {
#line 398 "opt_debug.m"
                        ll_backend__opt_debug__V_41_41 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_31, (MR_String) ")");
                      }
#line 398 "opt_debug.m"
                      {
#line 398 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_41_41);
                      }
#line 397 "opt_debug.m"
                    }
#line 399 "opt_debug.m"
                  else
#line 400 "opt_debug.m"
                    {
#line 400 "opt_debug.m"
                      MR_Integer ll_backend__opt_debug__Offset_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeOffset_29, (MR_Integer) 0)));
#line 400 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_34_34;
#line 400 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_35_35;
#line 400 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_37_37;
#line 400 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_38_38;

#line 402 "opt_debug.m"
                      {
#line 402 "opt_debug.m"
                        ll_backend__opt_debug__V_38_38 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Offset_32);
                      }
#line 402 "opt_debug.m"
                      {
#line 402 "opt_debug.m"
                        ll_backend__opt_debug__V_37_37 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_38_38, (MR_String) ")");
                      }
#line 401 "opt_debug.m"
                      {
#line 401 "opt_debug.m"
                        ll_backend__opt_debug__V_35_35 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_37_37);
                      }
#line 401 "opt_debug.m"
                      {
#line 401 "opt_debug.m"
                        ll_backend__opt_debug__V_34_34 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__DataIdStr_31, ll_backend__opt_debug__V_35_35);
                      }
#line 401 "opt_debug.m"
                      {
#line 401 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "data_addr_const(", ll_backend__opt_debug__V_34_34);
                      }
#line 400 "opt_debug.m"
                    }
#line 394 "opt_debug.m"
                }
#line 381 "opt_debug.m"
              else
#line 381 "opt_debug.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 386 "opt_debug.m"
                  {
#line 386 "opt_debug.m"
                    MR_Float ll_backend__opt_debug__F_12 = MR_unbox_float((MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 386 "opt_debug.m"
                    {
#line 386 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__float_to_string_1_f_0(ll_backend__opt_debug__F_12);
                    }
#line 386 "opt_debug.m"
                  }
#line 381 "opt_debug.m"
                else
#line 381 "opt_debug.m"
                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 390 "opt_debug.m"
                    ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "multi_string(...)";
#line 381 "opt_debug.m"
                  else
#line 388 "opt_debug.m"
                    {
#line 388 "opt_debug.m"
                      MR_String ll_backend__opt_debug__S_14 = ((MR_String) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 388 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_16_16;
#line 388 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_17_17;

#line 389 "opt_debug.m"
                      {
#line 389 "opt_debug.m"
                        ll_backend__opt_debug__V_17_17 = backend_libs__c_util__quote_string_1_f_0(ll_backend__opt_debug__S_14);
                      }
#line 389 "opt_debug.m"
                      {
#line 389 "opt_debug.m"
                        ll_backend__opt_debug__V_16_16 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_17_17, (MR_String) "\"");
                      }
#line 388 "opt_debug.m"
                      {
#line 388 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "\"", ll_backend__opt_debug__V_16_16);
                      }
#line 388 "opt_debug.m"
                    }
#line 381 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 381 "opt_debug.m"
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
#line 366 "opt_debug.m"
  {
#line 366 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 366 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 366 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 368 "opt_debug.m"
      {
#line 368 "opt_debug.m"
        MR_Word ll_backend__opt_debug__N_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 368 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;

#line 369 "opt_debug.m"
        {
#line 369 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_11);
        }
#line 369 "opt_debug.m"
        {
#line 369 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, (MR_String) ")");
        }
#line 368 "opt_debug.m"
        {
#line 368 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "framevar_ref(", ll_backend__opt_debug__V_13_13);
        }
#line 368 "opt_debug.m"
      }
#line 366 "opt_debug.m"
    else
#line 366 "opt_debug.m"
      if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 370 "opt_debug.m"
        {
#line 370 "opt_debug.m"
          MR_Word ll_backend__opt_debug__R_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 370 "opt_debug.m"
          MR_Word ll_backend__opt_debug__MaybeTag_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 370 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__TagString_22;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_24_24;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_25_25;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_26_26;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_28_28;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_29_29;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_31_31;
#line 370 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_32_32;

#line 374 "opt_debug.m"
          if ((ll_backend__opt_debug__MaybeTag_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 376 "opt_debug.m"
            ll_backend__opt_debug__TagString_22 = (MR_String) "unknown_tag";
#line 374 "opt_debug.m"
          else
#line 372 "opt_debug.m"
            {
#line 372 "opt_debug.m"
              MR_Integer ll_backend__opt_debug__Tag_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MaybeTag_18, (MR_Integer) 0)));

#line 373 "opt_debug.m"
              {
#line 373 "opt_debug.m"
                ll_backend__opt_debug__TagString_22 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__Tag_21);
              }
#line 372 "opt_debug.m"
            }
#line 378 "opt_debug.m"
          {
#line 378 "opt_debug.m"
            ll_backend__opt_debug__V_25_25 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_17);
          }
#line 379 "opt_debug.m"
          {
#line 379 "opt_debug.m"
            ll_backend__opt_debug__V_32_32 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_19);
          }
#line 379 "opt_debug.m"
          {
#line 379 "opt_debug.m"
            ll_backend__opt_debug__V_31_31 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_32_32, (MR_String) ")");
          }
#line 379 "opt_debug.m"
          {
#line 379 "opt_debug.m"
            ll_backend__opt_debug__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_31_31);
          }
#line 378 "opt_debug.m"
          {
#line 378 "opt_debug.m"
            ll_backend__opt_debug__V_28_28 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__TagString_22, ll_backend__opt_debug__V_29_29);
          }
#line 378 "opt_debug.m"
          {
#line 378 "opt_debug.m"
            ll_backend__opt_debug__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_28_28);
          }
#line 378 "opt_debug.m"
          {
#line 378 "opt_debug.m"
            ll_backend__opt_debug__V_24_24 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_25_25, ll_backend__opt_debug__V_26_26);
          }
#line 378 "opt_debug.m"
          {
#line 378 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "heap_ref(", ll_backend__opt_debug__V_24_24);
          }
#line 370 "opt_debug.m"
        }
#line 366 "opt_debug.m"
      else
#line 366 "opt_debug.m"
        {
#line 366 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 366 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_7_7;
#line 366 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_8_8;

#line 367 "opt_debug.m"
          {
#line 367 "opt_debug.m"
            ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_5);
          }
#line 367 "opt_debug.m"
          {
#line 367 "opt_debug.m"
            ll_backend__opt_debug__V_7_7 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, (MR_String) ")");
          }
#line 366 "opt_debug.m"
          {
#line 366 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "stackvar_ref(", ll_backend__opt_debug__V_7_7);
          }
#line 366 "opt_debug.m"
        }
#line 366 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 366 "opt_debug.m"
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
#line 361 "opt_debug.m"
  {
#line 361 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 361 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 361 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 361 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 361 "opt_debug.m"
    else
#line 362 "opt_debug.m"
      {
#line 362 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rval_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 362 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Rvals_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 362 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;
#line 362 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;
#line 362 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;

#line 363 "opt_debug.m"
        {
#line 363 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rval_6);
        }
#line 363 "opt_debug.m"
        {
#line 363 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = ll_backend__opt_debug__dump_rvals_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Rvals_7);
        }
#line 363 "opt_debug.m"
        {
#line 363 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_11_11);
        }
#line 362 "opt_debug.m"
        {
#line 362 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_8_8, ll_backend__opt_debug__V_9_9);
        }
#line 362 "opt_debug.m"
      }
#line 361 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 361 "opt_debug.m"
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
#line 331 "opt_debug.m"
  {
#line 331 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 331 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 331 "opt_debug.m"
    if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 331 "opt_debug.m"
      {
#line 331 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lval_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));

#line 331 "opt_debug.m"
        {
#line 331 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Lval_5);
        }
#line 331 "opt_debug.m"
      }
#line 331 "opt_debug.m"
    else
#line 331 "opt_debug.m"
      if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 335 "opt_debug.m"
        {
#line 335 "opt_debug.m"
          MR_Integer ll_backend__opt_debug__T_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 335 "opt_debug.m"
          MR_Word ll_backend__opt_debug__N_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 335 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_17_17;
#line 335 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_18_18;
#line 335 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_19_19;
#line 335 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_21_21;
#line 335 "opt_debug.m"
          MR_String ll_backend__opt_debug__V_22_22;

#line 336 "opt_debug.m"
          {
#line 336 "opt_debug.m"
            ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_14);
          }
#line 337 "opt_debug.m"
          {
#line 337 "opt_debug.m"
            ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_15);
          }
#line 336 "opt_debug.m"
          {
#line 336 "opt_debug.m"
            ll_backend__opt_debug__V_21_21 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_22_22, (MR_String) ")");
          }
#line 336 "opt_debug.m"
          {
#line 336 "opt_debug.m"
            ll_backend__opt_debug__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_21_21);
          }
#line 336 "opt_debug.m"
          {
#line 336 "opt_debug.m"
            ll_backend__opt_debug__V_17_17 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_18_18, ll_backend__opt_debug__V_19_19);
          }
#line 335 "opt_debug.m"
          {
#line 335 "opt_debug.m"
            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mkword(", ll_backend__opt_debug__V_17_17);
          }
#line 335 "opt_debug.m"
        }
#line 331 "opt_debug.m"
      else
#line 331 "opt_debug.m"
        if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 333 "opt_debug.m"
          {
#line 333 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 333 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_9_9;
#line 333 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_10_10;
#line 333 "opt_debug.m"
            MR_Integer ll_backend__opt_debug__V_11_11;

#line 334 "opt_debug.m"
            {
#line 334 "opt_debug.m"
              ll_backend__opt_debug__V_11_11 = mercury__term__var_to_int_1_f_0((MR_Word) &parse_tree__prog_data__parse_tree__prog_data__type_ctor_info_prog_var_type_0, ll_backend__opt_debug__Var_7);
            }
#line 334 "opt_debug.m"
            {
#line 334 "opt_debug.m"
              ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_11_11);
            }
#line 334 "opt_debug.m"
            {
#line 334 "opt_debug.m"
              ll_backend__opt_debug__V_9_9 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, (MR_String) ")");
            }
#line 333 "opt_debug.m"
            {
#line 333 "opt_debug.m"
              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "var(", ll_backend__opt_debug__V_9_9);
            }
#line 333 "opt_debug.m"
          }
#line 331 "opt_debug.m"
        else
#line 331 "opt_debug.m"
          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 344 "opt_debug.m"
            {
#line 344 "opt_debug.m"
              MR_Word ll_backend__opt_debug__O_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 344 "opt_debug.m"
              MR_Word ll_backend__opt_debug__N1_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 344 "opt_debug.m"
              MR_Word ll_backend__opt_debug__N2_44 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 3)));

#line 346 "opt_debug.m"
              {
#line 346 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_45_45;
#line 346 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_46_46;
#line 346 "opt_debug.m"
                MR_Word ll_backend__opt_debug__V_47_47;

#line 346 "opt_debug.m"
                ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N1_43)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 346 "opt_debug.m"
                if (ll_backend__opt_debug__succeeded)
#line 346 "opt_debug.m"
                  {
#line 346 "opt_debug.m"
                    ll_backend__opt_debug__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 1)));
#line 346 "opt_debug.m"
                    ll_backend__opt_debug__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 2)));
#line 346 "opt_debug.m"
                    ll_backend__opt_debug__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N1_43, (MR_Integer) 3)));
#line 346 "opt_debug.m"
                  }
#line 346 "opt_debug.m"
              }
#line 347 "opt_debug.m"
              if (!(ll_backend__opt_debug__succeeded))
#line 347 "opt_debug.m"
                {
#line 347 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_48_48;
#line 347 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_49_49;
#line 347 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__V_50_50;

#line 347 "opt_debug.m"
                  ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__N2_44)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 347 "opt_debug.m"
                  if (ll_backend__opt_debug__succeeded)
#line 347 "opt_debug.m"
                    {
#line 347 "opt_debug.m"
                      ll_backend__opt_debug__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 1)));
#line 347 "opt_debug.m"
                      ll_backend__opt_debug__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 2)));
#line 347 "opt_debug.m"
                      ll_backend__opt_debug__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__N2_44, (MR_Integer) 3)));
#line 347 "opt_debug.m"
                    }
#line 347 "opt_debug.m"
                }
#line 344 "opt_debug.m"
              if (ll_backend__opt_debug__succeeded)
#line 350 "opt_debug.m"
                {
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_52_52;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_53_53;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_54_54;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_56_56;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_58_58;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_59_59;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_60_60;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_62_62;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_64_64;
#line 350 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_65_65;

#line 350 "opt_debug.m"
                  {
#line 350 "opt_debug.m"
                    ll_backend__opt_debug__V_53_53 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N1_43);
                  }
#line 351 "opt_debug.m"
                  {
#line 351 "opt_debug.m"
                    ll_backend__opt_debug__V_59_59 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_42);
                  }
#line 352 "opt_debug.m"
                  {
#line 352 "opt_debug.m"
                    ll_backend__opt_debug__V_65_65 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N2_44);
                  }
#line 352 "opt_debug.m"
                  {
#line 352 "opt_debug.m"
                    ll_backend__opt_debug__V_64_64 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_65_65, (MR_String) ")");
                  }
#line 351 "opt_debug.m"
                  {
#line 351 "opt_debug.m"
                    ll_backend__opt_debug__V_62_62 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_64_64);
                  }
#line 351 "opt_debug.m"
                  {
#line 351 "opt_debug.m"
                    ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_62_62);
                  }
#line 351 "opt_debug.m"
                  {
#line 351 "opt_debug.m"
                    ll_backend__opt_debug__V_58_58 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_59_59, ll_backend__opt_debug__V_60_60);
                  }
#line 350 "opt_debug.m"
                  {
#line 350 "opt_debug.m"
                    ll_backend__opt_debug__V_56_56 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_58_58);
                  }
#line 350 "opt_debug.m"
                  {
#line 350 "opt_debug.m"
                    ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0((MR_String) ")", ll_backend__opt_debug__V_56_56);
                  }
#line 350 "opt_debug.m"
                  {
#line 350 "opt_debug.m"
                    ll_backend__opt_debug__V_52_52 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_53_53, ll_backend__opt_debug__V_54_54);
                  }
#line 344 "opt_debug.m"
                  {
#line 344 "opt_debug.m"
                    return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_52_52);
                  }
#line 350 "opt_debug.m"
                }
#line 344 "opt_debug.m"
              else
#line 354 "opt_debug.m"
                {
#line 354 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_67_67;
#line 354 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_68_68;
#line 354 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_70_70;
#line 354 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_71_71;
#line 354 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_72_72;
#line 354 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_74_74;

#line 354 "opt_debug.m"
                  {
#line 354 "opt_debug.m"
                    ll_backend__opt_debug__V_67_67 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N1_43);
                  }
#line 355 "opt_debug.m"
                  {
#line 355 "opt_debug.m"
                    ll_backend__opt_debug__V_71_71 = ll_backend__opt_debug__dump_binop_1_f_0(ll_backend__opt_debug__O_42);
                  }
#line 355 "opt_debug.m"
                  {
#line 355 "opt_debug.m"
                    ll_backend__opt_debug__V_74_74 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N2_44);
                  }
#line 355 "opt_debug.m"
                  {
#line 355 "opt_debug.m"
                    ll_backend__opt_debug__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_74_74);
                  }
#line 355 "opt_debug.m"
                  {
#line 355 "opt_debug.m"
                    ll_backend__opt_debug__V_70_70 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_71_71, ll_backend__opt_debug__V_72_72);
                  }
#line 354 "opt_debug.m"
                  {
#line 354 "opt_debug.m"
                    ll_backend__opt_debug__V_68_68 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_70_70);
                  }
#line 344 "opt_debug.m"
                  {
#line 344 "opt_debug.m"
                    return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_67_67, ll_backend__opt_debug__V_68_68);
                  }
#line 354 "opt_debug.m"
                }
#line 344 "opt_debug.m"
            }
#line 331 "opt_debug.m"
          else
#line 331 "opt_debug.m"
            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 340 "opt_debug.m"
              {
#line 340 "opt_debug.m"
                MR_Word ll_backend__opt_debug__C_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 340 "opt_debug.m"
                {
#line 340 "opt_debug.m"
                  return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_const_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__C_31);
                }
#line 340 "opt_debug.m"
              }
#line 331 "opt_debug.m"
            else
#line 331 "opt_debug.m"
              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 358 "opt_debug.m"
                {
#line 358 "opt_debug.m"
                  MR_Word ll_backend__opt_debug__M_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 358 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_78_78;
#line 358 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_79_79;

#line 359 "opt_debug.m"
                  {
#line 359 "opt_debug.m"
                    ll_backend__opt_debug__V_79_79 = ll_backend__opt_debug__dump_mem_ref_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__M_76);
                  }
#line 359 "opt_debug.m"
                  {
#line 359 "opt_debug.m"
                    ll_backend__opt_debug__V_78_78 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_79_79, (MR_String) ")");
                  }
#line 358 "opt_debug.m"
                  {
#line 358 "opt_debug.m"
                    return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mem_addr(", ll_backend__opt_debug__V_78_78);
                  }
#line 358 "opt_debug.m"
                }
#line 331 "opt_debug.m"
              else
#line 331 "opt_debug.m"
                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 338 "opt_debug.m"
                  {
#line 338 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__T_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 338 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_27_27;
#line 338 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_28_28;

#line 339 "opt_debug.m"
                    {
#line 339 "opt_debug.m"
                      ll_backend__opt_debug__V_28_28 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__T_25);
                    }
#line 339 "opt_debug.m"
                    {
#line 339 "opt_debug.m"
                      ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_28_28, (MR_String) ")");
                    }
#line 338 "opt_debug.m"
                    {
#line 338 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mkword_hole(", ll_backend__opt_debug__V_27_27);
                    }
#line 338 "opt_debug.m"
                  }
#line 331 "opt_debug.m"
                else
#line 342 "opt_debug.m"
                  {
#line 342 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__O_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 342 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__N_34 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 342 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_35_35;
#line 342 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_36_36;
#line 342 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_38_38;
#line 342 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_39_39;

#line 343 "opt_debug.m"
                    {
#line 343 "opt_debug.m"
                      ll_backend__opt_debug__V_35_35 = ll_backend__opt_debug__dump_unop_1_f_0(ll_backend__opt_debug__O_33);
                    }
#line 343 "opt_debug.m"
                    {
#line 343 "opt_debug.m"
                      ll_backend__opt_debug__V_39_39 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_34);
                    }
#line 343 "opt_debug.m"
                    {
#line 343 "opt_debug.m"
                      ll_backend__opt_debug__V_38_38 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_39_39, (MR_String) ")");
                    }
#line 343 "opt_debug.m"
                    {
#line 343 "opt_debug.m"
                      ll_backend__opt_debug__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) "(", ll_backend__opt_debug__V_38_38);
                    }
#line 342 "opt_debug.m"
                    {
#line 342 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_35_35, ll_backend__opt_debug__V_36_36);
                    }
#line 342 "opt_debug.m"
                  }
#line 331 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 331 "opt_debug.m"
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
#line 321 "opt_debug.m"
  {
#line 321 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 321 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 321 "opt_debug.m"
    {
#line 321 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__Lvals_5, (MR_String) "");
    }
#line 321 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 321 "opt_debug.m"
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
#line 270 "opt_debug.m"
  {
#line 270 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 270 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 270 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 289 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "curfr";
#line 270 "opt_debug.m"
    else
#line 270 "opt_debug.m"
      if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 300 "opt_debug.m"
        ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "hp";
#line 270 "opt_debug.m"
      else
#line 270 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 288 "opt_debug.m"
          ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "maxfr";
#line 270 "opt_debug.m"
        else
#line 270 "opt_debug.m"
          if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 302 "opt_debug.m"
            ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "parent_sp";
#line 270 "opt_debug.m"
          else
#line 270 "opt_debug.m"
            if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 301 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "sp";
#line 270 "opt_debug.m"
            else
#line 270 "opt_debug.m"
              if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 287 "opt_debug.m"
                ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "succip";
#line 270 "opt_debug.m"
              else
#line 270 "opt_debug.m"
                if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 270 "opt_debug.m"
                  {
#line 270 "opt_debug.m"
                    MR_Word ll_backend__opt_debug__Type_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 270 "opt_debug.m"
                    MR_Integer ll_backend__opt_debug__Num_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));

#line 270 "opt_debug.m"
                    {
#line 270 "opt_debug.m"
                      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_5, ll_backend__opt_debug__Num_6);
                    }
#line 270 "opt_debug.m"
                  }
#line 270 "opt_debug.m"
                else
#line 270 "opt_debug.m"
                  if (((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 314 "opt_debug.m"
                    {
#line 314 "opt_debug.m"
                      MR_Word ll_backend__opt_debug__Type_93 = ((MR_Word) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 314 "opt_debug.m"
                      MR_Integer ll_backend__opt_debug__Num_94 = ((MR_Integer) (MR_hl_field(MR_mktag(2), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 314 "opt_debug.m"
                      MR_String ll_backend__opt_debug__V_96_96;

#line 315 "opt_debug.m"
                      {
#line 315 "opt_debug.m"
                        ll_backend__opt_debug__V_96_96 = ll_backend__opt_debug__dump_reg_2_f_0(ll_backend__opt_debug__Type_93, ll_backend__opt_debug__Num_94);
                      }
#line 314 "opt_debug.m"
                      {
#line 314 "opt_debug.m"
                        return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "temp_", ll_backend__opt_debug__V_96_96);
                      }
#line 314 "opt_debug.m"
                    }
#line 270 "opt_debug.m"
                  else
#line 270 "opt_debug.m"
                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 278 "opt_debug.m"
                      {
#line 278 "opt_debug.m"
                        MR_Word ll_backend__opt_debug__Type_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 278 "opt_debug.m"
                        MR_Integer ll_backend__opt_debug__N_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 278 "opt_debug.m"
                        MR_String ll_backend__opt_debug__Macro_23;
#line 278 "opt_debug.m"
                        MR_Integer ll_backend__opt_debug__V_33_33;
#line 278 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_109_109;
#line 278 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_110_110;
#line 278 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_112_112;
#line 278 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_113_113;
#line 278 "opt_debug.m"
                        MR_String ll_backend__opt_debug__V_114_114;

#line 282 "opt_debug.m"
                        if ((ll_backend__opt_debug__Type_20 == (MR_Integer) 1))
#line 284 "opt_debug.m"
                          ll_backend__opt_debug__Macro_23 = (MR_String) "parent_sv";
#line 282 "opt_debug.m"
                        else
#line 281 "opt_debug.m"
                          ll_backend__opt_debug__Macro_23 = (MR_String) "sv";
#line 286 "opt_debug.m"
                        ll_backend__opt_debug__V_33_33 = (ll_backend__opt_debug__N_21 + (MR_Integer) 1);
#line 9025 "ll_backend.opt_debug.c"
                        {
#line 9027 "ll_backend.opt_debug.c"
                          ll_backend__opt_debug__V_109_109 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__V_33_33);
                        }
#line 9030 "ll_backend.opt_debug.c"
                        {
#line 9032 "ll_backend.opt_debug.c"
                          ll_backend__opt_debug__V_110_110 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Macro_23, ll_backend__opt_debug__V_109_109);
                        }
#line 9035 "ll_backend.opt_debug.c"
                        {
#line 9037 "ll_backend.opt_debug.c"
                          ll_backend__opt_debug__V_112_112 = mercury__string__f_43_43_2_f_0((MR_String) ",", ll_backend__opt_debug__V_110_110);
                        }
#line 9040 "ll_backend.opt_debug.c"
                        {
#line 9042 "ll_backend.opt_debug.c"
                          ll_backend__opt_debug__V_113_113 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_21);
                        }
#line 9045 "ll_backend.opt_debug.c"
                        {
#line 9047 "ll_backend.opt_debug.c"
                          ll_backend__opt_debug__V_114_114 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_113_113, ll_backend__opt_debug__V_112_112);
                        }
#line 9050 "ll_backend.opt_debug.c"
                        {
#line 9052 "ll_backend.opt_debug.c"
                          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Macro_23, ll_backend__opt_debug__V_114_114);
                        }
#line 278 "opt_debug.m"
                      }
#line 270 "opt_debug.m"
                    else
#line 270 "opt_debug.m"
                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 303 "opt_debug.m"
                        {
#line 303 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__MT_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 303 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__N_74 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 2)));
#line 303 "opt_debug.m"
                          MR_Word ll_backend__opt_debug__F_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 3)));
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__T_str_78;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_80_80;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_81_81;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_83_83;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_84_84;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_85_85;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_87_87;
#line 303 "opt_debug.m"
                          MR_String ll_backend__opt_debug__V_88_88;

#line 307 "opt_debug.m"
                          if ((ll_backend__opt_debug__MT_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 309 "opt_debug.m"
                            ll_backend__opt_debug__T_str_78 = (MR_String) "no";
#line 307 "opt_debug.m"
                          else
#line 305 "opt_debug.m"
                            {
#line 305 "opt_debug.m"
                              MR_Integer ll_backend__opt_debug__T_77 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__MT_73, (MR_Integer) 0)));

#line 306 "opt_debug.m"
                              {
#line 306 "opt_debug.m"
                                mercury__string__int_to_string_2_p_0(ll_backend__opt_debug__T_77, &ll_backend__opt_debug__T_str_78);
                              }
#line 305 "opt_debug.m"
                            }
#line 311 "opt_debug.m"
                          {
#line 311 "opt_debug.m"
                            ll_backend__opt_debug__V_84_84 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__N_74);
                          }
#line 312 "opt_debug.m"
                          {
#line 312 "opt_debug.m"
                            ll_backend__opt_debug__V_88_88 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__F_75);
                          }
#line 312 "opt_debug.m"
                          {
#line 312 "opt_debug.m"
                            ll_backend__opt_debug__V_87_87 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_88_88, (MR_String) ")");
                          }
#line 311 "opt_debug.m"
                          {
#line 311 "opt_debug.m"
                            ll_backend__opt_debug__V_85_85 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_87_87);
                          }
#line 311 "opt_debug.m"
                          {
#line 311 "opt_debug.m"
                            ll_backend__opt_debug__V_83_83 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_84_84, ll_backend__opt_debug__V_85_85);
                          }
#line 311 "opt_debug.m"
                          {
#line 311 "opt_debug.m"
                            ll_backend__opt_debug__V_81_81 = mercury__string__f_43_43_2_f_0((MR_String) ", ", ll_backend__opt_debug__V_83_83);
                          }
#line 311 "opt_debug.m"
                          {
#line 311 "opt_debug.m"
                            ll_backend__opt_debug__V_80_80 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__T_str_78, ll_backend__opt_debug__V_81_81);
                          }
#line 311 "opt_debug.m"
                          {
#line 311 "opt_debug.m"
                            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "field(", ll_backend__opt_debug__V_80_80);
                          }
#line 303 "opt_debug.m"
                        }
#line 270 "opt_debug.m"
                      else
#line 270 "opt_debug.m"
                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 276 "opt_debug.m"
                          {
#line 276 "opt_debug.m"
                            MR_Integer ll_backend__opt_debug__N_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 276 "opt_debug.m"
                            MR_String ll_backend__opt_debug__V_18_18;

#line 277 "opt_debug.m"
                            {
#line 277 "opt_debug.m"
                              ll_backend__opt_debug__V_18_18 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_16);
                            }
#line 276 "opt_debug.m"
                            {
#line 276 "opt_debug.m"
                              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "fv", ll_backend__opt_debug__V_18_18);
                            }
#line 276 "opt_debug.m"
                          }
#line 270 "opt_debug.m"
                        else
#line 270 "opt_debug.m"
                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11))))
#line 318 "opt_debug.m"
                            {
#line 318 "opt_debug.m"
                              MR_String ll_backend__opt_debug__VarName_104;
#line 318 "opt_debug.m"
                              MR_Word ll_backend__opt_debug__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 318 "opt_debug.m"
                              MR_String ll_backend__opt_debug__V_107_107;

#line 318 "opt_debug.m"
                              ll_backend__opt_debug__VarName_104 = (MR_String) ll_backend__opt_debug__V_105_105;
#line 319 "opt_debug.m"
                              {
#line 319 "opt_debug.m"
                                ll_backend__opt_debug__V_107_107 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__VarName_104, (MR_String) "))");
                              }
#line 318 "opt_debug.m"
                              {
#line 318 "opt_debug.m"
                                return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "global_var_ref(env_var_ref(", ll_backend__opt_debug__V_107_107);
                              }
#line 318 "opt_debug.m"
                            }
#line 270 "opt_debug.m"
                          else
#line 270 "opt_debug.m"
                            if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 12))))
#line 313 "opt_debug.m"
                              ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "lvar(_)";
#line 270 "opt_debug.m"
                            else
#line 270 "opt_debug.m"
                              if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 316 "opt_debug.m"
                                {
#line 316 "opt_debug.m"
                                  MR_Word ll_backend__opt_debug__R_98 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 316 "opt_debug.m"
                                  MR_String ll_backend__opt_debug__V_100_100;
#line 316 "opt_debug.m"
                                  MR_String ll_backend__opt_debug__V_101_101;

#line 317 "opt_debug.m"
                                  {
#line 317 "opt_debug.m"
                                    ll_backend__opt_debug__V_101_101 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_98);
                                  }
#line 317 "opt_debug.m"
                                  {
#line 317 "opt_debug.m"
                                    ll_backend__opt_debug__V_100_100 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_101_101, (MR_String) ")");
                                  }
#line 316 "opt_debug.m"
                                  {
#line 316 "opt_debug.m"
                                    return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "mem_ref(", ll_backend__opt_debug__V_100_100);
                                  }
#line 316 "opt_debug.m"
                                }
#line 270 "opt_debug.m"
                              else
#line 270 "opt_debug.m"
                                if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 274 "opt_debug.m"
                                  {
#line 274 "opt_debug.m"
                                    MR_Integer ll_backend__opt_debug__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 274 "opt_debug.m"
                                    MR_String ll_backend__opt_debug__V_14_14;

#line 275 "opt_debug.m"
                                    {
#line 275 "opt_debug.m"
                                      ll_backend__opt_debug__V_14_14 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_12);
                                    }
#line 274 "opt_debug.m"
                                    {
#line 274 "opt_debug.m"
                                      return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "parent_sv", ll_backend__opt_debug__V_14_14);
                                    }
#line 274 "opt_debug.m"
                                  }
#line 270 "opt_debug.m"
                                else
#line 270 "opt_debug.m"
                                  if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 292 "opt_debug.m"
                                    {
#line 292 "opt_debug.m"
                                      MR_Word ll_backend__opt_debug__R_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 292 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_48_48;
#line 292 "opt_debug.m"
                                      MR_String ll_backend__opt_debug__V_49_49;

#line 293 "opt_debug.m"
                                      {
#line 293 "opt_debug.m"
                                        ll_backend__opt_debug__V_49_49 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_46);
                                      }
#line 293 "opt_debug.m"
                                      {
#line 293 "opt_debug.m"
                                        ll_backend__opt_debug__V_48_48 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_49_49, (MR_String) ")");
                                      }
#line 292 "opt_debug.m"
                                      {
#line 292 "opt_debug.m"
                                        return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "prevfr_slot(", ll_backend__opt_debug__V_48_48);
                                      }
#line 292 "opt_debug.m"
                                    }
#line 270 "opt_debug.m"
                                  else
#line 270 "opt_debug.m"
                                    if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 294 "opt_debug.m"
                                      {
#line 294 "opt_debug.m"
                                        MR_Word ll_backend__opt_debug__R_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 294 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_54_54;
#line 294 "opt_debug.m"
                                        MR_String ll_backend__opt_debug__V_55_55;

#line 295 "opt_debug.m"
                                        {
#line 295 "opt_debug.m"
                                          ll_backend__opt_debug__V_55_55 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_52);
                                        }
#line 295 "opt_debug.m"
                                        {
#line 295 "opt_debug.m"
                                          ll_backend__opt_debug__V_54_54 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_55_55, (MR_String) ")");
                                        }
#line 294 "opt_debug.m"
                                        {
#line 294 "opt_debug.m"
                                          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "redofr_slot(", ll_backend__opt_debug__V_54_54);
                                        }
#line 294 "opt_debug.m"
                                      }
#line 270 "opt_debug.m"
                                    else
#line 270 "opt_debug.m"
                                      if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6))))
#line 296 "opt_debug.m"
                                        {
#line 296 "opt_debug.m"
                                          MR_Word ll_backend__opt_debug__R_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_60_60;
#line 296 "opt_debug.m"
                                          MR_String ll_backend__opt_debug__V_61_61;

#line 297 "opt_debug.m"
                                          {
#line 297 "opt_debug.m"
                                            ll_backend__opt_debug__V_61_61 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_58);
                                          }
#line 297 "opt_debug.m"
                                          {
#line 297 "opt_debug.m"
                                            ll_backend__opt_debug__V_60_60 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_61_61, (MR_String) ")");
                                          }
#line 296 "opt_debug.m"
                                          {
#line 296 "opt_debug.m"
                                            return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "redoip_slot(", ll_backend__opt_debug__V_60_60);
                                          }
#line 296 "opt_debug.m"
                                        }
#line 270 "opt_debug.m"
                                      else
#line 270 "opt_debug.m"
                                        if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 272 "opt_debug.m"
                                          {
#line 272 "opt_debug.m"
                                            MR_Integer ll_backend__opt_debug__N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 272 "opt_debug.m"
                                            MR_String ll_backend__opt_debug__V_10_10;

#line 273 "opt_debug.m"
                                            {
#line 273 "opt_debug.m"
                                              ll_backend__opt_debug__V_10_10 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_8);
                                            }
#line 272 "opt_debug.m"
                                            {
#line 272 "opt_debug.m"
                                              return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "sv", ll_backend__opt_debug__V_10_10);
                                            }
#line 272 "opt_debug.m"
                                          }
#line 270 "opt_debug.m"
                                        else
#line 270 "opt_debug.m"
                                          if (((((MR_tag((MR_Word) ll_backend__opt_debug__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 290 "opt_debug.m"
                                            {
#line 290 "opt_debug.m"
                                              MR_Word ll_backend__opt_debug__R_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_42_42;
#line 290 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_43_43;

#line 291 "opt_debug.m"
                                              {
#line 291 "opt_debug.m"
                                                ll_backend__opt_debug__V_43_43 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_40);
                                              }
#line 291 "opt_debug.m"
                                              {
#line 291 "opt_debug.m"
                                                ll_backend__opt_debug__V_42_42 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_43_43, (MR_String) ")");
                                              }
#line 290 "opt_debug.m"
                                              {
#line 290 "opt_debug.m"
                                                return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "succfr_slot(", ll_backend__opt_debug__V_42_42);
                                              }
#line 290 "opt_debug.m"
                                            }
#line 270 "opt_debug.m"
                                          else
#line 298 "opt_debug.m"
                                            {
#line 298 "opt_debug.m"
                                              MR_Word ll_backend__opt_debug__R_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_66_66;
#line 298 "opt_debug.m"
                                              MR_String ll_backend__opt_debug__V_67_67;

#line 299 "opt_debug.m"
                                              {
#line 299 "opt_debug.m"
                                                ll_backend__opt_debug__V_67_67 = ll_backend__opt_debug__dump_rval_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__R_64);
                                              }
#line 299 "opt_debug.m"
                                              {
#line 299 "opt_debug.m"
                                                ll_backend__opt_debug__V_66_66 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_67_67, (MR_String) ")");
                                              }
#line 298 "opt_debug.m"
                                              {
#line 298 "opt_debug.m"
                                                return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "succip_slot(", ll_backend__opt_debug__V_66_66);
                                              }
#line 298 "opt_debug.m"
                                            }
#line 270 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 270 "opt_debug.m"
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
#line 265 "opt_debug.m"
  {
#line 265 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 265 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 265 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == (MR_Integer) 1))
#line 267 "opt_debug.m"
      {
#line 267 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_9_9;

#line 268 "opt_debug.m"
        {
#line 268 "opt_debug.m"
          ll_backend__opt_debug__V_9_9 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_2);
        }
#line 267 "opt_debug.m"
        {
#line 267 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "f", ll_backend__opt_debug__V_9_9);
        }
#line 267 "opt_debug.m"
      }
#line 265 "opt_debug.m"
    else
#line 265 "opt_debug.m"
      {
#line 265 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;

#line 266 "opt_debug.m"
        {
#line 266 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__N_2);
        }
#line 265 "opt_debug.m"
        {
#line 265 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "r", ll_backend__opt_debug__V_6_6);
        }
#line 265 "opt_debug.m"
      }
#line 265 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 265 "opt_debug.m"
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
#line 262 "opt_debug.m"
  {
#line 262 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 262 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;
#line 262 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_6_6;

#line 263 "opt_debug.m"
    {
#line 263 "opt_debug.m"
      ll_backend__opt_debug__V_6_6 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_debug__Lvalset_5);
    }
#line 321 "opt_debug.m"
    {
#line 321 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__V_6_6, (MR_String) "");
    }
#line 262 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 262 "opt_debug.m"
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
#line 256 "opt_debug.m"
  {
#line 256 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 256 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;

#line 256 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 256 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__3_3 = (MR_String) "";
#line 256 "opt_debug.m"
    else
#line 257 "opt_debug.m"
      {
#line 257 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Label_6;
#line 257 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Lvalset_7;
#line 257 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Livemaplist_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 1)));
#line 257 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__2_2, (MR_Integer) 0)));
#line 257 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_10_10;
#line 257 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_11_11;
#line 257 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_13_13;
#line 257 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_14_14;
#line 257 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_15_15;
#line 257 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_17_17;
#line 257 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_20_20;

#line 257 "opt_debug.m"
        ll_backend__opt_debug__Label_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 0)));
#line 257 "opt_debug.m"
        ll_backend__opt_debug__Lvalset_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__V_9_9, (MR_Integer) 1)));
#line 258 "opt_debug.m"
        {
#line 258 "opt_debug.m"
          ll_backend__opt_debug__V_10_10 = ll_backend__opt_debug__dump_label_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Label_6);
        }
#line 263 "opt_debug.m"
        {
#line 263 "opt_debug.m"
          ll_backend__opt_debug__V_20_20 = mercury__set__to_sorted_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_lval_0, ll_backend__opt_debug__Lvalset_7);
        }
#line 321 "opt_debug.m"
        {
#line 321 "opt_debug.m"
          ll_backend__opt_debug__V_14_14 = ll_backend__opt_debug__dump_lvals_2_3_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__V_20_20, (MR_String) "");
        }
#line 259 "opt_debug.m"
        {
#line 259 "opt_debug.m"
          ll_backend__opt_debug__V_17_17 = ll_backend__opt_debug__dump_livemaplist_2_f_0(ll_backend__opt_debug__MaybeProcLabel_1, ll_backend__opt_debug__Livemaplist_8);
        }
#line 259 "opt_debug.m"
        {
#line 259 "opt_debug.m"
          ll_backend__opt_debug__V_15_15 = mercury__string__f_43_43_2_f_0((MR_String) "\n", ll_backend__opt_debug__V_17_17);
        }
#line 258 "opt_debug.m"
        {
#line 258 "opt_debug.m"
          ll_backend__opt_debug__V_13_13 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_14_14, ll_backend__opt_debug__V_15_15);
        }
#line 258 "opt_debug.m"
        {
#line 258 "opt_debug.m"
          ll_backend__opt_debug__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) " ->", ll_backend__opt_debug__V_13_13);
        }
#line 257 "opt_debug.m"
        {
#line 257 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_10_10, ll_backend__opt_debug__V_11_11);
        }
#line 257 "opt_debug.m"
      }
#line 256 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 256 "opt_debug.m"
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
#line 253 "opt_debug.m"
  {
#line 253 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 253 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__3_3;
#line 253 "opt_debug.m"
    MR_Word ll_backend__opt_debug__V_6_6;

#line 254 "opt_debug.m"
    {
#line 254 "opt_debug.m"
      ll_backend__opt_debug__V_6_6 = mercury__map__to_assoc_list_1_f_0((MR_Word) &ll_backend__llds__ll_backend__llds__type_ctor_info_label_0, (MR_Word) &ll_backend__opt_debug_scalar_common_1[0], ll_backend__opt_debug__Livemap_5);
    }
#line 253 "opt_debug.m"
    {
#line 253 "opt_debug.m"
      return ll_backend__opt_debug__HeadVar__3_3 = ll_backend__opt_debug__dump_livemaplist_2_f_0(ll_backend__opt_debug__MaybeProcLabel_4, ll_backend__opt_debug__V_6_6);
    }
#line 253 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__3_3;
#line 253 "opt_debug.m"
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
#line 249 "opt_debug.m"
  {
#line 249 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 249 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__2_2;

#line 249 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 249 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__2_2 = (MR_String) "";
#line 249 "opt_debug.m"
    else
#line 250 "opt_debug.m"
      {
#line 250 "opt_debug.m"
        MR_Integer ll_backend__opt_debug__H_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 250 "opt_debug.m"
        MR_Word ll_backend__opt_debug__T_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 250 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_6_6;
#line 250 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_7_7;
#line 250 "opt_debug.m"
        MR_String ll_backend__opt_debug__V_8_8;

#line 251 "opt_debug.m"
        {
#line 251 "opt_debug.m"
          ll_backend__opt_debug__V_7_7 = mercury__string__int_to_string_1_f_0(ll_backend__opt_debug__H_3);
        }
#line 251 "opt_debug.m"
        {
#line 251 "opt_debug.m"
          ll_backend__opt_debug__V_8_8 = ll_backend__opt_debug__dump_intlist_1_f_0(ll_backend__opt_debug__T_4);
        }
#line 251 "opt_debug.m"
        {
#line 251 "opt_debug.m"
          ll_backend__opt_debug__V_6_6 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__V_7_7, ll_backend__opt_debug__V_8_8);
        }
#line 250 "opt_debug.m"
        {
#line 250 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) " ", ll_backend__opt_debug__V_6_6);
        }
#line 250 "opt_debug.m"
      }
#line 249 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__2_2;
#line 249 "opt_debug.m"
  }
#line 64 "opt_debug.m"
}

#line 215 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__dump_instrs_3_f_0_1(
#line 215 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 215 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 215 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 215 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3)
#line 215 "opt_debug.m"
{
#line 215 "opt_debug.m"
  {
#line 215 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;
#line 215 "opt_debug.m"
    MR_String ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7;

#line 215 "opt_debug.m"
    {
#line 215 "opt_debug.m"
      ll_backend__opt_debug__dump_comment_char_3_p_0(((MR_Char) (MR_Word) ll_backend__opt_debug__wrapper_arg_1), ((MR_String) ll_backend__opt_debug__wrapper_arg_2), &ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7);
    }
#line 215 "opt_debug.m"
    *ll_backend__opt_debug__wrapper_arg_3 = ((MR_Box) (ll_backend__opt_debug__conv0_STATE_VARIABLE_Str_7));
#line 215 "opt_debug.m"
  }
#line 215 "opt_debug.m"
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
#line 209 "opt_debug.m"
  {
#line 209 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;
#line 209 "opt_debug.m"
    MR_String ll_backend__opt_debug__HeadVar__4_4;

#line 209 "opt_debug.m"
    if ((ll_backend__opt_debug__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 209 "opt_debug.m"
      ll_backend__opt_debug__HeadVar__4_4 = (MR_String) "";
#line 209 "opt_debug.m"
    else
#line 210 "opt_debug.m"
      {
#line 210 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instr_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 0)));
#line 210 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Instrs_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__3_3, (MR_Integer) 1)));
#line 210 "opt_debug.m"
        MR_Word ll_backend__opt_debug__Uinstr_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_9, (MR_Integer) 0)));
#line 210 "opt_debug.m"
        MR_String ll_backend__opt_debug__Comment_13 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_9, (MR_Integer) 1)));
#line 210 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstrStr0_15;
#line 210 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstrStr_18;
#line 210 "opt_debug.m"
        MR_String ll_backend__opt_debug__InstrsStr_19;
#line 212 "opt_debug.m"
        MR_Word ll_backend__opt_debug__V_14_14;

#line 212 "opt_debug.m"
        ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 212 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 212 "opt_debug.m"
          {
#line 212 "opt_debug.m"
            ll_backend__opt_debug__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 1)));
#line 213 "opt_debug.m"
            {
#line 213 "opt_debug.m"
              ll_backend__opt_debug__InstrStr0_15 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Uinstr_12);
            }
#line 212 "opt_debug.m"
          }
#line 212 "opt_debug.m"
        else
#line 217 "opt_debug.m"
          {
#line 217 "opt_debug.m"
            MR_String ll_backend__opt_debug__InstrComment_16;

#line 214 "opt_debug.m"
            ll_backend__opt_debug__succeeded = ((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_12)) == (MR_mktag((MR_Integer) 1)));
#line 214 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 214 "opt_debug.m"
              {
#line 214 "opt_debug.m"
                ll_backend__opt_debug__InstrComment_16 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Uinstr_12, (MR_Integer) 0)));
#line 215 "opt_debug.m"
                {
#line 215 "opt_debug.m"
                  MR_String ll_backend__opt_debug__InstrCommentStr_17;
#line 215 "opt_debug.m"
                  MR_Box ll_backend__opt_debug__conv1_InstrCommentStr_17;

#line 215 "opt_debug.m"
                  {
#line 215 "opt_debug.m"
                    mercury__string__foldl_4_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[1], ll_backend__opt_debug__InstrComment_16, ((MR_Box) ((MR_String) "")), &ll_backend__opt_debug__conv1_InstrCommentStr_17);
                  }
#line 215 "opt_debug.m"
                  ll_backend__opt_debug__InstrCommentStr_17 = ((MR_String) ll_backend__opt_debug__conv1_InstrCommentStr_17);
#line 216 "opt_debug.m"
                  {
#line 216 "opt_debug.m"
                    ll_backend__opt_debug__InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t% ", ll_backend__opt_debug__InstrCommentStr_17);
                  }
#line 215 "opt_debug.m"
                }
#line 214 "opt_debug.m"
              }
#line 214 "opt_debug.m"
            else
#line 218 "opt_debug.m"
              {
#line 218 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_24_24;

#line 218 "opt_debug.m"
                {
#line 218 "opt_debug.m"
                  ll_backend__opt_debug__V_24_24 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Uinstr_12);
                }
#line 218 "opt_debug.m"
                {
#line 218 "opt_debug.m"
                  ll_backend__opt_debug__InstrStr0_15 = mercury__string__f_43_43_2_f_0((MR_String) "\t", ll_backend__opt_debug__V_24_24);
                }
#line 218 "opt_debug.m"
              }
#line 217 "opt_debug.m"
          }
#line 221 "opt_debug.m"
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__HeadVar__2_2 == (MR_Integer) 1);
#line 221 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 221 "opt_debug.m"
          {
#line 222 "opt_debug.m"
            ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Comment_13, (MR_String) "") == 0);
#line 222 "opt_debug.m"
            ll_backend__opt_debug__succeeded = !(ll_backend__opt_debug__succeeded);
#line 221 "opt_debug.m"
          }
#line 225 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 224 "opt_debug.m"
          {
#line 224 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_25_25;
#line 224 "opt_debug.m"
            MR_String ll_backend__opt_debug__V_27_27;

#line 224 "opt_debug.m"
            {
#line 224 "opt_debug.m"
              ll_backend__opt_debug__V_27_27 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__Comment_13, (MR_String) "\n");
            }
#line 224 "opt_debug.m"
            {
#line 224 "opt_debug.m"
              ll_backend__opt_debug__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", ll_backend__opt_debug__V_27_27);
            }
#line 224 "opt_debug.m"
            {
#line 224 "opt_debug.m"
              ll_backend__opt_debug__InstrStr_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr0_15, ll_backend__opt_debug__V_25_25);
            }
#line 224 "opt_debug.m"
          }
#line 225 "opt_debug.m"
        else
#line 226 "opt_debug.m"
          {
#line 226 "opt_debug.m"
            {
#line 226 "opt_debug.m"
              ll_backend__opt_debug__InstrStr_18 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr0_15, (MR_String) "\n");
            }
#line 226 "opt_debug.m"
          }
#line 228 "opt_debug.m"
        {
#line 228 "opt_debug.m"
          ll_backend__opt_debug__InstrsStr_19 = ll_backend__opt_debug__dump_instrs_3_f_0(ll_backend__opt_debug__HeadVar__1_1, ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__Instrs_10);
        }
#line 229 "opt_debug.m"
        {
#line 229 "opt_debug.m"
          return ll_backend__opt_debug__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(ll_backend__opt_debug__InstrStr_18, ll_backend__opt_debug__InstrsStr_19);
        }
#line 210 "opt_debug.m"
      }
#line 209 "opt_debug.m"
    return ll_backend__opt_debug__HeadVar__4_4;
#line 209 "opt_debug.m"
  }
#line 62 "opt_debug.m"
}

#line 193 "opt_debug.m"
static void MR_CALL 
ll_backend__opt_debug__write_instrs_5_p_0_1(
#line 193 "opt_debug.m"
  MR_Box ll_backend__opt_debug__closure_arg,
#line 193 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_1,
#line 193 "opt_debug.m"
  MR_Box ll_backend__opt_debug__wrapper_arg_2,
#line 193 "opt_debug.m"
  MR_Box * ll_backend__opt_debug__wrapper_arg_3)
#line 193 "opt_debug.m"
{
#line 193 "opt_debug.m"
  {
#line 193 "opt_debug.m"
    MR_Box ll_backend__opt_debug__closure = ll_backend__opt_debug__closure_arg;

#line 193 "opt_debug.m"
    {
#line 193 "opt_debug.m"
      ll_backend__opt_debug__print_comment_char_3_p_0(((MR_Char) (MR_Word) ll_backend__opt_debug__wrapper_arg_1));
#line 193 "opt_debug.m"
      return;
    }
#line 193 "opt_debug.m"
  }
#line 193 "opt_debug.m"
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
#line 186 "opt_debug.m"
  while (MR_TRUE)
#line 186 "opt_debug.m"
    {
#line 186 "opt_debug.m"
      /* tailcall optimized into a loop */
#line 186 "opt_debug.m"
      {
#line 186 "opt_debug.m"
        MR_bool ll_backend__opt_debug__succeeded;

#line 186 "opt_debug.m"
        if ((ll_backend__opt_debug__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 186 "opt_debug.m"
          {
#line 186 "opt_debug.m"
          }
#line 186 "opt_debug.m"
        else
#line 187 "opt_debug.m"
          {
#line 187 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Instr_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 0)));
#line 187 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Instrs_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__HeadVar__1_1, (MR_Integer) 1)));
#line 187 "opt_debug.m"
            MR_Word ll_backend__opt_debug__Uinstr_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_11, (MR_Integer) 0)));
#line 187 "opt_debug.m"
            MR_String ll_backend__opt_debug__Comment_17 = ((MR_String) (MR_hl_field(MR_mktag(0), ll_backend__opt_debug__Instr_11, (MR_Integer) 1)));
#line 189 "opt_debug.m"
            MR_Word ll_backend__opt_debug__V_18_18;

#line 189 "opt_debug.m"
            ll_backend__opt_debug__succeeded = ((((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_16)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 189 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 189 "opt_debug.m"
              {
#line 189 "opt_debug.m"
                ll_backend__opt_debug__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 1)));
#line 190 "opt_debug.m"
                {
#line 190 "opt_debug.m"
                  MR_String ll_backend__opt_debug__V_22_22;

#line 190 "opt_debug.m"
                  {
#line 190 "opt_debug.m"
                    ll_backend__opt_debug__V_22_22 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__HeadVar__3_3, ll_backend__opt_debug__Uinstr_16);
                  }
#line 190 "opt_debug.m"
                  {
#line 190 "opt_debug.m"
                    mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_22_22);
                  }
#line 190 "opt_debug.m"
                }
#line 189 "opt_debug.m"
              }
#line 189 "opt_debug.m"
            else
#line 194 "opt_debug.m"
              {
#line 194 "opt_debug.m"
                MR_String ll_backend__opt_debug__InstrComment_19;

#line 191 "opt_debug.m"
                ll_backend__opt_debug__succeeded = ((MR_tag((MR_Word) ll_backend__opt_debug__Uinstr_16)) == (MR_mktag((MR_Integer) 1)));
#line 191 "opt_debug.m"
                if (ll_backend__opt_debug__succeeded)
#line 191 "opt_debug.m"
                  {
#line 191 "opt_debug.m"
                    ll_backend__opt_debug__InstrComment_19 = ((MR_String) (MR_hl_field(MR_mktag(1), ll_backend__opt_debug__Uinstr_16, (MR_Integer) 0)));
#line 192 "opt_debug.m"
                    {
#line 193 "opt_debug.m"
                      MR_Box ll_backend__opt_debug__conv0_STATE_VARIABLE_IO_23_23;

#line 192 "opt_debug.m"
                      {
#line 192 "opt_debug.m"
                        mercury__io__write_string_3_p_0((MR_String) "\t% ");
                      }
#line 193 "opt_debug.m"
                      {
#line 193 "opt_debug.m"
                        mercury__string__foldl_4_p_0((MR_Word) &mercury__io__io__type_ctor_info_state_0, (MR_Word) &ll_backend__opt_debug_scalar_common_3[0], ll_backend__opt_debug__InstrComment_19, ((MR_Box) ((MR_Integer) 0)), &ll_backend__opt_debug__conv0_STATE_VARIABLE_IO_23_23);
                      }
#line 192 "opt_debug.m"
                    }
#line 191 "opt_debug.m"
                  }
#line 191 "opt_debug.m"
                else
#line 195 "opt_debug.m"
                  {
#line 195 "opt_debug.m"
                    MR_String ll_backend__opt_debug__V_30_30;

#line 195 "opt_debug.m"
                    {
#line 195 "opt_debug.m"
                      mercury__io__write_string_3_p_0((MR_String) "\t");
                    }
#line 196 "opt_debug.m"
                    {
#line 196 "opt_debug.m"
                      ll_backend__opt_debug__V_30_30 = ll_backend__opt_debug__dump_instr_3_f_0(ll_backend__opt_debug__HeadVar__2_2, ll_backend__opt_debug__HeadVar__3_3, ll_backend__opt_debug__Uinstr_16);
                    }
#line 196 "opt_debug.m"
                    {
#line 196 "opt_debug.m"
                      mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_30_30);
                    }
#line 195 "opt_debug.m"
                  }
#line 194 "opt_debug.m"
              }
#line 199 "opt_debug.m"
            ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__HeadVar__3_3 == (MR_Integer) 1);
#line 199 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 199 "opt_debug.m"
              {
#line 200 "opt_debug.m"
                ll_backend__opt_debug__succeeded = (strcmp(ll_backend__opt_debug__Comment_17, (MR_String) "") == 0);
#line 200 "opt_debug.m"
                ll_backend__opt_debug__succeeded = !(ll_backend__opt_debug__succeeded);
#line 199 "opt_debug.m"
              }
#line 203 "opt_debug.m"
            if (ll_backend__opt_debug__succeeded)
#line 202 "opt_debug.m"
              {
#line 202 "opt_debug.m"
                MR_String ll_backend__opt_debug__V_32_32;

#line 202 "opt_debug.m"
                {
#line 202 "opt_debug.m"
                  ll_backend__opt_debug__V_32_32 = mercury__string__f_43_43_2_f_0((MR_String) "\n\t\t", ll_backend__opt_debug__Comment_17);
                }
#line 202 "opt_debug.m"
                {
#line 202 "opt_debug.m"
                  mercury__io__write_string_3_p_0(ll_backend__opt_debug__V_32_32);
                }
#line 202 "opt_debug.m"
              }
#line 203 "opt_debug.m"
            else
#line 202 "opt_debug.m"
              {
#line 202 "opt_debug.m"
              }
#line 206 "opt_debug.m"
            {
#line 206 "opt_debug.m"
              mercury__io__nl_2_p_0();
            }
#line 207 "opt_debug.m"
            /* direct tailcall eliminated */
#line 207 "opt_debug.m"
            {
#line 207 "opt_debug.m"
              MR_Word ll_backend__opt_debug__HeadVar__1__tmp_copy_1 = ll_backend__opt_debug__Instrs_12;

#line 207 "opt_debug.m"
              ll_backend__opt_debug__HeadVar__1_1 = ll_backend__opt_debug__HeadVar__1__tmp_copy_1;
#line 207 "opt_debug.m"
            }
#line 207 "opt_debug.m"
            continue;
#line 187 "opt_debug.m"
          }
#line 186 "opt_debug.m"
      }
#line 186 "opt_debug.m"
      break;
#line 186 "opt_debug.m"
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
#line 180 "opt_debug.m"
  {
#line 180 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;

#line 180 "opt_debug.m"
    if ((ll_backend__opt_debug__OptDebug_7 == (MR_Integer) 0))
#line 183 "opt_debug.m"
      {
#line 183 "opt_debug.m"
      }
#line 180 "opt_debug.m"
    else
#line 181 "opt_debug.m"
      {
#line 181 "opt_debug.m"
        ll_backend__opt_debug__write_instrs_5_p_0(ll_backend__opt_debug__Instrs_10, ll_backend__opt_debug__MaybeProcLabel_9, ll_backend__opt_debug__AutoComments_8);
#line 181 "opt_debug.m"
        return;
      }
#line 180 "opt_debug.m"
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
#line 164 "opt_debug.m"
  {
#line 164 "opt_debug.m"
    MR_bool ll_backend__opt_debug__succeeded;

#line 164 "opt_debug.m"
    if ((ll_backend__opt_debug__OptDebug_6 == (MR_Integer) 0))
#line 175 "opt_debug.m"
      {
#line 175 "opt_debug.m"
      }
#line 164 "opt_debug.m"
    else
#line 164 "opt_debug.m"
      {
#line 165 "opt_debug.m"
        {
#line 165 "opt_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
        }
#line 166 "opt_debug.m"
        {
#line 166 "opt_debug.m"
          mercury__io__write_string_3_p_0(ll_backend__opt_debug__Msg_8);
        }
#line 167 "opt_debug.m"
        ll_backend__opt_debug__succeeded = (ll_backend__opt_debug__LabelNo_7 >= (MR_Integer) 0);
#line 170 "opt_debug.m"
        if (ll_backend__opt_debug__succeeded)
#line 168 "opt_debug.m"
          {
#line 168 "opt_debug.m"
            {
#line 168 "opt_debug.m"
              mercury__io__write_string_3_p_0((MR_String) ", next label no: ");
            }
#line 169 "opt_debug.m"
            {
#line 169 "opt_debug.m"
              mercury__io__write_int_3_p_0(ll_backend__opt_debug__LabelNo_7);
            }
#line 168 "opt_debug.m"
          }
#line 170 "opt_debug.m"
        else
#line 169 "opt_debug.m"
          {
#line 169 "opt_debug.m"
          }
#line 173 "opt_debug.m"
        {
#line 173 "opt_debug.m"
          mercury__io__write_string_3_p_0((MR_String) "\n");
#line 173 "opt_debug.m"
          return;
        }
#line 164 "opt_debug.m"
      }
#line 164 "opt_debug.m"
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
