/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version rotd-2023-01-24
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
#include "bytecode_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "bytecode_backend.bytecode.mih"
#include "bytecode_backend.bytecode_gen.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.proc_requests.mih"
#include "hlds.code_model.mih"
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
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.polyhedron.mih"
#include "libs.timestamp.mih"
#include "libs.trace_params.mih"
#include "ll_backend.deep_profiling.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.program_representation.mih"
#include "mdbcomp.sym_name.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.maybe_error.mih"
#include "parse_tree.module_cmds.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.parse_tree_out.mih"
#include "parse_tree.parse_tree_out_info.mih"
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
#include "parse_tree.var_table.mih"
#include "parse_tree.vartypes.mih"
#include "parse_tree.write_error_spec.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
#include "top_level.mercury_compile_front_end.mih"
#include "top_level.mercury_compile_llds_back_end.mih"
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
#include "transform_hlds.ctgc.selector.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
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
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_7_p_0(
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
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word HLDS0_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_DumpInfo_0_22,
  MR_Word * STATE_VARIABLE_DumpInfo_23);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23);

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


static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[3][2];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[6][1];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[2][11];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[3][3];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[2][9];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][8];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][10];




static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[3][2] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0))
  },
  /* row   2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[1]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[6][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt"))))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".bytedebug"))))
  },
  /* row   2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mbc"))))
  },
  /* row   3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   5 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[2]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[2][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[3][3] = {
  /* row   0 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   1 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row   2 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[2][9] = {
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
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][8] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][10] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0)),
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
  MR_Word STATE_VARIABLE_HLDS_34_34;
  MR_Word STATE_VARIABLE_DumpInfo_38_38;
  MR_Word STATE_VARIABLE_HLDS_40_40;
  MR_Word STATE_VARIABLE_DumpInfo_44_44;
  MR_Word STATE_VARIABLE_HLDS_46_46;
  MR_Word STATE_VARIABLE_DumpInfo_50_50;
  MR_Word STATE_VARIABLE_HLDS_52_52;
  MR_Word STATE_VARIABLE_Specs_53_53;
  MR_Word STATE_VARIABLE_DumpInfo_57_57;
  MR_Word STATE_VARIABLE_HLDS_59_59;
  MR_Word STATE_VARIABLE_Specs_60_60;
  MR_Word STATE_VARIABLE_DumpInfo_64_64;
  MR_Word STATE_VARIABLE_HLDS_85_85;
  MR_Word STATE_VARIABLE_DumpInfo_89_89;
  MR_Word STATE_VARIABLE_HLDS_91_91;
  MR_Word STATE_VARIABLE_DumpInfo_95_95;
  MR_Word STATE_VARIABLE_HLDS_97_97;
  MR_Word STATE_VARIABLE_DumpInfo_101_101;
  MR_Word STATE_VARIABLE_HLDS_103_103;
  MR_Word STATE_VARIABLE_DumpInfo_108_108;
  MR_Word STATE_VARIABLE_HLDS_110_110;
  MR_Word STATE_VARIABLE_DumpInfo_114_114;
  MR_Word STATE_VARIABLE_HLDS_116_116;
  MR_Word _UnusedArgsInfos_19;
  MR_Word _AnalysisInfo_22;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 72, &Verbose_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 82, &Stats_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 534, &ClosureAnalysis_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 510, &SharingAnalysis_18);
  succeeded = (ClosureAnalysis_17 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (SharingAnalysis_18 == (MR_Integer) 1);
  if (succeeded)
    top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_0_23, &STATE_VARIABLE_HLDS_34_34);
  else
    STATE_VARIABLE_HLDS_34_34 = STATE_VARIABLE_HLDS_0_23;
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_34_34, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_26, &STATE_VARIABLE_DumpInfo_38_38);
  top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_34_34, &STATE_VARIABLE_HLDS_40_40);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_40_40, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_38_38, &STATE_VARIABLE_DumpInfo_44_44);
  top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_40_40, &STATE_VARIABLE_HLDS_46_46);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_46_46, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_44_44, &STATE_VARIABLE_DumpInfo_50_50);
  top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_46_46, &STATE_VARIABLE_HLDS_52_52, STATE_VARIABLE_Specs_0_24, &STATE_VARIABLE_Specs_53_53);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_52_52, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_50_50, &STATE_VARIABLE_DumpInfo_57_57);
  top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_52_52, &STATE_VARIABLE_HLDS_59_59, STATE_VARIABLE_Specs_53_53, &STATE_VARIABLE_Specs_60_60);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_59_59, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_57_57, &STATE_VARIABLE_DumpInfo_64_64);
  switch (SharingAnalysis_18) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_85_85 = STATE_VARIABLE_HLDS_59_59;
        STATE_VARIABLE_DumpInfo_89_89 = STATE_VARIABLE_DumpInfo_64_64;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HLDS_66_66;
        MR_Word STATE_VARIABLE_DumpInfo_70_70;
        MR_Word STATE_VARIABLE_HLDS_72_72;
        MR_Word STATE_VARIABLE_DumpInfo_76_76;
        MR_Word STATE_VARIABLE_HLDS_78_78;
        MR_Word STATE_VARIABLE_DumpInfo_79_79;
        MR_Word STATE_VARIABLE_DumpInfo_83_83;

        top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_59_59, &STATE_VARIABLE_HLDS_66_66);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_66_66, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_64_64, &STATE_VARIABLE_DumpInfo_70_70);
        top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_66_66, &STATE_VARIABLE_HLDS_72_72);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_72_72, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_70_70, &STATE_VARIABLE_DumpInfo_76_76);
        top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_72_72, &STATE_VARIABLE_HLDS_78_78, STATE_VARIABLE_DumpInfo_76_76, &STATE_VARIABLE_DumpInfo_79_79);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_78_78, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_79_79, &STATE_VARIABLE_DumpInfo_83_83);
        top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_78_78, &STATE_VARIABLE_HLDS_85_85);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_85_85, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_83_83, &STATE_VARIABLE_DumpInfo_89_89);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_85_85, &STATE_VARIABLE_HLDS_91_91);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_91_91, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_89_89, &STATE_VARIABLE_DumpInfo_95_95);
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_91_91, &STATE_VARIABLE_HLDS_97_97);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_97_97, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_95_95, &STATE_VARIABLE_DumpInfo_101_101);
  top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_9, Verbose_15, Stats_16, &_UnusedArgsInfos_19, STATE_VARIABLE_HLDS_97_97, &STATE_VARIABLE_HLDS_103_103, STATE_VARIABLE_Specs_60_60, STATE_VARIABLE_Specs_25);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_103_103, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_101_101, &STATE_VARIABLE_DumpInfo_108_108);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_103_103, &STATE_VARIABLE_HLDS_110_110);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_110_110, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_108_108, &STATE_VARIABLE_DumpInfo_114_114);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_110_110, &STATE_VARIABLE_HLDS_116_116);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_116_116, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_114_114, STATE_VARIABLE_DumpInfo_27);
  hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_116_116, &AnalysisInfo_20);
  hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_116_116, &ImportedModules_21);
  analysis__write_analysis_files_7_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_HLDS_116_116, ImportedModules_21, AnalysisInfo_20, &_AnalysisInfo_22);
}

void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word ErrorStream_11,
  MR_Word STATE_VARIABLE_HLDS_0_37,
  MR_Word STATE_VARIABLE_Specs_0_38,
  MR_Word * STATE_VARIABLE_Specs_39,
  MR_Word STATE_VARIABLE_DumpInfo_0_40,
  MR_Word * STATE_VARIABLE_DumpInfo_41)
{
  MR_bool succeeded;
  MR_Word Globals_16;
  MR_Word Verbose_17;
  MR_Word Stats_18;
  MR_Word ClosureAnalysis_19;
  MR_Word SharingAnalysis_20;
  MR_Word ModuleName_21;
  MR_String OptFileName_22;
  MR_String TmpOptFileName_23;
  MR_Word TmpOptResult_24;
  MR_Word STATE_VARIABLE_HLDS_48_48;
  MR_Word STATE_VARIABLE_DumpInfo_52_52;
  MR_Word STATE_VARIABLE_HLDS_54_54;
  MR_Word STATE_VARIABLE_DumpInfo_58_58;
  MR_Word STATE_VARIABLE_HLDS_60_60;
  MR_Word STATE_VARIABLE_DumpInfo_64_64;
  MR_Word STATE_VARIABLE_HLDS_66_66;
  MR_Word STATE_VARIABLE_Specs_67_67;
  MR_Word STATE_VARIABLE_DumpInfo_71_71;
  MR_Word STATE_VARIABLE_HLDS_73_73;
  MR_Word STATE_VARIABLE_DumpInfo_78_78;
  MR_Word STATE_VARIABLE_HLDS_99_99;
  MR_Word STATE_VARIABLE_DumpInfo_103_103;
  MR_Word STATE_VARIABLE_HLDS_105_105;
  MR_Word STATE_VARIABLE_DumpInfo_109_109;
  MR_Word STATE_VARIABLE_HLDS_111_111;
  MR_Word STATE_VARIABLE_DumpInfo_115_115;
  MR_Word STATE_VARIABLE_HLDS_117_117;
  MR_Word STATE_VARIABLE_DumpInfo_121_121;
  MR_Word STATE_VARIABLE_HLDS_123_123;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_37, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 72, &Verbose_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 82, &Stats_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 534, &ClosureAnalysis_19);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 510, &SharingAnalysis_20);
  succeeded = (ClosureAnalysis_19 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (SharingAnalysis_20 == (MR_Integer) 1);
  if (succeeded)
    top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_0_37, &STATE_VARIABLE_HLDS_48_48);
  else
    STATE_VARIABLE_HLDS_48_48 = STATE_VARIABLE_HLDS_0_37;
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_48_48, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_40, &STATE_VARIABLE_DumpInfo_52_52);
  top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_48_48, &STATE_VARIABLE_HLDS_54_54);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_54_54, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_52_52, &STATE_VARIABLE_DumpInfo_58_58);
  top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_54_54, &STATE_VARIABLE_HLDS_60_60);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_60_60, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_58_58, &STATE_VARIABLE_DumpInfo_64_64);
  top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_60_60, &STATE_VARIABLE_HLDS_66_66, STATE_VARIABLE_Specs_0_38, &STATE_VARIABLE_Specs_67_67);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_66_66, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_64_64, &STATE_VARIABLE_DumpInfo_71_71);
  top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_66_66, &STATE_VARIABLE_HLDS_73_73, STATE_VARIABLE_Specs_67_67, STATE_VARIABLE_Specs_39);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_73_73, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_71_71, &STATE_VARIABLE_DumpInfo_78_78);
  switch (SharingAnalysis_20) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_99_99 = STATE_VARIABLE_HLDS_73_73;
        STATE_VARIABLE_DumpInfo_103_103 = STATE_VARIABLE_DumpInfo_78_78;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word STATE_VARIABLE_HLDS_80_80;
        MR_Word STATE_VARIABLE_DumpInfo_84_84;
        MR_Word STATE_VARIABLE_HLDS_86_86;
        MR_Word STATE_VARIABLE_DumpInfo_90_90;
        MR_Word STATE_VARIABLE_HLDS_92_92;
        MR_Word STATE_VARIABLE_DumpInfo_93_93;
        MR_Word STATE_VARIABLE_DumpInfo_97_97;

        top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_73_73, &STATE_VARIABLE_HLDS_80_80);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_80_80, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_78_78, &STATE_VARIABLE_DumpInfo_84_84);
        top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_80_80, &STATE_VARIABLE_HLDS_86_86);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_86_86, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_84_84, &STATE_VARIABLE_DumpInfo_90_90);
        top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_86_86, &STATE_VARIABLE_HLDS_92_92, STATE_VARIABLE_DumpInfo_90_90, &STATE_VARIABLE_DumpInfo_93_93);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_92_92, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_93_93, &STATE_VARIABLE_DumpInfo_97_97);
        top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_92_92, &STATE_VARIABLE_HLDS_99_99);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_99_99, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_97_97, &STATE_VARIABLE_DumpInfo_103_103);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_99_99, &STATE_VARIABLE_HLDS_105_105);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_105_105, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_103_103, &STATE_VARIABLE_DumpInfo_109_109);
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_105_105, &STATE_VARIABLE_HLDS_111_111);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_111_111, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_109_109, &STATE_VARIABLE_DumpInfo_115_115);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_111_111, &STATE_VARIABLE_HLDS_117_117);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_117_117, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_115_115, &STATE_VARIABLE_DumpInfo_121_121);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_10, Verbose_17, Stats_18, STATE_VARIABLE_HLDS_117_117, &STATE_VARIABLE_HLDS_123_123);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_123_123, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_121_121, STATE_VARIABLE_DumpInfo_41);
  hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_123_123, &ModuleName_21);
  parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_16, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.output_trans_opt_file\'/9", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_2[0])), ModuleName_21, &OptFileName_22);
  TmpOptFileName_23 = mercury__string__f_43_43_2_f_0(OptFileName_22, (MR_String) ".tmp");
  mercury__io__open_output_4_p_0(TmpOptFileName_23, &TmpOptResult_24);
  if (((MR_tag((MR_Word) TmpOptResult_24)) == (MR_Integer) 1))
  {
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(1, TmpOptResult_24, (MR_Integer) 0))));
    MR_String ProgName_26;
    MR_String ErrorMsg_27;

    mercury__io__progname_base_4_p_0((MR_String) "mmc", &ProgName_26);
    mercury__io__error_message_2_p_0(Error_25, &ErrorMsg_27);
    mercury__io__write_string_4_p_0(ErrorStream_11, ProgName_26);
    mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) ": cannot open \140");
    mercury__io__write_string_4_p_0(ErrorStream_11, TmpOptFileName_23);
    mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\' for output: ");
    mercury__io__write_string_4_p_0(ErrorStream_11, ErrorMsg_27);
    mercury__io__write_string_4_p_0(ErrorStream_11, (MR_String) "\n");
    mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
  }
  else
  {
    MR_Word TmpOptStream_28 = ((MR_Word) ((MR_hl_field(0, TmpOptResult_24, (MR_Integer) 0))));
    MR_Word ParseTreeTransOpt_29;
    MR_Word Experiment5_32;
    MR_Word _UpdateSucceeded_30;
    MR_Word _TouchSucceeded_31;

    transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0(TmpOptStream_28, STATE_VARIABLE_HLDS_123_123, &ParseTreeTransOpt_29);
    mercury__io__close_output_3_p_0(TmpOptStream_28);
    parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_16, ModuleName_21, OptFileName_22, &_UpdateSucceeded_30);
    parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_16, ProgressStream_10, ErrorStream_11, ModuleName_21, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt_date"))), &_TouchSucceeded_31);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 713, &Experiment5_32);
    switch (Experiment5_32) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word OptXResult_33;
          MR_String Var_157;

          Var_157 = mercury__string__f_43_43_2_f_0(OptFileName_22, (MR_String) "x");
          mercury__io__open_output_4_p_0(Var_157, &OptXResult_33);
          if (!(((MR_tag((MR_Word) OptXResult_33)) == (MR_Integer) 1)))
          {
            MR_Word OptXStream_35 = ((MR_Word) ((MR_hl_field(0, OptXResult_33, (MR_Integer) 0))));
            MR_Word Info_36;

            Info_36 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_16, (MR_Integer) 0, (MR_Integer) 0);
            parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_36, OptXStream_35, ParseTreeTransOpt_29);
            mercury__io__close_output_3_p_0(OptXStream_35);
          }
        }
        break;
    }
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
  MR_Word STATE_VARIABLE_HLDS_31_31;
  MR_Word STATE_VARIABLE_HLDS_33_33;
  MR_Word STATE_VARIABLE_HLDS_35_35;
  MR_Word STATE_VARIABLE_HLDS_37_37;
  MR_Word STATE_VARIABLE_Specs_38_38;
  MR_Word STATE_VARIABLE_HLDS_40_40;
  MR_Word STATE_VARIABLE_Specs_41_41;
  MR_Word STATE_VARIABLE_HLDS_43_43;
  MR_Word STATE_VARIABLE_HLDS_46_46;
  MR_Word STATE_VARIABLE_HLDS_48_48;
  MR_Word STATE_VARIABLE_HLDS_50_50;
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
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 72, &Verbose_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 82, &Stats_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 534, &ClosureAnalysis_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 510, &SharingAnalysis_18);
  succeeded = (ClosureAnalysis_17 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (SharingAnalysis_18 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word STATE_VARIABLE_HLDS_29_29;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Transforming lambda expressions...");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_15);
    transform_hlds__lambda__expand_lambdas_in_module_2_p_0(STATE_VARIABLE_HLDS_0_19, &STATE_VARIABLE_HLDS_29_29);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Transforming stm expressions...");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_15);
    transform_hlds__stm_expand__stm_process_module_2_p_0(STATE_VARIABLE_HLDS_29_29, &STATE_VARIABLE_HLDS_31_31);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
  }
  else
    STATE_VARIABLE_HLDS_31_31 = STATE_VARIABLE_HLDS_0_19;
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_31_31, &Globals_62);
  libs__globals__lookup_bool_option_3_p_0(Globals_62, (MR_Integer) 534, &ClosureAnalysis_63);
  switch (ClosureAnalysis_63) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_HLDS_33_33 = STATE_VARIABLE_HLDS_31_31;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Analysing closures...\n");
        transform_hlds__closure_analysis__closure_analyse_module_3_p_0(ProgressStream_9, STATE_VARIABLE_HLDS_31_31, &STATE_VARIABLE_HLDS_33_33);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_33_33, &Globals_69);
  libs__globals__lookup_bool_option_3_p_0(Globals_69, (MR_Integer) 533, &ExceptionAnalysis_70);
  switch (ExceptionAnalysis_70) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_HLDS_35_35 = STATE_VARIABLE_HLDS_33_33;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Analysing exceptions...\n");
        transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(STATE_VARIABLE_HLDS_33_33, &STATE_VARIABLE_HLDS_35_35);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_9, Verbose_15, Stats_16, UnusedArgsInfos_11, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_37_37, STATE_VARIABLE_Specs_0_21, &STATE_VARIABLE_Specs_38_38);
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_37_37, &Globals_76);
  libs__globals__lookup_bool_option_3_p_0(Globals_76, (MR_Integer) 518, &Termination_77);
  switch (Termination_77) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_40_40 = STATE_VARIABLE_HLDS_37_37;
        STATE_VARIABLE_Specs_41_41 = STATE_VARIABLE_Specs_38_38;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermSpecs_78;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Detecting termination...\n");
        transform_hlds__termination__analyse_termination_in_module_3_p_0(STATE_VARIABLE_HLDS_37_37, &STATE_VARIABLE_HLDS_40_40, &TermSpecs_78);
        STATE_VARIABLE_Specs_41_41 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_78, STATE_VARIABLE_Specs_38_38);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Termination checking done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_40_40, &Globals_85);
  libs__globals__lookup_bool_option_3_p_0(Globals_85, (MR_Integer) 525, &Termination2_86);
  switch (Termination2_86) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        STATE_VARIABLE_HLDS_43_43 = STATE_VARIABLE_HLDS_40_40;
        *STATE_VARIABLE_Specs_22 = STATE_VARIABLE_Specs_41_41;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word TermSpecs_87;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Detecting termination 2...\n");
        transform_hlds__term_constr_main__term2_analyse_module_3_p_0(STATE_VARIABLE_HLDS_40_40, &STATE_VARIABLE_HLDS_43_43, &TermSpecs_87);
        *STATE_VARIABLE_Specs_22 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), TermSpecs_87, STATE_VARIABLE_Specs_41_41);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Termination 2 checking done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_43_43, &Globals_94);
  libs__globals__lookup_bool_option_3_p_0(Globals_94, (MR_Integer) 510, &Sharing_95);
  switch (Sharing_95) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      STATE_VARIABLE_HLDS_46_46 = STATE_VARIABLE_HLDS_43_43;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% Structure sharing analysis...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_15);
        transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_2_p_0(STATE_VARIABLE_HLDS_43_43, &STATE_VARIABLE_HLDS_46_46);
        transform_hlds__ctgc__selector__reset_tables_2_p_0();
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_15, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_16);
      }
      break;
  }
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_46_46, &STATE_VARIABLE_HLDS_48_48);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_48_48, &STATE_VARIABLE_HLDS_50_50);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_9, Verbose_15, Stats_16, STATE_VARIABLE_HLDS_50_50, STATE_VARIABLE_HLDS_20);
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_10_p_0(
  MR_Word ProgressStream_11,
  MR_Word ErrorStream_12,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word STATE_VARIABLE_DumpInfo_0_25,
  MR_Word * STATE_VARIABLE_DumpInfo_26,
  MR_Word STATE_VARIABLE_Specs_0_27,
  MR_Word * STATE_VARIABLE_Specs_28)
{
  MR_Word Globals_17;
  MR_Word Verbose_18;
  MR_Word Stats_19;
  MR_Word STATE_VARIABLE_HLDS_33_33;
  MR_Word STATE_VARIABLE_HLDS_35_35;
  MR_Word STATE_VARIABLE_Specs_36_36;
  MR_Word STATE_VARIABLE_DumpInfo_40_40;
  MR_Word STATE_VARIABLE_HLDS_42_42;
  MR_Word STATE_VARIABLE_DumpInfo_46_46;
  MR_Word STATE_VARIABLE_HLDS_48_48;
  MR_Word STATE_VARIABLE_Specs_49_49;
  MR_Word STATE_VARIABLE_DumpInfo_53_53;
  MR_Word STATE_VARIABLE_HLDS_55_55;
  MR_Word STATE_VARIABLE_DumpInfo_59_59;
  MR_Word STATE_VARIABLE_HLDS_61_61;
  MR_Word STATE_VARIABLE_DumpInfo_65_65;
  MR_Word STATE_VARIABLE_HLDS_67_67;
  MR_Word STATE_VARIABLE_DumpInfo_71_71;
  MR_Word STATE_VARIABLE_HLDS_73_73;
  MR_Word STATE_VARIABLE_DumpInfo_77_77;
  MR_Word STATE_VARIABLE_HLDS_79_79;
  MR_Word STATE_VARIABLE_Specs_80_80;
  MR_Word STATE_VARIABLE_DumpInfo_84_84;
  MR_Word STATE_VARIABLE_HLDS_86_86;
  MR_Word STATE_VARIABLE_Specs_87_87;
  MR_Word STATE_VARIABLE_DumpInfo_91_91;
  MR_Word STATE_VARIABLE_HLDS_93_93;
  MR_Word STATE_VARIABLE_DumpInfo_97_97;
  MR_Word STATE_VARIABLE_HLDS_99_99;
  MR_Word STATE_VARIABLE_Specs_100_100;
  MR_Word STATE_VARIABLE_DumpInfo_104_104;
  MR_Word STATE_VARIABLE_DumpInfo_106_106;
  MR_Word STATE_VARIABLE_HLDS_108_108;
  MR_Word STATE_VARIABLE_DumpInfo_112_112;
  MR_Word STATE_VARIABLE_HLDS_114_114;
  MR_Word STATE_VARIABLE_DumpInfo_118_118;
  MR_Word STATE_VARIABLE_HLDS_120_120;
  MR_Word STATE_VARIABLE_DumpInfo_124_124;
  MR_Word STATE_VARIABLE_HLDS_126_126;
  MR_Word STATE_VARIABLE_DumpInfo_130_130;
  MR_Word STATE_VARIABLE_HLDS_132_132;
  MR_Word STATE_VARIABLE_Specs_133_133;
  MR_Word STATE_VARIABLE_DumpInfo_137_137;
  MR_Word STATE_VARIABLE_HLDS_139_139;
  MR_Word STATE_VARIABLE_DumpInfo_143_143;
  MR_Word STATE_VARIABLE_HLDS_145_145;
  MR_Word STATE_VARIABLE_DumpInfo_146_146;
  MR_Word STATE_VARIABLE_DumpInfo_150_150;
  MR_Word STATE_VARIABLE_HLDS_152_152;
  MR_Word STATE_VARIABLE_DumpInfo_156_156;
  MR_Word STATE_VARIABLE_HLDS_158_158;
  MR_Word STATE_VARIABLE_DumpInfo_162_162;
  MR_Word STATE_VARIABLE_HLDS_164_164;
  MR_Word STATE_VARIABLE_DumpInfo_168_168;
  MR_Word STATE_VARIABLE_HLDS_170_170;
  MR_Word STATE_VARIABLE_DumpInfo_174_174;
  MR_Word STATE_VARIABLE_HLDS_176_176;
  MR_Word STATE_VARIABLE_Specs_177_177;
  MR_Word STATE_VARIABLE_DumpInfo_181_181;
  MR_Word STATE_VARIABLE_HLDS_183_183;
  MR_Word STATE_VARIABLE_DumpInfo_187_187;
  MR_Word STATE_VARIABLE_HLDS_189_189;
  MR_Word STATE_VARIABLE_DumpInfo_193_193;
  MR_Word STATE_VARIABLE_HLDS_198_198;
  MR_Word STATE_VARIABLE_DumpInfo_203_203;
  MR_Word STATE_VARIABLE_HLDS_205_205;
  MR_Word STATE_VARIABLE_DumpInfo_209_209;
  MR_Word STATE_VARIABLE_HLDS_211_211;
  MR_Word STATE_VARIABLE_DumpInfo_215_215;
  MR_Word STATE_VARIABLE_HLDS_217_217;
  MR_Word STATE_VARIABLE_DumpInfo_221_221;
  MR_Word STATE_VARIABLE_HLDS_223_223;
  MR_Word STATE_VARIABLE_DumpInfo_227_227;
  MR_Word STATE_VARIABLE_HLDS_229_229;
  MR_Word STATE_VARIABLE_DumpInfo_233_233;
  MR_Word STATE_VARIABLE_HLDS_235_235;
  MR_Word STATE_VARIABLE_DumpInfo_239_239;
  MR_Word STATE_VARIABLE_HLDS_241_241;
  MR_Word STATE_VARIABLE_DumpInfo_245_245;
  MR_Word STATE_VARIABLE_HLDS_247_247;
  MR_Word STATE_VARIABLE_DumpInfo_252_252;
  MR_Word STATE_VARIABLE_HLDS_257_257;
  MR_Word STATE_VARIABLE_DumpInfo_262_262;
  MR_Word STATE_VARIABLE_HLDS_264_264;
  MR_Word STATE_VARIABLE_DumpInfo_268_268;
  MR_Word STATE_VARIABLE_HLDS_270_270;
  MR_Word STATE_VARIABLE_DumpInfo_274_274;
  MR_Word STATE_VARIABLE_HLDS_276_276;
  MR_Word STATE_VARIABLE_DumpInfo_280_280;
  MR_Word STATE_VARIABLE_HLDS_282_282;
  MR_Word STATE_VARIABLE_DumpInfo_286_286;
  MR_Word STATE_VARIABLE_DumpInfo_292_292;
  MR_Word _UnusedArgsInfos_20;
  MR_Word _SimplifySpecsPreImpPar_21;
  MR_Word _SimplifySpecsPreProf_22;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 72, &Verbose_18);
  libs__globals__lookup_bool_option_3_p_0(Globals_17, (MR_Integer) 82, &Stats_19);
  top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_5_p_0(ErrorStream_12, STATE_VARIABLE_HLDS_0_23, &STATE_VARIABLE_HLDS_33_33);
  top_level__mercury_compile_middle_passes__tabling_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_33_33, &STATE_VARIABLE_HLDS_35_35, STATE_VARIABLE_Specs_0_27, &STATE_VARIABLE_Specs_36_36);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_35_35, (MR_Integer) 105, (MR_String) "tabling", STATE_VARIABLE_DumpInfo_0_25, &STATE_VARIABLE_DumpInfo_40_40);
  top_level__mercury_compile_middle_passes__expand_lambdas_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_42_42);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_42_42, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_40_40, &STATE_VARIABLE_DumpInfo_46_46);
  top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_42_42, &STATE_VARIABLE_HLDS_48_48, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_49_49);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_48_48, (MR_Integer) 111, (MR_String) "daio", STATE_VARIABLE_DumpInfo_46_46, &STATE_VARIABLE_DumpInfo_53_53);
  top_level__mercury_compile_middle_passes__expand_stm_goals_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_48_48, &STATE_VARIABLE_HLDS_55_55);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_55_55, (MR_Integer) 113, (MR_String) "stm", STATE_VARIABLE_DumpInfo_53_53, &STATE_VARIABLE_DumpInfo_59_59);
  top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_55_55, &STATE_VARIABLE_HLDS_61_61);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_61_61, (MR_Integer) 115, (MR_String) "equiv_types", STATE_VARIABLE_DumpInfo_59_59, &STATE_VARIABLE_DumpInfo_65_65);
  top_level__mercury_compile_middle_passes__maybe_closure_analysis_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_61_61, &STATE_VARIABLE_HLDS_67_67);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_67_67, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_65_65, &STATE_VARIABLE_DumpInfo_71_71);
  top_level__mercury_compile_middle_passes__maybe_exception_analysis_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_67_67, &STATE_VARIABLE_HLDS_73_73);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_73_73, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_71_71, &STATE_VARIABLE_DumpInfo_77_77);
  top_level__mercury_compile_middle_passes__maybe_termination_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_73_73, &STATE_VARIABLE_HLDS_79_79, STATE_VARIABLE_Specs_49_49, &STATE_VARIABLE_Specs_80_80);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_79_79, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_77_77, &STATE_VARIABLE_DumpInfo_84_84);
  top_level__mercury_compile_middle_passes__maybe_termination2_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_79_79, &STATE_VARIABLE_HLDS_86_86, STATE_VARIABLE_Specs_80_80, &STATE_VARIABLE_Specs_87_87);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_86_86, (MR_Integer) 121, (MR_String) "termination2", STATE_VARIABLE_DumpInfo_84_84, &STATE_VARIABLE_DumpInfo_91_91);
  top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_86_86, &STATE_VARIABLE_HLDS_93_93);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_93_93, (MR_Integer) 125, (MR_String) "type_ctor_infos", STATE_VARIABLE_DumpInfo_91_91, &STATE_VARIABLE_DumpInfo_97_97);
  top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_93_93, &STATE_VARIABLE_HLDS_99_99, STATE_VARIABLE_Specs_87_87, &STATE_VARIABLE_Specs_100_100);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_99_99, (MR_Integer) 130, (MR_String) "warn_dead_procs", STATE_VARIABLE_DumpInfo_97_97, &STATE_VARIABLE_DumpInfo_104_104);
  top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_99_99, Verbose_18, Stats_19, STATE_VARIABLE_DumpInfo_104_104, &STATE_VARIABLE_DumpInfo_106_106);
  top_level__mercury_compile_middle_passes__maybe_untuple_arguments_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_99_99, &STATE_VARIABLE_HLDS_108_108);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_108_108, (MR_Integer) 133, (MR_String) "untupling", STATE_VARIABLE_DumpInfo_106_106, &STATE_VARIABLE_DumpInfo_112_112);
  top_level__mercury_compile_middle_passes__maybe_tuple_arguments_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_108_108, &STATE_VARIABLE_HLDS_114_114);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_114_114, (MR_Integer) 134, (MR_String) "tupling", STATE_VARIABLE_DumpInfo_112_112, &STATE_VARIABLE_DumpInfo_118_118);
  top_level__mercury_compile_middle_passes__maybe_higher_order_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_114_114, &STATE_VARIABLE_HLDS_120_120);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_120_120, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_118_118, &STATE_VARIABLE_DumpInfo_124_124);
  top_level__mercury_compile_middle_passes__maybe_ssdb_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_120_120, &STATE_VARIABLE_HLDS_126_126);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_126_126, (MR_Integer) 137, (MR_String) "ssdb", STATE_VARIABLE_DumpInfo_124_124, &STATE_VARIABLE_DumpInfo_130_130);
  top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_126_126, &STATE_VARIABLE_HLDS_132_132, STATE_VARIABLE_Specs_100_100, &STATE_VARIABLE_Specs_133_133);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_132_132, (MR_Integer) 140, (MR_String) "accum", STATE_VARIABLE_DumpInfo_130_130, &STATE_VARIABLE_DumpInfo_137_137);
  top_level__mercury_compile_middle_passes__maybe_do_inlining_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_132_132, &STATE_VARIABLE_HLDS_139_139);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_139_139, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_137_137, &STATE_VARIABLE_DumpInfo_143_143);
  top_level__mercury_compile_middle_passes__maybe_loop_inv_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_139_139, &STATE_VARIABLE_HLDS_145_145, STATE_VARIABLE_DumpInfo_143_143, &STATE_VARIABLE_DumpInfo_146_146);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_145_145, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_146_146, &STATE_VARIABLE_DumpInfo_150_150);
  top_level__mercury_compile_middle_passes__maybe_deforestation_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_145_145, &STATE_VARIABLE_HLDS_152_152);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_152_152, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_150_150, &STATE_VARIABLE_DumpInfo_156_156);
  top_level__mercury_compile_middle_passes__maybe_delay_construct_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_152_152, &STATE_VARIABLE_HLDS_158_158);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_158_158, (MR_Integer) 160, (MR_String) "delay_construct", STATE_VARIABLE_DumpInfo_156_156, &STATE_VARIABLE_DumpInfo_162_162);
  top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_158_158, &STATE_VARIABLE_HLDS_164_164);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_164_164, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_162_162, &STATE_VARIABLE_DumpInfo_168_168);
  top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_164_164, &STATE_VARIABLE_HLDS_170_170);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_170_170, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_168_168, &STATE_VARIABLE_DumpInfo_174_174);
  top_level__mercury_compile_middle_passes__maybe_unused_args_10_p_0(ProgressStream_11, Verbose_18, Stats_19, &_UnusedArgsInfos_20, STATE_VARIABLE_HLDS_170_170, &STATE_VARIABLE_HLDS_176_176, STATE_VARIABLE_Specs_133_133, &STATE_VARIABLE_Specs_177_177);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_176_176, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_174_174, &STATE_VARIABLE_DumpInfo_181_181);
  top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_176_176, &STATE_VARIABLE_HLDS_183_183);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_183_183, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_181_181, &STATE_VARIABLE_DumpInfo_187_187);
  top_level__mercury_compile_middle_passes__maybe_unneeded_code_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_183_183, &STATE_VARIABLE_HLDS_189_189);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_189_189, (MR_Integer) 170, (MR_String) "unneeded_code", STATE_VARIABLE_DumpInfo_187_187, &STATE_VARIABLE_DumpInfo_193_193);
  top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 3, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_189_189, &STATE_VARIABLE_HLDS_198_198, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreImpPar_21);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_198_198, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", STATE_VARIABLE_DumpInfo_193_193, &STATE_VARIABLE_DumpInfo_203_203);
  top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_8_p_0(ProgressStream_11, ErrorStream_12, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_198_198, &STATE_VARIABLE_HLDS_205_205);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_205_205, (MR_Integer) 173, (MR_String) "implicit_parallelism", STATE_VARIABLE_DumpInfo_203_203, &STATE_VARIABLE_DumpInfo_209_209);
  top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_205_205, &STATE_VARIABLE_HLDS_211_211);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_211_211, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_209_209, &STATE_VARIABLE_DumpInfo_215_215);
  top_level__mercury_compile_middle_passes__maybe_control_granularity_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_211_211, &STATE_VARIABLE_HLDS_217_217);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_217_217, (MR_Integer) 200, (MR_String) "granularity", STATE_VARIABLE_DumpInfo_215_215, &STATE_VARIABLE_DumpInfo_221_221);
  top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_217_217, &STATE_VARIABLE_HLDS_223_223);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_223_223, (MR_Integer) 201, (MR_String) "distance_granularity", STATE_VARIABLE_DumpInfo_221_221, &STATE_VARIABLE_DumpInfo_227_227);
  top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_223_223, &STATE_VARIABLE_HLDS_229_229);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_229_229, (MR_Integer) 205, (MR_String) "dependent_par_conj", STATE_VARIABLE_DumpInfo_227_227, &STATE_VARIABLE_DumpInfo_233_233);
  top_level__mercury_compile_middle_passes__maybe_par_loop_control_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_229_229, &STATE_VARIABLE_HLDS_235_235);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_235_235, (MR_Integer) 206, (MR_String) "par_loop_control", STATE_VARIABLE_DumpInfo_233_233, &STATE_VARIABLE_DumpInfo_239_239);
  top_level__mercury_compile_middle_passes__maybe_lco_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_235_235, &STATE_VARIABLE_HLDS_241_241);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_241_241, (MR_Integer) 210, (MR_String) "lco", STATE_VARIABLE_DumpInfo_239_239, &STATE_VARIABLE_DumpInfo_245_245);
  top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_9_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_241_241, &STATE_VARIABLE_HLDS_247_247, STATE_VARIABLE_Specs_177_177, STATE_VARIABLE_Specs_28);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_247_247, (MR_Integer) 213, (MR_String) "float_reg_wrapper", STATE_VARIABLE_DumpInfo_245_245, &STATE_VARIABLE_DumpInfo_252_252);
  top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_11, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 2, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_247_247, &STATE_VARIABLE_HLDS_257_257, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreProf_22);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_257_257, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", STATE_VARIABLE_DumpInfo_252_252, &STATE_VARIABLE_DumpInfo_262_262);
  top_level__mercury_compile_middle_passes__maybe_term_size_prof_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_257_257, &STATE_VARIABLE_HLDS_264_264);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_264_264, (MR_Integer) 220, (MR_String) "term_size_prof", STATE_VARIABLE_DumpInfo_262_262, &STATE_VARIABLE_DumpInfo_268_268);
  top_level__mercury_compile_middle_passes__maybe_deep_profiling_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_264_264, &STATE_VARIABLE_HLDS_270_270);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_270_270, (MR_Integer) 225, (MR_String) "deep_profiling", STATE_VARIABLE_DumpInfo_268_268, &STATE_VARIABLE_DumpInfo_274_274);
  top_level__mercury_compile_middle_passes__maybe_experimental_complexity_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_270_270, &STATE_VARIABLE_HLDS_276_276);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_276_276, (MR_Integer) 230, (MR_String) "complexity", STATE_VARIABLE_DumpInfo_274_274, &STATE_VARIABLE_DumpInfo_280_280);
  top_level__mercury_compile_middle_passes__maybe_region_analysis_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_276_276, &STATE_VARIABLE_HLDS_282_282);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, STATE_VARIABLE_HLDS_282_282, (MR_Integer) 240, (MR_String) "region_analysis", STATE_VARIABLE_DumpInfo_280_280, &STATE_VARIABLE_DumpInfo_286_286);
  top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_7_p_0(ProgressStream_11, Verbose_18, Stats_19, STATE_VARIABLE_HLDS_282_282, STATE_VARIABLE_HLDS_24);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, *STATE_VARIABLE_HLDS_24, (MR_Integer) 250, (MR_String) "dead_procs", STATE_VARIABLE_DumpInfo_286_286, &STATE_VARIABLE_DumpInfo_292_292);
  hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_11, *STATE_VARIABLE_HLDS_24, (MR_Integer) 299, (MR_String) "middle_pass", STATE_VARIABLE_DumpInfo_292_292, STATE_VARIABLE_DumpInfo_26);
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
  OptDeadProcs_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
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
        libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 96, &DebugDeadProcElim_19);
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
  Analysis_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
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

  transform_hlds__complexity__complexity_process_proc_msg_8_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Integer) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 5)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__8_8);
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
    MR_Word Var_20 = ((MR_Word) ((MR_hl_field(1, MaybeNumProcMap_13, (MR_Integer) 0))));
    MR_Word Var_24;
    MR_Word Var_26;

    NumProcs_14 = ((MR_Integer) ((MR_hl_field(0, Var_20, (MR_Integer) 0))));
    ProcMap_15 = ((MR_Word) ((MR_hl_field(0, Var_20, (MR_Integer) 1))));
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying complexity experiment transformation...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_3[1]));
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 244, &ProfileDeep_14);
  switch (ProfileDeep_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying deep profiling transformation...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
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

  transform_hlds__size_prof__size_prof_process_proc_msg_7_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__7_7);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 261, &AsWords_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 262, &AsCells_15);
  switch (AsWords_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (AsCells_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransform_16 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          MaybeTransform_16 = (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_2[3]));
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (AsCells_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          MaybeTransform_16 = (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_2[4]));
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
    MR_Word Transform_17 = ((MR_Word) ((MR_hl_field(1, MaybeTransform_16, (MR_Integer) 0))));
    MR_Word Var_31;
    MR_Word Var_33;

    libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Applying term size profiling transformation...\n");
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
    {
      Var_33 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_33, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_8[0]));
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
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 307, &UseFloatRegs_17);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 719, &LoopControl_14);
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
            hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_2[5])), STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_HLDS_28_28;
              MR_Word Var_16;
              MR_Word Var_17;

              libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Dependent parallel conjunction transformation...\n");
              libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
              transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_28_28);
              transform_hlds__dead_proc_elim__dead_proc_elim_5_p_0((MR_Integer) 1, &Var_16, &Var_17, STATE_VARIABLE_HLDS_28_28, STATE_VARIABLE_HLDS_19);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 265, &Parallel_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 308, &HighLevelCode_15);
  libs__globals__lookup_int_option_3_p_0(Globals_13, (MR_Integer) 716, &Distance_16);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 265, &Parallel_14);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 308, &HighLevelCode_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 715, &Control_16);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 509, &TablingAnalysis_14);
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
  LCMC_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
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

  transform_hlds__unneeded_code__unneeded_process_proc_msg_6_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
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
  UnneededCode_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
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
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]));
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 506, &AnalyseTrail_14);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 512, &ReuseAnalysis_14);
  switch (ReuseAnalysis_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Structure reuse analysis...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 510, &Sharing_14);
  switch (Sharing_14) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
      break;
    case (MR_Integer) 1:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Structure sharing analysis...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
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

  transform_hlds__delay_construct__delay_construct_proc_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__5_5);
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
  DelayConstruct_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
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
          MR_hl_field(0, Var_25, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0]));
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
  PropLocalConstraints_16 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
  Deforest_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
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
  LoopInv_18 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_17, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
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
        MR_Word STATE_VARIABLE_HLDS_25_25;

        hlds__mark_static_terms__maybe_mark_static_terms_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_0_19, &STATE_VARIABLE_HLDS_25_25);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_10, STATE_VARIABLE_HLDS_25_25, (MR_Integer) 148, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_0_21, STATE_VARIABLE_DumpInfo_22);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Hoisting loop invariants...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
        hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(3, &top_level__mercury_compile_middle_passes_scalar_common_1[2])), STATE_VARIABLE_HLDS_25_25, STATE_VARIABLE_HLDS_20);
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
  Allow_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
  Simple_16 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
  SingleUse_17 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
  LinearRec_19 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
  Threshold_18 = ((MR_Integer) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 4))));
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
  MR_Word conv2_HeadVar__4_4;
  MR_Word conv1_HeadVar__6_6;
  MR_Word conv0_HeadVar__8_8;

  transform_hlds__accumulator__accu_transform_proc_8_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv2_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv1_HeadVar__6_6, ((MR_Word) (wrapper_arg_7)), &conv0_HeadVar__8_8);
  *wrapper_arg_4 = ((MR_Box) (conv2_HeadVar__4_4));
  *wrapper_arg_6 = ((MR_Box) (conv1_HeadVar__6_6));
  *wrapper_arg_8 = ((MR_Box) (conv0_HeadVar__8_8));
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
  IntroduceAccumulators_18 = ((MR_Unsigned) ((MR_hl_field(0, OptTuple_17, (MR_Integer) 0))) & (MR_Integer) 1);
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
        MR_Word AccSpecs_24;
        MR_Word Cookie_23;
        MR_Box conv3_AccSpecs_24;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Attempting to introduce accumulators...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
        mercury__univ__type_to_univ_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 0U)), &Cookie0_19);
        {
          Task0_20 = (MR_Word) MR_mkword(3, MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(3, Task0_20, 0) = ((MR_Box) ((MR_Unsigned) 3U));
          MR_hl_field(3, Task0_20, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
          MR_hl_field(3, Task0_20, 2) = ((MR_Box) (Cookie0_19));
        }
        hlds__passes_aux__process_valid_nonimported_procs_update_4_p_0(Task0_20, &Task_21, STATE_VARIABLE_HLDS_0_25, STATE_VARIABLE_HLDS_26);
        succeeded = ((((MR_tag((MR_Word) Task_21)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(3, Task_21, (MR_Integer) 0)))) == (MR_Integer) 3)));
        if (succeeded)
        {
          Cookie_23 = ((MR_Word) ((MR_hl_field(3, Task_21, (MR_Integer) 2))));
          succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), Cookie_23, &conv3_AccSpecs_24);
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
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word ErrorStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21)
{
  MR_Word Globals_15;
  MR_Word ImplicitParallelism_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 717, &ImplicitParallelism_16);
  switch (ImplicitParallelism_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
      break;
    case (MR_Integer) 1:
      {
        MR_Word MaybeSourceFileMap_17;
        MR_Word SourceFileMap_18;
        MR_Word Specs_19;

        libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap_17);
        if ((MaybeSourceFileMap_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_implicit_parallelism\'/8", (MR_String) "could not retrieve the source file map");
            return;
          }
        else
          SourceFileMap_18 = ((MR_Word) ((MR_hl_field(1, MaybeSourceFileMap_17, (MR_Integer) 0))));
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Applying implicit parallelism...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_11);
        transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(SourceFileMap_18, &Specs_19, STATE_VARIABLE_HLDS_0_20, STATE_VARIABLE_HLDS_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% done.\n");
        parse_tree__write_error_spec__write_error_specs_5_p_0(ErrorStream_10, Globals_15, Specs_19);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_7_p_0(
  MR_Word ProgressStream_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  MR_Word Globals_13;
  MR_Word ForceDisableSSDB_14;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_13);
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 171, &ForceDisableSSDB_14);
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
              transform_hlds__ssdebug__ssdebug_transform_module_5_p_0(SSTraceLevel_15, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
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
  MR_Word TypeSpecInfo_17;
  MR_Word TypeSpecPreds_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_13);
  libs__globals__get_opt_tuple_2_p_0(Globals_13, &OptTuple_14);
  HigherOrder_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
  UserTypeSpec_16 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
  hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_HLDS_0_22, &TypeSpecInfo_17);
  TypeSpecPreds_18 = ((MR_Word) ((MR_hl_field(0, TypeSpecInfo_17, (MR_Integer) 0))));
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
    transform_hlds__higher_order__specialize_higher_order_4_p_0(STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23);
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
  Tuple_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
  switch (Tuple_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      break;
    case (MR_Integer) 0:
      {
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Tupling...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__tupling__tuple_arguments_4_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
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
  Untuple_15 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_14, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
  switch (Untuple_15) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
      break;
    case (MR_Integer) 0:
      {
        MR_Word STATE_VARIABLE_HLDS_24_24;
        MR_Word _SimplifySpecs_16;

        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% Untupling...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_8, Verbose_9);
        transform_hlds__untupling__untuple_arguments_4_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_24_24);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_8, Verbose_9, (MR_String) "% done.\n");
        top_level__mercury_compile_front_end__maybe_simplify_12_p_0(ProgressStream_8, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 1, Verbose_9, Stats_10, STATE_VARIABLE_HLDS_24_24, STATE_VARIABLE_HLDS_18, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecs_16);
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_8, Stats_10);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
  MR_Word ProgressStream_9,
  MR_Word HLDS0_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_DumpInfo_0_22,
  MR_Word * STATE_VARIABLE_DumpInfo_23)
{
  MR_Word Globals_15;
  MR_Word GenBytecode_16;

  hlds__hlds_module__module_info_get_globals_2_p_0(HLDS0_10, &Globals_15);
  libs__globals__lookup_bool_option_3_p_0(Globals_15, (MR_Integer) 172, &GenBytecode_16);
  switch (GenBytecode_16) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *STATE_VARIABLE_DumpInfo_23 = STATE_VARIABLE_DumpInfo_0_22;
      break;
    case (MR_Integer) 1:
      {
        MR_Word HLDS1_17;
        MR_Word Bytecode_18;
        MR_Word ModuleName_19;
        MR_String BytedebugFile_20;
        MR_String BytecodeFile_21;

        top_level__mercury_compile_llds_back_end__map_args_to_regs_7_p_0(ProgressStream_9, Verbose_11, Stats_12, HLDS0_10, &HLDS1_17);
        hlds__passes_aux__maybe_dump_hlds_8_p_0(ProgressStream_9, HLDS1_17, (MR_Integer) 505, (MR_String) "bytecode_args_to_regs", STATE_VARIABLE_DumpInfo_0_22, STATE_VARIABLE_DumpInfo_23);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Generating bytecodes...\n");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_11);
        bytecode_backend__bytecode_gen__gen_module_4_p_0(HLDS1_17, &Bytecode_18);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
        hlds__hlds_module__module_info_get_name_2_p_0(HLDS1_17, &ModuleName_19);
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_bytecodes\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_2[1])), ModuleName_19, &BytedebugFile_20);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Writing bytecodes to \140");
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, BytedebugFile_20);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "\'...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_11);
        bytecode_backend__bytecode__debug_bytecode_file_4_p_0(BytedebugFile_20, Bytecode_18);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) " done.\n");
        parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_15, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_bytecodes\'/8", (MR_Integer) 0, (MR_Word) (MR_mkword(1, &top_level__mercury_compile_middle_passes_scalar_common_2[2])), ModuleName_19, &BytecodeFile_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "% Writing bytecodes to \140");
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, BytecodeFile_21);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) "\'...");
        libs__file_util__maybe_flush_output_4_p_0(ProgressStream_9, Verbose_11);
        bytecode_backend__bytecode__output_bytecode_file_4_p_0(BytecodeFile_21, Bytecode_18);
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_9, Verbose_11, (MR_String) " done.\n");
        libs__file_util__maybe_report_stats_4_p_0(ProgressStream_9, Stats_12);
      }
      break;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_9_p_0(
  MR_Word ProgressStream_10,
  MR_Word Verbose_11,
  MR_Word Stats_12,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23)
{
  MR_bool succeeded;
  MR_Word Globals_16;
  MR_Word WarnDeadProcs_17;
  MR_Word WarnDeadPreds_18;

  hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_16);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 42, &WarnDeadProcs_17);
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 43, &WarnDeadPreds_18);
  succeeded = (WarnDeadProcs_17 == (MR_Integer) 1);
  if (!(succeeded))
    succeeded = (WarnDeadPreds_18 == (MR_Integer) 1);
  if (succeeded)
  {
    MR_Word DeadSpecs_19;

    switch (WarnDeadProcs_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Warning about dead predicates...\n");
        break;
      case (MR_Integer) 1:
        libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% Warning about dead procedures...\n");
        break;
    }
    libs__file_util__maybe_flush_output_4_p_0(ProgressStream_10, Verbose_11);
    transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0(STATE_VARIABLE_HLDS_0_20, &DeadSpecs_19);
    *STATE_VARIABLE_Specs_23 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_spec__parse_tree__error_spec__type_ctor_info_error_spec_0), DeadSpecs_19, STATE_VARIABLE_Specs_0_22);
    libs__file_util__maybe_write_string_5_p_0(ProgressStream_10, Verbose_11, (MR_String) "% done.\n");
    libs__file_util__maybe_report_stats_4_p_0(ProgressStream_10, Stats_12);
  }
  else
    *STATE_VARIABLE_Specs_23 = STATE_VARIABLE_Specs_0_22;
  *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 325, &TypeCtorInfo_14);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 525, &Termination2_17);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 518, &Termination_17);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 533, &ExceptionAnalysis_14);
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
  libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 534, &ClosureAnalysis_14);
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
  libs__globals__lookup_string_option_3_p_0(Globals_9, (MR_Integer) 263, &FileName_10);
  succeeded = (strcmp(FileName_10, (MR_String) "") == 0);
  if (succeeded)
    *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
  else
  {
    MR_Word MaybeNumProcMap_11;

    transform_hlds__complexity__read_spec_file_4_p_0(FileName_10, &MaybeNumProcMap_11);
    if (((MR_tag((MR_Word) MaybeNumProcMap_11)) == (MR_Integer) 1))
    {
      MR_String Msg_14 = ((MR_String) ((MR_hl_field(1, MaybeNumProcMap_11, (MR_Integer) 0))));

      libs__file_util__report_error_4_p_0(ErrorStream_6, Msg_14);
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, MaybeNumProcMap_11, (MR_Integer) 0))));
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
  OptUnusedArgs_20 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_19, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
  OptUnusedArgsIntermod_21 = ((((MR_Unsigned) ((MR_hl_field(0, OptTuple_19, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
  libs__globals__lookup_bool_option_3_p_0(Globals_18, (MR_Integer) 14, &WarnUnusedArgs_22);
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
    mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfos_14);
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
