/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version rotd-2020-03-25
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
#include "enum.mih"
#include "getopt_io.mih"
#include "hlds.mih"
#include "int.mih"
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
#include "hlds.passes_aux.mih"
#include "hlds.pred_table.mih"
#include "hlds.special_pred.mih"
#include "hlds.status.mih"
#include "hlds.vartypes.mih"
#include "libs.dependency_graph.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
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
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "string.format.mih"
#include "string.parse_util.mih"
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
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__784__1_2_p_0(
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
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25);

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
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0_1)),
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
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__784__1_2_p_0(
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 65, &Verbose_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 75, &Stats_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 462, &ClosureAnalysis_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 438, &SharingAnalysis_16);
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
  MR_Word STATE_VARIABLE_HLDS_0_33,
  MR_Word STATE_VARIABLE_Specs_0_34,
  MR_Word * STATE_VARIABLE_Specs_35,
  MR_Word STATE_VARIABLE_DumpInfo_0_36,
  MR_Word * STATE_VARIABLE_DumpInfo_37)
{
  {
    MR_bool succeeded;
    MR_Word Globals_12;
    MR_Word Verbose_13;
    MR_Word Stats_14;
    MR_Word ClosureAnalysis_15;
    MR_Word SharingAnalysis_16;
    MR_Word ModuleName_17;
    MR_String TmpOptName_18;
    MR_Word TmpOptResult_19;
    MR_Word STATE_VARIABLE_HLDS_44_44;
    MR_Word STATE_VARIABLE_DumpInfo_48_48;
    MR_Word STATE_VARIABLE_HLDS_50_50;
    MR_Word STATE_VARIABLE_DumpInfo_54_54;
    MR_Word STATE_VARIABLE_HLDS_56_56;
    MR_Word STATE_VARIABLE_DumpInfo_60_60;
    MR_Word STATE_VARIABLE_HLDS_62_62;
    MR_Word STATE_VARIABLE_Specs_63_63;
    MR_Word STATE_VARIABLE_DumpInfo_67_67;
    MR_Word STATE_VARIABLE_HLDS_69_69;
    MR_Word STATE_VARIABLE_DumpInfo_74_74;
    MR_Word STATE_VARIABLE_HLDS_95_95;
    MR_Word STATE_VARIABLE_DumpInfo_99_99;
    MR_Word STATE_VARIABLE_HLDS_101_101;
    MR_Word STATE_VARIABLE_DumpInfo_105_105;
    MR_Word STATE_VARIABLE_HLDS_107_107;
    MR_Word STATE_VARIABLE_DumpInfo_111_111;
    MR_Word STATE_VARIABLE_HLDS_113_113;
    MR_Word STATE_VARIABLE_DumpInfo_117_117;
    MR_Word STATE_VARIABLE_HLDS_119_119;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_33, &Globals_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 65, &Verbose_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 75, &Stats_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 462, &ClosureAnalysis_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 438, &SharingAnalysis_16);
    succeeded = (ClosureAnalysis_15 == (MR_Integer) 1);
    if (!(succeeded))
      succeeded = (SharingAnalysis_16 == (MR_Integer) 1);
    if (succeeded)
      top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_0_33, &STATE_VARIABLE_HLDS_44_44);
    else
      STATE_VARIABLE_HLDS_44_44 = STATE_VARIABLE_HLDS_0_33;
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_44_44, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_0_36, &STATE_VARIABLE_DumpInfo_48_48);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_44_44, &STATE_VARIABLE_HLDS_50_50);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_50_50, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_48_48, &STATE_VARIABLE_DumpInfo_54_54);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_50_50, &STATE_VARIABLE_HLDS_56_56);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_56_56, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_54_54, &STATE_VARIABLE_DumpInfo_60_60);
    top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_56_56, &STATE_VARIABLE_HLDS_62_62, STATE_VARIABLE_Specs_0_34, &STATE_VARIABLE_Specs_63_63);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_62_62, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_60_60, &STATE_VARIABLE_DumpInfo_67_67);
    top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_62_62, &STATE_VARIABLE_HLDS_69_69, STATE_VARIABLE_Specs_63_63, STATE_VARIABLE_Specs_35);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_69_69, (MR_Integer) 121, (MR_String) "termination_2", STATE_VARIABLE_DumpInfo_67_67, &STATE_VARIABLE_DumpInfo_74_74);
    switch (SharingAnalysis_16) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          STATE_VARIABLE_HLDS_95_95 = STATE_VARIABLE_HLDS_69_69;
          STATE_VARIABLE_DumpInfo_99_99 = STATE_VARIABLE_DumpInfo_74_74;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word STATE_VARIABLE_HLDS_76_76;
          MR_Word STATE_VARIABLE_DumpInfo_80_80;
          MR_Word STATE_VARIABLE_HLDS_82_82;
          MR_Word STATE_VARIABLE_DumpInfo_86_86;
          MR_Word STATE_VARIABLE_HLDS_88_88;
          MR_Word STATE_VARIABLE_DumpInfo_89_89;
          MR_Word STATE_VARIABLE_DumpInfo_93_93;

          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_69_69, &STATE_VARIABLE_HLDS_76_76);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_76_76, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_74_74, &STATE_VARIABLE_DumpInfo_80_80);
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_76_76, &STATE_VARIABLE_HLDS_82_82);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_82_82, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_80_80, &STATE_VARIABLE_DumpInfo_86_86);
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_82_82, &STATE_VARIABLE_HLDS_88_88, STATE_VARIABLE_DumpInfo_86_86, &STATE_VARIABLE_DumpInfo_89_89);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_88_88, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_89_89, &STATE_VARIABLE_DumpInfo_93_93);
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_88_88, &STATE_VARIABLE_HLDS_95_95);
          hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_95_95, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_93_93, &STATE_VARIABLE_DumpInfo_99_99);
        }
        break;
    }
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_95_95, &STATE_VARIABLE_HLDS_101_101);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_101_101, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_99_99, &STATE_VARIABLE_DumpInfo_105_105);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_101_101, &STATE_VARIABLE_HLDS_107_107);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_107_107, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_105_105, &STATE_VARIABLE_DumpInfo_111_111);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_107_107, &STATE_VARIABLE_HLDS_113_113);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_113_113, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_111_111, &STATE_VARIABLE_DumpInfo_117_117);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_13, Stats_14, STATE_VARIABLE_HLDS_113_113, &STATE_VARIABLE_HLDS_119_119);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_119_119, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_117_117, STATE_VARIABLE_DumpInfo_37);
    hlds__hlds_module__module_info_get_name_2_p_0(STATE_VARIABLE_HLDS_119_119, &ModuleName_17);
    parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_12, (MR_Integer) 0, (MR_String) ".trans_opt.tmp", ModuleName_17, &TmpOptName_18);
    mercury__io__open_output_4_p_0(TmpOptName_18, &TmpOptResult_19);
    if (((MR_tag((MR_Word) TmpOptResult_19)) == (MR_Integer) 1))
    {
      MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TmpOptResult_19, (MR_Integer) 0))));
      MR_String ProgName_21;
      MR_String ErrorMsg_22;

      mercury__io__progname_base_4_p_0((MR_String) "mmc", &ProgName_21);
      mercury__io__error_message_2_p_0(Error_20, &ErrorMsg_22);
      mercury__io__write_string_3_p_0(ProgName_21);
      mercury__io__write_string_3_p_0((MR_String) ": cannot open \140");
      mercury__io__write_string_3_p_0(TmpOptName_18);
      mercury__io__write_string_3_p_0((MR_String) "\' for output: ");
      mercury__io__write_string_3_p_0(ErrorMsg_22);
      mercury__io__write_string_3_p_0((MR_String) "\n");
      mercury__io__set_exit_status_3_p_0((MR_Integer) 1);
    }
    else
    {
      MR_Word TmpOptStream_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TmpOptResult_19, (MR_Integer) 0))));
      MR_Word ParseTreeTransOpt_24;
      MR_String OptName_25;
      MR_Word Experiment5_26;

      transform_hlds__intermod__write_trans_opt_file_5_p_0(TmpOptStream_23, STATE_VARIABLE_HLDS_119_119, &ParseTreeTransOpt_24);
      mercury__io__close_output_3_p_0(TmpOptStream_23);
      parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_12, (MR_Integer) 1, (MR_String) ".trans_opt", ModuleName_17, &OptName_25);
      parse_tree__module_cmds__update_interface_4_p_0(Globals_12, OptName_25);
      parse_tree__module_cmds__touch_interface_datestamp_5_p_0(Globals_12, ModuleName_17, (MR_String) ".trans_opt_date");
      libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 705, &Experiment5_26);
      switch (Experiment5_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word OptXResult_27;
            MR_String Var_138;

            Var_138 = mercury__string__f_43_43_2_f_0(OptName_25, (MR_String) "x");
            mercury__io__open_output_4_p_0(Var_138, &OptXResult_27);
            if (!(((MR_tag((MR_Word) OptXResult_27)) == (MR_Integer) 1)))
            {
              MR_Word OptXStream_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptXResult_27, (MR_Integer) 0))));
              MR_Word Info_30;
              MR_Word OldOutputStream_31;
              MR_Word Var_32;

              Info_30 = parse_tree__parse_tree_out_info__init_merc_out_info_3_f_0(Globals_12, (MR_Integer) 0, (MR_Integer) 0);
              mercury__io__set_output_stream_4_p_0(OptXStream_29, &OldOutputStream_31);
              parse_tree__parse_tree_out__mercury_output_parse_tree_trans_opt_4_p_0(Info_30, ParseTreeTransOpt_24);
              mercury__io__set_output_stream_4_p_0(OldOutputStream_31, &Var_32);
              mercury__io__close_output_3_p_0(OptXStream_29);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 65, &Verbose_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 75, &Stats_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 462, &ClosureAnalysis_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_12, (MR_Integer) 438, &SharingAnalysis_16);
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
    MR_Word STATE_VARIABLE_DumpInfo_48_48;
    MR_Word STATE_VARIABLE_HLDS_50_50;
    MR_Word STATE_VARIABLE_DumpInfo_54_54;
    MR_Word STATE_VARIABLE_HLDS_56_56;
    MR_Word STATE_VARIABLE_DumpInfo_60_60;
    MR_Word STATE_VARIABLE_HLDS_62_62;
    MR_Word STATE_VARIABLE_DumpInfo_66_66;
    MR_Word STATE_VARIABLE_HLDS_68_68;
    MR_Word STATE_VARIABLE_Specs_69_69;
    MR_Word STATE_VARIABLE_DumpInfo_73_73;
    MR_Word STATE_VARIABLE_HLDS_75_75;
    MR_Word STATE_VARIABLE_Specs_76_76;
    MR_Word STATE_VARIABLE_DumpInfo_80_80;
    MR_Word STATE_VARIABLE_HLDS_82_82;
    MR_Word STATE_VARIABLE_DumpInfo_86_86;
    MR_Word STATE_VARIABLE_HLDS_88_88;
    MR_Word STATE_VARIABLE_Specs_89_89;
    MR_Word STATE_VARIABLE_DumpInfo_93_93;
    MR_Word STATE_VARIABLE_DumpInfo_95_95;
    MR_Word STATE_VARIABLE_HLDS_97_97;
    MR_Word STATE_VARIABLE_DumpInfo_101_101;
    MR_Word STATE_VARIABLE_HLDS_103_103;
    MR_Word STATE_VARIABLE_DumpInfo_107_107;
    MR_Word STATE_VARIABLE_HLDS_109_109;
    MR_Word STATE_VARIABLE_DumpInfo_113_113;
    MR_Word STATE_VARIABLE_HLDS_115_115;
    MR_Word STATE_VARIABLE_DumpInfo_119_119;
    MR_Word STATE_VARIABLE_HLDS_121_121;
    MR_Word STATE_VARIABLE_Specs_122_122;
    MR_Word STATE_VARIABLE_DumpInfo_126_126;
    MR_Word STATE_VARIABLE_HLDS_128_128;
    MR_Word STATE_VARIABLE_DumpInfo_132_132;
    MR_Word STATE_VARIABLE_HLDS_134_134;
    MR_Word STATE_VARIABLE_DumpInfo_135_135;
    MR_Word STATE_VARIABLE_DumpInfo_139_139;
    MR_Word STATE_VARIABLE_HLDS_141_141;
    MR_Word STATE_VARIABLE_DumpInfo_145_145;
    MR_Word STATE_VARIABLE_HLDS_147_147;
    MR_Word STATE_VARIABLE_DumpInfo_151_151;
    MR_Word STATE_VARIABLE_HLDS_153_153;
    MR_Word STATE_VARIABLE_DumpInfo_157_157;
    MR_Word STATE_VARIABLE_HLDS_159_159;
    MR_Word STATE_VARIABLE_DumpInfo_163_163;
    MR_Word STATE_VARIABLE_HLDS_165_165;
    MR_Word STATE_VARIABLE_Specs_166_166;
    MR_Word STATE_VARIABLE_DumpInfo_170_170;
    MR_Word STATE_VARIABLE_HLDS_172_172;
    MR_Word STATE_VARIABLE_DumpInfo_176_176;
    MR_Word STATE_VARIABLE_HLDS_178_178;
    MR_Word STATE_VARIABLE_DumpInfo_182_182;
    MR_Word STATE_VARIABLE_HLDS_186_186;
    MR_Word STATE_VARIABLE_DumpInfo_191_191;
    MR_Word STATE_VARIABLE_HLDS_193_193;
    MR_Word STATE_VARIABLE_DumpInfo_197_197;
    MR_Word STATE_VARIABLE_HLDS_199_199;
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
    MR_Word STATE_VARIABLE_DumpInfo_240_240;
    MR_Word STATE_VARIABLE_HLDS_244_244;
    MR_Word STATE_VARIABLE_DumpInfo_249_249;
    MR_Word STATE_VARIABLE_HLDS_251_251;
    MR_Word STATE_VARIABLE_DumpInfo_255_255;
    MR_Word STATE_VARIABLE_HLDS_257_257;
    MR_Word STATE_VARIABLE_DumpInfo_261_261;
    MR_Word STATE_VARIABLE_HLDS_263_263;
    MR_Word STATE_VARIABLE_DumpInfo_267_267;
    MR_Word STATE_VARIABLE_HLDS_269_269;
    MR_Word STATE_VARIABLE_DumpInfo_273_273;
    MR_Word STATE_VARIABLE_DumpInfo_279_279;
    MR_Word _UnusedArgsInfos_16;
    MR_Word _SimplifySpecsPreImpPar_17;
    MR_Word _SimplifySpecsPreProf_18;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_19, &Globals_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 65, &Verbose_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 75, &Stats_15);
    top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(STATE_VARIABLE_HLDS_0_19, &STATE_VARIABLE_HLDS_29_29);
    top_level__mercury_compile_middle_passes__tabling_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_29_29, &STATE_VARIABLE_HLDS_31_31, STATE_VARIABLE_Specs_0_23, &STATE_VARIABLE_Specs_32_32);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_31_31, (MR_Integer) 105, (MR_String) "tabling", STATE_VARIABLE_DumpInfo_0_21, &STATE_VARIABLE_DumpInfo_36_36);
    top_level__mercury_compile_middle_passes__expand_lambdas_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_31_31, &STATE_VARIABLE_HLDS_38_38);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_38_38, (MR_Integer) 110, (MR_String) "lambda", STATE_VARIABLE_DumpInfo_36_36, &STATE_VARIABLE_DumpInfo_42_42);
    top_level__mercury_compile_middle_passes__expand_stm_goals_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_38_38, &STATE_VARIABLE_HLDS_44_44);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_44_44, (MR_Integer) 113, (MR_String) "stm", STATE_VARIABLE_DumpInfo_42_42, &STATE_VARIABLE_DumpInfo_48_48);
    top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_44_44, &STATE_VARIABLE_HLDS_50_50);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_50_50, (MR_Integer) 115, (MR_String) "equiv_types", STATE_VARIABLE_DumpInfo_48_48, &STATE_VARIABLE_DumpInfo_54_54);
    top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_50_50, &STATE_VARIABLE_HLDS_56_56);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_56_56, (MR_Integer) 117, (MR_String) "closure_analysis", STATE_VARIABLE_DumpInfo_54_54, &STATE_VARIABLE_DumpInfo_60_60);
    top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_56_56, &STATE_VARIABLE_HLDS_62_62);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_62_62, (MR_Integer) 118, (MR_String) "exception_analysis", STATE_VARIABLE_DumpInfo_60_60, &STATE_VARIABLE_DumpInfo_66_66);
    top_level__mercury_compile_middle_passes__maybe_termination_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_62_62, &STATE_VARIABLE_HLDS_68_68, STATE_VARIABLE_Specs_32_32, &STATE_VARIABLE_Specs_69_69);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_68_68, (MR_Integer) 120, (MR_String) "termination", STATE_VARIABLE_DumpInfo_66_66, &STATE_VARIABLE_DumpInfo_73_73);
    top_level__mercury_compile_middle_passes__maybe_termination2_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_68_68, &STATE_VARIABLE_HLDS_75_75, STATE_VARIABLE_Specs_69_69, &STATE_VARIABLE_Specs_76_76);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_75_75, (MR_Integer) 121, (MR_String) "termination2", STATE_VARIABLE_DumpInfo_73_73, &STATE_VARIABLE_DumpInfo_80_80);
    top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_75_75, &STATE_VARIABLE_HLDS_82_82);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_82_82, (MR_Integer) 125, (MR_String) "type_ctor_infos", STATE_VARIABLE_DumpInfo_80_80, &STATE_VARIABLE_DumpInfo_86_86);
    top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_82_82, &STATE_VARIABLE_HLDS_88_88, STATE_VARIABLE_Specs_76_76, &STATE_VARIABLE_Specs_89_89);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_88_88, (MR_Integer) 130, (MR_String) "warn_dead_procs", STATE_VARIABLE_DumpInfo_86_86, &STATE_VARIABLE_DumpInfo_93_93);
    top_level__mercury_compile_middle_passes__maybe_bytecodes_7_p_0(STATE_VARIABLE_HLDS_88_88, Verbose_14, Stats_15, STATE_VARIABLE_DumpInfo_93_93, &STATE_VARIABLE_DumpInfo_95_95);
    top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_88_88, &STATE_VARIABLE_HLDS_97_97);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_97_97, (MR_Integer) 133, (MR_String) "untupling", STATE_VARIABLE_DumpInfo_95_95, &STATE_VARIABLE_DumpInfo_101_101);
    top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_97_97, &STATE_VARIABLE_HLDS_103_103);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_103_103, (MR_Integer) 134, (MR_String) "tupling", STATE_VARIABLE_DumpInfo_101_101, &STATE_VARIABLE_DumpInfo_107_107);
    top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_103_103, &STATE_VARIABLE_HLDS_109_109);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_109_109, (MR_Integer) 135, (MR_String) "higher_order", STATE_VARIABLE_DumpInfo_107_107, &STATE_VARIABLE_DumpInfo_113_113);
    top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_109_109, &STATE_VARIABLE_HLDS_115_115);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_115_115, (MR_Integer) 137, (MR_String) "ssdb", STATE_VARIABLE_DumpInfo_113_113, &STATE_VARIABLE_DumpInfo_119_119);
    top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_115_115, &STATE_VARIABLE_HLDS_121_121, STATE_VARIABLE_Specs_89_89, &STATE_VARIABLE_Specs_122_122);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_121_121, (MR_Integer) 140, (MR_String) "accum", STATE_VARIABLE_DumpInfo_119_119, &STATE_VARIABLE_DumpInfo_126_126);
    top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_121_121, &STATE_VARIABLE_HLDS_128_128);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_128_128, (MR_Integer) 145, (MR_String) "inlining", STATE_VARIABLE_DumpInfo_126_126, &STATE_VARIABLE_DumpInfo_132_132);
    top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_128_128, &STATE_VARIABLE_HLDS_134_134, STATE_VARIABLE_DumpInfo_132_132, &STATE_VARIABLE_DumpInfo_135_135);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_134_134, (MR_Integer) 150, (MR_String) "loop_inv", STATE_VARIABLE_DumpInfo_135_135, &STATE_VARIABLE_DumpInfo_139_139);
    top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_134_134, &STATE_VARIABLE_HLDS_141_141);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_141_141, (MR_Integer) 155, (MR_String) "deforestation", STATE_VARIABLE_DumpInfo_139_139, &STATE_VARIABLE_DumpInfo_145_145);
    top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_141_141, &STATE_VARIABLE_HLDS_147_147);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_147_147, (MR_Integer) 160, (MR_String) "delay_construct", STATE_VARIABLE_DumpInfo_145_145, &STATE_VARIABLE_DumpInfo_151_151);
    top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_147_147, &STATE_VARIABLE_HLDS_153_153);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_153_153, (MR_Integer) 162, (MR_String) "structure_sharing", STATE_VARIABLE_DumpInfo_151_151, &STATE_VARIABLE_DumpInfo_157_157);
    top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_153_153, &STATE_VARIABLE_HLDS_159_159);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_159_159, (MR_Integer) 163, (MR_String) "structure_reuse", STATE_VARIABLE_DumpInfo_157_157, &STATE_VARIABLE_DumpInfo_163_163);
    top_level__mercury_compile_middle_passes__maybe_unused_args_9_p_0(Verbose_14, Stats_15, &_UnusedArgsInfos_16, STATE_VARIABLE_HLDS_159_159, &STATE_VARIABLE_HLDS_165_165, STATE_VARIABLE_Specs_122_122, &STATE_VARIABLE_Specs_166_166);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_165_165, (MR_Integer) 165, (MR_String) "unused_args", STATE_VARIABLE_DumpInfo_163_163, &STATE_VARIABLE_DumpInfo_170_170);
    top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_165_165, &STATE_VARIABLE_HLDS_172_172);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_172_172, (MR_Integer) 167, (MR_String) "trail_usage", STATE_VARIABLE_DumpInfo_170_170, &STATE_VARIABLE_DumpInfo_176_176);
    top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_172_172, &STATE_VARIABLE_HLDS_178_178);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_178_178, (MR_Integer) 170, (MR_String) "unneeded_code", STATE_VARIABLE_DumpInfo_176_176, &STATE_VARIABLE_DumpInfo_182_182);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, Verbose_14, Stats_15, STATE_VARIABLE_HLDS_178_178, &STATE_VARIABLE_HLDS_186_186, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreImpPar_17);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_186_186, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", STATE_VARIABLE_DumpInfo_182_182, &STATE_VARIABLE_DumpInfo_191_191);
    top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_186_186, &STATE_VARIABLE_HLDS_193_193);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_193_193, (MR_Integer) 173, (MR_String) "implicit_parallelism", STATE_VARIABLE_DumpInfo_191_191, &STATE_VARIABLE_DumpInfo_197_197);
    top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_193_193, &STATE_VARIABLE_HLDS_199_199);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_199_199, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", STATE_VARIABLE_DumpInfo_197_197, &STATE_VARIABLE_DumpInfo_203_203);
    top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_199_199, &STATE_VARIABLE_HLDS_205_205);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_205_205, (MR_Integer) 200, (MR_String) "granularity", STATE_VARIABLE_DumpInfo_203_203, &STATE_VARIABLE_DumpInfo_209_209);
    top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_205_205, &STATE_VARIABLE_HLDS_211_211);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_211_211, (MR_Integer) 201, (MR_String) "distance_granularity", STATE_VARIABLE_DumpInfo_209_209, &STATE_VARIABLE_DumpInfo_215_215);
    top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_211_211, &STATE_VARIABLE_HLDS_217_217);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_217_217, (MR_Integer) 205, (MR_String) "dependent_par_conj", STATE_VARIABLE_DumpInfo_215_215, &STATE_VARIABLE_DumpInfo_221_221);
    top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_217_217, &STATE_VARIABLE_HLDS_223_223);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_223_223, (MR_Integer) 206, (MR_String) "par_loop_control", STATE_VARIABLE_DumpInfo_221_221, &STATE_VARIABLE_DumpInfo_227_227);
    top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_223_223, &STATE_VARIABLE_HLDS_229_229);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_229_229, (MR_Integer) 210, (MR_String) "lco", STATE_VARIABLE_DumpInfo_227_227, &STATE_VARIABLE_DumpInfo_233_233);
    top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_8_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_229_229, &STATE_VARIABLE_HLDS_235_235, STATE_VARIABLE_Specs_166_166, STATE_VARIABLE_Specs_24);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_235_235, (MR_Integer) 213, (MR_String) "float_reg_wrapper", STATE_VARIABLE_DumpInfo_233_233, &STATE_VARIABLE_DumpInfo_240_240);
    top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, Verbose_14, Stats_15, STATE_VARIABLE_HLDS_235_235, &STATE_VARIABLE_HLDS_244_244, (MR_Word) ((MR_Unsigned) 0U), &_SimplifySpecsPreProf_18);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_244_244, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", STATE_VARIABLE_DumpInfo_240_240, &STATE_VARIABLE_DumpInfo_249_249);
    top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_244_244, &STATE_VARIABLE_HLDS_251_251);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_251_251, (MR_Integer) 220, (MR_String) "term_size_prof", STATE_VARIABLE_DumpInfo_249_249, &STATE_VARIABLE_DumpInfo_255_255);
    top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_251_251, &STATE_VARIABLE_HLDS_257_257);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_257_257, (MR_Integer) 225, (MR_String) "deep_profiling", STATE_VARIABLE_DumpInfo_255_255, &STATE_VARIABLE_DumpInfo_261_261);
    top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_257_257, &STATE_VARIABLE_HLDS_263_263);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_263_263, (MR_Integer) 230, (MR_String) "complexity", STATE_VARIABLE_DumpInfo_261_261, &STATE_VARIABLE_DumpInfo_267_267);
    top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_263_263, &STATE_VARIABLE_HLDS_269_269);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(STATE_VARIABLE_HLDS_269_269, (MR_Integer) 240, (MR_String) "region_analysis", STATE_VARIABLE_DumpInfo_267_267, &STATE_VARIABLE_DumpInfo_273_273);
    top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(Verbose_14, Stats_15, STATE_VARIABLE_HLDS_269_269, STATE_VARIABLE_HLDS_20);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_20, (MR_Integer) 250, (MR_String) "dead_procs", STATE_VARIABLE_DumpInfo_273_273, &STATE_VARIABLE_DumpInfo_279_279);
    hlds__passes_aux__maybe_dump_hlds_7_p_0(*STATE_VARIABLE_HLDS_20, (MR_Integer) 299, (MR_String) "middle_pass", STATE_VARIABLE_DumpInfo_279_279, STATE_VARIABLE_DumpInfo_22);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 419, &Dead_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 437, &Analysis_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 222, &ProfileDeep_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 239, &AsWords_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 240, &AsCells_13);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 286, &UseFloatRegs_15);
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
              hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) (MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[1])), STATE_VARIABLE_HLDS_0_14, STATE_VARIABLE_HLDS_15);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 243, &Parallel_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 287, &HighLevelCode_13);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 243, &Parallel_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 287, &HighLevelCode_13);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 428, &TablingAnalysis_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 395, &LCO_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 386, &UnneededCode_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 425, &AnalyseTrail_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 440, &ReuseAnalysis_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 438, &Sharing_12);
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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word DelayConstruct_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 417, &DelayConstruct_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 420, &Deforest_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 380, &Constraints_13);
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
                mercury__require__unexpected_2_p_0((MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", (MR_String) "no no");
                return;
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
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 416, &LoopInv_15);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 363, &Allow_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 365, &Simple_13);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 367, &SingleUse_14);
    libs__globals__lookup_int_option_3_p_0(Globals_11, (MR_Integer) 369, &Threshold_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 373, &LinearRec_16);
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
  MR_Word STATE_VARIABLE_HLDS_0_22,
  MR_Word * STATE_VARIABLE_HLDS_23,
  MR_Word STATE_VARIABLE_Specs_0_24,
  MR_Word * STATE_VARIABLE_Specs_25)
{
  {
    MR_bool succeeded;
    MR_Word Globals_14;
    MR_Word Optimize_15;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_22, &Globals_14);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 392, &Optimize_15);
    switch (Optimize_15) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_HLDS_23 = STATE_VARIABLE_HLDS_0_22;
          *STATE_VARIABLE_Specs_25 = STATE_VARIABLE_Specs_0_24;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Cookie0_16;
          MR_Word Task0_17;
          MR_Word Task_18;
          MR_Word AccSpecs_21;
          MR_Word Cookie_20;
          MR_Box conv3_AccSpecs_21;

          libs__file_util__maybe_write_string_4_p_0(Verbose_9, (MR_String) "% Attempting to introduce accumulators...\n");
          libs__file_util__maybe_flush_output_3_p_0(Verbose_9);
          mercury__univ__type_to_univ_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), ((MR_Box) ((MR_Unsigned) 0U)), &Cookie0_16);
          {
            Task0_17 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(3), Task0_17, 0) = ((MR_Box) ((MR_Unsigned) 3U));
            MR_hl_field(MR_mktag(3), Task0_17, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
            MR_hl_field(MR_mktag(3), Task0_17, 2) = ((MR_Box) (Cookie0_16));
          }
          hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(Task0_17, &Task_18, STATE_VARIABLE_HLDS_0_22, STATE_VARIABLE_HLDS_23);
          succeeded = ((((MR_tag((MR_Word) Task_18)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Task_18, (MR_Integer) 0)))) == (MR_Integer) 3)));
          if (succeeded)
          {
            Cookie_20 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Task_18, (MR_Integer) 2))));
            succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) (&top_level__mercury_compile_middle_passes_scalar_common_1[1]), Cookie_20, &conv3_AccSpecs_21);
            if (succeeded)
            {
              AccSpecs_21 = ((MR_Word) (conv3_AccSpecs_21));
              succeeded = MR_TRUE;
            }
          }
          if (succeeded)
            *STATE_VARIABLE_Specs_25 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), AccSpecs_21, STATE_VARIABLE_Specs_0_24);
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
  MR_Word STATE_VARIABLE_HLDS_0_13,
  MR_Word * STATE_VARIABLE_HLDS_14)
{
  {
    MR_Word Globals_11;
    MR_Word ImplicitParallelism_12;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_13, &Globals_11);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 709, &ImplicitParallelism_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 155, &ForceDisableSSDB_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 383, &HigherOrder_12);
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 391, &Types_13);
    hlds__hlds_module__module_info_get_type_spec_info_2_p_0(STATE_VARIABLE_HLDS_0_19, &TypeSpecInfo_14);
    TypeSpecPreds_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeSpecInfo_14, (MR_Integer) 0))));
    succeeded = (HigherOrder_12 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (Types_13 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) (&hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0), TypeSpecPreds_15);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 430, &Tuple_12);
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

    succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__784__1_2_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))));
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 429, &Untuple_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_13, (MR_Integer) 156, &GenBytecode_14);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 41, &WarnDeadProcs_15);
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 42, &WarnDeadPreds_16);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 306, &TypeCtorInfo_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 453, &Termination2_15);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_14, (MR_Integer) 446, &Termination_15);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 461, &ExceptionAnalysis_12);
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
    libs__globals__lookup_bool_option_3_p_0(Globals_11, (MR_Integer) 462, &ClosureAnalysis_12);
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
    libs__globals__lookup_string_option_3_p_0(Globals_7, (MR_Integer) 241, &FileName_8);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 239, &RecordTermSizesAsWords_9);
    libs__globals__lookup_bool_option_3_p_0(Globals_7, (MR_Integer) 240, &RecordTermSizesAsCells_10);
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
          libs__file_util__report_error_3_p_0((MR_String) "the --experimental-complexity option requires a term size profiling grade");
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
  MR_Word STATE_VARIABLE_HLDS_0_21,
  MR_Word * STATE_VARIABLE_HLDS_22,
  MR_Word STATE_VARIABLE_Specs_0_23,
  MR_Word * STATE_VARIABLE_Specs_24)
{
  {
    MR_bool succeeded;
    MR_Word Globals_16;
    MR_Word Intermod_17;
    MR_Word Optimize_18;
    MR_Word Warn_19;

    hlds__hlds_module__module_info_get_globals_2_p_0(STATE_VARIABLE_HLDS_0_21, &Globals_16);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 382, &Intermod_17);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 381, &Optimize_18);
    libs__globals__lookup_bool_option_3_p_0(Globals_16, (MR_Integer) 13, &Warn_19);
    succeeded = (Optimize_18 == (MR_Integer) 1);
    if (!(succeeded))
    {
      succeeded = (Warn_19 == (MR_Integer) 1);
      if (!(succeeded))
        succeeded = (Intermod_17 == (MR_Integer) 1);
    }
    if (succeeded)
    {
      MR_Word UnusedSpecs_20;

      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% Finding unused arguments ...\n");
      libs__file_util__maybe_flush_output_3_p_0(Verbose_10);
      transform_hlds__unused_args__unused_args_process_module_4_p_0(STATE_VARIABLE_HLDS_0_21, STATE_VARIABLE_HLDS_22, &UnusedSpecs_20, UnusedArgsInfos_12);
      *STATE_VARIABLE_Specs_24 = mercury__list__f_43_43_2_f_0((MR_Word) (&parse_tree__error_util__parse_tree__error_util__type_ctor_info_error_spec_0), UnusedSpecs_20, STATE_VARIABLE_Specs_0_23);
      libs__file_util__maybe_write_string_4_p_0(Verbose_10, (MR_String) "% done.\n");
      libs__file_util__maybe_report_stats_3_p_0(Stats_11);
    }
    else
    {
      mercury__set__init_1_p_0((MR_Word) (&parse_tree__prog_item__parse_tree__prog_item__type_ctor_info_pragma_info_unused_args_0), UnusedArgsInfos_12);
      *STATE_VARIABLE_Specs_24 = STATE_VARIABLE_Specs_0_23;
      *STATE_VARIABLE_HLDS_22 = STATE_VARIABLE_HLDS_0_21;
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
