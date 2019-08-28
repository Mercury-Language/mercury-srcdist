/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version rotd-2019-08-28
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
#include "backend_libs.mih"
#include "check_hlds.mih"
#include "hlds.mih"
#include "libs.mih"
#include "ll_backend.mih"
#include "mdbcomp.mih"
#include "ml_backend.mih"
#include "parse_tree.mih"
#include "recompilation.mih"
#include "top_level.mih"
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
#include "hlds.hlds_clauses.mih"
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
#include "libs.op_mode.mih"
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
#include "array.mih"
#include "assoc_list.mih"
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
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
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
#include "ml_backend.ml_top_gen.mih"
#include "ml_backend.mlds.mih"
#include "ml_backend.mlds_to_c_file.mih"
#include "ml_backend.mlds_to_c_util.mih"
#include "ml_backend.mlds_to_cs_file.mih"
#include "ml_backend.mlds_to_java_file.mih"
#include "ml_backend.mlds_to_target_util.mih"
#include "ml_backend.rtti_to_mlds.mih"
#include "parse_tree.equiv_type.mih"
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
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__91__1_2_p_0(
  MR_Word HeadVar__1_41,
  MR_Word HeadVar__2_42);

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
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

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
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

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
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[4][2];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[1][6];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[2][3];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[3][1];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][8];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[2][5];




static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[4][2] = {
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
    ((MR_Box) ((MR_Unsigned) 5U)),
    ((MR_Box) ((MR_String) "Sorry, not implemented: \140--high-level-code\' and just one of \140--reclaim-heap-on-semidet-failure\' and \140--reclaim-heap-on-nondet-failure\'. Use \140--(no-)reclaim-heap" "-on-failure\' instead."))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_mlds_back_end_scalar_common_1[2]))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[1][6] = {
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

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
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
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[2][5] = {
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
top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__91__1_2_p_0(
  MR_Word HeadVar__1_41,
  MR_Word HeadVar__2_42)
{
  {
    MR_bool succeeded = (HeadVar__1_41 == HeadVar__2_42);

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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 61, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 71, &Stats_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 61, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 71, &Stats_12);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 61, &Verbose_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 71, &Stats_11);
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

    succeeded = top_level__mercury_compile_mlds_back_end__IntroducedFrom__pred__mlds_backend__91__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word * STATE_VARIABLE_MLDS_25,
  MR_Word * STATE_VARIABLE_Specs_26,
  MR_Word STATE_VARIABLE_DumpInfo_0_27,
  MR_Word * STATE_VARIABLE_DumpInfo_28)
{
  {
    MR_bool succeeded;
    MR_Word Globals_14;
    MR_Word Verbose_15;
    MR_Word Stats_16;
    MR_Word SimplifySpecs_17;
    MR_Word Target_18;
    MR_Word MLDS_Target_19;
    MR_Word Optimize_20;
    MR_Word GC_22;
    MR_Word STATE_VARIABLE_HLDS_35_35;
    MR_Word Var_38;
    MR_Word Var_41;
    MR_Word STATE_VARIABLE_DumpInfo_45_45;
    MR_Word STATE_VARIABLE_HLDS_47_47;
    MR_Word STATE_VARIABLE_DumpInfo_51_51;
    MR_Word STATE_VARIABLE_HLDS_53_53;
    MR_Word STATE_VARIABLE_DumpInfo_57_57;
    MR_Word STATE_VARIABLE_HLDS_59_59;
    MR_Word STATE_VARIABLE_DumpInfo_63_63;
    MR_Word STATE_VARIABLE_HLDS_65_65;
    MR_Word STATE_VARIABLE_DumpInfo_69_69;
    MR_Word STATE_VARIABLE_HLDS_72_72;
    MR_Word STATE_VARIABLE_Specs_73_73;
    MR_Word STATE_VARIABLE_DumpInfo_77_77;
    MR_Word STATE_VARIABLE_MLDS_83_83;
    MR_Word STATE_VARIABLE_MLDS_98_98;
    MR_Word STATE_VARIABLE_MLDS_111_111;
    MR_Word STATE_VARIABLE_MLDS_121_121;
    MR_Word STATE_VARIABLE_MLDS_131_131;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 61, &Verbose_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 71, &Stats_16);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 4, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_0_23, &STATE_VARIABLE_HLDS_35_35, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_17);
    Var_41 = parse_tree__error_util__contains_errors_2_f_0(Globals_14, SimplifySpecs_17);
    {
      Var_38 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_38, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[1]));
      MR_hl_field(MR_mktag(0), Var_38, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__mlds_backend_8_p_0_1));
      MR_hl_field(MR_mktag(0), Var_38, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_38, 3) = ((MR_Box) (Var_41));
      MR_hl_field(MR_mktag(0), Var_38, 4) = ((MR_Box) ((MR_Integer) 0));
    }
    mercury__require__expect_3_p_0(Var_38, (MR_String) "predicate \140top_level.mercury_compile_mlds_back_end.mlds_backend\'/8", (MR_String) "simplify has errors");
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_35_35, (MR_Integer) 405, (MR_String) "ml_backend_simplify", STATE_VARIABLE_DumpInfo_0_27, &STATE_VARIABLE_DumpInfo_45_45);
    top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_47_47);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_47_47, (MR_Integer) 410, (MR_String) "add_trail_ops", STATE_VARIABLE_DumpInfo_45_45, &STATE_VARIABLE_DumpInfo_51_51);
    top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_47_47, &STATE_VARIABLE_HLDS_53_53);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_53_53, (MR_Integer) 415, (MR_String) "add_heap_ops", STATE_VARIABLE_DumpInfo_51_51, &STATE_VARIABLE_DumpInfo_57_57);
    top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_53_53, &STATE_VARIABLE_HLDS_59_59);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_59_59, (MR_Integer) 420, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_57_57, &STATE_VARIABLE_DumpInfo_63_63);
    top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_59_59, &STATE_VARIABLE_HLDS_65_65);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_65_65, (MR_Integer) 425, (MR_String) "args_to_regs", STATE_VARIABLE_DumpInfo_63_63, &STATE_VARIABLE_DumpInfo_69_69);
    top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_8_p_0(Verbose_15, Stats_16, STATE_VARIABLE_HLDS_65_65, &STATE_VARIABLE_HLDS_72_72, (MR_Word) ((MR_Unsigned) 0U), &STATE_VARIABLE_Specs_73_73);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_72_72, (MR_Integer) 430, (MR_String) "mark_tail_calls", STATE_VARIABLE_DumpInfo_69_69, &STATE_VARIABLE_DumpInfo_77_77);
    libs__globals__get_target_2_p_0(Globals_14, &Target_18);
    switch (Target_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MLDS_Target_19 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        MLDS_Target_19 = (MR_Integer) 1;
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
        MLDS_Target_19 = (MR_Integer) 2;
        break;
    }
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Converting HLDS to MLDS...\n");
    ml_backend__ml_top_gen__ml_code_gen_6_p_0(MLDS_Target_19, &STATE_VARIABLE_MLDS_83_83, STATE_VARIABLE_HLDS_72_72, STATE_VARIABLE_HLDS_24, STATE_VARIABLE_Specs_73_73, STATE_VARIABLE_Specs_26);
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_24, (MR_Integer) 499, (MR_String) "final", STATE_VARIABLE_DumpInfo_77_77, STATE_VARIABLE_DumpInfo_28);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_83_83, (MR_Integer) 0, (MR_String) "initial");
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Generating RTTI data...\n");
    top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(*STATE_VARIABLE_HLDS_24, MLDS_Target_19, STATE_VARIABLE_MLDS_83_83, &STATE_VARIABLE_MLDS_98_98);
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_98_98, (MR_Integer) 10, (MR_String) "rtti");
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 490, &Optimize_20);
    switch (Optimize_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_MLDS_111_111 = STATE_VARIABLE_MLDS_98_98;
        break;
      case (MR_Integer) 1:
        {
          MR_Word NoInitOptGlobals_21;

          libs__globals__set_option_4_p_0((MR_Integer) 484, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_4[2])), Globals_14, &NoInitOptGlobals_21);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Optimizing MLDS...\n");
          ml_backend__ml_optimize__mlds_optimize_3_p_0(NoInitOptGlobals_21, STATE_VARIABLE_MLDS_98_98, &STATE_VARIABLE_MLDS_111_111);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_111_111, (MR_Integer) 25, (MR_String) "optimize1");
    libs__globals__get_gc_method_2_p_0(Globals_14, &GC_22);
    switch (GC_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 5:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Threading GC stack frames...\n");
          ml_backend__ml_elim_nested__ml_elim_nested_5_p_1((MR_Integer) 1, Globals_14, MLDS_Target_19, STATE_VARIABLE_MLDS_111_111, &STATE_VARIABLE_MLDS_121_121);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
        }
        break;
      case (MR_Integer) 0:
        STATE_VARIABLE_MLDS_121_121 = STATE_VARIABLE_MLDS_111_111;
        break;
      case (MR_Integer) 2:
        STATE_VARIABLE_MLDS_121_121 = STATE_VARIABLE_MLDS_111_111;
        break;
      case (MR_Integer) 3:
        STATE_VARIABLE_MLDS_121_121 = STATE_VARIABLE_MLDS_111_111;
        break;
      case (MR_Integer) 4:
        STATE_VARIABLE_MLDS_121_121 = STATE_VARIABLE_MLDS_111_111;
        break;
      case (MR_Integer) 1:
        STATE_VARIABLE_MLDS_121_121 = STATE_VARIABLE_MLDS_111_111;
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_121_121, (MR_Integer) 30, (MR_String) "gc_frames");
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Flattening nested functions...\n");
    ml_backend__ml_elim_nested__ml_elim_nested_5_p_0((MR_Integer) 0, Globals_14, MLDS_Target_19, STATE_VARIABLE_MLDS_121_121, &STATE_VARIABLE_MLDS_131_131);
    libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, STATE_VARIABLE_MLDS_131_131, (MR_Integer) 35, (MR_String) "nested_funcs");
    switch (Optimize_20) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_MLDS_25 = STATE_VARIABLE_MLDS_131_131;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% Optimizing MLDS again...\n");
          ml_backend__ml_optimize__mlds_optimize_3_p_0(Globals_14, STATE_VARIABLE_MLDS_131_131, STATE_VARIABLE_MLDS_25);
          libs__file_util__maybe_write_string_4_p_0(Verbose_15, (MR_String) "% done.\n");
        }
        break;
    }
    libs__file_util__maybe_report_stats_3_p_0(Stats_16);
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, *STATE_VARIABLE_MLDS_25, (MR_Integer) 40, (MR_String) "optimize2");
    top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0(Globals_14, *STATE_VARIABLE_MLDS_25, (MR_Integer) 99, (MR_String) "final");
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

    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 61, &Verbose_12);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 178, &DumpStages_13);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 180, &VerboseDumpStages_14);
    libs__globals__lookup_accumulating_option_3_p_0(Globals_7, (MR_Integer) 179, &DumpPredNames_15);
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
      {
        ml_backend__mlds_to_c_file__output_c_dump_preds_7_p_0(MLDS_8, Globals_7, (MR_Integer) 1, DumpSuffix_18, DumpPredNames_15);
      }
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
      MR_String Var_55;
      MR_String Var_57;
      MR_String Var_58;

      if ((DumpPredNames_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        Doc_22 = mercury__pprint__to_doc_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0), ((MR_Box) (MLDS_8)));
      }
      else
      {
        MR_Word ProcDefns_25 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MLDS_8, (MR_Integer) 5))));
        MR_Word SelectedProcDefns_26;
        MR_Word Var_49;

        {
          Var_49 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_49, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_49, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_6_p_0_1));
          MR_hl_field(MR_mktag(0), Var_49, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_49, 3) = ((MR_Box) (DumpPredNames_15));
        }
        mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_49, ProcDefns_25, &SelectedProcDefns_26);
        Doc_22 = mercury__pprint__to_doc_1_f_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_1[0]), ((MR_Box) (SelectedProcDefns_26)));
      }
      libs__file_util__maybe_write_string_4_p_0(Verbose_12, (MR_String) "% Dumping out raw MLDS...\n");
      ModuleName_27 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_8);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_7, (MR_Integer) 0, (MR_String) ".mlds_dump", ModuleName_27, &BaseFileName_28);
      Var_58 = mercury__string__f_43_43_2_f_0((MR_String) "-", StageName_10);
      Var_57 = mercury__string__f_43_43_2_f_0(StageNumStr_16, Var_58);
      Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_57);
      DumpFile_29 = mercury__string__f_43_43_2_f_0(BaseFileName_28, Var_55);
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

    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 61, &Verbose_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_6, (MR_Integer) 71, &Stats_11);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 304, &NewTypeClassRtti_11);
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
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Globals_14;
    MR_Word OptimizeTailCalls_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 483, &OptimizeTailCalls_15);
    switch (OptimizeTailCalls_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word DepInfo_16;
          MR_Word STATE_VARIABLE_HLDS_27_27;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Marking tail recursive calls...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_27_27, &DepInfo_16);
          hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_for_mlds_code_gen_5_p_0(DepInfo_16, STATE_VARIABLE_HLDS_27_27, STATE_VARIABLE_HLDS_18, STATE_VARIABLE_Specs_0_19, STATE_VARIABLE_Specs_20);
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
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word GC_12;
    MR_Word SemidetReclaim_13;
    MR_Word NondetReclaim_14;
    MR_Word Var_22;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__get_gc_method_2_p_0(Globals_11, &GC_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 328, &SemidetReclaim_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 329, &NondetReclaim_14);
    Var_22 = libs__globals__gc_is_conservative_1_f_0(GC_12);
    succeeded = (Var_22 == (MR_Integer) 1);
    if (succeeded)
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
    else
    {
      succeeded = (SemidetReclaim_13 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (NondetReclaim_14 == (MR_Integer) 0);
      if (succeeded)
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      else
      {
        succeeded = (SemidetReclaim_13 == (MR_Integer) 1);
        if (succeeded)
          succeeded = (NondetReclaim_14 == (MR_Integer) 1);
        if (succeeded)
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Adding heap reclamation operations...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[1]), STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        else
        {
          parse_tree__error_util__write_error_pieces_plain_4_p_0(Globals_11, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_mlds_back_end_scalar_common_1[3])));
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
          *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
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
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  {
    MR_Word Globals_11;
    MR_Word UseTrail_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 240, &UseTrail_12);
    switch (UseTrail_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
        break;
      case (MR_Integer) 1:
        {
          MR_Word DisableTrailOps_14;

          libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 310, &DisableTrailOps_14);
          switch (DisableTrailOps_14) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word OptTrailUse_15;
                MR_Word Target_16;
                MR_Word GenerateInline_17;
                MR_Word Var_29;
                MR_Word Var_31;

                libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 421, &OptTrailUse_15);
                libs__globals__get_target_2_p_0(Globals_11, &Target_16);
                switch (Target_16) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 487, &GenerateInline_17);
                    }
                    break;
                  case (MR_Integer) 1:
                  case (MR_Integer) 3:
                  case (MR_Integer) 2:
                    GenerateInline_17 = (MR_Integer) 0;
                    break;
                }
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Adding trailing operations...\n");
                libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
                {
                  Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_5[0]));
                  MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_6_p_0_1));
                  MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (OptTrailUse_15));
                  MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) (GenerateInline_17));
                }
                {
                  Var_29 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (Var_31));
                }
                hlds__passes_aux__process_all_nonimported_procs_3_p_0(Var_29, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
                libs__file_util__maybe_report_stats_3_p_0(Stats_8);
              }
              break;
            case (MR_Integer) 1:
              *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__3_3;

    hlds__mark_static_terms__mark_static_terms_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word SGCells_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 475, &SGCells_12);
    switch (SGCells_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Marking static ground terms...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[0]), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
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
