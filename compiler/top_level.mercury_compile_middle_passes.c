/*
** Automatically generated from `mercury_compile_middle_passes.m'
** by the Mercury compiler,
** version rotd-2015-05-05
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


/* :- module top_level.mercury_compile_middle_passes. */
/* :- implementation. */

/*
INIT mercury__top_level__mercury_compile_middle_passes__init
ENDINIT
*/

#include "top_level.mercury_compile_middle_passes.mih"


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
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
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
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "backend_libs.builtin_ops.mih"
#include "backend_libs.foreign.mih"
#include "backend_libs.rtti.mih"
#include "backend_libs.type_ctor_info.mih"
#include "bytecode_backend.bytecode.mih"
#include "bytecode_backend.bytecode_gen.mih"
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
#include "ll_backend.deep_profiling.mih"
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
#include "ml_backend.ml_global_data.mih"
#include "ml_backend.mlds.mih"
#include "mode_robdd.tfeirn.mih"
#include "parse_tree.equiv_type.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.file_names.mih"
#include "parse_tree.module_imports.mih"
#include "parse_tree.module_qual.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_foreign.mih"
#include "parse_tree.prog_io_error.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.prog_type.mih"
#include "parse_tree.set_of_var.mih"
#include "top_level.mercury_compile.mih"
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
#include "transform_hlds.term_errors.mih"
#include "transform_hlds.term_norm.mih"
#include "transform_hlds.term_util.mih"
#include "transform_hlds.termination.mih"
#include "transform_hlds.trailing_analysis.mih"
#include "transform_hlds.trans_opt.mih"
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




#line 212 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0;

#line 795 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__795__1_2_p_0(
#line 795 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 795 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 1453 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1434 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1426 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1413 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 1393 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1384 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1354 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1332 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 1312 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1295 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1283 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 1237 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1192 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 1173 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1153 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1143 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5);

#line 1132 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1114 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1070 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1051 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 1041 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4);

#line 1030 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 987 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 987 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 987 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 987 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 987 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 978 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6);

#line 961 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);

#line 934 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 934 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 934 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 934 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 934 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);

#line 914 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8);

#line 902 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 902 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 902 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 902 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 902 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);

#line 880 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 880 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 880 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 880 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 880 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 858 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 858 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 858 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 858 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 858 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 823 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 823 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 823 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 823 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 823 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);

#line 804 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 804 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 804 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 804 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 804 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 795 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 795 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg);

#line 781 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 781 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 781 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 781 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 781 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 743 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_9,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_10,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_11,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_12,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22);

#line 704 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 704 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 704 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 704 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 704 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 684 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 684 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 684 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 684 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 684 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 661 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 661 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 661 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 661 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 661 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);

#line 636 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 636 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 636 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 636 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 636 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);

#line 618 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 618 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 618 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 618 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 618 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 600 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 600 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 600 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 600 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 600 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);

#line 588 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 588 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 588 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 588 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 588 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 576 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 576 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 576 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 576 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 576 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 564 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 564 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 564 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 564 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 564 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);

#line 549 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 549 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 549 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 549 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 549 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);

#line 500 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 500 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 500 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[1]))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 0)),
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[3]))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_2[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_3[1][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 2 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_8[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 4 */
  {
    ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_6[0])),
    ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box top_level__mercury_compile_middle_passes_scalar_common_5[2][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
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



#line 1017 "top_level.mercury_compile_middle_passes.c"
static const MR_FA_PseudoTypeInfo_Struct2 top_level__mercury_compile_middle_passes__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_int_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 795 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__795__1_2_p_0(
#line 795 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__1_35,
#line 795 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HeadVar__2_36)
#line 795 "mercury_compile_middle_passes.m"
{
#line 795 "mercury_compile_middle_passes.m"
  {
#line 795 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HeadVar__1_35 == top_level__mercury_compile_middle_passes__HeadVar__2_36);

#line 795 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 795 "mercury_compile_middle_passes.m"
  }
#line 795 "mercury_compile_middle_passes.m"
}

#line 1453 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1453 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1453 "mercury_compile_middle_passes.m"
{
#line 1456 "mercury_compile_middle_passes.m"
  {
#line 1456 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1456 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1456 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Dead_12;

#line 1457 "mercury_compile_middle_passes.m"
    {
#line 1457 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1458 "mercury_compile_middle_passes.m"
    {
#line 1458 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 388, &top_level__mercury_compile_middle_passes__Dead_12);
    }
#line 1467 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Dead_12 == (MR_Integer) 0))
#line 1468 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1467 "mercury_compile_middle_passes.m"
    else
#line 1460 "mercury_compile_middle_passes.m"
      {
#line 1464 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_13;

#line 1461 "mercury_compile_middle_passes.m"
        {
#line 1461 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Eliminating dead procedures...\n");
        }
#line 1462 "mercury_compile_middle_passes.m"
        {
#line 1462 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1464 "mercury_compile_middle_passes.m"
        {
#line 1464 "mercury_compile_middle_passes.m"
          transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 0, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, &top_level__mercury_compile_middle_passes___ElimSpecs_13);
        }
#line 1465 "mercury_compile_middle_passes.m"
        {
#line 1465 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1466 "mercury_compile_middle_passes.m"
        {
#line 1466 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1466 "mercury_compile_middle_passes.m"
          return;
        }
#line 1460 "mercury_compile_middle_passes.m"
      }
#line 1456 "mercury_compile_middle_passes.m"
  }
#line 1453 "mercury_compile_middle_passes.m"
}

#line 1434 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1434 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1434 "mercury_compile_middle_passes.m"
{
#line 1437 "mercury_compile_middle_passes.m"
  {
#line 1437 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1437 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1437 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Analysis_12;

#line 1438 "mercury_compile_middle_passes.m"
    {
#line 1438 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1439 "mercury_compile_middle_passes.m"
    {
#line 1439 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 406, &top_level__mercury_compile_middle_passes__Analysis_12);
    }
#line 1447 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Analysis_12 == (MR_Integer) 0))
#line 1448 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1447 "mercury_compile_middle_passes.m"
    else
#line 1441 "mercury_compile_middle_passes.m"
      {
#line 1442 "mercury_compile_middle_passes.m"
        {
#line 1442 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing regions ...\n");
        }
#line 1443 "mercury_compile_middle_passes.m"
        {
#line 1443 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1444 "mercury_compile_middle_passes.m"
        {
#line 1444 "mercury_compile_middle_passes.m"
          transform_hlds__rbmm__do_region_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1445 "mercury_compile_middle_passes.m"
        {
#line 1445 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1446 "mercury_compile_middle_passes.m"
        {
#line 1446 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1446 "mercury_compile_middle_passes.m"
          return;
        }
#line 1441 "mercury_compile_middle_passes.m"
      }
#line 1437 "mercury_compile_middle_passes.m"
  }
#line 1434 "mercury_compile_middle_passes.m"
}

#line 1426 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1(
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1426 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1426 "mercury_compile_middle_passes.m"
{
#line 1426 "mercury_compile_middle_passes.m"
  {
#line 1426 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1426 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5;
#line 1426 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7;

#line 1426 "mercury_compile_middle_passes.m"
    {
#line 1426 "mercury_compile_middle_passes.m"
      transform_hlds__complexity__complexity_process_proc_msg_7_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7);
    }
#line 1426 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__5_5));
#line 1426 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__7_7));
#line 1426 "mercury_compile_middle_passes.m"
  }
#line 1426 "mercury_compile_middle_passes.m"
}

#line 1413 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 1413 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 1413 "mercury_compile_middle_passes.m"
{
#line 1416 "mercury_compile_middle_passes.m"
  {
#line 1416 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1416 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_11;

#line 1417 "mercury_compile_middle_passes.m"
    {
#line 1417 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_maybe_complexity_proc_map_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_11);
    }
#line 1420 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeNumProcMap_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1419 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 1420 "mercury_compile_middle_passes.m"
    else
#line 1421 "mercury_compile_middle_passes.m"
      {
#line 1421 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumProcs_12;
#line 1421 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__ProcMap_13;
#line 1421 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_11, (MR_Integer) 0)));
#line 1421 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_22_22;
#line 1421 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_24_24;

#line 1421 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__NumProcs_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 0)));
#line 1421 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__ProcMap_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_18_18, (MR_Integer) 1)));
#line 1422 "mercury_compile_middle_passes.m"
        {
#line 1422 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying complexity experiment transformation...\n");
        }
#line 1424 "mercury_compile_middle_passes.m"
        {
#line 1424 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1426 "mercury_compile_middle_passes.m"
        {
#line 1426 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_9[0]));
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0_1));
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__NumProcs_12));
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_24_24, 4) = ((MR_Box) (top_level__mercury_compile_middle_passes__ProcMap_13));
#line 1426 "mercury_compile_middle_passes.m"
        }
#line 1426 "mercury_compile_middle_passes.m"
        {
#line 1426 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_22_22, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1426 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_22_22, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_24_24));
#line 1426 "mercury_compile_middle_passes.m"
        }
#line 1425 "mercury_compile_middle_passes.m"
        {
#line 1425 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);
        }
#line 1428 "mercury_compile_middle_passes.m"
        {
#line 1428 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1429 "mercury_compile_middle_passes.m"
        {
#line 1429 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1429 "mercury_compile_middle_passes.m"
          return;
        }
#line 1421 "mercury_compile_middle_passes.m"
      }
#line 1416 "mercury_compile_middle_passes.m"
  }
#line 1413 "mercury_compile_middle_passes.m"
}

#line 1393 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1393 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1393 "mercury_compile_middle_passes.m"
{
#line 1396 "mercury_compile_middle_passes.m"
  {
#line 1396 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1396 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1396 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ProfileDeep_12;

#line 1397 "mercury_compile_middle_passes.m"
    {
#line 1397 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1398 "mercury_compile_middle_passes.m"
    {
#line 1398 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 193, &top_level__mercury_compile_middle_passes__ProfileDeep_12);
    }
#line 1407 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ProfileDeep_12 == (MR_Integer) 0))
#line 1408 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1407 "mercury_compile_middle_passes.m"
    else
#line 1400 "mercury_compile_middle_passes.m"
      {
#line 1401 "mercury_compile_middle_passes.m"
        {
#line 1401 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying deep profiling transformation...\n");
        }
#line 1403 "mercury_compile_middle_passes.m"
        {
#line 1403 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1404 "mercury_compile_middle_passes.m"
        {
#line 1404 "mercury_compile_middle_passes.m"
          ll_backend__deep_profiling__apply_deep_profiling_transform_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1405 "mercury_compile_middle_passes.m"
        {
#line 1405 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1406 "mercury_compile_middle_passes.m"
        {
#line 1406 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1406 "mercury_compile_middle_passes.m"
          return;
        }
#line 1400 "mercury_compile_middle_passes.m"
      }
#line 1396 "mercury_compile_middle_passes.m"
  }
#line 1393 "mercury_compile_middle_passes.m"
}

#line 1384 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1(
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1384 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1384 "mercury_compile_middle_passes.m"
{
#line 1384 "mercury_compile_middle_passes.m"
  {
#line 1384 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1384 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 1384 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 1384 "mercury_compile_middle_passes.m"
    {
#line 1384 "mercury_compile_middle_passes.m"
      transform_hlds__size_prof__size_prof_process_proc_msg_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 1384 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 1384 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 1384 "mercury_compile_middle_passes.m"
  }
#line 1384 "mercury_compile_middle_passes.m"
}

#line 1354 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1354 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1354 "mercury_compile_middle_passes.m"
{
#line 1357 "mercury_compile_middle_passes.m"
  {
#line 1357 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1357 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1357 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsWords_12;
#line 1357 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AsCells_13;
#line 1357 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__MaybeTransform_14;

#line 1358 "mercury_compile_middle_passes.m"
    {
#line 1358 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1359 "mercury_compile_middle_passes.m"
    {
#line 1359 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__AsWords_12);
    }
#line 1360 "mercury_compile_middle_passes.m"
    {
#line 1360 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 211, &top_level__mercury_compile_middle_passes__AsCells_13);
    }
#line 1365 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__AsWords_12 == (MR_Integer) 0))
#line 1365 "mercury_compile_middle_passes.m"
      if ((top_level__mercury_compile_middle_passes__AsCells_13 == (MR_Integer) 0))
#line 1376 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1365 "mercury_compile_middle_passes.m"
      else
#line 1370 "mercury_compile_middle_passes.m"
        {
#line 1372 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[2]);
#line 1370 "mercury_compile_middle_passes.m"
        }
#line 1365 "mercury_compile_middle_passes.m"
    else
#line 1365 "mercury_compile_middle_passes.m"
      if ((top_level__mercury_compile_middle_passes__AsCells_13 == (MR_Integer) 0))
#line 1366 "mercury_compile_middle_passes.m"
        {
#line 1368 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__MaybeTransform_14 = (MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[3]);
#line 1366 "mercury_compile_middle_passes.m"
        }
#line 1365 "mercury_compile_middle_passes.m"
      else
#line 1362 "mercury_compile_middle_passes.m"
        {
#line 1364 "mercury_compile_middle_passes.m"
          {
#line 1364 "mercury_compile_middle_passes.m"
            mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_term_size_prof\'/6", (MR_String) "as_words and as_cells");
#line 1364 "mercury_compile_middle_passes.m"
            return;
          }
#line 1362 "mercury_compile_middle_passes.m"
        }
#line 1387 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__MaybeTransform_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1388 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1387 "mercury_compile_middle_passes.m"
    else
#line 1379 "mercury_compile_middle_passes.m"
      {
#line 1379 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Transform_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeTransform_14, (MR_Integer) 0)));
#line 1379 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_30_30;
#line 1379 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_32_32;

#line 1380 "mercury_compile_middle_passes.m"
        {
#line 1380 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying term size profiling transformation...\n");
        }
#line 1382 "mercury_compile_middle_passes.m"
        {
#line 1382 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1384 "mercury_compile_middle_passes.m"
        {
#line 1384 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1384 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_5[1]));
#line 1384 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0_1));
#line 1384 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1384 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_32_32, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__Transform_15));
#line 1384 "mercury_compile_middle_passes.m"
        }
#line 1384 "mercury_compile_middle_passes.m"
        {
#line 1384 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1384 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1384 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__V_30_30, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_32_32));
#line 1384 "mercury_compile_middle_passes.m"
        }
#line 1383 "mercury_compile_middle_passes.m"
        {
#line 1383 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 1385 "mercury_compile_middle_passes.m"
        {
#line 1385 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1386 "mercury_compile_middle_passes.m"
        {
#line 1386 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1386 "mercury_compile_middle_passes.m"
          return;
        }
#line 1379 "mercury_compile_middle_passes.m"
      }
#line 1357 "mercury_compile_middle_passes.m"
  }
#line 1354 "mercury_compile_middle_passes.m"
}

#line 1332 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 1332 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 1332 "mercury_compile_middle_passes.m"
{
#line 1335 "mercury_compile_middle_passes.m"
  {
#line 1335 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1335 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1335 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UseFloatRegs_12;

#line 1336 "mercury_compile_middle_passes.m"
    {
#line 1336 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1337 "mercury_compile_middle_passes.m"
    {
#line 1337 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 251, &top_level__mercury_compile_middle_passes__UseFloatRegs_12);
    }
#line 1348 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__UseFloatRegs_12 == (MR_Integer) 0))
#line 1349 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 1348 "mercury_compile_middle_passes.m"
    else
#line 1339 "mercury_compile_middle_passes.m"
      {
#line 1339 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_13;
#line 1339 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_15;
#line 1339 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24;
#line 1344 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_14;

#line 1340 "mercury_compile_middle_passes.m"
        {
#line 1340 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inserting float register wrappers...");
        }
#line 1342 "mercury_compile_middle_passes.m"
        {
#line 1342 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1343 "mercury_compile_middle_passes.m"
        {
#line 1343 "mercury_compile_middle_passes.m"
          transform_hlds__float_regs__insert_reg_wrappers_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, &top_level__mercury_compile_middle_passes__Specs_13);
        }
#line 1344 "mercury_compile_middle_passes.m"
        {
#line 1344 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_13, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_14, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_15);
        }
#line 1345 "mercury_compile_middle_passes.m"
        {
#line 1345 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_24_24, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 1346 "mercury_compile_middle_passes.m"
        {
#line 1346 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
        }
#line 1347 "mercury_compile_middle_passes.m"
        {
#line 1347 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1347 "mercury_compile_middle_passes.m"
          return;
        }
#line 1339 "mercury_compile_middle_passes.m"
      }
#line 1335 "mercury_compile_middle_passes.m"
  }
#line 1332 "mercury_compile_middle_passes.m"
}

#line 1312 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1312 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1312 "mercury_compile_middle_passes.m"
{
#line 1315 "mercury_compile_middle_passes.m"
  {
#line 1315 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1315 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1315 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopControl_12;

#line 1316 "mercury_compile_middle_passes.m"
    {
#line 1316 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1317 "mercury_compile_middle_passes.m"
    {
#line 1317 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 674, &top_level__mercury_compile_middle_passes__LoopControl_12);
    }
#line 1326 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__LoopControl_12 == (MR_Integer) 0))
#line 1327 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1326 "mercury_compile_middle_passes.m"
    else
#line 1319 "mercury_compile_middle_passes.m"
      {
#line 1320 "mercury_compile_middle_passes.m"
        {
#line 1320 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying parallel loop control transformation...\n");
        }
#line 1322 "mercury_compile_middle_passes.m"
        {
#line 1322 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1323 "mercury_compile_middle_passes.m"
        {
#line 1323 "mercury_compile_middle_passes.m"
          transform_hlds__par_loop_control__maybe_par_loop_control_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1324 "mercury_compile_middle_passes.m"
        {
#line 1324 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1325 "mercury_compile_middle_passes.m"
        {
#line 1325 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1325 "mercury_compile_middle_passes.m"
          return;
        }
#line 1319 "mercury_compile_middle_passes.m"
      }
#line 1315 "mercury_compile_middle_passes.m"
  }
#line 1312 "mercury_compile_middle_passes.m"
}

#line 1295 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0_1(
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1295 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1295 "mercury_compile_middle_passes.m"
{
#line 1295 "mercury_compile_middle_passes.m"
  {
#line 1295 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1295 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1295 "mercury_compile_middle_passes.m"
    {
#line 1295 "mercury_compile_middle_passes.m"
      transform_hlds__parallel_to_plain_conj__parallel_to_plain_conjs_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1295 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1295 "mercury_compile_middle_passes.m"
  }
#line 1295 "mercury_compile_middle_passes.m"
}

#line 1283 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 1283 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 1283 "mercury_compile_middle_passes.m"
{
#line 1286 "mercury_compile_middle_passes.m"
  {
#line 1286 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1286 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_11;

#line 1287 "mercury_compile_middle_passes.m"
    {
#line 1287 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__HasParallelConj_11);
    }
#line 1306 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__HasParallelConj_11 == (MR_Integer) 1))
#line 1307 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 1306 "mercury_compile_middle_passes.m"
    else
#line 1289 "mercury_compile_middle_passes.m"
      {
#line 1289 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 1289 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__SupportsParConj_13;

#line 1290 "mercury_compile_middle_passes.m"
        {
#line 1290 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_12);
        }
#line 1291 "mercury_compile_middle_passes.m"
        {
#line 1291 "mercury_compile_middle_passes.m"
          libs__globals__current_grade_supports_par_conj_2_p_0(top_level__mercury_compile_middle_passes__Globals_12, &top_level__mercury_compile_middle_passes__SupportsParConj_13);
        }
#line 1296 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__SupportsParConj_13 == (MR_Integer) 0))
#line 1293 "mercury_compile_middle_passes.m"
          {
#line 1294 "mercury_compile_middle_passes.m"
            {
#line 1294 "mercury_compile_middle_passes.m"
              hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[1]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 1294 "mercury_compile_middle_passes.m"
              return;
            }
#line 1293 "mercury_compile_middle_passes.m"
          }
#line 1296 "mercury_compile_middle_passes.m"
        else
#line 1297 "mercury_compile_middle_passes.m"
          {
#line 1297 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 1302 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes___ElimSpecs_14;

#line 1298 "mercury_compile_middle_passes.m"
            {
#line 1298 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Dependent parallel conjunction transformation...\n");
            }
#line 1300 "mercury_compile_middle_passes.m"
            {
#line 1300 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
            }
#line 1301 "mercury_compile_middle_passes.m"
            {
#line 1301 "mercury_compile_middle_passes.m"
              transform_hlds__dep_par_conj__impl_dep_par_conjs_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
            }
#line 1302 "mercury_compile_middle_passes.m"
            {
#line 1302 "mercury_compile_middle_passes.m"
              transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16, &top_level__mercury_compile_middle_passes___ElimSpecs_14);
            }
#line 1303 "mercury_compile_middle_passes.m"
            {
#line 1303 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
            }
#line 1304 "mercury_compile_middle_passes.m"
            {
#line 1304 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1304 "mercury_compile_middle_passes.m"
              return;
            }
#line 1297 "mercury_compile_middle_passes.m"
          }
#line 1289 "mercury_compile_middle_passes.m"
      }
#line 1286 "mercury_compile_middle_passes.m"
  }
#line 1283 "mercury_compile_middle_passes.m"
}

#line 1237 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1237 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1237 "mercury_compile_middle_passes.m"
{
#line 1240 "mercury_compile_middle_passes.m"
  {
#line 1240 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1240 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1240 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1240 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1240 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Distance_14;
#line 1240 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_15;
#line 1248 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__V_24_24;

#line 1241 "mercury_compile_middle_passes.m"
    {
#line 1241 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1242 "mercury_compile_middle_passes.m"
    {
#line 1242 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 214, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1243 "mercury_compile_middle_passes.m"
    {
#line 1243 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 252, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1244 "mercury_compile_middle_passes.m"
    {
#line 1244 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 671, &top_level__mercury_compile_middle_passes__Distance_14);
    }
#line 1245 "mercury_compile_middle_passes.m"
    {
#line 1245 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__HasParallelConj_15);
    }
#line 1248 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1248 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1248 "mercury_compile_middle_passes.m"
      {
#line 1249 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HasParallelConj_15 == (MR_Integer) 0);
#line 1248 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1248 "mercury_compile_middle_passes.m"
          {
#line 1253 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1248 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1248 "mercury_compile_middle_passes.m"
              {
#line 1257 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__V_24_24 = (MR_Integer) 0;
#line 1257 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Distance_14 > top_level__mercury_compile_middle_passes__V_24_24);
#line 1248 "mercury_compile_middle_passes.m"
              }
#line 1248 "mercury_compile_middle_passes.m"
          }
#line 1248 "mercury_compile_middle_passes.m"
      }
#line 1277 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1259 "mercury_compile_middle_passes.m"
      {
#line 1259 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1259 "mercury_compile_middle_passes.m"
        {
#line 1259 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1268 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 0))
#line 1261 "mercury_compile_middle_passes.m"
          {
#line 1262 "mercury_compile_middle_passes.m"
            {
#line 1262 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Distance granularity transformation...\n");
            }
#line 1264 "mercury_compile_middle_passes.m"
            {
#line 1264 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
            }
#line 1265 "mercury_compile_middle_passes.m"
            {
#line 1265 "mercury_compile_middle_passes.m"
              transform_hlds__distance_granularity__control_distance_granularity_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, top_level__mercury_compile_middle_passes__Distance_14);
            }
#line 1266 "mercury_compile_middle_passes.m"
            {
#line 1266 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
            }
#line 1267 "mercury_compile_middle_passes.m"
            {
#line 1267 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1267 "mercury_compile_middle_passes.m"
              return;
            }
#line 1261 "mercury_compile_middle_passes.m"
          }
#line 1268 "mercury_compile_middle_passes.m"
        else
#line 1268 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 2))
#line 1270 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1268 "mercury_compile_middle_passes.m"
          else
#line 1268 "mercury_compile_middle_passes.m"
            if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 4))
#line 1272 "mercury_compile_middle_passes.m"
              *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1268 "mercury_compile_middle_passes.m"
            else
#line 1268 "mercury_compile_middle_passes.m"
              if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 1))
#line 1269 "mercury_compile_middle_passes.m"
                *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1268 "mercury_compile_middle_passes.m"
              else
#line 1271 "mercury_compile_middle_passes.m"
                *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1259 "mercury_compile_middle_passes.m"
      }
#line 1277 "mercury_compile_middle_passes.m"
    else
#line 1278 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1240 "mercury_compile_middle_passes.m"
  }
#line 1237 "mercury_compile_middle_passes.m"
}

#line 1192 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 1192 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 1192 "mercury_compile_middle_passes.m"
{
#line 1195 "mercury_compile_middle_passes.m"
  {
#line 1195 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1195 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1195 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Parallel_12;
#line 1195 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HighLevelCode_13;
#line 1195 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Control_14;
#line 1195 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HasParallelConj_15;

#line 1196 "mercury_compile_middle_passes.m"
    {
#line 1196 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1197 "mercury_compile_middle_passes.m"
    {
#line 1197 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 214, &top_level__mercury_compile_middle_passes__Parallel_12);
    }
#line 1198 "mercury_compile_middle_passes.m"
    {
#line 1198 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 252, &top_level__mercury_compile_middle_passes__HighLevelCode_13);
    }
#line 1199 "mercury_compile_middle_passes.m"
    {
#line 1199 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 670, &top_level__mercury_compile_middle_passes__Control_14);
    }
#line 1200 "mercury_compile_middle_passes.m"
    {
#line 1200 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_has_parallel_conj_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__HasParallelConj_15);
    }
#line 1203 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Parallel_12 == (MR_Integer) 1);
#line 1203 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1203 "mercury_compile_middle_passes.m"
      {
#line 1204 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HasParallelConj_15 == (MR_Integer) 0);
#line 1203 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 1203 "mercury_compile_middle_passes.m"
          {
#line 1208 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HighLevelCode_13 == (MR_Integer) 0);
#line 1203 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 1211 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Control_14 == (MR_Integer) 1);
#line 1203 "mercury_compile_middle_passes.m"
          }
#line 1203 "mercury_compile_middle_passes.m"
      }
#line 1231 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1213 "mercury_compile_middle_passes.m"
      {
#line 1213 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Target_16;

#line 1213 "mercury_compile_middle_passes.m"
        {
#line 1213 "mercury_compile_middle_passes.m"
          libs__globals__get_target_2_p_0(top_level__mercury_compile_middle_passes__Globals_11, &top_level__mercury_compile_middle_passes__Target_16);
        }
#line 1222 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 0))
#line 1215 "mercury_compile_middle_passes.m"
          {
#line 1216 "mercury_compile_middle_passes.m"
            {
#line 1216 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Granularity control transformation...\n");
            }
#line 1218 "mercury_compile_middle_passes.m"
            {
#line 1218 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
            }
#line 1219 "mercury_compile_middle_passes.m"
            {
#line 1219 "mercury_compile_middle_passes.m"
              transform_hlds__granularity__control_granularity_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
            }
#line 1220 "mercury_compile_middle_passes.m"
            {
#line 1220 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
            }
#line 1221 "mercury_compile_middle_passes.m"
            {
#line 1221 "mercury_compile_middle_passes.m"
              libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1221 "mercury_compile_middle_passes.m"
              return;
            }
#line 1215 "mercury_compile_middle_passes.m"
          }
#line 1222 "mercury_compile_middle_passes.m"
        else
#line 1222 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 2))
#line 1224 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1222 "mercury_compile_middle_passes.m"
          else
#line 1222 "mercury_compile_middle_passes.m"
            if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 4))
#line 1226 "mercury_compile_middle_passes.m"
              *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1222 "mercury_compile_middle_passes.m"
            else
#line 1222 "mercury_compile_middle_passes.m"
              if ((top_level__mercury_compile_middle_passes__Target_16 == (MR_Integer) 1))
#line 1223 "mercury_compile_middle_passes.m"
                *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1222 "mercury_compile_middle_passes.m"
              else
#line 1225 "mercury_compile_middle_passes.m"
                *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1213 "mercury_compile_middle_passes.m"
      }
#line 1231 "mercury_compile_middle_passes.m"
    else
#line 1232 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 1195 "mercury_compile_middle_passes.m"
  }
#line 1192 "mercury_compile_middle_passes.m"
}

#line 1173 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1173 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1173 "mercury_compile_middle_passes.m"
{
#line 1176 "mercury_compile_middle_passes.m"
  {
#line 1176 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1176 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1176 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_12;

#line 1177 "mercury_compile_middle_passes.m"
    {
#line 1177 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1178 "mercury_compile_middle_passes.m"
    {
#line 1178 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 397, &top_level__mercury_compile_middle_passes__TablingAnalysis_12);
    }
#line 1186 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TablingAnalysis_12 == (MR_Integer) 0))
#line 1187 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1186 "mercury_compile_middle_passes.m"
    else
#line 1180 "mercury_compile_middle_passes.m"
      {
#line 1181 "mercury_compile_middle_passes.m"
        {
#line 1181 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing minimal model tabling...\n");
        }
#line 1183 "mercury_compile_middle_passes.m"
        {
#line 1183 "mercury_compile_middle_passes.m"
          transform_hlds__tabling_analysis__analyse_mm_tabling_in_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1184 "mercury_compile_middle_passes.m"
        {
#line 1184 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1185 "mercury_compile_middle_passes.m"
        {
#line 1185 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1185 "mercury_compile_middle_passes.m"
          return;
        }
#line 1180 "mercury_compile_middle_passes.m"
      }
#line 1176 "mercury_compile_middle_passes.m"
  }
#line 1173 "mercury_compile_middle_passes.m"
}

#line 1153 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1153 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1153 "mercury_compile_middle_passes.m"
{
#line 1156 "mercury_compile_middle_passes.m"
  {
#line 1156 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1156 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1156 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LCO_12;

#line 1157 "mercury_compile_middle_passes.m"
    {
#line 1157 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1158 "mercury_compile_middle_passes.m"
    {
#line 1158 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 365, &top_level__mercury_compile_middle_passes__LCO_12);
    }
#line 1167 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__LCO_12 == (MR_Integer) 0))
#line 1168 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1167 "mercury_compile_middle_passes.m"
    else
#line 1160 "mercury_compile_middle_passes.m"
      {
#line 1161 "mercury_compile_middle_passes.m"
        {
#line 1161 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Looking for LCO modulo constructor application ...\n");
        }
#line 1163 "mercury_compile_middle_passes.m"
        {
#line 1163 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1164 "mercury_compile_middle_passes.m"
        {
#line 1164 "mercury_compile_middle_passes.m"
          transform_hlds__lco__lco_modulo_constructors_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1165 "mercury_compile_middle_passes.m"
        {
#line 1165 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1166 "mercury_compile_middle_passes.m"
        {
#line 1166 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1166 "mercury_compile_middle_passes.m"
          return;
        }
#line 1160 "mercury_compile_middle_passes.m"
      }
#line 1156 "mercury_compile_middle_passes.m"
  }
#line 1153 "mercury_compile_middle_passes.m"
}

#line 1143 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0_1(
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 1143 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_5)
#line 1143 "mercury_compile_middle_passes.m"
{
#line 1143 "mercury_compile_middle_passes.m"
  {
#line 1143 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1143 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3;
#line 1143 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5;

#line 1143 "mercury_compile_middle_passes.m"
    {
#line 1143 "mercury_compile_middle_passes.m"
      transform_hlds__unneeded_code__unneeded_process_proc_msg_5_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), &top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_4), &top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5);
    }
#line 1143 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_3 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__3_3));
#line 1143 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_5 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__5_5));
#line 1143 "mercury_compile_middle_passes.m"
  }
#line 1143 "mercury_compile_middle_passes.m"
}

#line 1132 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1132 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1132 "mercury_compile_middle_passes.m"
{
#line 1135 "mercury_compile_middle_passes.m"
  {
#line 1135 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1135 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1135 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__UnneededCode_12;

#line 1136 "mercury_compile_middle_passes.m"
    {
#line 1136 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1137 "mercury_compile_middle_passes.m"
    {
#line 1137 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 356, &top_level__mercury_compile_middle_passes__UnneededCode_12);
    }
#line 1147 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__UnneededCode_12 == (MR_Integer) 0))
#line 1148 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1147 "mercury_compile_middle_passes.m"
    else
#line 1139 "mercury_compile_middle_passes.m"
      {
#line 1140 "mercury_compile_middle_passes.m"
        {
#line 1140 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Removing unneeded code from procedure bodies...\n");
        }
#line 1142 "mercury_compile_middle_passes.m"
        {
#line 1142 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1143 "mercury_compile_middle_passes.m"
        {
#line 1143 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[3]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1145 "mercury_compile_middle_passes.m"
        {
#line 1145 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1146 "mercury_compile_middle_passes.m"
        {
#line 1146 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1146 "mercury_compile_middle_passes.m"
          return;
        }
#line 1139 "mercury_compile_middle_passes.m"
      }
#line 1135 "mercury_compile_middle_passes.m"
  }
#line 1132 "mercury_compile_middle_passes.m"
}

#line 1114 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1114 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1114 "mercury_compile_middle_passes.m"
{
#line 1117 "mercury_compile_middle_passes.m"
  {
#line 1117 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1117 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1117 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalyseTrail_12;

#line 1118 "mercury_compile_middle_passes.m"
    {
#line 1118 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1119 "mercury_compile_middle_passes.m"
    {
#line 1119 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 394, &top_level__mercury_compile_middle_passes__AnalyseTrail_12);
    }
#line 1126 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__AnalyseTrail_12 == (MR_Integer) 0))
#line 1127 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1126 "mercury_compile_middle_passes.m"
    else
#line 1121 "mercury_compile_middle_passes.m"
      {
#line 1122 "mercury_compile_middle_passes.m"
        {
#line 1122 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing trail usage...\n");
        }
#line 1123 "mercury_compile_middle_passes.m"
        {
#line 1123 "mercury_compile_middle_passes.m"
          transform_hlds__trailing_analysis__analyse_trail_usage_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1124 "mercury_compile_middle_passes.m"
        {
#line 1124 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Trail usage analysis done.\n");
        }
#line 1125 "mercury_compile_middle_passes.m"
        {
#line 1125 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1125 "mercury_compile_middle_passes.m"
          return;
        }
#line 1121 "mercury_compile_middle_passes.m"
      }
#line 1117 "mercury_compile_middle_passes.m"
  }
#line 1114 "mercury_compile_middle_passes.m"
}

#line 1070 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1070 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1070 "mercury_compile_middle_passes.m"
{
#line 1073 "mercury_compile_middle_passes.m"
  {
#line 1073 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1073 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1073 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;

#line 1074 "mercury_compile_middle_passes.m"
    {
#line 1074 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1075 "mercury_compile_middle_passes.m"
    {
#line 1075 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 409, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 1084 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ReuseAnalysis_12 == (MR_Integer) 0))
#line 1085 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1084 "mercury_compile_middle_passes.m"
    else
#line 1078 "mercury_compile_middle_passes.m"
      {
#line 1079 "mercury_compile_middle_passes.m"
        {
#line 1079 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure reuse analysis...\n");
        }
#line 1080 "mercury_compile_middle_passes.m"
        {
#line 1080 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1081 "mercury_compile_middle_passes.m"
        {
#line 1081 "mercury_compile_middle_passes.m"
          transform_hlds__ctgc__structure_reuse__analysis__perform_structure_reuse_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1082 "mercury_compile_middle_passes.m"
        {
#line 1082 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1083 "mercury_compile_middle_passes.m"
        {
#line 1083 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1083 "mercury_compile_middle_passes.m"
          return;
        }
#line 1078 "mercury_compile_middle_passes.m"
      }
#line 1073 "mercury_compile_middle_passes.m"
  }
#line 1070 "mercury_compile_middle_passes.m"
}

#line 1051 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1051 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1051 "mercury_compile_middle_passes.m"
{
#line 1054 "mercury_compile_middle_passes.m"
  {
#line 1054 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1054 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1054 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Sharing_12;

#line 1055 "mercury_compile_middle_passes.m"
    {
#line 1055 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1056 "mercury_compile_middle_passes.m"
    {
#line 1056 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 407, &top_level__mercury_compile_middle_passes__Sharing_12);
    }
#line 1064 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Sharing_12 == (MR_Integer) 0))
#line 1065 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1064 "mercury_compile_middle_passes.m"
    else
#line 1058 "mercury_compile_middle_passes.m"
      {
#line 1059 "mercury_compile_middle_passes.m"
        {
#line 1059 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Structure sharing analysis...\n");
        }
#line 1060 "mercury_compile_middle_passes.m"
        {
#line 1060 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1061 "mercury_compile_middle_passes.m"
        {
#line 1061 "mercury_compile_middle_passes.m"
          transform_hlds__ctgc__structure_sharing__analysis__structure_sharing_analysis_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1062 "mercury_compile_middle_passes.m"
        {
#line 1062 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1063 "mercury_compile_middle_passes.m"
        {
#line 1063 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1063 "mercury_compile_middle_passes.m"
          return;
        }
#line 1058 "mercury_compile_middle_passes.m"
      }
#line 1054 "mercury_compile_middle_passes.m"
  }
#line 1051 "mercury_compile_middle_passes.m"
}

#line 1041 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0_1(
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 1041 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4)
#line 1041 "mercury_compile_middle_passes.m"
{
#line 1041 "mercury_compile_middle_passes.m"
  {
#line 1041 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 1041 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4;

#line 1041 "mercury_compile_middle_passes.m"
    {
#line 1041 "mercury_compile_middle_passes.m"
      transform_hlds__delay_construct__delay_construct_proc_4_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4);
    }
#line 1041 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__4_4));
#line 1041 "mercury_compile_middle_passes.m"
  }
#line 1041 "mercury_compile_middle_passes.m"
}

#line 1030 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 1030 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 1030 "mercury_compile_middle_passes.m"
{
#line 1033 "mercury_compile_middle_passes.m"
  {
#line 1033 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1033 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1033 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__DelayConstruct_12;

#line 1034 "mercury_compile_middle_passes.m"
    {
#line 1034 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1035 "mercury_compile_middle_passes.m"
    {
#line 1035 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 386, &top_level__mercury_compile_middle_passes__DelayConstruct_12);
    }
#line 1045 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__DelayConstruct_12 == (MR_Integer) 0))
#line 1046 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 1045 "mercury_compile_middle_passes.m"
    else
#line 1037 "mercury_compile_middle_passes.m"
      {
#line 1038 "mercury_compile_middle_passes.m"
        {
#line 1038 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Delaying construction unifications ...\n");
        }
#line 1040 "mercury_compile_middle_passes.m"
        {
#line 1040 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1041 "mercury_compile_middle_passes.m"
        {
#line 1041 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(1), &top_level__mercury_compile_middle_passes_scalar_common_7[0]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 1043 "mercury_compile_middle_passes.m"
        {
#line 1043 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1044 "mercury_compile_middle_passes.m"
        {
#line 1044 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1044 "mercury_compile_middle_passes.m"
          return;
        }
#line 1037 "mercury_compile_middle_passes.m"
      }
#line 1033 "mercury_compile_middle_passes.m"
  }
#line 1030 "mercury_compile_middle_passes.m"
}

#line 987 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(
#line 987 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 987 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 987 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 987 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 987 "mercury_compile_middle_passes.m"
{
#line 990 "mercury_compile_middle_passes.m"
  {
#line 990 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 990 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 990 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Deforest_12;
#line 990 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Constraints_13;

#line 991 "mercury_compile_middle_passes.m"
    {
#line 991 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 992 "mercury_compile_middle_passes.m"
    {
#line 992 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 389, &top_level__mercury_compile_middle_passes__Deforest_12);
    }
#line 995 "mercury_compile_middle_passes.m"
    {
#line 995 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 350, &top_level__mercury_compile_middle_passes__Constraints_13);
    }
#line 998 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Deforest_12 == (MR_Integer) 1);
#line 999 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 999 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 1);
#line 1024 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1018 "mercury_compile_middle_passes.m"
      {
#line 1018 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__Msg_14;

#line 1006 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__Deforest_12 == (MR_Integer) 0))
#line 1006 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 0))
#line 1003 "mercury_compile_middle_passes.m"
            {
#line 1005 "mercury_compile_middle_passes.m"
              {
#line 1005 "mercury_compile_middle_passes.m"
                mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_deforestation\'/6", (MR_String) "no no");
#line 1005 "mercury_compile_middle_passes.m"
                return;
              }
#line 1003 "mercury_compile_middle_passes.m"
            }
#line 1006 "mercury_compile_middle_passes.m"
          else
#line 1017 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Constraint propagation...\n";
#line 1006 "mercury_compile_middle_passes.m"
        else
#line 1006 "mercury_compile_middle_passes.m"
          if ((top_level__mercury_compile_middle_passes__Constraints_13 == (MR_Integer) 0))
#line 1013 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation...\n";
#line 1006 "mercury_compile_middle_passes.m"
          else
#line 1009 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Msg_14 = (MR_String) "% Deforestation and constraint propagation...\n";
#line 1019 "mercury_compile_middle_passes.m"
        {
#line 1019 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Msg_14);
        }
#line 1020 "mercury_compile_middle_passes.m"
        {
#line 1020 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1021 "mercury_compile_middle_passes.m"
        {
#line 1021 "mercury_compile_middle_passes.m"
          transform_hlds__deforest__deforestation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
        }
#line 1022 "mercury_compile_middle_passes.m"
        {
#line 1022 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1023 "mercury_compile_middle_passes.m"
        {
#line 1023 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1023 "mercury_compile_middle_passes.m"
          return;
        }
#line 1018 "mercury_compile_middle_passes.m"
      }
#line 1024 "mercury_compile_middle_passes.m"
    else
#line 1025 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15;
#line 990 "mercury_compile_middle_passes.m"
  }
#line 987 "mercury_compile_middle_passes.m"
}

#line 978 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0_1(
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 978 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6)
#line 978 "mercury_compile_middle_passes.m"
{
#line 978 "mercury_compile_middle_passes.m"
  {
#line 978 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 978 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4;
#line 978 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6;

#line 978 "mercury_compile_middle_passes.m"
    {
#line 978 "mercury_compile_middle_passes.m"
      transform_hlds__loop_inv__hoist_loop_invariants_6_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6);
    }
#line 978 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__4_4));
#line 978 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__6_6));
#line 978 "mercury_compile_middle_passes.m"
  }
#line 978 "mercury_compile_middle_passes.m"
}

#line 961 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_9,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_10,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 961 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19)
#line 961 "mercury_compile_middle_passes.m"
{
#line 965 "mercury_compile_middle_passes.m"
  {
#line 965 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 965 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_14;
#line 965 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__LoopInv_15;

#line 966 "mercury_compile_middle_passes.m"
    {
#line 966 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_14);
    }
#line 967 "mercury_compile_middle_passes.m"
    {
#line 967 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_14, (MR_Integer) 385, &top_level__mercury_compile_middle_passes__LoopInv_15);
    }
#line 981 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__LoopInv_15 == (MR_Integer) 0))
#line 982 "mercury_compile_middle_passes.m"
      {
#line 982 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 982 "mercury_compile_middle_passes.m"
        *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18;
#line 982 "mercury_compile_middle_passes.m"
      }
#line 981 "mercury_compile_middle_passes.m"
    else
#line 969 "mercury_compile_middle_passes.m"
      {
#line 969 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;

#line 972 "mercury_compile_middle_passes.m"
        {
#line 972 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_mlds_back_end__maybe_mark_static_terms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_9, top_level__mercury_compile_middle_passes__Stats_10, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
        }
#line 973 "mercury_compile_middle_passes.m"
        {
#line 973 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 148, (MR_String) "mark_static", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
        }
#line 975 "mercury_compile_middle_passes.m"
        {
#line 975 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% Hoisting loop invariants...\n");
        }
#line 976 "mercury_compile_middle_passes.m"
        {
#line 976 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_9);
        }
#line 977 "mercury_compile_middle_passes.m"
        {
#line 977 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_3_p_0((MR_Word) MR_mkword(MR_mktag(3), &top_level__mercury_compile_middle_passes_scalar_common_1[2]), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 979 "mercury_compile_middle_passes.m"
        {
#line 979 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_9, (MR_String) "% done.\n");
        }
#line 980 "mercury_compile_middle_passes.m"
        {
#line 980 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_10);
#line 980 "mercury_compile_middle_passes.m"
          return;
        }
#line 969 "mercury_compile_middle_passes.m"
      }
#line 965 "mercury_compile_middle_passes.m"
  }
#line 961 "mercury_compile_middle_passes.m"
}

#line 934 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(
#line 934 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 934 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 934 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 934 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 934 "mercury_compile_middle_passes.m"
{
#line 937 "mercury_compile_middle_passes.m"
  {
#line 937 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 937 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 937 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Allow_12;
#line 937 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Simple_13;
#line 937 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SingleUse_14;
#line 937 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__Threshold_15;

#line 938 "mercury_compile_middle_passes.m"
    {
#line 938 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 939 "mercury_compile_middle_passes.m"
    {
#line 939 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 335, &top_level__mercury_compile_middle_passes__Allow_12);
    }
#line 940 "mercury_compile_middle_passes.m"
    {
#line 940 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 337, &top_level__mercury_compile_middle_passes__Simple_13);
    }
#line 941 "mercury_compile_middle_passes.m"
    {
#line 941 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 339, &top_level__mercury_compile_middle_passes__SingleUse_14);
    }
#line 942 "mercury_compile_middle_passes.m"
    {
#line 942 "mercury_compile_middle_passes.m"
      libs__globals__lookup_int_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 341, &top_level__mercury_compile_middle_passes__Threshold_15);
    }
#line 944 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Allow_12 == (MR_Integer) 1);
#line 944 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 944 "mercury_compile_middle_passes.m"
      {
#line 945 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Simple_13 == (MR_Integer) 1);
#line 946 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 946 "mercury_compile_middle_passes.m"
          {
#line 946 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SingleUse_14 == (MR_Integer) 1);
#line 946 "mercury_compile_middle_passes.m"
            if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 947 "mercury_compile_middle_passes.m"
              {
#line 947 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Threshold_15 > (MR_Integer) 0);
#line 947 "mercury_compile_middle_passes.m"
              }
#line 946 "mercury_compile_middle_passes.m"
          }
#line 944 "mercury_compile_middle_passes.m"
      }
#line 955 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 950 "mercury_compile_middle_passes.m"
      {
#line 950 "mercury_compile_middle_passes.m"
        {
#line 950 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Inlining...\n");
        }
#line 951 "mercury_compile_middle_passes.m"
        {
#line 951 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 952 "mercury_compile_middle_passes.m"
        {
#line 952 "mercury_compile_middle_passes.m"
          transform_hlds__inlining__inlining_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
        }
#line 953 "mercury_compile_middle_passes.m"
        {
#line 953 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 954 "mercury_compile_middle_passes.m"
        {
#line 954 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 954 "mercury_compile_middle_passes.m"
          return;
        }
#line 950 "mercury_compile_middle_passes.m"
      }
#line 955 "mercury_compile_middle_passes.m"
    else
#line 956 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 937 "mercury_compile_middle_passes.m"
  }
#line 934 "mercury_compile_middle_passes.m"
}

#line 914 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0_1(
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_1,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_2,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_3,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_4,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_5,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_6,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__wrapper_arg_7,
#line 914 "mercury_compile_middle_passes.m"
  MR_Box * top_level__mercury_compile_middle_passes__wrapper_arg_8)
#line 914 "mercury_compile_middle_passes.m"
{
#line 914 "mercury_compile_middle_passes.m"
  {
#line 914 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;
#line 914 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4;
#line 914 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6;
#line 914 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8;

#line 914 "mercury_compile_middle_passes.m"
    {
#line 914 "mercury_compile_middle_passes.m"
      transform_hlds__accumulator__accu_transform_proc_8_p_0(((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_1), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_2), ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_3), &top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_5), &top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6, ((MR_Word) top_level__mercury_compile_middle_passes__wrapper_arg_7), &top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8);
    }
#line 914 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_4 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv2_HeadVar__4_4));
#line 914 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_6 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv1_HeadVar__6_6));
#line 914 "mercury_compile_middle_passes.m"
    *top_level__mercury_compile_middle_passes__wrapper_arg_8 = ((MR_Box) (top_level__mercury_compile_middle_passes__conv0_HeadVar__8_8));
#line 914 "mercury_compile_middle_passes.m"
  }
#line 914 "mercury_compile_middle_passes.m"
}

#line 902 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(
#line 902 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 902 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 902 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22,
#line 902 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23)
#line 902 "mercury_compile_middle_passes.m"
{
#line 905 "mercury_compile_middle_passes.m"
  {
#line 905 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 905 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 905 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_12;

#line 906 "mercury_compile_middle_passes.m"
    {
#line 906 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 907 "mercury_compile_middle_passes.m"
    {
#line 907 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 362, &top_level__mercury_compile_middle_passes__Optimize_12);
    }
#line 928 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Optimize_12 == (MR_Integer) 0))
#line 929 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22;
#line 928 "mercury_compile_middle_passes.m"
    else
#line 909 "mercury_compile_middle_passes.m"
      {
#line 909 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__TypeInfo_43_43;
#line 909 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Cookie0_13;
#line 909 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Task0_14;
#line 909 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Task_15;
#line 909 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_19;
#line 909 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_21;
#line 909 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 921 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 917 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Cookie_17;
#line 917 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 918 "mercury_compile_middle_passes.m"
        MR_Box top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18;
#line 924 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_20;

#line 910 "mercury_compile_middle_passes.m"
        {
#line 910 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Attempting to introduce accumulators...\n");
        }
#line 912 "mercury_compile_middle_passes.m"
        {
#line 912 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 3323 "top_level.mercury_compile_middle_passes.c"
        top_level__mercury_compile_middle_passes__TypeInfo_43_43 = (MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[1];
#line 913 "mercury_compile_middle_passes.m"
        {
#line 913 "mercury_compile_middle_passes.m"
          mercury__univ__type_to_univ_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &top_level__mercury_compile_middle_passes__Cookie0_13);
        }
#line 914 "mercury_compile_middle_passes.m"
        {
#line 914 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__Task0_14 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 914 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 914 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 1) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_4[0]));
#line 914 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task0_14, 2) = ((MR_Box) (top_level__mercury_compile_middle_passes__Cookie0_13));
#line 914 "mercury_compile_middle_passes.m"
        }
#line 915 "mercury_compile_middle_passes.m"
        {
#line 915 "mercury_compile_middle_passes.m"
          hlds__passes_aux__process_all_nonimported_procs_update_4_p_0(top_level__mercury_compile_middle_passes__Task0_14, &top_level__mercury_compile_middle_passes__Task_15, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_22, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
        }
#line 917 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = ((((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__Task_15)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 917 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 917 "mercury_compile_middle_passes.m"
          {
#line 917 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 1)));
#line 917 "mercury_compile_middle_passes.m"
            top_level__mercury_compile_middle_passes__Cookie_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), top_level__mercury_compile_middle_passes__Task_15, (MR_Integer) 2)));
#line 918 "mercury_compile_middle_passes.m"
            {
#line 918 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = mercury__univ__univ_to_type_2_p_0(top_level__mercury_compile_middle_passes__TypeInfo_43_43, top_level__mercury_compile_middle_passes__Cookie_17, &top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
            }
#line 918 "mercury_compile_middle_passes.m"
            if (top_level__mercury_compile_middle_passes__succeeded)
#line 918 "mercury_compile_middle_passes.m"
              {
#line 918 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__SpecsPrime_18 = ((MR_Word) top_level__mercury_compile_middle_passes__conv3_SpecsPrime_18);
#line 918 "mercury_compile_middle_passes.m"
                top_level__mercury_compile_middle_passes__succeeded = MR_TRUE;
#line 918 "mercury_compile_middle_passes.m"
              }
#line 917 "mercury_compile_middle_passes.m"
          }
#line 921 "mercury_compile_middle_passes.m"
        if (top_level__mercury_compile_middle_passes__succeeded)
#line 920 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__Specs_19 = top_level__mercury_compile_middle_passes__SpecsPrime_18;
#line 921 "mercury_compile_middle_passes.m"
        else
#line 922 "mercury_compile_middle_passes.m"
          {
#line 922 "mercury_compile_middle_passes.m"
            {
#line 922 "mercury_compile_middle_passes.m"
              mercury__require__unexpected_3_p_0((MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_introduce_accumulators\'/6", (MR_String) "bad task");
#line 922 "mercury_compile_middle_passes.m"
              return;
            }
#line 922 "mercury_compile_middle_passes.m"
          }
#line 924 "mercury_compile_middle_passes.m"
        {
#line 924 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_19, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_20, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_21);
        }
#line 925 "mercury_compile_middle_passes.m"
        {
#line 925 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_21, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23);
        }
#line 926 "mercury_compile_middle_passes.m"
        {
#line 926 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 927 "mercury_compile_middle_passes.m"
        {
#line 927 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 927 "mercury_compile_middle_passes.m"
          return;
        }
#line 909 "mercury_compile_middle_passes.m"
      }
#line 905 "mercury_compile_middle_passes.m"
  }
#line 902 "mercury_compile_middle_passes.m"
}

#line 880 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(
#line 880 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 880 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 880 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 880 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 880 "mercury_compile_middle_passes.m"
{
#line 883 "mercury_compile_middle_passes.m"
  {
#line 883 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 883 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 883 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImplicitParallelism_12;

#line 884 "mercury_compile_middle_passes.m"
    {
#line 884 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 885 "mercury_compile_middle_passes.m"
    {
#line 885 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 672, &top_level__mercury_compile_middle_passes__ImplicitParallelism_12);
    }
#line 895 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ImplicitParallelism_12 == (MR_Integer) 0))
#line 897 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 895 "mercury_compile_middle_passes.m"
    else
#line 888 "mercury_compile_middle_passes.m"
      {
#line 889 "mercury_compile_middle_passes.m"
        {
#line 889 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Applying implicit parallelism...\n");
        }
#line 891 "mercury_compile_middle_passes.m"
        {
#line 891 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 892 "mercury_compile_middle_passes.m"
        {
#line 892 "mercury_compile_middle_passes.m"
          transform_hlds__implicit_parallelism__introduce_parallelism__apply_implicit_parallelism_transformation_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 893 "mercury_compile_middle_passes.m"
        {
#line 893 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 894 "mercury_compile_middle_passes.m"
        {
#line 894 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 894 "mercury_compile_middle_passes.m"
          return;
        }
#line 888 "mercury_compile_middle_passes.m"
      }
#line 883 "mercury_compile_middle_passes.m"
  }
#line 880 "mercury_compile_middle_passes.m"
}

#line 858 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(
#line 858 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 858 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 858 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 858 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 858 "mercury_compile_middle_passes.m"
{
#line 861 "mercury_compile_middle_passes.m"
  {
#line 861 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 861 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 861 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ForceDisableSSDB_12;

#line 862 "mercury_compile_middle_passes.m"
    {
#line 862 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 863 "mercury_compile_middle_passes.m"
    {
#line 863 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 134, &top_level__mercury_compile_middle_passes__ForceDisableSSDB_12);
    }
#line 866 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ForceDisableSSDB_12 == (MR_Integer) 0);
#line 874 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 870 "mercury_compile_middle_passes.m"
      {
#line 868 "mercury_compile_middle_passes.m"
        {
#line 868 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Maybe apply source to source debugging transformation ...\n");
        }
#line 871 "mercury_compile_middle_passes.m"
        {
#line 871 "mercury_compile_middle_passes.m"
          transform_hlds__ssdebug__ssdebug_transform_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 872 "mercury_compile_middle_passes.m"
        {
#line 872 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 873 "mercury_compile_middle_passes.m"
        {
#line 873 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 873 "mercury_compile_middle_passes.m"
          return;
        }
#line 870 "mercury_compile_middle_passes.m"
      }
#line 874 "mercury_compile_middle_passes.m"
    else
#line 875 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 861 "mercury_compile_middle_passes.m"
  }
#line 858 "mercury_compile_middle_passes.m"
}

#line 823 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(
#line 823 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 823 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 823 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 823 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20)
#line 823 "mercury_compile_middle_passes.m"
{
#line 826 "mercury_compile_middle_passes.m"
  {
#line 826 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 826 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 826 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__HigherOrder_12;
#line 826 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Types_13;
#line 826 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecInfo_14;
#line 826 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeSpecPreds_15;
#line 837 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_16_16;
#line 837 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_17_17;
#line 837 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__V_18_18;

#line 827 "mercury_compile_middle_passes.m"
    {
#line 827 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 828 "mercury_compile_middle_passes.m"
    {
#line 828 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 353, &top_level__mercury_compile_middle_passes__HigherOrder_12);
    }
#line 830 "mercury_compile_middle_passes.m"
    {
#line 830 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 361, &top_level__mercury_compile_middle_passes__Types_13);
    }
#line 836 "mercury_compile_middle_passes.m"
    {
#line 836 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_type_spec_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__TypeSpecInfo_14);
    }
#line 837 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__TypeSpecPreds_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 0)));
#line 837 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 1)));
#line 837 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 2)));
#line 837 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__TypeSpecInfo_14, (MR_Integer) 3)));
#line 839 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__HigherOrder_12 == (MR_Integer) 1);
#line 840 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 840 "mercury_compile_middle_passes.m"
      {
#line 840 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Types_13 == (MR_Integer) 1);
#line 840 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 841 "mercury_compile_middle_passes.m"
          {
#line 841 "mercury_compile_middle_passes.m"
            {
#line 841 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__succeeded = mercury__set__is_non_empty_1_p_0((MR_Word) &hlds__hlds_pred__hlds__hlds_pred__type_ctor_info_pred_proc_id_0, top_level__mercury_compile_middle_passes__TypeSpecPreds_15);
            }
#line 841 "mercury_compile_middle_passes.m"
          }
#line 840 "mercury_compile_middle_passes.m"
      }
#line 852 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 846 "mercury_compile_middle_passes.m"
      {
#line 844 "mercury_compile_middle_passes.m"
        {
#line 844 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Specializing higher-order and polymorphic predicates...\n");
        }
#line 847 "mercury_compile_middle_passes.m"
        {
#line 847 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 849 "mercury_compile_middle_passes.m"
        {
#line 849 "mercury_compile_middle_passes.m"
          transform_hlds__higher_order__specialize_higher_order_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);
        }
#line 850 "mercury_compile_middle_passes.m"
        {
#line 850 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 851 "mercury_compile_middle_passes.m"
        {
#line 851 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 851 "mercury_compile_middle_passes.m"
          return;
        }
#line 846 "mercury_compile_middle_passes.m"
      }
#line 852 "mercury_compile_middle_passes.m"
    else
#line 853 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19;
#line 826 "mercury_compile_middle_passes.m"
  }
#line 823 "mercury_compile_middle_passes.m"
}

#line 804 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(
#line 804 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 804 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 804 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 804 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 804 "mercury_compile_middle_passes.m"
{
#line 807 "mercury_compile_middle_passes.m"
  {
#line 807 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 807 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 807 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Tuple_12;

#line 808 "mercury_compile_middle_passes.m"
    {
#line 808 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 809 "mercury_compile_middle_passes.m"
    {
#line 809 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 399, &top_level__mercury_compile_middle_passes__Tuple_12);
    }
#line 817 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Tuple_12 == (MR_Integer) 0))
#line 818 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 817 "mercury_compile_middle_passes.m"
    else
#line 811 "mercury_compile_middle_passes.m"
      {
#line 812 "mercury_compile_middle_passes.m"
        {
#line 812 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Tupling...\n");
        }
#line 813 "mercury_compile_middle_passes.m"
        {
#line 813 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 814 "mercury_compile_middle_passes.m"
        {
#line 814 "mercury_compile_middle_passes.m"
          transform_hlds__tupling__tuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 815 "mercury_compile_middle_passes.m"
        {
#line 815 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 816 "mercury_compile_middle_passes.m"
        {
#line 816 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 816 "mercury_compile_middle_passes.m"
          return;
        }
#line 811 "mercury_compile_middle_passes.m"
      }
#line 807 "mercury_compile_middle_passes.m"
  }
#line 804 "mercury_compile_middle_passes.m"
}

#line 795 "mercury_compile_middle_passes.m"
static MR_bool MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1(
#line 795 "mercury_compile_middle_passes.m"
  MR_Box top_level__mercury_compile_middle_passes__closure_arg)
#line 795 "mercury_compile_middle_passes.m"
{
#line 795 "mercury_compile_middle_passes.m"
  {
#line 795 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 795 "mercury_compile_middle_passes.m"
    MR_Box top_level__mercury_compile_middle_passes__closure = top_level__mercury_compile_middle_passes__closure_arg;

#line 795 "mercury_compile_middle_passes.m"
    {
#line 795 "mercury_compile_middle_passes.m"
      return top_level__mercury_compile_middle_passes__succeeded = top_level__mercury_compile_middle_passes__IntroducedFrom__pred__maybe_untuple_arguments__795__1_2_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__closure, (MR_Integer) 4))));
    }
#line 795 "mercury_compile_middle_passes.m"
    return top_level__mercury_compile_middle_passes__succeeded;
#line 795 "mercury_compile_middle_passes.m"
  }
#line 795 "mercury_compile_middle_passes.m"
}

#line 781 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(
#line 781 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 781 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 781 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 781 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 781 "mercury_compile_middle_passes.m"
{
#line 784 "mercury_compile_middle_passes.m"
  {
#line 784 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 784 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 784 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Untuple_12;

#line 785 "mercury_compile_middle_passes.m"
    {
#line 785 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 786 "mercury_compile_middle_passes.m"
    {
#line 786 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 398, &top_level__mercury_compile_middle_passes__Untuple_12);
    }
#line 798 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Untuple_12 == (MR_Integer) 0))
#line 799 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 798 "mercury_compile_middle_passes.m"
    else
#line 788 "mercury_compile_middle_passes.m"
      {
#line 788 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__SimplifySpecs_13;
#line 788 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 788 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_31_31;
#line 788 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__V_35_35;

#line 789 "mercury_compile_middle_passes.m"
        {
#line 789 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Untupling...\n");
        }
#line 790 "mercury_compile_middle_passes.m"
        {
#line 790 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 791 "mercury_compile_middle_passes.m"
        {
#line 791 "mercury_compile_middle_passes.m"
          transform_hlds__untupling__untuple_arguments_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22);
        }
#line 792 "mercury_compile_middle_passes.m"
        {
#line 792 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 793 "mercury_compile_middle_passes.m"
        {
#line 793 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 1, top_level__mercury_compile_middle_passes__Verbose_7, top_level__mercury_compile_middle_passes__Stats_8, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__SimplifySpecs_13);
        }
#line 795 "mercury_compile_middle_passes.m"
        {
#line 795 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_35_35 = parse_tree__error_util__contains_errors_2_f_0(top_level__mercury_compile_middle_passes__Globals_11, top_level__mercury_compile_middle_passes__SimplifySpecs_13);
        }
#line 795 "mercury_compile_middle_passes.m"
        {
#line 795 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__V_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 795 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 0) = ((MR_Box) (&top_level__mercury_compile_middle_passes_scalar_common_2[0]));
#line 795 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 1) = ((MR_Box) (top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0_1));
#line 795 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 795 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 3) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_35_35));
#line 795 "mercury_compile_middle_passes.m"
          MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__V_31_31, 4) = ((MR_Box) ((MR_Integer) 0));
#line 795 "mercury_compile_middle_passes.m"
        }
#line 795 "mercury_compile_middle_passes.m"
        {
#line 795 "mercury_compile_middle_passes.m"
          mercury__require__expect_4_p_0(top_level__mercury_compile_middle_passes__V_31_31, (MR_String) "top_level.mercury_compile_middle_passes", (MR_String) "predicate \140top_level.mercury_compile_middle_passes.maybe_untuple_arguments\'/6", (MR_String) "simplify has errors");
        }
#line 797 "mercury_compile_middle_passes.m"
        {
#line 797 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 797 "mercury_compile_middle_passes.m"
          return;
        }
#line 788 "mercury_compile_middle_passes.m"
      }
#line 784 "mercury_compile_middle_passes.m"
  }
#line 781 "mercury_compile_middle_passes.m"
}

#line 743 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__HLDS0_9,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_10,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_11,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_12,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21,
#line 743 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22)
#line 743 "mercury_compile_middle_passes.m"
{
#line 746 "mercury_compile_middle_passes.m"
  {
#line 746 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 746 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_15;
#line 746 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__GenBytecode_16;

#line 747 "mercury_compile_middle_passes.m"
    {
#line 747 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__HLDS0_9, &top_level__mercury_compile_middle_passes__Globals_15);
    }
#line 748 "mercury_compile_middle_passes.m"
    {
#line 748 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_15, (MR_Integer) 135, &top_level__mercury_compile_middle_passes__GenBytecode_16);
    }
#line 775 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__GenBytecode_16 == (MR_Integer) 0))
#line 776 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21;
#line 775 "mercury_compile_middle_passes.m"
    else
#line 750 "mercury_compile_middle_passes.m"
      {
#line 750 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__HLDS1_17;
#line 750 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Bytecode_18;
#line 750 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__BytedebugFile_19;
#line 750 "mercury_compile_middle_passes.m"
        MR_String top_level__mercury_compile_middle_passes__BytecodeFile_20;

#line 751 "mercury_compile_middle_passes.m"
        {
#line 751 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_llds_back_end__map_args_to_regs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__Stats_12, top_level__mercury_compile_middle_passes__HLDS0_9, &top_level__mercury_compile_middle_passes__HLDS1_17);
        }
#line 752 "mercury_compile_middle_passes.m"
        {
#line 752 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__HLDS1_17, (MR_Integer) 505, (MR_String) "bytecode_args_to_regs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_21, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_22);
        }
#line 753 "mercury_compile_middle_passes.m"
        {
#line 753 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Generating bytecodes...\n");
        }
#line 754 "mercury_compile_middle_passes.m"
        {
#line 754 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
        }
#line 755 "mercury_compile_middle_passes.m"
        {
#line 755 "mercury_compile_middle_passes.m"
          bytecode_backend__bytecode_gen__gen_module_4_p_0(top_level__mercury_compile_middle_passes__HLDS1_17, &top_level__mercury_compile_middle_passes__Bytecode_18);
        }
#line 756 "mercury_compile_middle_passes.m"
        {
#line 756 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% done.\n");
        }
#line 757 "mercury_compile_middle_passes.m"
        {
#line 757 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_12);
        }
#line 758 "mercury_compile_middle_passes.m"
        {
#line 758 "mercury_compile_middle_passes.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_15, top_level__mercury_compile_middle_passes__ModuleName_10, (MR_String) ".bytedebug", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytedebugFile_19);
        }
#line 760 "mercury_compile_middle_passes.m"
        {
#line 760 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Writing bytecodes to \140");
        }
#line 761 "mercury_compile_middle_passes.m"
        {
#line 761 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__BytedebugFile_19);
        }
#line 762 "mercury_compile_middle_passes.m"
        {
#line 762 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "\'...");
        }
#line 763 "mercury_compile_middle_passes.m"
        {
#line 763 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
        }
#line 764 "mercury_compile_middle_passes.m"
        {
#line 764 "mercury_compile_middle_passes.m"
          bytecode_backend__bytecode__debug_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytedebugFile_19, top_level__mercury_compile_middle_passes__Bytecode_18);
        }
#line 765 "mercury_compile_middle_passes.m"
        {
#line 765 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) " done.\n");
        }
#line 766 "mercury_compile_middle_passes.m"
        {
#line 766 "mercury_compile_middle_passes.m"
          parse_tree__file_names__module_name_to_file_name_7_p_0(top_level__mercury_compile_middle_passes__Globals_15, top_level__mercury_compile_middle_passes__ModuleName_10, (MR_String) ".mbc", (MR_Integer) 0, &top_level__mercury_compile_middle_passes__BytecodeFile_20);
        }
#line 768 "mercury_compile_middle_passes.m"
        {
#line 768 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "% Writing bytecodes to \140");
        }
#line 769 "mercury_compile_middle_passes.m"
        {
#line 769 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, top_level__mercury_compile_middle_passes__BytecodeFile_20);
        }
#line 770 "mercury_compile_middle_passes.m"
        {
#line 770 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) "\'...");
        }
#line 771 "mercury_compile_middle_passes.m"
        {
#line 771 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_11);
        }
#line 772 "mercury_compile_middle_passes.m"
        {
#line 772 "mercury_compile_middle_passes.m"
          bytecode_backend__bytecode__output_bytecode_file_4_p_0(top_level__mercury_compile_middle_passes__BytecodeFile_20, top_level__mercury_compile_middle_passes__Bytecode_18);
        }
#line 773 "mercury_compile_middle_passes.m"
        {
#line 773 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_11, (MR_String) " done.\n");
        }
#line 774 "mercury_compile_middle_passes.m"
        {
#line 774 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_12);
#line 774 "mercury_compile_middle_passes.m"
          return;
        }
#line 750 "mercury_compile_middle_passes.m"
      }
#line 746 "mercury_compile_middle_passes.m"
  }
#line 743 "mercury_compile_middle_passes.m"
}

#line 704 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(
#line 704 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 704 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 704 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 704 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 704 "mercury_compile_middle_passes.m"
{
#line 707 "mercury_compile_middle_passes.m"
  {
#line 707 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 707 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 707 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__WarnDead_12;

#line 708 "mercury_compile_middle_passes.m"
    {
#line 708 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 709 "mercury_compile_middle_passes.m"
    {
#line 709 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 29, &top_level__mercury_compile_middle_passes__WarnDead_12);
    }
#line 737 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__WarnDead_12 == (MR_Integer) 0))
#line 738 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 737 "mercury_compile_middle_passes.m"
    else
#line 711 "mercury_compile_middle_passes.m"
      {
#line 711 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 711 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 715 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes___HLDS1_13;
#line 718 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 712 "mercury_compile_middle_passes.m"
        {
#line 712 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Warning about dead procedures...\n");
        }
#line 714 "mercury_compile_middle_passes.m"
        {
#line 714 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 715 "mercury_compile_middle_passes.m"
        {
#line 715 "mercury_compile_middle_passes.m"
          transform_hlds__dead_proc_elim__dead_proc_elim_4_p_0((MR_Integer) 1, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes___HLDS1_13, &top_level__mercury_compile_middle_passes__Specs_14);
        }
#line 716 "mercury_compile_middle_passes.m"
        {
#line 716 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 717 "mercury_compile_middle_passes.m"
        {
#line 717 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
        }
#line 718 "mercury_compile_middle_passes.m"
        {
#line 718 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
        }
#line 719 "mercury_compile_middle_passes.m"
        {
#line 719 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
#line 719 "mercury_compile_middle_passes.m"
          return;
        }
#line 711 "mercury_compile_middle_passes.m"
      }
#line 707 "mercury_compile_middle_passes.m"
  }
#line 704 "mercury_compile_middle_passes.m"
}

#line 684 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(
#line 684 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 684 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 684 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 684 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 684 "mercury_compile_middle_passes.m"
{
#line 687 "mercury_compile_middle_passes.m"
  {
#line 687 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 687 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 687 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TypeCtorInfo_12;

#line 688 "mercury_compile_middle_passes.m"
    {
#line 688 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 689 "mercury_compile_middle_passes.m"
    {
#line 689 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 278, &top_level__mercury_compile_middle_passes__TypeCtorInfo_12);
    }
#line 698 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TypeCtorInfo_12 == (MR_Integer) 0))
#line 699 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 698 "mercury_compile_middle_passes.m"
    else
#line 691 "mercury_compile_middle_passes.m"
      {
#line 692 "mercury_compile_middle_passes.m"
        {
#line 692 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Generating type_ctor_info structures...");
        }
#line 694 "mercury_compile_middle_passes.m"
        {
#line 694 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 695 "mercury_compile_middle_passes.m"
        {
#line 695 "mercury_compile_middle_passes.m"
          backend_libs__type_ctor_info__generate_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 696 "mercury_compile_middle_passes.m"
        {
#line 696 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
        }
#line 697 "mercury_compile_middle_passes.m"
        {
#line 697 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 697 "mercury_compile_middle_passes.m"
          return;
        }
#line 691 "mercury_compile_middle_passes.m"
      }
#line 687 "mercury_compile_middle_passes.m"
  }
#line 684 "mercury_compile_middle_passes.m"
}

#line 661 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(
#line 661 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 661 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 661 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 661 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15)
#line 661 "mercury_compile_middle_passes.m"
{
#line 664 "mercury_compile_middle_passes.m"
  {
#line 664 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 664 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 664 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Polymorphism_12;
#line 664 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_13;

#line 665 "mercury_compile_middle_passes.m"
    {
#line 665 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 666 "mercury_compile_middle_passes.m"
    {
#line 666 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 305, &top_level__mercury_compile_middle_passes__Polymorphism_12);
    }
#line 667 "mercury_compile_middle_passes.m"
    {
#line 667 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 422, &top_level__mercury_compile_middle_passes__Termination2_13);
    }
#line 671 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Polymorphism_12 == (MR_Integer) 1);
#line 671 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 672 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Termination2_13 == (MR_Integer) 1);
#line 678 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 674 "mercury_compile_middle_passes.m"
      {
#line 674 "mercury_compile_middle_passes.m"
        {
#line 674 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination 2...\n");
        }
#line 675 "mercury_compile_middle_passes.m"
        {
#line 675 "mercury_compile_middle_passes.m"
          transform_hlds__term_constr_main__pass_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15);
        }
#line 676 "mercury_compile_middle_passes.m"
        {
#line 676 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination 2 checking done.\n");
        }
#line 677 "mercury_compile_middle_passes.m"
        {
#line 677 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 677 "mercury_compile_middle_passes.m"
          return;
        }
#line 674 "mercury_compile_middle_passes.m"
      }
#line 678 "mercury_compile_middle_passes.m"
    else
#line 679 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_15 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 664 "mercury_compile_middle_passes.m"
  }
#line 661 "mercury_compile_middle_passes.m"
}

#line 636 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(
#line 636 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 636 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 636 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 636 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18)
#line 636 "mercury_compile_middle_passes.m"
{
#line 639 "mercury_compile_middle_passes.m"
  {
#line 639 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 639 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 639 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Polymorphism_12;
#line 639 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_13;

#line 640 "mercury_compile_middle_passes.m"
    {
#line 640 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 641 "mercury_compile_middle_passes.m"
    {
#line 641 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 305, &top_level__mercury_compile_middle_passes__Polymorphism_12);
    }
#line 642 "mercury_compile_middle_passes.m"
    {
#line 642 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 415, &top_level__mercury_compile_middle_passes__Termination_13);
    }
#line 646 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Polymorphism_12 == (MR_Integer) 1);
#line 646 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 647 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Termination_13 == (MR_Integer) 1);
#line 655 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 649 "mercury_compile_middle_passes.m"
      {
#line 649 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_14;
#line 649 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_16;
#line 649 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25;
#line 652 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_15;

#line 649 "mercury_compile_middle_passes.m"
        {
#line 649 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Detecting termination...\n");
        }
#line 650 "mercury_compile_middle_passes.m"
        {
#line 650 "mercury_compile_middle_passes.m"
          transform_hlds__termination__analyse_termination_in_module_5_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_middle_passes__Specs_14);
        }
#line 651 "mercury_compile_middle_passes.m"
        {
#line 651 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Termination checking done.\n");
        }
#line 652 "mercury_compile_middle_passes.m"
        {
#line 652 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_14, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_15, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_16);
        }
#line 653 "mercury_compile_middle_passes.m"
        {
#line 653 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
        }
#line 654 "mercury_compile_middle_passes.m"
        {
#line 654 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 654 "mercury_compile_middle_passes.m"
          return;
        }
#line 649 "mercury_compile_middle_passes.m"
      }
#line 655 "mercury_compile_middle_passes.m"
    else
#line 656 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 639 "mercury_compile_middle_passes.m"
  }
#line 636 "mercury_compile_middle_passes.m"
}

#line 618 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(
#line 618 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 618 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 618 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 618 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 618 "mercury_compile_middle_passes.m"
{
#line 621 "mercury_compile_middle_passes.m"
  {
#line 621 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 621 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 621 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_12;

#line 622 "mercury_compile_middle_passes.m"
    {
#line 622 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 623 "mercury_compile_middle_passes.m"
    {
#line 623 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 430, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_12);
    }
#line 630 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ExceptionAnalysis_12 == (MR_Integer) 0))
#line 631 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 630 "mercury_compile_middle_passes.m"
    else
#line 625 "mercury_compile_middle_passes.m"
      {
#line 626 "mercury_compile_middle_passes.m"
        {
#line 626 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing exceptions...\n");
        }
#line 627 "mercury_compile_middle_passes.m"
        {
#line 627 "mercury_compile_middle_passes.m"
          transform_hlds__exception_analysis__analyse_exceptions_in_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 628 "mercury_compile_middle_passes.m"
        {
#line 628 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 629 "mercury_compile_middle_passes.m"
        {
#line 629 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 629 "mercury_compile_middle_passes.m"
          return;
        }
#line 625 "mercury_compile_middle_passes.m"
      }
#line 621 "mercury_compile_middle_passes.m"
  }
#line 618 "mercury_compile_middle_passes.m"
}

#line 600 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(
#line 600 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 600 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 600 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13,
#line 600 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14)
#line 600 "mercury_compile_middle_passes.m"
{
#line 603 "mercury_compile_middle_passes.m"
  {
#line 603 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 603 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 603 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;

#line 604 "mercury_compile_middle_passes.m"
    {
#line 604 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 605 "mercury_compile_middle_passes.m"
    {
#line 605 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 431, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 612 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 0))
#line 613 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13;
#line 612 "mercury_compile_middle_passes.m"
    else
#line 607 "mercury_compile_middle_passes.m"
      {
#line 608 "mercury_compile_middle_passes.m"
        {
#line 608 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Analysing closures...\n");
        }
#line 609 "mercury_compile_middle_passes.m"
        {
#line 609 "mercury_compile_middle_passes.m"
          transform_hlds__closure_analysis__closure_analyse_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_13, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_14);
        }
#line 610 "mercury_compile_middle_passes.m"
        {
#line 610 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 611 "mercury_compile_middle_passes.m"
        {
#line 611 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 611 "mercury_compile_middle_passes.m"
          return;
        }
#line 607 "mercury_compile_middle_passes.m"
      }
#line 603 "mercury_compile_middle_passes.m"
  }
#line 600 "mercury_compile_middle_passes.m"
}

#line 588 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(
#line 588 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 588 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 588 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 588 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 588 "mercury_compile_middle_passes.m"
{
#line 591 "mercury_compile_middle_passes.m"
  {
#line 591 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 592 "mercury_compile_middle_passes.m"
    {
#line 592 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Fully expanding equivalence types...");
    }
#line 593 "mercury_compile_middle_passes.m"
    {
#line 593 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 594 "mercury_compile_middle_passes.m"
    {
#line 594 "mercury_compile_middle_passes.m"
      transform_hlds__equiv_type_hlds__replace_in_hlds_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 595 "mercury_compile_middle_passes.m"
    {
#line 595 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 596 "mercury_compile_middle_passes.m"
    {
#line 596 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 596 "mercury_compile_middle_passes.m"
      return;
    }
#line 591 "mercury_compile_middle_passes.m"
  }
#line 588 "mercury_compile_middle_passes.m"
}

#line 576 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_stms_6_p_0(
#line 576 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 576 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 576 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 576 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 576 "mercury_compile_middle_passes.m"
{
#line 579 "mercury_compile_middle_passes.m"
  {
#line 579 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 580 "mercury_compile_middle_passes.m"
    {
#line 580 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming stm expressions...");
    }
#line 581 "mercury_compile_middle_passes.m"
    {
#line 581 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 582 "mercury_compile_middle_passes.m"
    {
#line 582 "mercury_compile_middle_passes.m"
      transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 583 "mercury_compile_middle_passes.m"
    {
#line 583 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 584 "mercury_compile_middle_passes.m"
    {
#line 584 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 584 "mercury_compile_middle_passes.m"
      return;
    }
#line 579 "mercury_compile_middle_passes.m"
  }
#line 576 "mercury_compile_middle_passes.m"
}

#line 564 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(
#line 564 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 564 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 564 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11,
#line 564 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12)
#line 564 "mercury_compile_middle_passes.m"
{
#line 567 "mercury_compile_middle_passes.m"
  {
#line 567 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;

#line 568 "mercury_compile_middle_passes.m"
    {
#line 568 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming lambda expressions...");
    }
#line 569 "mercury_compile_middle_passes.m"
    {
#line 569 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 570 "mercury_compile_middle_passes.m"
    {
#line 570 "mercury_compile_middle_passes.m"
      transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_12);
    }
#line 571 "mercury_compile_middle_passes.m"
    {
#line 571 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 572 "mercury_compile_middle_passes.m"
    {
#line 572 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 572 "mercury_compile_middle_passes.m"
      return;
    }
#line 567 "mercury_compile_middle_passes.m"
  }
#line 564 "mercury_compile_middle_passes.m"
}

#line 549 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__tabling_6_p_0(
#line 549 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 549 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 549 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15,
#line 549 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16)
#line 549 "mercury_compile_middle_passes.m"
{
#line 552 "mercury_compile_middle_passes.m"
  {
#line 552 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 552 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Specs_11;
#line 552 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 552 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes__NumErrors_14;
#line 552 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22;
#line 559 "mercury_compile_middle_passes.m"
    MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_13;

#line 553 "mercury_compile_middle_passes.m"
    {
#line 553 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Transforming tabled predicates...");
    }
#line 554 "mercury_compile_middle_passes.m"
    {
#line 554 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
    }
#line 555 "mercury_compile_middle_passes.m"
    {
#line 555 "mercury_compile_middle_passes.m"
      transform_hlds__table_gen__table_gen_process_module_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__Specs_11);
    }
#line 556 "mercury_compile_middle_passes.m"
    {
#line 556 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) " done.\n");
    }
#line 557 "mercury_compile_middle_passes.m"
    {
#line 557 "mercury_compile_middle_passes.m"
      libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
    }
#line 558 "mercury_compile_middle_passes.m"
    {
#line 558 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 559 "mercury_compile_middle_passes.m"
    {
#line 559 "mercury_compile_middle_passes.m"
      parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_11, top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_13, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_14);
    }
#line 560 "mercury_compile_middle_passes.m"
    {
#line 560 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_22_22, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_16);
#line 560 "mercury_compile_middle_passes.m"
      return;
    }
#line 552 "mercury_compile_middle_passes.m"
  }
#line 549 "mercury_compile_middle_passes.m"
}

#line 500 "mercury_compile_middle_passes.m"
static void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(
#line 500 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16,
#line 500 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17)
#line 500 "mercury_compile_middle_passes.m"
{
#line 503 "mercury_compile_middle_passes.m"
  {
#line 503 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 503 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 503 "mercury_compile_middle_passes.m"
    MR_String top_level__mercury_compile_middle_passes__FileName_8;
#line 503 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9;
#line 503 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10;
#line 503 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__RecordTermSizes_11;

#line 504 "mercury_compile_middle_passes.m"
    {
#line 504 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 505 "mercury_compile_middle_passes.m"
    {
#line 505 "mercury_compile_middle_passes.m"
      libs__globals__lookup_string_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 212, &top_level__mercury_compile_middle_passes__FileName_8);
    }
#line 506 "mercury_compile_middle_passes.m"
    {
#line 506 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 210, &top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9);
    }
#line 508 "mercury_compile_middle_passes.m"
    {
#line 508 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 211, &top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10);
    }
#line 510 "mercury_compile_middle_passes.m"
    {
#line 510 "mercury_compile_middle_passes.m"
      mercury__bool__or_3_p_0(top_level__mercury_compile_middle_passes__RecordTermSizesAsWords_9, top_level__mercury_compile_middle_passes__RecordTermSizesAsCells_10, &top_level__mercury_compile_middle_passes__RecordTermSizes_11);
    }
#line 511 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (strcmp(top_level__mercury_compile_middle_passes__FileName_8, (MR_String) "") == 0);
#line 528 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 527 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 528 "mercury_compile_middle_passes.m"
    else
#line 535 "mercury_compile_middle_passes.m"
      {
#line 535 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__MaybeNumProcMap_12;

#line 531 "mercury_compile_middle_passes.m"
        if ((top_level__mercury_compile_middle_passes__RecordTermSizes_11 == (MR_Integer) 0))
#line 532 "mercury_compile_middle_passes.m"
          {
#line 533 "mercury_compile_middle_passes.m"
            {
#line 533 "mercury_compile_middle_passes.m"
              libs__file_util__report_error_3_p_0((MR_String) "the --experimental-complexity option requires a term size profiling grade");
            }
#line 532 "mercury_compile_middle_passes.m"
          }
#line 531 "mercury_compile_middle_passes.m"
        else
#line 530 "mercury_compile_middle_passes.m"
          {
#line 530 "mercury_compile_middle_passes.m"
          }
#line 536 "mercury_compile_middle_passes.m"
        {
#line 536 "mercury_compile_middle_passes.m"
          transform_hlds__complexity__read_spec_file_4_p_0(top_level__mercury_compile_middle_passes__FileName_8, &top_level__mercury_compile_middle_passes__MaybeNumProcMap_12);
        }
#line 541 "mercury_compile_middle_passes.m"
        if (((MR_tag((MR_Word) top_level__mercury_compile_middle_passes__MaybeNumProcMap_12)) == (MR_mktag((MR_Integer) 1))))
#line 542 "mercury_compile_middle_passes.m"
          {
#line 542 "mercury_compile_middle_passes.m"
            MR_String top_level__mercury_compile_middle_passes__Msg_15 = ((MR_String) (MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));

#line 543 "mercury_compile_middle_passes.m"
            {
#line 543 "mercury_compile_middle_passes.m"
              libs__file_util__report_error_3_p_0(top_level__mercury_compile_middle_passes__Msg_15);
            }
#line 543 "mercury_compile_middle_passes.m"
            *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16;
#line 542 "mercury_compile_middle_passes.m"
          }
#line 541 "mercury_compile_middle_passes.m"
        else
#line 538 "mercury_compile_middle_passes.m"
          {
#line 538 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), top_level__mercury_compile_middle_passes__MaybeNumProcMap_12, (MR_Integer) 0)));
#line 538 "mercury_compile_middle_passes.m"
            MR_Word top_level__mercury_compile_middle_passes__V_30_30;

#line 539 "mercury_compile_middle_passes.m"
            {
#line 539 "mercury_compile_middle_passes.m"
              top_level__mercury_compile_middle_passes__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 539 "mercury_compile_middle_passes.m"
              MR_hl_field(MR_mktag(1), top_level__mercury_compile_middle_passes__V_30_30, 0) = ((MR_Box) (top_level__mercury_compile_middle_passes__V_29_29));
#line 539 "mercury_compile_middle_passes.m"
            }
#line 539 "mercury_compile_middle_passes.m"
            {
#line 539 "mercury_compile_middle_passes.m"
              hlds__hlds_module__module_info_set_maybe_complexity_proc_map_3_p_0(top_level__mercury_compile_middle_passes__V_30_30, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_16, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_17);
#line 539 "mercury_compile_middle_passes.m"
              return;
            }
#line 538 "mercury_compile_middle_passes.m"
          }
#line 535 "mercury_compile_middle_passes.m"
      }
#line 503 "mercury_compile_middle_passes.m"
  }
#line 500 "mercury_compile_middle_passes.m"
}

#line 37 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(
#line 37 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Verbose_7,
#line 37 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__Stats_8,
#line 37 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18,
#line 37 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19)
#line 37 "mercury_compile_middle_passes.m"
{
#line 1090 "mercury_compile_middle_passes.m"
  {
#line 1090 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 1090 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_11;
#line 1090 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Intermod_12;
#line 1090 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Optimize_13;
#line 1090 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Warn_14;

#line 1091 "mercury_compile_middle_passes.m"
    {
#line 1091 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__Globals_11);
    }
#line 1092 "mercury_compile_middle_passes.m"
    {
#line 1092 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 352, &top_level__mercury_compile_middle_passes__Intermod_12);
    }
#line 1093 "mercury_compile_middle_passes.m"
    {
#line 1093 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 351, &top_level__mercury_compile_middle_passes__Optimize_13);
    }
#line 1094 "mercury_compile_middle_passes.m"
    {
#line 1094 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 10, &top_level__mercury_compile_middle_passes__Warn_14);
    }
#line 1096 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Optimize_13 == (MR_Integer) 1);
#line 1097 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1097 "mercury_compile_middle_passes.m"
      {
#line 1097 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Warn_14 == (MR_Integer) 1);
#line 1097 "mercury_compile_middle_passes.m"
        if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 1098 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__Intermod_12 == (MR_Integer) 1);
#line 1097 "mercury_compile_middle_passes.m"
      }
#line 1108 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 1101 "mercury_compile_middle_passes.m"
      {
#line 1101 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__Specs_15;
#line 1101 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes__NumErrors_17;
#line 1101 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28;
#line 1104 "mercury_compile_middle_passes.m"
        MR_Integer top_level__mercury_compile_middle_passes___NumWarnings_16;

#line 1101 "mercury_compile_middle_passes.m"
        {
#line 1101 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% Finding unused arguments ...\n");
        }
#line 1102 "mercury_compile_middle_passes.m"
        {
#line 1102 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_7);
        }
#line 1103 "mercury_compile_middle_passes.m"
        {
#line 1103 "mercury_compile_middle_passes.m"
          transform_hlds__unused_args__unused_args_process_module_6_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes__Specs_15);
        }
#line 1104 "mercury_compile_middle_passes.m"
        {
#line 1104 "mercury_compile_middle_passes.m"
          parse_tree__error_util__write_error_specs_8_p_0(top_level__mercury_compile_middle_passes__Specs_15, top_level__mercury_compile_middle_passes__Globals_11, (MR_Integer) 0, &top_level__mercury_compile_middle_passes___NumWarnings_16, (MR_Integer) 0, &top_level__mercury_compile_middle_passes__NumErrors_17);
        }
#line 1105 "mercury_compile_middle_passes.m"
        {
#line 1105 "mercury_compile_middle_passes.m"
          hlds__hlds_module__module_info_incr_num_errors_3_p_0(top_level__mercury_compile_middle_passes__NumErrors_17, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_28_28, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19);
        }
#line 1106 "mercury_compile_middle_passes.m"
        {
#line 1106 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_7, (MR_String) "% done.\n");
        }
#line 1107 "mercury_compile_middle_passes.m"
        {
#line 1107 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_8);
#line 1107 "mercury_compile_middle_passes.m"
          return;
        }
#line 1101 "mercury_compile_middle_passes.m"
      }
#line 1108 "mercury_compile_middle_passes.m"
    else
#line 1109 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_19 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_18;
#line 1090 "mercury_compile_middle_passes.m"
  }
#line 37 "mercury_compile_middle_passes.m"
}

#line 34 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__output_analysis_file_5_p_0(
#line 34 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 34 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18,
#line 34 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19)
#line 34 "mercury_compile_middle_passes.m"
{
#line 432 "mercury_compile_middle_passes.m"
  {
#line 432 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__AnalysisInfo_14;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ImportedModules_15;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_91_91;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_97_97;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_103_103;
#line 432 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105;
#line 488 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___AnalysisInfo_16;

#line 433 "mercury_compile_middle_passes.m"
    {
#line 433 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 434 "mercury_compile_middle_passes.m"
    {
#line 434 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 435 "mercury_compile_middle_passes.m"
    {
#line 435 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 436 "mercury_compile_middle_passes.m"
    {
#line 436 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 431, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 437 "mercury_compile_middle_passes.m"
    {
#line 437 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 407, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 443 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 444 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 444 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 448 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 447 "mercury_compile_middle_passes.m"
      {
#line 447 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26);
      }
#line 448 "mercury_compile_middle_passes.m"
    else
#line 449 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17;
#line 451 "mercury_compile_middle_passes.m"
    {
#line 451 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_18, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30);
    }
#line 452 "mercury_compile_middle_passes.m"
    {
#line 452 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_26_26, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32);
    }
#line 453 "mercury_compile_middle_passes.m"
    {
#line 453 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_30_30, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36);
    }
#line 454 "mercury_compile_middle_passes.m"
    {
#line 454 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_32_32, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38);
    }
#line 455 "mercury_compile_middle_passes.m"
    {
#line 455 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_36_36, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42);
    }
#line 456 "mercury_compile_middle_passes.m"
    {
#line 456 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44);
    }
#line 457 "mercury_compile_middle_passes.m"
    {
#line 457 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_42_42, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48);
    }
#line 458 "mercury_compile_middle_passes.m"
    {
#line 458 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50);
    }
#line 459 "mercury_compile_middle_passes.m"
    {
#line 459 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_48_48, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54);
    }
#line 472 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 0))
#line 473 "mercury_compile_middle_passes.m"
      {
#line 473 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 473 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54;
#line 473 "mercury_compile_middle_passes.m"
      }
#line 472 "mercury_compile_middle_passes.m"
    else
#line 461 "mercury_compile_middle_passes.m"
      {
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56;
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60;
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62;
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68;
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_69_69;
#line 461 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73;

#line 464 "mercury_compile_middle_passes.m"
        {
#line 464 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56);
        }
#line 465 "mercury_compile_middle_passes.m"
        {
#line 465 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_54_54, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60);
        }
#line 466 "mercury_compile_middle_passes.m"
        {
#line 466 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_56_56, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62);
        }
#line 467 "mercury_compile_middle_passes.m"
        {
#line 467 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_60_60, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
        }
#line 468 "mercury_compile_middle_passes.m"
        {
#line 468 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_62_62, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_69_69);
        }
#line 469 "mercury_compile_middle_passes.m"
        {
#line 469 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_69_69, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73);
        }
#line 470 "mercury_compile_middle_passes.m"
        {
#line 470 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_68_68, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75);
        }
#line 471 "mercury_compile_middle_passes.m"
        {
#line 471 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79);
        }
#line 461 "mercury_compile_middle_passes.m"
      }
#line 475 "mercury_compile_middle_passes.m"
    {
#line 475 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81);
    }
#line 476 "mercury_compile_middle_passes.m"
    {
#line 476 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85);
    }
#line 477 "mercury_compile_middle_passes.m"
    {
#line 477 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87);
    }
#line 478 "mercury_compile_middle_passes.m"
    {
#line 478 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_91_91);
    }
#line 479 "mercury_compile_middle_passes.m"
    {
#line 479 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_87_87, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93);
    }
#line 480 "mercury_compile_middle_passes.m"
    {
#line 480 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_91_91, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_97_97);
    }
#line 481 "mercury_compile_middle_passes.m"
    {
#line 481 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_93_93, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99);
    }
#line 482 "mercury_compile_middle_passes.m"
    {
#line 482 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_97_97, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_103_103);
    }
#line 483 "mercury_compile_middle_passes.m"
    {
#line 483 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_99_99, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105);
    }
#line 484 "mercury_compile_middle_passes.m"
    {
#line 484 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_103_103, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_19);
    }
#line 486 "mercury_compile_middle_passes.m"
    {
#line 486 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_analysis_info_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, &top_level__mercury_compile_middle_passes__AnalysisInfo_14);
    }
#line 487 "mercury_compile_middle_passes.m"
    {
#line 487 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_all_deps_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, &top_level__mercury_compile_middle_passes__ImportedModules_15);
    }
#line 488 "mercury_compile_middle_passes.m"
    mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 488 "mercury_compile_middle_passes.m"
    {
#line 488 "mercury_compile_middle_passes.m"
      analysis__write_analysis_files_7_p_0((MR_Word) &top_level__mercury_compile_middle_passes_scalar_common_1[0], ((MR_Box) ((MR_Integer) 0)), top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_105_105, top_level__mercury_compile_middle_passes__ImportedModules_15, top_level__mercury_compile_middle_passes__AnalysisInfo_14, &top_level__mercury_compile_middle_passes___AnalysisInfo_16);
    }
#line 432 "mercury_compile_middle_passes.m"
  }
#line 34 "mercury_compile_middle_passes.m"
}

#line 31 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__output_trans_opt_file_5_p_0(
#line 31 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14,
#line 31 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15,
#line 31 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16)
#line 31 "mercury_compile_middle_passes.m"
{
#line 377 "mercury_compile_middle_passes.m"
  {
#line 377 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_9;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_10;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_11;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_12;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_13;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94;
#line 377 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96;

#line 378 "mercury_compile_middle_passes.m"
    {
#line 378 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__Globals_9);
    }
#line 379 "mercury_compile_middle_passes.m"
    {
#line 379 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_10);
    }
#line 380 "mercury_compile_middle_passes.m"
    {
#line 380 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_11);
    }
#line 381 "mercury_compile_middle_passes.m"
    {
#line 381 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 431, &top_level__mercury_compile_middle_passes__ClosureAnalysis_12);
    }
#line 382 "mercury_compile_middle_passes.m"
    {
#line 382 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_9, (MR_Integer) 407, &top_level__mercury_compile_middle_passes__SharingAnalysis_13);
    }
#line 388 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_12 == (MR_Integer) 1);
#line 389 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 389 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 1);
#line 393 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 392 "mercury_compile_middle_passes.m"
      {
#line 392 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23);
      }
#line 393 "mercury_compile_middle_passes.m"
    else
#line 394 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_14;
#line 396 "mercury_compile_middle_passes.m"
    {
#line 396 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_15, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27);
    }
#line 397 "mercury_compile_middle_passes.m"
    {
#line 397 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_23_23, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29);
    }
#line 398 "mercury_compile_middle_passes.m"
    {
#line 398 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33);
    }
#line 399 "mercury_compile_middle_passes.m"
    {
#line 399 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_29_29, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35);
    }
#line 400 "mercury_compile_middle_passes.m"
    {
#line 400 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39);
    }
#line 401 "mercury_compile_middle_passes.m"
    {
#line 401 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_35_35, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41);
    }
#line 402 "mercury_compile_middle_passes.m"
    {
#line 402 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45);
    }
#line 403 "mercury_compile_middle_passes.m"
    {
#line 403 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_41_41, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47);
    }
#line 404 "mercury_compile_middle_passes.m"
    {
#line 404 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, (MR_Integer) 121, (MR_String) "termination_2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51);
    }
#line 417 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__SharingAnalysis_13 == (MR_Integer) 0))
#line 418 "mercury_compile_middle_passes.m"
      {
#line 418 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47;
#line 418 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51;
#line 418 "mercury_compile_middle_passes.m"
      }
#line 417 "mercury_compile_middle_passes.m"
    else
#line 406 "mercury_compile_middle_passes.m"
      {
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53;
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57;
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59;
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63;
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65;
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66;
#line 406 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70;

#line 409 "mercury_compile_middle_passes.m"
        {
#line 409 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_47_47, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53);
        }
#line 410 "mercury_compile_middle_passes.m"
        {
#line 410 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57);
        }
#line 411 "mercury_compile_middle_passes.m"
        {
#line 411 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_53_53, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59);
        }
#line 412 "mercury_compile_middle_passes.m"
        {
#line 412 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63);
        }
#line 413 "mercury_compile_middle_passes.m"
        {
#line 413 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_59_59, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66);
        }
#line 414 "mercury_compile_middle_passes.m"
        {
#line 414 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_66_66, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70);
        }
#line 415 "mercury_compile_middle_passes.m"
        {
#line 415 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_65_65, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72);
        }
#line 416 "mercury_compile_middle_passes.m"
        {
#line 416 "mercury_compile_middle_passes.m"
          hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_70_70, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76);
        }
#line 406 "mercury_compile_middle_passes.m"
      }
#line 420 "mercury_compile_middle_passes.m"
    {
#line 420 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_72_72, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78);
    }
#line 421 "mercury_compile_middle_passes.m"
    {
#line 421 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_76_76, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82);
    }
#line 422 "mercury_compile_middle_passes.m"
    {
#line 422 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_78_78, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84);
    }
#line 423 "mercury_compile_middle_passes.m"
    {
#line 423 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_82_82, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88);
    }
#line 424 "mercury_compile_middle_passes.m"
    {
#line 424 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_84_84, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90);
    }
#line 425 "mercury_compile_middle_passes.m"
    {
#line 425 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_88_88, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94);
    }
#line 426 "mercury_compile_middle_passes.m"
    {
#line 426 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_10, top_level__mercury_compile_middle_passes__Stats_11, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_90_90, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
    }
#line 427 "mercury_compile_middle_passes.m"
    {
#line 427 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_94_94, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_16);
    }
#line 428 "mercury_compile_middle_passes.m"
    {
#line 428 "mercury_compile_middle_passes.m"
      transform_hlds__trans_opt__write_trans_opt_file_3_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_96_96);
#line 428 "mercury_compile_middle_passes.m"
      return;
    }
#line 377 "mercury_compile_middle_passes.m"
  }
#line 31 "mercury_compile_middle_passes.m"
}

#line 28 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_for_opt_file_4_p_0(
#line 28 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19,
#line 28 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20)
#line 28 "mercury_compile_middle_passes.m"
{
#line 287 "mercury_compile_middle_passes.m"
  {
#line 287 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_7;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__IntermodArgs_8;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination_9;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Termination2_10;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__SharingAnalysis_11;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ReuseAnalysis_12;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ExceptionAnalysis_13;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__ClosureAnalysis_14;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TrailingAnalysis_15;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__TablingAnalysis_16;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_17;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_18;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 287 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52;

#line 292 "mercury_compile_middle_passes.m"
    {
#line 292 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__Globals_7);
    }
#line 293 "mercury_compile_middle_passes.m"
    {
#line 293 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 352, &top_level__mercury_compile_middle_passes__IntermodArgs_8);
    }
#line 294 "mercury_compile_middle_passes.m"
    {
#line 294 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 415, &top_level__mercury_compile_middle_passes__Termination_9);
    }
#line 295 "mercury_compile_middle_passes.m"
    {
#line 295 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 422, &top_level__mercury_compile_middle_passes__Termination2_10);
    }
#line 296 "mercury_compile_middle_passes.m"
    {
#line 296 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 407, &top_level__mercury_compile_middle_passes__SharingAnalysis_11);
    }
#line 298 "mercury_compile_middle_passes.m"
    {
#line 298 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 409, &top_level__mercury_compile_middle_passes__ReuseAnalysis_12);
    }
#line 300 "mercury_compile_middle_passes.m"
    {
#line 300 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 430, &top_level__mercury_compile_middle_passes__ExceptionAnalysis_13);
    }
#line 302 "mercury_compile_middle_passes.m"
    {
#line 302 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 431, &top_level__mercury_compile_middle_passes__ClosureAnalysis_14);
    }
#line 304 "mercury_compile_middle_passes.m"
    {
#line 304 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 394, &top_level__mercury_compile_middle_passes__TrailingAnalysis_15);
    }
#line 306 "mercury_compile_middle_passes.m"
    {
#line 306 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 397, &top_level__mercury_compile_middle_passes__TablingAnalysis_16);
    }
#line 308 "mercury_compile_middle_passes.m"
    {
#line 308 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_17);
    }
#line 309 "mercury_compile_middle_passes.m"
    {
#line 309 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_7, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_18);
    }
#line 315 "mercury_compile_middle_passes.m"
    top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__ClosureAnalysis_14 == (MR_Integer) 1);
#line 316 "mercury_compile_middle_passes.m"
    if (!(top_level__mercury_compile_middle_passes__succeeded))
#line 316 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__succeeded = (top_level__mercury_compile_middle_passes__SharingAnalysis_11 == (MR_Integer) 1);
#line 322 "mercury_compile_middle_passes.m"
    if (top_level__mercury_compile_middle_passes__succeeded)
#line 319 "mercury_compile_middle_passes.m"
      {
#line 319 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34;
#line 319 "mercury_compile_middle_passes.m"
        MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_36_36;

#line 568 "mercury_compile_middle_passes.m"
        {
#line 568 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming lambda expressions...");
        }
#line 569 "mercury_compile_middle_passes.m"
        {
#line 569 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 570 "mercury_compile_middle_passes.m"
        {
#line 570 "mercury_compile_middle_passes.m"
          transform_hlds__lambda__expand_lambdas_in_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34);
        }
#line 571 "mercury_compile_middle_passes.m"
        {
#line 571 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 572 "mercury_compile_middle_passes.m"
        {
#line 572 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 580 "mercury_compile_middle_passes.m"
        {
#line 580 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) "% Transforming stm expressions...");
        }
#line 581 "mercury_compile_middle_passes.m"
        {
#line 581 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_flush_output_3_p_0(top_level__mercury_compile_middle_passes__Verbose_17);
        }
#line 582 "mercury_compile_middle_passes.m"
        {
#line 582 "mercury_compile_middle_passes.m"
          transform_hlds__stm_expand__stm_process_module_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_34_34, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_36_36);
        }
#line 583 "mercury_compile_middle_passes.m"
        {
#line 583 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_write_string_4_p_0(top_level__mercury_compile_middle_passes__Verbose_17, (MR_String) " done.\n");
        }
#line 584 "mercury_compile_middle_passes.m"
        {
#line 584 "mercury_compile_middle_passes.m"
          libs__file_util__maybe_report_stats_3_p_0(top_level__mercury_compile_middle_passes__Stats_18);
        }
#line 321 "mercury_compile_middle_passes.m"
        {
#line 321 "mercury_compile_middle_passes.m"
          top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_36_36, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38);
        }
#line 319 "mercury_compile_middle_passes.m"
      }
#line 322 "mercury_compile_middle_passes.m"
    else
#line 323 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_19;
#line 328 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ExceptionAnalysis_13 == (MR_Integer) 0))
#line 329 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38;
#line 328 "mercury_compile_middle_passes.m"
    else
#line 327 "mercury_compile_middle_passes.m"
      {
#line 327 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_38_38, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40);
      }
#line 334 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__IntermodArgs_8 == (MR_Integer) 0))
#line 335 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40;
#line 334 "mercury_compile_middle_passes.m"
    else
#line 333 "mercury_compile_middle_passes.m"
      {
#line 333 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_40_40, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42);
      }
#line 340 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Termination_9 == (MR_Integer) 0))
#line 341 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42;
#line 340 "mercury_compile_middle_passes.m"
    else
#line 339 "mercury_compile_middle_passes.m"
      {
#line 339 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_42_42, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44);
      }
#line 346 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__Termination2_10 == (MR_Integer) 0))
#line 347 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44;
#line 346 "mercury_compile_middle_passes.m"
    else
#line 345 "mercury_compile_middle_passes.m"
      {
#line 345 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_44_44, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46);
      }
#line 353 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__SharingAnalysis_11 == (MR_Integer) 0))
#line 354 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46;
#line 353 "mercury_compile_middle_passes.m"
    else
#line 351 "mercury_compile_middle_passes.m"
      {
#line 351 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_46_46, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48);
      }
#line 359 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__ReuseAnalysis_12 == (MR_Integer) 0))
#line 360 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48;
#line 359 "mercury_compile_middle_passes.m"
    else
#line 358 "mercury_compile_middle_passes.m"
      {
#line 358 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_48_48, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50);
      }
#line 365 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TrailingAnalysis_15 == (MR_Integer) 0))
#line 366 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50;
#line 365 "mercury_compile_middle_passes.m"
    else
#line 364 "mercury_compile_middle_passes.m"
      {
#line 364 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_50_50, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52);
      }
#line 371 "mercury_compile_middle_passes.m"
    if ((top_level__mercury_compile_middle_passes__TablingAnalysis_16 == (MR_Integer) 0))
#line 372 "mercury_compile_middle_passes.m"
      *top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20 = top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52;
#line 371 "mercury_compile_middle_passes.m"
    else
#line 370 "mercury_compile_middle_passes.m"
      {
#line 370 "mercury_compile_middle_passes.m"
        top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_17, top_level__mercury_compile_middle_passes__Stats_18, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_52_52, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_20);
#line 370 "mercury_compile_middle_passes.m"
        return;
      }
#line 287 "mercury_compile_middle_passes.m"
  }
#line 28 "mercury_compile_middle_passes.m"
}

#line 25 "mercury_compile_middle_passes.m"
void MR_CALL 
top_level__mercury_compile_middle_passes__middle_pass_7_p_0(
#line 25 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__ModuleName_8,
#line 25 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17,
#line 25 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18,
#line 25 "mercury_compile_middle_passes.m"
  MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19,
#line 25 "mercury_compile_middle_passes.m"
  MR_Word * top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20)
#line 25 "mercury_compile_middle_passes.m"
{
#line 112 "mercury_compile_middle_passes.m"
  {
#line 112 "mercury_compile_middle_passes.m"
    MR_bool top_level__mercury_compile_middle_passes__succeeded;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Globals_12;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Verbose_13;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__Stats_14;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_87_87;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_93_93;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_99_99;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_105_105;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_111_111;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_117_117;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_123_123;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_126_126;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_130_130;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_136_136;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_142_142;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_148_148;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_154_154;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_160_160;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_166_166;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_172_172;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_181_181;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_187_187;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_193_193;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_199_199;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_205_205;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_211_211;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_217_217;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_223_223;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_229_229;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_238_238;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_244_244;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_250_250;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_256_256;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_262_262;
#line 112 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_268_268;
#line 219 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_15;
#line 253 "mercury_compile_middle_passes.m"
    MR_Word top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_16;

#line 113 "mercury_compile_middle_passes.m"
    {
#line 113 "mercury_compile_middle_passes.m"
      hlds__hlds_module__module_info_get_globals_2_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__Globals_12);
    }
#line 114 "mercury_compile_middle_passes.m"
    {
#line 114 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 45, &top_level__mercury_compile_middle_passes__Verbose_13);
    }
#line 115 "mercury_compile_middle_passes.m"
    {
#line 115 "mercury_compile_middle_passes.m"
      libs__globals__lookup_bool_option_3_p_0(top_level__mercury_compile_middle_passes__Globals_12, (MR_Integer) 55, &top_level__mercury_compile_middle_passes__Stats_14);
    }
#line 117 "mercury_compile_middle_passes.m"
    {
#line 117 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_read_experimental_complexity_file_4_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_0_17, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25);
    }
#line 119 "mercury_compile_middle_passes.m"
    {
#line 119 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_25_25, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27);
    }
#line 120 "mercury_compile_middle_passes.m"
    {
#line 120 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, (MR_Integer) 105, (MR_String) "tabling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_0_19, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31);
    }
#line 122 "mercury_compile_middle_passes.m"
    {
#line 122 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_lambdas_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_27_27, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33);
    }
#line 123 "mercury_compile_middle_passes.m"
    {
#line 123 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, (MR_Integer) 110, (MR_String) "lambda", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_31_31, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37);
    }
#line 125 "mercury_compile_middle_passes.m"
    {
#line 125 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__process_stms_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_33_33, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39);
    }
#line 126 "mercury_compile_middle_passes.m"
    {
#line 126 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, (MR_Integer) 113, (MR_String) "stm", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_37_37, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43);
    }
#line 128 "mercury_compile_middle_passes.m"
    {
#line 128 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__expand_equiv_types_hlds_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_39_39, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45);
    }
#line 129 "mercury_compile_middle_passes.m"
    {
#line 129 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, (MR_Integer) 115, (MR_String) "equiv_types", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_43_43, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49);
    }
#line 131 "mercury_compile_middle_passes.m"
    {
#line 131 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_closure_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_45_45, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51);
    }
#line 132 "mercury_compile_middle_passes.m"
    {
#line 132 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, (MR_Integer) 117, (MR_String) "closure_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_49_49, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55);
    }
#line 153 "mercury_compile_middle_passes.m"
    {
#line 153 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_exception_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_51_51, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57);
    }
#line 154 "mercury_compile_middle_passes.m"
    {
#line 154 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, (MR_Integer) 118, (MR_String) "exception_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_55_55, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61);
    }
#line 156 "mercury_compile_middle_passes.m"
    {
#line 156 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_57_57, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63);
    }
#line 157 "mercury_compile_middle_passes.m"
    {
#line 157 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, (MR_Integer) 120, (MR_String) "termination", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_61_61, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67);
    }
#line 159 "mercury_compile_middle_passes.m"
    {
#line 159 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_termination2_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_63_63, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69);
    }
#line 160 "mercury_compile_middle_passes.m"
    {
#line 160 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, (MR_Integer) 121, (MR_String) "termination2", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_67_67, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73);
    }
#line 162 "mercury_compile_middle_passes.m"
    {
#line 162 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_type_ctor_infos_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_69_69, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75);
    }
#line 163 "mercury_compile_middle_passes.m"
    {
#line 163 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, (MR_Integer) 125, (MR_String) "type_ctor_infos", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_73_73, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79);
    }
#line 170 "mercury_compile_middle_passes.m"
    {
#line 170 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_warn_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_75_75, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81);
    }
#line 171 "mercury_compile_middle_passes.m"
    {
#line 171 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, (MR_Integer) 130, (MR_String) "warn_dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_79_79, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85);
    }
#line 173 "mercury_compile_middle_passes.m"
    {
#line 173 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_bytecodes_8_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, top_level__mercury_compile_middle_passes__ModuleName_8, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_85_85, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_87_87);
    }
#line 175 "mercury_compile_middle_passes.m"
    {
#line 175 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_untuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_81_81, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89);
    }
#line 176 "mercury_compile_middle_passes.m"
    {
#line 176 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89, (MR_Integer) 133, (MR_String) "untupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_87_87, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_93_93);
    }
#line 178 "mercury_compile_middle_passes.m"
    {
#line 178 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_tuple_arguments_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_89_89, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95);
    }
#line 179 "mercury_compile_middle_passes.m"
    {
#line 179 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95, (MR_Integer) 134, (MR_String) "tupling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_93_93, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_99_99);
    }
#line 181 "mercury_compile_middle_passes.m"
    {
#line 181 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_higher_order_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_95_95, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101);
    }
#line 182 "mercury_compile_middle_passes.m"
    {
#line 182 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101, (MR_Integer) 135, (MR_String) "higher_order", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_99_99, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_105_105);
    }
#line 184 "mercury_compile_middle_passes.m"
    {
#line 184 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_ssdb_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_101_101, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107);
    }
#line 185 "mercury_compile_middle_passes.m"
    {
#line 185 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107, (MR_Integer) 137, (MR_String) "ssdb", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_105_105, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_111_111);
    }
#line 187 "mercury_compile_middle_passes.m"
    {
#line 187 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_introduce_accumulators_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_107_107, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113);
    }
#line 188 "mercury_compile_middle_passes.m"
    {
#line 188 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113, (MR_Integer) 140, (MR_String) "accum", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_111_111, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_117_117);
    }
#line 190 "mercury_compile_middle_passes.m"
    {
#line 190 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_do_inlining_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_113_113, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119);
    }
#line 191 "mercury_compile_middle_passes.m"
    {
#line 191 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119, (MR_Integer) 145, (MR_String) "inlining", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_117_117, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_123_123);
    }
#line 195 "mercury_compile_middle_passes.m"
    {
#line 195 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_loop_inv_8_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_119_119, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_123_123, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_126_126);
    }
#line 196 "mercury_compile_middle_passes.m"
    {
#line 196 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125, (MR_Integer) 150, (MR_String) "loop_inv", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_126_126, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_130_130);
    }
#line 198 "mercury_compile_middle_passes.m"
    {
#line 198 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deforestation_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_125_125, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132);
    }
#line 199 "mercury_compile_middle_passes.m"
    {
#line 199 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132, (MR_Integer) 155, (MR_String) "deforestation", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_130_130, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_136_136);
    }
#line 201 "mercury_compile_middle_passes.m"
    {
#line 201 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_delay_construct_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_132_132, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138);
    }
#line 202 "mercury_compile_middle_passes.m"
    {
#line 202 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138, (MR_Integer) 160, (MR_String) "delay_construct", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_136_136, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_142_142);
    }
#line 204 "mercury_compile_middle_passes.m"
    {
#line 204 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_sharing_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_138_138, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144);
    }
#line 205 "mercury_compile_middle_passes.m"
    {
#line 205 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144, (MR_Integer) 162, (MR_String) "structure_sharing", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_142_142, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_148_148);
    }
#line 207 "mercury_compile_middle_passes.m"
    {
#line 207 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_structure_reuse_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_144_144, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150);
    }
#line 208 "mercury_compile_middle_passes.m"
    {
#line 208 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150, (MR_Integer) 163, (MR_String) "structure_reuse", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_148_148, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_154_154);
    }
#line 210 "mercury_compile_middle_passes.m"
    {
#line 210 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unused_args_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_150_150, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156);
    }
#line 211 "mercury_compile_middle_passes.m"
    {
#line 211 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156, (MR_Integer) 165, (MR_String) "unused_args", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_154_154, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_160_160);
    }
#line 213 "mercury_compile_middle_passes.m"
    {
#line 213 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_trail_usage_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_156_156, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162);
    }
#line 214 "mercury_compile_middle_passes.m"
    {
#line 214 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162, (MR_Integer) 167, (MR_String) "trail_usage", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_160_160, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_166_166);
    }
#line 216 "mercury_compile_middle_passes.m"
    {
#line 216 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_unneeded_code_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_162_162, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168);
    }
#line 217 "mercury_compile_middle_passes.m"
    {
#line 217 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168, (MR_Integer) 170, (MR_String) "unneeded_code", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_166_166, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_172_172);
    }
#line 219 "mercury_compile_middle_passes.m"
    {
#line 219 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 3, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_168_168, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreImpPar_15);
    }
#line 221 "mercury_compile_middle_passes.m"
    {
#line 221 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176, (MR_Integer) 172, (MR_String) "pre_implicit_parallelism_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_172_172, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_181_181);
    }
#line 224 "mercury_compile_middle_passes.m"
    {
#line 224 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_implicit_parallelism_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_176_176, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183);
    }
#line 225 "mercury_compile_middle_passes.m"
    {
#line 225 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183, (MR_Integer) 173, (MR_String) "implicit_parallelism", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_181_181, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_187_187);
    }
#line 227 "mercury_compile_middle_passes.m"
    {
#line 227 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_analyse_mm_tabling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_183_183, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189);
    }
#line 228 "mercury_compile_middle_passes.m"
    {
#line 228 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189, (MR_Integer) 185, (MR_String) "mm_tabling_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_187_187, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_193_193);
    }
#line 230 "mercury_compile_middle_passes.m"
    {
#line 230 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_189_189, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195);
    }
#line 231 "mercury_compile_middle_passes.m"
    {
#line 231 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195, (MR_Integer) 200, (MR_String) "granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_193_193, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_199_199);
    }
#line 233 "mercury_compile_middle_passes.m"
    {
#line 233 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_control_distance_granularity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_195_195, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201);
    }
#line 234 "mercury_compile_middle_passes.m"
    {
#line 234 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201, (MR_Integer) 201, (MR_String) "distance_granularity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_199_199, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_205_205);
    }
#line 236 "mercury_compile_middle_passes.m"
    {
#line 236 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_impl_dependent_par_conjs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_201_201, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207);
    }
#line 237 "mercury_compile_middle_passes.m"
    {
#line 237 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207, (MR_Integer) 205, (MR_String) "dependent_par_conj", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_205_205, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_211_211);
    }
#line 239 "mercury_compile_middle_passes.m"
    {
#line 239 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_par_loop_control_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_207_207, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213);
    }
#line 240 "mercury_compile_middle_passes.m"
    {
#line 240 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213, (MR_Integer) 206, (MR_String) "par_loop_control", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_211_211, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_217_217);
    }
#line 242 "mercury_compile_middle_passes.m"
    {
#line 242 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_lco_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_213_213, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219);
    }
#line 243 "mercury_compile_middle_passes.m"
    {
#line 243 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219, (MR_Integer) 210, (MR_String) "lco", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_217_217, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_223_223);
    }
#line 245 "mercury_compile_middle_passes.m"
    {
#line 245 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_float_reg_wrapper_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_219_219, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225);
    }
#line 246 "mercury_compile_middle_passes.m"
    {
#line 246 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225, (MR_Integer) 213, (MR_String) "float_reg_wrapper", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_223_223, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_229_229);
    }
#line 253 "mercury_compile_middle_passes.m"
    {
#line 253 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_front_end__maybe_simplify_10_p_0((MR_Integer) 0, (MR_Integer) 2, top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_225_225, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &top_level__mercury_compile_middle_passes___SimplifySpecsPreProf_16);
    }
#line 255 "mercury_compile_middle_passes.m"
    {
#line 255 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233, (MR_Integer) 215, (MR_String) "pre_prof_transforms_simplify", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_229_229, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_238_238);
    }
#line 261 "mercury_compile_middle_passes.m"
    {
#line 261 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_term_size_prof_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_233_233, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240);
    }
#line 262 "mercury_compile_middle_passes.m"
    {
#line 262 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240, (MR_Integer) 220, (MR_String) "term_size_prof", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_238_238, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_244_244);
    }
#line 267 "mercury_compile_middle_passes.m"
    {
#line 267 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_deep_profiling_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_240_240, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246);
    }
#line 268 "mercury_compile_middle_passes.m"
    {
#line 268 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246, (MR_Integer) 225, (MR_String) "deep_profiling", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_244_244, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_250_250);
    }
#line 273 "mercury_compile_middle_passes.m"
    {
#line 273 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_experimental_complexity_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_246_246, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252);
    }
#line 274 "mercury_compile_middle_passes.m"
    {
#line 274 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252, (MR_Integer) 230, (MR_String) "complexity", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_250_250, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_256_256);
    }
#line 277 "mercury_compile_middle_passes.m"
    {
#line 277 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_region_analysis_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_252_252, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258);
    }
#line 278 "mercury_compile_middle_passes.m"
    {
#line 278 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258, (MR_Integer) 240, (MR_String) "region_analysis", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_256_256, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_262_262);
    }
#line 280 "mercury_compile_middle_passes.m"
    {
#line 280 "mercury_compile_middle_passes.m"
      top_level__mercury_compile_middle_passes__maybe_eliminate_dead_procs_6_p_0(top_level__mercury_compile_middle_passes__Verbose_13, top_level__mercury_compile_middle_passes__Stats_14, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_258_258, top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18);
    }
#line 281 "mercury_compile_middle_passes.m"
    {
#line 281 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, (MR_Integer) 250, (MR_String) "dead_procs", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_262_262, &top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_268_268);
    }
#line 283 "mercury_compile_middle_passes.m"
    {
#line 283 "mercury_compile_middle_passes.m"
      hlds__passes_aux__maybe_dump_hlds_7_p_0(*top_level__mercury_compile_middle_passes__STATE_VARIABLE_HLDS_18, (MR_Integer) 299, (MR_String) "middle_pass", top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_268_268, top_level__mercury_compile_middle_passes__STATE_VARIABLE_DumpInfo_20);
#line 283 "mercury_compile_middle_passes.m"
      return;
    }
#line 112 "mercury_compile_middle_passes.m"
  }
#line 25 "mercury_compile_middle_passes.m"
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module top_level.mercury_compile_middle_passes. */
