/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version rotd-2021-12-02
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


// :- module top_level.mercury_compile_mlds_back_end.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_mlds_back_end__init
ENDINIT
*/

#include "top_level.mercury_compile_mlds_back_end.mih"


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
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
#include "hlds.mih"
#include "io.mih"
#include "libs.mih"
#include "list.mih"
#include "ll_backend.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "multi_map.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pprint.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.base_typeclass_info.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mark_static_terms.mih"
#include "hlds.mark_tail_calls.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.compiler_util.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "ml_backend.add_heap_ops.mih"
#include "ml_backend.add_trail_ops.mih"
#include "ml_backend.ml_elim_nested.mih"
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.ml_optimize.mih"
#include "ml_backend.ml_top_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_file.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_cs_file.mih"
#include "ml_backend.mlds_to_java_file.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_mlds_back_end__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__90__1_2_p_0(
  MR_Word HeadVar__1_43,
  MR_Word HeadVar__2_44);

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
  MR_Word Globals_7,
  MR_Word MLDS_8,
  MR_Integer StageNum_9,
  MR_String StageName_10);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__dump_mlds_doc_5_p_0(
  MR_Word Globals_6,
  MR_String DumpFile_7,
  MR_Word Doc_8);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(
  MR_Word HLDS_5,
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_MLDS_0_16,
  MR_Word * STATE_VARIABLE_MLDS_17);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);


static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[25][2];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[3][1];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[1][8];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[1][6];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][3];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[2][4];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_7[2][5];




static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[25][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "instead."))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[3]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[2])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--(no-)reclaim-heap-on-failure"))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[5]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[4])))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Use"))
  },
  /* row 8 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[7]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[6])))
  },
  /* row 9 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 4U)),
    ((MR_Box) ((MR_String) "."))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[9]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[8])))
  },
  /* row 11 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-nondet-failure"))
  },
  /* row 12 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[11]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[10])))
  },
  /* row 13 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and"))
  },
  /* row 14 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[13]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[12])))
  },
  /* row 15 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--reclaim-heap-on-semidet-failure"))
  },
  /* row 16 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[15]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[14])))
  },
  /* row 17 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "and just one of"))
  },
  /* row 18 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[17]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[16])))
  },
  /* row 19 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_String) "--high-level-code"))
  },
  /* row 20 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[19]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[18])))
  },
  /* row 21 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented:"))
  },
  /* row 22 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[21]))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[20])))
  },
  /* row 23 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[2])),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 24 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(2), &top_level__mercury_compile_mlds_back_end_scalar_common_6[0]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[3][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mlds_dump"))))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_5[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[22])))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&libs__optimization_options__libs__optimization_options__type_ctor_info_maybe_gen_trail_ops_inline_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[2][4] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U),
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[23])))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.maybe_add_heap_ops\'/6")),
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 8U)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[24])))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_7[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_mlds_back_end__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__90__1_2_p_0(
  MR_Word HeadVar__1_43,
  MR_Word HeadVar__2_44)
{
  {
    MR_bool succeeded = (HeadVar__1_43 == HeadVar__2_44);

    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_csharp_5_p_0(
  MR_Word HLDS_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word Stats_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_6, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 65, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 75, &Stats_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Converting MLDS to C#...\n");
    ml_backend__mlds_to_cs_file__output_csharp_mlds_5_p_0(HLDS_6, MLDS_7, Succeeded_8);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Finished converting MLDS to C#.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_12);
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_java_5_p_0(
  MR_Word HLDS_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word Stats_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_6, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 65, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 75, &Stats_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Converting MLDS to Java...\n");
    ml_backend__mlds_to_java_file__output_java_mlds_5_p_0(HLDS_6, MLDS_7, Succeeded_8);
    libs__file_util__maybe_write_string_4_p_0(Verbose_11, (MR_String) "% Finished converting MLDS to Java.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_12);
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_5_p_0(
  MR_Word Globals_6,
  MR_Word MLDS_7,
  MR_Word * Succeeded_8)
{
  {
    MR_Word Verbose_10;
    MR_Word Stats_11;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 75, &Stats_11);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Converting MLDS to C...\n");
    ml_backend__mlds_to_c_file__output_c_mlds_7_p_0(MLDS_7, Globals_6, (MR_Integer) 0, (MR_String) "", Succeeded_8);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Finished converting MLDS to C.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_11);
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__90__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word * STATE_VARIABLE_MLDS_27,
  MR_Word * STATE_VARIABLE_Specs_28,
  MR_Word STATE_VARIABLE_DumpInfo_0_29,
  MR_Word * STATE_VARIABLE_DumpInfo_30)
{
  {
    MR_bool succeeded;
    MR_Word Globals_14;
    MR_Word Verbose_15;
    MR_Word Stats_16;
    MR_Word SimplifySpecs_17;
    MR_Word Target_18;
    MR_Word MLDS_Target_19;
    MR_Word OptTuple_20;
    MR_Word Optimize_21;
    MR_Word GC_24;
    MR_Word STATE_VARIABLE_HLDS_37_37;
    MR_Word Var_40;
    MR_Word Var_43;
    MR_Word STATE_VARIABLE_DumpInfo_47_47;
    MR_Word STATE_VARIABLE_HLDS_49_49;
    MR_Word STATE_VARIABLE_DumpInfo_53_53;
    MR_Word STATE_VARIABLE_HLDS_55_55;
    MR_Word STATE_VARIABLE_DumpInfo_59_59;
    MR_Word STATE_VARIABLE_HLDS_61_61;
    MR_Word STATE_VARIABLE_DumpInfo_65_65;
    MR_Word STATE_VARIABLE_HLDS_67_67;
    MR_Word STATE_VARIABLE_DumpInfo_71_71;
    MR_Word STATE_VARIABLE_HLDS_74_74;
    MR_Word STATE_VARIABLE_Specs_75_75;
    MR_Word STATE_VARIABLE_DumpInfo_79_79;
    MR_Word STATE_VARIABLE_MLDS_83_83;
    MR_Word STATE_VARIABLE_MLDS_98_98;
    MR_Word STATE_VARIABLE_MLDS_108_108;
    MR_Word STATE_VARIABLE_MLDS_118_118;
    MR_Word STATE_VARIABLE_MLDS_128_128;
    MR_Integer Var_233;
    MR_Integer Var_234;
    MR_Integer Var_235;
    MR_Integer Var_236;
    MR_Integer Var_237;
    MR_Integer Var_238;
    MR_Integer Var_239;
    MR_Integer Var_240;
    MR_Integer Var_241;
    MR_Integer Var_242;
    MR_Integer Var_243;
    MR_Integer Var_244;
    MR_Integer Var_245;
    MR_Integer Var_246;
    MR_Integer Var_247;
    MR_Integer Var_248;
    MR_Integer Var_249;
    MR_Integer Var_250;
    MR_Integer Var_251;
    MR_Integer Var_252;
    MR_Integer Var_253;
    MR_Integer Var_254;
    MR_Integer Var_255;
    MR_Integer Var_256;
    MR_Integer Var_257;
    MR_Integer Var_258;
    MR_Integer Var_259;
    MR_Integer Var_260;
    MR_Integer Var_261;
    MR_Integer Var_262;
    MR_Integer Var_263;
    MR_Integer Var_264;
    MR_Integer Var_265;
    MR_Integer Var_266;
    MR_Integer Var_267;
    MR_Integer Var_268;
    MR_Integer Var_269;
    MR_String Var_270;
    MR_Unsigned packed_word_0;
    MR_Unsigned packed_word_1;
    MR_Unsigned packed_word_2;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_25, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 65, &Verbose_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 75, &Stats_16);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 4, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_0_25, &STATE_VARIABLE_HLDS_37_37, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_17);
    Var_43 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, SimplifySpecs_17);
    {
      Var_40 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_40, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_7[1]));
      MR_hl_field(MR_mktag(0), Var_40, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_40, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_40, 3) = ((MR_Box) (Var_43));
      MR_hl_field(MR_mktag(0), Var_40, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_40, (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/8", (MR_String) "simplify has errors");
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_37_37, (MR_Integer) 405, (MR_String) "ml_backend_simplify", STATE_VARIABLE_DumpInfo_0_29, &STATE_VARIABLE_DumpInfo_47_47);
    top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_37_37, &STATE_VARIABLE_HLDS_49_49);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_49_49, (MR_Integer) 410, (MR_String) "add_trail_ops", STATE_VARIABLE_DumpInfo_47_47, &STATE_VARIABLE_DumpInfo_53_53);
    top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_49_49, &STATE_VARIABLE_HLDS_55_55);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_55_55, (MR_Integer) 415, (MR_String) "add_heap_ops", STATE_VARIABLE_DumpInfo_53_53, &STATE_VARIABLE_DumpInfo_59_59);
    hlds__mark_static_terms__maybe_mark_static_terms_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_55_55, &STATE_VARIABLE_HLDS_61_61);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_61_61, (MR_Integer) 420, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_59_59, &STATE_VARIABLE_DumpInfo_65_65);
    top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_61_61, &STATE_VARIABLE_HLDS_67_67);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_67_67, (MR_Integer) 425, (MR_String) "args_to_regs", STATE_VARIABLE_DumpInfo_65_65, &STATE_VARIABLE_DumpInfo_71_71);
    top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_8_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_67_67, &STATE_VARIABLE_HLDS_74_74, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_75_75);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_74_74, (MR_Integer) 430, (MR_String) "mark_tail_calls", STATE_VARIABLE_DumpInfo_71_71, &STATE_VARIABLE_DumpInfo_79_79);
    libs__globals__get_target_2_p_0(Globals_14, &Target_18);
    switch (Target_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MLDS_Target_19 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MLDS_Target_19 = (MR_Integer) 1;
        break;
      case (MR_Integer) 2:
        MLDS_Target_19 = (MR_Integer) 2;
        break;
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Converting HLDS to MLDS...\n");
    ml_backend__ml_top_gen__ml_code_gen_6_p_0(MLDS_Target_19, &STATE_VARIABLE_MLDS_83_83, STATE_VARIABLE_HLDS_74_74, STATE_VARIABLE_HLDS_26, STATE_VARIABLE_Specs_75_75, STATE_VARIABLE_Specs_28);
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_26, (MR_Integer) 499, (MR_String) "final", STATE_VARIABLE_DumpInfo_79_79, STATE_VARIABLE_DumpInfo_30);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_83_83, (MR_Integer) 0, (MR_String) "initial");
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Generating RTTI data...\n");
    top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(*STATE_VARIABLE_HLDS_26, MLDS_Target_19, STATE_VARIABLE_MLDS_83_83, &STATE_VARIABLE_MLDS_98_98);
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_98_98, (MR_Integer) 10, (MR_String) "rtti");
    libs__globals__get_opt_tuple_2_p_0(Globals_14, &OptTuple_20);
    packed_word_0 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 0)));
    packed_word_1 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 1)));
    packed_word_2 = (MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 2)));
    Optimize_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 2))) >> 21)) & (MR_Integer) 1);
    Var_233 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 3))));
    Var_234 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 4))));
    Var_235 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 5))));
    Var_236 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 6))));
    Var_237 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 7))));
    Var_238 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 8))));
    Var_239 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 9))));
    Var_240 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 10))));
    Var_241 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 11))));
    Var_242 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 12))));
    Var_243 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 13))));
    Var_244 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 14))));
    Var_245 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 15))));
    Var_246 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 16))));
    Var_247 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 17))));
    Var_248 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 18))));
    Var_249 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 19))));
    Var_250 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 20))));
    Var_251 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 21))));
    Var_252 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 22))));
    Var_253 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 23))));
    Var_254 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 24))));
    Var_255 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 25))));
    Var_256 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 26))));
    Var_257 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 27))));
    Var_258 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 28))));
    Var_259 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 29))));
    Var_260 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 30))));
    Var_261 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 31))));
    Var_262 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 32))));
    Var_263 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 33))));
    Var_264 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 34))));
    Var_265 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 35))));
    Var_266 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 36))));
    Var_267 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 37))));
    Var_268 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 38))));
    Var_269 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 39))));
    Var_270 = ((MR_String) ((MR_hl_field(MR_mktag(0), OptTuple_20, (MR_Integer) 40))));
    switch (Optimize_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        STATE_VARIABLE_MLDS_108_108 = STATE_VARIABLE_MLDS_98_98;
        break;
      case (MR_Integer) 0:
        {
          MR_Word NoInitOptTuple_22;
          MR_Word NoInitOptGlobals_23;

          {
            NoInitOptTuple_22 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 0) = (MR_Box) (packed_word_0);
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 1) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 16U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 4))));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 2) = (MR_Box) (packed_word_2);
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 3) = ((MR_Box) (Var_233));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 4) = ((MR_Box) (Var_234));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 5) = ((MR_Box) (Var_235));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 6) = ((MR_Box) (Var_236));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 7) = ((MR_Box) (Var_237));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 8) = ((MR_Box) (Var_238));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 9) = ((MR_Box) (Var_239));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 10) = ((MR_Box) (Var_240));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 11) = ((MR_Box) (Var_241));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 12) = ((MR_Box) (Var_242));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 13) = ((MR_Box) (Var_243));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 14) = ((MR_Box) (Var_244));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 15) = ((MR_Box) (Var_245));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 16) = ((MR_Box) (Var_246));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 17) = ((MR_Box) (Var_247));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 18) = ((MR_Box) (Var_248));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 19) = ((MR_Box) (Var_249));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 20) = ((MR_Box) (Var_250));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 21) = ((MR_Box) (Var_251));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 22) = ((MR_Box) (Var_252));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 23) = ((MR_Box) (Var_253));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 24) = ((MR_Box) (Var_254));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 25) = ((MR_Box) (Var_255));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 26) = ((MR_Box) (Var_256));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 27) = ((MR_Box) (Var_257));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 28) = ((MR_Box) (Var_258));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 29) = ((MR_Box) (Var_259));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 30) = ((MR_Box) (Var_260));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 31) = ((MR_Box) (Var_261));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 32) = ((MR_Box) (Var_262));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 33) = ((MR_Box) (Var_263));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 34) = ((MR_Box) (Var_264));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 35) = ((MR_Box) (Var_265));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 36) = ((MR_Box) (Var_266));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 37) = ((MR_Box) (Var_267));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 38) = ((MR_Box) (Var_268));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 39) = ((MR_Box) (Var_269));
            MR_hl_field(MR_mktag(0), NoInitOptTuple_22, 40) = ((MR_Box) (Var_270));
          }
          libs__globals__set_opt_tuple_3_p_0(NoInitOptTuple_22, Globals_14, &NoInitOptGlobals_23);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Optimizing MLDS...\n");
          ml_backend__ml_optimize__mlds_optimize_3_p_0(NoInitOptGlobals_23, STATE_VARIABLE_MLDS_98_98, &STATE_VARIABLE_MLDS_108_108);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_108_108, (MR_Integer) 25, (MR_String) "optimize1");
    libs__globals__get_gc_method_2_p_0(Globals_14, &GC_24);
    switch (GC_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Threading GC stack frames...\n");
          ml_backend__ml_elim_nested__ml_elim_nested_5_p_1((MR_Integer) 1, Globals_14, MLDS_Target_19, STATE_VARIABLE_MLDS_108_108, &STATE_VARIABLE_MLDS_118_118);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_MLDS_118_118 = STATE_VARIABLE_MLDS_108_108;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_MLDS_118_118 = STATE_VARIABLE_MLDS_108_108;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_MLDS_118_118 = STATE_VARIABLE_MLDS_108_108;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_MLDS_118_118 = STATE_VARIABLE_MLDS_108_108;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_MLDS_118_118 = STATE_VARIABLE_MLDS_108_108;
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_118_118, (MR_Integer) 30, (MR_String) "gc_frames");
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Flattening nested functions...\n");
    ml_backend__ml_elim_nested__ml_elim_nested_5_p_0((MR_Integer) 0, Globals_14, MLDS_Target_19, STATE_VARIABLE_MLDS_118_118, &STATE_VARIABLE_MLDS_128_128);
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_128_128, (MR_Integer) 35, (MR_String) "nested_funcs");
    switch (Optimize_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_MLDS_27 = STATE_VARIABLE_MLDS_128_128;
        break;
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Optimizing MLDS again...\n");
          ml_backend__ml_optimize__mlds_optimize_3_p_0(Globals_14, STATE_VARIABLE_MLDS_128_128, STATE_VARIABLE_MLDS_27);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, *STATE_VARIABLE_MLDS_27, (MR_Integer) 40, (MR_String) "optimize2");
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, *STATE_VARIABLE_MLDS_27, (MR_Integer) 99, (MR_String) "final");
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = ml_backend__mlds_to_c_file__func_defn_has_name_in_list_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(
  MR_Word Globals_7,
  MR_Word MLDS_8,
  MR_Integer StageNum_9,
  MR_String StageName_10)
{
  {
    MR_bool succeeded;
    MR_Word Verbose_12;
    MR_Word DumpStages_13;
    MR_Word VerboseDumpStages_14;
    MR_Word DumpPredNames_15;
    MR_String StageNumStr_16;
    MR_Word Target_17;

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 65, &Verbose_12);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 189, &DumpStages_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 191, &VerboseDumpStages_14);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 190, &DumpPredNames_15);
    StageNumStr_16 = hlds__passes_aux__stage_num_str_1_f_0(StageNum_9);
    libs__globals__get_target_2_p_0(Globals_7, &Target_17);
    succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_9, StageNumStr_16, StageName_10, DumpStages_13);
    if (succeeded)
      succeeded = (Target_17 == (MR_Integer) 0);
    if (succeeded)
    {
      MR_String DumpSuffix_18;
      MR_String Var_40;
      MR_String Var_41;

      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Dumping out MLDS as C...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_12);
      Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "-", StageName_10);
      Var_40 = mercury__string__f_43_43_2_f_0(StageNumStr_16, Var_41);
      DumpSuffix_18 = mercury__string__f_43_43_2_f_0((MR_String) "_dump.", Var_40);
      if ((DumpPredNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word _Succeeded_19;

        ml_backend__mlds_to_c_file__output_c_mlds_7_p_0(MLDS_8, Globals_7, (MR_Integer) 1, DumpSuffix_18, &_Succeeded_19);
      }
      else
        ml_backend__mlds_to_c_file__output_c_dump_preds_7_p_0(MLDS_8, Globals_7, (MR_Integer) 1, DumpSuffix_18, DumpPredNames_15);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% done.\n");
    }
    succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_9, StageNumStr_16, StageName_10, VerboseDumpStages_14);
    if (!(succeeded))
    {
      succeeded = (Target_17 != (MR_Integer) 0);
      if (succeeded)
        succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_9, StageNumStr_16, StageName_10, DumpStages_13);
    }
    if (succeeded)
    {
      MR_Word Doc_22;
      MR_Word ModuleName_27;
      MR_String BaseFileName_28;
      MR_String DumpFile_29;
      MR_String Var_58;
      MR_String Var_60;
      MR_String Var_61;

      if ((DumpPredNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
        Doc_22 = mercury__pprint__to_doc_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0), ((MR_Box) (MLDS_8)));
      else
      {
        MR_Word ProcDefns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
        MR_Word SelectedProcDefns_26;
        MR_Word Var_49;

        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_7[0]));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (DumpPredNames_15));
        }
        mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_49, ProcDefns_25, &SelectedProcDefns_26);
        Doc_22 = mercury__pprint__to_doc_1_f_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_1[0]), ((MR_Box) (SelectedProcDefns_26)));
      }
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Dumping out raw MLDS...\n");
      ModuleName_27 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_8);
      parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_7, (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.maybe_dump_mlds\'/6", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_2[0])), ModuleName_27, &BaseFileName_28);
      Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "-", StageName_10);
      Var_60 = mercury__string__f_43_43_2_f_0(StageNumStr_16, Var_61);
      Var_58 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_60);
      DumpFile_29 = mercury__string__f_43_43_2_f_0(BaseFileName_28, Var_58);
      top_level__mercury_compile_mlds_back_end__dump_mlds_doc_5_p_0(Globals_7, DumpFile_29, Doc_22);
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% done.\n");
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__dump_mlds_doc_5_p_0(
  MR_Word Globals_6,
  MR_String DumpFile_7,
  MR_Word Doc_8)
{
  {
    MR_Word Verbose_10;
    MR_Word Stats_11;
    MR_Word Res_12;

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 65, &Verbose_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 75, &Stats_11);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Dumping out MLDS to \140");
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, DumpFile_7);
    libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "\'...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_10);
    mercury__io__open_output_4_p_0(DumpFile_7, &Res_12);
    if (((MR_tag((MR_Word) Res_12)) == (MR_Integer) 1))
    {
      MR_Word IOError_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res_12, (MR_Integer) 0))));
      MR_String ErrorMessage_17;
      MR_String Var_32;
      MR_String Var_33;
      MR_String Var_35;

      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "\n");
      Var_35 = mercury__io__error_message_1_f_0(IOError_16);
      Var_33 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_35);
      Var_32 = mercury__string__f_43_43_2_f_0(DumpFile_7, Var_33);
      ErrorMessage_17 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_32);
      libs__file_util__report_error_3_p_0(ErrorMessage_17);
    }
    else
    {
      MR_Word FileStream_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res_12, (MR_Integer) 0))));
      MR_Word OutputStream_14;
      MR_Word Var_15;

      mercury__io__set_output_stream_4_p_0(FileStream_13, &OutputStream_14);
      mercury__pprint__write_4_p_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_1[1]), (MR_Integer) 80, ((MR_Box) (Doc_8)));
      mercury__io__nl_2_p_0();
      mercury__io__set_output_stream_4_p_0(OutputStream_14, &Var_15);
      mercury__io__close_output_3_p_0(FileStream_13);
      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_11);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(
  MR_Word HLDS_5,
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_MLDS_0_16,
  MR_Word * STATE_VARIABLE_MLDS_17)
{
  {
    MR_Word TypeCtorRtti_8;
    MR_Word TypeClassInfoRtti_9;
    MR_Word Globals_10;
    MR_Word NewTypeClassRtti_11;
    MR_Word NewTypeClassInfoRttiData_12;
    MR_Word RttiDatas_13;
    MR_Word GlobalData0_14;
    MR_Word GlobalData_15;
    MR_Word Var_19;
    MR_Word Var_30;
    MR_Word Var_31;
    MR_Word Var_33;
    MR_Word Var_34;
    MR_Word Var_35;
    MR_Word Var_36;
    MR_Word Var_37;
    MR_Word Var_38;
    MR_Word Var_39;

    backend_libs__type_ctor_info__generate_rtti_2_p_0(HLDS_5, &TypeCtorRtti_8);
    backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(HLDS_5, &TypeClassInfoRtti_9);
    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_5, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 317, &NewTypeClassRtti_11);
    backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(HLDS_5, NewTypeClassRtti_11, &NewTypeClassInfoRttiData_12);
    Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeClassInfoRtti_9, NewTypeClassInfoRttiData_12);
    RttiDatas_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeCtorRtti_8, Var_19);
    GlobalData0_14 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 2))));
    ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0(HLDS_5, Target_6, RttiDatas_13, GlobalData0_14, &GlobalData_15);
    Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 0))));
    Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 1))));
    Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 3))));
    Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 4))));
    Var_35 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 5))));
    Var_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 6))));
    Var_37 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 7))));
    Var_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 8))));
    Var_39 = ((MR_Word) ((MR_hl_field(MR_mktag(0), STATE_VARIABLE_MLDS_0_16, (MR_Integer) 9))));
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (10 * sizeof(MR_Word)), NULL, NULL);
      *STATE_VARIABLE_MLDS_17 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Var_30));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (GlobalData_15));
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (Var_33));
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (Var_34));
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (Var_35));
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (Var_36));
      MR_hl_field(MR_mktag(0), base, 7) = ((MR_Box) (Var_37));
      MR_hl_field(MR_mktag(0), base, 8) = ((MR_Box) (Var_38));
      MR_hl_field(MR_mktag(0), base, 9) = ((MR_Box) (Var_39));
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_Word Globals_14;
    MR_Word OptTuple_15;
    MR_Word OptimizeTailCalls_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_14);
    libs__globals__get_opt_tuple_2_p_0(Globals_14, &OptTuple_15);
    OptimizeTailCalls_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_15, (MR_Integer) 1))) >> 5)) & (MR_Integer) 1);
    switch (OptimizeTailCalls_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
          *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word DepInfo_17;
          MR_Word STATE_VARIABLE_HLDS_27_27;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Marking tail recursive calls...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_27_27, &DepInfo_17);
          hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_for_mlds_code_gen_5_p_0(DepInfo_17, STATE_VARIABLE_HLDS_27_27, STATE_VARIABLE_HLDS_19, STATE_VARIABLE_Specs_0_20, STATE_VARIABLE_Specs_21);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    ml_backend__add_heap_ops__add_heap_ops_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word GC_12;
    MR_Word SemidetReclaim_13;
    MR_Word NondetReclaim_14;
    MR_Word Var_23;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
    libs__globals__get_gc_method_2_p_0(Globals_11, &GC_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 340, &SemidetReclaim_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 341, &NondetReclaim_14);
    Var_23 = libs__globals__gc_is_conservative_1_f_0(GC_12);
    succeeded = (Var_23 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
    else
    {
      succeeded = (SemidetReclaim_13 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (NondetReclaim_14 == (MR_Integer) 0);
      if (succeeded)
        *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
      else
      {
        succeeded = (SemidetReclaim_13 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (NondetReclaim_14 == (MR_Integer) 1);
        if (succeeded)
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Adding heap reclamation operations...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[1]), STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        else
        {
          parse_tree__error_util__write_error_spec_ignore_4_p_0(Globals_11, (MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[1]));
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
        }
      }
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__5_5;

    ml_backend__add_trail_ops__add_trail_ops_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  {
    MR_Word Globals_11;
    MR_Word UseTrail_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 255, &UseTrail_12);
    switch (UseTrail_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        break;
      case (MR_Integer) 1:
        {
          MR_Word DisableTrailOps_14;

          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 323, &DisableTrailOps_14);
          switch (DisableTrailOps_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word OptTrailUse_15;
                MR_Word Target_16;
                MR_Word GenerateInline_18;
                MR_Word Var_29;
                MR_Word Var_31;

                libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 498, &OptTrailUse_15);
                libs__globals__get_target_2_p_0(Globals_11, &Target_16);
                switch (Target_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Word OptTuple_17;

                      libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_17);
                      GenerateInline_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_17, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 2:
                    GenerateInline_18 = (MR_Integer) 1;
                    break;
                }
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Adding trailing operations...\n");
                libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
                {
                  Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_3[0]));
                  MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (OptTrailUse_15));
                  MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (GenerateInline_18));
                }
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_31));
                }
                hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_29, STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
                libs__file_util__maybe_report_stats_3_p_0(Stats_8);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
              break;
          }
        }
        break;
    }
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

// :- end_module top_level.mercury_compile_mlds_back_end.
