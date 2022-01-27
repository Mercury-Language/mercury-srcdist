/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version rotd-2015-11-30
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


/* :- module top_level.mercury_compile_mlds_back_end. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile_mlds_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_mlds_back_end.mih"


#include "analysis.mih"
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "backend_libs.base_typeclass_info.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "backend_libs.type_ctor_info.mih"
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
#include "hlds.make_hlds.mih"
#include "hlds.mark_static_terms.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.rat.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
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
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "pprint.mih"
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
#include "ml_backend.add_heap_ops.mih"
#include "ml_backend.add_trail_ops.mih"
#include "ml_backend.ml_elim_nested.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_optimize.mih"
#include "ml_backend.ml_proc_gen.mih"
#include "ml_backend.ml_tailcall.mih"
#include "ml_backend.ml_util.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c.mih"
#include "ml_backend.mlds_to_cs.mih"
#include "ml_backend.mlds_to_java.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 106 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__106__1_2_p_0(
#line 106 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_39,
#line 106 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_40);

#line 391 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
#line 391 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
#line 391 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
#line 391 "mercury_compile_mlds_back_end.m"
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
#line 391 "mercury_compile_mlds_back_end.m"
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10);

#line 337 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(
#line 337 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_4,
#line 337 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21,
#line 337 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22);

#line 325 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 298 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);

#line 291 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 249 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);

#line 242 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 106 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1(
#line 106 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg);


static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[3][2];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[1][5];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[3][1];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[1][6];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[2][3];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[1][8];




static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[3][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) ((MR_String) "Sorry, not implemented: \140--high-level-code\' and just one of \140--reclaim-heap-on-semidet-failure\' and \140--reclaim-heap-on-nondet-failure\'. Use \140--(no-)reclaim-heap" "-on-failure\' instead."))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[1]))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[3][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_5[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_5[1]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



#line 106 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__106__1_2_p_0(
#line 106 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_39,
#line 106 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_40)
#line 106 "mercury_compile_mlds_back_end.m"
{
#line 106 "mercury_compile_mlds_back_end.m"
  {
#line 106 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__HeadVar__1_39 == top_level__mercury_compile_mlds_back_end__HeadVar__2_40);

#line 106 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__succeeded;
#line 106 "mercury_compile_mlds_back_end.m"
  }
#line 106 "mercury_compile_mlds_back_end.m"
}

#line 391 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
#line 391 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
#line 391 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
#line 391 "mercury_compile_mlds_back_end.m"
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
#line 391 "mercury_compile_mlds_back_end.m"
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10)
#line 391 "mercury_compile_mlds_back_end.m"
{
#line 394 "mercury_compile_mlds_back_end.m"
  {
#line 394 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 394 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_12;
#line 394 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__DumpStages_13;
#line 394 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14;
#line 394 "mercury_compile_mlds_back_end.m"
    MR_String top_level__mercury_compile_mlds_back_end__StageNumStr_15;

#line 395 "mercury_compile_mlds_back_end.m"
    {
#line 395 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 46, &top_level__mercury_compile_mlds_back_end__Verbose_12);
    }
#line 396 "mercury_compile_mlds_back_end.m"
    {
#line 396 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 156, &top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
#line 397 "mercury_compile_mlds_back_end.m"
    {
#line 397 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 157, &top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
#line 399 "mercury_compile_mlds_back_end.m"
    {
#line 399 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__StageNumStr_15 = hlds__passes_aux__stage_num_str_1_f_0(top_level__mercury_compile_mlds_back_end__StageNum_9);
    }
#line 400 "mercury_compile_mlds_back_end.m"
    {
#line 400 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
#line 400 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 401 "mercury_compile_mlds_back_end.m"
      {
#line 401 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__DumpSuffix_16;
#line 401 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_30_30;
#line 401 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_31_31;
#line 404 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end___Succeeded_17;

#line 401 "mercury_compile_mlds_back_end.m"
        {
#line 401 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out MLDS as C...\n");
        }
#line 402 "mercury_compile_mlds_back_end.m"
        {
#line 402 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12);
        }
#line 403 "mercury_compile_mlds_back_end.m"
        {
#line 403 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
        }
#line 403 "mercury_compile_mlds_back_end.m"
        {
#line 403 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_30_30 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__V_31_31);
        }
#line 403 "mercury_compile_mlds_back_end.m"
        {
#line 403 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__DumpSuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "_dump.", top_level__mercury_compile_mlds_back_end__V_30_30);
        }
#line 404 "mercury_compile_mlds_back_end.m"
        {
#line 404 "mercury_compile_mlds_back_end.m"
          ml_backend__mlds_to_c__output_c_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_8, top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__DumpSuffix_16, &top_level__mercury_compile_mlds_back_end___Succeeded_17);
        }
#line 405 "mercury_compile_mlds_back_end.m"
        {
#line 405 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
        }
#line 401 "mercury_compile_mlds_back_end.m"
      }
#line 400 "mercury_compile_mlds_back_end.m"
    else
#line 400 "mercury_compile_mlds_back_end.m"
      {
#line 400 "mercury_compile_mlds_back_end.m"
      }
#line 410 "mercury_compile_mlds_back_end.m"
    {
#line 410 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
#line 409 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 412 "mercury_compile_mlds_back_end.m"
      {
#line 412 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_18;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__BaseFileName_19;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__DumpFile_20;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_41_41;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_43_43;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_44_44;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Verbose_55;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Stats_56;
#line 412 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Res_57;

#line 412 "mercury_compile_mlds_back_end.m"
        {
#line 412 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out raw MLDS...\n");
        }
#line 413 "mercury_compile_mlds_back_end.m"
        {
#line 413 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__ModuleName_18 = ml_backend__mlds__mlds_get_module_name_1_f_0(top_level__mercury_compile_mlds_back_end__MLDS_8);
        }
#line 414 "mercury_compile_mlds_back_end.m"
        {
#line 414 "mercury_compile_mlds_back_end.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__ModuleName_18, (MR_String) ".mlds_dump", (MR_Integer) 0, &top_level__mercury_compile_mlds_back_end__BaseFileName_19);
        }
#line 416 "mercury_compile_mlds_back_end.m"
        {
#line 416 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
        }
#line 416 "mercury_compile_mlds_back_end.m"
        {
#line 416 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_43_43 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__V_44_44);
        }
#line 416 "mercury_compile_mlds_back_end.m"
        {
#line 416 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) ".", top_level__mercury_compile_mlds_back_end__V_43_43);
        }
#line 416 "mercury_compile_mlds_back_end.m"
        {
#line 416 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__DumpFile_20 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__BaseFileName_19, top_level__mercury_compile_mlds_back_end__V_41_41);
        }
#line 426 "mercury_compile_mlds_back_end.m"
        {
#line 426 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 46, &top_level__mercury_compile_mlds_back_end__Verbose_55);
        }
#line 427 "mercury_compile_mlds_back_end.m"
        {
#line 427 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Stats_56);
        }
#line 428 "mercury_compile_mlds_back_end.m"
        {
#line 428 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) "% Dumping out MLDS to \140");
        }
#line 429 "mercury_compile_mlds_back_end.m"
        {
#line 429 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, top_level__mercury_compile_mlds_back_end__DumpFile_20);
        }
#line 430 "mercury_compile_mlds_back_end.m"
        {
#line 430 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) "\'...");
        }
#line 431 "mercury_compile_mlds_back_end.m"
        {
#line 431 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55);
        }
#line 432 "mercury_compile_mlds_back_end.m"
        {
#line 432 "mercury_compile_mlds_back_end.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile_mlds_back_end__DumpFile_20, &top_level__mercury_compile_mlds_back_end__Res_57);
        }
#line 442 "mercury_compile_mlds_back_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_mlds_back_end__Res_57)) == (MR_mktag((MR_Integer) 1))))
#line 443 "mercury_compile_mlds_back_end.m"
          {
#line 443 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__IOError_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_mlds_back_end__Res_57, (MR_Integer) 0)));
#line 443 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__ErrorMessage_62;
#line 443 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_75_75;
#line 443 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_76_76;
#line 443 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_78_78;

#line 444 "mercury_compile_mlds_back_end.m"
            {
#line 444 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) "\n");
            }
#line 446 "mercury_compile_mlds_back_end.m"
            {
#line 446 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_78_78 = mercury__io__error_message_1_f_0(top_level__mercury_compile_mlds_back_end__IOError_61);
            }
#line 445 "mercury_compile_mlds_back_end.m"
            {
#line 445 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", top_level__mercury_compile_mlds_back_end__V_78_78);
            }
#line 445 "mercury_compile_mlds_back_end.m"
            {
#line 445 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_75_75 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__DumpFile_20, top_level__mercury_compile_mlds_back_end__V_76_76);
            }
#line 445 "mercury_compile_mlds_back_end.m"
            {
#line 445 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__ErrorMessage_62 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", top_level__mercury_compile_mlds_back_end__V_75_75);
            }
#line 447 "mercury_compile_mlds_back_end.m"
            {
#line 447 "mercury_compile_mlds_back_end.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_mlds_back_end__ErrorMessage_62);
            }
#line 443 "mercury_compile_mlds_back_end.m"
          }
#line 442 "mercury_compile_mlds_back_end.m"
        else
#line 434 "mercury_compile_mlds_back_end.m"
          {
#line 434 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__FileStream_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Res_57, (MR_Integer) 0)));
#line 434 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__OutputStream_59;
#line 434 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__V_82_82;
#line 438 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__V_60_60;

#line 435 "mercury_compile_mlds_back_end.m"
            {
#line 435 "mercury_compile_mlds_back_end.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__FileStream_58, &top_level__mercury_compile_mlds_back_end__OutputStream_59);
            }
#line 436 "mercury_compile_mlds_back_end.m"
            {
#line 436 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_82_82 = mercury__pprint__to_doc_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0, ((MR_Box) (top_level__mercury_compile_mlds_back_end__MLDS_8)));
            }
#line 436 "mercury_compile_mlds_back_end.m"
            {
#line 436 "mercury_compile_mlds_back_end.m"
              mercury__pprint__write_4_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_1[0], (MR_Integer) 80, ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_82_82)));
            }
#line 437 "mercury_compile_mlds_back_end.m"
            {
#line 437 "mercury_compile_mlds_back_end.m"
              mercury__io__nl_2_p_0();
            }
#line 438 "mercury_compile_mlds_back_end.m"
            {
#line 438 "mercury_compile_mlds_back_end.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__OutputStream_59, &top_level__mercury_compile_mlds_back_end__V_60_60);
            }
#line 439 "mercury_compile_mlds_back_end.m"
            {
#line 439 "mercury_compile_mlds_back_end.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile_mlds_back_end__FileStream_58);
            }
#line 440 "mercury_compile_mlds_back_end.m"
            {
#line 440 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) " done.\n");
            }
#line 441 "mercury_compile_mlds_back_end.m"
            {
#line 441 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_56);
            }
#line 434 "mercury_compile_mlds_back_end.m"
          }
#line 418 "mercury_compile_mlds_back_end.m"
        {
#line 418 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
        }
#line 412 "mercury_compile_mlds_back_end.m"
      }
#line 409 "mercury_compile_mlds_back_end.m"
    else
#line 409 "mercury_compile_mlds_back_end.m"
      {
#line 409 "mercury_compile_mlds_back_end.m"
      }
#line 394 "mercury_compile_mlds_back_end.m"
  }
#line 391 "mercury_compile_mlds_back_end.m"
}

#line 337 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(
#line 337 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_4,
#line 337 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21,
#line 337 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22)
#line 337 "mercury_compile_mlds_back_end.m"
{
#line 339 "mercury_compile_mlds_back_end.m"
  {
#line 339 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_8;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__RttiDatas_11;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_12;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ForeignCode_13;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Imports_14;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData0_15;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Defns_16;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__InitPreds_17;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__FinalPreds_18;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ExportedEnums_19;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData_20;
#line 339 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_24_24;

#line 340 "mercury_compile_mlds_back_end.m"
    {
#line 340 "mercury_compile_mlds_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6);
    }
#line 341 "mercury_compile_mlds_back_end.m"
    {
#line 341 "mercury_compile_mlds_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7);
    }
#line 343 "mercury_compile_mlds_back_end.m"
    {
#line 343 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__Globals_8);
    }
#line 344 "mercury_compile_mlds_back_end.m"
    {
#line 344 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 276, &top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9);
    }
#line 345 "mercury_compile_mlds_back_end.m"
    {
#line 345 "mercury_compile_mlds_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9, &top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10);
    }
#line 808 "top_level.mercury_compile_mlds_back_end.c"
    top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 347 "mercury_compile_mlds_back_end.m"
    {
#line 347 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_24_24 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26, top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7, top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10);
    }
#line 347 "mercury_compile_mlds_back_end.m"
    {
#line 347 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__RttiDatas_11 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26, top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6, top_level__mercury_compile_mlds_back_end__V_24_24);
    }
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 0)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ForeignCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 1)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__Imports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 2)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__GlobalData0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 3)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 4)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 5)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 6)));
#line 348 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ExportedEnums_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 7)));
#line 350 "mercury_compile_mlds_back_end.m"
    {
#line 350 "mercury_compile_mlds_back_end.m"
      ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, top_level__mercury_compile_mlds_back_end__RttiDatas_11, top_level__mercury_compile_mlds_back_end__GlobalData0_15, &top_level__mercury_compile_mlds_back_end__GlobalData_20);
    }
#line 351 "mercury_compile_mlds_back_end.m"
    {
#line 351 "mercury_compile_mlds_back_end.m"
      MR_Word base;
#line 351 "mercury_compile_mlds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 351 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22 = base;
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ModuleName_12));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ForeignCode_13));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Imports_14));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GlobalData_20));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Defns_16));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__InitPreds_17));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__FinalPreds_18));
#line 351 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ExportedEnums_19));
#line 351 "mercury_compile_mlds_back_end.m"
    }
#line 339 "mercury_compile_mlds_back_end.m"
  }
#line 337 "mercury_compile_mlds_back_end.m"
}

#line 325 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 325 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 325 "mercury_compile_mlds_back_end.m"
{
#line 325 "mercury_compile_mlds_back_end.m"
  {
#line 325 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 325 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

#line 325 "mercury_compile_mlds_back_end.m"
    {
#line 325 "mercury_compile_mlds_back_end.m"
      ml_backend__add_heap_ops__add_heap_ops_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
#line 325 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
#line 325 "mercury_compile_mlds_back_end.m"
  }
#line 325 "mercury_compile_mlds_back_end.m"
}

#line 298 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
#line 298 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17)
#line 298 "mercury_compile_mlds_back_end.m"
{
#line 301 "mercury_compile_mlds_back_end.m"
  {
#line 301 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 301 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 301 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GC_12;
#line 301 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SemidetReclaim_13;
#line 301 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NondetReclaim_14;
#line 309 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_22_22;

#line 302 "mercury_compile_mlds_back_end.m"
    {
#line 302 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 303 "mercury_compile_mlds_back_end.m"
    {
#line 303 "mercury_compile_mlds_back_end.m"
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__GC_12);
    }
#line 304 "mercury_compile_mlds_back_end.m"
    {
#line 304 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 301, &top_level__mercury_compile_mlds_back_end__SemidetReclaim_13);
    }
#line 306 "mercury_compile_mlds_back_end.m"
    {
#line 306 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 302, &top_level__mercury_compile_mlds_back_end__NondetReclaim_14);
    }
#line 309 "mercury_compile_mlds_back_end.m"
    {
#line 309 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_22_22 = libs__globals__gc_is_conservative_1_f_0(top_level__mercury_compile_mlds_back_end__GC_12);
    }
#line 309 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__V_22_22 == (MR_Integer) 1);
#line 308 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 312 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 308 "mercury_compile_mlds_back_end.m"
    else
#line 313 "mercury_compile_mlds_back_end.m"
      {
#line 314 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 0);
#line 314 "mercury_compile_mlds_back_end.m"
        if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 315 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 0);
#line 313 "mercury_compile_mlds_back_end.m"
        if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 317 "mercury_compile_mlds_back_end.m"
          *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 313 "mercury_compile_mlds_back_end.m"
        else
#line 318 "mercury_compile_mlds_back_end.m"
          {
#line 319 "mercury_compile_mlds_back_end.m"
            top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 1);
#line 319 "mercury_compile_mlds_back_end.m"
            if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 320 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 1);
#line 318 "mercury_compile_mlds_back_end.m"
            if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 323 "mercury_compile_mlds_back_end.m"
              {
#line 322 "mercury_compile_mlds_back_end.m"
                {
#line 322 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding heap reclamation operations...\n");
                }
#line 324 "mercury_compile_mlds_back_end.m"
                {
#line 324 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
                }
#line 325 "mercury_compile_mlds_back_end.m"
                {
#line 325 "mercury_compile_mlds_back_end.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_3[2], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);
                }
#line 326 "mercury_compile_mlds_back_end.m"
                {
#line 326 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
                }
#line 327 "mercury_compile_mlds_back_end.m"
                {
#line 327 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
                }
#line 323 "mercury_compile_mlds_back_end.m"
              }
#line 318 "mercury_compile_mlds_back_end.m"
            else
#line 332 "mercury_compile_mlds_back_end.m"
              {
#line 333 "mercury_compile_mlds_back_end.m"
                {
#line 333 "mercury_compile_mlds_back_end.m"
                  parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[2]));
                }
#line 334 "mercury_compile_mlds_back_end.m"
                {
#line 334 "mercury_compile_mlds_back_end.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 332 "mercury_compile_mlds_back_end.m"
                *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 332 "mercury_compile_mlds_back_end.m"
              }
#line 318 "mercury_compile_mlds_back_end.m"
          }
#line 313 "mercury_compile_mlds_back_end.m"
      }
#line 301 "mercury_compile_mlds_back_end.m"
  }
#line 298 "mercury_compile_mlds_back_end.m"
}

#line 291 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 291 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 291 "mercury_compile_mlds_back_end.m"
{
#line 291 "mercury_compile_mlds_back_end.m"
  {
#line 291 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 291 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5;

#line 291 "mercury_compile_mlds_back_end.m"
    {
#line 291 "mercury_compile_mlds_back_end.m"
      ml_backend__add_trail_ops__add_trail_ops_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5);
    }
#line 291 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5));
#line 291 "mercury_compile_mlds_back_end.m"
  }
#line 291 "mercury_compile_mlds_back_end.m"
}

#line 249 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
#line 249 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19)
#line 249 "mercury_compile_mlds_back_end.m"
{
#line 252 "mercury_compile_mlds_back_end.m"
  {
#line 252 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 252 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 252 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__UseTrail_12;

#line 253 "mercury_compile_mlds_back_end.m"
    {
#line 253 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 254 "mercury_compile_mlds_back_end.m"
    {
#line 254 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 216, &top_level__mercury_compile_mlds_back_end__UseTrail_12);
    }
#line 1109 "top_level.mercury_compile_mlds_back_end.c"
#line 1110 "top_level.mercury_compile_mlds_back_end.c"
    switch (top_level__mercury_compile_mlds_back_end__UseTrail_12) {
#line 1112 "top_level.mercury_compile_mlds_back_end.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1114 "top_level.mercury_compile_mlds_back_end.c"
      case (MR_Integer) 0:
#line 295 "mercury_compile_mlds_back_end.m"
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
#line 1118 "top_level.mercury_compile_mlds_back_end.c"
        break;
#line 1120 "top_level.mercury_compile_mlds_back_end.c"
      case (MR_Integer) 1:
#line 1122 "top_level.mercury_compile_mlds_back_end.c"
        {
#line 1124 "top_level.mercury_compile_mlds_back_end.c"
          MR_Word top_level__mercury_compile_mlds_back_end__DisableTrailOps_14;

#line 260 "mercury_compile_mlds_back_end.m"
          {
#line 260 "mercury_compile_mlds_back_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 282, &top_level__mercury_compile_mlds_back_end__DisableTrailOps_14);
          }
#line 1132 "top_level.mercury_compile_mlds_back_end.c"
#line 1133 "top_level.mercury_compile_mlds_back_end.c"
          switch (top_level__mercury_compile_mlds_back_end__DisableTrailOps_14) {
#line 1135 "top_level.mercury_compile_mlds_back_end.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1137 "top_level.mercury_compile_mlds_back_end.c"
            case (MR_Integer) 0:
#line 1139 "top_level.mercury_compile_mlds_back_end.c"
              {
#line 1141 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__OptTrailUse_15;
#line 1143 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__Target_16;
#line 1145 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__GenerateInline_17;
#line 1147 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__V_29_29;
#line 1149 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__V_31_31;

#line 272 "mercury_compile_mlds_back_end.m"
                {
#line 272 "mercury_compile_mlds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 389, &top_level__mercury_compile_mlds_back_end__OptTrailUse_15);
                }
#line 273 "mercury_compile_mlds_back_end.m"
                {
#line 273 "mercury_compile_mlds_back_end.m"
                  libs__globals__get_target_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__Target_16);
                }
#line 278 "mercury_compile_mlds_back_end.m"
#line 278 "mercury_compile_mlds_back_end.m"
                switch (top_level__mercury_compile_mlds_back_end__Target_16) {
#line 278 "mercury_compile_mlds_back_end.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 278 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 0:
#line 275 "mercury_compile_mlds_back_end.m"
                    {
#line 276 "mercury_compile_mlds_back_end.m"
                      {
#line 276 "mercury_compile_mlds_back_end.m"
                        libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 453, &top_level__mercury_compile_mlds_back_end__GenerateInline_17);
                      }
#line 275 "mercury_compile_mlds_back_end.m"
                    }
#line 278 "mercury_compile_mlds_back_end.m"
                    break;
#line 278 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 1:
#line 278 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 3:
#line 278 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 2:
#line 286 "mercury_compile_mlds_back_end.m"
                    top_level__mercury_compile_mlds_back_end__GenerateInline_17 = (MR_Integer) 0;
#line 278 "mercury_compile_mlds_back_end.m"
                    break;
#line 278 "mercury_compile_mlds_back_end.m"
                }
#line 288 "mercury_compile_mlds_back_end.m"
                {
#line 288 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding trailing operations...\n");
                }
#line 289 "mercury_compile_mlds_back_end.m"
                {
#line 289 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
                }
#line 291 "mercury_compile_mlds_back_end.m"
                {
#line 291 "mercury_compile_mlds_back_end.m"
                  top_level__mercury_compile_mlds_back_end__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[0]));
#line 291 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1));
#line 291 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 291 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__OptTrailUse_15));
#line 291 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GenerateInline_17));
#line 291 "mercury_compile_mlds_back_end.m"
                }
#line 291 "mercury_compile_mlds_back_end.m"
                {
#line 291 "mercury_compile_mlds_back_end.m"
                  top_level__mercury_compile_mlds_back_end__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 291 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_29_29, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_31_31));
#line 291 "mercury_compile_mlds_back_end.m"
                }
#line 290 "mercury_compile_mlds_back_end.m"
                {
#line 290 "mercury_compile_mlds_back_end.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_mlds_back_end__V_29_29, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);
                }
#line 292 "mercury_compile_mlds_back_end.m"
                {
#line 292 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
                }
#line 293 "mercury_compile_mlds_back_end.m"
                {
#line 293 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
                }
#line 1241 "top_level.mercury_compile_mlds_back_end.c"
              }
#line 1243 "top_level.mercury_compile_mlds_back_end.c"
              break;
#line 1245 "top_level.mercury_compile_mlds_back_end.c"
            case (MR_Integer) 1:
#line 295 "mercury_compile_mlds_back_end.m"
              *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
#line 1249 "top_level.mercury_compile_mlds_back_end.c"
              break;
#line 1251 "top_level.mercury_compile_mlds_back_end.c"
          }
#line 1253 "top_level.mercury_compile_mlds_back_end.c"
        }
#line 1255 "top_level.mercury_compile_mlds_back_end.c"
        break;
#line 1257 "top_level.mercury_compile_mlds_back_end.c"
    }
#line 252 "mercury_compile_mlds_back_end.m"
  }
#line 249 "mercury_compile_mlds_back_end.m"
}

#line 48 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(
#line 48 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_6,
#line 48 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
#line 48 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
#line 48 "mercury_compile_mlds_back_end.m"
{
#line 378 "mercury_compile_mlds_back_end.m"
  {
#line 378 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 378 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
#line 378 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_11;
#line 378 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_12;

#line 379 "mercury_compile_mlds_back_end.m"
    {
#line 379 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
#line 380 "mercury_compile_mlds_back_end.m"
    {
#line 380 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 46, &top_level__mercury_compile_mlds_back_end__Verbose_11);
    }
#line 381 "mercury_compile_mlds_back_end.m"
    {
#line 381 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 383 "mercury_compile_mlds_back_end.m"
    {
#line 383 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Converting MLDS to C#...\n");
    }
#line 384 "mercury_compile_mlds_back_end.m"
    {
#line 384 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
#line 385 "mercury_compile_mlds_back_end.m"
    {
#line 385 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Finished converting MLDS to C#.\n");
    }
#line 386 "mercury_compile_mlds_back_end.m"
    {
#line 386 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 378 "mercury_compile_mlds_back_end.m"
  }
#line 48 "mercury_compile_mlds_back_end.m"
}

#line 45 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(
#line 45 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_6,
#line 45 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
#line 45 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
#line 45 "mercury_compile_mlds_back_end.m"
{
#line 368 "mercury_compile_mlds_back_end.m"
  {
#line 368 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 368 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
#line 368 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_11;
#line 368 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_12;

#line 369 "mercury_compile_mlds_back_end.m"
    {
#line 369 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
#line 370 "mercury_compile_mlds_back_end.m"
    {
#line 370 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 46, &top_level__mercury_compile_mlds_back_end__Verbose_11);
    }
#line 371 "mercury_compile_mlds_back_end.m"
    {
#line 371 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 373 "mercury_compile_mlds_back_end.m"
    {
#line 373 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Converting MLDS to Java...\n");
    }
#line 374 "mercury_compile_mlds_back_end.m"
    {
#line 374 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_java__output_java_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
#line 375 "mercury_compile_mlds_back_end.m"
    {
#line 375 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Finished converting MLDS to Java.\n");
    }
#line 376 "mercury_compile_mlds_back_end.m"
    {
#line 376 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 368 "mercury_compile_mlds_back_end.m"
  }
#line 45 "mercury_compile_mlds_back_end.m"
}

#line 42 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(
#line 42 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_6,
#line 42 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
#line 42 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
#line 42 "mercury_compile_mlds_back_end.m"
{
#line 359 "mercury_compile_mlds_back_end.m"
  {
#line 359 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_10;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_11;

#line 360 "mercury_compile_mlds_back_end.m"
    {
#line 360 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 46, &top_level__mercury_compile_mlds_back_end__Verbose_10);
    }
#line 361 "mercury_compile_mlds_back_end.m"
    {
#line 361 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Stats_11);
    }
#line 363 "mercury_compile_mlds_back_end.m"
    {
#line 363 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Converting MLDS to C...\n");
    }
#line 364 "mercury_compile_mlds_back_end.m"
    {
#line 364 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_c__output_c_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Globals_6, (MR_String) "", top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
#line 365 "mercury_compile_mlds_back_end.m"
    {
#line 365 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Finished converting MLDS to C.\n");
    }
#line 366 "mercury_compile_mlds_back_end.m"
    {
#line 366 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_11);
    }
#line 359 "mercury_compile_mlds_back_end.m"
  }
#line 42 "mercury_compile_mlds_back_end.m"
}

#line 242 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 242 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 242 "mercury_compile_mlds_back_end.m"
{
#line 242 "mercury_compile_mlds_back_end.m"
  {
#line 242 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 242 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

#line 242 "mercury_compile_mlds_back_end.m"
    {
#line 242 "mercury_compile_mlds_back_end.m"
      hlds__mark_static_terms__mark_static_terms_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
#line 242 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
#line 242 "mercury_compile_mlds_back_end.m"
  }
#line 242 "mercury_compile_mlds_back_end.m"
}

#line 39 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(
#line 39 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 39 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 39 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 39 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14)
#line 39 "mercury_compile_mlds_back_end.m"
{
#line 235 "mercury_compile_mlds_back_end.m"
  {
#line 235 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 235 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 235 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SGCells_12;

#line 236 "mercury_compile_mlds_back_end.m"
    {
#line 236 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 237 "mercury_compile_mlds_back_end.m"
    {
#line 237 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 443, &top_level__mercury_compile_mlds_back_end__SGCells_12);
    }
#line 245 "mercury_compile_mlds_back_end.m"
#line 245 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__SGCells_12) {
#line 245 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 245 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 246 "mercury_compile_mlds_back_end.m"
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 245 "mercury_compile_mlds_back_end.m"
        break;
#line 245 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 239 "mercury_compile_mlds_back_end.m"
        {
#line 240 "mercury_compile_mlds_back_end.m"
          {
#line 240 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Marking static ground terms...\n");
          }
#line 241 "mercury_compile_mlds_back_end.m"
          {
#line 241 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
          }
#line 242 "mercury_compile_mlds_back_end.m"
          {
#line 242 "mercury_compile_mlds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_3[1], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 243 "mercury_compile_mlds_back_end.m"
          {
#line 243 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 244 "mercury_compile_mlds_back_end.m"
          {
#line 244 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
          }
#line 239 "mercury_compile_mlds_back_end.m"
        }
#line 245 "mercury_compile_mlds_back_end.m"
        break;
#line 245 "mercury_compile_mlds_back_end.m"
    }
#line 235 "mercury_compile_mlds_back_end.m"
  }
#line 39 "mercury_compile_mlds_back_end.m"
}

#line 106 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1(
#line 106 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg)
#line 106 "mercury_compile_mlds_back_end.m"
{
#line 106 "mercury_compile_mlds_back_end.m"
  {
#line 106 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 106 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;

#line 106 "mercury_compile_mlds_back_end.m"
    {
#line 106 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__106__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))));
    }
#line 106 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__succeeded;
#line 106 "mercury_compile_mlds_back_end.m"
  }
#line 106 "mercury_compile_mlds_back_end.m"
}

#line 36 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(
#line 36 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_21,
#line 36 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22,
#line 36 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23,
#line 36 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_24,
#line 36 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_25)
#line 36 "mercury_compile_mlds_back_end.m"
{
#line 99 "mercury_compile_mlds_back_end.m"
  {
#line 99 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_12;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_13;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_14;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SimplifySpecs_15;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Optimize_17;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GC_19;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NestedFuncs_20;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_35_35;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_39_39;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_43_43;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_49_49;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_55_55;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_61_61;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_67_67;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119;
#line 99 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130;

#line 100 "mercury_compile_mlds_back_end.m"
    {
#line 100 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_mlds_back_end__Globals_12);
    }
#line 101 "mercury_compile_mlds_back_end.m"
    {
#line 101 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 46, &top_level__mercury_compile_mlds_back_end__Verbose_13);
    }
#line 102 "mercury_compile_mlds_back_end.m"
    {
#line 102 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 104 "mercury_compile_mlds_back_end.m"
    {
#line 104 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 4, top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_mlds_back_end__SimplifySpecs_15);
    }
#line 106 "mercury_compile_mlds_back_end.m"
    {
#line 106 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_39_39 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__SimplifySpecs_15);
    }
#line 106 "mercury_compile_mlds_back_end.m"
    {
#line 106 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 106 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0]));
#line 106 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1));
#line 106 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 106 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_39_39));
#line 106 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 106 "mercury_compile_mlds_back_end.m"
    }
#line 106 "mercury_compile_mlds_back_end.m"
    {
#line 106 "mercury_compile_mlds_back_end.m"
      mercury__require__expect_4_p_0(top_level__mercury_compile_mlds_back_end__V_35_35, (MR_String) "top_level.mercury_compile_mlds_back_end", (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/7", (MR_String) "simplify has errors");
    }
#line 108 "mercury_compile_mlds_back_end.m"
    {
#line 108 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32, (MR_Integer) 405, (MR_String) "ml_backend_simplify", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_24, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_43_43);
    }
#line 114 "mercury_compile_mlds_back_end.m"
    {
#line 114 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45);
    }
#line 115 "mercury_compile_mlds_back_end.m"
    {
#line 115 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 410, (MR_String) "add_trail_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_43_43, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_49_49);
    }
#line 117 "mercury_compile_mlds_back_end.m"
    {
#line 117 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51);
    }
#line 118 "mercury_compile_mlds_back_end.m"
    {
#line 118 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 415, (MR_String) "add_heap_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_55_55);
    }
#line 120 "mercury_compile_mlds_back_end.m"
    {
#line 120 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57);
    }
#line 121 "mercury_compile_mlds_back_end.m"
    {
#line 121 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 420, (MR_String) "mark_static", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 127 "mercury_compile_mlds_back_end.m"
    {
#line 127 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63);
    }
#line 128 "mercury_compile_mlds_back_end.m"
    {
#line 128 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 425, (MR_String) "args_to_regs", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_67_67);
    }
#line 130 "mercury_compile_mlds_back_end.m"
    {
#line 130 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Converting HLDS to MLDS...\n");
    }
#line 131 "mercury_compile_mlds_back_end.m"
    {
#line 131 "mercury_compile_mlds_back_end.m"
      ml_backend__ml_proc_gen__ml_code_gen_3_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72);
    }
#line 132 "mercury_compile_mlds_back_end.m"
    {
#line 132 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
    }
#line 133 "mercury_compile_mlds_back_end.m"
    {
#line 133 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 134 "mercury_compile_mlds_back_end.m"
    {
#line 134 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22, (MR_Integer) 499, (MR_String) "final", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_67_67, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_25);
    }
#line 135 "mercury_compile_mlds_back_end.m"
    {
#line 135 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72, (MR_Integer) 0, (MR_String) "initial");
    }
#line 137 "mercury_compile_mlds_back_end.m"
    {
#line 137 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Generating RTTI data...\n");
    }
#line 138 "mercury_compile_mlds_back_end.m"
    {
#line 138 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85);
    }
#line 139 "mercury_compile_mlds_back_end.m"
    {
#line 139 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
    }
#line 140 "mercury_compile_mlds_back_end.m"
    {
#line 140 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 141 "mercury_compile_mlds_back_end.m"
    {
#line 141 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85, (MR_Integer) 10, (MR_String) "rtti");
    }
#line 146 "mercury_compile_mlds_back_end.m"
    {
#line 146 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 450, &top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16);
    }
#line 152 "mercury_compile_mlds_back_end.m"
#line 152 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16) {
#line 152 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 152 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 153 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85;
#line 152 "mercury_compile_mlds_back_end.m"
        break;
#line 152 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 148 "mercury_compile_mlds_back_end.m"
        {
#line 149 "mercury_compile_mlds_back_end.m"
          {
#line 149 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Detecting tail calls...\n");
          }
#line 150 "mercury_compile_mlds_back_end.m"
          {
#line 150 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95);
          }
#line 151 "mercury_compile_mlds_back_end.m"
          {
#line 151 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 148 "mercury_compile_mlds_back_end.m"
        }
#line 152 "mercury_compile_mlds_back_end.m"
        break;
#line 152 "mercury_compile_mlds_back_end.m"
    }
#line 155 "mercury_compile_mlds_back_end.m"
    {
#line 155 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 156 "mercury_compile_mlds_back_end.m"
    {
#line 156 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95, (MR_Integer) 20, (MR_String) "tailcalls");
    }
#line 166 "mercury_compile_mlds_back_end.m"
    {
#line 166 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 456, &top_level__mercury_compile_mlds_back_end__Optimize_17);
    }
#line 174 "mercury_compile_mlds_back_end.m"
#line 174 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__Optimize_17) {
#line 174 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 174 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 175 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95;
#line 174 "mercury_compile_mlds_back_end.m"
        break;
#line 174 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 168 "mercury_compile_mlds_back_end.m"
        {
#line 168 "mercury_compile_mlds_back_end.m"
          MR_Word top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_18;

#line 169 "mercury_compile_mlds_back_end.m"
          {
#line 169 "mercury_compile_mlds_back_end.m"
            libs__globals__set_option_4_p_0((MR_Integer) 451, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_3[0]), top_level__mercury_compile_mlds_back_end__Globals_12, &top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_18);
          }
#line 171 "mercury_compile_mlds_back_end.m"
          {
#line 171 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Optimizing MLDS...\n");
          }
#line 172 "mercury_compile_mlds_back_end.m"
          {
#line 172 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_18, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109);
          }
#line 173 "mercury_compile_mlds_back_end.m"
          {
#line 173 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 168 "mercury_compile_mlds_back_end.m"
        }
#line 174 "mercury_compile_mlds_back_end.m"
        break;
#line 174 "mercury_compile_mlds_back_end.m"
    }
#line 177 "mercury_compile_mlds_back_end.m"
    {
#line 177 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 178 "mercury_compile_mlds_back_end.m"
    {
#line 178 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109, (MR_Integer) 25, (MR_String) "optimize1");
    }
#line 187 "mercury_compile_mlds_back_end.m"
    {
#line 187 "mercury_compile_mlds_back_end.m"
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, &top_level__mercury_compile_mlds_back_end__GC_19);
    }
#line 194 "mercury_compile_mlds_back_end.m"
#line 194 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__GC_19) {
#line 194 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 194 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 5:
#line 189 "mercury_compile_mlds_back_end.m"
        {
#line 190 "mercury_compile_mlds_back_end.m"
          {
#line 190 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Threading GC stack frames...\n");
          }
#line 192 "mercury_compile_mlds_back_end.m"
          {
#line 192 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_elim_nested__ml_elim_nested_4_p_1((MR_Integer) 1, top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119);
          }
#line 193 "mercury_compile_mlds_back_end.m"
          {
#line 193 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 189 "mercury_compile_mlds_back_end.m"
        }
#line 194 "mercury_compile_mlds_back_end.m"
        break;
#line 194 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 195 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 194 "mercury_compile_mlds_back_end.m"
        break;
#line 194 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 2:
#line 197 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 194 "mercury_compile_mlds_back_end.m"
        break;
#line 194 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 3:
#line 198 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 194 "mercury_compile_mlds_back_end.m"
        break;
#line 194 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 4:
#line 199 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 194 "mercury_compile_mlds_back_end.m"
        break;
#line 194 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 196 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 194 "mercury_compile_mlds_back_end.m"
        break;
#line 194 "mercury_compile_mlds_back_end.m"
    }
#line 202 "mercury_compile_mlds_back_end.m"
    {
#line 202 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 203 "mercury_compile_mlds_back_end.m"
    {
#line 203 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119, (MR_Integer) 30, (MR_String) "gc_frames");
    }
#line 205 "mercury_compile_mlds_back_end.m"
    {
#line 205 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 254, &top_level__mercury_compile_mlds_back_end__NestedFuncs_20);
    }
#line 211 "mercury_compile_mlds_back_end.m"
#line 211 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__NestedFuncs_20) {
#line 211 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 211 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 207 "mercury_compile_mlds_back_end.m"
        {
#line 208 "mercury_compile_mlds_back_end.m"
          {
#line 208 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Flattening nested functions...\n");
          }
#line 209 "mercury_compile_mlds_back_end.m"
          {
#line 209 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_elim_nested__ml_elim_nested_4_p_0((MR_Integer) 0, top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130);
          }
#line 210 "mercury_compile_mlds_back_end.m"
          {
#line 210 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 207 "mercury_compile_mlds_back_end.m"
        }
#line 211 "mercury_compile_mlds_back_end.m"
        break;
#line 211 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 212 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119;
#line 211 "mercury_compile_mlds_back_end.m"
        break;
#line 211 "mercury_compile_mlds_back_end.m"
    }
#line 214 "mercury_compile_mlds_back_end.m"
    {
#line 214 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 215 "mercury_compile_mlds_back_end.m"
    {
#line 215 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130, (MR_Integer) 35, (MR_String) "nested_funcs");
    }
#line 225 "mercury_compile_mlds_back_end.m"
#line 225 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__Optimize_17) {
#line 225 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 225 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 226 "mercury_compile_mlds_back_end.m"
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130;
#line 225 "mercury_compile_mlds_back_end.m"
        break;
#line 225 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 221 "mercury_compile_mlds_back_end.m"
        {
#line 222 "mercury_compile_mlds_back_end.m"
          {
#line 222 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Optimizing MLDS again...\n");
          }
#line 223 "mercury_compile_mlds_back_end.m"
          {
#line 223 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23);
          }
#line 224 "mercury_compile_mlds_back_end.m"
          {
#line 224 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 221 "mercury_compile_mlds_back_end.m"
        }
#line 225 "mercury_compile_mlds_back_end.m"
        break;
#line 225 "mercury_compile_mlds_back_end.m"
    }
#line 228 "mercury_compile_mlds_back_end.m"
    {
#line 228 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 229 "mercury_compile_mlds_back_end.m"
    {
#line 229 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23, (MR_Integer) 40, (MR_String) "optimize2");
    }
#line 231 "mercury_compile_mlds_back_end.m"
    {
#line 231 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23, (MR_Integer) 99, (MR_String) "final");
    }
#line 99 "mercury_compile_mlds_back_end.m"
  }
#line 36 "mercury_compile_mlds_back_end.m"
}

#line 34 "mercury_compile_mlds_back_end.m"
MR_Word MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(
#line 34 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_3)
#line 34 "mercury_compile_mlds_back_end.m"
{
#line 87 "mercury_compile_mlds_back_end.m"
  {
#line 87 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Defns_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 4)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 0)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 1)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 2)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 3)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 5)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 6)));
#line 89 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 7)));

#line 90 "mercury_compile_mlds_back_end.m"
    {
#line 90 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = ml_backend__ml_util__defns_contain_main_1_p_0(top_level__mercury_compile_mlds_back_end__Defns_4);
    }
#line 87 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 92 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 0;
#line 87 "mercury_compile_mlds_back_end.m"
    else
#line 94 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 1;
#line 87 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
#line 87 "mercury_compile_mlds_back_end.m"
  }
#line 34 "mercury_compile_mlds_back_end.m"
}

void mercury__top_level__mercury_compile_mlds_back_end__init(void)
{
}

void mercury__top_level__mercury_compile_mlds_back_end__init_type_tables(void)
{
}

void mercury__top_level__mercury_compile_mlds_back_end__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile_mlds_back_end. */
