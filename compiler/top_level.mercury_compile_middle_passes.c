/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version 22.01-beta-2022-03-28
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
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
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
#include "check_hlds.type_util.mih"
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
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
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
#include "parse_tree.error_util.mih"
#include "parse_tree.file_kind.mih"
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
#include "parse_tree.set_of_var.mih"
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
#include "transform_hlds.ctgc.selector.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.implicit_parallelism.introduce_parallelism.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.analysis.mih"




static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__812__1_2_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_35);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_19,
  MR_Word * STATE_VARIABLE_DumpInfo_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0_1(
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
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(
  MR_Word HLDS0_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_DumpInfo_0_20,
  MR_Word * STATE_VARIABLE_DumpInfo_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_stm_goals_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);


static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[4][2];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[7][1];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][5];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[1][11];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[5][3];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[2][9];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[1][7];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][8];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_9[1][10];




static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[4][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_analysis__compiler__arity1__transform_hlds__mmc_analysis__mmc__arity0__)),
    ((MR_Box) (&transform_hlds__mmc_analysis__transform_hlds__mmc_analysis__type_ctor_info_mmc_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[3]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[7][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".trans_opt"))))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".bytedebug"))))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) ".mbc"))))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[2]))
  },
  /* row 6 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[4]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[1][11] = {
  /* row 0 */
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
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_8[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_7[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[2][9] = {
  /* row 0 */
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
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 6)),
    ((MR_Box) (&transform_hlds__size_prof__transform_hlds__size_prof__type_ctor_info_construct_transform_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[1][7] = {
  /* row 0 */
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_8[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_proc_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0)),
    ((MR_Box) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_module_info_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_9[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 7)),
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



static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__812__1_2_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (HeadVar__1_34 == HeadVar__2_35);

    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__output_analysis_file_7_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word STATE_VARIABLE_Specs_0_22,
  MR_Word * STATE_VARIABLE_Specs_23,
  MR_Word STATE_VARIABLE_DumpInfo_0_24,
  MR_Word * STATE_VARIABLE_DumpInfo_25)
{
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word Verbose_13;
    MR_Word Stats_14;
    MR_Word ClosureAnalysis_15;
    MR_Word SharingAnalysis_16;
    MR_Word AnalysisInfo_18;
    MR_Word ImportedModules_19;
    MR_Word STATE_VARIABLE_HLDS_32_32;
    MR_Word STATE_VARIABLE_DumpInfo_36_36;
    MR_Word STATE_VARIABLE_HLDS_38_38;
    MR_Word STATE_VARIABLE_DumpInfo_42_42;
    MR_Word STATE_VARIABLE_HLDS_44_44;
    MR_Word STATE_VARIABLE_DumpInfo_48_48;
    MR_Word STATE_VARIABLE_HLDS_50_50;
    MR_Word STATE_VARIABLE_Specs_51_51;
    MR_Word STATE_VARIABLE_DumpInfo_55_55;
    MR_Word STATE_VARIABLE_HLDS_57_57;
    MR_Word STATE_VARIABLE_Specs_58_58;
    MR_Word STATE_VARIABLE_DumpInfo_62_62;
    MR_Word STATE_VARIABLE_HLDS_83_83;
    MR_Word STATE_VARIABLE_DumpInfo_87_87;
    MR_Word STATE_VARIABLE_HLDS_89_89;
    MR_Word STATE_VARIABLE_DumpInfo_93_93;
    MR_Word STATE_VARIABLE_HLDS_95_95;
    MR_Word STATE_VARIABLE_DumpInfo_99_99;
    MR_Word STATE_VARIABLE_HLDS_101_101;
    MR_Word STATE_VARIABLE_DumpInfo_106_106;
    MR_Word STATE_VARIABLE_HLDS_108_108;
    MR_Word STATE_VARIABLE_DumpInfo_112_112;
    MR_Word STATE_VARIABLE_HLDS_114_114;
    MR_Word _UnusedArgsInfos_17;
    MR_Word _AnalysisInfo_20;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 70, &Verbose_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 80, &Stats_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 528, &ClosureAnalysis_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 504, &SharingAnalysis_16);
    succeeded = (ClosureAnalysis_15 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_16 == (MR_Integer) 1);
    if (succeeded)
      top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_0_21, &STATE_VARIABLE_HLDS_32_32);
    else
      STATE_VARIABLE_HLDS_32_32 = STATE_VARIABLE_HLDS_0_21;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_32_32, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_24, &STATE_VARIABLE_DumpInfo_36_36);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_32_32, &STATE_VARIABLE_HLDS_38_38);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_38_38, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_36_36, &STATE_VARIABLE_DumpInfo_42_42);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_38_38, &STATE_VARIABLE_HLDS_44_44);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_44_44, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_42_42, &STATE_VARIABLE_DumpInfo_48_48);
    top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_44_44, &STATE_VARIABLE_HLDS_50_50, STATE_VARIABLE_Specs_0_22, &STATE_VARIABLE_Specs_51_51);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_50_50, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_48_48, &STATE_VARIABLE_DumpInfo_55_55);
    top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_50_50, &STATE_VARIABLE_HLDS_57_57, STATE_VARIABLE_Specs_51_51, &STATE_VARIABLE_Specs_58_58);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_57_57, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_55_55, &STATE_VARIABLE_DumpInfo_62_62);
    switch (SharingAnalysis_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_83_83 = STATE_VARIABLE_HLDS_57_57;
          STATE_VARIABLE_DumpInfo_87_87 = STATE_VARIABLE_DumpInfo_62_62;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_64_64;
          MR_Word STATE_VARIABLE_DumpInfo_68_68;
          MR_Word STATE_VARIABLE_HLDS_70_70;
          MR_Word STATE_VARIABLE_DumpInfo_74_74;
          MR_Word STATE_VARIABLE_HLDS_76_76;
          MR_Word STATE_VARIABLE_DumpInfo_77_77;
          MR_Word STATE_VARIABLE_DumpInfo_81_81;

          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_57_57, &STATE_VARIABLE_HLDS_64_64);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_64_64, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_62_62, &STATE_VARIABLE_DumpInfo_68_68);
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_64_64, &STATE_VARIABLE_HLDS_70_70);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_70_70, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_68_68, &STATE_VARIABLE_DumpInfo_74_74);
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_70_70, &STATE_VARIABLE_HLDS_76_76, STATE_VARIABLE_DumpInfo_74_74, &STATE_VARIABLE_DumpInfo_77_77);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_76_76, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_77_77, &STATE_VARIABLE_DumpInfo_81_81);
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_76_76, &STATE_VARIABLE_HLDS_83_83);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_83_83, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_81_81, &STATE_VARIABLE_DumpInfo_87_87);
        }
        break;
    }
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_83_83, &STATE_VARIABLE_HLDS_89_89);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_89_89, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_87_87, &STATE_VARIABLE_DumpInfo_93_93);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_89_89, &STATE_VARIABLE_HLDS_95_95);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_95_95, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_93_93, &STATE_VARIABLE_DumpInfo_99_99);
    top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_13, Stats_14, &_UnusedArgsInfos_17, STATE_VARIABLE_HLDS_95_95, &STATE_VARIABLE_HLDS_101_101, STATE_VARIABLE_Specs_58_58, STATE_VARIABLE_Specs_23);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_101_101, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_99_99, &STATE_VARIABLE_DumpInfo_106_106);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_101_101, &STATE_VARIABLE_HLDS_108_108);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_108_108, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_106_106, &STATE_VARIABLE_DumpInfo_112_112);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_108_108, &STATE_VARIABLE_HLDS_114_114);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_114_114, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_112_112, STATE_VARIABLE_DumpInfo_25);
    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_114_114, &AnalysisInfo_18);
    hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_114_114, &ImportedModules_19);
    analysis__write_analysis_files_7_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_HLDS_114_114, ImportedModules_19, AnalysisInfo_18, &_AnalysisInfo_20);
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_7_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_35,
  MR_Word STATE_VARIABLE_Specs_0_36,
  MR_Word * STATE_VARIABLE_Specs_37,
  MR_Word STATE_VARIABLE_DumpInfo_0_38,
  MR_Word * STATE_VARIABLE_DumpInfo_39)
{
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word Verbose_13;
    MR_Word Stats_14;
    MR_Word ClosureAnalysis_15;
    MR_Word SharingAnalysis_16;
    MR_Word ModuleName_17;
    MR_String OptFileName_18;
    MR_String TmpOptFileName_19;
    MR_Word TmpOptResult_20;
    MR_Word STATE_VARIABLE_HLDS_46_46;
    MR_Word STATE_VARIABLE_DumpInfo_50_50;
    MR_Word STATE_VARIABLE_HLDS_52_52;
    MR_Word STATE_VARIABLE_DumpInfo_56_56;
    MR_Word STATE_VARIABLE_HLDS_58_58;
    MR_Word STATE_VARIABLE_DumpInfo_62_62;
    MR_Word STATE_VARIABLE_HLDS_64_64;
    MR_Word STATE_VARIABLE_Specs_65_65;
    MR_Word STATE_VARIABLE_DumpInfo_69_69;
    MR_Word STATE_VARIABLE_HLDS_71_71;
    MR_Word STATE_VARIABLE_DumpInfo_76_76;
    MR_Word STATE_VARIABLE_HLDS_97_97;
    MR_Word STATE_VARIABLE_DumpInfo_101_101;
    MR_Word STATE_VARIABLE_HLDS_103_103;
    MR_Word STATE_VARIABLE_DumpInfo_107_107;
    MR_Word STATE_VARIABLE_HLDS_109_109;
    MR_Word STATE_VARIABLE_DumpInfo_113_113;
    MR_Word STATE_VARIABLE_HLDS_115_115;
    MR_Word STATE_VARIABLE_DumpInfo_119_119;
    MR_Word STATE_VARIABLE_HLDS_121_121;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_35, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 70, &Verbose_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 80, &Stats_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 528, &ClosureAnalysis_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 504, &SharingAnalysis_16);
    succeeded = (ClosureAnalysis_15 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_16 == (MR_Integer) 1);
    if (succeeded)
      top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_0_35, &STATE_VARIABLE_HLDS_46_46);
    else
      STATE_VARIABLE_HLDS_46_46 = STATE_VARIABLE_HLDS_0_35;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_46_46, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_38, &STATE_VARIABLE_DumpInfo_50_50);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_46_46, &STATE_VARIABLE_HLDS_52_52);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_52_52, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_50_50, &STATE_VARIABLE_DumpInfo_56_56);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_52_52, &STATE_VARIABLE_HLDS_58_58);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_58_58, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_56_56, &STATE_VARIABLE_DumpInfo_62_62);
    top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_58_58, &STATE_VARIABLE_HLDS_64_64, STATE_VARIABLE_Specs_0_36, &STATE_VARIABLE_Specs_65_65);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_64_64, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_62_62, &STATE_VARIABLE_DumpInfo_69_69);
    top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_64_64, &STATE_VARIABLE_HLDS_71_71, STATE_VARIABLE_Specs_65_65, STATE_VARIABLE_Specs_37);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_71_71, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_69_69, &STATE_VARIABLE_DumpInfo_76_76);
    switch (SharingAnalysis_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_97_97 = STATE_VARIABLE_HLDS_71_71;
          STATE_VARIABLE_DumpInfo_101_101 = STATE_VARIABLE_DumpInfo_76_76;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_78_78;
          MR_Word STATE_VARIABLE_DumpInfo_82_82;
          MR_Word STATE_VARIABLE_HLDS_84_84;
          MR_Word STATE_VARIABLE_DumpInfo_88_88;
          MR_Word STATE_VARIABLE_HLDS_90_90;
          MR_Word STATE_VARIABLE_DumpInfo_91_91;
          MR_Word STATE_VARIABLE_DumpInfo_95_95;

          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_71_71, &STATE_VARIABLE_HLDS_78_78);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_78_78, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_76_76, &STATE_VARIABLE_DumpInfo_82_82);
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_78_78, &STATE_VARIABLE_HLDS_84_84);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_84_84, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_82_82, &STATE_VARIABLE_DumpInfo_88_88);
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_84_84, &STATE_VARIABLE_HLDS_90_90, STATE_VARIABLE_DumpInfo_88_88, &STATE_VARIABLE_DumpInfo_91_91);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_90_90, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_91_91, &STATE_VARIABLE_DumpInfo_95_95);
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_90_90, &STATE_VARIABLE_HLDS_97_97);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_97_97, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_95_95, &STATE_VARIABLE_DumpInfo_101_101);
        }
        break;
    }
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_97_97, &STATE_VARIABLE_HLDS_103_103);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_103_103, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_101_101, &STATE_VARIABLE_DumpInfo_107_107);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_103_103, &STATE_VARIABLE_HLDS_109_109);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_109_109, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_107_107, &STATE_VARIABLE_DumpInfo_113_113);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_109_109, &STATE_VARIABLE_HLDS_115_115);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_115_115, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_113_113, &STATE_VARIABLE_DumpInfo_119_119);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_115_115, &STATE_VARIABLE_HLDS_121_121);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_121_121, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_119_119, STATE_VARIABLE_DumpInfo_39);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_121_121, &ModuleName_17);
    parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_12, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.output_trans_opt_file\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[0])), ModuleName_17, &OptFileName_18);
    TmpOptFileName_19 = mercury__string__f_43_43_2_f_0(OptFileName_18, (MR_String) ".tmp");
    mercury__io__open_output_4_p_0(TmpOptFileName_19, &TmpOptResult_20);
    if (((MR_tag((MR_Word) TmpOptResult_20)) == (MR_Integer) 1))
    {
      MR_Word Error_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpOptResult_20, (MR_Integer) 0))));
      MR_String ProgName_22;
      MR_String ErrorMsg_23;

      mercury__io__progname_base_4_p_0((MR_String) "mmc", &ProgName_22);
      mercury__io__error_message_2_p_0(Error_21, &ErrorMsg_23);
      mercury__io__write_string_3_p_0(ProgName_22);
      mercury__io__write_string_3_p_0((MR_String) ": cannot open \140");
      mercury__io__write_string_3_p_0(TmpOptFileName_19);
      mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
      mercury__io__write_string_3_p_0(ErrorMsg_23);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word TmpOptStream_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TmpOptResult_20, (MR_Integer) 0))));
      MR_Word ParseTreeTransOpt_25;
      MR_Word ProgressStream_27;
      MR_Word ErrorStream_28;
      MR_Word Experiment5_30;
      MR_Word _UpdateSucceeded_26;
      MR_Word _TouchSucceeded_29;

      transform_hlds__intermod_analysis__write_trans_opt_file_5_p_0(TmpOptStream_24, STATE_VARIABLE_HLDS_121_121, &ParseTreeTransOpt_25);
      mercury__io__close_output_3_p_0(TmpOptStream_24);
      parse_tree__module_cmds__update_interface_report_any_error_6_p_0(Globals_12, ModuleName_17, OptFileName_18, &_UpdateSucceeded_26);
      libs__globals__get_progress_output_stream_5_p_0(Globals_12, ModuleName_17, &ProgressStream_27);
      libs__globals__get_error_output_stream_5_p_0(Globals_12, ModuleName_17, &ErrorStream_28);
      parse_tree__module_cmds__touch_interface_datestamp_8_p_0(Globals_12, ProgressStream_27, ErrorStream_28, ModuleName_17, (MR_Word) (((MR_Box) ((MR_String) ".trans_opt_date"))), &_TouchSucceeded_29);
      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 705, &Experiment5_30);
      switch (Experiment5_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OptXResult_31;
            MR_String Var_144;

            Var_144 = mercury__string__f_43_43_2_f_0(OptFileName_18, (MR_String) "x");
            mercury__io__open_output_4_p_0(Var_144, &OptXResult_31);
            if (!(((MR_tag((MR_Word) OptXResult_31)) == (MR_Integer) 1)))
            {
              MR_Word OptXStream_33 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptXResult_31, (MR_Integer) 0))));
              MR_Word Info_34;

              Info_34 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_12, (MR_Integer) 0, (MR_Integer) 0);
              parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_5_p_0(Info_34, OptXStream_33, ParseTreeTransOpt_25);
              mercury__io__close_output_3_p_0(OptXStream_33);
            }
          }
          break;
      }
    }
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_7_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word * UnusedArgsInfos_9,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word Verbose_13;
    MR_Word Stats_14;
    MR_Word ClosureAnalysis_15;
    MR_Word SharingAnalysis_16;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_HLDS_31_31;
    MR_Word STATE_VARIABLE_HLDS_33_33;
    MR_Word STATE_VARIABLE_HLDS_35_35;
    MR_Word STATE_VARIABLE_Specs_36_36;
    MR_Word STATE_VARIABLE_HLDS_38_38;
    MR_Word STATE_VARIABLE_Specs_39_39;
    MR_Word STATE_VARIABLE_HLDS_41_41;
    MR_Word STATE_VARIABLE_HLDS_44_44;
    MR_Word STATE_VARIABLE_HLDS_46_46;
    MR_Word STATE_VARIABLE_HLDS_48_48;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 70, &Verbose_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 80, &Stats_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 528, &ClosureAnalysis_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 504, &SharingAnalysis_16);
    succeeded = (ClosureAnalysis_15 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_16 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_HLDS_27_27;

      libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% Transforming lambda expressions...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_13);
      transform_hlds__lambda__expand_lambdas_in_module_2_p_0(STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_27_27);
      libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_14);
      libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) "% Transforming stm expressions...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_13);
      transform_hlds__stm_expand__stm_process_module_2_p_0(STATE_VARIABLE_HLDS_27_27, &STATE_VARIABLE_HLDS_29_29);
      libs__file_util__maybe_write_string_4_p_0(Verbose_13, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_14);
    }
    else
      STATE_VARIABLE_HLDS_29_29 = STATE_VARIABLE_HLDS_0_17;
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_29_29, &STATE_VARIABLE_HLDS_31_31);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_31_31, &STATE_VARIABLE_HLDS_33_33);
    top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_13, Stats_14, UnusedArgsInfos_9, STATE_VARIABLE_HLDS_33_33, &STATE_VARIABLE_HLDS_35_35, STATE_VARIABLE_Specs_0_19, &STATE_VARIABLE_Specs_36_36);
    top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_38_38, STATE_VARIABLE_Specs_36_36, &STATE_VARIABLE_Specs_39_39);
    top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_38_38, &STATE_VARIABLE_HLDS_41_41, STATE_VARIABLE_Specs_39_39, STATE_VARIABLE_Specs_20);
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_41_41, &STATE_VARIABLE_HLDS_44_44);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_44_44, &STATE_VARIABLE_HLDS_46_46);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_46_46, &STATE_VARIABLE_HLDS_48_48);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_48_48, STATE_VARIABLE_HLDS_18);
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_8_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20,
  MR_Word STATE_VARIABLE_DumpInfo_0_21,
  MR_Word * STATE_VARIABLE_DumpInfo_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_Word Globals_13;
    MR_Word Verbose_14;
    MR_Word Stats_15;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_HLDS_31_31;
    MR_Word STATE_VARIABLE_Specs_32_32;
    MR_Word STATE_VARIABLE_DumpInfo_36_36;
    MR_Word STATE_VARIABLE_HLDS_38_38;
    MR_Word STATE_VARIABLE_DumpInfo_42_42;
    MR_Word STATE_VARIABLE_HLDS_44_44;
    MR_Word STATE_VARIABLE_Specs_45_45;
    MR_Word STATE_VARIABLE_DumpInfo_49_49;
    MR_Word STATE_VARIABLE_HLDS_51_51;
    MR_Word STATE_VARIABLE_DumpInfo_55_55;
    MR_Word STATE_VARIABLE_HLDS_57_57;
    MR_Word STATE_VARIABLE_DumpInfo_61_61;
    MR_Word STATE_VARIABLE_HLDS_63_63;
    MR_Word STATE_VARIABLE_DumpInfo_67_67;
    MR_Word STATE_VARIABLE_HLDS_69_69;
    MR_Word STATE_VARIABLE_DumpInfo_73_73;
    MR_Word STATE_VARIABLE_HLDS_75_75;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word STATE_VARIABLE_DumpInfo_80_80;
    MR_Word STATE_VARIABLE_HLDS_82_82;
    MR_Word STATE_VARIABLE_Specs_83_83;
    MR_Word STATE_VARIABLE_DumpInfo_87_87;
    MR_Word STATE_VARIABLE_HLDS_89_89;
    MR_Word STATE_VARIABLE_DumpInfo_93_93;
    MR_Word STATE_VARIABLE_HLDS_95_95;
    MR_Word STATE_VARIABLE_Specs_96_96;
    MR_Word STATE_VARIABLE_DumpInfo_100_100;
    MR_Word STATE_VARIABLE_DumpInfo_102_102;
    MR_Word STATE_VARIABLE_HLDS_104_104;
    MR_Word STATE_VARIABLE_DumpInfo_108_108;
    MR_Word STATE_VARIABLE_HLDS_110_110;
    MR_Word STATE_VARIABLE_DumpInfo_114_114;
    MR_Word STATE_VARIABLE_HLDS_116_116;
    MR_Word STATE_VARIABLE_DumpInfo_120_120;
    MR_Word STATE_VARIABLE_HLDS_122_122;
    MR_Word STATE_VARIABLE_DumpInfo_126_126;
    MR_Word STATE_VARIABLE_HLDS_128_128;
    MR_Word STATE_VARIABLE_Specs_129_129;
    MR_Word STATE_VARIABLE_DumpInfo_133_133;
    MR_Word STATE_VARIABLE_HLDS_135_135;
    MR_Word STATE_VARIABLE_DumpInfo_139_139;
    MR_Word STATE_VARIABLE_HLDS_141_141;
    MR_Word STATE_VARIABLE_DumpInfo_142_142;
    MR_Word STATE_VARIABLE_DumpInfo_146_146;
    MR_Word STATE_VARIABLE_HLDS_148_148;
    MR_Word STATE_VARIABLE_DumpInfo_152_152;
    MR_Word STATE_VARIABLE_HLDS_154_154;
    MR_Word STATE_VARIABLE_DumpInfo_158_158;
    MR_Word STATE_VARIABLE_HLDS_160_160;
    MR_Word STATE_VARIABLE_DumpInfo_164_164;
    MR_Word STATE_VARIABLE_HLDS_166_166;
    MR_Word STATE_VARIABLE_DumpInfo_170_170;
    MR_Word STATE_VARIABLE_HLDS_172_172;
    MR_Word STATE_VARIABLE_Specs_173_173;
    MR_Word STATE_VARIABLE_DumpInfo_177_177;
    MR_Word STATE_VARIABLE_HLDS_179_179;
    MR_Word STATE_VARIABLE_DumpInfo_183_183;
    MR_Word STATE_VARIABLE_HLDS_185_185;
    MR_Word STATE_VARIABLE_DumpInfo_189_189;
    MR_Word STATE_VARIABLE_HLDS_193_193;
    MR_Word STATE_VARIABLE_DumpInfo_198_198;
    MR_Word STATE_VARIABLE_HLDS_200_200;
    MR_Word STATE_VARIABLE_DumpInfo_204_204;
    MR_Word STATE_VARIABLE_HLDS_206_206;
    MR_Word STATE_VARIABLE_DumpInfo_210_210;
    MR_Word STATE_VARIABLE_HLDS_212_212;
    MR_Word STATE_VARIABLE_DumpInfo_216_216;
    MR_Word STATE_VARIABLE_HLDS_218_218;
    MR_Word STATE_VARIABLE_DumpInfo_222_222;
    MR_Word STATE_VARIABLE_HLDS_224_224;
    MR_Word STATE_VARIABLE_DumpInfo_228_228;
    MR_Word STATE_VARIABLE_HLDS_230_230;
    MR_Word STATE_VARIABLE_DumpInfo_234_234;
    MR_Word STATE_VARIABLE_HLDS_236_236;
    MR_Word STATE_VARIABLE_DumpInfo_240_240;
    MR_Word STATE_VARIABLE_HLDS_242_242;
    MR_Word STATE_VARIABLE_DumpInfo_247_247;
    MR_Word STATE_VARIABLE_HLDS_251_251;
    MR_Word STATE_VARIABLE_DumpInfo_256_256;
    MR_Word STATE_VARIABLE_HLDS_258_258;
    MR_Word STATE_VARIABLE_DumpInfo_262_262;
    MR_Word STATE_VARIABLE_HLDS_264_264;
    MR_Word STATE_VARIABLE_DumpInfo_268_268;
    MR_Word STATE_VARIABLE_HLDS_270_270;
    MR_Word STATE_VARIABLE_DumpInfo_274_274;
    MR_Word STATE_VARIABLE_HLDS_276_276;
    MR_Word STATE_VARIABLE_DumpInfo_280_280;
    MR_Word STATE_VARIABLE_DumpInfo_286_286;
    MR_Word _UnusedArgsInfos_16;
    MR_Word _SimplifySpecsPreImpPar_17;
    MR_Word _SimplifySpecsPreProf_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 70, &Verbose_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 80, &Stats_15);
    top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(STATE_VARIABLE_HLDS_0_19, &STATE_VARIABLE_HLDS_29_29);
    top_level__mercury_compile_middle_passes__tabling_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_29_29, &STATE_VARIABLE_HLDS_31_31, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_32_32);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_31_31, (MR_Integer) 105, (MR_String) "tabling", STATE_VARIABLE_DumpInfo_0_21, &STATE_VARIABLE_DumpInfo_36_36);
    top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_31_31, &STATE_VARIABLE_HLDS_38_38);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_38_38, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_36_36, &STATE_VARIABLE_DumpInfo_42_42);
    top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_38_38, &STATE_VARIABLE_HLDS_44_44, STATE_VARIABLE_Specs_32_32, &STATE_VARIABLE_Specs_45_45);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_44_44, (MR_Integer) 111, (MR_String) "daio", STATE_VARIABLE_DumpInfo_42_42, &STATE_VARIABLE_DumpInfo_49_49);
    top_level__mercury_compile_middle_passes__expand_stm_goals_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_44_44, &STATE_VARIABLE_HLDS_51_51);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_51_51, (MR_Integer) 113, (MR_String) "stm", STATE_VARIABLE_DumpInfo_49_49, &STATE_VARIABLE_DumpInfo_55_55);
    top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_51_51, &STATE_VARIABLE_HLDS_57_57);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_57_57, (MR_Integer) 115, (MR_String) "equiv_types", STATE_VARIABLE_DumpInfo_55_55, &STATE_VARIABLE_DumpInfo_61_61);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_57_57, &STATE_VARIABLE_HLDS_63_63);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_63_63, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_61_61, &STATE_VARIABLE_DumpInfo_67_67);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_63_63, &STATE_VARIABLE_HLDS_69_69);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_69_69, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_67_67, &STATE_VARIABLE_DumpInfo_73_73);
    top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_69_69, &STATE_VARIABLE_HLDS_75_75, STATE_VARIABLE_Specs_45_45, &STATE_VARIABLE_Specs_76_76);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_75_75, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_73_73, &STATE_VARIABLE_DumpInfo_80_80);
    top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_75_75, &STATE_VARIABLE_HLDS_82_82, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_83_83);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_82_82, (MR_Integer) 121, (MR_String) "termination2", STATE_VARIABLE_DumpInfo_80_80, &STATE_VARIABLE_DumpInfo_87_87);
    top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_82_82, &STATE_VARIABLE_HLDS_89_89);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_89_89, (MR_Integer) 125, (MR_String) "type_ctor_infos", STATE_VARIABLE_DumpInfo_87_87, &STATE_VARIABLE_DumpInfo_93_93);
    top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_89_89, &STATE_VARIABLE_HLDS_95_95, STATE_VARIABLE_Specs_83_83, &STATE_VARIABLE_Specs_96_96);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_95_95, (MR_Integer) 130, (MR_String) "warn_dead_procs", STATE_VARIABLE_DumpInfo_93_93, &STATE_VARIABLE_DumpInfo_100_100);
    top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(STATE_VARIABLE_HLDS_95_95, Verbose_14, Stats_15, STATE_VARIABLE_DumpInfo_100_100, &STATE_VARIABLE_DumpInfo_102_102);
    top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_95_95, &STATE_VARIABLE_HLDS_104_104);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_104_104, (MR_Integer) 133, (MR_String) "untupling", STATE_VARIABLE_DumpInfo_102_102, &STATE_VARIABLE_DumpInfo_108_108);
    top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_104_104, &STATE_VARIABLE_HLDS_110_110);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_110_110, (MR_Integer) 134, (MR_String) "tupling", STATE_VARIABLE_DumpInfo_108_108, &STATE_VARIABLE_DumpInfo_114_114);
    top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_110_110, &STATE_VARIABLE_HLDS_116_116);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_116_116, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_114_114, &STATE_VARIABLE_DumpInfo_120_120);
    top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_116_116, &STATE_VARIABLE_HLDS_122_122);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_122_122, (MR_Integer) 137, (MR_String) "ssdb", STATE_VARIABLE_DumpInfo_120_120, &STATE_VARIABLE_DumpInfo_126_126);
    top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_122_122, &STATE_VARIABLE_HLDS_128_128, STATE_VARIABLE_Specs_96_96, &STATE_VARIABLE_Specs_129_129);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_128_128, (MR_Integer) 140, (MR_String) "accum", STATE_VARIABLE_DumpInfo_126_126, &STATE_VARIABLE_DumpInfo_133_133);
    top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_128_128, &STATE_VARIABLE_HLDS_135_135);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_135_135, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_133_133, &STATE_VARIABLE_DumpInfo_139_139);
    top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_135_135, &STATE_VARIABLE_HLDS_141_141, STATE_VARIABLE_DumpInfo_139_139, &STATE_VARIABLE_DumpInfo_142_142);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_141_141, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_142_142, &STATE_VARIABLE_DumpInfo_146_146);
    top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_141_141, &STATE_VARIABLE_HLDS_148_148);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_148_148, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_146_146, &STATE_VARIABLE_DumpInfo_152_152);
    top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_148_148, &STATE_VARIABLE_HLDS_154_154);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_154_154, (MR_Integer) 160, (MR_String) "delay_construct", STATE_VARIABLE_DumpInfo_152_152, &STATE_VARIABLE_DumpInfo_158_158);
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_154_154, &STATE_VARIABLE_HLDS_160_160);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_160_160, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_158_158, &STATE_VARIABLE_DumpInfo_164_164);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_160_160, &STATE_VARIABLE_HLDS_166_166);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_166_166, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_164_164, &STATE_VARIABLE_DumpInfo_170_170);
    top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_14, Stats_15, &_UnusedArgsInfos_16, STATE_VARIABLE_HLDS_166_166, &STATE_VARIABLE_HLDS_172_172, STATE_VARIABLE_Specs_129_129, &STATE_VARIABLE_Specs_173_173);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_172_172, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_170_170, &STATE_VARIABLE_DumpInfo_177_177);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_172_172, &STATE_VARIABLE_HLDS_179_179);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_179_179, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_177_177, &STATE_VARIABLE_DumpInfo_183_183);
    top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_179_179, &STATE_VARIABLE_HLDS_185_185);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_185_185, (MR_Integer) 170, (MR_String) "unneeded_code", STATE_VARIABLE_DumpInfo_183_183, &STATE_VARIABLE_DumpInfo_189_189);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, Verbose_14, Stats_15, STATE_VARIABLE_HLDS_185_185, &STATE_VARIABLE_HLDS_193_193, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreImpPar_17);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_193_193, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", STATE_VARIABLE_DumpInfo_189_189, &STATE_VARIABLE_DumpInfo_198_198);
    top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_193_193, &STATE_VARIABLE_HLDS_200_200);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_200_200, (MR_Integer) 173, (MR_String) "implicit_parallelism", STATE_VARIABLE_DumpInfo_198_198, &STATE_VARIABLE_DumpInfo_204_204);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_200_200, &STATE_VARIABLE_HLDS_206_206);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_206_206, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_204_204, &STATE_VARIABLE_DumpInfo_210_210);
    top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_206_206, &STATE_VARIABLE_HLDS_212_212);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_212_212, (MR_Integer) 200, (MR_String) "granularity", STATE_VARIABLE_DumpInfo_210_210, &STATE_VARIABLE_DumpInfo_216_216);
    top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_212_212, &STATE_VARIABLE_HLDS_218_218);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_218_218, (MR_Integer) 201, (MR_String) "distance_granularity", STATE_VARIABLE_DumpInfo_216_216, &STATE_VARIABLE_DumpInfo_222_222);
    top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_218_218, &STATE_VARIABLE_HLDS_224_224);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_224_224, (MR_Integer) 205, (MR_String) "dependent_par_conj", STATE_VARIABLE_DumpInfo_222_222, &STATE_VARIABLE_DumpInfo_228_228);
    top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_224_224, &STATE_VARIABLE_HLDS_230_230);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_230_230, (MR_Integer) 206, (MR_String) "par_loop_control", STATE_VARIABLE_DumpInfo_228_228, &STATE_VARIABLE_DumpInfo_234_234);
    top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_230_230, &STATE_VARIABLE_HLDS_236_236);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_236_236, (MR_Integer) 210, (MR_String) "lco", STATE_VARIABLE_DumpInfo_234_234, &STATE_VARIABLE_DumpInfo_240_240);
    top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_236_236, &STATE_VARIABLE_HLDS_242_242, STATE_VARIABLE_Specs_173_173, STATE_VARIABLE_Specs_24);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_242_242, (MR_Integer) 213, (MR_String) "float_reg_wrapper", STATE_VARIABLE_DumpInfo_240_240, &STATE_VARIABLE_DumpInfo_247_247);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, Verbose_14, Stats_15, STATE_VARIABLE_HLDS_242_242, &STATE_VARIABLE_HLDS_251_251, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreProf_18);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_251_251, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", STATE_VARIABLE_DumpInfo_247_247, &STATE_VARIABLE_DumpInfo_256_256);
    top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_251_251, &STATE_VARIABLE_HLDS_258_258);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_258_258, (MR_Integer) 220, (MR_String) "term_size_prof", STATE_VARIABLE_DumpInfo_256_256, &STATE_VARIABLE_DumpInfo_262_262);
    top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_258_258, &STATE_VARIABLE_HLDS_264_264);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_264_264, (MR_Integer) 225, (MR_String) "deep_profiling", STATE_VARIABLE_DumpInfo_262_262, &STATE_VARIABLE_DumpInfo_268_268);
    top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_264_264, &STATE_VARIABLE_HLDS_270_270);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_270_270, (MR_Integer) 230, (MR_String) "complexity", STATE_VARIABLE_DumpInfo_268_268, &STATE_VARIABLE_DumpInfo_274_274);
    top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_270_270, &STATE_VARIABLE_HLDS_276_276);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_276_276, (MR_Integer) 240, (MR_String) "region_analysis", STATE_VARIABLE_DumpInfo_274_274, &STATE_VARIABLE_DumpInfo_280_280);
    top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_276_276, STATE_VARIABLE_HLDS_20);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_20, (MR_Integer) 250, (MR_String) "dead_procs", STATE_VARIABLE_DumpInfo_280_280, &STATE_VARIABLE_DumpInfo_286_286);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_20, (MR_Integer) 299, (MR_String) "middle_pass", STATE_VARIABLE_DumpInfo_286_286, STATE_VARIABLE_DumpInfo_22);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word OptDeadProcs_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    OptDeadProcs_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 1))) >> 28)) & (MR_Integer) 1);
    switch (OptDeadProcs_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Eliminating dead procedures...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0((MR_Integer) 0, STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word Analysis_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    Analysis_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 1))) >> 21)) & (MR_Integer) 1);
    switch (Analysis_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing regions ...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__rbmm__do_region_analysis_4_p_0(STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__5_5;
    MR_Word conv0_HeadVar__7_7;

    transform_hlds__complexity__complexity_process_proc_msg_7_p_0(((MR_Integer) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__5_5, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__7_7);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__5_5));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__7_7));
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word MaybeNumProcMap_11;

    hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(STATE_VARIABLE_HLDS_0_14, &MaybeNumProcMap_11);
    if ((MaybeNumProcMap_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
    else
    {
      MR_Integer NumProcs_12;
      MR_Word ProcMap_13;
      MR_Word Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeNumProcMap_11, (MR_Integer) 0))));
      MR_Word Var_22;
      MR_Word Var_24;

      NumProcs_12 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 0))));
      ProcMap_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Applying complexity experiment transformation...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_9[0]));
        MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 2));
        MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (NumProcs_12));
        MR_hl_field(MR_mktag(0), Var_24, 4) = ((MR_Box) (ProcMap_13));
      }
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_22, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_22, 1) = ((MR_Box) (Var_24));
      }
      hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_22, STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ProfileDeep_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 237, &ProfileDeep_12);
    switch (ProfileDeep_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Applying deep profiling transformation...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__6_6);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_Word Globals_11;
    MR_Word AsWords_12;
    MR_Word AsCells_13;
    MR_Word MaybeTransform_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 254, &AsWords_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 255, &AsCells_13);
    switch (AsWords_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (AsCells_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTransform_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            MaybeTransform_14 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[3]));
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (AsCells_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTransform_14 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[4]));
            break;
          case (MR_Integer) 1:
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", (MR_String) "as_words and as_cells");
              return;
            }
            break;
        }
        break;
    }
    if ((MaybeTransform_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
    else
    {
      MR_Word Transform_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeTransform_14, (MR_Integer) 0))));
      MR_Word Var_29;
      MR_Word Var_31;

      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Applying term size profiling transformation...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[1]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Transform_15));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_31));
      }
      hlds__passes_aux__process_valid_nonimported_procs_3_p_0(Var_29, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Globals_14;
    MR_Word UseFloatRegs_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 301, &UseFloatRegs_15);
    switch (UseFloatRegs_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word RegSpecs_16;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Inserting float register wrappers...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          transform_hlds__float_regs__insert_reg_wrappers_3_p_0(STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18, &RegSpecs_16);
          *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), RegSpecs_16, STATE_VARIABLE_Specs_0_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word LoopControl_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 711, &LoopControl_12);
    switch (LoopControl_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Applying parallel loop control transformation...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word HasParallelConj_11;

    hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_HLDS_0_14, &HasParallelConj_11);
    switch (HasParallelConj_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 0:
        {
          MR_Word Globals_12;
          MR_Word SupportsParConj_13;

          hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_12);
          libs__globals__current_grade_supports_par_conj_2_p_0(Globals_12, &SupportsParConj_13);
          switch (SupportsParConj_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[6])), STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_HLDS_21_21;

                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Dependent parallel conjunction transformation...\n");
                libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
                transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(STATE_VARIABLE_HLDS_0_14, &STATE_VARIABLE_HLDS_21_21);
                transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0((MR_Integer) 1, STATE_VARIABLE_HLDS_21_21, STATE_VARIABLE_HLDS_15);
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
                libs__file_util__maybe_report_stats_3_p_0(Stats_8);
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word Parallel_12;
    MR_Word HighLevelCode_13;
    MR_Integer Distance_14;
    MR_Word HasParallelConj_15;
    MR_Integer Var_24;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 258, &Parallel_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 302, &HighLevelCode_13);
    libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 708, &Distance_14);
    hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_HLDS_0_17, &HasParallelConj_15);
    succeeded = (Parallel_12 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (HasParallelConj_15 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (HighLevelCode_13 == (MR_Integer) 0);
        if (succeeded)
        {
          Var_24 = (MR_Integer) 0;
          succeeded = (Distance_14 > Var_24);
        }
      }
    }
    if (succeeded)
    {
      MR_Word Target_16;

      libs__globals__get_target_2_p_0(Globals_11, &Target_16);
      switch (Target_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Distance granularity transformation...\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
            transform_hlds__distance_granularity__control_distance_granularity_3_p_0(STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18, Distance_14);
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
            libs__file_util__maybe_report_stats_3_p_0(Stats_8);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          break;
      }
    }
    else
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word Parallel_12;
    MR_Word HighLevelCode_13;
    MR_Word Control_14;
    MR_Word HasParallelConj_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 258, &Parallel_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 302, &HighLevelCode_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 707, &Control_14);
    hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(STATE_VARIABLE_HLDS_0_17, &HasParallelConj_15);
    succeeded = (Parallel_12 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (HasParallelConj_15 == (MR_Integer) 0);
      if (succeeded)
      {
        succeeded = (HighLevelCode_13 == (MR_Integer) 0);
        if (succeeded)
          succeeded = (Control_14 == (MR_Integer) 1);
      }
    }
    if (succeeded)
    {
      MR_Word Target_16;

      libs__globals__get_target_2_p_0(Globals_11, &Target_16);
      switch (Target_16) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Granularity control transformation...\n");
            libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
            transform_hlds__granularity__control_granularity_2_p_0(STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
            libs__file_util__maybe_report_stats_3_p_0(Stats_8);
          }
          break;
        case (MR_Integer) 1:
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          break;
        case (MR_Integer) 2:
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          break;
      }
    }
    else
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word TablingAnalysis_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 503, &TablingAnalysis_12);
    switch (TablingAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing minimal model tabling...\n");
          transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word LCMC_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    LCMC_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 1))) >> 29)) & (MR_Integer) 1);
    switch (LCMC_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Looking for LCO modulo constructor application ...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__lco__lco_modulo_constructors_2_p_0(STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box * wrapper_arg_5)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;
    MR_Word conv0_HeadVar__5_5;

    transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3, ((MR_Word) (wrapper_arg_4)), &conv0_HeadVar__5_5);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
    *wrapper_arg_5 = ((MR_Box) (conv0_HeadVar__5_5));
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word UnneededCode_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    UnneededCode_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 3)) & (MR_Integer) 1);
    switch (UnneededCode_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Removing unneeded code from procedure bodies...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[3])), STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word AnalyseTrail_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 500, &AnalyseTrail_12);
    switch (AnalyseTrail_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing trail usage...\n");
          transform_hlds__trailing_analysis__analyse_trail_usage_in_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Trail usage analysis done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ReuseAnalysis_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 506, &ReuseAnalysis_12);
    switch (ReuseAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Structure reuse analysis...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          transform_hlds__ctgc__selector__reset_tables_2_p_0();
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word Sharing_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 504, &Sharing_12);
    switch (Sharing_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Structure sharing analysis...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__ctgc__structure_sharing__analysis__perform_structure_sharing_analysis_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          transform_hlds__ctgc__selector__reset_tables_2_p_0();
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__4_4;

    transform_hlds__delay_construct__delay_construct_proc_4_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
    *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word DelayConstruct_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    DelayConstruct_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 8)) & (MR_Integer) 1);
    switch (DelayConstruct_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Delaying construction unifications ...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[5])), STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word Deforest_13;
    MR_Word PropLocalConstraints_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    PropLocalConstraints_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 22)) & (MR_Integer) 1);
    Deforest_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 1))) >> 27)) & (MR_Integer) 1);
    switch (Deforest_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (PropLocalConstraints_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Deforestation...\n");
              libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
              transform_hlds__deforest__deforestation_2_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
              libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_3_p_0(Stats_8);
            }
            break;
          case (MR_Integer) 0:
            {
              libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Deforestation and constraint propagation...\n");
              libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
              transform_hlds__deforest__deforestation_2_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
              libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_3_p_0(Stats_8);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (PropLocalConstraints_14) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
            break;
          case (MR_Integer) 0:
            {
              libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Constraint propagation...\n");
              libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
              transform_hlds__deforest__deforestation_2_p_0(STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
              libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
              libs__file_util__maybe_report_stats_3_p_0(Stats_8);
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__4_4;
    MR_Word conv0_HeadVar__6_6;

    transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_HeadVar__4_4, ((MR_Word) (wrapper_arg_5)), &conv0_HeadVar__6_6);
    *wrapper_arg_4 = ((MR_Box) (conv1_HeadVar__4_4));
    *wrapper_arg_6 = ((MR_Box) (conv0_HeadVar__6_6));
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_19,
  MR_Word * STATE_VARIABLE_DumpInfo_20)
{
  {
    MR_Word Globals_14;
    MR_Word OptTuple_15;
    MR_Word LoopInv_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_14);
    libs__globals__get_opt_tuple_2_p_0(Globals_14, &OptTuple_15);
    LoopInv_16 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_15, (MR_Integer) 0))) >> 16)) & (MR_Integer) 1);
    switch (LoopInv_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          *STATE_VARIABLE_DumpInfo_20 = STATE_VARIABLE_DumpInfo_0_19;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word STATE_VARIABLE_HLDS_23_23;

          hlds__mark_static_terms__maybe_mark_static_terms_6_p_0(Verbose_9, Stats_10, STATE_VARIABLE_HLDS_0_17, &STATE_VARIABLE_HLDS_23_23);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_23_23, (MR_Integer) 148, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_0_19, STATE_VARIABLE_DumpInfo_20);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Hoisting loop invariants...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          hlds__passes_aux__process_valid_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[2])), STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word Allow_13;
    MR_Word Simple_14;
    MR_Word SingleUse_15;
    MR_Integer Threshold_16;
    MR_Word LinearRec_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    Allow_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 31)) & (MR_Integer) 1);
    Simple_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 30)) & (MR_Integer) 1);
    SingleUse_15 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 28)) & (MR_Integer) 1);
    LinearRec_17 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 27)) & (MR_Integer) 1);
    Threshold_16 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 4))));
    succeeded = (Allow_13 == (MR_Integer) 0);
    if (succeeded)
    {
      succeeded = (Simple_14 == (MR_Integer) 0);
      if (!(succeeded))
      {
        succeeded = (SingleUse_15 == (MR_Integer) 0);
        if (!(succeeded))
        {
          succeeded = (Threshold_16 > (MR_Integer) 0);
          if (!(succeeded))
            succeeded = (LinearRec_17 == (MR_Integer) 0);
        }
      }
    }
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Inlining...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      transform_hlds__inlining__inline_in_module_2_p_0(STATE_VARIABLE_HLDS_0_18, STATE_VARIABLE_HLDS_19);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0_1(
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
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_23,
  MR_Word * STATE_VARIABLE_HLDS_24,
  MR_Word STATE_VARIABLE_Specs_0_25,
  MR_Word * STATE_VARIABLE_Specs_26)
{
  {
    MR_bool succeeded;
    MR_Word Globals_14;
    MR_Word OptTuple_15;
    MR_Word IntroduceAccumulators_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_23, &Globals_14);
    libs__globals__get_opt_tuple_2_p_0(Globals_14, &OptTuple_15);
    IntroduceAccumulators_16 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_15, (MR_Integer) 0))) & (MR_Integer) 1);
    switch (IntroduceAccumulators_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          *STATE_VARIABLE_HLDS_24 = STATE_VARIABLE_HLDS_0_23;
          *STATE_VARIABLE_Specs_26 = STATE_VARIABLE_Specs_0_25;
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Word Cookie0_17;
          MR_Word Task0_18;
          MR_Word Task_19;
          MR_Word AccSpecs_22;
          MR_Word Cookie_21;
          MR_Box conv3_AccSpecs_22;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Attempting to introduce accumulators...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          mercury__univ__type_to_univ_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 0U)), &Cookie0_17);
          {
            Task0_18 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Task0_18, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Task0_18, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[0]));
            MR_hl_field(MR_mktag(3), Task0_18, 2) = ((MR_Box) (Cookie0_17));
          }
          hlds__passes_aux__process_valid_nonimported_procs_update_4_p_0(Task0_18, &Task_19, STATE_VARIABLE_HLDS_0_23, STATE_VARIABLE_HLDS_24);
          succeeded = ((((MR_tag((MR_Word) Task_19)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Task_19, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Cookie_21 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Task_19, (MR_Integer) 2))));
            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), Cookie_21, &conv3_AccSpecs_22);
            if (succeeded)
            {
              AccSpecs_22 = ((MR_Word) (conv3_AccSpecs_22));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Specs_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), AccSpecs_22, STATE_VARIABLE_Specs_0_25);
          else
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/8", (MR_String) "bad task");
              return;
            }
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_Word Globals_11;
    MR_Word ImplicitParallelism_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 709, &ImplicitParallelism_12);
    switch (ImplicitParallelism_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word MaybeSourceFileMap_13;
          MR_Word SourceFileMap_14;
          MR_Word Specs_15;

          libs__globals__io_get_maybe_source_file_map_3_p_0(&MaybeSourceFileMap_13);
          if ((MaybeSourceFileMap_13 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_implicit_parallelism\'/6", (MR_String) "could not retrieve the source file map");
              return;
            }
          else
            SourceFileMap_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeSourceFileMap_13, (MR_Integer) 0))));
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Applying implicit parallelism...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(SourceFileMap_14, &Specs_15, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          parse_tree__error_util__write_error_specs_4_p_0(Globals_11, Specs_15);
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word ForceDisableSSDB_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 167, &ForceDisableSSDB_12);
    switch (ForceDisableSSDB_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word SSTraceLevel_13;

          libs__globals__get_ssdb_trace_level_2_p_0(Globals_11, &SSTraceLevel_13);
          switch (SSTraceLevel_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
            case (MR_Integer) 1:
              {
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Apply source to source debugging transformation ...\n");
                transform_hlds__ssdebug__ssdebug_transform_module_5_p_0(SSTraceLevel_13, STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
                libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
                libs__file_util__maybe_report_stats_3_p_0(Stats_8);
              }
              break;
            case (MR_Integer) 0:
              *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
              break;
          }
        }
        break;
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word HigherOrder_13;
    MR_Word UserTypeSpec_14;
    MR_Word TypeSpecInfo_15;
    MR_Word TypeSpecPreds_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    HigherOrder_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 4)) & (MR_Integer) 1);
    UserTypeSpec_14 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 0))) >> 1)) & (MR_Integer) 1);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_HLDS_0_20, &TypeSpecInfo_15);
    TypeSpecPreds_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_15, (MR_Integer) 0))));
    succeeded = (HigherOrder_13 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (UserTypeSpec_14 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), TypeSpecPreds_16);
    }
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      transform_hlds__higher_order__specialize_higher_order_4_p_0(STATE_VARIABLE_HLDS_0_20, STATE_VARIABLE_HLDS_21);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word Tuple_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    Tuple_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 1))) >> 25)) & (MR_Integer) 1);
    switch (Tuple_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 0:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Tupling...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__tupling__tuple_arguments_4_p_0(STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
  MR_Box closure_arg)
{
  {
    MR_bool succeeded;
    MR_Box closure = closure_arg;

    succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__812__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word OptTuple_12;
    MR_Word Untuple_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_11);
    libs__globals__get_opt_tuple_2_p_0(Globals_11, &OptTuple_12);
    Untuple_13 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_12, (MR_Integer) 1))) >> 26)) & (MR_Integer) 1);
    switch (Untuple_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
        break;
      case (MR_Integer) 0:
        {
          MR_Word SimplifySpecs_14;
          MR_Word STATE_VARIABLE_HLDS_22_22;
          MR_Word Var_31;
          MR_Word Var_34;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Untupling...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__untupling__untuple_arguments_4_p_0(STATE_VARIABLE_HLDS_0_15, &STATE_VARIABLE_HLDS_22_22);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 1, Verbose_7, Stats_8, STATE_VARIABLE_HLDS_22_22, STATE_VARIABLE_HLDS_16, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_14);
          Var_34 = parse_tree__error_util__contains_errors_2_f_0(Globals_11, SimplifySpecs_14);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_3[0]));
            MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1));
            MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Var_34));
            MR_hl_field(MR_mktag(0), Var_31, 4) = ((MR_Box) ((MR_Integer) 0));
          }
          mercury__require__expect_3_p_0(Var_31, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_untuple_arguments\'/6", (MR_String) "simplify has errors");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(
  MR_Word HLDS0_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_DumpInfo_0_20,
  MR_Word * STATE_VARIABLE_DumpInfo_21)
{
  {
    MR_Word Globals_13;
    MR_Word GenBytecode_14;

    hlds__hlds_module__module_info_get_globals_2_p_0(HLDS0_8, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 168, &GenBytecode_14);
    switch (GenBytecode_14) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_DumpInfo_21 = STATE_VARIABLE_DumpInfo_0_20;
        break;
      case (MR_Integer) 1:
        {
          MR_Word HLDS1_15;
          MR_Word Bytecode_16;
          MR_Word ModuleName_17;
          MR_String BytedebugFile_18;
          MR_String BytecodeFile_19;

          top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(Verbose_9, Stats_10, HLDS0_8, &HLDS1_15);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(HLDS1_15, (MR_Integer) 505, (MR_String) "bytecode_args_to_regs", STATE_VARIABLE_DumpInfo_0_20, STATE_VARIABLE_DumpInfo_21);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Generating bytecodes...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          bytecode_backend__bytecode_gen__gen_module_4_p_0(HLDS1_15, &Bytecode_16);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
          hlds__hlds_module__module_info_get_name_2_p_0(HLDS1_15, &ModuleName_17);
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_13, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_bytecodes\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[1])), ModuleName_17, &BytedebugFile_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Writing bytecodes to \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, BytedebugFile_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "\'...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          bytecode_backend__bytecode__debug_bytecode_file_4_p_0(BytedebugFile_18, Bytecode_16);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
          parse_tree__file_names__module_name_to_file_name_8_p_0(Globals_13, (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_bytecodes\'/7", (MR_Integer) 0, (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_2[2])), ModuleName_17, &BytecodeFile_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Writing bytecodes to \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, BytecodeFile_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "\'...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          bytecode_backend__bytecode__output_bytecode_file_4_p_0(BytecodeFile_19, Bytecode_16);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word * STATE_VARIABLE_HLDS_19,
  MR_Word STATE_VARIABLE_Specs_0_20,
  MR_Word * STATE_VARIABLE_Specs_21)
{
  {
    MR_bool succeeded;
    MR_Word Globals_14;
    MR_Word WarnDeadProcs_15;
    MR_Word WarnDeadPreds_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 42, &WarnDeadProcs_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 43, &WarnDeadPreds_16);
    succeeded = (WarnDeadProcs_15 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnDeadPreds_16 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word DeadSpecs_17;

      switch (WarnDeadProcs_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Warning about dead predicates...\n");
          break;
        case (MR_Integer) 1:
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Warning about dead procedures...\n");
          break;
      }
      libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
      transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0(STATE_VARIABLE_HLDS_0_18, &DeadSpecs_17);
      *STATE_VARIABLE_Specs_21 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DeadSpecs_17, STATE_VARIABLE_Specs_0_20);
      libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_10);
    }
    else
      *STATE_VARIABLE_Specs_21 = STATE_VARIABLE_Specs_0_20;
    *STATE_VARIABLE_HLDS_19 = STATE_VARIABLE_HLDS_0_18;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word TypeCtorInfo_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 318, &TypeCtorInfo_12);
    switch (TypeCtorInfo_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Generating type_ctor_info structures...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          backend_libs__type_ctor_info__generate_hlds_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Globals_14;
    MR_Word Termination2_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 519, &Termination2_15);
    switch (Termination2_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TermSpecs_16;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Detecting termination 2...\n");
          transform_hlds__term_constr_main__term2_analyse_module_3_p_0(STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18, &TermSpecs_16);
          *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TermSpecs_16, STATE_VARIABLE_Specs_0_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Termination 2 checking done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18,
  MR_Word STATE_VARIABLE_Specs_0_19,
  MR_Word * STATE_VARIABLE_Specs_20)
{
  {
    MR_Word Globals_14;
    MR_Word Termination_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 512, &Termination_15);
    switch (Termination_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
          *STATE_VARIABLE_Specs_20 = STATE_VARIABLE_Specs_0_19;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TermSpecs_16;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Detecting termination...\n");
          transform_hlds__termination__analyse_termination_in_module_3_p_0(STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18, &TermSpecs_16);
          *STATE_VARIABLE_Specs_20 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), TermSpecs_16, STATE_VARIABLE_Specs_0_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Termination checking done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_10);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ExceptionAnalysis_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 527, &ExceptionAnalysis_12);
    switch (ExceptionAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing exceptions...\n");
          transform_hlds__exception_analysis__analyse_exceptions_in_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ClosureAnalysis_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 528, &ClosureAnalysis_12);
    switch (ClosureAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing closures...\n");
          transform_hlds__closure_analysis__closure_analyse_module_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Fully expanding equivalence types...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_stm_goals_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Transforming stm expressions...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    transform_hlds__stm_expand__stm_process_module_2_p_0(STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_direct_arg_in_out_transform_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_Specs_0_18,
  MR_Word * STATE_VARIABLE_Specs_19)
{
  {
    MR_bool succeeded;
    MR_Word DirectArgProcMap_14;

    hlds__hlds_module__module_info_get_direct_arg_proc_map_2_p_0(STATE_VARIABLE_HLDS_0_16, &DirectArgProcMap_14);
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), (MR_Word) (&hlds__hlds_module__hlds__hlds_module__type_ctor_info_direct_arg_proc_0), DirectArgProcMap_14);
    if (succeeded)
    {
      *STATE_VARIABLE_Specs_19 = STATE_VARIABLE_Specs_0_18;
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
    }
    else
    {
      MR_Word DirectArgSpecs_15;

      libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Transforming direct arg in out procedures...\n");
      transform_hlds__direct_arg_in_out__do_direct_arg_in_out_transform_in_module_4_p_0(DirectArgProcMap_14, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17, &DirectArgSpecs_15);
      *STATE_VARIABLE_Specs_19 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), DirectArgSpecs_15, STATE_VARIABLE_Specs_0_18);
      libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_10);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Transforming lambda expressions...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    transform_hlds__lambda__expand_lambdas_in_module_2_p_0(STATE_VARIABLE_HLDS_0_11, STATE_VARIABLE_HLDS_12);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_8_p_0(
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15,
  MR_Word STATE_VARIABLE_Specs_0_16,
  MR_Word * STATE_VARIABLE_Specs_17)
{
  {
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Transforming tabled predicates...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
    transform_hlds__table_gen__table_gen_process_module_4_p_0(STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15, STATE_VARIABLE_Specs_0_16, STATE_VARIABLE_Specs_17);
    libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_10);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_bool succeeded;
    MR_Word Globals_7;
    MR_String FileName_8;
    MR_Word RecordTermSizesAsWords_9;
    MR_Word RecordTermSizesAsCells_10;
    MR_Word RecordTermSizes_11;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_7);
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 256, &FileName_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 254, &RecordTermSizesAsWords_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 255, &RecordTermSizesAsCells_10);
    mercury__bool__or_3_p_0(RecordTermSizesAsWords_9, RecordTermSizesAsCells_10, &RecordTermSizes_11);
    succeeded = (strcmp(FileName_8, (MR_String) "") == 0);
    if (succeeded)
      *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
    else
    {
      MR_Word MaybeNumProcMap_12;

      switch (RecordTermSizes_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String Var_23;

            Var_23 = mercury__string__f_43_43_2_f_0((MR_String) "the --experimental-complexity option ", (MR_String) "requires a term size profiling grade");
            libs__file_util__report_error_3_p_0(Var_23);
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
      transform_hlds__complexity__read_spec_file_4_p_0(FileName_8, &MaybeNumProcMap_12);
      if (((MR_tag((MR_Word) MaybeNumProcMap_12)) == (MR_Integer) 1))
      {
        MR_String Msg_15 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeNumProcMap_12, (MR_Integer) 0))));

        libs__file_util__report_error_3_p_0(Msg_15);
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
      }
      else
      {
        MR_Word Var_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeNumProcMap_12, (MR_Integer) 0))));
        MR_Word Var_30;

        {
          Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_29));
        }
        hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(Var_30, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
      }
    }
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(
  MR_Word Verbose_10,
  MR_Word Stats_11,
  MR_Word * UnusedArgsInfos_12,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word Globals_16;
    MR_Word OptTuple_17;
    MR_Word OptUnusedArgs_18;
    MR_Word OptUnusedArgsIntermod_19;
    MR_Word WarnUnusedArgs_20;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_16);
    libs__globals__get_opt_tuple_2_p_0(Globals_16, &OptTuple_17);
    OptUnusedArgs_18 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_17, (MR_Integer) 0))) >> 6)) & (MR_Integer) 1);
    OptUnusedArgsIntermod_19 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), OptTuple_17, (MR_Integer) 0))) >> 5)) & (MR_Integer) 1);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 14, &WarnUnusedArgs_20);
    succeeded = (OptUnusedArgs_18 == (MR_Integer) 0);
    if (!(succeeded))
    {
      succeeded = (OptUnusedArgsIntermod_19 == (MR_Integer) 0);
      if (!(succeeded))
        succeeded = (WarnUnusedArgs_20 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word UnusedSpecs_21;

      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Finding unused arguments ...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_10);
      transform_hlds__unused_args__unused_args_process_module_4_p_0(STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23, &UnusedSpecs_21, UnusedArgsInfos_12);
      *STATE_VARIABLE_Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnusedSpecs_21, STATE_VARIABLE_Specs_0_24);
      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_11);
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfos_12);
      *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
      *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
    }
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
