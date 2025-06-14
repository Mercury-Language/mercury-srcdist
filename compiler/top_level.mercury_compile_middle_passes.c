/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version rotd-2025-06-14
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


// :- module top_level.mercury_compile_middle_passes.
// :- implementation.

/*
INIT mercury__top_level__mercury_compile_middle_passes__init
ENDINIT
*/

#include "top_level.mercury_compile_middle_passes.mih"


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
#include "deconstruct.mih"
#include "digraph.mih"
#include "edit_seq.mih"
#include "enum.mih"
#include "getopt.mih"
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
#include "one_or_more.mih"
#include "one_or_more_map.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "queue.mih"
#include "recompilation.mih"
#include "require.mih"
#include "robdd.mih"
#include "set.mih"
#include "set_ctree234.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "term_context.mih"
#include "time.mih"
#include "top_level.mih"
#include "transform_hlds.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "analysis.framework.mih"
#include "analysis.operations.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_class.mih"
#include "hlds.hlds_clauses.mih"
#include "hlds.hlds_cons.mih"
#include "hlds.hlds_data.mih"
#include "hlds.hlds_dependency_graph.mih"
#include "hlds.hlds_goal.mih"
#include "hlds.hlds_inst_mode.mih"
#include "hlds.hlds_llds.mih"
#include "hlds.hlds_markers.mih"
#include "hlds.hlds_module.mih"
#include "hlds.hlds_pred.mih"
#include "hlds.hlds_promise.mih"
#include "hlds.hlds_rtti.mih"
#include "hlds.inst_graph.mih"
#include "hlds.instmap.mih"
#include "hlds.make_hlds.mih"
#include "hlds.mark_static_terms.mih"
#include "hlds.passes_aux.mih"
#include "hlds.pred_name.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.indent.mih"
#include "libs.maybe_util.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.deep_profiling.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.find_module.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
#include "parse_tree.parse_tree_output.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_event.mih"
#include "parse_tree.prog_data_foreign.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_data_used_modules.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_parse_tree.mih"
#include "parse_tree.prog_rename.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.var_db.mih"
#include "parse_tree.var_table.mih"
#include "parse_tree.write_error_spec.mih"
#include "recompilation.item_types.mih"
#include "recompilation.record_uses.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "transform_hlds.accumulator.mih"
#include "transform_hlds.closure_analysis.mih"
#include "transform_hlds.complexity.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.deforest.mih"
#include "transform_hlds.delay_construct.mih"
#include "transform_hlds.dep_par_conj.mih"
#include "transform_hlds.direct_arg_in_out.mih"
#include "transform_hlds.distance_granularity.mih"
#include "transform_hlds.equiv_type_hlds.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.float_regs.mih"
#include "transform_hlds.granularity.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.implicit_parallelism.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.intermod_analysis.mih"
#include "transform_hlds.lambda.mih"
#include "transform_hlds.lco.mih"
#include "transform_hlds.loop_inv.mih"
#include "transform_hlds.mmc_analysis.mih"
#include "transform_hlds.par_loop_control.mih"
#include "transform_hlds.parallel_to_plain_conj.mih"
#include "transform_hlds.rbmm.mih"
#include "transform_hlds.size_prof.mih"
#include "transform_hlds.ssdebug.mih"
#include "transform_hlds.stm_expand.mih"
#include "transform_hlds.table_gen.mih"
#include "transform_hlds.tabling_analysis.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.termination.mih"
#include "transform_hlds.trailing_analysis.mih"
#include "transform_hlds.tupling.mih"
#include "transform_hlds.unneeded_code.mih"
#include "transform_hlds.untupling.mih"
#include "transform_hlds.unused_args.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "parse_tree.module_qual.mq_info.mih"
#include "transform_hlds.ctgc.selector.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.higher_order.specialize_in_module.mih"
#include "transform_hlds.implicit_parallelism.introduce_parallelism.mih"
#include "transform_hlds.rbmm.region_analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.analysis.mih"




static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_21,
  MR_Word * STATE_VARIABLE_DumpInfo_22);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_source_to_source_debug_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_stm_goals_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_5_p_0(
  MR_Word ErrorStream_6,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);


static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[3][3];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[2][4];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][5];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[5][2];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[3][1];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][12];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[2][9];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][8];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_9[1][7];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_10[1][10];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_11[1][11];




static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_9[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[2][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_1[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_parse_tree__parse_tree_output__pt_output__arity2__string__builder__handle__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_3[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__string__builder__handle__arity0__string__arity0__string__builder__state__arity0__)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_2[0])),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_handle_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__string__builder__string__builder__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[5][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__framework__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 7U)),
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row   3 */
  {
    ((MR_Box) (MR_Word) ((MR_Unsigned) 1U)),
    (MR_Box) ((MR_Unsigned) 3U)
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[3][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 1)) },
  /* row   1 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   2 */
  { ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_1[2])) },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][12] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 9)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[2][9] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_9[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_10[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_11[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"


static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

void MR_CALL 
top_level__mercury_compile_middle_passes__output_analysis_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25,
  MR_Word STATE_VARIABLE_DumpInfo_0_26,
  MR_Word * STATE_VARIABLE_DumpInfo_27)
{
  MR_bool succeeded;
  MR_Word Globals_14;
  MR_Word Verbose_15;
  MR_Word Stats_16;
  MR_Word ClosureAnalysis_17;
  MR_Word SharingAnalysis_18;
  MR_Word AnalysisInfo_20;
  MR_Word ImportedModules_21;
  MR_Word AnalysisSpecs_22;
  MR_Word STATE_VARIABLE_HLDS_1_34;
  MR_Word STATE_VARIABLE_DumpInfo_1_38;
  MR_Word STATE_VARIABLE_HLDS_2_40;
  MR_Word STATE_VARIABLE_DumpInfo_2_44;
  MR_Word STATE_VARIABLE_HLDS_3_46;
  MR_Word STATE_VARIABLE_DumpInfo_3_50;
  MR_Word STATE_VARIABLE_HLDS_4_52;
  MR_Word STATE_VARIABLE_Specs_1_53;
  MR_Word STATE_VARIABLE_DumpInfo_4_57;
  MR_Word STATE_VARIABLE_HLDS_5_59;
  MR_Word STATE_VARIABLE_Specs_2_60;
  MR_Word STATE_VARIABLE_DumpInfo_5_64;
  MR_Word STATE_VARIABLE_HLDS_9_85;
  MR_Word STATE_VARIABLE_DumpInfo_10_89;
  MR_Word STATE_VARIABLE_HLDS_10_91;
  MR_Word STATE_VARIABLE_DumpInfo_11_95;
  MR_Word STATE_VARIABLE_HLDS_11_97;
  MR_Word STATE_VARIABLE_DumpInfo_12_101;
  MR_Word STATE_VARIABLE_HLDS_12_103;
  MR_Word STATE_VARIABLE_Specs_3_104;
  MR_Word STATE_VARIABLE_DumpInfo_13_108;
  MR_Word STATE_VARIABLE_HLDS_13_110;
  MR_Word STATE_VARIABLE_DumpInfo_14_114;
  MR_Word STATE_VARIABLE_HLDS_14_116;
  MR_Word _UnusedArgsInfos_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 81, &Verbose_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 91, &Stats_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 565, &ClosureAnalysis_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 541, &SharingAnalysis_18);
  succeeded = (ClosureAnalysis_17 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (SharingAnalysis_18 == (MR_Integer) 1);
  if (succeeded)
    top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_0_23, &STATE_VARIABLE_HLDS_1_34);
  else
    STATE_VARIABLE_HLDS_1_34 = STATE_VARIABLE_HLDS_0_23;
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_1_34, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_26, &STATE_VARIABLE_DumpInfo_1_38);
  top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_1_34, &STATE_VARIABLE_HLDS_2_40);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_2_40, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_1_38, &STATE_VARIABLE_DumpInfo_2_44);
  top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_2_40, &STATE_VARIABLE_HLDS_3_46);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_3_46, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_2_44, &STATE_VARIABLE_DumpInfo_3_50);
  top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_3_46, &STATE_VARIABLE_HLDS_4_52, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_1_53);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_4_52, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_3_50, &STATE_VARIABLE_DumpInfo_4_57);
  top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_4_52, &STATE_VARIABLE_HLDS_5_59, STATE_VARIABLE_Specs_1_53, &STATE_VARIABLE_Specs_2_60);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_5_59, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_4_57, &STATE_VARIABLE_DumpInfo_5_64);
  switch (SharingAnalysis_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_9_85 = STATE_VARIABLE_HLDS_5_59;
        STATE_VARIABLE_DumpInfo_10_89 = STATE_VARIABLE_DumpInfo_5_64;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HLDS_6_66;
        MR_Word STATE_VARIABLE_DumpInfo_6_70;
        MR_Word STATE_VARIABLE_HLDS_7_72;
        MR_Word STATE_VARIABLE_DumpInfo_7_76;
        MR_Word STATE_VARIABLE_HLDS_8_78;
        MR_Word STATE_VARIABLE_DumpInfo_8_79;
        MR_Word STATE_VARIABLE_DumpInfo_9_83;

        top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_5_59, &STATE_VARIABLE_HLDS_6_66);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_6_66, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_5_64, &STATE_VARIABLE_DumpInfo_6_70);
        top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_6_66, &STATE_VARIABLE_HLDS_7_72);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_7_72, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_6_70, &STATE_VARIABLE_DumpInfo_7_76);
        top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_7_72, &STATE_VARIABLE_HLDS_8_78, STATE_VARIABLE_DumpInfo_7_76, &STATE_VARIABLE_DumpInfo_8_79);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_8_78, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_8_79, &STATE_VARIABLE_DumpInfo_9_83);
        top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_8_78, &STATE_VARIABLE_HLDS_9_85);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_9_85, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_9_83, &STATE_VARIABLE_DumpInfo_10_89);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_9_85, &STATE_VARIABLE_HLDS_10_91);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_10_91, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_10_89, &STATE_VARIABLE_DumpInfo_11_95);
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_10_91, &STATE_VARIABLE_HLDS_11_97);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_11_97, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_11_95, &STATE_VARIABLE_DumpInfo_12_101);
  top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_9, Verbose_15, Stats_16, &_UnusedArgsInfos_19, STATE_VARIABLE_HLDS_11_97, &STATE_VARIABLE_HLDS_12_103, STATE_VARIABLE_Specs_2_60, &STATE_VARIABLE_Specs_3_104);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_12_103, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_12_101, &STATE_VARIABLE_DumpInfo_13_108);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_12_103, &STATE_VARIABLE_HLDS_13_110);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_13_110, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_13_108, &STATE_VARIABLE_DumpInfo_14_114);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_13_110, &STATE_VARIABLE_HLDS_14_116);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_14_116, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_14_114, STATE_VARIABLE_DumpInfo_27);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_14_116, &AnalysisInfo_20);
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_14_116, &ImportedModules_21);
  analysis__operations__write_analysis_files_8_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]), ProgressStream_9, ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_HLDS_14_116, ImportedModules_21, AnalysisInfo_20, &AnalysisSpecs_22);
  *STATE_VARIABLE_Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AnalysisSpecs_22, STATE_VARIABLE_Specs_3_104);
}

void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word STATE_VARIABLE_HLDS_0_47,
  MR_Word STATE_VARIABLE_Specs_0_48,
  MR_Word * STATE_VARIABLE_Specs_49,
  MR_Word STATE_VARIABLE_DumpInfo_0_50,
  MR_Word * STATE_VARIABLE_DumpInfo_51)
{
  MR_bool succeeded;
  MR_Word Globals_14;
  MR_Word Verbose_15;
  MR_Word Stats_16;
  MR_Word ClosureAnalysis_17;
  MR_Word SharingAnalysis_18;
  MR_Word TransOptState0_19;
  MR_Word ParseTreeTransOpt_20;
  MR_Word TransOptState_21;
  MR_String TransOptFileStr_22;
  MR_Word ModuleName_23;
  MR_String TransOptFileName_25;
  MR_Word ReadFileResult_27;
  MR_Word WriteTransOpt_29;
  MR_Word STATE_VARIABLE_HLDS_1_58;
  MR_Word STATE_VARIABLE_DumpInfo_1_62;
  MR_Word STATE_VARIABLE_HLDS_2_64;
  MR_Word STATE_VARIABLE_DumpInfo_2_68;
  MR_Word STATE_VARIABLE_HLDS_3_70;
  MR_Word STATE_VARIABLE_DumpInfo_3_74;
  MR_Word STATE_VARIABLE_HLDS_4_76;
  MR_Word STATE_VARIABLE_Specs_1_77;
  MR_Word STATE_VARIABLE_DumpInfo_4_81;
  MR_Word STATE_VARIABLE_HLDS_5_83;
  MR_Word STATE_VARIABLE_DumpInfo_5_88;
  MR_Word STATE_VARIABLE_HLDS_9_109;
  MR_Word STATE_VARIABLE_DumpInfo_10_113;
  MR_Word STATE_VARIABLE_HLDS_10_115;
  MR_Word STATE_VARIABLE_DumpInfo_11_119;
  MR_Word STATE_VARIABLE_HLDS_11_121;
  MR_Word STATE_VARIABLE_DumpInfo_12_125;
  MR_Word STATE_VARIABLE_HLDS_12_127;
  MR_Word STATE_VARIABLE_DumpInfo_13_131;
  MR_Word STATE_VARIABLE_HLDS_13_133;
  MR_String _TransOptFileNameProposed_26;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_47, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 81, &Verbose_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 91, &Stats_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 565, &ClosureAnalysis_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 541, &SharingAnalysis_18);
  succeeded = (ClosureAnalysis_17 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (SharingAnalysis_18 == (MR_Integer) 1);
  if (succeeded)
    top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_0_47, &STATE_VARIABLE_HLDS_1_58);
  else
    STATE_VARIABLE_HLDS_1_58 = STATE_VARIABLE_HLDS_0_47;
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_1_58, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_50, &STATE_VARIABLE_DumpInfo_1_62);
  top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_1_58, &STATE_VARIABLE_HLDS_2_64);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_2_64, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_1_62, &STATE_VARIABLE_DumpInfo_2_68);
  top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_2_64, &STATE_VARIABLE_HLDS_3_70);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_3_70, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_2_68, &STATE_VARIABLE_DumpInfo_3_74);
  top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_3_70, &STATE_VARIABLE_HLDS_4_76, STATE_VARIABLE_Specs_0_48, &STATE_VARIABLE_Specs_1_77);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_4_76, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_3_74, &STATE_VARIABLE_DumpInfo_4_81);
  top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_4_76, &STATE_VARIABLE_HLDS_5_83, STATE_VARIABLE_Specs_1_77, STATE_VARIABLE_Specs_49);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_5_83, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_4_81, &STATE_VARIABLE_DumpInfo_5_88);
  switch (SharingAnalysis_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_9_109 = STATE_VARIABLE_HLDS_5_83;
        STATE_VARIABLE_DumpInfo_10_113 = STATE_VARIABLE_DumpInfo_5_88;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HLDS_6_90;
        MR_Word STATE_VARIABLE_DumpInfo_6_94;
        MR_Word STATE_VARIABLE_HLDS_7_96;
        MR_Word STATE_VARIABLE_DumpInfo_7_100;
        MR_Word STATE_VARIABLE_HLDS_8_102;
        MR_Word STATE_VARIABLE_DumpInfo_8_103;
        MR_Word STATE_VARIABLE_DumpInfo_9_107;

        top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_5_83, &STATE_VARIABLE_HLDS_6_90);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_6_90, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_5_88, &STATE_VARIABLE_DumpInfo_6_94);
        top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_6_90, &STATE_VARIABLE_HLDS_7_96);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_7_96, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_6_94, &STATE_VARIABLE_DumpInfo_7_100);
        top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_7_96, &STATE_VARIABLE_HLDS_8_102, STATE_VARIABLE_DumpInfo_7_100, &STATE_VARIABLE_DumpInfo_8_103);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_8_102, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_8_103, &STATE_VARIABLE_DumpInfo_9_107);
        top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_8_102, &STATE_VARIABLE_HLDS_9_109);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_9_109, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_9_107, &STATE_VARIABLE_DumpInfo_10_113);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_9_109, &STATE_VARIABLE_HLDS_10_115);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_10_115, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_10_113, &STATE_VARIABLE_DumpInfo_11_119);
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_10_115, &STATE_VARIABLE_HLDS_11_121);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_11_121, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_11_119, &STATE_VARIABLE_DumpInfo_12_125);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_11_121, &STATE_VARIABLE_HLDS_12_127);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_12_127, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_12_125, &STATE_VARIABLE_DumpInfo_13_131);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_12_127, &STATE_VARIABLE_HLDS_13_133);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_13_133, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_13_131, STATE_VARIABLE_DumpInfo_51);
  TransOptState0_19 = mercury__string__builder__init_0_f_0();
  transform_hlds__intermod_analysis__format_trans_opt_file_4_p_0(STATE_VARIABLE_HLDS_13_133, &ParseTreeTransOpt_20, TransOptState0_19, &TransOptState_21);
  TransOptFileStr_22 = mercury__string__builder__to_string_1_f_0(TransOptState_21);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_13_133, &ModuleName_23);
  parse_tree__file_names__module_name_to_file_name_create_dirs_8_p_0(Globals_14, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.output_trans_opt_file\'/8", (MR_Word) (MR_mkword(3, &top_level__mercury_compile_middle_passes_scalar_common_4[2])), ModuleName_23, &TransOptFileName_25, &_TransOptFileNameProposed_26);
  mercury__io__read_named_file_as_string_4_p_0(TransOptFileName_25, &ReadFileResult_27);
  if (((MR_tag((MR_Word) ReadFileResult_27)) == (MR_Integer) 1))
    WriteTransOpt_29 = (MR_Integer) 1;
  else
  {
    MR_String OldTransOptFileStr_28 = ((MR_String) ((MR_hl_field(0, ReadFileResult_27, 0))));

    succeeded = (strcmp(OldTransOptFileStr_28, TransOptFileStr_22) == 0);
    if (succeeded)
      WriteTransOpt_29 = (MR_Integer) 0;
    else
      WriteTransOpt_29 = (MR_Integer) 1;
  }
  switch (WriteTransOpt_29) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word _TouchSucceeded_46;

        parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_14, ProgressStream_9, ModuleName_23, (MR_Word) (MR_mkword(3, &top_level__mercury_compile_middle_passes_scalar_common_4[3])), &_TouchSucceeded_46);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word WriteFileResult_32;
        MR_Word TouchDateFile_410;

        mercury__io__open_output_4_p_0(TransOptFileName_25, &WriteFileResult_32);
        if (((MR_tag((MR_Word) WriteFileResult_32)) == (MR_Integer) 1))
        {
          MR_Word Error_42 = ((MR_Word) ((MR_hl_field(1, WriteFileResult_32, 0))));
          MR_String ProgName_43;
          MR_String ErrorMsg_44;

          TouchDateFile_410 = (MR_Integer) 0;
          mercury__io__progname_base_4_p_0((MR_String) "mmc", &ProgName_43);
          mercury__io__error_message_2_p_0(Error_42, &ErrorMsg_44);
          mercury__io__write_string_4_p_0(ProgressStream_9, ProgName_43);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) ": cannot open \140");
          mercury__io__write_string_4_p_0(ProgressStream_9, TransOptFileName_25);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\' for output: ");
          mercury__io__write_string_4_p_0(ProgressStream_9, ErrorMsg_44);
          mercury__io__write_string_4_p_0(ProgressStream_9, (MR_String) "\n");
          mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
        }
        else
        {
          MR_Word TransOptStream_33 = ((MR_Word) ((MR_hl_field(0, WriteFileResult_32, 0))));
          MR_Word Experiment5_34;

          mercury__io__write_string_4_p_0(TransOptStream_33, TransOptFileStr_22);
          mercury__io__close_output_3_p_0(TransOptStream_33);
          TouchDateFile_410 = (MR_Integer) 1;
          libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 759, &Experiment5_34);
          switch (Experiment5_34) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TransOptXResult_35;
                MR_String Var_147;

                Var_147 = mercury__string__f_43_43_2_f_0(TransOptFileName_25, (MR_String) "x");
                mercury__io__open_output_4_p_0(Var_147, &TransOptXResult_35);
                if (!(((MR_tag((MR_Word) TransOptXResult_35)) == (MR_Integer) 1)))
                {
                  MR_Word TransOptXStream_37 = ((MR_Word) ((MR_hl_field(0, TransOptXResult_35, 0))));
                  MR_Word Info_38;
                  MR_Word TransOptXState0_39;
                  MR_Word TransOptXState_40;
                  MR_String TransOptXFileStr_41;

                  Info_38 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_14, (MR_Integer) 0, (MR_Integer) 0);
                  TransOptXState0_39 = mercury__string__builder__init_0_f_0();
                  parse_tree__parse_tree_out__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_99_117_114_121_95_102_111_114_109_97_116_95_112_97_114_115_101_95_116_114_101_101_95_116_114_97_110_115_95_111_112_116_95_95_91_83_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_104_97_110_100_108_101_44_32_85_32_61_32_115_116_114_105_110_103_46_98_117_105_108_100_101_114_46_115_116_97_116_101_93_95_48_95_49_5_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_2[1]), Info_38, ParseTreeTransOpt_20, TransOptXState0_39, &TransOptXState_40);
                  TransOptXFileStr_41 = mercury__string__builder__to_string_1_f_0(TransOptXState_40);
                  mercury__io__write_string_4_p_0(TransOptXStream_37, TransOptXFileStr_41);
                  mercury__io__close_output_3_p_0(TransOptXStream_37);
                }
              }
              break;
          }
        }
        switch (TouchDateFile_410) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word _TouchSucceeded_405;

              parse_tree__module_cmds__touch_module_ext_datestamp_7_p_0(Globals_14, ProgressStream_9, ModuleName_23, (MR_Word) (MR_mkword(3, &top_level__mercury_compile_middle_passes_scalar_common_4[3])), &_TouchSucceeded_405);
            }
            break;
        }
      }
      break;
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word * UnusedArgsInfos_11,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_bool succeeded;
  MR_Word Globals_14;
  MR_Word Verbose_15;
  MR_Word Stats_16;
  MR_Word ClosureAnalysis_17;
  MR_Word SharingAnalysis_18;
  MR_Word STATE_VARIABLE_HLDS_2_31;
  MR_Word STATE_VARIABLE_HLDS_3_33;
  MR_Word STATE_VARIABLE_HLDS_4_35;
  MR_Word STATE_VARIABLE_HLDS_5_37;
  MR_Word STATE_VARIABLE_Specs_1_38;
  MR_Word STATE_VARIABLE_HLDS_6_40;
  MR_Word STATE_VARIABLE_Specs_2_41;
  MR_Word STATE_VARIABLE_HLDS_7_43;
  MR_Word STATE_VARIABLE_HLDS_8_46;
  MR_Word STATE_VARIABLE_HLDS_9_48;
  MR_Word STATE_VARIABLE_HLDS_10_50;
  MR_Word Globals_62;
  MR_Word ClosureAnalysis_63;
  MR_Word Globals_69;
  MR_Word ExceptionAnalysis_70;
  MR_Word Globals_76;
  MR_Word Termination_77;
  MR_Word Globals_85;
  MR_Word Termination2_86;
  MR_Word Globals_94;
  MR_Word Sharing_95;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 81, &Verbose_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 91, &Stats_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 565, &ClosureAnalysis_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 541, &SharingAnalysis_18);
  succeeded = (ClosureAnalysis_17 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (SharingAnalysis_18 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_HLDS_1_29;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Transforming lambda expressions...");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_15);
    transform_hlds__lambda__expand_lambdas_in_module_2_p_0(STATE_VARIABLE_HLDS_0_19, &STATE_VARIABLE_HLDS_1_29);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Transforming stm expressions...");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_15);
    transform_hlds__stm_expand__stm_process_module_2_p_0(STATE_VARIABLE_HLDS_1_29, &STATE_VARIABLE_HLDS_2_31);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
  }
  else
    STATE_VARIABLE_HLDS_2_31 = STATE_VARIABLE_HLDS_0_19;
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_2_31, &Globals_62);
  libs__globals__lookup_bool_option_3_p_0(Globals_62, (MR_Integer) 565, &ClosureAnalysis_63);
  switch (ClosureAnalysis_63) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_HLDS_3_33 = STATE_VARIABLE_HLDS_2_31;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Analysing closures...\n");
        transform_hlds__closure_analysis__closure_analyse_module_3_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_2_31, &STATE_VARIABLE_HLDS_3_33);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_3_33, &Globals_69);
  libs__globals__lookup_bool_option_3_p_0(Globals_69, (MR_Integer) 564, &ExceptionAnalysis_70);
  switch (ExceptionAnalysis_70) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_HLDS_4_35 = STATE_VARIABLE_HLDS_3_33;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Analysing exceptions...\n");
        transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(STATE_VARIABLE_HLDS_3_33, &STATE_VARIABLE_HLDS_4_35);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_9, Verbose_15, Stats_16, UnusedArgsInfos_11, STATE_VARIABLE_HLDS_4_35, &STATE_VARIABLE_HLDS_5_37, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_1_38);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_5_37, &Globals_76);
  libs__globals__lookup_bool_option_3_p_0(Globals_76, (MR_Integer) 549, &Termination_77);
  switch (Termination_77) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_6_40 = STATE_VARIABLE_HLDS_5_37;
        STATE_VARIABLE_Specs_2_41 = STATE_VARIABLE_Specs_1_38;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermSpecs_78;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Detecting termination...\n");
        transform_hlds__termination__analyse_termination_in_module_3_p_0(STATE_VARIABLE_HLDS_5_37, &STATE_VARIABLE_HLDS_6_40, &TermSpecs_78);
        STATE_VARIABLE_Specs_2_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_78, STATE_VARIABLE_Specs_1_38);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Termination checking done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_6_40, &Globals_85);
  libs__globals__lookup_bool_option_3_p_0(Globals_85, (MR_Integer) 556, &Termination2_86);
  switch (Termination2_86) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_7_43 = STATE_VARIABLE_HLDS_6_40;
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_2_41;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermSpecs_87;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Detecting termination 2...\n");
        transform_hlds__term_constr_main__term2_analyse_module_3_p_0(STATE_VARIABLE_HLDS_6_40, &STATE_VARIABLE_HLDS_7_43, &TermSpecs_87);
        *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_87, STATE_VARIABLE_Specs_2_41);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Termination 2 checking done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_7_43, &Globals_94);
  libs__globals__lookup_bool_option_3_p_0(Globals_94, (MR_Integer) 541, &Sharing_95);
  switch (Sharing_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_HLDS_8_46 = STATE_VARIABLE_HLDS_7_43;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Structure sharing analysis...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_15);
        transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_7_43, &STATE_VARIABLE_HLDS_8_46);
        transform_hlds__ctgc__selector__reset_tables_2_p_0();
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_8_46, &STATE_VARIABLE_HLDS_9_48);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_9_48, &STATE_VARIABLE_HLDS_10_50);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_10_50, STATE_VARIABLE_HLDS_20);
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_11_p_0(
  MR_Word ProgressStream_12,
  MR_Word ErrorStream_13,
  MR_Word OpModeFrontAndMiddle_14,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word STATE_VARIABLE_DumpInfo_0_27,
  MR_Word * STATE_VARIABLE_DumpInfo_28,
  MR_Word STATE_VARIABLE_Specs_0_29,
  MR_Word * Specs_17)
{
  MR_Word Globals_19;
  MR_Word Verbose_20;
  MR_Word Stats_21;
  MR_Word STATE_VARIABLE_HLDS_1_34;
  MR_Word STATE_VARIABLE_HLDS_2_36;
  MR_Word STATE_VARIABLE_Specs_1_37;
  MR_Word STATE_VARIABLE_DumpInfo_1_41;
  MR_Word STATE_VARIABLE_HLDS_3_43;
  MR_Word STATE_VARIABLE_DumpInfo_2_47;
  MR_Word STATE_VARIABLE_HLDS_4_49;
  MR_Word STATE_VARIABLE_Specs_2_50;
  MR_Word STATE_VARIABLE_DumpInfo_3_54;
  MR_Word STATE_VARIABLE_HLDS_5_56;
  MR_Word STATE_VARIABLE_DumpInfo_4_60;
  MR_Word STATE_VARIABLE_HLDS_6_62;
  MR_Word STATE_VARIABLE_DumpInfo_5_66;
  MR_Word STATE_VARIABLE_HLDS_7_68;
  MR_Word STATE_VARIABLE_DumpInfo_6_72;
  MR_Word STATE_VARIABLE_HLDS_8_74;
  MR_Word STATE_VARIABLE_DumpInfo_7_78;
  MR_Word STATE_VARIABLE_HLDS_9_80;
  MR_Word STATE_VARIABLE_Specs_3_81;
  MR_Word STATE_VARIABLE_DumpInfo_8_85;
  MR_Word STATE_VARIABLE_HLDS_10_87;
  MR_Word STATE_VARIABLE_Specs_4_88;
  MR_Word STATE_VARIABLE_DumpInfo_9_92;
  MR_Word STATE_VARIABLE_HLDS_11_94;
  MR_Word STATE_VARIABLE_DumpInfo_10_98;
  MR_Word STATE_VARIABLE_Specs_5_100;
  MR_Word STATE_VARIABLE_DumpInfo_11_104;
  MR_Word STATE_VARIABLE_HLDS_12_106;
  MR_Word STATE_VARIABLE_DumpInfo_12_110;
  MR_Word STATE_VARIABLE_HLDS_13_112;
  MR_Word STATE_VARIABLE_DumpInfo_13_116;
  MR_Word STATE_VARIABLE_HLDS_14_118;
  MR_Word STATE_VARIABLE_DumpInfo_14_122;
  MR_Word STATE_VARIABLE_HLDS_15_124;
  MR_Word STATE_VARIABLE_DumpInfo_15_128;
  MR_Word STATE_VARIABLE_HLDS_16_130;
  MR_Word STATE_VARIABLE_Specs_6_131;
  MR_Word STATE_VARIABLE_DumpInfo_16_135;
  MR_Word STATE_VARIABLE_HLDS_17_137;
  MR_Word STATE_VARIABLE_DumpInfo_17_141;
  MR_Word STATE_VARIABLE_HLDS_18_143;
  MR_Word STATE_VARIABLE_DumpInfo_18_144;
  MR_Word STATE_VARIABLE_DumpInfo_19_148;
  MR_Word STATE_VARIABLE_HLDS_19_150;
  MR_Word STATE_VARIABLE_DumpInfo_20_154;
  MR_Word STATE_VARIABLE_HLDS_20_156;
  MR_Word STATE_VARIABLE_DumpInfo_21_160;
  MR_Word STATE_VARIABLE_HLDS_21_162;
  MR_Word STATE_VARIABLE_DumpInfo_22_166;
  MR_Word STATE_VARIABLE_HLDS_22_168;
  MR_Word STATE_VARIABLE_DumpInfo_23_172;
  MR_Word STATE_VARIABLE_HLDS_23_174;
  MR_Word STATE_VARIABLE_Specs_7_175;
  MR_Word STATE_VARIABLE_DumpInfo_24_179;
  MR_Word STATE_VARIABLE_HLDS_24_181;
  MR_Word STATE_VARIABLE_DumpInfo_25_185;
  MR_Word STATE_VARIABLE_HLDS_25_187;
  MR_Word STATE_VARIABLE_DumpInfo_26_191;
  MR_Word STATE_VARIABLE_HLDS_26_196;
  MR_Word STATE_VARIABLE_DumpInfo_27_201;
  MR_Word STATE_VARIABLE_HLDS_27_203;
  MR_Word STATE_VARIABLE_Specs_8_204;
  MR_Word STATE_VARIABLE_DumpInfo_28_208;
  MR_Word STATE_VARIABLE_HLDS_28_210;
  MR_Word STATE_VARIABLE_DumpInfo_29_214;
  MR_Word STATE_VARIABLE_HLDS_29_216;
  MR_Word STATE_VARIABLE_DumpInfo_30_220;
  MR_Word STATE_VARIABLE_HLDS_30_222;
  MR_Word STATE_VARIABLE_DumpInfo_31_226;
  MR_Word STATE_VARIABLE_HLDS_31_228;
  MR_Word STATE_VARIABLE_DumpInfo_32_232;
  MR_Word STATE_VARIABLE_HLDS_32_234;
  MR_Word STATE_VARIABLE_DumpInfo_33_238;
  MR_Word STATE_VARIABLE_HLDS_33_240;
  MR_Word STATE_VARIABLE_DumpInfo_34_244;
  MR_Word STATE_VARIABLE_HLDS_34_246;
  MR_Word STATE_VARIABLE_DumpInfo_35_251;
  MR_Word _UnusedArgsInfos_22;
  MR_Word _SimplifySpecsPreImpPar_23;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_25, &Globals_19);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 81, &Verbose_20);
  libs__globals__lookup_bool_option_3_p_0(Globals_19, (MR_Integer) 91, &Stats_21);
  top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_5_p_0(ErrorStream_13, STATE_VARIABLE_HLDS_0_25, &STATE_VARIABLE_HLDS_1_34);
  top_level__mercury_compile_middle_passes__tabling_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_1_34, &STATE_VARIABLE_HLDS_2_36, STATE_VARIABLE_Specs_0_29, &STATE_VARIABLE_Specs_1_37);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_2_36, (MR_Integer) 105, (MR_String) "tabling", STATE_VARIABLE_DumpInfo_0_27, &STATE_VARIABLE_DumpInfo_1_41);
  top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_2_36, &STATE_VARIABLE_HLDS_3_43);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_3_43, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_1_41, &STATE_VARIABLE_DumpInfo_2_47);
  top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_3_43, &STATE_VARIABLE_HLDS_4_49, STATE_VARIABLE_Specs_1_37, &STATE_VARIABLE_Specs_2_50);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_4_49, (MR_Integer) 111, (MR_String) "daio", STATE_VARIABLE_DumpInfo_2_47, &STATE_VARIABLE_DumpInfo_3_54);
  top_level__mercury_compile_middle_passes__expand_stm_goals_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_4_49, &STATE_VARIABLE_HLDS_5_56);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_5_56, (MR_Integer) 113, (MR_String) "stm", STATE_VARIABLE_DumpInfo_3_54, &STATE_VARIABLE_DumpInfo_4_60);
  top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_5_56, &STATE_VARIABLE_HLDS_6_62);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_6_62, (MR_Integer) 115, (MR_String) "equiv_types", STATE_VARIABLE_DumpInfo_4_60, &STATE_VARIABLE_DumpInfo_5_66);
  top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_6_62, &STATE_VARIABLE_HLDS_7_68);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_7_68, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_5_66, &STATE_VARIABLE_DumpInfo_6_72);
  top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_7_68, &STATE_VARIABLE_HLDS_8_74);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_8_74, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_6_72, &STATE_VARIABLE_DumpInfo_7_78);
  top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_8_74, &STATE_VARIABLE_HLDS_9_80, STATE_VARIABLE_Specs_2_50, &STATE_VARIABLE_Specs_3_81);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_9_80, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_7_78, &STATE_VARIABLE_DumpInfo_8_85);
  top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_9_80, &STATE_VARIABLE_HLDS_10_87, STATE_VARIABLE_Specs_3_81, &STATE_VARIABLE_Specs_4_88);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_10_87, (MR_Integer) 121, (MR_String) "termination2", STATE_VARIABLE_DumpInfo_8_85, &STATE_VARIABLE_DumpInfo_9_92);
  top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_10_87, &STATE_VARIABLE_HLDS_11_94);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_11_94, (MR_Integer) 125, (MR_String) "type_ctor_infos", STATE_VARIABLE_DumpInfo_9_92, &STATE_VARIABLE_DumpInfo_10_98);
  top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_11_94, STATE_VARIABLE_Specs_4_88, &STATE_VARIABLE_Specs_5_100);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_11_94, (MR_Integer) 130, (MR_String) "warn_dead_procs", STATE_VARIABLE_DumpInfo_10_98, &STATE_VARIABLE_DumpInfo_11_104);
  top_level__mercury_compile_middle_passes__maybe_untuple_arguments_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_11_94, &STATE_VARIABLE_HLDS_12_106);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_12_106, (MR_Integer) 133, (MR_String) "untupling", STATE_VARIABLE_DumpInfo_11_104, &STATE_VARIABLE_DumpInfo_12_110);
  top_level__mercury_compile_middle_passes__maybe_tuple_arguments_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_12_106, &STATE_VARIABLE_HLDS_13_112);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_13_112, (MR_Integer) 134, (MR_String) "tupling", STATE_VARIABLE_DumpInfo_12_110, &STATE_VARIABLE_DumpInfo_13_116);
  top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_13_112, &STATE_VARIABLE_HLDS_14_118);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_14_118, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_13_116, &STATE_VARIABLE_DumpInfo_14_122);
  top_level__mercury_compile_middle_passes__maybe_source_to_source_debug_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_14_118, &STATE_VARIABLE_HLDS_15_124);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_15_124, (MR_Integer) 137, (MR_String) "ssdb", STATE_VARIABLE_DumpInfo_14_122, &STATE_VARIABLE_DumpInfo_15_128);
  top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_15_124, &STATE_VARIABLE_HLDS_16_130, STATE_VARIABLE_Specs_5_100, &STATE_VARIABLE_Specs_6_131);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_16_130, (MR_Integer) 140, (MR_String) "accum", STATE_VARIABLE_DumpInfo_15_128, &STATE_VARIABLE_DumpInfo_16_135);
  top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_16_130, &STATE_VARIABLE_HLDS_17_137);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_17_137, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_16_135, &STATE_VARIABLE_DumpInfo_17_141);
  top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_17_137, &STATE_VARIABLE_HLDS_18_143, STATE_VARIABLE_DumpInfo_17_141, &STATE_VARIABLE_DumpInfo_18_144);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_18_143, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_18_144, &STATE_VARIABLE_DumpInfo_19_148);
  top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_18_143, &STATE_VARIABLE_HLDS_19_150);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_19_150, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_19_148, &STATE_VARIABLE_DumpInfo_20_154);
  top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_19_150, &STATE_VARIABLE_HLDS_20_156);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_20_156, (MR_Integer) 160, (MR_String) "delay_construct", STATE_VARIABLE_DumpInfo_20_154, &STATE_VARIABLE_DumpInfo_21_160);
  top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_20_156, &STATE_VARIABLE_HLDS_21_162);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_21_162, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_21_160, &STATE_VARIABLE_DumpInfo_22_166);
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_21_162, &STATE_VARIABLE_HLDS_22_168);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_22_168, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_22_166, &STATE_VARIABLE_DumpInfo_23_172);
  top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_12, Verbose_20, Stats_21, &_UnusedArgsInfos_22, STATE_VARIABLE_HLDS_22_168, &STATE_VARIABLE_HLDS_23_174, STATE_VARIABLE_Specs_6_131, &STATE_VARIABLE_Specs_7_175);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_23_174, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_23_172, &STATE_VARIABLE_DumpInfo_24_179);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_23_174, &STATE_VARIABLE_HLDS_24_181);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_24_181, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_24_179, &STATE_VARIABLE_DumpInfo_25_185);
  top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_24_181, &STATE_VARIABLE_HLDS_25_187);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_25_187, (MR_Integer) 170, (MR_String) "unneeded_code", STATE_VARIABLE_DumpInfo_25_185, &STATE_VARIABLE_DumpInfo_26_191);
  top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 3, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_25_187, &STATE_VARIABLE_HLDS_26_196, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreImpPar_23);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_26_196, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", STATE_VARIABLE_DumpInfo_26_191, &STATE_VARIABLE_DumpInfo_27_201);
  top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_10_p_0(ProgressStream_12, ErrorStream_13, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_26_196, &STATE_VARIABLE_HLDS_27_203, STATE_VARIABLE_Specs_7_175, &STATE_VARIABLE_Specs_8_204);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_27_203, (MR_Integer) 173, (MR_String) "implicit_parallelism", STATE_VARIABLE_DumpInfo_27_201, &STATE_VARIABLE_DumpInfo_28_208);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_27_203, &STATE_VARIABLE_HLDS_28_210);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_28_210, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_28_208, &STATE_VARIABLE_DumpInfo_29_214);
  top_level__mercury_compile_middle_passes__maybe_control_granularity_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_28_210, &STATE_VARIABLE_HLDS_29_216);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_29_216, (MR_Integer) 200, (MR_String) "granularity", STATE_VARIABLE_DumpInfo_29_214, &STATE_VARIABLE_DumpInfo_30_220);
  top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_29_216, &STATE_VARIABLE_HLDS_30_222);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_30_222, (MR_Integer) 201, (MR_String) "distance_granularity", STATE_VARIABLE_DumpInfo_30_220, &STATE_VARIABLE_DumpInfo_31_226);
  top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_30_222, &STATE_VARIABLE_HLDS_31_228);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_31_228, (MR_Integer) 205, (MR_String) "dependent_par_conj", STATE_VARIABLE_DumpInfo_31_226, &STATE_VARIABLE_DumpInfo_32_232);
  top_level__mercury_compile_middle_passes__maybe_par_loop_control_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_31_228, &STATE_VARIABLE_HLDS_32_234);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_32_234, (MR_Integer) 206, (MR_String) "par_loop_control", STATE_VARIABLE_DumpInfo_32_232, &STATE_VARIABLE_DumpInfo_33_238);
  top_level__mercury_compile_middle_passes__maybe_lco_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_32_234, &STATE_VARIABLE_HLDS_33_240);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_33_240, (MR_Integer) 210, (MR_String) "lco", STATE_VARIABLE_DumpInfo_33_238, &STATE_VARIABLE_DumpInfo_34_244);
  top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_9_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_33_240, &STATE_VARIABLE_HLDS_34_246, STATE_VARIABLE_Specs_8_204, Specs_17);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_34_246, (MR_Integer) 213, (MR_String) "float_reg_wrapper", STATE_VARIABLE_DumpInfo_34_244, &STATE_VARIABLE_DumpInfo_35_251);
  switch (OpModeFrontAndMiddle_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_26 = STATE_VARIABLE_HLDS_34_246;
        *STATE_VARIABLE_DumpInfo_28 = STATE_VARIABLE_DumpInfo_35_251;
      }
      break;
    case (MR_Integer) 2:
    case (MR_Integer) 1:
    case (MR_Integer) 3:
      {
        MR_Word STATE_VARIABLE_HLDS_35_256;
        MR_Word STATE_VARIABLE_DumpInfo_36_261;
        MR_Word STATE_VARIABLE_HLDS_36_263;
        MR_Word STATE_VARIABLE_DumpInfo_37_267;
        MR_Word STATE_VARIABLE_HLDS_37_269;
        MR_Word STATE_VARIABLE_DumpInfo_38_273;
        MR_Word STATE_VARIABLE_HLDS_38_275;
        MR_Word STATE_VARIABLE_DumpInfo_39_279;
        MR_Word STATE_VARIABLE_HLDS_39_281;
        MR_Word STATE_VARIABLE_DumpInfo_40_285;
        MR_Word STATE_VARIABLE_DumpInfo_41_291;
        MR_Word _SimplifySpecsPreProf_24;

        top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_12, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_34_246, &STATE_VARIABLE_HLDS_35_256, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreProf_24);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_35_256, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", STATE_VARIABLE_DumpInfo_35_251, &STATE_VARIABLE_DumpInfo_36_261);
        top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_35_256, &STATE_VARIABLE_HLDS_36_263);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_36_263, (MR_Integer) 220, (MR_String) "term_size_prof", STATE_VARIABLE_DumpInfo_36_261, &STATE_VARIABLE_DumpInfo_37_267);
        top_level__mercury_compile_middle_passes__maybe_deep_profiling_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_36_263, &STATE_VARIABLE_HLDS_37_269);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_37_269, (MR_Integer) 225, (MR_String) "deep_profiling", STATE_VARIABLE_DumpInfo_37_267, &STATE_VARIABLE_DumpInfo_38_273);
        top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_37_269, &STATE_VARIABLE_HLDS_38_275);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_38_275, (MR_Integer) 230, (MR_String) "complexity", STATE_VARIABLE_DumpInfo_38_273, &STATE_VARIABLE_DumpInfo_39_279);
        top_level__mercury_compile_middle_passes__maybe_region_analysis_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_38_275, &STATE_VARIABLE_HLDS_39_281);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, STATE_VARIABLE_HLDS_39_281, (MR_Integer) 240, (MR_String) "region_analysis", STATE_VARIABLE_DumpInfo_39_279, &STATE_VARIABLE_DumpInfo_40_285);
        top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_7_p_0(ProgressStream_12, Verbose_20, Stats_21, STATE_VARIABLE_HLDS_39_281, STATE_VARIABLE_HLDS_26);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, *STATE_VARIABLE_HLDS_26, (MR_Integer) 250, (MR_String) "dead_procs", STATE_VARIABLE_DumpInfo_40_285, &STATE_VARIABLE_DumpInfo_41_291);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_12, *STATE_VARIABLE_HLDS_26, (MR_Integer) 299, (MR_String) "middle_pass", STATE_VARIABLE_DumpInfo_41_291, STATE_VARIABLE_DumpInfo_28);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word OptDeadProcs_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  OptDeadProcs_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 1))) >> 27)) & (MR_Integer) 1);
  switch (OptDeadProcs_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
      break;
    case (MR_Integer) 0:
      {
        MR_Word NeededMap_17;
        MR_Word ElimMap_18;
        MR_Word DebugDeadProcElim_19;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Eliminating dead procedures...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0((MR_Integer) 0, &NeededMap_17, &ElimMap_18, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 123, &DebugDeadProcElim_19);
        switch (DebugDeadProcElim_19) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word DebugStream_20;

              hlds__passes_aux__get_debug_output_stream_4_p_0(*STATE_VARIABLE_HLDS_22, &DebugStream_20);
              transform_hlds__dead_proc_elim__output_needed_map_5_p_0(DebugStream_20, STATE_VARIABLE_HLDS_0_21, NeededMap_17);
              transform_hlds__dead_proc_elim__output_elimination_msgs_5_p_0(DebugStream_20, STATE_VARIABLE_HLDS_0_21, ElimMap_18);
            }
            break;
        }
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word Analysis_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  Analysis_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 1))) >> 20)) & (MR_Integer) 1);
  switch (Analysis_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Analysing regions ...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__rbmm__region_analysis__do_region_analysis_2_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  transform_hlds__complexity__complexity_process_proc_msg_8_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Integer) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__8_8);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__8_8));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word MaybeNumProcMap_13;

  hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(STATE_VARIABLE_HLDS_0_16, &MaybeNumProcMap_13);
  if ((MaybeNumProcMap_13 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
  else
  {
    MR_Integer NumProcs_14;
    MR_Word ProcMap_15;
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, MaybeNumProcMap_13, 0))));
    MR_Word Var_24;
    MR_Word Var_26;

    NumProcs_14 = ((MR_Integer) ((MR_hl_field(0, Var_20, 0))));
    ProcMap_15 = ((MR_Word) ((MR_hl_field(0, Var_20, 1))));
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying complexity experiment transformation...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_11[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 3));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (ProgressStream_8));
      MR_hl_field(0, Var_26, 4) = ((MR_Box) (NumProcs_14));
      MR_hl_field(0, Var_26, 5) = ((MR_Box) (ProcMap_15));
    }
    {
      Var_24 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_24, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_24, 1) = ((MR_Box) (Var_26));
    }
    hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_24, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word ProfileDeep_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 273, &ProfileDeep_14);
  switch (ProfileDeep_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying deep profiling transformation...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        ll_backend__deep_profiling__apply_deep_profiling_transform_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__5_5;
  MR_Word conv0_HeadVar__7_7;

  transform_hlds__size_prof__size_prof_process_proc_msg_7_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__7_7);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__7_7));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  MR_Word Globals_13;
  MR_Word AsWords_14;
  MR_Word AsCells_15;
  MR_Word MaybeTransform_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 290, &AsWords_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 291, &AsCells_15);
  switch (AsWords_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (AsCells_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransform_16 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          MaybeTransform_16 = (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_5[0]));
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (AsCells_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransform_16 = (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_5[1]));
          break;
        case (MR_Integer) 1:
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/7", (MR_String) "as_words and as_cells");
            return;
          }
          break;
      }
      break;
  }
  if ((MaybeTransform_16 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
  else
  {
    MR_Word Transform_17 = ((MR_Word) ((MR_hl_field(1, MaybeTransform_16, 0))));
    MR_Word Var_31;
    MR_Word Var_33;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying term size profiling transformation...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_10[0]));
      MR_hl_field(0, Var_33, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0_1));
      MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(0, Var_33, 3) = ((MR_Box) (ProgressStream_8));
      MR_hl_field(0, Var_33, 4) = ((MR_Box) (Transform_17));
    }
    {
      Var_31 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(3, Var_31, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(3, Var_31, 1) = ((MR_Box) (Var_33));
    }
    hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_31, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Globals_16;
  MR_Word UseFloatRegs_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 336, &UseFloatRegs_17);
  switch (UseFloatRegs_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word RegSpecs_18;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Inserting float register wrappers...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
        transform_hlds__float_regs__insert_reg_wrappers_3_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20, &RegSpecs_18);
        *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), RegSpecs_18, STATE_VARIABLE_Specs_0_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) " done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word LoopControl_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 766, &LoopControl_14);
  switch (LoopControl_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying parallel loop control transformation...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__4_4;

  transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  MR_Word HasParallelConj_13;

  hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_HLDS_0_18, &HasParallelConj_13);
  switch (HasParallelConj_13) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Globals_14;
        MR_Word SupportsParConj_15;

        hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_14);
        libs__globals__current_grade_supports_par_conj_2_p_0(Globals_14, &SupportsParConj_15);
        switch (SupportsParConj_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_5[2])), STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_HLDS_2_28;
              MR_Word Var_16;
              MR_Word Var_17;

              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Dependent parallel conjunction transformation...\n");
              libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
              transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_2_28);
              transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0((MR_Integer) 1, &Var_16, &Var_17, STATE_VARIABLE_HLDS_2_28, STATE_VARIABLE_HLDS_19);
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
            }
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word Parallel_14;
  MR_Word HighLevelCode_15;
  MR_Integer Distance_16;
  MR_Word HasParallelConj_17;
  MR_Integer Var_26;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 294, &Parallel_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 337, &HighLevelCode_15);
  libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 763, &Distance_16);
  hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_HLDS_0_19, &HasParallelConj_17);
  succeeded = (Parallel_14 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (HasParallelConj_17 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (HighLevelCode_15 == (MR_Integer) 0);
      if (succeeded)
      {
        Var_26 = (MR_Integer) 0;
        succeeded = (Distance_16 > Var_26);
      }
    }
  }
  if (succeeded)
  {
    MR_Word Target_18;

    libs__globals__get_target_2_p_0(Globals_13, &Target_18);
    switch (Target_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Distance granularity transformation...\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
          transform_hlds__distance_granularity__control_distance_granularity_3_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20, Distance_16);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        break;
    }
  }
  else
    *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word Parallel_14;
  MR_Word HighLevelCode_15;
  MR_Word Control_16;
  MR_Word HasParallelConj_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 294, &Parallel_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 337, &HighLevelCode_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 762, &Control_16);
  hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_HLDS_0_19, &HasParallelConj_17);
  succeeded = (Parallel_14 == (MR_Integer) 1);
  if (succeeded)
  {
    succeeded = (HasParallelConj_17 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (HighLevelCode_15 == (MR_Integer) 0);
      if (succeeded)
        succeeded = (Control_16 == (MR_Integer) 1);
    }
  }
  if (succeeded)
  {
    MR_Word Target_18;

    libs__globals__get_target_2_p_0(Globals_13, &Target_18);
    switch (Target_18) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Granularity control transformation...\n");
          libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
          transform_hlds__granularity__control_granularity_2_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
          libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        break;
      case (MR_Integer) 2:
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        break;
    }
  }
  else
    *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word TablingAnalysis_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 540, &TablingAnalysis_14);
  switch (TablingAnalysis_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Analysing minimal model tabling...\n");
        transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word LCMC_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  LCMC_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 1))) >> 28)) & (MR_Integer) 1);
  switch (LCMC_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Looking for LCO modulo constructor application ...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__lco__lco_modulo_constructors_2_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__unneeded_code__unneeded_process_proc_msg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
  *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word UnneededCode_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  UnneededCode_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 2)) & (MR_Integer) 1);
  switch (UnneededCode_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        MR_Word Var_23;
        MR_Word Var_25;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Removing unneeded code from procedure bodies...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_7[1]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0_1));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_25, 3) = ((MR_Box) (ProgressStream_8));
        }
        {
          Var_23 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Var_23, 0) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(3, Var_23, 1) = ((MR_Box) (Var_25));
        }
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_23, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word AnalyseTrail_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 537, &AnalyseTrail_14);
  switch (AnalyseTrail_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Analysing trail usage...\n");
        transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Trail usage analysis done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word ReuseAnalysis_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 543, &ReuseAnalysis_14);
  switch (ReuseAnalysis_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Structure reuse analysis...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        transform_hlds__ctgc__selector__reset_tables_2_p_0();
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word Sharing_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 541, &Sharing_14);
  switch (Sharing_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Structure sharing analysis...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        transform_hlds__ctgc__selector__reset_tables_2_p_0();
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  MR_Word conv0_HeadVar__5_5;

  transform_hlds__delay_construct__delay_construct_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__5_5));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word DelayConstruct_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  DelayConstruct_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 7)) & (MR_Integer) 1);
  switch (DelayConstruct_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word Var_23;
        MR_Word Var_25;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Delaying construction unifications ...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        {
          Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_8[0]));
          MR_hl_field(0, Var_25, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0_1));
          MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_25, 3) = ((MR_Box) (ProgressStream_8));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_25));
        }
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_23, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word Deforest_15;
  MR_Word PropLocalConstraints_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  PropLocalConstraints_16 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 22)) & (MR_Integer) 1);
  Deforest_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 1))) >> 26)) & (MR_Integer) 1);
  switch (Deforest_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (PropLocalConstraints_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Deforestation...\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
            transform_hlds__deforest__deforest_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
          }
          break;
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Deforestation and constraint propagation...\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
            transform_hlds__deforest__deforest_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (PropLocalConstraints_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
          break;
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Constraint propagation...\n");
            libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
            transform_hlds__deforest__deforest_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
            libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
            libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
          }
          break;
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__4_4;
  MR_Word conv0_HeadVar__6_6;

  transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
  *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_21,
  MR_Word * STATE_VARIABLE_DumpInfo_22)
{
  MR_Word Globals_16;
  MR_Word OptTuple_17;
  MR_Word LoopInv_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_16);
  libs__globals__get_opt_tuple_2_p_0(Globals_16, &OptTuple_17);
  LoopInv_18 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_17, 0))) >> 15)) & (MR_Integer) 1);
  switch (LoopInv_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        *STATE_VARIABLE_DumpInfo_22 = STATE_VARIABLE_DumpInfo_0_21;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_HLDS_1_25;

        hlds__mark_static_terms__maybe_mark_static_terms_7_p_0(ProgressStream_10, Verbose_11, Stats_12, STATE_VARIABLE_HLDS_0_19, &STATE_VARIABLE_HLDS_1_25);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_1_25, (MR_Integer) 148, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_0_21, STATE_VARIABLE_DumpInfo_22);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Hoisting loop invariants...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(3, &top_level__mercury_compile_middle_passes_scalar_common_4[4])), STATE_VARIABLE_HLDS_1_25, STATE_VARIABLE_HLDS_20);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word Allow_15;
  MR_Word Simple_16;
  MR_Word SingleUse_17;
  MR_Integer Threshold_18;
  MR_Word LinearRec_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  Allow_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 31)) & (MR_Integer) 1);
  Simple_16 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 30)) & (MR_Integer) 1);
  SingleUse_17 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 28)) & (MR_Integer) 1);
  LinearRec_19 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 27)) & (MR_Integer) 1);
  Threshold_18 = ((MR_Integer) ((MR_hl_field(0, OptTuple_14, 4))));
  succeeded = (Allow_15 == (MR_Integer) 0);
  if (succeeded)
  {
    succeeded = (Simple_16 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (SingleUse_17 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (Threshold_18 > (MR_Integer) 0);
        if (!(succeeded))
          succeeded = (LinearRec_19 == (MR_Integer) 0);
      }
    }
  }
  if (succeeded)
  {
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Inlining...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
    transform_hlds__inlining__inline_in_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_20, STATE_VARIABLE_HLDS_21);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
  }
  else
    *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv2_HeadVar__5_5;
  MR_Word conv1_HeadVar__7_7;
  MR_Word conv0_HeadVar__9_9;

  transform_hlds__accumulator__accu_transform_proc_9_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__5_5, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__7_7, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__9_9);
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__5_5));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__7_7));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__9_9));
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_25,
  MR_Word * STATE_VARIABLE_HLDS_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_bool succeeded;
  MR_Word Globals_16;
  MR_Word OptTuple_17;
  MR_Word IntroduceAccumulators_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_25, &Globals_16);
  libs__globals__get_opt_tuple_2_p_0(Globals_16, &OptTuple_17);
  IntroduceAccumulators_18 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_17, 1))) >> 31)) & (MR_Integer) 1);
  switch (IntroduceAccumulators_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      {
        *STATE_VARIABLE_HLDS_26 = STATE_VARIABLE_HLDS_0_25;
        *STATE_VARIABLE_Specs_28 = STATE_VARIABLE_Specs_0_27;
      }
      break;
    case (MR_Integer) 0:
      {
        MR_Word Cookie0_19;
        MR_Word Task0_20;
        MR_Word Task_21;
        MR_Word Var_35;
        MR_Word AccSpecs_24;
        MR_Word Cookie_23;
        MR_Box conv3_AccSpecs_24;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Attempting to introduce accumulators...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
        mercury__univ__type_to_univ_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_4[1]), ((MR_Box) ((MR_Unsigned) 0U)), &Cookie0_19);
        {
          Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_35, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0]));
          MR_hl_field(0, Var_35, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0_1));
          MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(0, Var_35, 3) = ((MR_Box) (ProgressStream_10));
        }
        {
          Task0_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Task0_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Task0_20, 1) = ((MR_Box) (Var_35));
          MR_hl_field(3, Task0_20, 2) = ((MR_Box) (Cookie0_19));
        }
        hlds__passes_aux__process_valid_nonimported_procs_update_4_p_0(Task0_20, &Task_21, STATE_VARIABLE_HLDS_0_25, STATE_VARIABLE_HLDS_26);
        succeeded = ((((MR_tag((MR_Word) Task_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Task_21, 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Cookie_23 = ((MR_Word) ((MR_hl_field(3, Task_21, 2))));
          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_4[1]), Cookie_23, &conv3_AccSpecs_24);
          if (succeeded)
          {
            AccSpecs_24 = ((MR_Word) (conv3_AccSpecs_24));
            succeeded = MR_TRUE;
          }
        }
        if (succeeded)
          *STATE_VARIABLE_Specs_28 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), AccSpecs_24, STATE_VARIABLE_Specs_0_27);
        else
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/9", (MR_String) "bad task");
            return;
          }
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word Verbose_13,
  MR_Word Stats_14,
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  MR_Word Globals_18;
  MR_Word ImplicitParallelism_19;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 764, &ImplicitParallelism_19);
  switch (ImplicitParallelism_19) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
        *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word ParSpecs_20;
        MR_Word STATE_VARIABLE_Specs_1_34;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% Applying implicit parallelism...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_11, Verbose_13);
        transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_3_p_0(&ParSpecs_20, STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_13, (MR_String) "% done.\n");
        STATE_VARIABLE_Specs_1_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), ParSpecs_20, STATE_VARIABLE_Specs_0_23);
        parse_tree__write_error_spec__maybe_write_out_errors_7_p_0(ErrorStream_12, Verbose_13, Globals_18, STATE_VARIABLE_Specs_1_34, STATE_VARIABLE_Specs_24);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_14);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_source_to_source_debug_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word ForceDisableSSDB_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 199, &ForceDisableSSDB_14);
  switch (ForceDisableSSDB_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word SSTraceLevel_15;

        libs__globals__get_ssdb_trace_level_2_p_0(Globals_13, &SSTraceLevel_15);
        switch (SSTraceLevel_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
          case (MR_Integer) 1:
            {
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Apply source to source debugging transformation ...\n");
              transform_hlds__ssdebug__ssdebug_transform_module_3_p_0(SSTraceLevel_15, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
            }
            break;
          case (MR_Integer) 0:
            *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
            break;
        }
      }
      break;
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23)
{
  MR_bool succeeded;
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word HigherOrder_15;
  MR_Word UserTypeSpec_16;
  MR_Word TypeSpecTables_17;
  MR_Word TypeSpecPreds_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  HigherOrder_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) >> 3)) & (MR_Integer) 1);
  UserTypeSpec_16 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 0))) & (MR_Integer) 1);
  hlds__hlds_module__module_info_get_type_spec_tables_2_p_0(STATE_VARIABLE_HLDS_0_22, &TypeSpecTables_17);
  TypeSpecPreds_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecTables_17, 0))));
  succeeded = (HigherOrder_15 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (UserTypeSpec_16 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), TypeSpecPreds_18);
  }
  if (succeeded)
  {
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
    transform_hlds__higher_order__specialize_in_module__specialize_higher_order_5_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
  }
  else
    *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word Tuple_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  Tuple_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 1))) >> 24)) & (MR_Integer) 1);
  switch (Tuple_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Tupling...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__tupling__tuple_arguments_5_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  MR_Word Globals_13;
  MR_Word OptTuple_14;
  MR_Word Untuple_15;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  Untuple_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, 1))) >> 25)) & (MR_Integer) 1);
  switch (Untuple_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_HLDS_1_24;
        MR_Word _SimplifySpecs_16;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Untupling...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__untupling__untuple_arguments_2_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_1_24);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 1, Verbose_9, Stats_10, STATE_VARIABLE_HLDS_1_24, STATE_VARIABLE_HLDS_18, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecs_16);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word HLDS_12,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  MR_bool succeeded;
  MR_Word Globals_15;
  MR_Word WarnDeadProcs_16;
  MR_Word WarnDeadPreds_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS_12, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 46, &WarnDeadProcs_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 47, &WarnDeadPreds_17);
  succeeded = (WarnDeadProcs_16 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (WarnDeadPreds_17 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word DeadSpecs_18;

    switch (WarnDeadProcs_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_10, (MR_String) "% Warning about dead predicates...\n");
        break;
      case (MR_Integer) 1:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_10, (MR_String) "% Warning about dead procedures...\n");
        break;
    }
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_10);
    transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0(HLDS_12, &DeadSpecs_18);
    *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DeadSpecs_18, STATE_VARIABLE_Specs_0_19);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_10, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_11);
  }
  else
    *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word TypeCtorInfo_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 353, &TypeCtorInfo_14);
  switch (TypeCtorInfo_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Generating type_ctor_info structures...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        backend_libs__type_ctor_info__generate_hlds_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Globals_16;
  MR_Word Termination2_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 556, &Termination2_17);
  switch (Termination2_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermSpecs_18;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Detecting termination 2...\n");
        transform_hlds__term_constr_main__term2_analyse_module_3_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20, &TermSpecs_18);
        *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_18, STATE_VARIABLE_Specs_0_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Termination 2 checking done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_Specs_0_21,
  MR_Word * STATE_VARIABLE_Specs_22)
{
  MR_Word Globals_16;
  MR_Word Termination_17;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 549, &Termination_17);
  switch (Termination_17) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_0_21;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermSpecs_18;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Detecting termination...\n");
        transform_hlds__termination__analyse_termination_in_module_3_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20, &TermSpecs_18);
        *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_18, STATE_VARIABLE_Specs_0_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Termination checking done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word ExceptionAnalysis_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 564, &ExceptionAnalysis_14);
  switch (ExceptionAnalysis_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Analysing exceptions...\n");
        transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_Word Globals_13;
  MR_Word ClosureAnalysis_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 565, &ClosureAnalysis_14);
  switch (ClosureAnalysis_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Analysing closures...\n");
        transform_hlds__closure_analysis__closure_analyse_module_3_p_0(ProgressStream_8, STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Fully expanding equivalence types...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  transform_hlds__equiv_type_hlds__replace_equiv_types_in_hlds_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_stm_goals_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Transforming stm expressions...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  transform_hlds__stm_expand__stm_process_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  MR_bool succeeded;
  MR_Word DirectArgProcMap_16;

  hlds__hlds_module__module_info_get_direct_arg_proc_map_2_p_0(STATE_VARIABLE_HLDS_0_18, &DirectArgProcMap_16);
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), DirectArgProcMap_16);
  if (succeeded)
  {
    *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
  }
  else
  {
    MR_Word DirectArgSpecs_17;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Transforming direct arg in out procedures...\n");
    transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_5_p_0(ProgressStream_10, DirectArgProcMap_16, STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19, &DirectArgSpecs_17);
    *STATE_VARIABLE_Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DirectArgSpecs_17, STATE_VARIABLE_Specs_0_20);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Transforming lambda expressions...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
  transform_hlds__lambda__expand_lambdas_in_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Transforming tabled predicates...");
  libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
  transform_hlds__table_gen__table_gen_process_module_4_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17, STATE_VARIABLE_Specs_0_18, STATE_VARIABLE_Specs_19);
  libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) " done.\n");
  libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_5_p_0(
  MR_Word ErrorStream_6,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  MR_bool succeeded;
  MR_Word Globals_9;
  MR_String FileName_10;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_9);
  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 292, &FileName_10);
  succeeded = (strcmp(FileName_10, (MR_String) "") == 0);
  if (succeeded)
    *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
  else
  {
    MR_Word MaybeNumProcMap_11;

    transform_hlds__complexity__read_spec_file_4_p_0(FileName_10, &MaybeNumProcMap_11);
    if (((MR_tag((MR_Word) MaybeNumProcMap_11)) == (MR_Integer) 1))
    {
      MR_String Msg_14 = ((MR_String) ((MR_hl_field(1, MaybeNumProcMap_11, 0))));

      libs__file_util__report_error_4_p_0(ErrorStream_6, Msg_14);
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, MaybeNumProcMap_11, 0))));
      MR_Word Var_22;

      {
        Var_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_22, 0) = ((MR_Box) (Var_21));
      }
      hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(Var_22, STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
    }
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word Verbose_12,
  MR_Word Stats_13,
  MR_Word * UnusedArgsInfos_14,
  MR_Word STATE_VARIABLE_HLDS_0_24,
  MR_Word * STATE_VARIABLE_HLDS_25,
  MR_Word STATE_VARIABLE_Specs_0_26,
  MR_Word * STATE_VARIABLE_Specs_27)
{
  MR_bool succeeded;
  MR_Word Globals_18;
  MR_Word OptTuple_19;
  MR_Word OptUnusedArgs_20;
  MR_Word OptUnusedArgsIntermod_21;
  MR_Word WarnUnusedArgs_22;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_24, &Globals_18);
  libs__globals__get_opt_tuple_2_p_0(Globals_18, &OptTuple_19);
  OptUnusedArgs_20 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_19, 0))) >> 5)) & (MR_Integer) 1);
  OptUnusedArgsIntermod_21 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_19, 0))) >> 4)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 15, &WarnUnusedArgs_22);
  succeeded = (OptUnusedArgs_20 == (MR_Integer) 0);
  if (!(succeeded))
  {
    succeeded = (OptUnusedArgsIntermod_21 == (MR_Integer) 0);
    if (!(succeeded))
      succeeded = (WarnUnusedArgs_22 == (MR_Integer) 1);
  }
  if (succeeded)
  {
    MR_Word UnusedSpecs_23;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_12, (MR_String) "% Finding unused arguments ...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_11, Verbose_12);
    transform_hlds__unused_args__unused_args_process_module_4_p_0(STATE_VARIABLE_HLDS_0_24, STATE_VARIABLE_HLDS_25, &UnusedSpecs_23, UnusedArgsInfos_14);
    *STATE_VARIABLE_Specs_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), UnusedSpecs_23, STATE_VARIABLE_Specs_0_26);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_11, Verbose_12, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_11, Stats_13);
  }
  else
  {
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_gen_pragma_unused_args_info_0), UnusedArgsInfos_14);
    *STATE_VARIABLE_Specs_27 = STATE_VARIABLE_Specs_0_26;
    *STATE_VARIABLE_HLDS_25 = STATE_VARIABLE_HLDS_0_24;
  }
}

void mercury__top_level__mercury_compile_middle_passes__init(void)
{
}

void mercury__top_level__mercury_compile_middle_passes__init_type_tables(void)
{
}

void mercury__top_level__mercury_compile_middle_passes__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__top_level__mercury_compile_middle_passes__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module top_level.mercury_compile_middle_passes.
