/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version rotd-2017-07-31
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
#include "hlds.make_hlds.mih"
#include "hlds.mark_static_terms.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
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
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
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




static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__107__1_2_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_43,
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_44);

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__dump_mlds_5_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_6,
  MR_String top_level__mercury_compile_mlds_back_end__DumpFile_7,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_5,
  MR_Word top_level__mercury_compile_mlds_back_end__Target_6,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_17);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[3][2];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[1][6];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[2][3];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[3][1];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][8];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[1][5];




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

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[1][6] = {
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

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_3[0]))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_3[1]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][8] = {
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

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__107__1_2_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__1_43,
  MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_44)
{
  {
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__HeadVar__1_43 == top_level__mercury_compile_mlds_back_end__HeadVar__2_44);

    return top_level__mercury_compile_mlds_back_end__succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_6,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_11;
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Verbose_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 66, &top_level__mercury_compile_mlds_back_end__Stats_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Converting MLDS to C#...\n");
    }
    {
      ml_backend__mlds_to_cs__output_csharp_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Finished converting MLDS to C#.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_12);
    }
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_6,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_11;
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Verbose_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 66, &top_level__mercury_compile_mlds_back_end__Stats_12);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Converting MLDS to Java...\n");
    }
    {
      ml_backend__mlds_to_java__output_java_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_6, top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_11, (MR_String) "% Finished converting MLDS to Java.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_12);
    }
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_6,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_7,
  MR_Word * top_level__mercury_compile_mlds_back_end__Succeeded_8)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_10;
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_11;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Verbose_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 66, &top_level__mercury_compile_mlds_back_end__Stats_11);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Converting MLDS to C...\n");
    }
    {
      ml_backend__mlds_to_c__output_c_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_7, top_level__mercury_compile_mlds_back_end__Globals_6, (MR_String) "", top_level__mercury_compile_mlds_back_end__Succeeded_8);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Finished converting MLDS to C.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_11);
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg)
{
  {
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;

    {
      top_level__mercury_compile_mlds_back_end__succeeded = top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__107__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))));
    }
    return top_level__mercury_compile_mlds_back_end__succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_25,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_26,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_27,
  MR_Word * top_level__mercury_compile_mlds_back_end__Specs_11,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_28,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_29)
{
  {
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_14;
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_15;
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_16;
    MR_Word top_level__mercury_compile_mlds_back_end__SimplifySpecs_17;
    MR_Word top_level__mercury_compile_mlds_back_end__Target_18;
    MR_Word top_level__mercury_compile_mlds_back_end__MLDS_Target_19;
    MR_Word top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_20;
    MR_Word top_level__mercury_compile_mlds_back_end__Optimize_21;
    MR_Word top_level__mercury_compile_mlds_back_end__GC_23;
    MR_Word top_level__mercury_compile_mlds_back_end__NestedFuncs_24;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_36_36;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_39;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_43;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_47_47;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_49_49;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_53_53;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_55_55;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_59_59;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_61_61;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_65_65;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_67_67;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_71_71;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_77_77;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_91_91;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_101_101;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124;
    MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_135_135;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_mlds_back_end__Globals_14);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Verbose_15);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, (MR_Integer) 66, &top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 4, top_level__mercury_compile_mlds_back_end__Verbose_15, top_level__mercury_compile_mlds_back_end__Stats_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_25, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_36_36, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_mlds_back_end__SimplifySpecs_17);
    }
    {
      top_level__mercury_compile_mlds_back_end__Var_43 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__SimplifySpecs_17);
    }
    {
      top_level__mercury_compile_mlds_back_end__Var_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_39, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_39, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_39, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_39, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_43));
      MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_39, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    {
      mercury__require__expect_4_p_0(top_level__mercury_compile_mlds_back_end__Var_39, (MR_String) "top_level.mercury_compile_mlds_back_end", (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/8", (MR_String) "simplify has errors");
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_36_36, (MR_Integer) 405, (MR_String) "ml_backend_simplify", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_0_28, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_47_47);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, top_level__mercury_compile_mlds_back_end__Stats_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_49_49);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_49_49, (MR_Integer) 410, (MR_String) "add_trail_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_47_47, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_53_53);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, top_level__mercury_compile_mlds_back_end__Stats_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_49_49, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_55_55);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_55_55, (MR_Integer) 415, (MR_String) "add_heap_ops", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_53_53, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_59_59);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, top_level__mercury_compile_mlds_back_end__Stats_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_55_55, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_61_61);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_61_61, (MR_Integer) 420, (MR_String) "mark_static", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_59_59, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_65_65);
    }
    {
      top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, top_level__mercury_compile_mlds_back_end__Stats_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_61_61, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_67_67);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_67_67, (MR_Integer) 425, (MR_String) "args_to_regs", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_65_65, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_71_71);
    }
    {
      libs__globals__get_target_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, &top_level__mercury_compile_mlds_back_end__Target_18);
    }
    switch (top_level__mercury_compile_mlds_back_end__Target_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        top_level__mercury_compile_mlds_back_end__MLDS_Target_19 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_mlds_back_end__MLDS_Target_19 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        {
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/8", (MR_String) "MLDS cannot target Erlang");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        top_level__mercury_compile_mlds_back_end__MLDS_Target_19 = (MR_Integer) 2;
        break;
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Converting HLDS to MLDS...\n");
    }
    {
      ml_backend__ml_proc_gen__ml_code_gen_4_p_0(top_level__mercury_compile_mlds_back_end__MLDS_Target_19, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_77_77, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_67_67, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_26);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_26, (MR_Integer) 499, (MR_String) "final", top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_71_71, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_DumpInfo_29);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_77_77, (MR_Integer) 0, (MR_String) "initial");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Generating RTTI data...\n");
    }
    {
      top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(*top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_26, top_level__mercury_compile_mlds_back_end__MLDS_Target_19, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_77_77, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_91_91);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_91_91, (MR_Integer) 10, (MR_String) "rtti");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, (MR_Integer) 464, &top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_20);
    }
    switch (top_level__mercury_compile_mlds_back_end__OptimizeTailCalls_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *top_level__mercury_compile_mlds_back_end__Specs_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_101_101 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_91_91;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Detecting tail calls...\n");
          }
          {
            ml_backend__ml_tailcall__ml_mark_tailcalls_5_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_26, top_level__mercury_compile_mlds_back_end__Specs_11, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_91_91, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_101_101);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_101_101, (MR_Integer) 20, (MR_String) "tailcalls");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, (MR_Integer) 470, &top_level__mercury_compile_mlds_back_end__Optimize_21);
    }
    switch (top_level__mercury_compile_mlds_back_end__Optimize_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_101_101;
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_22;

          {
            libs__globals__set_option_4_p_0((MR_Integer) 465, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_4[2]), top_level__mercury_compile_mlds_back_end__Globals_14, &top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_22);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Optimizing MLDS...\n");
          }
          {
            ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__NoInitOptGlobals_22, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_101_101, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114, (MR_Integer) 25, (MR_String) "optimize1");
    }
    {
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, &top_level__mercury_compile_mlds_back_end__GC_23);
    }
    switch (top_level__mercury_compile_mlds_back_end__GC_23) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Threading GC stack frames...\n");
          }
          {
            ml_backend__ml_elim_nested__ml_elim_nested_5_p_1((MR_Integer) 1, top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__MLDS_Target_19, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
          }
        }
        break;
      case (MR_Integer) 0:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114;
        break;
      case (MR_Integer) 2:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114;
        break;
      case (MR_Integer) 3:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114;
        break;
      case (MR_Integer) 4:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114;
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_114_114;
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124, (MR_Integer) 30, (MR_String) "gc_frames");
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, (MR_Integer) 266, &top_level__mercury_compile_mlds_back_end__NestedFuncs_24);
    }
    switch (top_level__mercury_compile_mlds_back_end__NestedFuncs_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Flattening nested functions...\n");
          }
          {
            ml_backend__ml_elim_nested__ml_elim_nested_5_p_0((MR_Integer) 0, top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__MLDS_Target_19, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124, &top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_135_135);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
          }
        }
        break;
      case (MR_Integer) 1:
        top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_135_135 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_124_124;
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_135_135, (MR_Integer) 35, (MR_String) "nested_funcs");
    }
    switch (top_level__mercury_compile_mlds_back_end__Optimize_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_27 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_135_135;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% Optimizing MLDS again...\n");
          }
          {
            ml_backend__ml_optimize__mlds_optimize_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_135_135, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_27);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_15, (MR_String) "% done.\n");
          }
        }
        break;
    }
    {
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_16);
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_27, (MR_Integer) 40, (MR_String) "optimize2");
    }
    {
      top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__Globals_14, *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_27, (MR_Integer) 99, (MR_String) "final");
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_7,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8,
  MR_Integer top_level__mercury_compile_mlds_back_end__StageNum_9,
  MR_String top_level__mercury_compile_mlds_back_end__StageName_10)
{
  {
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_12;
    MR_Word top_level__mercury_compile_mlds_back_end__DumpStages_13;
    MR_Word top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14;
    MR_Word top_level__mercury_compile_mlds_back_end__DumpPredNames_15;
    MR_String top_level__mercury_compile_mlds_back_end__StageNumStr_16;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Verbose_12);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 168, &top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 170, &top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
    {
      libs__globals__lookup_accumulating_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 169, &top_level__mercury_compile_mlds_back_end__DumpPredNames_15);
    }
    {
      top_level__mercury_compile_mlds_back_end__StageNumStr_16 = hlds__passes_aux__stage_num_str_1_f_0(top_level__mercury_compile_mlds_back_end__StageNum_9);
    }
    {
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_16, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__DumpStages_13);
    }
    if (top_level__mercury_compile_mlds_back_end__succeeded)
    {
      MR_String top_level__mercury_compile_mlds_back_end__DumpSuffix_17;
      MR_String top_level__mercury_compile_mlds_back_end__Var_34;
      MR_String top_level__mercury_compile_mlds_back_end__Var_35;

      {
        libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out MLDS as C...\n");
      }
      {
        libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_35 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_34 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_16, top_level__mercury_compile_mlds_back_end__Var_35);
      }
      {
        top_level__mercury_compile_mlds_back_end__DumpSuffix_17 = mercury__string__f_43_43_2_f_0((MR_String) "_dump.", top_level__mercury_compile_mlds_back_end__Var_34);
      }
      if ((top_level__mercury_compile_mlds_back_end__DumpPredNames_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word top_level__mercury_compile_mlds_back_end___Succeeded_18;

        {
          ml_backend__mlds_to_c__output_c_mlds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_8, top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__DumpSuffix_17, &top_level__mercury_compile_mlds_back_end___Succeeded_18);
        }
      }
      else
        {
          ml_backend__mlds_to_c__output_c_dump_preds_6_p_0(top_level__mercury_compile_mlds_back_end__MLDS_8, top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__DumpSuffix_17, top_level__mercury_compile_mlds_back_end__DumpPredNames_15);
        }
      {
        libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
      }
    }
    else
    {
    }
    {
      top_level__mercury_compile_mlds_back_end__succeeded = hlds__passes_aux__should_dump_stage_4_p_0(top_level__mercury_compile_mlds_back_end__StageNum_9, top_level__mercury_compile_mlds_back_end__StageNumStr_16, top_level__mercury_compile_mlds_back_end__StageName_10, top_level__mercury_compile_mlds_back_end__VerboseDumpStages_14);
    }
    if (top_level__mercury_compile_mlds_back_end__succeeded)
    {
      MR_Word top_level__mercury_compile_mlds_back_end__ModuleName_21;
      MR_String top_level__mercury_compile_mlds_back_end__BaseFileName_22;
      MR_String top_level__mercury_compile_mlds_back_end__DumpFile_23;
      MR_String top_level__mercury_compile_mlds_back_end__Var_46;
      MR_String top_level__mercury_compile_mlds_back_end__Var_48;
      MR_String top_level__mercury_compile_mlds_back_end__Var_49;

      {
        libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% Dumping out raw MLDS...\n");
      }
      {
        top_level__mercury_compile_mlds_back_end__ModuleName_21 = ml_backend__mlds__mlds_get_module_name_1_f_0(top_level__mercury_compile_mlds_back_end__MLDS_8);
      }
      {
        parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, (MR_Integer) 0, (MR_String) ".mlds_dump", top_level__mercury_compile_mlds_back_end__ModuleName_21, &top_level__mercury_compile_mlds_back_end__BaseFileName_22);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_49 = mercury__string__f_43_43_2_f_0((MR_String) "-", top_level__mercury_compile_mlds_back_end__StageName_10);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_48 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__StageNumStr_16, top_level__mercury_compile_mlds_back_end__Var_49);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_46 = mercury__string__f_43_43_2_f_0((MR_String) ".", top_level__mercury_compile_mlds_back_end__Var_48);
      }
      {
        top_level__mercury_compile_mlds_back_end__DumpFile_23 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__BaseFileName_22, top_level__mercury_compile_mlds_back_end__Var_46);
      }
      {
        top_level__mercury_compile_mlds_back_end__dump_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__Globals_7, top_level__mercury_compile_mlds_back_end__DumpFile_23, top_level__mercury_compile_mlds_back_end__MLDS_8);
      }
      {
        libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_12, (MR_String) "% done.\n");
      }
    }
    else
    {
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__dump_mlds_5_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Globals_6,
  MR_String top_level__mercury_compile_mlds_back_end__DumpFile_7,
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_8)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__Verbose_10;
    MR_Word top_level__mercury_compile_mlds_back_end__Stats_11;
    MR_Word top_level__mercury_compile_mlds_back_end__Res_12;

    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 56, &top_level__mercury_compile_mlds_back_end__Verbose_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_6, (MR_Integer) 66, &top_level__mercury_compile_mlds_back_end__Stats_11);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "% Dumping out MLDS to \140");
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, top_level__mercury_compile_mlds_back_end__DumpFile_7);
    }
    {
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "\'...");
    }
    {
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10);
    }
    {
      mercury__io__open_output_4_p_0(top_level__mercury_compile_mlds_back_end__DumpFile_7, &top_level__mercury_compile_mlds_back_end__Res_12);
    }
    if (((MR_tag((MR_Word) top_level__mercury_compile_mlds_back_end__Res_12)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word top_level__mercury_compile_mlds_back_end__IOError_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_mlds_back_end__Res_12, (MR_Integer) 0)));
      MR_String top_level__mercury_compile_mlds_back_end__ErrorMessage_17;
      MR_String top_level__mercury_compile_mlds_back_end__Var_32;
      MR_String top_level__mercury_compile_mlds_back_end__Var_33;
      MR_String top_level__mercury_compile_mlds_back_end__Var_35;

      {
        libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) "\n");
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_35 = mercury__io__error_message_1_f_0(top_level__mercury_compile_mlds_back_end__IOError_16);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", top_level__mercury_compile_mlds_back_end__Var_35);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_32 = mercury__string__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__DumpFile_7, top_level__mercury_compile_mlds_back_end__Var_33);
      }
      {
        top_level__mercury_compile_mlds_back_end__ErrorMessage_17 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", top_level__mercury_compile_mlds_back_end__Var_32);
      }
      {
        libs__file_util__report_error_3_p_0(top_level__mercury_compile_mlds_back_end__ErrorMessage_17);
      }
    }
    else
    {
      MR_Word top_level__mercury_compile_mlds_back_end__FileStream_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Res_12, (MR_Integer) 0)));
      MR_Word top_level__mercury_compile_mlds_back_end__OutputStream_14;
      MR_Word top_level__mercury_compile_mlds_back_end__Var_39;
      MR_Word top_level__mercury_compile_mlds_back_end__Var_15;

      {
        mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__FileStream_13, &top_level__mercury_compile_mlds_back_end__OutputStream_14);
      }
      {
        top_level__mercury_compile_mlds_back_end__Var_39 = mercury__pprint__to_doc_1_f_0((MR_Word) &ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0, ((MR_Box) (top_level__mercury_compile_mlds_back_end__MLDS_8)));
      }
      {
        mercury__pprint__write_4_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_1[0], (MR_Integer) 80, ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_39)));
      }
      {
        mercury__io__nl_2_p_0();
      }
      {
        mercury__io__set_output_stream_4_p_0(top_level__mercury_compile_mlds_back_end__OutputStream_14, &top_level__mercury_compile_mlds_back_end__Var_15);
      }
      {
        mercury__io__close_output_3_p_0(top_level__mercury_compile_mlds_back_end__FileStream_13);
      }
      {
        libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_10, (MR_String) " done.\n");
      }
      {
        libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_11);
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__HLDS_5,
  MR_Word top_level__mercury_compile_mlds_back_end__Target_6,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_17)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorInfo_40_40;
    MR_Word top_level__mercury_compile_mlds_back_end__TypeCtorRtti_8;
    MR_Word top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_9;
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_10;
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_11;
    MR_Word top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_12;
    MR_Word top_level__mercury_compile_mlds_back_end__RttiDatas_13;
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData0_14;
    MR_Word top_level__mercury_compile_mlds_back_end__GlobalData_15;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_19;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_21;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_22;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_23;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_24;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_25;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_26;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_27;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_28;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_29;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_30;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_31;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_32;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_34;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_35;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_36;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_37;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_38;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_39;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_33;

    {
      backend_libs__type_ctor_info__generate_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, &top_level__mercury_compile_mlds_back_end__TypeCtorRtti_8);
    }
    {
      backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, &top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_9);
    }
    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, &top_level__mercury_compile_mlds_back_end__Globals_10);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_10, (MR_Integer) 288, &top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_11);
    }
    {
      backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, top_level__mercury_compile_mlds_back_end__NewTypeClassRtti_11, &top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_12);
    }
    top_level__mercury_compile_mlds_back_end__TypeCtorInfo_40_40 = (MR_Word) &backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0;
    {
      top_level__mercury_compile_mlds_back_end__Var_19 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_40_40, top_level__mercury_compile_mlds_back_end__TypeClassInfoRtti_9, top_level__mercury_compile_mlds_back_end__NewTypeClassInfoRttiData_12);
    }
    {
      top_level__mercury_compile_mlds_back_end__RttiDatas_13 = mercury__list__f_43_43_2_f_0(top_level__mercury_compile_mlds_back_end__TypeCtorInfo_40_40, top_level__mercury_compile_mlds_back_end__TypeCtorRtti_8, top_level__mercury_compile_mlds_back_end__Var_19);
    }
    top_level__mercury_compile_mlds_back_end__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 0)));
    top_level__mercury_compile_mlds_back_end__Var_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 1)));
    top_level__mercury_compile_mlds_back_end__Var_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 2)));
    top_level__mercury_compile_mlds_back_end__GlobalData0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 3)));
    top_level__mercury_compile_mlds_back_end__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 4)));
    top_level__mercury_compile_mlds_back_end__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 5)));
    top_level__mercury_compile_mlds_back_end__Var_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 6)));
    top_level__mercury_compile_mlds_back_end__Var_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 7)));
    top_level__mercury_compile_mlds_back_end__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 8)));
    top_level__mercury_compile_mlds_back_end__Var_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 9)));
    {
      ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0(top_level__mercury_compile_mlds_back_end__HLDS_5, top_level__mercury_compile_mlds_back_end__Target_6, top_level__mercury_compile_mlds_back_end__RttiDatas_13, top_level__mercury_compile_mlds_back_end__GlobalData0_14, &top_level__mercury_compile_mlds_back_end__GlobalData_15);
    }
    top_level__mercury_compile_mlds_back_end__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 0)));
    top_level__mercury_compile_mlds_back_end__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 1)));
    top_level__mercury_compile_mlds_back_end__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 2)));
    top_level__mercury_compile_mlds_back_end__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 3)));
    top_level__mercury_compile_mlds_back_end__Var_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 4)));
    top_level__mercury_compile_mlds_back_end__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 5)));
    top_level__mercury_compile_mlds_back_end__Var_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 6)));
    top_level__mercury_compile_mlds_back_end__Var_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 7)));
    top_level__mercury_compile_mlds_back_end__Var_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 8)));
    top_level__mercury_compile_mlds_back_end__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_0_16, (MR_Integer) 9)));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_MLDS_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_32));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GlobalData_15));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_37));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_38));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_39));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

    {
      ml_backend__add_heap_ops__add_heap_ops_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17)
{
  {
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_mlds_back_end__GC_12;
    MR_Word top_level__mercury_compile_mlds_back_end__SemidetReclaim_13;
    MR_Word top_level__mercury_compile_mlds_back_end__NondetReclaim_14;
    MR_Word top_level__mercury_compile_mlds_back_end__Var_22;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
    {
      libs__globals__get_gc_method_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__GC_12);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 312, &top_level__mercury_compile_mlds_back_end__SemidetReclaim_13);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 313, &top_level__mercury_compile_mlds_back_end__NondetReclaim_14);
    }
    {
      top_level__mercury_compile_mlds_back_end__Var_22 = libs__globals__gc_is_conservative_1_f_0(top_level__mercury_compile_mlds_back_end__GC_12);
    }
    top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__Var_22 == (MR_Integer) 1);
    if (top_level__mercury_compile_mlds_back_end__succeeded)
      *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
    else
    {
      top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 0);
      if (top_level__mercury_compile_mlds_back_end__succeeded)
        top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 0);
      if (top_level__mercury_compile_mlds_back_end__succeeded)
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
      else
      {
        top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__SemidetReclaim_13 == (MR_Integer) 1);
        if (top_level__mercury_compile_mlds_back_end__succeeded)
          top_level__mercury_compile_mlds_back_end__succeeded = (top_level__mercury_compile_mlds_back_end__NondetReclaim_14 == (MR_Integer) 1);
        if (top_level__mercury_compile_mlds_back_end__succeeded)
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding heap reclamation operations...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_4[1], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
          }
        }
        else
        {
          {
            parse_tree__error_util__write_error_pieces_plain_4_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[2]));
          }
          {
            mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          }
          *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_16;
        }
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5;

    {
      ml_backend__add_trail_ops__add_trail_ops_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5);
    }
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_mlds_back_end__UseTrail_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 229, &top_level__mercury_compile_mlds_back_end__UseTrail_12);
    }
    switch (top_level__mercury_compile_mlds_back_end__UseTrail_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word top_level__mercury_compile_mlds_back_end__DisableTrailOps_14;

          {
            libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 294, &top_level__mercury_compile_mlds_back_end__DisableTrailOps_14);
          }
          switch (top_level__mercury_compile_mlds_back_end__DisableTrailOps_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word top_level__mercury_compile_mlds_back_end__OptTrailUse_15;
                MR_Word top_level__mercury_compile_mlds_back_end__Target_16;
                MR_Word top_level__mercury_compile_mlds_back_end__GenerateInline_17;
                MR_Word top_level__mercury_compile_mlds_back_end__Var_29;
                MR_Word top_level__mercury_compile_mlds_back_end__Var_31;

                {
                  libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 403, &top_level__mercury_compile_mlds_back_end__OptTrailUse_15);
                }
                {
                  libs__globals__get_target_2_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, &top_level__mercury_compile_mlds_back_end__Target_16);
                }
                switch (top_level__mercury_compile_mlds_back_end__Target_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      {
                        libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 467, &top_level__mercury_compile_mlds_back_end__GenerateInline_17);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                  case (MR_Integer) 2:
                    top_level__mercury_compile_mlds_back_end__GenerateInline_17 = (MR_Integer) 0;
                    break;
                }
                {
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Adding trailing operations...\n");
                }
                {
                  libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
                }
                {
                  top_level__mercury_compile_mlds_back_end__Var_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_31, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_31, 3) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__OptTrailUse_15));
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_31, 4) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__GenerateInline_17));
                }
                {
                  top_level__mercury_compile_mlds_back_end__Var_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__Var_29, 0) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__Var_31));
                }
                {
                  hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_mlds_back_end__Var_29, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19);
                }
                {
                  libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
                }
                {
                  libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
                }
              }
              break;
            case (MR_Integer) 1:
              *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_18;
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
  MR_Box top_level__mercury_compile_mlds_back_end__closure_arg,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_1,
  MR_Box top_level__mercury_compile_mlds_back_end__wrapper_arg_2,
  MR_Box * top_level__mercury_compile_mlds_back_end__wrapper_arg_3)
{
  {
    MR_Box top_level__mercury_compile_mlds_back_end__closure = top_level__mercury_compile_mlds_back_end__closure_arg;
    MR_Word top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3;

    {
      hlds__mark_static_terms__mark_static_terms_3_p_0(((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_mlds_back_end__wrapper_arg_2), &top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3);
    }
    *top_level__mercury_compile_mlds_back_end__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_mlds_back_end__conv0_HeadVar__3_3));
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(
  MR_Word top_level__mercury_compile_mlds_back_end__Verbose_7,
  MR_Word top_level__mercury_compile_mlds_back_end__Stats_8,
  MR_Word top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13,
  MR_Word * top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word top_level__mercury_compile_mlds_back_end__Globals_11;
    MR_Word top_level__mercury_compile_mlds_back_end__SGCells_12;

    {
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_mlds_back_end__Globals_11);
    }
    {
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_mlds_back_end__Globals_11, (MR_Integer) 457, &top_level__mercury_compile_mlds_back_end__SGCells_12);
    }
    switch (top_level__mercury_compile_mlds_back_end__SGCells_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% Marking static ground terms...\n");
          }
          {
            libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7);
          }
          {
            hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) &top_level__mercury_compile_mlds_back_end_scalar_common_4[0], top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_mlds_back_end__STATE_VARIABLE_HLDS_14);
          }
          {
            libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_mlds_back_end__Verbose_7, (MR_String) "% done.\n");
          }
          {
            libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_mlds_back_end__Stats_8);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_has_main_1_f_0(
  MR_Word top_level__mercury_compile_mlds_back_end__MLDS_3)
{
  {
    MR_bool top_level__mercury_compile_mlds_back_end__succeeded;
    MR_Word top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
    MR_Word top_level__mercury_compile_mlds_back_end__FuncDefns_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 6)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 0)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 1)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 2)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 3)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 4)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 5)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 7)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 8)));
    MR_Word top_level__mercury_compile_mlds_back_end__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_mlds_back_end__MLDS_3, (MR_Integer) 9)));

    {
      top_level__mercury_compile_mlds_back_end__succeeded = ml_backend__ml_util__func_defns_contain_main_1_p_0(top_level__mercury_compile_mlds_back_end__FuncDefns_4);
    }
    if (top_level__mercury_compile_mlds_back_end__succeeded)
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 0;
    else
      top_level__mercury_compile_mlds_back_end__HeadVar__2_2 = (MR_Integer) 1;
    return top_level__mercury_compile_mlds_back_end__HeadVar__2_2;
  }
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

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_mlds_back_end__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module top_level.mercury_compile_mlds_back_end. */
