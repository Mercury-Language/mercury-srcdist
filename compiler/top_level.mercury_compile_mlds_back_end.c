/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version DEV
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
#include "bytecode_backend.mih"
#include "check_hlds.mih"
#include "erl_backend.mih"
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




#line 104 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__104__1_2_p_0(
#line 104 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_39,
#line 104 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_40);

#line 389 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
#line 389 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
#line 389 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
#line 389 "mercury_compile_mlds_back_end.m"
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
#line 389 "mercury_compile_mlds_back_end.m"
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10);

#line 335 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(
#line 335 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_4,
#line 335 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21,
#line 335 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22);

#line 323 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 296 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);

#line 289 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 247 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);

#line 240 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 104 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1(
#line 104 "mercury_compile_mlds_back_end.m"
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



#line 104 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__104__1_2_p_0(
#line 104 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_39,
#line 104 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_40)
#line 104 "mercury_compile_mlds_back_end.m"
{
#line 104 "mercury_compile_mlds_back_end.m"
  {
#line 104 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__HeadVar__1_39 == top_level__mercury_compile_mlds_back_end__HeadVar__2_40);

#line 104 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__succeeded;
#line 104 "mercury_compile_mlds_back_end.m"
  }
#line 104 "mercury_compile_mlds_back_end.m"
}

#line 389 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
#line 389 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
#line 389 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
#line 389 "mercury_compile_mlds_back_end.m"
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
#line 389 "mercury_compile_mlds_back_end.m"
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10)
#line 389 "mercury_compile_mlds_back_end.m"
{
#line 392 "mercury_compile_mlds_back_end.m"
  {
#line 392 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 392 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_12;
#line 392 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__DumpStages_13;
#line 392 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14;
#line 392 "mercury_compile_mlds_back_end.m"
    MR_String top_level__mercury_compile_mlds_back_end__StageNumStr_15;

#line 393 "mercury_compile_mlds_back_end.m"
    {
#line 393 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 45, &top_level__mercury_compile_mlds_back_end__Verbose_12);
    }
#line 394 "mercury_compile_mlds_back_end.m"
    {
#line 394 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 155, &top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
#line 395 "mercury_compile_mlds_back_end.m"
    {
#line 395 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 156, &top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
#line 397 "mercury_compile_mlds_back_end.m"
    {
#line 397 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__StageNumStr_15 = hlds__passes_aux__stage_num_str_1_f_0(top_level__mercury_compile_mlds_back_end__StageNum_9);
    }
#line 398 "mercury_compile_mlds_back_end.m"
    {
#line 398 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
#line 404 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 399 "mercury_compile_mlds_back_end.m"
      {
#line 399 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__DumpSuffix_16;
#line 399 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_30_30;
#line 399 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_31_31;
#line 402 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end___Succeeded_17;

#line 399 "mercury_compile_mlds_back_end.m"
        {
#line 399 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out MLDS as C...\n");
        }
#line 400 "mercury_compile_mlds_back_end.m"
        {
#line 400 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12);
        }
#line 401 "mercury_compile_mlds_back_end.m"
        {
#line 401 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_31_31 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
        }
#line 401 "mercury_compile_mlds_back_end.m"
        {
#line 401 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_30_30 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__V_31_31);
        }
#line 401 "mercury_compile_mlds_back_end.m"
        {
#line 401 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__DumpSuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "_dump.", top_level__mercury_compile_mlds_back_end__V_30_30);
        }
#line 402 "mercury_compile_mlds_back_end.m"
        {
#line 402 "mercury_compile_mlds_back_end.m"
          ml_backend__mlds_to_c__output_c_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_8, top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__DumpSuffix_16, &top_level__mercury_compile_mlds_back_end___Succeeded_17);
        }
#line 403 "mercury_compile_mlds_back_end.m"
        {
#line 403 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
        }
#line 399 "mercury_compile_mlds_back_end.m"
      }
#line 404 "mercury_compile_mlds_back_end.m"
    else
#line 404 "mercury_compile_mlds_back_end.m"
      {
#line 404 "mercury_compile_mlds_back_end.m"
      }
#line 408 "mercury_compile_mlds_back_end.m"
    {
#line 408 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
#line 417 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 410 "mercury_compile_mlds_back_end.m"
      {
#line 410 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_18;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__BaseFileName_19;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__DumpFile_20;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_41_41;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_43_43;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_44_44;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Verbose_55;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Stats_56;
#line 410 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Res_57;

#line 410 "mercury_compile_mlds_back_end.m"
        {
#line 410 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out raw MLDS...\n");
        }
#line 411 "mercury_compile_mlds_back_end.m"
        {
#line 411 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__ModuleName_18 = ml_backend__mlds__mlds_get_module_name_1_f_0(top_level__mercury_compile_mlds_back_end__MLDS_8);
        }
#line 412 "mercury_compile_mlds_back_end.m"
        {
#line 412 "mercury_compile_mlds_back_end.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__ModuleName_18, (MR_String) ".mlds_dump", (MR_Integer) 0, &top_level__mercury_compile_mlds_back_end__BaseFileName_19);
        }
#line 414 "mercury_compile_mlds_back_end.m"
        {
#line 414 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_44_44 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
        }
#line 414 "mercury_compile_mlds_back_end.m"
        {
#line 414 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_43_43 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__V_44_44);
        }
#line 414 "mercury_compile_mlds_back_end.m"
        {
#line 414 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) ".", top_level__mercury_compile_mlds_back_end__V_43_43);
        }
#line 414 "mercury_compile_mlds_back_end.m"
        {
#line 414 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__DumpFile_20 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__BaseFileName_19, top_level__mercury_compile_mlds_back_end__V_41_41);
        }
#line 424 "mercury_compile_mlds_back_end.m"
        {
#line 424 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 45, &top_level__mercury_compile_mlds_back_end__Verbose_55);
        }
#line 425 "mercury_compile_mlds_back_end.m"
        {
#line 425 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 55, &top_level__mercury_compile_mlds_back_end__Stats_56);
        }
#line 426 "mercury_compile_mlds_back_end.m"
        {
#line 426 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) "% Dumping out MLDS to \140");
        }
#line 427 "mercury_compile_mlds_back_end.m"
        {
#line 427 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, top_level__mercury_compile_mlds_back_end__DumpFile_20);
        }
#line 428 "mercury_compile_mlds_back_end.m"
        {
#line 428 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) "\'...");
        }
#line 429 "mercury_compile_mlds_back_end.m"
        {
#line 429 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55);
        }
#line 430 "mercury_compile_mlds_back_end.m"
        {
#line 430 "mercury_compile_mlds_back_end.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile_mlds_back_end__DumpFile_20, &top_level__mercury_compile_mlds_back_end__Res_57);
        }
#line 440 "mercury_compile_mlds_back_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_mlds_back_end__Res_57)) == (MR_mktag((MR_Integer) 1))))
#line 441 "mercury_compile_mlds_back_end.m"
          {
#line 441 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__IOError_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_mlds_back_end__Res_57, (MR_Integer) 0)));
#line 441 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__ErrorMessage_62;
#line 441 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_75_75;
#line 441 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_76_76;
#line 441 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_78_78;

#line 442 "mercury_compile_mlds_back_end.m"
            {
#line 442 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) "\n");
            }
#line 444 "mercury_compile_mlds_back_end.m"
            {
#line 444 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_78_78 = mercury__io__error_message_1_f_0(top_level__mercury_compile_mlds_back_end__IOError_61);
            }
#line 443 "mercury_compile_mlds_back_end.m"
            {
#line 443 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_76_76 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", top_level__mercury_compile_mlds_back_end__V_78_78);
            }
#line 443 "mercury_compile_mlds_back_end.m"
            {
#line 443 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_75_75 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__DumpFile_20, top_level__mercury_compile_mlds_back_end__V_76_76);
            }
#line 443 "mercury_compile_mlds_back_end.m"
            {
#line 443 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__ErrorMessage_62 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", top_level__mercury_compile_mlds_back_end__V_75_75);
            }
#line 445 "mercury_compile_mlds_back_end.m"
            {
#line 445 "mercury_compile_mlds_back_end.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_mlds_back_end__ErrorMessage_62);
            }
#line 441 "mercury_compile_mlds_back_end.m"
          }
#line 440 "mercury_compile_mlds_back_end.m"
        else
#line 432 "mercury_compile_mlds_back_end.m"
          {
#line 432 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__FileStream_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Res_57, (MR_Integer) 0)));
#line 432 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__OutputStream_59;
#line 432 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__V_82_82;
#line 436 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__V_60_60;

#line 433 "mercury_compile_mlds_back_end.m"
            {
#line 433 "mercury_compile_mlds_back_end.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__FileStream_58, &top_level__mercury_compile_mlds_back_end__OutputStream_59);
            }
#line 434 "mercury_compile_mlds_back_end.m"
            {
#line 434 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_82_82 = mercury__pprint__to_doc_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0, ((MR_Box) (top_level__mercury_compile_mlds_back_end__MLDS_8)));
            }
#line 434 "mercury_compile_mlds_back_end.m"
            {
#line 434 "mercury_compile_mlds_back_end.m"
              mercury__pprint__write_4_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_1[0], (MR_Integer) 80, ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_82_82)));
            }
#line 435 "mercury_compile_mlds_back_end.m"
            {
#line 435 "mercury_compile_mlds_back_end.m"
              mercury__io__nl_2_p_0();
            }
#line 436 "mercury_compile_mlds_back_end.m"
            {
#line 436 "mercury_compile_mlds_back_end.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__OutputStream_59, &top_level__mercury_compile_mlds_back_end__V_60_60);
            }
#line 437 "mercury_compile_mlds_back_end.m"
            {
#line 437 "mercury_compile_mlds_back_end.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile_mlds_back_end__FileStream_58);
            }
#line 438 "mercury_compile_mlds_back_end.m"
            {
#line 438 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_55, (MR_String) " done.\n");
            }
#line 439 "mercury_compile_mlds_back_end.m"
            {
#line 439 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_56);
            }
#line 432 "mercury_compile_mlds_back_end.m"
          }
#line 416 "mercury_compile_mlds_back_end.m"
        {
#line 416 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
        }
#line 410 "mercury_compile_mlds_back_end.m"
      }
#line 417 "mercury_compile_mlds_back_end.m"
    else
#line 417 "mercury_compile_mlds_back_end.m"
      {
#line 417 "mercury_compile_mlds_back_end.m"
      }
#line 392 "mercury_compile_mlds_back_end.m"
  }
#line 389 "mercury_compile_mlds_back_end.m"
}

#line 335 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(
#line 335 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_4,
#line 335 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21,
#line 335 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22)
#line 335 "mercury_compile_mlds_back_end.m"
{
#line 337 "mercury_compile_mlds_back_end.m"
  {
#line 337 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_8;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__RttiDatas_11;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_12;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ForeignCode_13;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Imports_14;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData0_15;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Defns_16;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__InitPreds_17;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__FinalPreds_18;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ExportedEnums_19;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData_20;
#line 337 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_24_24;

#line 338 "mercury_compile_mlds_back_end.m"
    {
#line 338 "mercury_compile_mlds_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6);
    }
#line 339 "mercury_compile_mlds_back_end.m"
    {
#line 339 "mercury_compile_mlds_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7);
    }
#line 341 "mercury_compile_mlds_back_end.m"
    {
#line 341 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__Globals_8);
    }
#line 342 "mercury_compile_mlds_back_end.m"
    {
#line 342 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 275, &top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9);
    }
#line 343 "mercury_compile_mlds_back_end.m"
    {
#line 343 "mercury_compile_mlds_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9, &top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10);
    }
#line 809 "top_level.mercury_compile_mlds_back_end.c"
    top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 345 "mercury_compile_mlds_back_end.m"
    {
#line 345 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_24_24 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26, top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7, top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10);
    }
#line 345 "mercury_compile_mlds_back_end.m"
    {
#line 345 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__RttiDatas_11 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26, top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6, top_level__mercury_compile_mlds_back_end__V_24_24);
    }
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 0)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ForeignCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 1)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__Imports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 2)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__GlobalData0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 3)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 4)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 5)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 6)));
#line 346 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ExportedEnums_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 7)));
#line 348 "mercury_compile_mlds_back_end.m"
    {
#line 348 "mercury_compile_mlds_back_end.m"
      ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, top_level__mercury_compile_mlds_back_end__RttiDatas_11, top_level__mercury_compile_mlds_back_end__GlobalData0_15, &top_level__mercury_compile_mlds_back_end__GlobalData_20);
    }
#line 349 "mercury_compile_mlds_back_end.m"
    {
#line 349 "mercury_compile_mlds_back_end.m"
      MR_Word base;
#line 349 "mercury_compile_mlds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 349 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22 = base;
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ModuleName_12));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ForeignCode_13));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Imports_14));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GlobalData_20));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Defns_16));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__InitPreds_17));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__FinalPreds_18));
#line 349 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ExportedEnums_19));
#line 349 "mercury_compile_mlds_back_end.m"
    }
#line 337 "mercury_compile_mlds_back_end.m"
  }
#line 335 "mercury_compile_mlds_back_end.m"
}

#line 323 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 323 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 323 "mercury_compile_mlds_back_end.m"
{
#line 323 "mercury_compile_mlds_back_end.m"
  {
#line 323 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 323 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

#line 323 "mercury_compile_mlds_back_end.m"
    {
#line 323 "mercury_compile_mlds_back_end.m"
      ml_backend__add_heap_ops__add_heap_ops_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
#line 323 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
#line 323 "mercury_compile_mlds_back_end.m"
  }
#line 323 "mercury_compile_mlds_back_end.m"
}

#line 296 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
#line 296 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17)
#line 296 "mercury_compile_mlds_back_end.m"
{
#line 299 "mercury_compile_mlds_back_end.m"
  {
#line 299 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 299 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 299 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GC_12;
#line 299 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SemidetReclaim_13;
#line 299 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NondetReclaim_14;
#line 307 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_22_22;

#line 300 "mercury_compile_mlds_back_end.m"
    {
#line 300 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 301 "mercury_compile_mlds_back_end.m"
    {
#line 301 "mercury_compile_mlds_back_end.m"
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__GC_12);
    }
#line 302 "mercury_compile_mlds_back_end.m"
    {
#line 302 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 300, &top_level__mercury_compile_mlds_back_end__SemidetReclaim_13);
    }
#line 304 "mercury_compile_mlds_back_end.m"
    {
#line 304 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 301, &top_level__mercury_compile_mlds_back_end__NondetReclaim_14);
    }
#line 307 "mercury_compile_mlds_back_end.m"
    {
#line 307 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_22_22 = libs__globals__gc_is_conservative_1_f_0(top_level__mercury_compile_mlds_back_end__GC_12);
    }
#line 307 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__V_22_22 == (MR_Integer) 1);
#line 311 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 310 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 311 "mercury_compile_mlds_back_end.m"
    else
#line 316 "mercury_compile_mlds_back_end.m"
      {
#line 312 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 0);
#line 312 "mercury_compile_mlds_back_end.m"
        if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 313 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 0);
#line 316 "mercury_compile_mlds_back_end.m"
        if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 315 "mercury_compile_mlds_back_end.m"
          *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 316 "mercury_compile_mlds_back_end.m"
        else
#line 326 "mercury_compile_mlds_back_end.m"
          {
#line 317 "mercury_compile_mlds_back_end.m"
            top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 1);
#line 317 "mercury_compile_mlds_back_end.m"
            if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 318 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 1);
#line 326 "mercury_compile_mlds_back_end.m"
            if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 321 "mercury_compile_mlds_back_end.m"
              {
#line 320 "mercury_compile_mlds_back_end.m"
                {
#line 320 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding heap reclamation operations...\n");
                }
#line 322 "mercury_compile_mlds_back_end.m"
                {
#line 322 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
                }
#line 323 "mercury_compile_mlds_back_end.m"
                {
#line 323 "mercury_compile_mlds_back_end.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_3[2], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);
                }
#line 324 "mercury_compile_mlds_back_end.m"
                {
#line 324 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
                }
#line 325 "mercury_compile_mlds_back_end.m"
                {
#line 325 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
                }
#line 321 "mercury_compile_mlds_back_end.m"
              }
#line 326 "mercury_compile_mlds_back_end.m"
            else
#line 330 "mercury_compile_mlds_back_end.m"
              {
#line 331 "mercury_compile_mlds_back_end.m"
                {
#line 331 "mercury_compile_mlds_back_end.m"
                  parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[2]));
                }
#line 332 "mercury_compile_mlds_back_end.m"
                {
#line 332 "mercury_compile_mlds_back_end.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 330 "mercury_compile_mlds_back_end.m"
                *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 330 "mercury_compile_mlds_back_end.m"
              }
#line 326 "mercury_compile_mlds_back_end.m"
          }
#line 316 "mercury_compile_mlds_back_end.m"
      }
#line 299 "mercury_compile_mlds_back_end.m"
  }
#line 296 "mercury_compile_mlds_back_end.m"
}

#line 289 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 289 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 289 "mercury_compile_mlds_back_end.m"
{
#line 289 "mercury_compile_mlds_back_end.m"
  {
#line 289 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 289 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5;

#line 289 "mercury_compile_mlds_back_end.m"
    {
#line 289 "mercury_compile_mlds_back_end.m"
      ml_backend__add_trail_ops__add_trail_ops_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5);
    }
#line 289 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5));
#line 289 "mercury_compile_mlds_back_end.m"
  }
#line 289 "mercury_compile_mlds_back_end.m"
}

#line 247 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
#line 247 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19)
#line 247 "mercury_compile_mlds_back_end.m"
{
#line 250 "mercury_compile_mlds_back_end.m"
  {
#line 250 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 250 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 250 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__UseTrail_12;

#line 251 "mercury_compile_mlds_back_end.m"
    {
#line 251 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 252 "mercury_compile_mlds_back_end.m"
    {
#line 252 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 215, &top_level__mercury_compile_mlds_back_end__UseTrail_12);
    }
#line 1110 "top_level.mercury_compile_mlds_back_end.c"
#line 1111 "top_level.mercury_compile_mlds_back_end.c"
    switch (top_level__mercury_compile_mlds_back_end__UseTrail_12) {
#line 1113 "top_level.mercury_compile_mlds_back_end.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1115 "top_level.mercury_compile_mlds_back_end.c"
      case (MR_Integer) 0:
#line 293 "mercury_compile_mlds_back_end.m"
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
#line 1119 "top_level.mercury_compile_mlds_back_end.c"
        break;
#line 1121 "top_level.mercury_compile_mlds_back_end.c"
      case (MR_Integer) 1:
#line 1123 "top_level.mercury_compile_mlds_back_end.c"
        {
#line 1125 "top_level.mercury_compile_mlds_back_end.c"
          MR_Word top_level__mercury_compile_mlds_back_end__DisableTrailOps_14;

#line 258 "mercury_compile_mlds_back_end.m"
          {
#line 258 "mercury_compile_mlds_back_end.m"
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 281, &top_level__mercury_compile_mlds_back_end__DisableTrailOps_14);
          }
#line 1133 "top_level.mercury_compile_mlds_back_end.c"
#line 1134 "top_level.mercury_compile_mlds_back_end.c"
          switch (top_level__mercury_compile_mlds_back_end__DisableTrailOps_14) {
#line 1136 "top_level.mercury_compile_mlds_back_end.c"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1138 "top_level.mercury_compile_mlds_back_end.c"
            case (MR_Integer) 0:
#line 1140 "top_level.mercury_compile_mlds_back_end.c"
              {
#line 1142 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__OptTrailUse_15;
#line 1144 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__Target_16;
#line 1146 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__GenerateInline_17;
#line 1148 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__V_29_29;
#line 1150 "top_level.mercury_compile_mlds_back_end.c"
                MR_Word top_level__mercury_compile_mlds_back_end__V_31_31;

#line 270 "mercury_compile_mlds_back_end.m"
                {
#line 270 "mercury_compile_mlds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 388, &top_level__mercury_compile_mlds_back_end__OptTrailUse_15);
                }
#line 271 "mercury_compile_mlds_back_end.m"
                {
#line 271 "mercury_compile_mlds_back_end.m"
                  libs__globals__get_target_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__Target_16);
                }
#line 276 "mercury_compile_mlds_back_end.m"
#line 276 "mercury_compile_mlds_back_end.m"
                switch (top_level__mercury_compile_mlds_back_end__Target_16) {
#line 276 "mercury_compile_mlds_back_end.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 276 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 0:
#line 273 "mercury_compile_mlds_back_end.m"
                    {
#line 274 "mercury_compile_mlds_back_end.m"
                      {
#line 274 "mercury_compile_mlds_back_end.m"
                        libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 452, &top_level__mercury_compile_mlds_back_end__GenerateInline_17);
                      }
#line 273 "mercury_compile_mlds_back_end.m"
                    }
#line 276 "mercury_compile_mlds_back_end.m"
                    break;
#line 276 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 1:
#line 276 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 3:
#line 276 "mercury_compile_mlds_back_end.m"
                  case (MR_Integer) 2:
#line 284 "mercury_compile_mlds_back_end.m"
                    top_level__mercury_compile_mlds_back_end__GenerateInline_17 = (MR_Integer) 0;
#line 276 "mercury_compile_mlds_back_end.m"
                    break;
#line 276 "mercury_compile_mlds_back_end.m"
                }
#line 286 "mercury_compile_mlds_back_end.m"
                {
#line 286 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding trailing operations...\n");
                }
#line 287 "mercury_compile_mlds_back_end.m"
                {
#line 287 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
                }
#line 289 "mercury_compile_mlds_back_end.m"
                {
#line 289 "mercury_compile_mlds_back_end.m"
                  top_level__mercury_compile_mlds_back_end__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[0]));
#line 289 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1));
#line 289 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 289 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__OptTrailUse_15));
#line 289 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GenerateInline_17));
#line 289 "mercury_compile_mlds_back_end.m"
                }
#line 289 "mercury_compile_mlds_back_end.m"
                {
#line 289 "mercury_compile_mlds_back_end.m"
                  top_level__mercury_compile_mlds_back_end__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 289 "mercury_compile_mlds_back_end.m"
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_29_29, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_31_31));
#line 289 "mercury_compile_mlds_back_end.m"
                }
#line 288 "mercury_compile_mlds_back_end.m"
                {
#line 288 "mercury_compile_mlds_back_end.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_mlds_back_end__V_29_29, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);
                }
#line 290 "mercury_compile_mlds_back_end.m"
                {
#line 290 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
                }
#line 291 "mercury_compile_mlds_back_end.m"
                {
#line 291 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
                }
#line 1242 "top_level.mercury_compile_mlds_back_end.c"
              }
#line 1244 "top_level.mercury_compile_mlds_back_end.c"
              break;
#line 1246 "top_level.mercury_compile_mlds_back_end.c"
            case (MR_Integer) 1:
#line 293 "mercury_compile_mlds_back_end.m"
              *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
#line 1250 "top_level.mercury_compile_mlds_back_end.c"
              break;
#line 1252 "top_level.mercury_compile_mlds_back_end.c"
          }
#line 1254 "top_level.mercury_compile_mlds_back_end.c"
        }
#line 1256 "top_level.mercury_compile_mlds_back_end.c"
        break;
#line 1258 "top_level.mercury_compile_mlds_back_end.c"
    }
#line 250 "mercury_compile_mlds_back_end.m"
  }
#line 247 "mercury_compile_mlds_back_end.m"
}

#line 47 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(
#line 47 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_6,
#line 47 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
#line 47 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
#line 47 "mercury_compile_mlds_back_end.m"
{
#line 376 "mercury_compile_mlds_back_end.m"
  {
#line 376 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 376 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
#line 376 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_11;
#line 376 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_12;

#line 377 "mercury_compile_mlds_back_end.m"
    {
#line 377 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
#line 378 "mercury_compile_mlds_back_end.m"
    {
#line 378 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 45, &top_level__mercury_compile_mlds_back_end__Verbose_11);
    }
#line 379 "mercury_compile_mlds_back_end.m"
    {
#line 379 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 55, &top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 381 "mercury_compile_mlds_back_end.m"
    {
#line 381 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Converting MLDS to C#...\n");
    }
#line 382 "mercury_compile_mlds_back_end.m"
    {
#line 382 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
#line 383 "mercury_compile_mlds_back_end.m"
    {
#line 383 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Finished converting MLDS to C#.\n");
    }
#line 384 "mercury_compile_mlds_back_end.m"
    {
#line 384 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 376 "mercury_compile_mlds_back_end.m"
  }
#line 47 "mercury_compile_mlds_back_end.m"
}

#line 44 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(
#line 44 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_6,
#line 44 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
#line 44 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
#line 44 "mercury_compile_mlds_back_end.m"
{
#line 366 "mercury_compile_mlds_back_end.m"
  {
#line 366 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 366 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
#line 366 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_11;
#line 366 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_12;

#line 367 "mercury_compile_mlds_back_end.m"
    {
#line 367 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
#line 368 "mercury_compile_mlds_back_end.m"
    {
#line 368 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 45, &top_level__mercury_compile_mlds_back_end__Verbose_11);
    }
#line 369 "mercury_compile_mlds_back_end.m"
    {
#line 369 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 55, &top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 371 "mercury_compile_mlds_back_end.m"
    {
#line 371 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Converting MLDS to Java...\n");
    }
#line 372 "mercury_compile_mlds_back_end.m"
    {
#line 372 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_java__output_java_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
#line 373 "mercury_compile_mlds_back_end.m"
    {
#line 373 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Finished converting MLDS to Java.\n");
    }
#line 374 "mercury_compile_mlds_back_end.m"
    {
#line 374 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_12);
    }
#line 366 "mercury_compile_mlds_back_end.m"
  }
#line 44 "mercury_compile_mlds_back_end.m"
}

#line 41 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(
#line 41 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_6,
#line 41 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
#line 41 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
#line 41 "mercury_compile_mlds_back_end.m"
{
#line 357 "mercury_compile_mlds_back_end.m"
  {
#line 357 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 357 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_10;
#line 357 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_11;

#line 358 "mercury_compile_mlds_back_end.m"
    {
#line 358 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 45, &top_level__mercury_compile_mlds_back_end__Verbose_10);
    }
#line 359 "mercury_compile_mlds_back_end.m"
    {
#line 359 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 55, &top_level__mercury_compile_mlds_back_end__Stats_11);
    }
#line 361 "mercury_compile_mlds_back_end.m"
    {
#line 361 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Converting MLDS to C...\n");
    }
#line 362 "mercury_compile_mlds_back_end.m"
    {
#line 362 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_c__output_c_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Globals_6, (MR_String) "", top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
#line 363 "mercury_compile_mlds_back_end.m"
    {
#line 363 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Finished converting MLDS to C.\n");
    }
#line 364 "mercury_compile_mlds_back_end.m"
    {
#line 364 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_11);
    }
#line 357 "mercury_compile_mlds_back_end.m"
  }
#line 41 "mercury_compile_mlds_back_end.m"
}

#line 240 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 240 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 240 "mercury_compile_mlds_back_end.m"
{
#line 240 "mercury_compile_mlds_back_end.m"
  {
#line 240 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 240 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

#line 240 "mercury_compile_mlds_back_end.m"
    {
#line 240 "mercury_compile_mlds_back_end.m"
      hlds__mark_static_terms__mark_static_terms_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
#line 240 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
#line 240 "mercury_compile_mlds_back_end.m"
  }
#line 240 "mercury_compile_mlds_back_end.m"
}

#line 38 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(
#line 38 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 38 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 38 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13,
#line 38 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14)
#line 38 "mercury_compile_mlds_back_end.m"
{
#line 233 "mercury_compile_mlds_back_end.m"
  {
#line 233 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 233 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 233 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SGCells_12;

#line 234 "mercury_compile_mlds_back_end.m"
    {
#line 234 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 235 "mercury_compile_mlds_back_end.m"
    {
#line 235 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 442, &top_level__mercury_compile_mlds_back_end__SGCells_12);
    }
#line 243 "mercury_compile_mlds_back_end.m"
#line 243 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__SGCells_12) {
#line 243 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 243 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 244 "mercury_compile_mlds_back_end.m"
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 243 "mercury_compile_mlds_back_end.m"
        break;
#line 243 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 237 "mercury_compile_mlds_back_end.m"
        {
#line 238 "mercury_compile_mlds_back_end.m"
          {
#line 238 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Marking static ground terms...\n");
          }
#line 239 "mercury_compile_mlds_back_end.m"
          {
#line 239 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
          }
#line 240 "mercury_compile_mlds_back_end.m"
          {
#line 240 "mercury_compile_mlds_back_end.m"
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_3[1], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14);
          }
#line 241 "mercury_compile_mlds_back_end.m"
          {
#line 241 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
#line 242 "mercury_compile_mlds_back_end.m"
          {
#line 242 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
          }
#line 237 "mercury_compile_mlds_back_end.m"
        }
#line 243 "mercury_compile_mlds_back_end.m"
        break;
#line 243 "mercury_compile_mlds_back_end.m"
    }
#line 233 "mercury_compile_mlds_back_end.m"
  }
#line 38 "mercury_compile_mlds_back_end.m"
}

#line 104 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1(
#line 104 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg)
#line 104 "mercury_compile_mlds_back_end.m"
{
#line 104 "mercury_compile_mlds_back_end.m"
  {
#line 104 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 104 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;

#line 104 "mercury_compile_mlds_back_end.m"
    {
#line 104 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__104__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))));
    }
#line 104 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__succeeded;
#line 104 "mercury_compile_mlds_back_end.m"
  }
#line 104 "mercury_compile_mlds_back_end.m"
}

#line 35 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_21,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_24,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_25)
#line 35 "mercury_compile_mlds_back_end.m"
{
#line 97 "mercury_compile_mlds_back_end.m"
  {
#line 97 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_12;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_13;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_14;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SimplifySpecs_15;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Optimize_17;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GC_19;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NestedFuncs_20;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_35_35;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_39_39;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_43_43;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_49_49;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_55_55;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_61_61;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_67_67;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119;
#line 97 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130;

#line 98 "mercury_compile_mlds_back_end.m"
    {
#line 98 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_mlds_back_end__Globals_12);
    }
#line 99 "mercury_compile_mlds_back_end.m"
    {
#line 99 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 45, &top_level__mercury_compile_mlds_back_end__Verbose_13);
    }
#line 100 "mercury_compile_mlds_back_end.m"
    {
#line 100 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 55, &top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 102 "mercury_compile_mlds_back_end.m"
    {
#line 102 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 4, top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_21, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_mlds_back_end__SimplifySpecs_15);
    }
#line 104 "mercury_compile_mlds_back_end.m"
    {
#line 104 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_39_39 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__SimplifySpecs_15);
    }
#line 104 "mercury_compile_mlds_back_end.m"
    {
#line 104 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 104 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0]));
#line 104 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1));
#line 104 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 104 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_39_39));
#line 104 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_35_35, 4) = ((MR_Box) ((MR_Integer) 0));
#line 104 "mercury_compile_mlds_back_end.m"
    }
#line 104 "mercury_compile_mlds_back_end.m"
    {
#line 104 "mercury_compile_mlds_back_end.m"
      mercury__require__expect_4_p_0(top_level__mercury_compile_mlds_back_end__V_35_35, (MR_String) "top_level.mercury_compile_mlds_back_end", (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/7", (MR_String) "simplify has errors");
    }
#line 106 "mercury_compile_mlds_back_end.m"
    {
#line 106 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32, (MR_Integer) 405, (MR_String) "ml_backend_simplify", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_24, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_43_43);
    }
#line 112 "mercury_compile_mlds_back_end.m"
    {
#line 112 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45);
    }
#line 113 "mercury_compile_mlds_back_end.m"
    {
#line 113 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 410, (MR_String) "add_trail_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_43_43, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_49_49);
    }
#line 115 "mercury_compile_mlds_back_end.m"
    {
#line 115 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51);
    }
#line 116 "mercury_compile_mlds_back_end.m"
    {
#line 116 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 415, (MR_String) "add_heap_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_55_55);
    }
#line 118 "mercury_compile_mlds_back_end.m"
    {
#line 118 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57);
    }
#line 119 "mercury_compile_mlds_back_end.m"
    {
#line 119 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 420, (MR_String) "mark_static", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 125 "mercury_compile_mlds_back_end.m"
    {
#line 125 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63);
    }
#line 126 "mercury_compile_mlds_back_end.m"
    {
#line 126 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 425, (MR_String) "args_to_regs", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_67_67);
    }
#line 128 "mercury_compile_mlds_back_end.m"
    {
#line 128 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Converting HLDS to MLDS...\n");
    }
#line 129 "mercury_compile_mlds_back_end.m"
    {
#line 129 "mercury_compile_mlds_back_end.m"
      ml_backend__ml_proc_gen__ml_code_gen_3_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_63_63, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72);
    }
#line 130 "mercury_compile_mlds_back_end.m"
    {
#line 130 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
    }
#line 131 "mercury_compile_mlds_back_end.m"
    {
#line 131 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 132 "mercury_compile_mlds_back_end.m"
    {
#line 132 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22, (MR_Integer) 499, (MR_String) "final", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_67_67, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_25);
    }
#line 133 "mercury_compile_mlds_back_end.m"
    {
#line 133 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72, (MR_Integer) 0, (MR_String) "initial");
    }
#line 135 "mercury_compile_mlds_back_end.m"
    {
#line 135 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Generating RTTI data...\n");
    }
#line 136 "mercury_compile_mlds_back_end.m"
    {
#line 136 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_22, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_72_72, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85);
    }
#line 137 "mercury_compile_mlds_back_end.m"
    {
#line 137 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
    }
#line 138 "mercury_compile_mlds_back_end.m"
    {
#line 138 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 139 "mercury_compile_mlds_back_end.m"
    {
#line 139 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85, (MR_Integer) 10, (MR_String) "rtti");
    }
#line 144 "mercury_compile_mlds_back_end.m"
    {
#line 144 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 449, &top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16);
    }
#line 150 "mercury_compile_mlds_back_end.m"
#line 150 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16) {
#line 150 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 150 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 151 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85;
#line 150 "mercury_compile_mlds_back_end.m"
        break;
#line 150 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 146 "mercury_compile_mlds_back_end.m"
        {
#line 147 "mercury_compile_mlds_back_end.m"
          {
#line 147 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Detecting tail calls...\n");
          }
#line 148 "mercury_compile_mlds_back_end.m"
          {
#line 148 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_85_85, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95);
          }
#line 149 "mercury_compile_mlds_back_end.m"
          {
#line 149 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 146 "mercury_compile_mlds_back_end.m"
        }
#line 150 "mercury_compile_mlds_back_end.m"
        break;
#line 150 "mercury_compile_mlds_back_end.m"
    }
#line 153 "mercury_compile_mlds_back_end.m"
    {
#line 153 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 154 "mercury_compile_mlds_back_end.m"
    {
#line 154 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95, (MR_Integer) 20, (MR_String) "tailcalls");
    }
#line 164 "mercury_compile_mlds_back_end.m"
    {
#line 164 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 455, &top_level__mercury_compile_mlds_back_end__Optimize_17);
    }
#line 172 "mercury_compile_mlds_back_end.m"
#line 172 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__Optimize_17) {
#line 172 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 172 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 173 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95;
#line 172 "mercury_compile_mlds_back_end.m"
        break;
#line 172 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 166 "mercury_compile_mlds_back_end.m"
        {
#line 166 "mercury_compile_mlds_back_end.m"
          MR_Word top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_18;

#line 167 "mercury_compile_mlds_back_end.m"
          {
#line 167 "mercury_compile_mlds_back_end.m"
            libs__globals__set_option_4_p_0((MR_Integer) 450, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_3[0]), top_level__mercury_compile_mlds_back_end__Globals_12, &top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_18);
          }
#line 169 "mercury_compile_mlds_back_end.m"
          {
#line 169 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Optimizing MLDS...\n");
          }
#line 170 "mercury_compile_mlds_back_end.m"
          {
#line 170 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_18, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_95_95, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109);
          }
#line 171 "mercury_compile_mlds_back_end.m"
          {
#line 171 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 166 "mercury_compile_mlds_back_end.m"
        }
#line 172 "mercury_compile_mlds_back_end.m"
        break;
#line 172 "mercury_compile_mlds_back_end.m"
    }
#line 175 "mercury_compile_mlds_back_end.m"
    {
#line 175 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 176 "mercury_compile_mlds_back_end.m"
    {
#line 176 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109, (MR_Integer) 25, (MR_String) "optimize1");
    }
#line 185 "mercury_compile_mlds_back_end.m"
    {
#line 185 "mercury_compile_mlds_back_end.m"
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, &top_level__mercury_compile_mlds_back_end__GC_19);
    }
#line 192 "mercury_compile_mlds_back_end.m"
#line 192 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__GC_19) {
#line 192 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 192 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 5:
#line 187 "mercury_compile_mlds_back_end.m"
        {
#line 188 "mercury_compile_mlds_back_end.m"
          {
#line 188 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Threading GC stack frames...\n");
          }
#line 190 "mercury_compile_mlds_back_end.m"
          {
#line 190 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_elim_nested__ml_elim_nested_4_p_1((MR_Integer) 1, top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119);
          }
#line 191 "mercury_compile_mlds_back_end.m"
          {
#line 191 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 187 "mercury_compile_mlds_back_end.m"
        }
#line 192 "mercury_compile_mlds_back_end.m"
        break;
#line 192 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 193 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 192 "mercury_compile_mlds_back_end.m"
        break;
#line 192 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 2:
#line 195 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 192 "mercury_compile_mlds_back_end.m"
        break;
#line 192 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 3:
#line 196 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 192 "mercury_compile_mlds_back_end.m"
        break;
#line 192 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 4:
#line 197 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 192 "mercury_compile_mlds_back_end.m"
        break;
#line 192 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 194 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_109_109;
#line 192 "mercury_compile_mlds_back_end.m"
        break;
#line 192 "mercury_compile_mlds_back_end.m"
    }
#line 200 "mercury_compile_mlds_back_end.m"
    {
#line 200 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 201 "mercury_compile_mlds_back_end.m"
    {
#line 201 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119, (MR_Integer) 30, (MR_String) "gc_frames");
    }
#line 203 "mercury_compile_mlds_back_end.m"
    {
#line 203 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 253, &top_level__mercury_compile_mlds_back_end__NestedFuncs_20);
    }
#line 209 "mercury_compile_mlds_back_end.m"
#line 209 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__NestedFuncs_20) {
#line 209 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 209 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 205 "mercury_compile_mlds_back_end.m"
        {
#line 206 "mercury_compile_mlds_back_end.m"
          {
#line 206 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Flattening nested functions...\n");
          }
#line 207 "mercury_compile_mlds_back_end.m"
          {
#line 207 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_elim_nested__ml_elim_nested_4_p_0((MR_Integer) 0, top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130);
          }
#line 208 "mercury_compile_mlds_back_end.m"
          {
#line 208 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 205 "mercury_compile_mlds_back_end.m"
        }
#line 209 "mercury_compile_mlds_back_end.m"
        break;
#line 209 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 210 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_119_119;
#line 209 "mercury_compile_mlds_back_end.m"
        break;
#line 209 "mercury_compile_mlds_back_end.m"
    }
#line 212 "mercury_compile_mlds_back_end.m"
    {
#line 212 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 213 "mercury_compile_mlds_back_end.m"
    {
#line 213 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130, (MR_Integer) 35, (MR_String) "nested_funcs");
    }
#line 223 "mercury_compile_mlds_back_end.m"
#line 223 "mercury_compile_mlds_back_end.m"
    switch (top_level__mercury_compile_mlds_back_end__Optimize_17) {
#line 223 "mercury_compile_mlds_back_end.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 223 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 0:
#line 224 "mercury_compile_mlds_back_end.m"
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130;
#line 223 "mercury_compile_mlds_back_end.m"
        break;
#line 223 "mercury_compile_mlds_back_end.m"
      case (MR_Integer) 1:
#line 219 "mercury_compile_mlds_back_end.m"
        {
#line 220 "mercury_compile_mlds_back_end.m"
          {
#line 220 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Optimizing MLDS again...\n");
          }
#line 221 "mercury_compile_mlds_back_end.m"
          {
#line 221 "mercury_compile_mlds_back_end.m"
            ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_130_130, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23);
          }
#line 222 "mercury_compile_mlds_back_end.m"
          {
#line 222 "mercury_compile_mlds_back_end.m"
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
          }
#line 219 "mercury_compile_mlds_back_end.m"
        }
#line 223 "mercury_compile_mlds_back_end.m"
        break;
#line 223 "mercury_compile_mlds_back_end.m"
    }
#line 226 "mercury_compile_mlds_back_end.m"
    {
#line 226 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 227 "mercury_compile_mlds_back_end.m"
    {
#line 227 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23, (MR_Integer) 40, (MR_String) "optimize2");
    }
#line 229 "mercury_compile_mlds_back_end.m"
    {
#line 229 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_23, (MR_Integer) 99, (MR_String) "final");
    }
#line 97 "mercury_compile_mlds_back_end.m"
  }
#line 35 "mercury_compile_mlds_back_end.m"
}

#line 33 "mercury_compile_mlds_back_end.m"
MR_Word MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(
#line 33 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_3)
#line 33 "mercury_compile_mlds_back_end.m"
{
#line 85 "mercury_compile_mlds_back_end.m"
  {
#line 85 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 85 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Defns_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 4)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 0)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 1)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 2)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 3)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 5)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 6)));
#line 87 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 7)));

#line 88 "mercury_compile_mlds_back_end.m"
    {
#line 88 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = ml_backend__ml_util__defns_contain_main_1_p_0(top_level__mercury_compile_mlds_back_end__Defns_4);
    }
#line 85 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 90 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 0;
#line 85 "mercury_compile_mlds_back_end.m"
    else
#line 92 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 1;
#line 85 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
#line 85 "mercury_compile_mlds_back_end.m"
  }
#line 33 "mercury_compile_mlds_back_end.m"
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
