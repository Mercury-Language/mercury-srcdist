/*
** Automatically generated from `mercury_compile_mlds_back_end.m'
** by the Mercury compiler,
** version rotd-2024-10-13
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
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.base_typeclass_info.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_class_info.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.proc_requests.mih"
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
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
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
#include "parse_tree.error_spec.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_table.mih"
#include "recompilation.record_uses.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "parse_tree.module_qual.mq_info.mih"




static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_mlds_back_end__list__pti_list_1__plain_builtin__type_ctor_info_string_0;

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MLDS_10,
  MR_Integer StageNum_11,
  MR_String StageName_12);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__dump_mlds_doc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String DumpFileName_9,
  MR_Word Doc_10);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(
  MR_Word HLDS_5,
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_MLDS_0_16,
  MR_Word * STATE_VARIABLE_MLDS_17);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22);


static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[2][2];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[2][3];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[1][4];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[2][5];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][8];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[1][6];

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_7[1][1];




static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_pprint__doc__arity1__pprint__doc__arity0__)),
    ((MR_Box) (&mercury__pprint__pprint__type_ctor_info_doc_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_4[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&top_level__mercury_compile_mlds_back_end__list__pti_list_1__plain_builtin__type_ctor_info_string_0)),
    ((MR_Box) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_5[1][8] = {
  /* row   0 */
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

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_6[1][6] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_mlds_back_end_scalar_common_7[1][1] = {
  /* row   0 */
  { ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_2[1])) },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct1 top_level__mercury_compile_mlds_back_end__list__pti_list_1__plain_builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) }
};

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_csharp_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word HLDS_8,
  MR_Word MLDS_9,
  MR_Word * Succeeded_10)
{
  MR_Word Globals_12;
  MR_Word Verbose_13;
  MR_Word Stats_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_8, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 76, &Verbose_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 86, &Stats_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_13, (MR_String) "% Converting MLDS to C#...\n");
  ml_backend__mlds_to_cs_file__output_csharp_mlds_6_p_0(ProgressStream_7, HLDS_8, MLDS_9, Succeeded_10);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_13, (MR_String) "% Finished converting MLDS to C#.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_14);
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_java_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word HLDS_8,
  MR_Word MLDS_9,
  MR_Word * Succeeded_10)
{
  MR_Word Globals_12;
  MR_Word Verbose_13;
  MR_Word Stats_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_8, &Globals_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 76, &Verbose_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 86, &Stats_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_13, (MR_String) "% Converting MLDS to Java...\n");
  ml_backend__mlds_to_java_file__output_java_mlds_6_p_0(ProgressStream_7, HLDS_8, MLDS_9, Succeeded_10);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_13, (MR_String) "% Finished converting MLDS to Java.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_14);
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_to_high_level_c_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_Word MLDS_9,
  MR_Word * Succeeded_10)
{
  MR_Word Verbose_12;
  MR_Word Stats_13;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 76, &Verbose_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 86, &Stats_13);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Converting MLDS to C...\n");
  ml_backend__mlds_to_c_file__output_c_mlds_8_p_0(ProgressStream_7, MLDS_9, Globals_8, (MR_Integer) 0, (MR_String) "", Succeeded_10);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "% Finished converting MLDS to C.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_13);
}

void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_backend_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word STATE_VARIABLE_HLDS_0_27,
  MR_Word * STATE_VARIABLE_MLDS_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * STATE_VARIABLE_Specs_30,
  MR_Word STATE_VARIABLE_DumpInfo_0_31,
  MR_Word * STATE_VARIABLE_DumpInfo_32)
{
  MR_Word Globals_16;
  MR_Word Verbose_17;
  MR_Word Stats_18;
  MR_Word Target_20;
  MR_Word MLDS_Target_21;
  MR_Word OptTuple_22;
  MR_Word Optimize_23;
  MR_Word GC_26;
  MR_Word STATE_VARIABLE_HLDS_40_40;
  MR_Word STATE_VARIABLE_DumpInfo_45_45;
  MR_Word STATE_VARIABLE_HLDS_47_47;
  MR_Word STATE_VARIABLE_DumpInfo_51_51;
  MR_Word STATE_VARIABLE_HLDS_53_53;
  MR_Word STATE_VARIABLE_DumpInfo_57_57;
  MR_Word STATE_VARIABLE_HLDS_59_59;
  MR_Word STATE_VARIABLE_DumpInfo_63_63;
  MR_Word STATE_VARIABLE_HLDS_65_65;
  MR_Word STATE_VARIABLE_DumpInfo_69_69;
  MR_Word STATE_VARIABLE_HLDS_71_71;
  MR_Word STATE_VARIABLE_Specs_72_72;
  MR_Word STATE_VARIABLE_DumpInfo_76_76;
  MR_Word STATE_VARIABLE_MLDS_80_80;
  MR_Word STATE_VARIABLE_HLDS_81_81;
  MR_Word STATE_VARIABLE_MLDS_95_95;
  MR_Word STATE_VARIABLE_MLDS_105_105;
  MR_Word STATE_VARIABLE_MLDS_115_115;
  MR_Word STATE_VARIABLE_MLDS_125_125;
  MR_Integer Var_229;
  MR_Integer Var_230;
  MR_Integer Var_231;
  MR_Integer Var_232;
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
  MR_String Var_266;
  MR_Word _SimplifySpecs_19;
  MR_Unsigned packed_word_0;
  MR_Unsigned packed_word_1;
  MR_Unsigned packed_word_2;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_27, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 76, &Verbose_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 86, &Stats_18);
  top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_10, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 4, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_0_27, &STATE_VARIABLE_HLDS_40_40, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecs_19);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_40_40, (MR_Integer) 405, (MR_String) "ml_backend_simplify", STATE_VARIABLE_DumpInfo_0_31, &STATE_VARIABLE_DumpInfo_45_45);
  top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_40_40, &STATE_VARIABLE_HLDS_47_47);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_47_47, (MR_Integer) 410, (MR_String) "add_trail_ops", STATE_VARIABLE_DumpInfo_45_45, &STATE_VARIABLE_DumpInfo_51_51);
  top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_47_47, &STATE_VARIABLE_HLDS_53_53);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_53_53, (MR_Integer) 415, (MR_String) "add_heap_ops", STATE_VARIABLE_DumpInfo_51_51, &STATE_VARIABLE_DumpInfo_57_57);
  hlds__mark_static_terms__maybe_mark_static_terms_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_53_53, &STATE_VARIABLE_HLDS_59_59);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_59_59, (MR_Integer) 420, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_57_57, &STATE_VARIABLE_DumpInfo_63_63);
  top_level__mercury_compile_llds_back_end__map_args_to_regs_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_59_59, &STATE_VARIABLE_HLDS_65_65);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_65_65, (MR_Integer) 425, (MR_String) "args_to_regs", STATE_VARIABLE_DumpInfo_63_63, &STATE_VARIABLE_DumpInfo_69_69);
  top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_9_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_65_65, &STATE_VARIABLE_HLDS_71_71, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_72_72);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_71_71, (MR_Integer) 430, (MR_String) "mark_tail_calls", STATE_VARIABLE_DumpInfo_69_69, &STATE_VARIABLE_DumpInfo_76_76);
  libs__globals__get_target_2_p_0(Globals_16, &Target_20);
  switch (Target_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MLDS_Target_21 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      MLDS_Target_21 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      MLDS_Target_21 = (MR_Integer) 2;
      break;
  }
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% Converting HLDS to MLDS...\n");
  ml_backend__ml_top_gen__ml_code_gen_7_p_0(ProgressStream_10, MLDS_Target_21, &STATE_VARIABLE_MLDS_80_80, STATE_VARIABLE_HLDS_71_71, &STATE_VARIABLE_HLDS_81_81, STATE_VARIABLE_Specs_72_72, STATE_VARIABLE_Specs_30);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_18);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_81_81, (MR_Integer) 499, (MR_String) "final", STATE_VARIABLE_DumpInfo_76_76, STATE_VARIABLE_DumpInfo_32);
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, STATE_VARIABLE_MLDS_80_80, (MR_Integer) 0, (MR_String) "initial");
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% Generating RTTI data...\n");
  top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(STATE_VARIABLE_HLDS_81_81, MLDS_Target_21, STATE_VARIABLE_MLDS_80_80, &STATE_VARIABLE_MLDS_95_95);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_18);
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, STATE_VARIABLE_MLDS_95_95, (MR_Integer) 10, (MR_String) "rtti");
  libs__globals__get_opt_tuple_2_p_0(Globals_16, &OptTuple_22);
  packed_word_0 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 0)));
  packed_word_1 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 1)));
  packed_word_2 = (MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 2)));
  Optimize_23 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 2))) >> 20)) & (MR_Integer) 1);
  Var_229 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 3))));
  Var_230 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 4))));
  Var_231 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 5))));
  Var_232 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 6))));
  Var_233 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 7))));
  Var_234 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 8))));
  Var_235 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 9))));
  Var_236 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 10))));
  Var_237 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 11))));
  Var_238 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 12))));
  Var_239 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 13))));
  Var_240 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 14))));
  Var_241 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 15))));
  Var_242 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 16))));
  Var_243 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 17))));
  Var_244 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 18))));
  Var_245 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 19))));
  Var_246 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 20))));
  Var_247 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 21))));
  Var_248 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 22))));
  Var_249 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 23))));
  Var_250 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 24))));
  Var_251 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 25))));
  Var_252 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 26))));
  Var_253 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 27))));
  Var_254 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 28))));
  Var_255 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 29))));
  Var_256 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 30))));
  Var_257 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 31))));
  Var_258 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 32))));
  Var_259 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 33))));
  Var_260 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 34))));
  Var_261 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 35))));
  Var_262 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 36))));
  Var_263 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 37))));
  Var_264 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 38))));
  Var_265 = ((MR_Integer) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 39))));
  Var_266 = ((MR_String) ((MR_hl_field(0, OptTuple_22, (MR_Integer) 40))));
  switch (Optimize_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      STATE_VARIABLE_MLDS_105_105 = STATE_VARIABLE_MLDS_95_95;
      break;
    case (MR_Integer) 0:
      {
        MR_Word NoInitOptTuple_24;
        MR_Word NoInitOptGlobals_25;

        {
          NoInitOptTuple_24 = (MR_Word) MR_new_object(MR_Word, (41 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, NoInitOptTuple_24, 0) = (MR_Box) (packed_word_0);
          MR_hl_field(0, NoInitOptTuple_24, 1) = (MR_Box) ((((packed_word_1 & (~((MR_Unsigned) 8U)))) | (((MR_Unsigned) ((MR_Integer) 1) << 3))));
          MR_hl_field(0, NoInitOptTuple_24, 2) = (MR_Box) (packed_word_2);
          MR_hl_field(0, NoInitOptTuple_24, 3) = ((MR_Box) (Var_229));
          MR_hl_field(0, NoInitOptTuple_24, 4) = ((MR_Box) (Var_230));
          MR_hl_field(0, NoInitOptTuple_24, 5) = ((MR_Box) (Var_231));
          MR_hl_field(0, NoInitOptTuple_24, 6) = ((MR_Box) (Var_232));
          MR_hl_field(0, NoInitOptTuple_24, 7) = ((MR_Box) (Var_233));
          MR_hl_field(0, NoInitOptTuple_24, 8) = ((MR_Box) (Var_234));
          MR_hl_field(0, NoInitOptTuple_24, 9) = ((MR_Box) (Var_235));
          MR_hl_field(0, NoInitOptTuple_24, 10) = ((MR_Box) (Var_236));
          MR_hl_field(0, NoInitOptTuple_24, 11) = ((MR_Box) (Var_237));
          MR_hl_field(0, NoInitOptTuple_24, 12) = ((MR_Box) (Var_238));
          MR_hl_field(0, NoInitOptTuple_24, 13) = ((MR_Box) (Var_239));
          MR_hl_field(0, NoInitOptTuple_24, 14) = ((MR_Box) (Var_240));
          MR_hl_field(0, NoInitOptTuple_24, 15) = ((MR_Box) (Var_241));
          MR_hl_field(0, NoInitOptTuple_24, 16) = ((MR_Box) (Var_242));
          MR_hl_field(0, NoInitOptTuple_24, 17) = ((MR_Box) (Var_243));
          MR_hl_field(0, NoInitOptTuple_24, 18) = ((MR_Box) (Var_244));
          MR_hl_field(0, NoInitOptTuple_24, 19) = ((MR_Box) (Var_245));
          MR_hl_field(0, NoInitOptTuple_24, 20) = ((MR_Box) (Var_246));
          MR_hl_field(0, NoInitOptTuple_24, 21) = ((MR_Box) (Var_247));
          MR_hl_field(0, NoInitOptTuple_24, 22) = ((MR_Box) (Var_248));
          MR_hl_field(0, NoInitOptTuple_24, 23) = ((MR_Box) (Var_249));
          MR_hl_field(0, NoInitOptTuple_24, 24) = ((MR_Box) (Var_250));
          MR_hl_field(0, NoInitOptTuple_24, 25) = ((MR_Box) (Var_251));
          MR_hl_field(0, NoInitOptTuple_24, 26) = ((MR_Box) (Var_252));
          MR_hl_field(0, NoInitOptTuple_24, 27) = ((MR_Box) (Var_253));
          MR_hl_field(0, NoInitOptTuple_24, 28) = ((MR_Box) (Var_254));
          MR_hl_field(0, NoInitOptTuple_24, 29) = ((MR_Box) (Var_255));
          MR_hl_field(0, NoInitOptTuple_24, 30) = ((MR_Box) (Var_256));
          MR_hl_field(0, NoInitOptTuple_24, 31) = ((MR_Box) (Var_257));
          MR_hl_field(0, NoInitOptTuple_24, 32) = ((MR_Box) (Var_258));
          MR_hl_field(0, NoInitOptTuple_24, 33) = ((MR_Box) (Var_259));
          MR_hl_field(0, NoInitOptTuple_24, 34) = ((MR_Box) (Var_260));
          MR_hl_field(0, NoInitOptTuple_24, 35) = ((MR_Box) (Var_261));
          MR_hl_field(0, NoInitOptTuple_24, 36) = ((MR_Box) (Var_262));
          MR_hl_field(0, NoInitOptTuple_24, 37) = ((MR_Box) (Var_263));
          MR_hl_field(0, NoInitOptTuple_24, 38) = ((MR_Box) (Var_264));
          MR_hl_field(0, NoInitOptTuple_24, 39) = ((MR_Box) (Var_265));
          MR_hl_field(0, NoInitOptTuple_24, 40) = ((MR_Box) (Var_266));
        }
        libs__globals__set_opt_tuple_3_p_0(NoInitOptTuple_24, Globals_16, &NoInitOptGlobals_25);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% Optimizing MLDS...\n");
        ml_backend__ml_optimize__mlds_optimize_3_p_0(NoInitOptGlobals_25, STATE_VARIABLE_MLDS_95_95, &STATE_VARIABLE_MLDS_105_105);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% done.\n");
      }
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_18);
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, STATE_VARIABLE_MLDS_105_105, (MR_Integer) 25, (MR_String) "optimize1");
  libs__globals__get_gc_method_2_p_0(Globals_16, &GC_26);
  switch (GC_26) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 5:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% Threading GC stack frames...\n");
        ml_backend__ml_elim_nested__ml_elim_nested_4_p_1(MLDS_Target_21, (MR_Integer) 1, STATE_VARIABLE_MLDS_105_105, &STATE_VARIABLE_MLDS_115_115);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% done.\n");
      }
      break;
    case (MR_Integer) 0:
      STATE_VARIABLE_MLDS_115_115 = STATE_VARIABLE_MLDS_105_105;
      break;
    case (MR_Integer) 2:
      STATE_VARIABLE_MLDS_115_115 = STATE_VARIABLE_MLDS_105_105;
      break;
    case (MR_Integer) 3:
      STATE_VARIABLE_MLDS_115_115 = STATE_VARIABLE_MLDS_105_105;
      break;
    case (MR_Integer) 4:
      STATE_VARIABLE_MLDS_115_115 = STATE_VARIABLE_MLDS_105_105;
      break;
    case (MR_Integer) 1:
      STATE_VARIABLE_MLDS_115_115 = STATE_VARIABLE_MLDS_105_105;
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_18);
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, STATE_VARIABLE_MLDS_115_115, (MR_Integer) 30, (MR_String) "gc_frames");
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% Flattening nested functions...\n");
  ml_backend__ml_elim_nested__ml_elim_nested_4_p_0(MLDS_Target_21, (MR_Integer) 0, STATE_VARIABLE_MLDS_115_115, &STATE_VARIABLE_MLDS_125_125);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_18);
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, STATE_VARIABLE_MLDS_125_125, (MR_Integer) 35, (MR_String) "nested_funcs");
  switch (Optimize_23) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_MLDS_28 = STATE_VARIABLE_MLDS_125_125;
      break;
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% Optimizing MLDS again...\n");
        ml_backend__ml_optimize__mlds_optimize_3_p_0(Globals_16, STATE_VARIABLE_MLDS_125_125, STATE_VARIABLE_MLDS_28);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_17, (MR_String) "% done.\n");
      }
      break;
  }
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_18);
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, *STATE_VARIABLE_MLDS_28, (MR_Integer) 40, (MR_String) "optimize2");
  top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(ProgressStream_10, Globals_16, *STATE_VARIABLE_MLDS_28, (MR_Integer) 99, (MR_String) "final");
}

static MR_bool MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = ml_backend__mlds_to_c_file__func_defn_has_name_in_list_2_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)));
  return succeeded;
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Globals_9,
  MR_Word MLDS_10,
  MR_Integer StageNum_11,
  MR_String StageName_12)
{
  MR_bool succeeded;
  MR_Word Verbose_14;
  MR_Word DumpStages_15;
  MR_Word VerboseDumpStages_16;
  MR_Word DumpPredNames_17;
  MR_String StageNumStr_18;
  MR_Word Target_19;

  libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 76, &Verbose_14);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 225, &DumpStages_15);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 227, &VerboseDumpStages_16);
  libs__globals__lookup_accumulating_option_3_p_0(Globals_9, (MR_Integer) 226, &DumpPredNames_17);
  StageNumStr_18 = hlds__passes_aux__stage_num_str_1_f_0(StageNum_11);
  libs__globals__get_target_2_p_0(Globals_9, &Target_19);
  succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_11, StageNumStr_18, StageName_12, DumpStages_15);
  if (succeeded)
    succeeded = (Target_19 == (MR_Integer) 0);
  if (succeeded)
  {
    MR_String DumpSuffix_20;
    MR_String Var_42;
    MR_String Var_43;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) "% Dumping out MLDS as C...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_14);
    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "-", StageName_12);
    Var_42 = mercury__string__f_43_43_2_f_0(StageNumStr_18, Var_43);
    DumpSuffix_20 = mercury__string__f_43_43_2_f_0((MR_String) "_dump.", Var_42);
    if ((DumpPredNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word _Succeeded_21;

      ml_backend__mlds_to_c_file__output_c_mlds_8_p_0(ProgressStream_8, MLDS_10, Globals_9, (MR_Integer) 1, DumpSuffix_20, &_Succeeded_21);
    }
    else
      ml_backend__mlds_to_c_file__output_c_dump_preds_8_p_0(ProgressStream_8, MLDS_10, Globals_9, (MR_Integer) 1, DumpSuffix_20, DumpPredNames_17);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) "% done.\n");
  }
  succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_11, StageNumStr_18, StageName_12, VerboseDumpStages_16);
  if (!(succeeded))
  {
    succeeded = (Target_19 != (MR_Integer) 0);
    if (succeeded)
      succeeded = hlds__passes_aux__should_dump_stage_4_p_0(StageNum_11, StageNumStr_18, StageName_12, DumpStages_15);
  }
  if (succeeded)
  {
    MR_Word Doc_24;
    MR_Word ModuleName_29;
    MR_String DumpBaseFileName_30;
    MR_String DumpFileName_31;
    MR_String Var_81;
    MR_String Var_82;
    MR_String Var_84;

    if ((DumpPredNames_17 == (MR_Word) ((MR_Unsigned) 0U)))
      Doc_24 = mercury__pprint__to_doc_1_f_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_0), ((MR_Box) (MLDS_10)));
    else
    {
      MR_Word ProcDefns_27 = ((MR_Word) ((MR_hl_field(0, MLDS_10, (MR_Integer) 7))));
      MR_Word SelectedProcDefns_28;
      MR_Word Var_51;

      {
        Var_51 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_51, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[1]));
        MR_hl_field(0, Var_51, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_dump_mlds_7_p_0_1));
        MR_hl_field(0, Var_51, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_51, 3) = ((MR_Box) (DumpPredNames_17));
      }
      mercury__list__filter_3_p_0((MR_Word) (&ml_backend__mlds__ml_backend__mlds__type_ctor_info_mlds_function_defn_0), Var_51, ProcDefns_27, &SelectedProcDefns_28);
      Doc_24 = mercury__pprint__to_doc_1_f_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_1[0]), ((MR_Box) (SelectedProcDefns_28)));
    }
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) "% Dumping out raw MLDS...\n");
    ModuleName_29 = ml_backend__mlds__mlds_get_module_name_1_f_0(MLDS_10);
    parse_tree__file_names__module_name_to_cur_dir_file_name_3_p_0((MR_Integer) 9, ModuleName_29, &DumpBaseFileName_30);
    Var_81 = mercury__string__f_43_43_2_f_0((MR_String) "-", StageName_12);
    Var_82 = mercury__string__f_43_43_2_f_0(StageNumStr_18, Var_81);
    Var_84 = mercury__string__f_43_43_2_f_0((MR_String) ".", Var_82);
    DumpFileName_31 = mercury__string__f_43_43_2_f_0(DumpBaseFileName_30, Var_84);
    top_level__mercury_compile_mlds_back_end__dump_mlds_doc_6_p_0(ProgressStream_8, Globals_9, DumpFileName_31, Doc_24);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_14, (MR_String) "% done.\n");
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__dump_mlds_doc_6_p_0(
  MR_Word ProgressStream_7,
  MR_Word Globals_8,
  MR_String DumpFileName_9,
  MR_Word Doc_10)
{
  MR_Word Verbose_12;
  MR_Word Stats_13;
  MR_String StartMsg_14;
  MR_Word OpenResult_15;
  MR_String Var_49;

  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 76, &Verbose_12);
  libs__globals__lookup_bool_option_3_p_0(Globals_8, (MR_Integer) 86, &Stats_13);
  Var_49 = mercury__string__f_43_43_2_f_0(DumpFileName_9, (MR_String) "\'...");
  StartMsg_14 = mercury__string__f_43_43_2_f_0((MR_String) "% Dumping out MLDS to \140", Var_49);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, StartMsg_14);
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_7, Verbose_12);
  mercury__io__open_output_4_p_0(DumpFileName_9, &OpenResult_15);
  if (((MR_tag((MR_Word) OpenResult_15)) == (MR_Integer) 1))
  {
    MR_Word IOError_17 = ((MR_Word) ((MR_hl_field(1, OpenResult_15, (MR_Integer) 0))));
    MR_String ErrorMessage_18;
    MR_String Var_44;
    MR_String Var_52;
    MR_String Var_53;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) "\n");
    Var_44 = mercury__io__error_message_1_f_0(IOError_17);
    Var_52 = mercury__string__f_43_43_2_f_0((MR_String) "\' for output: ", Var_44);
    Var_53 = mercury__string__f_43_43_2_f_0(DumpFileName_9, Var_52);
    ErrorMessage_18 = mercury__string__f_43_43_2_f_0((MR_String) "can\'t open file \140", Var_53);
    libs__file_util__report_error_4_p_0(ProgressStream_7, ErrorMessage_18);
  }
  else
  {
    MR_Word FileStream_16 = ((MR_Word) ((MR_hl_field(0, OpenResult_15, (MR_Integer) 0))));
    MR_Box conv0_STATE_VARIABLE_IO_31_31;

    mercury__pprint__write_5_p_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_1[1]), (MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_4[0]), ((MR_Box) (FileStream_16)), (MR_Integer) 80, ((MR_Box) (Doc_10)), ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_31_31);
    mercury__io__nl_3_p_0(FileStream_16);
    mercury__io__close_output_3_p_0(FileStream_16);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_7, Verbose_12, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_7, Stats_13);
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__mlds_gen_rtti_data_4_p_0(
  MR_Word HLDS_5,
  MR_Word Target_6,
  MR_Word STATE_VARIABLE_MLDS_0_16,
  MR_Word * STATE_VARIABLE_MLDS_17)
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
  MR_Word Var_31;
  MR_Word Var_32;
  MR_Word Var_34;
  MR_Word Var_35;
  MR_Word Var_36;
  MR_Word Var_37;
  MR_Word Var_38;
  MR_Word Var_39;
  MR_Word Var_40;
  MR_Word Var_41;
  MR_Word Var_42;

  backend_libs__type_ctor_info__generate_rtti_2_p_0(HLDS_5, &TypeCtorRtti_8);
  backend_libs__base_typeclass_info__generate_base_typeclass_info_rtti_2_p_0(HLDS_5, &TypeClassInfoRtti_9);
  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_5, &Globals_10);
  libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 349, &NewTypeClassRtti_11);
  backend_libs__type_class_info__generate_type_class_info_rtti_3_p_0(HLDS_5, NewTypeClassRtti_11, &NewTypeClassInfoRttiData_12);
  Var_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeClassInfoRtti_9, NewTypeClassInfoRttiData_12);
  RttiDatas_13 = mercury__list__f_43_43_2_f_0((MR_Word) (&backend_libs__rtti__backend_libs__rtti__type_ctor_info_rtti_data_0), TypeCtorRtti_8, Var_19);
  GlobalData0_14 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 2))));
  ml_backend__rtti_to_mlds__add_rtti_datas_to_mlds_5_p_0(HLDS_5, Target_6, RttiDatas_13, GlobalData0_14, &GlobalData_15);
  Var_31 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 0))));
  Var_32 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 1))));
  Var_34 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 3))));
  Var_35 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 4))));
  Var_36 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 5))));
  Var_37 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 6))));
  Var_38 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 7))));
  Var_39 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 8))));
  Var_40 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 9))));
  Var_41 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 10))));
  Var_42 = ((MR_Word) ((MR_hl_field(0, STATE_VARIABLE_MLDS_0_16, (MR_Integer) 11))));
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
    *STATE_VARIABLE_MLDS_17 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Var_31));
    MR_hl_field(0, base, 1) = ((MR_Box) (Var_32));
    MR_hl_field(0, base, 2) = ((MR_Box) (GlobalData_15));
    MR_hl_field(0, base, 3) = ((MR_Box) (Var_34));
    MR_hl_field(0, base, 4) = ((MR_Box) (Var_35));
    MR_hl_field(0, base, 5) = ((MR_Box) (Var_36));
    MR_hl_field(0, base, 6) = ((MR_Box) (Var_37));
    MR_hl_field(0, base, 7) = ((MR_Box) (Var_38));
    MR_hl_field(0, base, 8) = ((MR_Box) (Var_39));
    MR_hl_field(0, base, 9) = ((MR_Box) (Var_40));
    MR_hl_field(0, base, 10) = ((MR_Box) (Var_41));
    MR_hl_field(0, base, 11) = ((MR_Box) (Var_42));
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_mark_tail_rec_calls_hlds_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_Word Globals_16;
  MR_Word OptTuple_17;
  MR_Word OptimizeTailCalls_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_16);
  libs__globals__get_opt_tuple_2_p_0(Globals_16, &OptTuple_17);
  OptimizeTailCalls_18 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_17, (MR_Integer) 1))) >> 4)) & (MR_Integer) 1);
  switch (OptimizeTailCalls_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
        *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word DepInfo_19;
        MR_Word STATE_VARIABLE_HLDS_29_29;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Marking tail recursive calls...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
        hlds__hlds_dependency_graph__module_info_rebuild_dependency_info_3_p_0(STATE_VARIABLE_HLDS_0_20, &STATE_VARIABLE_HLDS_29_29, &DepInfo_19);
        hlds__mark_tail_calls__mark_self_and_mutual_tail_rec_calls_in_module_for_mlds_code_gen_5_p_0(DepInfo_19, STATE_VARIABLE_HLDS_29_29, STATE_VARIABLE_HLDS_21, STATE_VARIABLE_Specs_0_22, STATE_VARIABLE_Specs_23);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) " done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__3_3;

  ml_backend__add_heap_ops__add_heap_ops_3_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_heap_ops_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word SemidetReclaim_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 371, &SemidetReclaim_14);
  switch (SemidetReclaim_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Adding heap reclamation operations...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (&top_level__mercury_compile_mlds_back_end_scalar_common_7[0]), STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  ml_backend__add_trail_ops__add_trail_ops_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__5_5);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22)
{
  MR_Word Globals_13;
  MR_Word UseTrail_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 289, &UseTrail_14);
  switch (UseTrail_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
      break;
    case (MR_Integer) 1:
      {
        MR_Word DisableTrailOps_16;

        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 355, &DisableTrailOps_16);
        switch (DisableTrailOps_16) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word OptTrailUse_17;
              MR_Word Target_18;
              MR_Word GenerateInline_20;
              MR_Word Var_31;
              MR_Word Var_33;

              libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 529, &OptTrailUse_17);
              libs__globals__get_target_2_p_0(Globals_13, &Target_18);
              switch (Target_18) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word OptTuple_19;

                    libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_19);
                    GenerateInline_20 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_19, (MR_Integer) 1))) & (MR_Integer) 1);
                  }
                  break;
                case (MR_Integer) 1:
                case (MR_Integer) 2:
                  GenerateInline_20 = (MR_Integer) 1;
                  break;
              }
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Adding trailing operations...\n");
              libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
              {
                Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_33, 0) = ((MR_Box) (&top_level__mercury_compile_mlds_back_end_scalar_common_5[0]));
                MR_hl_field(0, Var_33, 1) = ((MR_Box) (top_level__mercury_compile_mlds_back_end__maybe_add_trail_ops_7_p_0_1));
                MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
                MR_hl_field(0, Var_33, 3) = ((MR_Box) (OptTrailUse_17));
                MR_hl_field(0, Var_33, 4) = ((MR_Box) (GenerateInline_20));
              }
              {
                Var_31 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Var_31, 0) = ((MR_Box) (Var_33));
              }
              hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_31, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
            }
            break;
          case (MR_Integer) 1:
            *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
            break;
        }
      }
      break;
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
