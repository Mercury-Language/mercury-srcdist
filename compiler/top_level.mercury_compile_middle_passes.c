/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version 2018-11-12
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
#include "backend_libs.mih"
#include "bytecode_backend.mih"
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
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "bytecode_backend.bytecode.mih"
#include "bytecode_backend.bytecode_gen.mih"
#include "check_hlds.delay_info.mih"
#include "check_hlds.mode_constraint_robdd.mih"
#include "check_hlds.mode_errors.mih"
#include "check_hlds.mode_info.mih"
#include "check_hlds.proc_requests.mih"
#include "check_hlds.type_util.mih"
#include "hlds.code_model.mih"
#include "hlds.const_struct.mih"
#include "hlds.goal_form.mih"
#include "hlds.goal_mode.mih"
#include "hlds.hlds_args.mih"
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
#include "ll_backend.code_info.mih"
#include "ll_backend.code_loc_dep.mih"
#include "ll_backend.continuation_info.mih"
#include "ll_backend.deep_profiling.mih"
#include "ll_backend.global_data.mih"
#include "ll_backend.layout.mih"
#include "ll_backend.llds.mih"
#include "ll_backend.trace_gen.mih"
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
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "multi_map.mih"
#include "ops.mih"
#include "pair.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
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
#include "top_level.mercury_compile_mlds_back_end.mih"
#include "transform_hlds.accumulator.mih"
#include "transform_hlds.closure_analysis.mih"
#include "transform_hlds.complexity.mih"
#include "transform_hlds.ctgc.mih"
#include "transform_hlds.dead_proc_elim.mih"
#include "transform_hlds.deforest.mih"
#include "transform_hlds.delay_construct.mih"
#include "transform_hlds.dep_par_conj.mih"
#include "transform_hlds.distance_granularity.mih"
#include "transform_hlds.equiv_type_hlds.mih"
#include "transform_hlds.exception_analysis.mih"
#include "transform_hlds.float_regs.mih"
#include "transform_hlds.granularity.mih"
#include "transform_hlds.higher_order.mih"
#include "transform_hlds.implicit_parallelism.mih"
#include "transform_hlds.inlining.mih"
#include "transform_hlds.intermod.mih"
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
#include "transform_hlds.term_constr_data.mih"
#include "transform_hlds.term_constr_errors.mih"
#include "transform_hlds.term_constr_main.mih"
#include "transform_hlds.term_constr_main_types.mih"
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.termination.mih"
#include "transform_hlds.trailing_analysis.mih"
#include "transform_hlds.tupling.mih"
#include "transform_hlds.unneeded_code.mih"
#include "transform_hlds.untupling.mih"
#include "transform_hlds.unused_args.mih"
#include "hlds.make_hlds.qual_info.mih"
#include "mdbcomp.feedback.automatic_parallelism.mih"
#include "transform_hlds.ctgc.livedata.mih"
#include "transform_hlds.ctgc.structure_reuse.mih"
#include "transform_hlds.ctgc.structure_sharing.mih"
#include "transform_hlds.implicit_parallelism.introduce_parallelism.mih"
#include "transform_hlds.ctgc.structure_reuse.analysis.mih"
#include "transform_hlds.ctgc.structure_reuse.domain.mih"
#include "transform_hlds.ctgc.structure_sharing.analysis.mih"
#include "transform_hlds.ctgc.structure_sharing.domain.mih"




static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__739__1_2_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_35);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

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
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

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
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_DumpInfo_0_18,
  MR_Word * STATE_VARIABLE_DumpInfo_19);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
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
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

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
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(
  MR_Word HLDS0_8,
  MR_Word Verbose_9,
  MR_Word Stats_10,
  MR_Word STATE_VARIABLE_DumpInfo_0_20,
  MR_Word * STATE_VARIABLE_DumpInfo_21);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);

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
top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_11,
  MR_Word * STATE_VARIABLE_HLDS_12);

static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16);

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17);


static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_1[4][2];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[1][5];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][11];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[5][3];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[2][9];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][7];

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[4][1];

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
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[1]))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[3]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][11] = {
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_4[5][3] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_3[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0])),
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
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[2][9] = {
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_6[1][7] = {
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

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_7[4][1] = {
  /* row 0 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[2]))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[4]))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0))
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



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.rtti_access.mh"



static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__739__1_2_p_0(
  MR_Word HeadVar__1_34,
  MR_Word HeadVar__2_35)
{
  {
    MR_bool succeeded = (HeadVar__1_34 == HeadVar__2_35);

    return succeeded;
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_18,
  MR_Word STATE_VARIABLE_DumpInfo_0_19,
  MR_Word * STATE_VARIABLE_DumpInfo_20)
{
  {
    MR_bool succeeded;
    MR_Word Globals_9;
    MR_Word Verbose_10;
    MR_Word Stats_11;
    MR_Word ClosureAnalysis_12;
    MR_Word SharingAnalysis_13;
    MR_Word AnalysisInfo_15;
    MR_Word ImportedModules_16;
    MR_Word STATE_VARIABLE_HLDS_27_27;
    MR_Word STATE_VARIABLE_DumpInfo_31_31;
    MR_Word STATE_VARIABLE_HLDS_33_33;
    MR_Word STATE_VARIABLE_DumpInfo_37_37;
    MR_Word STATE_VARIABLE_HLDS_39_39;
    MR_Word STATE_VARIABLE_DumpInfo_43_43;
    MR_Word STATE_VARIABLE_HLDS_45_45;
    MR_Word STATE_VARIABLE_DumpInfo_49_49;
    MR_Word STATE_VARIABLE_HLDS_51_51;
    MR_Word STATE_VARIABLE_DumpInfo_55_55;
    MR_Word STATE_VARIABLE_HLDS_76_76;
    MR_Word STATE_VARIABLE_DumpInfo_80_80;
    MR_Word STATE_VARIABLE_HLDS_82_82;
    MR_Word STATE_VARIABLE_DumpInfo_86_86;
    MR_Word STATE_VARIABLE_HLDS_88_88;
    MR_Word STATE_VARIABLE_DumpInfo_92_92;
    MR_Word STATE_VARIABLE_HLDS_94_94;
    MR_Word STATE_VARIABLE_DumpInfo_98_98;
    MR_Word STATE_VARIABLE_HLDS_100_100;
    MR_Word STATE_VARIABLE_DumpInfo_104_104;
    MR_Word STATE_VARIABLE_HLDS_106_106;
    MR_Word _UnusedArgsInfos_14;
    MR_Word _AnalysisInfo_17;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_18, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 60, &Verbose_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 70, &Stats_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 454, &ClosureAnalysis_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 430, &SharingAnalysis_13);
    succeeded = (ClosureAnalysis_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_13 == (MR_Integer) 1);
    if (succeeded)
      top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_0_18, &STATE_VARIABLE_HLDS_27_27);
    else
      STATE_VARIABLE_HLDS_27_27 = STATE_VARIABLE_HLDS_0_18;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_27_27, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_19, &STATE_VARIABLE_DumpInfo_31_31);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_27_27, &STATE_VARIABLE_HLDS_33_33);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_33_33, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_31_31, &STATE_VARIABLE_DumpInfo_37_37);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_33_33, &STATE_VARIABLE_HLDS_39_39);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_39_39, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_37_37, &STATE_VARIABLE_DumpInfo_43_43);
    top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_39_39, &STATE_VARIABLE_HLDS_45_45);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_45_45, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_43_43, &STATE_VARIABLE_DumpInfo_49_49);
    top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_45_45, &STATE_VARIABLE_HLDS_51_51);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_51_51, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_49_49, &STATE_VARIABLE_DumpInfo_55_55);
    switch (SharingAnalysis_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_76_76 = STATE_VARIABLE_HLDS_51_51;
          STATE_VARIABLE_DumpInfo_80_80 = STATE_VARIABLE_DumpInfo_55_55;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_57_57;
          MR_Word STATE_VARIABLE_DumpInfo_61_61;
          MR_Word STATE_VARIABLE_HLDS_63_63;
          MR_Word STATE_VARIABLE_DumpInfo_67_67;
          MR_Word STATE_VARIABLE_HLDS_69_69;
          MR_Word STATE_VARIABLE_DumpInfo_70_70;
          MR_Word STATE_VARIABLE_DumpInfo_74_74;

          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_51_51, &STATE_VARIABLE_HLDS_57_57);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_57_57, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_55_55, &STATE_VARIABLE_DumpInfo_61_61);
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_57_57, &STATE_VARIABLE_HLDS_63_63);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_63_63, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_61_61, &STATE_VARIABLE_DumpInfo_67_67);
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_63_63, &STATE_VARIABLE_HLDS_69_69, STATE_VARIABLE_DumpInfo_67_67, &STATE_VARIABLE_DumpInfo_70_70);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_69_69, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_70_70, &STATE_VARIABLE_DumpInfo_74_74);
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_69_69, &STATE_VARIABLE_HLDS_76_76);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_76_76, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_74_74, &STATE_VARIABLE_DumpInfo_80_80);
        }
        break;
    }
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_76_76, &STATE_VARIABLE_HLDS_82_82);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_82_82, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_80_80, &STATE_VARIABLE_DumpInfo_86_86);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_82_82, &STATE_VARIABLE_HLDS_88_88);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_88_88, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_86_86, &STATE_VARIABLE_DumpInfo_92_92);
    top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(Verbose_10, Stats_11, &_UnusedArgsInfos_14, STATE_VARIABLE_HLDS_88_88, &STATE_VARIABLE_HLDS_94_94);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_94_94, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_92_92, &STATE_VARIABLE_DumpInfo_98_98);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_94_94, &STATE_VARIABLE_HLDS_100_100);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_100_100, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_98_98, &STATE_VARIABLE_DumpInfo_104_104);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_100_100, &STATE_VARIABLE_HLDS_106_106);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_106_106, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_104_104, STATE_VARIABLE_DumpInfo_20);
    hlds__hlds_module__module_info_get_analysis_info_2_p_0(STATE_VARIABLE_HLDS_106_106, &AnalysisInfo_15);
    hlds__hlds_module__module_info_get_all_deps_2_p_0(STATE_VARIABLE_HLDS_106_106, &ImportedModules_16);
    analysis__write_analysis_files_7_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[0]), ((MR_Box) ((MR_Integer) 0)), STATE_VARIABLE_HLDS_106_106, ImportedModules_16, AnalysisInfo_15, &_AnalysisInfo_17);
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word STATE_VARIABLE_DumpInfo_0_15,
  MR_Word * STATE_VARIABLE_DumpInfo_16)
{
  {
    MR_bool succeeded;
    MR_Word Globals_9;
    MR_Word Verbose_10;
    MR_Word Stats_11;
    MR_Word ClosureAnalysis_12;
    MR_Word SharingAnalysis_13;
    MR_Word STATE_VARIABLE_HLDS_23_23;
    MR_Word STATE_VARIABLE_DumpInfo_27_27;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_DumpInfo_33_33;
    MR_Word STATE_VARIABLE_HLDS_35_35;
    MR_Word STATE_VARIABLE_DumpInfo_39_39;
    MR_Word STATE_VARIABLE_HLDS_41_41;
    MR_Word STATE_VARIABLE_DumpInfo_45_45;
    MR_Word STATE_VARIABLE_HLDS_47_47;
    MR_Word STATE_VARIABLE_DumpInfo_51_51;
    MR_Word STATE_VARIABLE_HLDS_72_72;
    MR_Word STATE_VARIABLE_DumpInfo_76_76;
    MR_Word STATE_VARIABLE_HLDS_78_78;
    MR_Word STATE_VARIABLE_DumpInfo_82_82;
    MR_Word STATE_VARIABLE_HLDS_84_84;
    MR_Word STATE_VARIABLE_DumpInfo_88_88;
    MR_Word STATE_VARIABLE_HLDS_90_90;
    MR_Word STATE_VARIABLE_DumpInfo_94_94;
    MR_Word STATE_VARIABLE_HLDS_96_96;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 60, &Verbose_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 70, &Stats_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 454, &ClosureAnalysis_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_9, (MR_Integer) 430, &SharingAnalysis_13);
    succeeded = (ClosureAnalysis_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_13 == (MR_Integer) 1);
    if (succeeded)
      top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_0_14, &STATE_VARIABLE_HLDS_23_23);
    else
      STATE_VARIABLE_HLDS_23_23 = STATE_VARIABLE_HLDS_0_14;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_23_23, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_15, &STATE_VARIABLE_DumpInfo_27_27);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_23_23, &STATE_VARIABLE_HLDS_29_29);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_29_29, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_27_27, &STATE_VARIABLE_DumpInfo_33_33);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_29_29, &STATE_VARIABLE_HLDS_35_35);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_35_35, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_33_33, &STATE_VARIABLE_DumpInfo_39_39);
    top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_41_41);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_41_41, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_39_39, &STATE_VARIABLE_DumpInfo_45_45);
    top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_41_41, &STATE_VARIABLE_HLDS_47_47);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_47_47, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_45_45, &STATE_VARIABLE_DumpInfo_51_51);
    switch (SharingAnalysis_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_72_72 = STATE_VARIABLE_HLDS_47_47;
          STATE_VARIABLE_DumpInfo_76_76 = STATE_VARIABLE_DumpInfo_51_51;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_53_53;
          MR_Word STATE_VARIABLE_DumpInfo_57_57;
          MR_Word STATE_VARIABLE_HLDS_59_59;
          MR_Word STATE_VARIABLE_DumpInfo_63_63;
          MR_Word STATE_VARIABLE_HLDS_65_65;
          MR_Word STATE_VARIABLE_DumpInfo_66_66;
          MR_Word STATE_VARIABLE_DumpInfo_70_70;

          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_47_47, &STATE_VARIABLE_HLDS_53_53);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_53_53, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_51_51, &STATE_VARIABLE_DumpInfo_57_57);
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_53_53, &STATE_VARIABLE_HLDS_59_59);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_59_59, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_57_57, &STATE_VARIABLE_DumpInfo_63_63);
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_59_59, &STATE_VARIABLE_HLDS_65_65, STATE_VARIABLE_DumpInfo_63_63, &STATE_VARIABLE_DumpInfo_66_66);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_65_65, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_66_66, &STATE_VARIABLE_DumpInfo_70_70);
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_65_65, &STATE_VARIABLE_HLDS_72_72);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_72_72, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_70_70, &STATE_VARIABLE_DumpInfo_76_76);
        }
        break;
    }
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_72_72, &STATE_VARIABLE_HLDS_78_78);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_78_78, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_76_76, &STATE_VARIABLE_DumpInfo_82_82);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_78_78, &STATE_VARIABLE_HLDS_84_84);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_84_84, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_82_82, &STATE_VARIABLE_DumpInfo_88_88);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_84_84, &STATE_VARIABLE_HLDS_90_90);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_90_90, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_88_88, &STATE_VARIABLE_DumpInfo_94_94);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_10, Stats_11, STATE_VARIABLE_HLDS_90_90, &STATE_VARIABLE_HLDS_96_96);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_96_96, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_94_94, STATE_VARIABLE_DumpInfo_16);
    transform_hlds__intermod__write_trans_opt_file_3_p_0(STATE_VARIABLE_HLDS_96_96);
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_bool succeeded;
    MR_Word Globals_7;
    MR_Word Verbose_8;
    MR_Word Stats_9;
    MR_Word ClosureAnalysis_10;
    MR_Word SharingAnalysis_11;
    MR_Word UnusedArgsInfos_12;
    MR_Word STATE_VARIABLE_HLDS_23_23;
    MR_Word STATE_VARIABLE_HLDS_25_25;
    MR_Word STATE_VARIABLE_HLDS_27_27;
    MR_Word STATE_VARIABLE_HLDS_29_29;
    MR_Word STATE_VARIABLE_HLDS_31_31;
    MR_Word STATE_VARIABLE_HLDS_33_33;
    MR_Word STATE_VARIABLE_HLDS_35_35;
    MR_Word STATE_VARIABLE_HLDS_37_37;
    MR_Word STATE_VARIABLE_HLDS_39_39;
    MR_Word Globals_82;
    MR_Word ClosureAnalysis_83;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_7);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 60, &Verbose_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 70, &Stats_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 454, &ClosureAnalysis_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 430, &SharingAnalysis_11);
    succeeded = (ClosureAnalysis_10 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_11 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_HLDS_21_21;

      libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) "% Transforming lambda expressions...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_8);
      transform_hlds__lambda__expand_lambdas_in_module_2_p_0(STATE_VARIABLE_HLDS_0_13, &STATE_VARIABLE_HLDS_21_21);
      libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_9);
      libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) "% Transforming stm expressions...");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_8);
      transform_hlds__stm_expand__stm_process_module_2_p_0(STATE_VARIABLE_HLDS_21_21, &STATE_VARIABLE_HLDS_23_23);
      libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) " done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_9);
    }
    else
      STATE_VARIABLE_HLDS_23_23 = STATE_VARIABLE_HLDS_0_13;
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_23_23, &Globals_82);
    libs__globals__lookup_bool_option_3_p_0(Globals_82, (MR_Integer) 454, &ClosureAnalysis_83);
    switch (ClosureAnalysis_83) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        STATE_VARIABLE_HLDS_25_25 = STATE_VARIABLE_HLDS_23_23;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) "% Analysing closures...\n");
          transform_hlds__closure_analysis__closure_analyse_module_4_p_0(STATE_VARIABLE_HLDS_23_23, &STATE_VARIABLE_HLDS_25_25);
          libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_9);
        }
        break;
    }
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_25_25, &STATE_VARIABLE_HLDS_27_27);
    top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(Verbose_8, Stats_9, &UnusedArgsInfos_12, STATE_VARIABLE_HLDS_27_27, &STATE_VARIABLE_HLDS_29_29);
    top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_29_29, &STATE_VARIABLE_HLDS_31_31);
    top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_31_31, &STATE_VARIABLE_HLDS_33_33);
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_33_33, &STATE_VARIABLE_HLDS_35_35);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_35_35, &STATE_VARIABLE_HLDS_37_37);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_37_37, &STATE_VARIABLE_HLDS_39_39);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_8, Stats_9, STATE_VARIABLE_HLDS_39_39, STATE_VARIABLE_HLDS_14);
    transform_hlds__intermod__append_analysis_pragmas_to_opt_file_4_p_0(*STATE_VARIABLE_HLDS_14, UnusedArgsInfos_12);
  }
}

void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_6_p_0(
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_DumpInfo_0_18,
  MR_Word * STATE_VARIABLE_DumpInfo_19)
{
  {
    MR_Word Globals_10;
    MR_Word Verbose_11;
    MR_Word Stats_12;
    MR_Word STATE_VARIABLE_HLDS_24_24;
    MR_Word STATE_VARIABLE_HLDS_26_26;
    MR_Word STATE_VARIABLE_DumpInfo_30_30;
    MR_Word STATE_VARIABLE_HLDS_32_32;
    MR_Word STATE_VARIABLE_DumpInfo_36_36;
    MR_Word STATE_VARIABLE_HLDS_38_38;
    MR_Word STATE_VARIABLE_DumpInfo_42_42;
    MR_Word STATE_VARIABLE_HLDS_44_44;
    MR_Word STATE_VARIABLE_DumpInfo_48_48;
    MR_Word STATE_VARIABLE_HLDS_50_50;
    MR_Word STATE_VARIABLE_DumpInfo_54_54;
    MR_Word STATE_VARIABLE_HLDS_56_56;
    MR_Word STATE_VARIABLE_DumpInfo_60_60;
    MR_Word STATE_VARIABLE_HLDS_62_62;
    MR_Word STATE_VARIABLE_DumpInfo_66_66;
    MR_Word STATE_VARIABLE_HLDS_68_68;
    MR_Word STATE_VARIABLE_DumpInfo_72_72;
    MR_Word STATE_VARIABLE_HLDS_74_74;
    MR_Word STATE_VARIABLE_DumpInfo_78_78;
    MR_Word STATE_VARIABLE_HLDS_80_80;
    MR_Word STATE_VARIABLE_DumpInfo_84_84;
    MR_Word STATE_VARIABLE_DumpInfo_86_86;
    MR_Word STATE_VARIABLE_HLDS_88_88;
    MR_Word STATE_VARIABLE_DumpInfo_92_92;
    MR_Word STATE_VARIABLE_HLDS_94_94;
    MR_Word STATE_VARIABLE_DumpInfo_98_98;
    MR_Word STATE_VARIABLE_HLDS_100_100;
    MR_Word STATE_VARIABLE_DumpInfo_104_104;
    MR_Word STATE_VARIABLE_HLDS_106_106;
    MR_Word STATE_VARIABLE_DumpInfo_110_110;
    MR_Word STATE_VARIABLE_HLDS_112_112;
    MR_Word STATE_VARIABLE_DumpInfo_116_116;
    MR_Word STATE_VARIABLE_HLDS_118_118;
    MR_Word STATE_VARIABLE_DumpInfo_122_122;
    MR_Word STATE_VARIABLE_HLDS_124_124;
    MR_Word STATE_VARIABLE_DumpInfo_125_125;
    MR_Word STATE_VARIABLE_DumpInfo_129_129;
    MR_Word STATE_VARIABLE_HLDS_131_131;
    MR_Word STATE_VARIABLE_DumpInfo_135_135;
    MR_Word STATE_VARIABLE_HLDS_137_137;
    MR_Word STATE_VARIABLE_DumpInfo_141_141;
    MR_Word STATE_VARIABLE_HLDS_143_143;
    MR_Word STATE_VARIABLE_DumpInfo_147_147;
    MR_Word STATE_VARIABLE_HLDS_149_149;
    MR_Word STATE_VARIABLE_DumpInfo_153_153;
    MR_Word STATE_VARIABLE_HLDS_155_155;
    MR_Word STATE_VARIABLE_DumpInfo_159_159;
    MR_Word STATE_VARIABLE_HLDS_161_161;
    MR_Word STATE_VARIABLE_DumpInfo_165_165;
    MR_Word STATE_VARIABLE_HLDS_167_167;
    MR_Word STATE_VARIABLE_DumpInfo_171_171;
    MR_Word STATE_VARIABLE_HLDS_175_175;
    MR_Word STATE_VARIABLE_DumpInfo_180_180;
    MR_Word STATE_VARIABLE_HLDS_182_182;
    MR_Word STATE_VARIABLE_DumpInfo_186_186;
    MR_Word STATE_VARIABLE_HLDS_188_188;
    MR_Word STATE_VARIABLE_DumpInfo_192_192;
    MR_Word STATE_VARIABLE_HLDS_194_194;
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
    MR_Word STATE_VARIABLE_HLDS_232_232;
    MR_Word STATE_VARIABLE_DumpInfo_237_237;
    MR_Word STATE_VARIABLE_HLDS_239_239;
    MR_Word STATE_VARIABLE_DumpInfo_243_243;
    MR_Word STATE_VARIABLE_HLDS_245_245;
    MR_Word STATE_VARIABLE_DumpInfo_249_249;
    MR_Word STATE_VARIABLE_HLDS_251_251;
    MR_Word STATE_VARIABLE_DumpInfo_255_255;
    MR_Word STATE_VARIABLE_HLDS_257_257;
    MR_Word STATE_VARIABLE_DumpInfo_261_261;
    MR_Word STATE_VARIABLE_DumpInfo_267_267;
    MR_Word _UnusedArgsInfos_13;
    MR_Word _SimplifySpecsPreImpPar_14;
    MR_Word _SimplifySpecsPreProf_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_10);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 60, &Verbose_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_10, (MR_Integer) 70, &Stats_12);
    top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_24_24);
    top_level__mercury_compile_middle_passes__tabling_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_24_24, &STATE_VARIABLE_HLDS_26_26);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_26_26, (MR_Integer) 105, (MR_String) "tabling", STATE_VARIABLE_DumpInfo_0_18, &STATE_VARIABLE_DumpInfo_30_30);
    top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_26_26, &STATE_VARIABLE_HLDS_32_32);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_32_32, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_30_30, &STATE_VARIABLE_DumpInfo_36_36);
    top_level__mercury_compile_middle_passes__expand_stm_goals_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_32_32, &STATE_VARIABLE_HLDS_38_38);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_38_38, (MR_Integer) 113, (MR_String) "stm", STATE_VARIABLE_DumpInfo_36_36, &STATE_VARIABLE_DumpInfo_42_42);
    top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_38_38, &STATE_VARIABLE_HLDS_44_44);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_44_44, (MR_Integer) 115, (MR_String) "equiv_types", STATE_VARIABLE_DumpInfo_42_42, &STATE_VARIABLE_DumpInfo_48_48);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_44_44, &STATE_VARIABLE_HLDS_50_50);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_50_50, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_48_48, &STATE_VARIABLE_DumpInfo_54_54);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_50_50, &STATE_VARIABLE_HLDS_56_56);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_56_56, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_54_54, &STATE_VARIABLE_DumpInfo_60_60);
    top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_56_56, &STATE_VARIABLE_HLDS_62_62);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_62_62, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_60_60, &STATE_VARIABLE_DumpInfo_66_66);
    top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_62_62, &STATE_VARIABLE_HLDS_68_68);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_68_68, (MR_Integer) 121, (MR_String) "termination2", STATE_VARIABLE_DumpInfo_66_66, &STATE_VARIABLE_DumpInfo_72_72);
    top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_68_68, &STATE_VARIABLE_HLDS_74_74);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_74_74, (MR_Integer) 125, (MR_String) "type_ctor_infos", STATE_VARIABLE_DumpInfo_72_72, &STATE_VARIABLE_DumpInfo_78_78);
    top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_74_74, &STATE_VARIABLE_HLDS_80_80);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_80_80, (MR_Integer) 130, (MR_String) "warn_dead_procs", STATE_VARIABLE_DumpInfo_78_78, &STATE_VARIABLE_DumpInfo_84_84);
    top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(STATE_VARIABLE_HLDS_80_80, Verbose_11, Stats_12, STATE_VARIABLE_DumpInfo_84_84, &STATE_VARIABLE_DumpInfo_86_86);
    top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_80_80, &STATE_VARIABLE_HLDS_88_88);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_88_88, (MR_Integer) 133, (MR_String) "untupling", STATE_VARIABLE_DumpInfo_86_86, &STATE_VARIABLE_DumpInfo_92_92);
    top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_88_88, &STATE_VARIABLE_HLDS_94_94);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_94_94, (MR_Integer) 134, (MR_String) "tupling", STATE_VARIABLE_DumpInfo_92_92, &STATE_VARIABLE_DumpInfo_98_98);
    top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_94_94, &STATE_VARIABLE_HLDS_100_100);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_100_100, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_98_98, &STATE_VARIABLE_DumpInfo_104_104);
    top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_100_100, &STATE_VARIABLE_HLDS_106_106);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_106_106, (MR_Integer) 137, (MR_String) "ssdb", STATE_VARIABLE_DumpInfo_104_104, &STATE_VARIABLE_DumpInfo_110_110);
    top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_106_106, &STATE_VARIABLE_HLDS_112_112);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_112_112, (MR_Integer) 140, (MR_String) "accum", STATE_VARIABLE_DumpInfo_110_110, &STATE_VARIABLE_DumpInfo_116_116);
    top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_112_112, &STATE_VARIABLE_HLDS_118_118);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_118_118, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_116_116, &STATE_VARIABLE_DumpInfo_122_122);
    top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_118_118, &STATE_VARIABLE_HLDS_124_124, STATE_VARIABLE_DumpInfo_122_122, &STATE_VARIABLE_DumpInfo_125_125);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_124_124, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_125_125, &STATE_VARIABLE_DumpInfo_129_129);
    top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_124_124, &STATE_VARIABLE_HLDS_131_131);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_131_131, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_129_129, &STATE_VARIABLE_DumpInfo_135_135);
    top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_131_131, &STATE_VARIABLE_HLDS_137_137);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_137_137, (MR_Integer) 160, (MR_String) "delay_construct", STATE_VARIABLE_DumpInfo_135_135, &STATE_VARIABLE_DumpInfo_141_141);
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_137_137, &STATE_VARIABLE_HLDS_143_143);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_143_143, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_141_141, &STATE_VARIABLE_DumpInfo_147_147);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_143_143, &STATE_VARIABLE_HLDS_149_149);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_149_149, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_147_147, &STATE_VARIABLE_DumpInfo_153_153);
    top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(Verbose_11, Stats_12, &_UnusedArgsInfos_13, STATE_VARIABLE_HLDS_149_149, &STATE_VARIABLE_HLDS_155_155);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_155_155, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_153_153, &STATE_VARIABLE_DumpInfo_159_159);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_155_155, &STATE_VARIABLE_HLDS_161_161);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_161_161, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_159_159, &STATE_VARIABLE_DumpInfo_165_165);
    top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_161_161, &STATE_VARIABLE_HLDS_167_167);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_167_167, (MR_Integer) 170, (MR_String) "unneeded_code", STATE_VARIABLE_DumpInfo_165_165, &STATE_VARIABLE_DumpInfo_171_171);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, Verbose_11, Stats_12, STATE_VARIABLE_HLDS_167_167, &STATE_VARIABLE_HLDS_175_175, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreImpPar_14);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_175_175, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", STATE_VARIABLE_DumpInfo_171_171, &STATE_VARIABLE_DumpInfo_180_180);
    top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_175_175, &STATE_VARIABLE_HLDS_182_182);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_182_182, (MR_Integer) 173, (MR_String) "implicit_parallelism", STATE_VARIABLE_DumpInfo_180_180, &STATE_VARIABLE_DumpInfo_186_186);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_182_182, &STATE_VARIABLE_HLDS_188_188);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_188_188, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_186_186, &STATE_VARIABLE_DumpInfo_192_192);
    top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_188_188, &STATE_VARIABLE_HLDS_194_194);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_194_194, (MR_Integer) 200, (MR_String) "granularity", STATE_VARIABLE_DumpInfo_192_192, &STATE_VARIABLE_DumpInfo_198_198);
    top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_194_194, &STATE_VARIABLE_HLDS_200_200);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_200_200, (MR_Integer) 201, (MR_String) "distance_granularity", STATE_VARIABLE_DumpInfo_198_198, &STATE_VARIABLE_DumpInfo_204_204);
    top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_200_200, &STATE_VARIABLE_HLDS_206_206);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_206_206, (MR_Integer) 205, (MR_String) "dependent_par_conj", STATE_VARIABLE_DumpInfo_204_204, &STATE_VARIABLE_DumpInfo_210_210);
    top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_206_206, &STATE_VARIABLE_HLDS_212_212);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_212_212, (MR_Integer) 206, (MR_String) "par_loop_control", STATE_VARIABLE_DumpInfo_210_210, &STATE_VARIABLE_DumpInfo_216_216);
    top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_212_212, &STATE_VARIABLE_HLDS_218_218);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_218_218, (MR_Integer) 210, (MR_String) "lco", STATE_VARIABLE_DumpInfo_216_216, &STATE_VARIABLE_DumpInfo_222_222);
    top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_218_218, &STATE_VARIABLE_HLDS_224_224);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_224_224, (MR_Integer) 213, (MR_String) "float_reg_wrapper", STATE_VARIABLE_DumpInfo_222_222, &STATE_VARIABLE_DumpInfo_228_228);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, Verbose_11, Stats_12, STATE_VARIABLE_HLDS_224_224, &STATE_VARIABLE_HLDS_232_232, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreProf_15);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_232_232, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", STATE_VARIABLE_DumpInfo_228_228, &STATE_VARIABLE_DumpInfo_237_237);
    top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_232_232, &STATE_VARIABLE_HLDS_239_239);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_239_239, (MR_Integer) 220, (MR_String) "term_size_prof", STATE_VARIABLE_DumpInfo_237_237, &STATE_VARIABLE_DumpInfo_243_243);
    top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_239_239, &STATE_VARIABLE_HLDS_245_245);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_245_245, (MR_Integer) 225, (MR_String) "deep_profiling", STATE_VARIABLE_DumpInfo_243_243, &STATE_VARIABLE_DumpInfo_249_249);
    top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_245_245, &STATE_VARIABLE_HLDS_251_251);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_251_251, (MR_Integer) 230, (MR_String) "complexity", STATE_VARIABLE_DumpInfo_249_249, &STATE_VARIABLE_DumpInfo_255_255);
    top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_251_251, &STATE_VARIABLE_HLDS_257_257);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_257_257, (MR_Integer) 240, (MR_String) "region_analysis", STATE_VARIABLE_DumpInfo_255_255, &STATE_VARIABLE_DumpInfo_261_261);
    top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(Verbose_11, Stats_12, STATE_VARIABLE_HLDS_257_257, STATE_VARIABLE_HLDS_17);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_17, (MR_Integer) 250, (MR_String) "dead_procs", STATE_VARIABLE_DumpInfo_261_261, &STATE_VARIABLE_DumpInfo_267_267);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_17, (MR_Integer) 299, (MR_String) "middle_pass", STATE_VARIABLE_DumpInfo_267_267, STATE_VARIABLE_DumpInfo_19);
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word Dead_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 411, &Dead_12);
    switch (Dead_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Eliminating dead procedures...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__dead_proc_elim__dead_proc_elim_3_p_0((MR_Integer) 0, STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word Analysis_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 429, &Analysis_12);
    switch (Analysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing regions ...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__rbmm__do_region_analysis_4_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
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
      hlds__passes_aux__process_all_nonimported_procs_3_p_0(Var_22, STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 216, &ProfileDeep_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 233, &AsWords_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 234, &AsCells_13);
    switch (AsWords_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (AsCells_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTransform_14 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            MaybeTransform_14 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[2]));
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (AsCells_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            MaybeTransform_14 = (MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[3]));
            break;
          case (MR_Integer) 1:
            {
              {
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", (MR_String) "as_words and as_cells");
                return;
              }
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
        MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]));
        MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1));
        MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Transform_15));
      }
      {
        Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(MR_mktag(3), Var_29, 1) = ((MR_Box) (Var_31));
      }
      hlds__passes_aux__process_all_nonimported_procs_3_p_0(Var_29, STATE_VARIABLE_HLDS_0_16, STATE_VARIABLE_HLDS_17);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_Word Globals_11;
    MR_Word UseFloatRegs_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 279, &UseFloatRegs_12);
    switch (UseFloatRegs_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Specs_13;
          MR_Integer NumErrors_15;
          MR_Word STATE_VARIABLE_HLDS_24_24;
          MR_Integer _NumWarnings_14;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Inserting float register wrappers...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__float_regs__insert_reg_wrappers_3_p_0(STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_24_24, &Specs_13);
          parse_tree__error_util__write_error_specs_8_p_0(Specs_13, Globals_11, (MR_Integer) 0, &_NumWarnings_14, (MR_Integer) 0, &NumErrors_15);
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_15, STATE_VARIABLE_HLDS_24_24, STATE_VARIABLE_HLDS_17);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 696, &LoopControl_12);
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
              {
                hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[1])), STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
              }
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 237, &Parallel_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 280, &HighLevelCode_13);
    libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 693, &Distance_14);
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
        case (MR_Integer) 3:
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 237, &Parallel_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 280, &HighLevelCode_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 692, &Control_14);
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
        case (MR_Integer) 3:
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 420, &TablingAnalysis_12);
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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word LCO_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 387, &LCO_12);
    switch (LCO_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Looking for LCO modulo constructor application ...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__lco__lco_modulo_constructors_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word UnneededCode_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 378, &UnneededCode_12);
    switch (UnneededCode_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Removing unneeded code from procedure bodies...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[3])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 417, &AnalyseTrail_12);
    switch (AnalyseTrail_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing trail usage...\n");
          transform_hlds__trailing_analysis__analyse_trail_usage_2_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 432, &ReuseAnalysis_12);
    switch (ReuseAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Structure reuse analysis...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 430, &Sharing_12);
    switch (Sharing_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Structure sharing analysis...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word DelayConstruct_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 409, &DelayConstruct_12);
    switch (DelayConstruct_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Delaying construction unifications ...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[0])), STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word Deforest_12;
    MR_Word Constraints_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_15, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 412, &Deforest_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 372, &Constraints_13);
    succeeded = (Deforest_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (Constraints_13 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_String Msg_14;

      switch (Deforest_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (Constraints_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                {
                  mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", (MR_String) "no no");
                  return;
                }
              }
              break;
            case (MR_Integer) 1:
              Msg_14 = (MR_String) "% Constraint propagation...\n";
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (Constraints_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Msg_14 = (MR_String) "% Deforestation...\n";
              break;
            case (MR_Integer) 1:
              Msg_14 = (MR_String) "% Deforestation and constraint propagation...\n";
              break;
          }
          break;
      }
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, Msg_14);
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      transform_hlds__deforest__deforestation_2_p_0(STATE_VARIABLE_HLDS_0_15, STATE_VARIABLE_HLDS_16);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_16 = STATE_VARIABLE_HLDS_0_15;
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
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17,
  MR_Word STATE_VARIABLE_DumpInfo_0_18,
  MR_Word * STATE_VARIABLE_DumpInfo_19)
{
  {
    MR_Word Globals_14;
    MR_Word LoopInv_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 408, &LoopInv_15);
    switch (LoopInv_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
          *STATE_VARIABLE_DumpInfo_19 = STATE_VARIABLE_DumpInfo_0_18;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_23_23;

          top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(Verbose_9, Stats_10, STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_23_23);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_23_23, (MR_Integer) 148, (MR_String) "mark_static", STATE_VARIABLE_DumpInfo_0_18, STATE_VARIABLE_DumpInfo_19);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Hoisting loop invariants...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[2])), STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_17);
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
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word Allow_12;
    MR_Word Simple_13;
    MR_Word SingleUse_14;
    MR_Integer Threshold_15;
    MR_Word LinearRec_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 355, &Allow_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 357, &Simple_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 359, &SingleUse_14);
    libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 361, &Threshold_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 365, &LinearRec_16);
    succeeded = (Allow_12 == (MR_Integer) 1);
    if (succeeded)
    {
      succeeded = (Simple_13 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = (SingleUse_14 == (MR_Integer) 1);
        if (!(succeeded))
        {
          succeeded = (Threshold_15 > (MR_Integer) 0);
          if (!(succeeded))
            succeeded = (LinearRec_16 == (MR_Integer) 1);
        }
      }
    }
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Inlining...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      transform_hlds__inlining__inline_in_module_2_p_0(STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
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
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word Optimize_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 384, &Optimize_12);
    switch (Optimize_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Cookie0_13;
          MR_Word Task0_14;
          MR_Word Task_15;
          MR_Word Specs_19;
          MR_Integer NumErrors_21;
          MR_Word STATE_VARIABLE_HLDS_32_32;
          MR_Word SpecsPrime_18;
          MR_Word Cookie_17;
          MR_Box conv3_SpecsPrime_18;
          MR_Integer _NumWarnings_20;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Attempting to introduce accumulators...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          mercury__univ__type_to_univ_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 0U)), &Cookie0_13);
          {
            Task0_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Task0_14, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Task0_14, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
            MR_hl_field(MR_mktag(3), Task0_14, 2) = ((MR_Box) (Cookie0_13));
          }
          hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(Task0_14, &Task_15, STATE_VARIABLE_HLDS_0_22, &STATE_VARIABLE_HLDS_32_32);
          succeeded = ((((MR_tag((MR_Word) Task_15)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Task_15, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Cookie_17 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Task_15, (MR_Integer) 2))));
            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), Cookie_17, &conv3_SpecsPrime_18);
            if (succeeded)
            {
              SpecsPrime_18 = ((MR_Word) (conv3_SpecsPrime_18));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            Specs_19 = SpecsPrime_18;
          else
          {
            {
              mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/6", (MR_String) "bad task");
              return;
            }
          }
          parse_tree__error_util__write_error_specs_8_p_0(Specs_19, Globals_11, (MR_Integer) 0, &_NumWarnings_20, (MR_Integer) 0, &NumErrors_21);
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_21, STATE_VARIABLE_HLDS_32_32, STATE_VARIABLE_HLDS_23);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ImplicitParallelism_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 694, &ImplicitParallelism_12);
    switch (ImplicitParallelism_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Applying implicit parallelism...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 150, &ForceDisableSSDB_12);
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
  MR_Word STATE_VARIABLE_HLDS_0_19,
  MR_Word * STATE_VARIABLE_HLDS_20)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word HigherOrder_12;
    MR_Word Types_13;
    MR_Word TypeSpecInfo_14;
    MR_Word TypeSpecPreds_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 375, &HigherOrder_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 383, &Types_13);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_HLDS_0_19, &TypeSpecInfo_14);
    TypeSpecPreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_14, (MR_Integer) 0))));
    succeeded = (HigherOrder_12 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (Types_13 == (MR_Integer) 1);
      if (!(succeeded))
      {
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), TypeSpecPreds_15);
      }
    }
    if (succeeded)
    {
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      transform_hlds__higher_order__specialize_higher_order_4_p_0(STATE_VARIABLE_HLDS_0_19, STATE_VARIABLE_HLDS_20);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    }
    else
      *STATE_VARIABLE_HLDS_20 = STATE_VARIABLE_HLDS_0_19;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word Tuple_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 422, &Tuple_12);
    switch (Tuple_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Tupling...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__tupling__tuple_arguments_4_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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

    succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__739__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
    return succeeded;
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_14,
  MR_Word * STATE_VARIABLE_HLDS_15)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word Untuple_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_14, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 421, &Untuple_12);
    switch (Untuple_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_15 = STATE_VARIABLE_HLDS_0_14;
        break;
      case (MR_Integer) 1:
        {
          MR_Word SimplifySpecs_13;
          MR_Word STATE_VARIABLE_HLDS_22_22;
          MR_Word Var_31;
          MR_Word Var_34;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Untupling...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
          transform_hlds__untupling__untuple_arguments_4_p_0(STATE_VARIABLE_HLDS_0_14, &STATE_VARIABLE_HLDS_22_22);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 1, Verbose_7, Stats_8, STATE_VARIABLE_HLDS_22_22, STATE_VARIABLE_HLDS_15, (MR_Word) ((MR_Unsigned) 0U), &SimplifySpecs_13);
          Var_34 = parse_tree__error_util__contains_errors_2_f_0(Globals_11, SimplifySpecs_13);
          {
            Var_31 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_2[0]));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 151, &GenBytecode_14);
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
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, (MR_String) ".bytedebug", ModuleName_17, &BytedebugFile_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Writing bytecodes to \140");
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, BytedebugFile_18);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "\'...");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          bytecode_backend__bytecode__debug_bytecode_file_4_p_0(BytedebugFile_18, Bytecode_16);
          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) " done.\n");
          parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_13, (MR_Integer) 0, (MR_String) ".mbc", ModuleName_17, &BytecodeFile_19);
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
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_17,
  MR_Word * STATE_VARIABLE_HLDS_18)
{
  {
    MR_bool succeeded;
    MR_Word Globals_11;
    MR_Word WarnDeadProcs_12;
    MR_Word WarnDeadPreds_13;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_17, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 38, &WarnDeadProcs_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 39, &WarnDeadPreds_13);
    succeeded = (WarnDeadProcs_12 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (WarnDeadPreds_13 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Word Specs_14;
      MR_Integer NumErrors_16;
      MR_Integer _NumWarnings_15;

      switch (WarnDeadProcs_12) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Warning about dead predicates...\n");
          }
          break;
        case (MR_Integer) 1:
          {
            libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Warning about dead procedures...\n");
          }
          break;
      }
      libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
      transform_hlds__dead_proc_elim__dead_proc_warn_2_p_0(STATE_VARIABLE_HLDS_0_17, &Specs_14);
      libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_8);
      parse_tree__error_util__write_error_specs_8_p_0(Specs_14, Globals_11, (MR_Integer) 0, &_NumWarnings_15, (MR_Integer) 0, &NumErrors_16);
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_16, STATE_VARIABLE_HLDS_0_17, STATE_VARIABLE_HLDS_18);
    }
    else
      *STATE_VARIABLE_HLDS_18 = STATE_VARIABLE_HLDS_0_17;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 299, &TypeCtorInfo_12);
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
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_Word Globals_11;
    MR_Word Termination2_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 445, &Termination2_12);
    switch (Termination2_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Specs_13;
          MR_Integer NumErrors_15;
          MR_Word STATE_VARIABLE_HLDS_23_23;
          MR_Integer _NumWarnings_14;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Detecting termination 2...\n");
          transform_hlds__term_constr_main__term2_analyse_module_3_p_0(STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_23_23, &Specs_13);
          parse_tree__error_util__write_error_specs_8_p_0(Specs_13, Globals_11, (MR_Integer) 0, &_NumWarnings_14, (MR_Integer) 0, &NumErrors_15);
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_15, STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_17);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Termination 2 checking done.\n");
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
        }
        break;
    }
  }
}

static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_16,
  MR_Word * STATE_VARIABLE_HLDS_17)
{
  {
    MR_Word Globals_11;
    MR_Word Termination_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_16, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 438, &Termination_12);
    switch (Termination_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_17 = STATE_VARIABLE_HLDS_0_16;
        break;
      case (MR_Integer) 1:
        {
          MR_Word Specs_13;
          MR_Integer NumErrors_15;
          MR_Word STATE_VARIABLE_HLDS_23_23;
          MR_Integer _NumWarnings_14;

          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Detecting termination...\n");
          transform_hlds__termination__analyse_termination_in_module_3_p_0(STATE_VARIABLE_HLDS_0_16, &STATE_VARIABLE_HLDS_23_23, &Specs_13);
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Termination checking done.\n");
          parse_tree__error_util__write_error_specs_8_p_0(Specs_13, Globals_11, (MR_Integer) 0, &_NumWarnings_14, (MR_Integer) 0, &NumErrors_15);
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_15, STATE_VARIABLE_HLDS_23_23, STATE_VARIABLE_HLDS_17);
          libs__file_util__maybe_report_stats_3_p_0(Stats_8);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 453, &ExceptionAnalysis_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 454, &ClosureAnalysis_12);
    switch (ClosureAnalysis_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_HLDS_14 = STATE_VARIABLE_HLDS_0_13;
        break;
      case (MR_Integer) 1:
        {
          libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Analysing closures...\n");
          transform_hlds__closure_analysis__closure_analyse_module_4_p_0(STATE_VARIABLE_HLDS_0_13, STATE_VARIABLE_HLDS_14);
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
top_level__mercury_compile_middle_passes__tabling_6_p_0(
  MR_Word Verbose_7,
  MR_Word Stats_8,
  MR_Word STATE_VARIABLE_HLDS_0_15,
  MR_Word * STATE_VARIABLE_HLDS_16)
{
  {
    MR_Word Specs_11;
    MR_Word Globals_12;
    MR_Integer NumErrors_14;
    MR_Word STATE_VARIABLE_HLDS_22_22;
    MR_Integer _NumWarnings_13;

    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) "% Transforming tabled predicates...");
    libs__file_util__maybe_flush_output_3_p_0(Verbose_7);
    transform_hlds__table_gen__table_gen_process_module_4_p_0(STATE_VARIABLE_HLDS_0_15, &STATE_VARIABLE_HLDS_22_22, (MR_Word) ((MR_Unsigned) 0U), &Specs_11);
    libs__file_util__maybe_write_string_4_p_0(Verbose_7, (MR_String) " done.\n");
    libs__file_util__maybe_report_stats_3_p_0(Stats_8);
    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_22_22, &Globals_12);
    parse_tree__error_util__write_error_specs_8_p_0(Specs_11, Globals_12, (MR_Integer) 0, &_NumWarnings_13, (MR_Integer) 0, &NumErrors_14);
    hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_14, STATE_VARIABLE_HLDS_22_22, STATE_VARIABLE_HLDS_16);
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
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 235, &FileName_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 233, &RecordTermSizesAsWords_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 234, &RecordTermSizesAsCells_10);
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
            libs__file_util__report_error_3_p_0((MR_String) "the --experimental-complexity option requires a term size profiling grade");
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
top_level__mercury_compile_middle_passes__maybe_unused_args_7_p_0(
  MR_Word Verbose_8,
  MR_Word Stats_9,
  MR_Word * UnusedArgsInfos_10,
  MR_Word STATE_VARIABLE_HLDS_0_20,
  MR_Word * STATE_VARIABLE_HLDS_21)
{
  {
    MR_bool succeeded;
    MR_Word Globals_13;
    MR_Word Intermod_14;
    MR_Word Optimize_15;
    MR_Word Warn_16;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_20, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 374, &Intermod_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 373, &Optimize_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 11, &Warn_16);
    succeeded = (Optimize_15 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (Warn_16 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (Intermod_14 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word Specs_17;
      MR_Integer NumErrors_19;
      MR_Word STATE_VARIABLE_HLDS_30_30;
      MR_Integer _NumWarnings_18;

      libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) "% Finding unused arguments ...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_8);
      transform_hlds__unused_args__unused_args_process_module_4_p_0(STATE_VARIABLE_HLDS_0_20, &STATE_VARIABLE_HLDS_30_30, &Specs_17, UnusedArgsInfos_10);
      parse_tree__error_util__write_error_specs_8_p_0(Specs_17, Globals_13, (MR_Integer) 0, &_NumWarnings_18, (MR_Integer) 0, &NumErrors_19);
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(NumErrors_19, STATE_VARIABLE_HLDS_30_30, STATE_VARIABLE_HLDS_21);
      libs__file_util__maybe_write_string_4_p_0(Verbose_8, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_9);
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfos_10);
      *STATE_VARIABLE_HLDS_21 = STATE_VARIABLE_HLDS_0_20;
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
