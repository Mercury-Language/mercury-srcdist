/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version 13.05.1, configured for x86_64-apple-darwin12.3.0.
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
#include "array.mih"
#include "assoc_list.mih"
#include "backend_libs.mih"
#include "bag.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "bytecode_backend.mih"
#include "char.mih"
#include "check_hlds.mih"
#include "construct.mih"
#include "cord.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "digraph.mih"
#include "enum.mih"
#include "erl_backend.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "mode_robdd.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pprint.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "random.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
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
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.lp_rational.mih"
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
#include "mdbcomp.trace_counts.mih"
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
#include "ml_backend.mlds_to_ilasm.mih"
#include "ml_backend.mlds_to_java.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"




#line 107 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__107__1_2_p_0(
#line 107 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_40,
#line 107 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_41);

#line 420 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
#line 420 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
#line 420 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
#line 420 "mercury_compile_mlds_back_end.m"
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
#line 420 "mercury_compile_mlds_back_end.m"
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10);

#line 357 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(
#line 357 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_4,
#line 357 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21,
#line 357 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22);

#line 345 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 318 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);

#line 311 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 267 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);

#line 260 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

#line 107 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1(
#line 107 "mercury_compile_mlds_back_end.m"
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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



#line 107 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__107__1_2_p_0(
#line 107 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_40,
#line 107 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_41)
#line 107 "mercury_compile_mlds_back_end.m"
{
#line 107 "mercury_compile_mlds_back_end.m"
  {
#line 107 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__HeadVar__1_40 == top_level__mercury_compile_mlds_back_end__HeadVar__2_41);

#line 107 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__succeeded;
#line 107 "mercury_compile_mlds_back_end.m"
  }
#line 107 "mercury_compile_mlds_back_end.m"
}

#line 420 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
#line 420 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
#line 420 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
#line 420 "mercury_compile_mlds_back_end.m"
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
#line 420 "mercury_compile_mlds_back_end.m"
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10)
#line 420 "mercury_compile_mlds_back_end.m"
{
#line 423 "mercury_compile_mlds_back_end.m"
  {
#line 423 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 423 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_12;
#line 423 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__DumpStages_13;
#line 423 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14;
#line 423 "mercury_compile_mlds_back_end.m"
    MR_String top_level__mercury_compile_mlds_back_end__StageNumStr_15;

#line 424 "mercury_compile_mlds_back_end.m"
    {
#line 424 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_12);
    }
#line 425 "mercury_compile_mlds_back_end.m"
    {
#line 425 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 148, &top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
#line 426 "mercury_compile_mlds_back_end.m"
    {
#line 426 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 149, &top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
#line 428 "mercury_compile_mlds_back_end.m"
    {
#line 428 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__StageNumStr_15 = hlds__passes_aux__stage_num_str_1_f_0(top_level__mercury_compile_mlds_back_end__StageNum_9);
    }
#line 429 "mercury_compile_mlds_back_end.m"
    {
#line 429 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
#line 435 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 430 "mercury_compile_mlds_back_end.m"
      {
#line 430 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__DumpSuffix_16;
#line 430 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_29_29;
#line 430 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_30_30;

#line 430 "mercury_compile_mlds_back_end.m"
        {
#line 430 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out MLDS as C...\n");
        }
#line 431 "mercury_compile_mlds_back_end.m"
        {
#line 431 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12);
        }
#line 432 "mercury_compile_mlds_back_end.m"
        {
#line 432 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
        }
#line 432 "mercury_compile_mlds_back_end.m"
        {
#line 432 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_29_29 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__V_30_30);
        }
#line 432 "mercury_compile_mlds_back_end.m"
        {
#line 432 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__DumpSuffix_16 = mercury__string__f_43_43_2_f_0((MR_String) "_dump.", top_level__mercury_compile_mlds_back_end__V_29_29);
        }
#line 433 "mercury_compile_mlds_back_end.m"
        {
#line 433 "mercury_compile_mlds_back_end.m"
          ml_backend__mlds_to_c__output_c_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__MLDS_8, top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__DumpSuffix_16);
        }
#line 434 "mercury_compile_mlds_back_end.m"
        {
#line 434 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
        }
#line 430 "mercury_compile_mlds_back_end.m"
      }
#line 435 "mercury_compile_mlds_back_end.m"
    else
#line 434 "mercury_compile_mlds_back_end.m"
      {
#line 434 "mercury_compile_mlds_back_end.m"
      }
#line 438 "mercury_compile_mlds_back_end.m"
    {
#line 438 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
#line 446 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 439 "mercury_compile_mlds_back_end.m"
      {
#line 439 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_17;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__BaseFileName_18;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__DumpFile_19;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_40_40;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_42_42;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_String top_level__mercury_compile_mlds_back_end__V_43_43;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Verbose_54;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Stats_55;
#line 439 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__Res_56;

#line 439 "mercury_compile_mlds_back_end.m"
        {
#line 439 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out raw MLDS...\n");
        }
#line 440 "mercury_compile_mlds_back_end.m"
        {
#line 440 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__ModuleName_17 = ml_backend__mlds__mlds_get_module_name_1_f_0(top_level__mercury_compile_mlds_back_end__MLDS_8);
        }
#line 441 "mercury_compile_mlds_back_end.m"
        {
#line 441 "mercury_compile_mlds_back_end.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__ModuleName_17, (MR_String) ".mlds_dump", (MR_Integer) 0, &top_level__mercury_compile_mlds_back_end__BaseFileName_18);
        }
#line 443 "mercury_compile_mlds_back_end.m"
        {
#line 443 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_43_43 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
        }
#line 443 "mercury_compile_mlds_back_end.m"
        {
#line 443 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_42_42 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_15, top_level__mercury_compile_mlds_back_end__V_43_43);
        }
#line 443 "mercury_compile_mlds_back_end.m"
        {
#line 443 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__V_40_40 = mercury__string__f_43_43_2_f_0((MR_String) ".", top_level__mercury_compile_mlds_back_end__V_42_42);
        }
#line 443 "mercury_compile_mlds_back_end.m"
        {
#line 443 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__DumpFile_19 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__BaseFileName_18, top_level__mercury_compile_mlds_back_end__V_40_40);
        }
#line 453 "mercury_compile_mlds_back_end.m"
        {
#line 453 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_54);
        }
#line 454 "mercury_compile_mlds_back_end.m"
        {
#line 454 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 54, &top_level__mercury_compile_mlds_back_end__Stats_55);
        }
#line 455 "mercury_compile_mlds_back_end.m"
        {
#line 455 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_54, (MR_String) "% Dumping out MLDS to \140");
        }
#line 456 "mercury_compile_mlds_back_end.m"
        {
#line 456 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_54, top_level__mercury_compile_mlds_back_end__DumpFile_19);
        }
#line 457 "mercury_compile_mlds_back_end.m"
        {
#line 457 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_54, (MR_String) "\'...");
        }
#line 458 "mercury_compile_mlds_back_end.m"
        {
#line 458 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_54);
        }
#line 459 "mercury_compile_mlds_back_end.m"
        {
#line 459 "mercury_compile_mlds_back_end.m"
          mercury__io__open_output_4_p_0(top_level__mercury_compile_mlds_back_end__DumpFile_19, &top_level__mercury_compile_mlds_back_end__Res_56);
        }
#line 469 "mercury_compile_mlds_back_end.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_mlds_back_end__Res_56)) == (MR_mktag((MR_Integer) 1))))
#line 470 "mercury_compile_mlds_back_end.m"
          {
#line 470 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__IOError_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_mlds_back_end__Res_56, (MR_Integer) 0)));
#line 470 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__ErrorMessage_61;
#line 470 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_74_74;
#line 470 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_75_75;
#line 470 "mercury_compile_mlds_back_end.m"
            MR_String top_level__mercury_compile_mlds_back_end__V_77_77;

#line 471 "mercury_compile_mlds_back_end.m"
            {
#line 471 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_54, (MR_String) "\n");
            }
#line 472 "mercury_compile_mlds_back_end.m"
            {
#line 472 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_77_77 = mercury__io__error_message_1_f_0(top_level__mercury_compile_mlds_back_end__IOError_60);
            }
#line 472 "mercury_compile_mlds_back_end.m"
            {
#line 472 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", top_level__mercury_compile_mlds_back_end__V_77_77);
            }
#line 472 "mercury_compile_mlds_back_end.m"
            {
#line 472 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_74_74 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__DumpFile_19, top_level__mercury_compile_mlds_back_end__V_75_75);
            }
#line 472 "mercury_compile_mlds_back_end.m"
            {
#line 472 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__ErrorMessage_61 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", top_level__mercury_compile_mlds_back_end__V_74_74);
            }
#line 474 "mercury_compile_mlds_back_end.m"
            {
#line 474 "mercury_compile_mlds_back_end.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_mlds_back_end__ErrorMessage_61);
            }
#line 470 "mercury_compile_mlds_back_end.m"
          }
#line 469 "mercury_compile_mlds_back_end.m"
        else
#line 461 "mercury_compile_mlds_back_end.m"
          {
#line 461 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__FileStream_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Res_56, (MR_Integer) 0)));
#line 461 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__OutputStream_58;
#line 461 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__V_81_81;
#line 465 "mercury_compile_mlds_back_end.m"
            MR_Word top_level__mercury_compile_mlds_back_end__V_59_59;

#line 462 "mercury_compile_mlds_back_end.m"
            {
#line 462 "mercury_compile_mlds_back_end.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__FileStream_57, &top_level__mercury_compile_mlds_back_end__OutputStream_58);
            }
#line 463 "mercury_compile_mlds_back_end.m"
            {
#line 463 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_81_81 = mercury__pprint__to_doc_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0, ((MR_Box) (top_level__mercury_compile_mlds_back_end__MLDS_8)));
            }
#line 463 "mercury_compile_mlds_back_end.m"
            {
#line 463 "mercury_compile_mlds_back_end.m"
              mercury__pprint__write_4_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_1[0], (MR_Integer) 80, ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_81_81)));
            }
#line 464 "mercury_compile_mlds_back_end.m"
            {
#line 464 "mercury_compile_mlds_back_end.m"
              mercury__io__nl_2_p_0();
            }
#line 465 "mercury_compile_mlds_back_end.m"
            {
#line 465 "mercury_compile_mlds_back_end.m"
              mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__OutputStream_58, &top_level__mercury_compile_mlds_back_end__V_59_59);
            }
#line 466 "mercury_compile_mlds_back_end.m"
            {
#line 466 "mercury_compile_mlds_back_end.m"
              mercury__io__close_output_3_p_0(top_level__mercury_compile_mlds_back_end__FileStream_57);
            }
#line 467 "mercury_compile_mlds_back_end.m"
            {
#line 467 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_54, (MR_String) " done.\n");
            }
#line 468 "mercury_compile_mlds_back_end.m"
            {
#line 468 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_55);
            }
#line 461 "mercury_compile_mlds_back_end.m"
          }
#line 445 "mercury_compile_mlds_back_end.m"
        {
#line 445 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
#line 445 "mercury_compile_mlds_back_end.m"
          return;
        }
#line 439 "mercury_compile_mlds_back_end.m"
      }
#line 446 "mercury_compile_mlds_back_end.m"
    else
#line 445 "mercury_compile_mlds_back_end.m"
      {
#line 445 "mercury_compile_mlds_back_end.m"
      }
#line 423 "mercury_compile_mlds_back_end.m"
  }
#line 420 "mercury_compile_mlds_back_end.m"
}

#line 357 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(
#line 357 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_4,
#line 357 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21,
#line 357 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22)
#line 357 "mercury_compile_mlds_back_end.m"
{
#line 359 "mercury_compile_mlds_back_end.m"
  {
#line 359 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_8;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__RttiDatas_11;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_12;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ForeignCode_13;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Imports_14;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData0_15;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Defns_16;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__InitPreds_17;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__FinalPreds_18;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__ExportedEnums_19;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData_20;
#line 359 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_24_24;

#line 360 "mercury_compile_mlds_back_end.m"
    {
#line 360 "mercury_compile_mlds_back_end.m"
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6);
    }
#line 361 "mercury_compile_mlds_back_end.m"
    {
#line 361 "mercury_compile_mlds_back_end.m"
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7);
    }
#line 363 "mercury_compile_mlds_back_end.m"
    {
#line 363 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, &top_level__mercury_compile_mlds_back_end__Globals_8);
    }
#line 364 "mercury_compile_mlds_back_end.m"
    {
#line 364 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 279, &top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9);
    }
#line 365 "mercury_compile_mlds_back_end.m"
    {
#line 365 "mercury_compile_mlds_back_end.m"
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_9, &top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10);
    }
#line 810 "top_level.mercury_compile_mlds_back_end.c"
    top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
#line 367 "mercury_compile_mlds_back_end.m"
    {
#line 367 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_24_24 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26, top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_7, top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_10);
    }
#line 367 "mercury_compile_mlds_back_end.m"
    {
#line 367 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__RttiDatas_11 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_26_26, top_level__mercury_compile_mlds_back_end__TypeCtorRtti_6, top_level__mercury_compile_mlds_back_end__V_24_24);
    }
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ModuleName_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 0)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ForeignCode_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 1)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__Imports_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 2)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__GlobalData0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 3)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__Defns_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 4)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__InitPreds_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 5)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__FinalPreds_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 6)));
#line 368 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__ExportedEnums_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_21, (MR_Integer) 7)));
#line 370 "mercury_compile_mlds_back_end.m"
    {
#line 370 "mercury_compile_mlds_back_end.m"
      ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_4_p_0(top_level__mercury_compile_mlds_back_end__HLDS_4, top_level__mercury_compile_mlds_back_end__RttiDatas_11, top_level__mercury_compile_mlds_back_end__GlobalData0_15, &top_level__mercury_compile_mlds_back_end__GlobalData_20);
    }
#line 371 "mercury_compile_mlds_back_end.m"
    {
#line 371 "mercury_compile_mlds_back_end.m"
      MR_Word base;
#line 371 "mercury_compile_mlds_back_end.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL);
#line 371 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_22 = base;
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ModuleName_12));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ForeignCode_13));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Imports_14));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GlobalData_20));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Defns_16));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__InitPreds_17));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__FinalPreds_18));
#line 371 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__ExportedEnums_19));
#line 371 "mercury_compile_mlds_back_end.m"
    }
#line 359 "mercury_compile_mlds_back_end.m"
  }
#line 357 "mercury_compile_mlds_back_end.m"
}

#line 345 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 345 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 345 "mercury_compile_mlds_back_end.m"
{
#line 345 "mercury_compile_mlds_back_end.m"
  {
#line 345 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 345 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

#line 345 "mercury_compile_mlds_back_end.m"
    {
#line 345 "mercury_compile_mlds_back_end.m"
      ml_backend__add_heap_ops__add_heap_ops_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
#line 345 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
#line 345 "mercury_compile_mlds_back_end.m"
  }
#line 345 "mercury_compile_mlds_back_end.m"
}

#line 318 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
#line 318 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17)
#line 318 "mercury_compile_mlds_back_end.m"
{
#line 321 "mercury_compile_mlds_back_end.m"
  {
#line 321 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 321 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 321 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GC_12;
#line 321 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SemidetReclaim_13;
#line 321 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NondetReclaim_14;
#line 329 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_22_22;

#line 322 "mercury_compile_mlds_back_end.m"
    {
#line 322 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 323 "mercury_compile_mlds_back_end.m"
    {
#line 323 "mercury_compile_mlds_back_end.m"
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__GC_12);
    }
#line 324 "mercury_compile_mlds_back_end.m"
    {
#line 324 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 305, &top_level__mercury_compile_mlds_back_end__SemidetReclaim_13);
    }
#line 326 "mercury_compile_mlds_back_end.m"
    {
#line 326 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 306, &top_level__mercury_compile_mlds_back_end__NondetReclaim_14);
    }
#line 329 "mercury_compile_mlds_back_end.m"
    {
#line 329 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_22_22 = libs__globals__gc_is_conservative_1_f_0(top_level__mercury_compile_mlds_back_end__GC_12);
    }
#line 329 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__V_22_22 == (MR_Integer) 1);
#line 333 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 332 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 333 "mercury_compile_mlds_back_end.m"
    else
#line 338 "mercury_compile_mlds_back_end.m"
      {
#line 334 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 0);
#line 334 "mercury_compile_mlds_back_end.m"
        if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 335 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 0);
#line 338 "mercury_compile_mlds_back_end.m"
        if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 337 "mercury_compile_mlds_back_end.m"
          *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 338 "mercury_compile_mlds_back_end.m"
        else
#line 348 "mercury_compile_mlds_back_end.m"
          {
#line 339 "mercury_compile_mlds_back_end.m"
            top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 1);
#line 339 "mercury_compile_mlds_back_end.m"
            if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 340 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 1);
#line 348 "mercury_compile_mlds_back_end.m"
            if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 343 "mercury_compile_mlds_back_end.m"
              {
#line 342 "mercury_compile_mlds_back_end.m"
                {
#line 342 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding heap reclamation operations...\n");
                }
#line 344 "mercury_compile_mlds_back_end.m"
                {
#line 344 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
                }
#line 345 "mercury_compile_mlds_back_end.m"
                {
#line 345 "mercury_compile_mlds_back_end.m"
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_3[2], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);
                }
#line 346 "mercury_compile_mlds_back_end.m"
                {
#line 346 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
                }
#line 347 "mercury_compile_mlds_back_end.m"
                {
#line 347 "mercury_compile_mlds_back_end.m"
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
#line 347 "mercury_compile_mlds_back_end.m"
                  return;
                }
#line 343 "mercury_compile_mlds_back_end.m"
              }
#line 348 "mercury_compile_mlds_back_end.m"
            else
#line 352 "mercury_compile_mlds_back_end.m"
              {
#line 353 "mercury_compile_mlds_back_end.m"
                {
#line 353 "mercury_compile_mlds_back_end.m"
                  parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[2]));
                }
#line 354 "mercury_compile_mlds_back_end.m"
                {
#line 354 "mercury_compile_mlds_back_end.m"
                  mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
                }
#line 354 "mercury_compile_mlds_back_end.m"
                *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
#line 352 "mercury_compile_mlds_back_end.m"
              }
#line 348 "mercury_compile_mlds_back_end.m"
          }
#line 338 "mercury_compile_mlds_back_end.m"
      }
#line 321 "mercury_compile_mlds_back_end.m"
  }
#line 318 "mercury_compile_mlds_back_end.m"
}

#line 311 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 311 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 311 "mercury_compile_mlds_back_end.m"
{
#line 311 "mercury_compile_mlds_back_end.m"
  {
#line 311 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 311 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5;

#line 311 "mercury_compile_mlds_back_end.m"
    {
#line 311 "mercury_compile_mlds_back_end.m"
      ml_backend__add_trail_ops__add_trail_ops_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5);
    }
#line 311 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5));
#line 311 "mercury_compile_mlds_back_end.m"
  }
#line 311 "mercury_compile_mlds_back_end.m"
}

#line 267 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
#line 267 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19)
#line 267 "mercury_compile_mlds_back_end.m"
{
#line 270 "mercury_compile_mlds_back_end.m"
  {
#line 270 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 270 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 270 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__UseTrail_12;

#line 271 "mercury_compile_mlds_back_end.m"
    {
#line 271 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 272 "mercury_compile_mlds_back_end.m"
    {
#line 272 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 214, &top_level__mercury_compile_mlds_back_end__UseTrail_12);
    }
#line 1113 "top_level.mercury_compile_mlds_back_end.c"
    if ((top_level__mercury_compile_mlds_back_end__UseTrail_12 == (MR_Integer) 0))
#line 315 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
#line 1117 "top_level.mercury_compile_mlds_back_end.c"
    else
#line 1119 "top_level.mercury_compile_mlds_back_end.c"
      {
#line 1121 "top_level.mercury_compile_mlds_back_end.c"
        MR_Word top_level__mercury_compile_mlds_back_end__DisableTrailOps_14;

#line 278 "mercury_compile_mlds_back_end.m"
        {
#line 278 "mercury_compile_mlds_back_end.m"
          libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 285, &top_level__mercury_compile_mlds_back_end__DisableTrailOps_14);
        }
#line 1129 "top_level.mercury_compile_mlds_back_end.c"
        if ((top_level__mercury_compile_mlds_back_end__DisableTrailOps_14 == (MR_Integer) 0))
#line 1131 "top_level.mercury_compile_mlds_back_end.c"
          {
#line 1133 "top_level.mercury_compile_mlds_back_end.c"
            MR_Word top_level__mercury_compile_mlds_back_end__OptTrailUse_15;
#line 1135 "top_level.mercury_compile_mlds_back_end.c"
            MR_Word top_level__mercury_compile_mlds_back_end__Target_16;
#line 1137 "top_level.mercury_compile_mlds_back_end.c"
            MR_Word top_level__mercury_compile_mlds_back_end__GenerateInline_17;
#line 1139 "top_level.mercury_compile_mlds_back_end.c"
            MR_Word top_level__mercury_compile_mlds_back_end__V_29_29;
#line 1141 "top_level.mercury_compile_mlds_back_end.c"
            MR_Word top_level__mercury_compile_mlds_back_end__V_31_31;

#line 290 "mercury_compile_mlds_back_end.m"
            {
#line 290 "mercury_compile_mlds_back_end.m"
              libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 394, &top_level__mercury_compile_mlds_back_end__OptTrailUse_15);
            }
#line 291 "mercury_compile_mlds_back_end.m"
            {
#line 291 "mercury_compile_mlds_back_end.m"
              libs__globals__get_target_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__Target_16);
            }
#line 296 "mercury_compile_mlds_back_end.m"
            if ((top_level__mercury_compile_mlds_back_end__Target_16 == (MR_Integer) 0))
#line 293 "mercury_compile_mlds_back_end.m"
              {
#line 294 "mercury_compile_mlds_back_end.m"
                {
#line 294 "mercury_compile_mlds_back_end.m"
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 457, &top_level__mercury_compile_mlds_back_end__GenerateInline_17);
                }
#line 293 "mercury_compile_mlds_back_end.m"
              }
#line 296 "mercury_compile_mlds_back_end.m"
            else
#line 306 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__GenerateInline_17 = (MR_Integer) 0;
#line 308 "mercury_compile_mlds_back_end.m"
            {
#line 308 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding trailing operations...\n");
            }
#line 309 "mercury_compile_mlds_back_end.m"
            {
#line 309 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
            }
#line 311 "mercury_compile_mlds_back_end.m"
            {
#line 311 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 311 "mercury_compile_mlds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[0]));
#line 311 "mercury_compile_mlds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1));
#line 311 "mercury_compile_mlds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 311 "mercury_compile_mlds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__OptTrailUse_15));
#line 311 "mercury_compile_mlds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_31_31, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GenerateInline_17));
#line 311 "mercury_compile_mlds_back_end.m"
            }
#line 310 "mercury_compile_mlds_back_end.m"
            {
#line 310 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 310 "mercury_compile_mlds_back_end.m"
              MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_29_29, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_31_31));
#line 310 "mercury_compile_mlds_back_end.m"
            }
#line 310 "mercury_compile_mlds_back_end.m"
            {
#line 310 "mercury_compile_mlds_back_end.m"
              hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_mlds_back_end__V_29_29, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);
            }
#line 312 "mercury_compile_mlds_back_end.m"
            {
#line 312 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
            }
#line 313 "mercury_compile_mlds_back_end.m"
            {
#line 313 "mercury_compile_mlds_back_end.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
#line 313 "mercury_compile_mlds_back_end.m"
              return;
            }
#line 1220 "top_level.mercury_compile_mlds_back_end.c"
          }
#line 1222 "top_level.mercury_compile_mlds_back_end.c"
        else
#line 315 "mercury_compile_mlds_back_end.m"
          *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
#line 1226 "top_level.mercury_compile_mlds_back_end.c"
      }
#line 270 "mercury_compile_mlds_back_end.m"
  }
#line 267 "mercury_compile_mlds_back_end.m"
}

#line 47 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_il_assembler_4_p_0(
#line 47 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_5,
#line 47 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_6)
#line 47 "mercury_compile_mlds_back_end.m"
{
#line 408 "mercury_compile_mlds_back_end.m"
  {
#line 408 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 408 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_8;
#line 408 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_9;

#line 409 "mercury_compile_mlds_back_end.m"
    {
#line 409 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_5, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_8);
    }
#line 410 "mercury_compile_mlds_back_end.m"
    {
#line 410 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_5, (MR_Integer) 54, &top_level__mercury_compile_mlds_back_end__Stats_9);
    }
#line 412 "mercury_compile_mlds_back_end.m"
    {
#line 412 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_8, (MR_String) "% Converting MLDS to IL...\n");
    }
#line 413 "mercury_compile_mlds_back_end.m"
    {
#line 413 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_ilasm__output_mlds_via_ilasm_4_p_0(top_level__mercury_compile_mlds_back_end__Globals_5, top_level__mercury_compile_mlds_back_end__MLDS_6);
    }
#line 414 "mercury_compile_mlds_back_end.m"
    {
#line 414 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_8, (MR_String) "% Finished converting MLDS to IL.\n");
    }
#line 415 "mercury_compile_mlds_back_end.m"
    {
#line 415 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_9);
#line 415 "mercury_compile_mlds_back_end.m"
      return;
    }
#line 408 "mercury_compile_mlds_back_end.m"
  }
#line 47 "mercury_compile_mlds_back_end.m"
}

#line 45 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_csharp_4_p_0(
#line 45 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_5,
#line 45 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_6)
#line 45 "mercury_compile_mlds_back_end.m"
{
#line 398 "mercury_compile_mlds_back_end.m"
  {
#line 398 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 398 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_8;
#line 398 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_9;
#line 398 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_10;

#line 399 "mercury_compile_mlds_back_end.m"
    {
#line 399 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, &top_level__mercury_compile_mlds_back_end__Globals_8);
    }
#line 400 "mercury_compile_mlds_back_end.m"
    {
#line 400 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_9);
    }
#line 401 "mercury_compile_mlds_back_end.m"
    {
#line 401 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 54, &top_level__mercury_compile_mlds_back_end__Stats_10);
    }
#line 403 "mercury_compile_mlds_back_end.m"
    {
#line 403 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_9, (MR_String) "% Converting MLDS to C#...\n");
    }
#line 404 "mercury_compile_mlds_back_end.m"
    {
#line 404 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_cs__output_csharp_mlds_4_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, top_level__mercury_compile_mlds_back_end__MLDS_6);
    }
#line 405 "mercury_compile_mlds_back_end.m"
    {
#line 405 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_9, (MR_String) "% Finished converting MLDS to C#.\n");
    }
#line 406 "mercury_compile_mlds_back_end.m"
    {
#line 406 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_10);
#line 406 "mercury_compile_mlds_back_end.m"
      return;
    }
#line 398 "mercury_compile_mlds_back_end.m"
  }
#line 45 "mercury_compile_mlds_back_end.m"
}

#line 43 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_java_4_p_0(
#line 43 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_5,
#line 43 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_6)
#line 43 "mercury_compile_mlds_back_end.m"
{
#line 388 "mercury_compile_mlds_back_end.m"
  {
#line 388 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 388 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_8;
#line 388 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_9;
#line 388 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_10;

#line 389 "mercury_compile_mlds_back_end.m"
    {
#line 389 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, &top_level__mercury_compile_mlds_back_end__Globals_8);
    }
#line 390 "mercury_compile_mlds_back_end.m"
    {
#line 390 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_9);
    }
#line 391 "mercury_compile_mlds_back_end.m"
    {
#line 391 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_8, (MR_Integer) 54, &top_level__mercury_compile_mlds_back_end__Stats_10);
    }
#line 393 "mercury_compile_mlds_back_end.m"
    {
#line 393 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_9, (MR_String) "% Converting MLDS to Java...\n");
    }
#line 394 "mercury_compile_mlds_back_end.m"
    {
#line 394 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_java__output_java_mlds_4_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, top_level__mercury_compile_mlds_back_end__MLDS_6);
    }
#line 395 "mercury_compile_mlds_back_end.m"
    {
#line 395 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_9, (MR_String) "% Finished converting MLDS to Java.\n");
    }
#line 396 "mercury_compile_mlds_back_end.m"
    {
#line 396 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_10);
#line 396 "mercury_compile_mlds_back_end.m"
      return;
    }
#line 388 "mercury_compile_mlds_back_end.m"
  }
#line 43 "mercury_compile_mlds_back_end.m"
}

#line 41 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_4_p_0(
#line 41 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_5,
#line 41 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_6)
#line 41 "mercury_compile_mlds_back_end.m"
{
#line 379 "mercury_compile_mlds_back_end.m"
  {
#line 379 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 379 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_8;
#line 379 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_9;

#line 380 "mercury_compile_mlds_back_end.m"
    {
#line 380 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_5, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_8);
    }
#line 381 "mercury_compile_mlds_back_end.m"
    {
#line 381 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_5, (MR_Integer) 54, &top_level__mercury_compile_mlds_back_end__Stats_9);
    }
#line 383 "mercury_compile_mlds_back_end.m"
    {
#line 383 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_8, (MR_String) "% Converting MLDS to C...\n");
    }
#line 384 "mercury_compile_mlds_back_end.m"
    {
#line 384 "mercury_compile_mlds_back_end.m"
      ml_backend__mlds_to_c__output_c_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__MLDS_6, top_level__mercury_compile_mlds_back_end__Globals_5, (MR_String) "");
    }
#line 385 "mercury_compile_mlds_back_end.m"
    {
#line 385 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_8, (MR_String) "% Finished converting MLDS to C.\n");
    }
#line 386 "mercury_compile_mlds_back_end.m"
    {
#line 386 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_9);
#line 386 "mercury_compile_mlds_back_end.m"
      return;
    }
#line 379 "mercury_compile_mlds_back_end.m"
  }
#line 41 "mercury_compile_mlds_back_end.m"
}

#line 260 "mercury_compile_mlds_back_end.m"
static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
#line 260 "mercury_compile_mlds_back_end.m"
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
#line 260 "mercury_compile_mlds_back_end.m"
{
#line 260 "mercury_compile_mlds_back_end.m"
  {
#line 260 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
#line 260 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

#line 260 "mercury_compile_mlds_back_end.m"
    {
#line 260 "mercury_compile_mlds_back_end.m"
      hlds__mark_static_terms__mark_static_terms_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
#line 260 "mercury_compile_mlds_back_end.m"
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
#line 260 "mercury_compile_mlds_back_end.m"
  }
#line 260 "mercury_compile_mlds_back_end.m"
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
#line 253 "mercury_compile_mlds_back_end.m"
  {
#line 253 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 253 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
#line 253 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SGCells_12;

#line 254 "mercury_compile_mlds_back_end.m"
    {
#line 254 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
#line 255 "mercury_compile_mlds_back_end.m"
    {
#line 255 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 447, &top_level__mercury_compile_mlds_back_end__SGCells_12);
    }
#line 263 "mercury_compile_mlds_back_end.m"
    if ((top_level__mercury_compile_mlds_back_end__SGCells_12 == (MR_Integer) 0))
#line 264 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13;
#line 263 "mercury_compile_mlds_back_end.m"
    else
#line 257 "mercury_compile_mlds_back_end.m"
      {
#line 258 "mercury_compile_mlds_back_end.m"
        {
#line 258 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Marking static ground terms...\n");
        }
#line 259 "mercury_compile_mlds_back_end.m"
        {
#line 259 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
        }
#line 260 "mercury_compile_mlds_back_end.m"
        {
#line 260 "mercury_compile_mlds_back_end.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_3[1], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14);
        }
#line 261 "mercury_compile_mlds_back_end.m"
        {
#line 261 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
        }
#line 262 "mercury_compile_mlds_back_end.m"
        {
#line 262 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
#line 262 "mercury_compile_mlds_back_end.m"
          return;
        }
#line 257 "mercury_compile_mlds_back_end.m"
      }
#line 253 "mercury_compile_mlds_back_end.m"
  }
#line 38 "mercury_compile_mlds_back_end.m"
}

#line 107 "mercury_compile_mlds_back_end.m"
static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1(
#line 107 "mercury_compile_mlds_back_end.m"
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg)
#line 107 "mercury_compile_mlds_back_end.m"
{
#line 107 "mercury_compile_mlds_back_end.m"
  {
#line 107 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 107 "mercury_compile_mlds_back_end.m"
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;

#line 107 "mercury_compile_mlds_back_end.m"
    {
#line 107 "mercury_compile_mlds_back_end.m"
      return top_level__mercury_compile_mlds_back_end__succeeded = top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__107__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))));
    }
#line 107 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__succeeded;
#line 107 "mercury_compile_mlds_back_end.m"
  }
#line 107 "mercury_compile_mlds_back_end.m"
}

#line 35 "mercury_compile_mlds_back_end.m"
void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0(
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_22,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_23,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_24,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_25,
#line 35 "mercury_compile_mlds_back_end.m"
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_26)
#line 35 "mercury_compile_mlds_back_end.m"
{
#line 100 "mercury_compile_mlds_back_end.m"
  {
#line 100 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_12;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_13;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_14;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__SimplifySpecs_15;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__WarnTailCalls_17;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Optimize_18;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__GC_20;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__NestedFuncs_21;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_33_33;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_36_36;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_40_40;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_44_44;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_46_46;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_50_50;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_52_52;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_56_56;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_58_58;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_62_62;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_64_64;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_68_68;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_73_73;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_86_86;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127;
#line 100 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_138_138;

#line 101 "mercury_compile_mlds_back_end.m"
    {
#line 101 "mercury_compile_mlds_back_end.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_mlds_back_end__Globals_12);
    }
#line 102 "mercury_compile_mlds_back_end.m"
    {
#line 102 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 44, &top_level__mercury_compile_mlds_back_end__Verbose_13);
    }
#line 103 "mercury_compile_mlds_back_end.m"
    {
#line 103 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 54, &top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 105 "mercury_compile_mlds_back_end.m"
    {
#line 105 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 4, top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_33_33, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_mlds_back_end__SimplifySpecs_15);
    }
#line 107 "mercury_compile_mlds_back_end.m"
    {
#line 107 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_40_40 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__SimplifySpecs_15);
    }
#line 107 "mercury_compile_mlds_back_end.m"
    {
#line 107 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 107 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_36_36, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0]));
#line 107 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_36_36, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__mlds_backend_7_p_0_1));
#line 107 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 107 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_36_36, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__V_40_40));
#line 107 "mercury_compile_mlds_back_end.m"
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__V_36_36, 4) = ((MR_Box) ((MR_Integer) 0));
#line 107 "mercury_compile_mlds_back_end.m"
    }
#line 107 "mercury_compile_mlds_back_end.m"
    {
#line 107 "mercury_compile_mlds_back_end.m"
      mercury__require__expect_4_p_0(top_level__mercury_compile_mlds_back_end__V_36_36, (MR_String) "top_level.mercury_compile_mlds_back_end", (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/7", (MR_String) "simplify has errors");
    }
#line 109 "mercury_compile_mlds_back_end.m"
    {
#line 109 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_33_33, (MR_Integer) 405, (MR_String) "ml_backend_simplify", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_25, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_44_44);
    }
#line 115 "mercury_compile_mlds_back_end.m"
    {
#line 115 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_33_33, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_46_46);
    }
#line 116 "mercury_compile_mlds_back_end.m"
    {
#line 116 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_46_46, (MR_Integer) 410, (MR_String) "add_trail_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_44_44, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_50_50);
    }
#line 118 "mercury_compile_mlds_back_end.m"
    {
#line 118 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_46_46, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_52_52);
    }
#line 119 "mercury_compile_mlds_back_end.m"
    {
#line 119 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_52_52, (MR_Integer) 415, (MR_String) "add_heap_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_50_50, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_56_56);
    }
#line 121 "mercury_compile_mlds_back_end.m"
    {
#line 121 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_52_52, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_58_58);
    }
#line 122 "mercury_compile_mlds_back_end.m"
    {
#line 122 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_58_58, (MR_Integer) 420, (MR_String) "mark_static", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_56_56, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_62_62);
    }
#line 128 "mercury_compile_mlds_back_end.m"
    {
#line 128 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, top_level__mercury_compile_mlds_back_end__Stats_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_58_58, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_64_64);
    }
#line 129 "mercury_compile_mlds_back_end.m"
    {
#line 129 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_64_64, (MR_Integer) 425, (MR_String) "args_to_regs", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_62_62, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_68_68);
    }
#line 131 "mercury_compile_mlds_back_end.m"
    {
#line 131 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Converting HLDS to MLDS...\n");
    }
#line 132 "mercury_compile_mlds_back_end.m"
    {
#line 132 "mercury_compile_mlds_back_end.m"
      ml_backend__ml_proc_gen__ml_code_gen_3_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_64_64, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_23, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_73_73);
    }
#line 133 "mercury_compile_mlds_back_end.m"
    {
#line 133 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
    }
#line 134 "mercury_compile_mlds_back_end.m"
    {
#line 134 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 135 "mercury_compile_mlds_back_end.m"
    {
#line 135 "mercury_compile_mlds_back_end.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_23, (MR_Integer) 499, (MR_String) "final", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_68_68, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_26);
    }
#line 136 "mercury_compile_mlds_back_end.m"
    {
#line 136 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_73_73, (MR_Integer) 0, (MR_String) "initial");
    }
#line 138 "mercury_compile_mlds_back_end.m"
    {
#line 138 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Generating RTTI data...\n");
    }
#line 139 "mercury_compile_mlds_back_end.m"
    {
#line 139 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_3_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_23, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_73_73, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_86_86);
    }
#line 140 "mercury_compile_mlds_back_end.m"
    {
#line 140 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
    }
#line 141 "mercury_compile_mlds_back_end.m"
    {
#line 141 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 142 "mercury_compile_mlds_back_end.m"
    {
#line 142 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_86_86, (MR_Integer) 10, (MR_String) "rtti");
    }
#line 147 "mercury_compile_mlds_back_end.m"
    {
#line 147 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 454, &top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16);
    }
#line 153 "mercury_compile_mlds_back_end.m"
    if ((top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16 == (MR_Integer) 0))
#line 154 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_86_86;
#line 153 "mercury_compile_mlds_back_end.m"
    else
#line 149 "mercury_compile_mlds_back_end.m"
      {
#line 150 "mercury_compile_mlds_back_end.m"
        {
#line 150 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Detecting tail calls...\n");
        }
#line 151 "mercury_compile_mlds_back_end.m"
        {
#line 151 "mercury_compile_mlds_back_end.m"
          ml_backend__ml_tailcall__ml_mark_tailcalls_4_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_86_86, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96);
        }
#line 152 "mercury_compile_mlds_back_end.m"
        {
#line 152 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 149 "mercury_compile_mlds_back_end.m"
      }
#line 156 "mercury_compile_mlds_back_end.m"
    {
#line 156 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 157 "mercury_compile_mlds_back_end.m"
    {
#line 157 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96, (MR_Integer) 20, (MR_String) "tailcalls");
    }
#line 160 "mercury_compile_mlds_back_end.m"
    {
#line 160 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 25, &top_level__mercury_compile_mlds_back_end__WarnTailCalls_17);
    }
#line 163 "mercury_compile_mlds_back_end.m"
    top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_16 == (MR_Integer) 1);
#line 163 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 164 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__WarnTailCalls_17 == (MR_Integer) 1);
#line 170 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 167 "mercury_compile_mlds_back_end.m"
      {
#line 166 "mercury_compile_mlds_back_end.m"
        {
#line 166 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Warning about non-tail recursive calls...\n");
        }
#line 168 "mercury_compile_mlds_back_end.m"
        {
#line 168 "mercury_compile_mlds_back_end.m"
          ml_backend__ml_tailcall__ml_warn_tailcalls_4_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96);
        }
#line 169 "mercury_compile_mlds_back_end.m"
        {
#line 169 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 167 "mercury_compile_mlds_back_end.m"
      }
#line 170 "mercury_compile_mlds_back_end.m"
    else
#line 169 "mercury_compile_mlds_back_end.m"
      {
#line 169 "mercury_compile_mlds_back_end.m"
      }
#line 173 "mercury_compile_mlds_back_end.m"
    {
#line 173 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 183 "mercury_compile_mlds_back_end.m"
    {
#line 183 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 460, &top_level__mercury_compile_mlds_back_end__Optimize_18);
    }
#line 191 "mercury_compile_mlds_back_end.m"
    if ((top_level__mercury_compile_mlds_back_end__Optimize_18 == (MR_Integer) 0))
#line 192 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96;
#line 191 "mercury_compile_mlds_back_end.m"
    else
#line 185 "mercury_compile_mlds_back_end.m"
      {
#line 185 "mercury_compile_mlds_back_end.m"
        MR_Word top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_19;

#line 186 "mercury_compile_mlds_back_end.m"
        {
#line 186 "mercury_compile_mlds_back_end.m"
          libs__globals__set_option_4_p_0((MR_Integer) 455, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_3[0]), top_level__mercury_compile_mlds_back_end__Globals_12, &top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_19);
        }
#line 188 "mercury_compile_mlds_back_end.m"
        {
#line 188 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Optimizing MLDS...\n");
        }
#line 189 "mercury_compile_mlds_back_end.m"
        {
#line 189 "mercury_compile_mlds_back_end.m"
          ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_19, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_96_96, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117);
        }
#line 190 "mercury_compile_mlds_back_end.m"
        {
#line 190 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 185 "mercury_compile_mlds_back_end.m"
      }
#line 194 "mercury_compile_mlds_back_end.m"
    {
#line 194 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 195 "mercury_compile_mlds_back_end.m"
    {
#line 195 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117, (MR_Integer) 25, (MR_String) "optimize1");
    }
#line 204 "mercury_compile_mlds_back_end.m"
    {
#line 204 "mercury_compile_mlds_back_end.m"
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, &top_level__mercury_compile_mlds_back_end__GC_20);
    }
#line 211 "mercury_compile_mlds_back_end.m"
    if ((top_level__mercury_compile_mlds_back_end__GC_20 == (MR_Integer) 6))
#line 206 "mercury_compile_mlds_back_end.m"
      {
#line 207 "mercury_compile_mlds_back_end.m"
        {
#line 207 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Threading GC stack frames...\n");
        }
#line 209 "mercury_compile_mlds_back_end.m"
        {
#line 209 "mercury_compile_mlds_back_end.m"
          ml_backend__ml_elim_nested__ml_elim_nested_4_p_1((MR_Integer) 1, top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127);
        }
#line 210 "mercury_compile_mlds_back_end.m"
        {
#line 210 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 206 "mercury_compile_mlds_back_end.m"
      }
#line 211 "mercury_compile_mlds_back_end.m"
    else
#line 211 "mercury_compile_mlds_back_end.m"
      if ((top_level__mercury_compile_mlds_back_end__GC_20 == (MR_Integer) 0))
#line 212 "mercury_compile_mlds_back_end.m"
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 211 "mercury_compile_mlds_back_end.m"
      else
#line 211 "mercury_compile_mlds_back_end.m"
        if ((top_level__mercury_compile_mlds_back_end__GC_20 == (MR_Integer) 2))
#line 214 "mercury_compile_mlds_back_end.m"
          top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 211 "mercury_compile_mlds_back_end.m"
        else
#line 211 "mercury_compile_mlds_back_end.m"
          if ((top_level__mercury_compile_mlds_back_end__GC_20 == (MR_Integer) 3))
#line 215 "mercury_compile_mlds_back_end.m"
            top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 211 "mercury_compile_mlds_back_end.m"
          else
#line 211 "mercury_compile_mlds_back_end.m"
            if ((top_level__mercury_compile_mlds_back_end__GC_20 == (MR_Integer) 4))
#line 216 "mercury_compile_mlds_back_end.m"
              top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 211 "mercury_compile_mlds_back_end.m"
            else
#line 211 "mercury_compile_mlds_back_end.m"
              if ((top_level__mercury_compile_mlds_back_end__GC_20 == (MR_Integer) 5))
#line 217 "mercury_compile_mlds_back_end.m"
                top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 211 "mercury_compile_mlds_back_end.m"
              else
#line 213 "mercury_compile_mlds_back_end.m"
                top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_117_117;
#line 220 "mercury_compile_mlds_back_end.m"
    {
#line 220 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 221 "mercury_compile_mlds_back_end.m"
    {
#line 221 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127, (MR_Integer) 30, (MR_String) "gc_frames");
    }
#line 223 "mercury_compile_mlds_back_end.m"
    {
#line 223 "mercury_compile_mlds_back_end.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, (MR_Integer) 252, &top_level__mercury_compile_mlds_back_end__NestedFuncs_21);
    }
#line 229 "mercury_compile_mlds_back_end.m"
    if ((top_level__mercury_compile_mlds_back_end__NestedFuncs_21 == (MR_Integer) 0))
#line 225 "mercury_compile_mlds_back_end.m"
      {
#line 226 "mercury_compile_mlds_back_end.m"
        {
#line 226 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Flattening nested functions...\n");
        }
#line 227 "mercury_compile_mlds_back_end.m"
        {
#line 227 "mercury_compile_mlds_back_end.m"
          ml_backend__ml_elim_nested__ml_elim_nested_4_p_0((MR_Integer) 0, top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_138_138);
        }
#line 228 "mercury_compile_mlds_back_end.m"
        {
#line 228 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 225 "mercury_compile_mlds_back_end.m"
      }
#line 229 "mercury_compile_mlds_back_end.m"
    else
#line 230 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_138_138 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_127_127;
#line 232 "mercury_compile_mlds_back_end.m"
    {
#line 232 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 233 "mercury_compile_mlds_back_end.m"
    {
#line 233 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_138_138, (MR_Integer) 35, (MR_String) "nested_funcs");
    }
#line 243 "mercury_compile_mlds_back_end.m"
    if ((top_level__mercury_compile_mlds_back_end__Optimize_18 == (MR_Integer) 0))
#line 244 "mercury_compile_mlds_back_end.m"
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_24 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_138_138;
#line 243 "mercury_compile_mlds_back_end.m"
    else
#line 239 "mercury_compile_mlds_back_end.m"
      {
#line 240 "mercury_compile_mlds_back_end.m"
        {
#line 240 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% Optimizing MLDS again...\n");
        }
#line 241 "mercury_compile_mlds_back_end.m"
        {
#line 241 "mercury_compile_mlds_back_end.m"
          ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_138_138, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_24);
        }
#line 242 "mercury_compile_mlds_back_end.m"
        {
#line 242 "mercury_compile_mlds_back_end.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_13, (MR_String) "% done.\n");
        }
#line 239 "mercury_compile_mlds_back_end.m"
      }
#line 246 "mercury_compile_mlds_back_end.m"
    {
#line 246 "mercury_compile_mlds_back_end.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_14);
    }
#line 247 "mercury_compile_mlds_back_end.m"
    {
#line 247 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_24, (MR_Integer) 40, (MR_String) "optimize2");
    }
#line 249 "mercury_compile_mlds_back_end.m"
    {
#line 249 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_12, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_24, (MR_Integer) 99, (MR_String) "final");
#line 249 "mercury_compile_mlds_back_end.m"
      return;
    }
#line 100 "mercury_compile_mlds_back_end.m"
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
#line 88 "mercury_compile_mlds_back_end.m"
  {
#line 88 "mercury_compile_mlds_back_end.m"
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
#line 88 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__Defns_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 4)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 0)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 1)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 2)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 3)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 5)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 6)));
#line 90 "mercury_compile_mlds_back_end.m"
    MR_Word top_level__mercury_compile_mlds_back_end__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 7)));

#line 91 "mercury_compile_mlds_back_end.m"
    {
#line 91 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__succeeded = ml_backend__ml_util__defns_contain_main_1_p_0(top_level__mercury_compile_mlds_back_end__Defns_4);
    }
#line 88 "mercury_compile_mlds_back_end.m"
    if (top_level__mercury_compile_mlds_back_end__succeeded)
#line 88 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 0;
#line 88 "mercury_compile_mlds_back_end.m"
    else
#line 88 "mercury_compile_mlds_back_end.m"
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 1;
#line 88 "mercury_compile_mlds_back_end.m"
    return top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
#line 88 "mercury_compile_mlds_back_end.m"
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
